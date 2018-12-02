#! /usr/bin/env python
import ROOT as r,sys,math,array,os
from optparse import OptionParser
from ROOT import std,RooDataHist
#from array import array
import array
sys.path.insert(0, '../.')

from plotFitResults import *

parser = OptionParser()
parser.add_option('--input'   ,action='store',type='string',dest='input'   ,default='mlfit.root',   help='input file')
parser.add_option('--data'    ,action='store',type='string',dest='data'    ,default='base.root',    help='data file')
parser.add_option('--cats'    ,action='store',type='string',dest='cats'    ,default='1,2,3,4,5,6',  help='categories 0,1,2,...')
parser.add_option('--divide'  ,action='store_true',         dest='divide'  ,default=False,          help='ratio') 
parser.add_option('--mass'    ,action='store',              dest='mass'    ,default=125,            help='mass') 
parser.add_option('--blinded' ,action='store_true',         dest='blinded' ,default=False,          help='blinded')
parser.add_option('--nob'     ,action='store_true',         dest='nob'     ,default=True,          help='no run b')
parser.add_option('--jet'     ,action='store',              dest='jet'     ,default='AK8',          help='jet')
parser.add_option('--ratio'   ,action='store_true',         dest='ratio'   ,default=False,          help='ratio or data-mc',metavar='ratio')
parser.add_option('--fail'    ,action='store_true',         dest='fail'    ,default=False,          help='fail region')
parser.add_option('--skipcat' ,action='store',type=int,     dest='skipcat' ,default=0,              help='number of cat to skip')
parser.add_option('--nowz'    ,action='store_true',         dest='nowz'    ,default=False,          help='no w')
parser.add_option('--poly'    ,action='store_true',         dest='poly'    ,default=False,          help='2d')

(options,args) = parser.parse_args()
print options

def fun25(x, par):
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0]*(1.0 + par[1]*rho + par[2]*rho*rho + par[3]*rho*rho*rho + par[4]*rho*rho*rho*rho + par[5]*rho*rho*rho*rho*rho)
    poly1 = par[0]*(par[6] + par[7]*rho + par[8]*rho*rho + par[9]*rho*rho*rho + par[10]*rho*rho*rho*rho + par[11]*rho*rho*rho*rho*rho)*x[1]
    poly2 = par[0]*(par[12] + par[13]*rho + par[14]*rho*rho + par[15]*rho*rho*rho + par[16]*rho*rho*rho*rho + par[17]*rho*rho*rho*rho*rho)*x[2]
    return poly0 + poly1 + poly2

def fun25rho(x, par):
    rho = x[0]
    poly0 = par[0]*(1.0 + par[1]*rho + par[2]*rho*rho + par[3]*rho*rho*rho + par[4]*rho*rho*rho*rho + par[5]*rho*rho*rho*rho*rho)
    poly1 = par[0]*(par[6] + par[7]*rho + par[8]*rho*rho + par[9]*rho*rho*rho + par[10]*rho*rho*rho*rho + par[11]*rho*rho*rho*rho*rho)*x[1]
    poly2 = par[0]*(par[12] + par[13]*rho + par[14]*rho*rho + par[15]*rho*rho*rho + par[16]*rho*rho*rho*rho + par[17]*rho*rho*rho*rho*rho)*x[2]
    return poly0+poly1+poly2

def fun35(x, par):
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0]*(1.0 + par[1]*rho + par[2]*rho*rho + par[3]*rho*rho*rho + par[4]*rho*rho*rho*rho + par[5]*rho*rho*rho*rho*rho)
    poly1 = par[0]*(par[6] + par[7]*rho + par[8]*rho*rho + par[9]*rho*rho*rho + par[10]*rho*rho*rho*rho + par[11]*rho*rho*rho*rho*rho)*x[1]
    poly2 = par[0]*(par[12] + par[13]*rho + par[14]*rho*rho + par[15]*rho*rho*rho + par[16]*rho*rho*rho*rho + par[17]*rho*rho*rho*rho*rho)*x[2]
    poly3 = par[0]*(par[18] + par[19]*rho + par[20]*rho*rho + par[21]*rho*rho*rho + par[22]*rho*rho*rho*rho + par[23]*rho*rho*rho*rho*rho)*x[3]
    return poly0 + poly1 + poly2 + poly3

