#! /usr/bin/env python
import ROOT as r,sys,math,array,os
from optparse import OptionParser
from ROOT import std,RooDataHist
#from array import array
import array
sys.path.insert(0, '../.')

from utils import *

parser = OptionParser()
parser.add_option('--input'   ,action='store',type='string',dest='input'   ,default='mlfit.root',   help='input file')
parser.add_option('--data'    ,action='store',type='string',dest='data'    ,default='base.root',    help='data file')
parser.add_option('--cats'    ,action='store',type='string',dest='cats'    ,default='1,2,3,4,5,6',  help='categories 0,1,2,...')
parser.add_option('--divide'  ,action='store_true',         dest='divide'  ,default=False,          help='ratio') 
parser.add_option('--mass'    ,action='store',              dest='mass'    ,default=125,            help='mass') 
parser.add_option('--blinded' ,action='store_true',         dest='blinded' ,default=False,          help='blinded')
parser.add_option('--nob'     ,action='store_true',         dest='nob'     ,default=True,           help='no run b')
parser.add_option('--jet'     ,action='store',              dest='jet'     ,default='AK8',          help='jet')
parser.add_option('--ratio'   ,action='store_true',         dest='ratio'   ,default=False,          help='ratio or data-mc',metavar='ratio')
parser.add_option('--fail'    ,action='store_true',         dest='fail'    ,default=False,          help='fail region')
parser.add_option('--skipcat' ,action='store',type=int,     dest='skipcat' ,default=1,              help='number of cat to skip')
parser.add_option('--nowz'    ,action='store_true',         dest='nowz'    ,default=False,          help='no w')
parser.add_option('--poly'    ,action='store_true',         dest='poly'    ,default=False,          help='2d')
parser.add_option('--year'    ,action='store',type='string',dest='year'    ,default='',             help='year')
parser.add_option('--validation',action='store',type='string',dest='validation'    ,default='validation.root',    help='validation file')
parser.add_option('--odir',                                 dest='odir'    ,default='./',           help='output directory')
parser.add_option('--out',                                 dest='out'    ,default='outtf.root',     help='output file')

(options,args) = parser.parse_args()