def fun35rho(x, par):
    rho = x[0]
    poly0 = par[0]*(1.0 + par[1]*rho + par[2]*rho*rho + par[3]*rho*rho*rho + par[4]*rho*rho*rho*rho + par[5]*rho*rho*rho*rho*rho)
    poly1 = par[0]*(par[6] + par[7]*rho + par[8]*rho*rho + par[9]*rho*rho*rho + par[10]*rho*rho*rho*rho + par[11]*rho*rho*rho*rho*rho)*x[1]
    poly2 = par[0]*(par[12] + par[13]*rho + par[14]*rho*rho + par[15]*rho*rho*rho + par[16]*rho*rho*rho*rho + par[17]*rho*rho*rho*rho*rho)*x[2]
    poly3 = par[0]*(par[18] + par[19]*rho + par[20]*rho*rho + par[21]*rho*rho*rho + par[22]*rho*rho*rho*rho + par[23]*rho*rho*rho*rho*rho)*x[3]
    return poly0+poly1+poly2+poly3

def draw2D(iData,iDataFail,iHists,iHistsFail,iName,iMass,iJet,iPars,iNoB,iNOWZ=False):
    print 'RHO_Range',RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],iJet
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
                #print 'cat%i'%j,pt_binBoundaries[j-1]
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
            #print 'cat%i'%j
            pass_2d['data'].SetBinContent(i, j, iData.GetBinContent(i))
            fail_2d['data'].SetBinContent(i, j, iDataFail.GetBinContent(i))

    pass_2d_data_subtract = pass_2d['data'].Clone('data_pass_2d_subtract')
    fail_2d_data_subtract = fail_2d['data'].Clone('data_fail_2d_subtract')
    for shape,pHist in pass_2d.iteritems():
        if shape == 'qcd' or shape == 'data' or shape == 'mc': continue
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

    finput = r.TFile.Open("validation.root",'read')
    lpass_2d = {}
    lfail_2d = {}
    print iHists
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
                #print 'SHAPE',shape
                if shape == 'mc':continue
                if 'zpqq' in shape: continue
                if "wqq" in shape or "zqq" in shape:
                    #print shape,label+"_pass_matched_cat%i"%j
                    if ("CA15" in iJet and j < 4 and j > 1 and iNOWZ) or 'AK8' in iJet:
                        hpass = finput.Get(label+"_pass_matched_cat%i"%j).Clone()
                        hfail = finput.Get(label+"_fail_matched_cat%i"%j).Clone()
                    else:
                        continue
                else:
                    #print shape,label+"_pass_cat%i"%j
                    hpass = finput.Get(label+"_pass_cat%i"%j).Clone()
                    hfail = finput.Get(label+"_fail_cat%i"%j).Clone()
                #if 'zqq%s'%(str(iMass)) in shape: continue

                lpass_2d[shape].SetBinContent(i, j, hpass.GetBinContent(i))
                lfail_2d[shape].SetBinContent(i, j, hfail.GetBinContent(i))
                lpass_2d[shape].SetBinError(i, j, hpass.GetBinError(i))
                lfail_2d[shape].SetBinError(i, j, hfail.GetBinError(i))

    for shape,pHist in iHists.iteritems():
        #print shape,lpass_2d[shape].Integral()
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
    #print 'Pass %.3f'%lpass_2d['data'].Integral()
    #print 'Fail %.3f'%lfail_2d['data'].Integral()

    lpass_2d_data_subtract = lpass_2d['data'].Clone('data_pass_2d_subtract')
    lfail_2d_data_subtract = lfail_2d['data'].Clone('data_fail_2d_subtract')
    #print 'Pass Data %.3f'%lpass_2d_data_subtract.Integral()
    #print 'Fail Data %.3f'%lfail_2d_data_subtract.Integral()

    for shape,pHists in iHists.iteritems():
        if shape == 'qcd' or shape == 'data' or shape =='mc': continue
        #print 'Subtracting pass %s, integral %.3f'%(shape,lpass_2d[shape].Integral())
        #print 'Subtracting fail %s, integral %.3f'%(shape,lfail_2d[shape].Integral())
        lpass_2d_data_subtract.Add(lpass_2d[shape], -1)
        lfail_2d_data_subtract.Add(lfail_2d[shape], -1)
    #print 'Pass subtracted %.3f'%lpass_2d_data_subtract.Integral()
    #print 'Fail subtracted %.3f'%lfail_2d_data_subtract.Integral()

    lratio_2d_data_subtract = lpass_2d_data_subtract.Clone('ratio_2d_subtract')
    lratio_2d_data_subtract.Divide(lfail_2d_data_subtract)
    
    drawDataTF(ratio_2d_data_subtract,
               pass_2d_data_subtract,fail_2d_data_subtract,
               lratio_2d_data_subtract,
               lpass_2d_data_subtract,lfail_2d_data_subtract,iJet,iPars)
    