def draw2D(iData,iDataFail,iHists,iHistsFail,iName,iPars,options):
    iMass = options.mass
    iJet = options.jet
    iNoB = options.nob
    iNOWZ = options.nowz
    iYear = options.year

    print 'DRAW ',options.odir

    msd_binBoundaries = []
    pt_binBoundaries = PTBINS[iJet]
    for i in range(0, NBINS[iJet]): msd_binBoundaries.append(RANGE_LO[iJet] + i*5)
    MIN_M['allcats'] = RANGE_LO[iJet]
    MAX_M['allcats'] = RANGE_HI[iJet]

    pass_2d = {}
    fail_2d = {}
    for key,pHist in iHists.iteritems():
        pass_2d[key] = r.TH2F('%s_pass_2d' % key, '%s_pass_2d' % key, len(msd_binBoundaries) - 1,
                                array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                                array.array('d', pt_binBoundaries))
        fail_2d[key] = r.TH2F('%s_fail_2d' % key, '%s_fail_2d' % key, len(msd_binBoundaries) - 1,
                                array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                                array.array('d', pt_binBoundaries))
        for i in range(1, pass_2d[key].GetNbinsX() + 1):
            for j in range(1, pass_2d[key].GetNbinsY() + 1):
                if 'zqq%s'%str(iMass) in key: continue
                if 'zpqq' in key: continue
                pass_2d[key].SetBinContent(i, j, iHists[key].GetBinContent(i))
                fail_2d[key].SetBinContent(i, j, iHistsFail[key].GetBinContent(i))
    pass_2d['data'] = r.TH2F('data_pass_2d' , 'data_pass_2d', len(msd_binBoundaries) - 1,
                             array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                             array.array('d', pt_binBoundaries))
    fail_2d['data'] = r.TH2F('data_fail_2d' , 'data_fail_2d', len(msd_binBoundaries) - 1,
                             array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                             array.array('d', pt_binBoundaries))

    for i in range(1, pass_2d['data'].GetNbinsX() + 1):
        for j in range(1, pass_2d['data'].GetNbinsY() + 1):
            pass_2d['data'].SetBinContent(i, j, iData.GetBinContent(i))
            fail_2d['data'].SetBinContent(i, j, iDataFail.GetBinContent(i))

    print 'min'
    print MIN_M
    print MAX_M

    pass_2d_data_subtract = pass_2d['data'].Clone('data_pass_2d_subtract')
    fail_2d_data_subtract = fail_2d['data'].Clone('data_fail_2d_subtract')
    for shape,pHist in pass_2d.iteritems():
        if shape == 'qcd' or shape == 'data' or shape == 'mc' or shape == 'zpqq': continue
        print 'subtracting shape ',shape
        pass_2d_data_subtract.Add(pass_2d[shape], -1)
        fail_2d_data_subtract.Add(fail_2d[shape], -1)
    ratio_2d_data_subtract = pass_2d_data_subtract.Clone('ratio_2d_subtract')
    ratio_2d_data_subtract.Divide(fail_2d_data_subtract)


    for i in range(1, ratio_2d_data_subtract.GetNbinsX() + 1):
        for j in range(1, ratio_2d_data_subtract.GetNbinsY() + 1):
            massVal = ratio_2d_data_subtract.GetXaxis().GetBinCenter(i)
            ptVal = ratio_2d_data_subtract.GetYaxis().GetBinLowEdge(j) + ratio_2d_data_subtract.GetYaxis().GetBinWidth(j) * 0.3
            rhoVal = r.TMath.Log(massVal * massVal / ptVal / ptVal)
            if rhoVal < RHO_RANGE[iJet][0] or rhoVal > RHO_RANGE[iJet][1]:
                ratio_2d_data_subtract.SetBinContent(i, j, 0)

    if options.validation != '':
        finput = r.TFile.Open(options.validation,'read')
        lpass_2d = {}
        lfail_2d = {}
        for shape,pHist in iHists.iteritems():
            lpass_2d[shape] = r.TH2F('%s_lpass_2d' % shape, '%s_lpass_2d' % shape, len(msd_binBoundaries) - 1,
                                     array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                                     array.array('d', pt_binBoundaries))
            lfail_2d[shape] = r.TH2F('%s_lfail_2d' % shape, '%s_lfail_2d' % shape, len(msd_binBoundaries) - 1,
                                     array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                                     array.array('d', pt_binBoundaries))
            for i in range(1, lpass_2d[shape].GetNbinsX() + 1):
                for j in range(1, lpass_2d[shape].GetNbinsY() + 1):
                    label = shape
                    if shape == 'mc':continue
                    if 'zpqq' in shape: continue
                    if "wqq" in shape or "zqq" in shape:
                        if ("CA15" in iJet and j < 4 and j > 1 and iNOWZ) or 'AK8' in iJet:
                            hpass = finput.Get(label+"_pass_matched_cat%i"%j).Clone()
                            hfail = finput.Get(label+"_fail_matched_cat%i"%j).Clone()
                        else:
                            continue
                    else:
                        hpass = finput.Get(label+"_pass_cat%i"%j).Clone()
                        hfail = finput.Get(label+"_fail_cat%i"%j).Clone()
                    lpass_2d[shape].SetBinContent(i, j, hpass.GetBinContent(i))
                    lfail_2d[shape].SetBinContent(i, j, hfail.GetBinContent(i))
                    lpass_2d[shape].SetBinError(i, j, hpass.GetBinError(i))
                    lfail_2d[shape].SetBinError(i, j, hfail.GetBinError(i))

        for shape,pHist in iHists.iteritems():
            lpass_2d[shape].Sumw2();
            lfail_2d[shape].Sumw2();

        lpass_2d['data'] = r.TH2F('data_lpass_2d', 'data_lpass_2d', len(msd_binBoundaries) - 1,
                                  array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                                  array.array('d', pt_binBoundaries))
        lfail_2d['data'] = r.TH2F('data_lfail_2d', 'data_lfail_2d', len(msd_binBoundaries) - 1,
                                  array.array('d', msd_binBoundaries), len(pt_binBoundaries) - 1,
                                  array.array('d', pt_binBoundaries))
        for i in range(1, lpass_2d['data'].GetNbinsX() + 1):
            for j in range(1, lpass_2d['data'].GetNbinsY() + 1):
                label = 'data_obs'
                hpass = finput.Get(label+"_pass_cat%i"%j).Clone()
                hfail = finput.Get(label+"_fail_cat%i"%j).Clone()
                lpass_2d['data'].SetBinContent(i, j, hpass.GetBinContent(i))
                lfail_2d['data'].SetBinContent(i, j, hfail.GetBinContent(i))
                lpass_2d['data'].SetBinError(i, j, hpass.GetBinError(i))
                lfail_2d['data'].SetBinError(i, j, hfail.GetBinError(i))
        lpass_2d['data'].Sumw2();
        lfail_2d['data'].Sumw2();
        lpass_2d_data_subtract = lpass_2d['data'].Clone('data_pass_2d_subtract')
        lfail_2d_data_subtract = lfail_2d['data'].Clone('data_fail_2d_subtract')

        for shape,pHists in iHists.iteritems():
            if shape == 'qcd' or shape == 'data' or shape =='mc': continue
            lpass_2d_data_subtract.Add(lpass_2d[shape], -1)
            lfail_2d_data_subtract.Add(lfail_2d[shape], -1)
            
        lratio_2d_data_subtract = lpass_2d_data_subtract.Clone('ratio_2d_subtract')
        lratio_2d_data_subtract.Divide(lfail_2d_data_subtract)
    else:
        lratio_2d_data_subtract = None
        lpass_2d_data_subtract = None
        lfail_2d_data_subtract = None

    drawDataTF(ratio_2d_data_subtract,
               pass_2d_data_subtract,fail_2d_data_subtract,
               lratio_2d_data_subtract,
               lpass_2d_data_subtract,lfail_2d_data_subtract,iJet,iPars,options)
    
def drawDataTF(ratio, ipass, ifail, ratioInput, ipassInput, ifailInput, iJet,iPars, options):

    ratiorho,ratiorhograph = getGraphRho('ratiorho',ratio,iJet)
    ipassrho,ipassrhograph = getGraphRho('ipassrho',ipass,iJet)
    ifailrho,ifailrhograph = getGraphRho('ifailrho',ifail,iJet)
    # ratiorhoInput,ratiorhoInputgraph = getGraphRho('ratiorhoInput',ratioInput,iJet)
    # ipassrhoInput,ipassrhoInputgraph = getGraphRho('ipassrhoInput',ipassInput,iJet)
    # ifailrhoInput,ifailrhoInputgraph = getGraphRho('ifailrhoInput',ifailInput,iJet)

    ratio.GetXaxis().SetTitle('m_{SD}^{PUPPI} (GeV)')
    ratio.GetYaxis().SetTitle('p_{T} (GeV)')
    ratio.GetXaxis().SetTitleOffset(1.5)
    ratio.GetYaxis().SetTitleOffset(1.5)
    ratio.GetZaxis().SetTitle('Pass-to-fail Ratio')
    ratio.GetXaxis().SetNdivisions(504)
    ratio.GetYaxis().SetNdivisions(504)
    ratio.GetZaxis().SetNdivisions(504)

    f2params = array.array('d', iPars)
    npar = len(f2params)
    if iJet == "CA15":
        fun = fun25; funrho = fun25rho;
    else:
        fun = fun35; funrho = fun35rho;
        fun = fun35bern; funrho = fun35rhobern;
    if options.year == '2016':
        fun = fun34; funrho = fun34rho;
    print '!!',f2params
    f2 = r.TF2("f2", fun, 
               #ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100.,   
               MIN_M['allcats'] + 10, MAX_M['allcats'],
               ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100., 
               #ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100.,
               #MIN_M['allcats'] + 3.5, MAX_M['allcats'] - 3.5,
               npar)
    f2.SetParameters(f2params)

    f2s = {}
    i0 = 0
    for key,value in MIN_M.iteritems():
        print 'again ',key,MIN_M[key],MAX_M[key]
        f2s[key] = r.TF2("f2"+str(i), fun, 
                         MIN_M[key],MAX_M[key],
                         ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100., 
                         npar)
        f2s[key].SetParameters(f2params)
        print f2s[key],f2s[key].CreateHistogram()
        if i0 == 0:
            f2add = f2s[key].CreateHistogram().Clone()
        else:
            f2add.Add(f2s[key].CreateHistogram().Clone())
    #f2add = r.TF2("add","f22+f23")
    f2rho = r.TF2("f2rho",funrho,
                  #ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100.,
                  RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],
                  ratio.GetYaxis().GetXmin()+25,ratio.GetYaxis().GetXmax()-100,
                  npar)
    f2rho.SetParameters(f2params)


    out = r.TFile(options.odir+"/"+options.out,"RECREATE");
    lH = f2.CreateHistogram().Clone("f2")
    lH.SetTitle("f2")
    lH.SetDirectory(0)
    lH.Write()
    lHrho = f2rho.CreateHistogram().Clone("f2rho")
    lHrho.SetTitle("f2rho")
    lHrho.SetDirectory(0)
    lHrho.Write()
    out.Write()
    out.Close()

    c = r.TCanvas("cTF", "cTF", 1000, 800)
    r.SetOwnership(c, False)
    c.SetFillStyle(4000)
    c.SetFrameFillStyle(1000)
    c.SetFrameFillColor(0)

    f2add.Draw("LEGO1 0")
    c.SaveAs(options.odir+"/addfunc.png")
    c.SaveAs(options.odir+"/addfunc.root")
    
    f2add.Draw("COLZ")
    c.SaveAs(options.odir+"/addfunc_colz.png")
    c.SaveAs(options.odir+"/addfunc_colz.root")

    f2.CreateHistogram().Draw("LEGO1 0")                                                                                                                                           
    c.SaveAs(options.odir+"/tf_func.png")
    c.SaveAs(options.odir+"/tf_func.root")
    f2.CreateHistogram().Draw("COLZ")
    c.SaveAs(options.odir+"/tf_func_colz.png")
    c.SaveAs(options.odir+"/tf_func_colz.root")

    #c.SetLogz(0)                         
    f2rho.CreateHistogram().Draw("LEGO1 0")
    c.SaveAs(options.odir+"/tf_funcrho.png")
    c.SaveAs(options.odir+"/tf_funcrho.root")                                                                                                                                       

    #ratio.Draw('surf1')
    #ratio.Draw('surf2')
    ratio.Draw('LEGO1 0')
    #f2.Draw("surf fb bb same")
    #f2.Draw("surf same")
    #r.gPad.SetTheta(30)
    #r.gPad.SetPhi(30 + 270)
    #r.gPad.Modified()
    #r.gPad.Update()
    c.SaveAs(options.odir+"/tf_frommassfitdistributions.png")
    c.SaveAs(options.odir+"/tf_frommassfitdistributions.root")

    '''
    c.SetLogz(0)
    rhoxy =  r.TF2("rhoxy","log(x*x/y/y)",40,330,500,1500)
    contours = array.array('d',[RHO_RANGE[iJet][0] ,RHO_RANGE[iJet][1]])
    rhoxy.SetContour(2,contours)
    #rhoxy.Draw("CONT Z LIST")
    r.gPad.Update()
    conts = r.gROOT.GetListOfSpecials().FindObject("contours")
    contour0 = conts.At(0)
    rhocurv1 = contour0.First().Clone()
    rhocurv1.SetLineWidth(-503)
    rhocurv1.SetFillStyle(3004)
    rhocurv1.SetFillColor(r.kBlack)
    rhocurv1.SetLineColor(r.kBlack)
    contour0 = conts.At(1)
    rhocurv2 = contour0.First().Clone()
    rhocurv2.SetLineWidth(503)
    rhocurv2.SetFillStyle(3004)
    rhocurv2.SetFillColor(r.kBlack)
    rhocurv2.SetLineColor(r.kBlack)
    mxy = r.TF2("mxy", "sqrt(exp(x))*y",-6.5, -0.5, 400, 1100)
    contours = array.array('d',[MIN_M['allcats'] ,MAX_M['allcats']])
    mxy.SetContour(2,contours)
    #mxy.Draw("CONT Z LIST")
    r.gPad.Update()
    conts = r.gROOT.GetListOfSpecials().FindObject("contours")
    contour0 = conts.At(0)
    mcurv1 = contour0.First().Clone()
    mcurv1.SetLineWidth(503)
    mcurv1.SetFillStyle(3004)
    mcurv1.SetFillColor(r.kBlack)
    mcurv1.SetLineColor(r.kBlack)
    contour0 = conts.At(1)
    mcurv2 = contour0.First().Clone()
    mcurv2.SetLineWidth(-503)
    mcurv2.SetFillStyle(3004)
    mcurv2.SetFillColor(r.kBlack)
    mcurv2.SetLineColor(r.kBlack)
    r.gStyle.SetNumberContours(999)
    '''

    ratiorhograph.GetHistogram().GetYaxis().SetTitle(ratio.GetYaxis().GetTitle())
    ratiorhograph.GetHistogram().GetXaxis().SetTitle('#rho')
    ratiorhograph.GetHistogram().GetZaxis().SetTitle(ratio.GetZaxis().GetTitle())
    ratiorhograph.GetHistogram().GetYaxis().SetNdivisions(505)
    ratiorhograph.GetHistogram().GetXaxis().SetNdivisions(505)
    ratiorhograph.GetHistogram().GetXaxis().SetTitleOffset(1.5)
    ratiorhograph.GetHistogram().GetYaxis().SetTitleOffset(1.5)
    ratiorhograph.SetFillColor(r.kYellow)
    ratiorhograph.SetLineColor(r.kBlack)
    #ratiorhograph.SetLineColor(r.kYellow)
    #ratiorhograph.Draw("surf1")
    #ratiorhograph.Draw("LEGO")
    ratiorhograph.Draw("LEGO1 0")
    f2rho.Draw("surf fb bb same")
    #f2rho.Draw("surf3 same")
    c.SaveAs(options.odir+"/tf_rho.png")
    c.SaveAs(options.odir+"/tf_rho.root")

    ipassrhograph.SetLineColor(r.kBlack)
    ipassrhograph.SetFillColor(r.kYellow)
    ipassrhograph.Draw("LEGO1 0")
    c.SaveAs(options.odir+"/tf_pass_rho.png")
    c.SaveAs(options.odir+"/tf_pass_rho.root")

    ifailrhograph.SetLineColor(r.kBlack)
    ifailrhograph.SetFillColor(r.kYellow)
    ifailrhograph.Draw("LEGO1 0")
    c.SaveAs(options.odir+"/tf_fail_rho.png")
    c.SaveAs(options.odir+"/tf_fail_rho.root")
    
    '''
    ratiorhoInputgraph.Draw("surf1")
    c.SaveAs(options.odir+"/tf_ratioinput_rho.png")
    c.SaveAs(options.odir+"/tf_ratioinput_rho.root")

    ipassrhoInputgraph.Draw("surf1")
    c.SaveAs(options.odir+"/tf_passinput_rho.png")
    c.SaveAs(options.odir+"/tf_passinput_rho.root")

    ifailrhoInputgraph.Draw("surf1")
    c.SaveAs(options.odir+"/tf_failinput_rho.png")
    c.SaveAs(options.odir+"/tf_failinput_rho.root")
    '''