def drawDataTF(ratio, ipass, ifail, ratioInput, ipassInput, ifailInput, iJet,iPars):

    ratiorho,ratiorhograph = getGraphRho('ratiorho',ratio,iJet)
    ipassrho,ipassrhograph = getGraphRho('ipassrho',ipass,iJet)
    ifailrho,ifailrhograph = getGraphRho('ifailrho',ifail,iJet)
    ratiorhoInput,ratiorhoInputgraph = getGraphRho('ratiorhoInput',ratioInput,iJet)
    ipassrhoInput,ipassrhoInputgraph = getGraphRho('ipassrhoInput',ipassInput,iJet)
    ifailrhoInput,ifailrhoInputgraph = getGraphRho('ifailrhoInput',ifailInput,iJet)

    ratio.GetXaxis().SetTitle('m_{SD}^{PUPPI} (GeV)')
    ratio.GetYaxis().SetTitle('p_{T} (GeV)')
    ratio.GetXaxis().SetTitleOffset(1.5)
    ratio.GetYaxis().SetTitleOffset(1.5)
    ratio.GetZaxis().SetTitle('Pass-to-fail Ratio')
    ratio.GetXaxis().SetNdivisions(504)
    ratio.GetYaxis().SetNdivisions(504)
    ratio.GetZaxis().SetNdivisions(504)

    f2params = array.array('d', pars)
    npar = len(f2params)
    if iJet == "CA15":
        fun = fun25; funrho = fun25rho;
    else:
        fun = fun35; funrho = fun35rho;
    f2 = r.TF2("f2", fun, MIN_M['allcats'] + 3.5, MAX_M['allcats'] - 3.5,
               ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100., npar)
    f2.SetParameters(f2params)
    f2rho = r.TF2("f2",funrho,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],ratio.GetYaxis().GetXmin(),ratio.GetYaxis().GetXmax(),npar)
    f2rho.SetParameters(f2params)

    c = r.TCanvas("cTF", "cTF", 1000, 800)
    r.SetOwnership(c, False)
    c.SetFillStyle(4000)
    c.SetFrameFillStyle(1000)
    c.SetFrameFillColor(0)
    ratio.Draw('surf1')
    f2.Draw("surf fb bb same")
    r.gPad.SetTheta(30)
    r.gPad.SetPhi(30 + 270)
    r.gPad.Modified()
    r.gPad.Update()
    tag1 = r.TLatex(0.67, 0.92, "41.1 fb^{-1} (2017) (13 TeV)")
    tag1.SetNDC();
    tag1.SetTextFont(42)
    tag1.SetTextSize(0.045)
    tag2 = r.TLatex(0.17, 0.92, "CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = r.TLatex(0.25, 0.92, "Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(0.055)
    tag3.SetTextSize(0.045)
    tag1.Draw()
    tag2.Draw()
    tag3.Draw()
    c.SaveAs("tf_frommassfitdistributions.png")
    c.SaveAs("tf_frommassfitdistributions.root")

    c.SetLogz(0)
    rhoxy =  r.TF2("rhoxy","log(x*x/y/y)",30,600,400,1100)
    contours = array.array('d',[RHO_RANGE[iJet][0] ,RHO_RANGE[iJet][1]])
    rhoxy.SetContour(2,contours)
    rhoxy.Draw("CONT Z LIST")
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
    mxy.Draw("CONT Z LIST")
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

    ratiorhograph.GetHistogram().GetYaxis().SetTitle(ratio.GetYaxis().GetTitle())
    ratiorhograph.GetHistogram().GetXaxis().SetTitle('#rho')
    ratiorhograph.GetHistogram().GetZaxis().SetTitle(ratio.GetZaxis().GetTitle())
    ratiorhograph.GetHistogram().GetYaxis().SetNdivisions(505)
    ratiorhograph.GetHistogram().GetXaxis().SetNdivisions(505)
    ratiorhograph.GetHistogram().GetXaxis().SetTitleOffset(1.5)
    ratiorhograph.GetHistogram().GetYaxis().SetTitleOffset(1.5)
    ratiorhograph.Draw("surf1")
    f2rho.Draw("surf fb bb same")

    tag1.Draw()
    tag2.Draw()
    tag3.Draw()

    c.SaveAs("tf_rho.png")
    c.SaveAs("tf_rho.root")

    ipassrhograph.Draw("surf1")
    c.SaveAs("tf_pass_rho.png")
    c.SaveAs("tf_pass_rho.root")

    ifailrhograph.Draw("surf1")
    c.SaveAs("tf_fail_rho.png")
    c.SaveAs("tf_fail_rho.root")

    ratiorhoInputgraph.Draw("surf1")
    c.SaveAs("tf_ratioinput_rho.png")
    c.SaveAs("tf_ratioinput_rho.root")

    ipassrhoInputgraph.Draw("surf1")
    c.SaveAs("tf_passinput_rho.png")
    c.SaveAs("tf_passinput_rho.root")

    ifailrhoInputgraph.Draw("surf1")
    c.SaveAs("tf_failinput_rho.png")
    c.SaveAs("tf_failinput_rho.root")
    #makeTF(iPars, ratio,pass_2d_data_subtract,fail_2d_data_subtract,
    #       lratio_2d_data_subtract,lpass_2d_data_subtract,lfail_2d_data_subtract,iJet)

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
            x = math.log(m*m/(y*y))
            z = iHist2D.GetBinContent(i,j)
            #print iTitle,N, x, y, z
            lHistRho2Dgraph.SetPoint(N,x,y,z)
    return lHistRho2D,lHistRho2Dgraph

def makeTF(pars, ratio, ipass, ifail, ratioInput, ipassInput, ifailInput, iJet):
    ratio.GetXaxis().SetTitle('m_{SD}^{PUPPI} (GeV)')
    ratio.GetYaxis().SetTitle('p_{T} (GeV)')

    ratio.GetXaxis().SetTitleOffset(1.5)
    ratio.GetYaxis().SetTitleOffset(1.5)
    ratio.GetZaxis().SetTitle('Pass-to-fail Ratio')
    ratio.GetXaxis().SetNdivisions(504)
    ratio.GetYaxis().SetNdivisions(504)
    ratio.GetZaxis().SetNdivisions(504)

    f2params = array.array('d', pars)
    npar = len(f2params)
    #print 'using fun3'
    #fun = fun3
    #funrho = fun3rho
    print 'using fun25'
    fun = fun25
    funrho = fun25rho
    f2 = r.TF2("f2", fun, MIN_M['allcats'] + 3.5, MAX_M['allcats'] - 3.5,
               ratio.GetYaxis().GetXmin() + 25., ratio.GetYaxis().GetXmax() - 100., npar)
    f2.SetParameters(f2params)

    c = r.TCanvas("cTF", "cTF", 1000, 800)
    r.SetOwnership(c, False)
    c.SetFillStyle(4000)
    c.SetFrameFillStyle(1000)
    c.SetFrameFillColor(0)
    ratio.Draw('surf1')
    f2.Draw("surf fb bb same")

    r.gPad.SetTheta(30)
    r.gPad.SetPhi(30 + 270)
    r.gPad.Modified()
    r.gPad.Update()

    tag1 = r.TLatex(0.67, 0.92, "41.1 fb^{-1} (13 TeV)")
    tag1.SetNDC();
    tag1.SetTextFont(42)
    tag1.SetTextSize(0.045)
    tag2 = r.TLatex(0.17, 0.92, "CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = r.TLatex(0.25, 0.92, "Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(0.055)
    tag3.SetTextSize(0.045)
    tag1.Draw()
    tag2.Draw()
    tag3.Draw()

    c.SaveAs("tf_shape.pdf")
    #c.SaveAs(options.odir + "/mlfit/tf.C")
    
    c.SetLogz(0)
    Npoints = 10
    f2graph = r.TGraph2D()
    N = -1
    for i in range(Npoints+1):
        for j in range(Npoints+1):
            N+=1
            #x = ratio.GetXaxis().GetXmin() + i*(ratio.GetXaxis().GetXmax()-ratio.GetXaxis().GetXmin())/Npoints                              
            x = MIN_M['allcats'] + i*(MAX_M['allcats']-MIN_M['allcats'])/Npoints
            y = ratio.GetYaxis().GetXmin() + j*(ratio.GetYaxis().GetXmax()-ratio.GetYaxis().GetXmin())/Npoints
            z = f2.Eval(x,y)
            print x, y, z
            #if math.log(x*x/(y*y)) < -6 or math.log(x*x/(y*y)) > -2.1:                                                                      
            #    z = 0                                                                                                                       
            #print x, y, z                                                                                                                   
            f2graph.SetPoint(N,x,y,z)

    rhoxy =  r.TF2("rhoxy","log(x*x/y/y)",30,600,400,1100)
    contours = array.array('d',[RHO_RANGE[iJet][0] ,RHO_RANGE[iJet][1]])
    rhoxy.SetContour(2,contours)
    rhoxy.Draw("CONT Z LIST")
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
    mxy.Draw("CONT Z LIST")
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

    ratiorho = r.TH2D('ratiorho','ratiorho',Npoints,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],Npoints,ratio.GetYaxis().GetXmin(),ratio.GetYaxis().GetXmax())
    ratiorho.GetYaxis().SetTitle(ratio.GetYaxis().GetTitle())
    ratiorho.GetXaxis().SetTitle('#rho')
    ratiorho.GetZaxis().SetTitle(ratio.GetZaxis().GetTitle())
    ratiorhograph = r.TGraph2D()
    N = -1
    for i in range(1,ratio.GetNbinsX()+1):
        for j in range(1,ratio.GetNbinsY()+1):
            m = ratio.GetXaxis().GetBinCenter(i)
            N+=1
            y = ratio.GetYaxis().GetBinCenter(j)
            x = math.log(m*m/(y*y))
            z = ratio.GetBinContent(i,j)
            print 'RATIO ',N, x, y, z
            ratiorhograph.SetPoint(N,x,y,z)

    ipassrho = r.TH2D('ipassrho','ipassrho',Npoints,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],Npoints,ipass.GetYaxis().GetXmin(),ipass.GetYaxis().GetXmax())
    ipassrho.GetYaxis().SetTitle(ipass.GetYaxis().GetTitle())
    ipassrho.GetXaxis().SetTitle('#rho')
    ipassrho.GetZaxis().SetTitle(ipass.GetZaxis().GetTitle())
    ipassrhograph = r.TGraph2D()
    N = -1
    for i in range(1,ipass.GetNbinsX()+1):
        for j in range(1,ipass.GetNbinsY()+1):
            m = ipass.GetXaxis().GetBinCenter(i)
            N+=1
            y = ipass.GetYaxis().GetBinCenter(j)
            x = math.log(m*m/(y*y))
            z = ipass.GetBinContent(i,j)
            print 'PASS ',N,x,y,z
            ipassrhograph.SetPoint(N,x,y,z)

    ifailrho = r.TH2D('ifailrho','ifailrho',Npoints,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],Npoints,ifail.GetYaxis().GetXmin(),ifail.GetYaxis().GetXmax())
    ifailrho.GetYaxis().SetTitle(ifail.GetYaxis().GetTitle())
    ifailrho.GetXaxis().SetTitle('#rho')
    ifailrho.GetZaxis().SetTitle(ifail.GetZaxis().GetTitle())
    ifailrhograph = r.TGraph2D()
    N = -1
    for i in range(1,ifail.GetNbinsX()+1):
        for j in range(1,ifail.GetNbinsY()+1):
            m = ifail.GetXaxis().GetBinCenter(i)
            N+=1
            y = ifail.GetYaxis().GetBinCenter(j)
            x = math.log(m*m/(y*y))
            z = ifail.GetBinContent(i,j)
            print 'FAIL ',N,x,y,z
            ifailrhograph.SetPoint(N,x,y,z)

    ratiorhoInput = r.TH2D('ratiorho','ratiorho',Npoints,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],Npoints,ratioInput.GetYaxis().GetXmin(),ratioInput.GetYaxis().GetXmax())
    ratiorhoInput.GetYaxis().SetTitle(ratioInput.GetYaxis().GetTitle())
    ratiorhoInput.GetXaxis().SetTitle('#rho')
    ratiorhoInput.GetZaxis().SetTitle(ratioInput.GetZaxis().GetTitle())
    ratiorhoInputgraph = r.TGraph2D()
    N = -1
    for i in range(1,ratioInput.GetNbinsX()+1):
        for j in range(1,ratioInput.GetNbinsY()+1):
            m = ratioInput.GetXaxis().GetBinCenter(i)
            N+=1
            y = ratioInput.GetYaxis().GetBinCenter(j)
            x = math.log(m*m/(y*y))
            z = ratioInput.GetBinContent(i,j)
            print 'RATIO ',N, x, y, z
            ratiorhoInputgraph.SetPoint(N,x,y,z)

    f2rho = r.TF2("f2",funrho,RHO_RANGE[iJet][0],RHO_RANGE[iJet][1],ratio.GetYaxis().GetXmin(),ratio.GetYaxis().GetXmax(),npar)
    f2rho.SetParameters(f2params)
    f2rhograph = r.TGraph2D()
    N = -1
    for i in range(Npoints+1):
        for j in range(Npoints+1):
            N+=1
            x = RHO_RANGE[iJet][0] + i*(RHO_RANGE[iJet][1]-RHO_RANGE[iJet][0])/Npoints
            y = ratio.GetYaxis().GetXmin() + j*(ratio.GetYaxis().GetXmax()-ratio.GetYaxis().GetXmin())/Npoints
            z = f2rho.Eval(x,y)
            m = math.sqrt(math.exp(x))*y
            #if m < 40 or m > 201:                                                                                                           
            #    z = 0                                                                                                                       
            #print x, y, z                                                                                                                   
            f2rhograph.SetPoint(N,x,y,z)
    #ratiorho.Draw('surf1')                                                                                                                  
    ratiorhograph.GetHistogram().GetYaxis().SetTitle(ratio.GetYaxis().GetTitle())
    ratiorhograph.GetHistogram().GetXaxis().SetTitle('#rho')
    ratiorhograph.GetHistogram().GetZaxis().SetTitle(ratio.GetZaxis().GetTitle())
    ratiorhograph.GetHistogram().GetYaxis().SetNdivisions(505)
    ratiorhograph.GetHistogram().GetXaxis().SetNdivisions(505)
    ratiorhograph.GetHistogram().GetXaxis().SetTitleOffset(1.5)
    ratiorhograph.GetHistogram().GetYaxis().SetTitleOffset(1.5)
    ratiorhograph.Draw("surf1")
    f2rho.Draw("surf fb bb same")

    tag1 = r.TLatex(0.67,0.92,"41.1 fb^{-1} (13 TeV)")
    tag1.SetNDC(); tag1.SetTextFont(42)
    tag1.SetTextSize(0.045)
    tag2 = r.TLatex(0.15,0.92,"CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = r.TLatex(0.25,0.92,"Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(0.055)
    tag3.SetTextSize(0.045)
    tag1.Draw()
    tag2.Draw()
    tag3.Draw()

    c.SaveAs("tf_rho.pdf")
    c.SaveAs("tf_rho.C")
    c.SaveAs("tf_rho.root")

    ipassrhograph.Draw("surf1")
    c.SaveAs("pass_rho.pdf")
    c.SaveAs("pass_rho.root")

    ifailrhograph.Draw("surf1")
    c.SaveAs("fail_rho.pdf")
    c.SaveAs("fail_rho.root")

    ratiorhoInputgraph.Draw("surf1")
    c.SaveAs("ratioinput_rho.pdf")
    c.SaveAs("ratioinput_rho.root")

    # to plot TF2                                                                                                                            
    #f2.Draw("colz")                                                                                                                         
    c.SetRightMargin(0.20)
    # to plot TGraph:                                                                                                                        
    f2graph.Draw("colz")
    f2graph.GetXaxis().SetRangeUser(MIN_M['allcats'],MAX_M['allcats'])
    rhocurv1.Draw('same')
    rhocurv2.Draw('same')

    f2graph.GetHistogram().GetXaxis().SetTitle(ratio.GetXaxis().GetTitle())
    f2graph.GetHistogram().GetYaxis().SetTitle(ratio.GetYaxis().GetTitle())
    f2graph.GetHistogram().GetZaxis().SetTitle(ratio.GetZaxis().GetTitle())
    f2graph.GetHistogram().GetZaxis().SetTitleOffset(1.3)
    tag1 = r.TLatex(0.67,0.92,"41.1 fb^{-1} (13 TeV)")
    tag1.SetNDC(); tag1.SetTextFont(42)
    tag1.SetTextSize(0.045)
    tag2 = r.TLatex(0.15,0.92,"CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = r.TLatex(0.25,0.92,"Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(0.055)
    tag3.SetTextSize(0.045)
    tag1.Draw()
    tag2.Draw()
    tag3.Draw()
    pave_param = r.TPaveText(0.17,0.72,0.27,0.82,"NDC")
    pave_param.SetTextFont(42)
    pave_param.SetFillColor(0)
    pave_param.SetBorderSize(0)
    pave_param.SetFillStyle(0)
    pave_param.SetTextAlign(11)
    pave_param.SetTextSize(0.045)
    text = pave_param.AddText("#rho = #minus%.1f"%(-1.*RHO_RANGE[iJet][0]))
    text.SetTextAngle(75)
    text.SetTextAlign(22)
    text.SetTextSize(0.045)
    pave_param.Draw()

    pave_param2 = r.TPaveText(0.62,0.18,0.72,0.28,"NDC")
    pave_param2.SetTextFont(42)
    pave_param2.SetFillColor(0)
    pave_param2.SetBorderSize(0)
    pave_param2.SetFillStyle(0)
    pave_param2.SetTextAlign(11)
    pave_param2.SetTextSize(0.045)
    text2 = pave_param2.AddText("#rho = #minus%.1f"%(-1.*RHO_RANGE[iJet][1]))
    text2.SetTextAngle(40)
    text2.SetTextAlign(22)
    text2.SetTextSize(0.045)
    pave_param2.Draw()

    c.SaveAs("tf_msdcolz.pdf")
    c.SaveAs("tf_msdcolz.C")

    # to plot TF2                                                                                                                            
    #f2rho.Draw("colz")                                                                                                                      
    # to plot TGraph:                                                                                                                        
    #f2rhograph.SetContours(999)                                                                                                             
    f2rhograph.Draw("colz")
    mcurv1.Draw('same')
    mcurv2.Draw('same')
    f2rhograph.GetHistogram().GetXaxis().SetTitle('#rho')
    f2rhograph.GetHistogram().GetYaxis().SetTitle(ratio.GetYaxis().GetTitle())
    f2rhograph.GetHistogram().GetZaxis().SetTitle(ratio.GetZaxis().GetTitle())
    f2rhograph.GetHistogram().GetZaxis().SetTitleOffset(1.3)
    Tag1 = r.TLatex(0.67,0.92,"41.1 fb^{-1} (13 TeV)")
    tag1.SetNDC(); tag1.SetTextFont(42)
    tag1.SetTextSize(0.045)
    tag2 = r.TLatex(0.15,0.92,"CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = r.TLatex(0.25,0.92,"Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(0.055)
    tag3.SetTextSize(0.045)
    tag1.Draw()
    tag2.Draw()
    tag3.Draw()


    pave_param = r.TPaveText(0.18,0.5,0.28,0.6,"NDC")
    pave_param.SetTextFont(42)
    pave_param.SetFillColor(0)
    pave_param.SetBorderSize(0)
    pave_param.SetFillStyle(0)
    pave_param.SetTextAlign(11)
    pave_param.SetTextSize(0.045)
    text = pave_param.AddText("m_{SD} = %i GeV"%MIN_M['allcats'])
    text.SetTextAngle(-70)
    text.SetTextAlign(22)
    text.SetTextSize(0.045)
    pave_param.Draw()

    pave_param2 = r.TPaveText(0.57,0.65,0.67,0.75,"NDC")
    pave_param2.SetTextFont(42)
    pave_param2.SetFillColor(0)
    pave_param2.SetBorderSize(0)
    pave_param2.SetFillStyle(0)
    pave_param2.SetTextAlign(11)
    pave_param2.SetTextSize(0.045)
    text2 = pave_param2.AddText("m_{SD} = %i GeV"%MAX_M['allcats'])
    text2.SetTextAngle(-72)
    text2.SetTextAlign(22)
    text2.SetTextSize(0.045)
    pave_param2.Draw()

    c.SaveAs("tf_rhocolz.pdf")
    c.SaveAs("tf_rhocolz.C")

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

    lHFile = r.TFile(options.input)
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
        print iC,lNowz,cat
        if options.skipcat == 1:
            #if iC== 1: continue
            lData  = loadData(lDFile,"cat"+str(int(cat))+"_pass_cat"+cat)
            lHists = loadHist(lHFile,"cat"+str(int(cat))+"_pass_cat"+cat,options.mass,options.fail,lNowz)
            lDataFail =  loadData(lDFile,"cat"+str(int(cat))+"_fail_cat"+cat)
            lHistsFail = loadHist(lHFile,"cat"+str(int(cat))+"_fail_cat"+cat,options.mass,options.fail,lNowz)
        else:
            lData  = loadData(lDFile,"cat"+str(cat)+"_pass_cat"+cat)
            lHists = loadHist(lHFile,"cat"+str(cat)+"_pass_cat"+cat,options.mass,options.fail,lNowz)
            lDataFail =  loadData(lDFile,"cat"+str(cat)+"_fail_cat"+cat)
            lHistsFail = loadHist(lHFile,"cat"+str(cat)+"_fail_cat"+cat,options.mass,options.fail,lNowz)
        if not lSum:
            lDSum = hist(lData)
            add(lDSum,lData)
            lSum  = lHists
            print lDSum.GetName(),lDSum.Integral()
            lDSumFail = hist(lDataFail)
            add(lDSumFail,lDataFail)
            lSumFail  = lHistsFail
            print 'First time ',lSumFail,' mc %.3f '%lSumFail['mc'].Integral()
        else:
            add(lDSum,lData)
            print lDSum.Integral(),lData.Integral()
            for key,value in lHists.iteritems():
                lSum[key].Add(lHists[key])
                print key,lHists[key].Integral()
            add(lDSumFail,lDataFail)
            print lDSumFail.Integral(),lDataFail.Integral()
            for key,value in lHistsFail.iteritems():
                lSumFail[key].Add(lHistsFail[key])
                print key,lHistsFail[key].Integral()
            print 'Not first time ',lSumFail,' mc %.3f '%lSumFail['mc'].Integral()

                
    if iC == 1: cat = int(options.cats)
    else: cat = 7
    name = 'postfit_s_'+str(options.mass)+'_cat'+str(cat)
    if options.fail:
        name += '_fail'
    print 'CAT', iC 

    pars = []
    rfr = r.RooFitResult( lHFile.Get("fit_b") )
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
    print len(lParams)
    for p in lParams:
        #rfr.floatParsFinal().Print()
        print "tqqnormSF =", rfr.floatParsFinal().find("tqqnormSF").getVal(),  "+/-", rfr.floatParsFinal().find("tqqnormSF").getError()
        print "tqqeffSF = ", rfr.floatParsFinal().find("tqqeffSF").getVal(),  "+/-", rfr.floatParsFinal().find("tqqeffSF").getError()
        if rfr.floatParsFinal().find(p):
            print p, "=", rfr.floatParsFinal().find(p).getVal(), "+/-", rfr.floatParsFinal().find(p).getError()
            pars.append(rfr.floatParsFinal().find(p).getVal())
    draw2D(lDSum,lDSumFail,lSum,lSumFail,name,options.mass,options.jet,pars,options.nob,options.nowz)