def getGraphRho(iTitle,iHist2D,iJet):
    Npoints = 10
    lHistRho2D = r.TH2D(iTitle,iTitle,Npoints,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],Npoints,iHist2D.GetYaxis().GetXmin(),iHist2D.GetYaxis().GetXmax())
    lHistRho2D.GetYaxis().SetTitle(iHist2D.GetYaxis().GetTitle())
    lHistRho2D.GetXaxis().SetTitle('#rho')
    lHistRho2D.GetZaxis().SetTitle(iHist2D.GetZaxis().GetTitle())
    lHistRho2Dgraph = r.TGraph2D()
    N = -1
    for i in range(1,iHist2D.GetNbinsX()+1):
        for j in range(1,iHist2D.GetNbinsY()+1):
            m = iHist2D.GetXaxis().GetBinCenter(i)
            N+=1
            y = iHist2D.GetYaxis().GetBinCenter(j)
            x = 2*math.log(m/y)
            z = iHist2D.GetBinContent(i,j)
            lHistRho2Dgraph.SetPoint(N,x,y,z)
    return lHistRho2D,lHistRho2Dgraph

if __name__ == "__main__":

    import tdrstyle
    tdrstyle.setTDRStyle()
    r.gStyle.SetPadTopMargin(0.10)
    r.gStyle.SetPadLeftMargin(0.16)
    r.gStyle.SetPadRightMargin(0.10)
    r.gStyle.SetPalette(1)
    r.gStyle.SetPaintTextFormat("1.1f")
    r.gStyle.SetOptFit(0000)
    r.gROOT.SetBatch()
    
    print 'ODIR ',options.odir
    os.system('mkdir -p %s'%options.odir)

    lHFile = r.TFile(options.input)
    lHFile150 = r.TFile("results/fulldatasetupdatedsftry41/AK8/ZQQ_150/mlfit.root")
    lHFile100 =r.TFile("results/fulldatasetupdatedsftry41/AK8/ZQQ_100/mlfit.root")
    lDFile = r.TFile(options.input)

    lDSum=None
    lSum={}
    lDSumFail=None
    lSumFail={}
    lNowz = False
    iC=0
    for cat in options.cats.split(','):
        iC=iC+1
        if int(cat) > 4 and 'CA15' in options.jet and options.nowz:
            lNowz = True
        lPCat = "cat"+str(int(cat))+"_pass_cat"+cat
        lFCat = "cat"+str(int(cat))+"_fail_cat"+cat
        if options.year == '2017':
            lPCat = lPCat.replace('_pass','_2017_pass')
            lFCat = lFCat.replace('_fail','_2017_fail')
        if options.year == '2016':
            lPCat = lPCat.replace('_pass','_2016_pass')
            lFCat = lFCat.replace('_fail','_2016_fail')
        if options.skipcat == 1 and iC == 1: continue
        print lPCat
        lData  = loadData(lDFile,lPCat)
        lHists = loadHist(lHFile,lPCat,options.mass,options.fail,lNowz,options.year)
        lDataFail =  loadData(lDFile,lFCat)
        lHistsFail = loadHist(lHFile,lFCat,options.mass,options.fail,lNowz,options.year)
        ltmp = hist(lData,iC)
        ltmp = add(ltmp,lData)
        MIN_M[str(int(cat))] = -1
        for i in range(1,ltmp.GetNbinsX()+1):
            if MIN_M[str(int(cat))] == -1 and ltmp.GetBinContent(i)!=0:
                MIN_M[str(int(cat))] = ltmp.GetBinLowEdge(i)
            if ltmp.GetBinContent(i)!=0:
                MAX_M[str(int(cat))] = ltmp.GetBinLowEdge(i)
        if not lSum:
            lDSum = hist(lData)
            add(lDSum,lData)
            lSum  = lHists
            lDSumFail = hist(lDataFail)
            add(lDSumFail,lDataFail)
            lSumFail  = lHistsFail
        else:
            add(lDSum,lData)
            for key,value in lHists.iteritems():
                if value is not None:
                    lSum[key].Add(lHists[key])
            add(lDSumFail,lDataFail)
            for key,value in lHistsFail.iteritems():
                if value is not None:
                    lSumFail[key].Add(lHistsFail[key])

                
    if iC == 1: cat = int(options.cats)
    else: cat = 7
    name = 'postfit_s_'+str(options.mass)+'_cat'+str(cat)
    if options.fail:
        name += '_fail'

    pars = []
    rfrb = r.RooFitResult( lHFile.Get("fit_b") )
    rfr = r.RooFitResult( lHFile.Get("fit_s") )

    rfr150 = r.RooFitResult( lHFile150.Get("fit_s") )
    rfr100 = r.RooFitResult( lHFile100.Get("fit_s") )

    lParams = [];
    lParams.append("qcd2017eff");
    lParams.append("p0r1");
    lParams.append("p0r2");
    lParams.append("p0r3");
    lParams.append("p0r4"); ##                                                                                                         
    lParams.append("p0r5");
    lParams.append("p1r0");
    lParams.append("p1r1");
    lParams.append("p1r2"); ##                                                                                                        
    lParams.append("p1r3");
    lParams.append("p1r4");
    lParams.append("p1r5"); ##                                                                                                        
    lParams.append("p2r0");
    lParams.append("p2r1");
    lParams.append("p2r2");
    lParams.append("p2r3");
    lParams.append("p2r4");
    lParams.append("p2r5");
    if options.jet == "AK8":
        lParams.append("p3r0");
        lParams.append("p3r1");
        lParams.append("p3r2");
        lParams.append("p3r3");
        lParams.append("p3r4");
        lParams.append("p3r5");

    parsinv = []
    parsinvup = []
    parsinvdn = []
    lParamsInv = ["qcd2017eff","p1r0","p2r0","p3r0","p0r1","p1r1","p2r1","p3r1","p0r2","p1r2","p2r2","p3r2","p0r3","p1r3","p2r3","p3r3","p0r4","p1r4","p2r4","p3r4","p0r5","p1r5","p2r5","p3r5"]
        
    l2016Params = ["qcdeff","p0r1","p0r2","p0r3","p0r4","p1r0","p1r1","p1r2","p1r3","p1r4","p2r0","p2r1","p2r2","p2r3","p2r4","p3r0","p3r1","p3r2","p3r3","p3r4"]
    l2016ParamsInv = ["qcdeff","p1r0","p2r0","p3r0","p0r1","p1r1","p2r1","p3r1","p0r2","p1r2","p2r2","p3r2","p0r3","p1r3","p2r3","p3r3","p0r4","p1r4","p2r4","p3r4"]

    if options.year == '2017':
        for i0,iP in enumerate(lParams): 
            lParams[i0] = lParams[i0].replace('p','p2017')
            lParams[i0] = lParams[i0].replace('r','r2017')
            lParamsInv[i0] = lParamsInv[i0].replace('p','p2017')
            lParamsInv[i0] = lParamsInv[i0].replace('r','r2017')
    if options.year == '2016':
        lParams = l2016Params
        lParamsInv = l2016ParamsInv

    #print len(lParams),lParams
    lNuisances = ["tqqnormSF","tqqeffSF","scale","scalept","smear","veff","wznormE2","wznormE3","wznormE4","wznormE5","wznormE6","znormE2","znormE3","znormE4","znormE5","znormQ"]
    #rfr.floatParsFinal().Print()
    for p in lNuisances:
        if rfr.floatParsFinal().find(p):
            print "%s = %.3f +/- %.3f    %.3f +/- %.3f   %.3f +/- %.3f   %.3f +/- %.3f"%(p,rfr.floatParsFinal().find(p).getVal(),rfr.floatParsFinal().find(p).getError(),rfrb.floatParsFinal().find(p).getVal(),rfrb.floatParsFinal().find(p).getError(),rfr100.floatParsFinal().find(p).getVal(),rfr100.floatParsFinal().find(p).getError(),rfr150.floatParsFinal().find(p).getVal(),rfr150.floatParsFinal().find(p).getError())
    print "fit_b                 fit_s"
    for p in lParams:
        if rfr.floatParsFinal().find(p):
            print "%s = %.3f +/- %.3f    %.3f +/- %.3f   %.3f +/- %.3f   %.3f +/- %.3f"%(p,rfr.floatParsFinal().find(p).getVal(),rfr.floatParsFinal().find(p).getError(),rfrb.floatParsFinal().find(p).getVal(),rfrb.floatParsFinal().find(p).getError(),rfr100.floatParsFinal().find(p).getVal(),rfr100.floatParsFinal().find(p).getError(),rfr150.floatParsFinal().find(p).getVal(),rfr150.floatParsFinal().find(p).getError())
            pars.append(rfr.floatParsFinal().find(p).getVal())
    for p in lParamsInv:
        if rfr.floatParsFinal().find(p):
            #print p, "=", rfr.floatParsFinal().find(p).getVal(), "+/-", rfr.floatParsFinal().find(p).getError()
            parsinv.append(rfr.floatParsFinal().find(p).getVal())
            parsinvup.append(rfr.floatParsFinal().find(p).getVal()+rfr.floatParsFinal().find(p).getError())
            parsinvdn.append(rfr.floatParsFinal().find(p).getVal()-rfr.floatParsFinal().find(p).getError())
    pars = parsinv
    print 'PARS',pars,len(pars)
    print 'PARSUP',parsinvup,len(parsinvup)
    print 'PARSDN',parsinvdn,len(parsinvdn)
    #draw2D(lDSum,lDSumFail,lSum,lSumFail,name,pars,options)




