#! /usr/bin/env python
import ROOT as r,sys,math,array,os
from optparse import OptionParser
from ROOT import std,RooDataHist
#from array import array
import array
sys.path.insert(0, '../.')

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
parser.add_option('--skipcat' ,action='store',type=int,     dest='skipcat' ,default=0,              help='number of cat to skip')
parser.add_option('--nowz'    ,action='store_true',         dest='nowz'    ,default=False,          help='no w')
parser.add_option('--isMuonCR',action='store_true',         dest='isMuonCR',default=True,           help='muon CR')
parser.add_option('--fitb'    ,action='store_true',         dest='fitb'    ,default=False,          help='fit background only')
parser.add_option('--prefit'  ,action='store_true',         dest='prefit'  ,default=False,          help='pre fit')
parser.add_option("--lumi"    ,action='store',type=float,   dest="lumi"    ,default=41.1,           help="luminosity", metavar="lumi")
parser.add_option("--onecat"  ,action='store',type=int,     dest='onecat'  ,default=0,              help='single cat fit')
parser.add_option('--forcomb', action='store',type='string',dest='forcomb' ,default="",             help='combine with 2016')
parser.add_option('--odir',                                 dest='odir'    ,default='./',           help='output directory',metavar='odir')
parser.add_option('--template',action='store_true',         dest='template',default=False,          help='template')
parser.add_option('--multsig', action='store',type='float', dest='multsig', default=1.0,            help='multiply signal to make visible on plot')

(options,args) = parser.parse_args()
print options

RANGE_LO,RANGE_HI,NBINS = {},{},{};
RANGE_LO['AK8'] = 30
RANGE_HI['AK8'] = 330
NBINS['AK8'] = 60
RANGE_LO['CA15'] = 60
RANGE_HI['CA15'] = 500
NBINS['CA15'] = 80

RHO_RANGE = {}
RHO_RANGE['AK8'] = [-5.5,-2.1]
#RHO_RANGE['AK8'] = [-5.2,-2.1]
RHO_RANGE['CA15'] = [-4.39,-1]

PTBINS = {}
PTBINS['AK8'] = [525,575,625,700,800,1500]
PTBINS['CA15'] = [575,625,700,800,1500]
#PTBINS['CA15'] = [500, 575, 700, 800, 900, 1000]

MIN_M = {} #                                                                                                                           
MAX_M = {}
def end():
    if __name__ == '__main__':
        rep = ''
        while not rep in [ 'q', 'Q','a',' ' ]:
            rep = raw_input( 'enter "q" to quit: ' )
            if 1 < len(rep):
                rep = rep[0]


def fun3(x, par):
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0] * (    1.0 +  par[1] * rho +  par[2] * rho * rho +  par[3] * rho * rho * rho)
    poly1 = par[0] * ( par[4] +  par[5] * rho +  par[6] * rho * rho +  par[7] * rho * rho * rho) * x[1]
    poly2 = par[0] * ( par[8] +  par[9] * rho + par[10] * rho * rho + par[11] * rho * rho * rho) * x[1] * x[1]
    poly3 = par[0] * (par[12] + par[13] * rho + par[14] * rho * rho + par[15] * rho * rho * rho) * x[1] * x[1] * x[1]
    poly4 = par[0] * (par[16] + par[17] * rho + par[18] * rho * rho + par[19] * rho * rho * rho) * x[1] * x[1] * x[1] * x[1]
    return poly0 + poly1 + poly2 + poly3 + poly4


def fun3rho(x, par):
    rho = x[0]
    poly0 = par[0] * (    1.0 +  par[1] * rho +  par[2] * rho * rho +  par[3] * rho * rho * rho)
    poly1 = par[0] * ( par[4] +  par[5] * rho +  par[6] * rho * rho +  par[7] * rho * rho * rho) * x[1]
    poly2 = par[0] * ( par[8] +  par[9] * rho + par[10] * rho * rho + par[11] * rho * rho * rho) * x[1] * x[1]
    poly3 = par[0] * (par[12] + par[13] * rho + par[14] * rho * rho + par[15] * rho * rho * rho) * x[1] * x[1] * x[1]
    poly4 = par[0] * (par[16] + par[17] * rho + par[18] * rho * rho + par[19] * rho * rho * rho) * x[1] * x[1] * x[1] *x[1]
    return poly0 + poly1 + poly2 + poly3 + poly4

def fun2(x, par):
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0] * (    1.0 +  par[1] * rho +  par[2] * rho * rho)
    poly1 = par[0] * ( par[3] +  par[4] * rho +  par[5] * rho * rho) * x[1]
    poly2 = par[0] * ( par[6] +  par[7] * rho +  par[8] * rho * rho) * x[1] * x[1]
    poly3 = par[0] * ( par[9] + par[10] * rho +  par[11] * rho * rho) * x[1] * x[1] * x[1]
    poly4 = par[0] * (par[12] + par[13] * rho +  par[14] * rho * rho) * x[1] * x[1] * x[1] * x[1]
    return poly0 + poly1 + poly2 + poly3 + poly4

def fun25rho(x, par):
    rho = x[0]
    poly0 = par[0] * (    1.0 +  par[1] * x[1] +  par[2] * x[1] * x[1] )
    poly1 = par[0] * ( par[3] +  par[4] * x[1] +  par[5] * x[1] * x[1] ) * rho
    poly2 = par[0] * ( par[6] +  par[7] * x[1] +  par[8] * x[1] * x[1] ) * rho * rho
    poly3 = par[0] * ( par[9] + par[10] * x[1] + par[11] * x[1] * x[1] ) * rho * rho * rho
    poly4 = par[0] * (par[12] + par[13] * x[1] + par[14] * x[1] * x[1] ) * rho * rho * rho * rho
    poly5 = par[0] * (par[15] + par[16] * x[1] + par[17] * x[1] * x[1] ) * rho * rho * rho * rho * rho
    return poly0 + poly1 + poly2 + poly3 + poly4 + poly5

def fun25(x, par):
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0] * (    1.0 +  par[1] * x[1] +  par[2] * x[1] * x[1] )
    poly1 = par[0] * ( par[3] +  par[4] * x[1] +  par[5] * x[1] * x[1] ) * rho
    poly2 = par[0] * ( par[6] +  par[7] * x[1] +  par[8] * x[1] * x[1] ) * rho * rho
    poly3 = par[0] * ( par[9] + par[10] * x[1] + par[11] * x[1] * x[1] ) * rho* rho * rho
    poly4 = par[0] * (par[12] + par[13] * x[1] + par[14] * x[1] * x[1] ) * rho * rho * rho * rho
    poly5 = par[0] * (par[15] + par[16] * x[1] + par[17] * x[1] * x[1] ) * rho * rho * rho * rho * rho
    return poly0 + poly1 + poly2 + poly3 + poly4 + poly5

def divide(iData,iHists):
    lPass = -1
    iAllP = []
    iHistsP = []
    iSumHP = iHists["mc"].Clone()                                                                                                        
    ltot = iSumHP.Clone()
    ltmp = iData.Clone()
    ltmp.Divide(ltot)
    iAllP.append(ltmp);
    iAllP.extend(iHistsP)
    return iAllP[0]

def drawTemplates(iHists,iTags,iName,iFail,iMax):
    iHists[0].GetXaxis().SetTitle("m_{SD} (GeV)")
    lC0 = r.TCanvas("c","c",900,800);
    iHists[0].GetYaxis().SetTitle("Events / 5 GeV")
    iHists[0].GetXaxis().SetTitleOffset(2)
    iHists[0].GetYaxis().SetTitleOffset(1.3)
    iHists[0].GetYaxis().SetTitleSize(0.04)
    iHists[0].GetYaxis().SetLabelSize(0.035)
    iHists[0].GetXaxis().SetLabelOffset(0.05)
    iHists[0].GetYaxis().SetRangeUser(0.,iMax)
    #iHists[0].GetYaxis().SetRangeUser(0.,iHists[0].GetMaximum()*1.2)
    iHists[0].Draw("hist")
    lLegend = r.TLegend(0.33,0.73,0.88,0.88)
    lLegend.SetFillColor(0)
    lLegend.SetBorderSize(0)
    lLegend.SetTextFont(42)
    lLegend.SetTextSize(0.03)
    for i0,pHist in enumerate(iHists):
        pHist.SetLineWidth(2)
        if iFail:
            if pHist.GetName().find("fail") > -1:
                if not "qcd" in pHist.GetName():
                    if "(B)" in iTags[i0]: 
                        pHist.SetLineColor(50+i0)
                        pHist.SetMarkerColor(50+i0)
                    pHist.Draw("histsames") 
                else:
                    pHist.SetFillColor(0)
                    pHist.SetFillStyle(1001)
                    pHist.SetLineColor(50+i0)
                    pHist.SetLineStyle(1)
                    pHist.SetMarkerStyle(1)
                    pHist.SetMarkerColor(50+i0)
                    pHist.Draw("pesames")
                lLegend.AddEntry(pHist,iTags[i0],"l")
        else:
            if pHist.GetName().find("pass") > -1:
                if not "qcd" in pHist.GetName():
                    if "(B)" in iTags[i0]:
                        pHist.SetLineColor(50+i0)
                        pHist.SetMarkerColor(50+i0)
                    pHist.Draw("histsames")
                else:
                    pHist.SetFillColor(0)
                    pHist.SetFillStyle(1001)
                    pHist.SetLineColor(50+i0)
                    pHist.SetLineStyle(1)
                    pHist.SetMarkerStyle(1)
                    pHist.SetMarkerColor(50+i0)
                    pHist.Draw("pesames")
                lLegend.AddEntry(pHist,iTags[i0],"l")
    lLegend.Draw()
    lC0.Modified()
    lC0.Update()
    os.system('mkdir -p %s'%options.odir)
    lC0.SaveAs(options.odir+'/'+iName+"_templates.png")
    #lC0.SaveAs(options.odir+'/'+iName+"_templates.pdf")
    #lC0.SaveAs(options.odir+'/'+iName+"_templates.root")


def draw(iData,iHists,iName,iCats,iMass,iRatio,iJet,iNoB,iFail=False,iNOWZ=False,iB=False,iPrefit=False,iMultsig=1.0):
    iData.GetXaxis().SetTitle("m_{SD} (GeV)")
    lC0 = r.TCanvas("c","c",900,800);
    p12 = r.TPad("p12","p12",0.0,0.3,1.0,1.0);
    p22 = r.TPad("p22","p22",0.0,0.0,1.0,0.3);
    p12.SetBottomMargin(0.02);
    p22.SetTopMargin(0.05);
    p22.SetBottomMargin(0.3);
    iSumHP = iHists["mc"].Clone()
    if not iNOWZ:
        iSumHP.Add(iHists["wqq"])
        iSumHP.Add(iHists["zqq"])
    iSumHP.Add(iHists["tqq"])
    ksScoreP = iData.KolmogorovTest( iHists["mc"] )
    chiScoreP = iData.Chi2Test( iHists["mc"] , "UW P")
    print 'pscore ',chiScoreP
    print 'ksscore ',ksScoreP

    lC0.cd()
    p12.Draw(); p12.cd();
    iData.GetYaxis().SetTitle("Events / 5 GeV")
    iData.GetXaxis().SetTitleOffset(2)
    iData.GetYaxis().SetTitleOffset(1.3)
    iData.GetYaxis().SetTitleSize(0.04)
    iData.GetYaxis().SetLabelSize(0.035)
    iData.GetXaxis().SetLabelOffset(0.05)

    iData.GetYaxis().SetRangeUser(0.,iData.GetMaximum()*0.95)
    #print iData.GetXaxis().GetXmin(), iData.GetXaxis().GetXmax()
    #iData.GetXaxis().SetRangeUser(RANGE_LO[iJet],RAcchNGE_HI[iJet])

    if iCats ==1:
        tagpt = 'p_{T}: 475-525 GeV'
        if iJet== 'CA15':
            tagpt = 'p_{T}: 500-575 GeV'
    elif iCats ==2: 
        #tagpt = 'p_{T}: 500-600 GeV'
        tagpt = 'p_{T}: 525-575 GeV'
        if iJet== 'CA15':
            #tagpt = 'p_{T}: 550-600 GeV'
            #tagpt = 'p_{T}: 575-600 GeV'
            #tagpt = 'p_{T}: 575-700 GeV'
            tagpt = 'p_{T}: 575-625 GeV'
    elif iCats ==3: 
        tagpt = 'p_{T}: 575-625 GeV'
        if iJet== 'CA15':
            #tagpt = 'p_{T}: 600-700 GeV'
            #tagpt = 'p_{T}: 700-800 GeV'
            tagpt = 'p_{T}: 625-700 GeV'  
    elif iCats ==4: 
        tagpt = 'p_{T}: 625-700 GeV'
        if iJet== 'CA15':
            tagpt = 'p_{T}: 700-800 GeV'
            #tagpt = 'p_{T}: 800-900 GeV'
    elif iCats ==5: 
        tagpt = 'p_{T}: 700-800 GeV'
        if iJet== 'CA15':
            tagpt = 'p_{T}: 800-1500 GeV'
            #tagpt = 'p_{T}: 900-1000 GeV'
    elif iCats ==6: 
        #tagpt = 'p_{T}: 900-1000 GeV'
        tagpt = 'p_{T}: 800-1500 GeV'
        if iJet== 'CA15':
            tagpt = 'p_{T}: 900-1000 GeV'
    else:
        #iData.GetYaxis().SetRangeUser(0.,iData.GetMaximum()*1.1)
        tagpt = 'All p_{T} categories'

    iData.Draw("ex0")
    for key,pHist in iHists.iteritems():
        print key,pHist
        #pHist.GetXaxis().SetRangeUser(RANGE_LO[iJet],RANGE_HI[iJet])
        if pHist is None: continue
        pHist.SetLineWidth(2)
        if key == 'zpqq': pHist.Scale(iMultsig) 
        if iFail:
            if pHist.GetName().find("fail") > -1:
            #if pHist.GetName().find("tqq") > -1: continue
                pHist.Draw("hist sames") if "qcd" not in key else pHist.Draw("e2 sames")
        else:
            if pHist.GetName().find("pass") > -1:
                pHist.Draw("hist sames") if "qcd" not in key else pHist.Draw("e2 sames")
    
    iData.Draw("pex0 sames")
    #lLegend = r.TLegend(0.55, 0.5, 0.75, 0.88)
    lLegend = r.TLegend(0.33,0.73,0.88,0.88)
    lLegend.SetFillColor(0)
    lLegend.SetBorderSize(0)
    lLegend.SetTextFont(42)
    lLegend.SetTextSize(0.037)
    lLegend.SetNColumns(2)
    lLegend.AddEntry(iData,"Data","px0e")
    if not iNOWZ:
        lLegend.AddEntry(iHists["wqq"],"W(qq)+jets","l")

    lLegend.AddEntry(iHists["mc"],"Total SM pred.","l")
    if not iNOWZ:
        lLegend.AddEntry(iHists["zqq"],"Z(qq)+jets","l")

    lLegend.AddEntry(iHists["qcd"],"Multijet pred.","lf")
    lLegend.AddEntry(iHists["tqq"],"t#bar{t}/single-t (qq)+jets","l")
    if not (iB or iPrefit) and iHists["zpqq"] != None:
        if iMultsig == 1.0: lLegend.AddEntry(iHists["zpqq"],"Z'(qq), g_{q'}=1/6, m_{Z'}=%s GeV"%(str(iMass)),"lf")
        else:               lLegend.AddEntry(iHists["zpqq"],"Z'(qq), g_{q'}=1/6, m_{Z'}=%s GeV (#times%.0f)"%(str(iMass),iMultsig),"lf")
    lLegend.Draw()
    
    tag1 = r.TLatex(0.64,0.92,"%.1f fb^{-1} (2017) (13 TeV)"%options.lumi)
    tag1.SetNDC(); tag1.SetTextFont(42)
    tag1.SetTextSize(0.045)
    tag2 = r.TLatex(0.2,0.8,"CMS")
    tag2.SetNDC()
    tag2.SetTextFont(62)
    tag3 = r.TLatex(0.24,0.92,"Preliminary")
    tag3.SetNDC()
    tag3.SetTextFont(52)
    tag2.SetTextSize(0.07)
    tag3.SetTextSize(0.045)
    tag1.Draw()
    tag2.Draw()
    #tag3.Draw()
    tag4 = r.TLatex(0.67,0.42,"p_{value} = %.2f"%chiScoreP)
    tag4.SetNDC()
    tag4.SetTextSize(0.030)
    #tag4.Draw()
    #tag5 = r.TLatex(0.57,0.42,"ks = %.2f"%ksScoreP)
    #tag5.SetNDC()
    #tag5.SetTextSize(0.030)
    #tag5.Draw()
    tag6 = r.TLatex(0.705,0.422,tagpt)
    #tag6 = r.TLatex(0.695,0.422,tagpt)
    tag6.SetNDC()
    tag6.SetTextFont(42)
    tag6.SetTextSize(0.037)
    tag6.Draw()
    iData.SetMaximum(iData.GetMaximum()*1.2)

    #lC0.cd(1).RedrawAxis()
    lC0.cd()
    p22.Draw(); p22.cd();
    p22.SetGrid();

    def getDataGraphFromHist(h_data):    
        g_data = r.TGraphAsymmErrors(h_data)    
        alpha = 1-0.6827
        for i in range(0,g_data.GetN()):
            N = g_data.GetY()[i]
            L = 0
            if N!=0:
                L = r.Math.gamma_quantile(alpha/2,N,1.)
            U = r.Math.gamma_quantile_c(alpha/2,N+1,1)
            g_data.SetPointEYlow(i, (N-L))
            g_data.SetPointEYhigh(i, (U-N))
            g_data.SetPoint(i, g_data.GetX()[i], N)
        return g_data
            
    g_data = getDataGraphFromHist(iData)

    if iRatio:
        iRatios1 = divide(iData,iHists)
        iRatios1.GetYaxis().SetTitle("Data/Prediction")
        iRatios1.GetYaxis().SetRangeUser(0.5,1.5)
        #iRatios1.GetXaxis().SetRangeUser(RANGE_LO[iJet],RANGE_HI[iJet])
        if iCats ==1:
            iRatios1.GetYaxis().SetRangeUser(0.85,1.15)
        elif iCats ==2:
            iRatios1.GetYaxis().SetRangeUser(0.85,1.15)
        elif iCats ==3:
            iRatios1.GetYaxis().SetRangeUser(0.85,1.15)
        elif iCats ==4:
            iRatios1.GetYaxis().SetRangeUser(0.8,1.2)
        elif iCats ==5:
            iRatios1.GetYaxis().SetRangeUser(0.8,1.2)
        elif iCats ==6:
            iRatios1.GetYaxis().SetRangeUser(0.65,1.35)
        else:
            iRatios1.GetYaxis().SetRangeUser(0.9,1.1)
        iRatioGraph = r.TGraphAsymmErrors(iRatios1)
    else:
        h = r.TH1F("h", "AK8 m_{SD} (GeV);", NBINS[iJet], RANGE_LO[iJet], RANGE_HI[iJet])
        iRatios1 = h.Clone('iRatio%s' % str(iCats))
        maxdata=1
        hqcd = iHists["qcd"].Clone("hqcd%s"%str(iCats))
        hqcd.Add(iHists["tqq"])
        for i in range(iRatios1.GetNbinsX()):
            if hqcd.GetBinContent(i + 1) > 0:
                value_data = iData.GetBinContent(i + 1)
                value_fit = hqcd.GetBinContent(i + 1)                
                err_low_data = g_data.GetEYlow()[i]
                err_high_data = g_data.GetEYhigh()[i]
                err_tot_data = 0
                if (value_fit > value_data):
                    err_tot_data = err_high_data  
                else:
                    err_tot_data = err_low_data
                #print value_data
                #print value_fit
                iRatios1.SetBinContent(i + 1, (value_data - value_fit) / err_tot_data)
                if (value_data - value_fit) / err_tot_data > maxdata : maxdata = (value_data - value_fit) / err_tot_data
                iRatios1.SetBinError(i + 1, 1)  # data.GetBinError(i+1)+hqcd.GetBinError(i+1) )
            iRatioGraph = r.TGraphAsymmErrors(iRatios1)
        iRatios1.SetTitle("; m_{SD} (GeV); #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}")
        iRatios1.SetMaximum(1.5)
        iRatios1.SetMinimum(0.)
        iRatios1.GetYaxis().SetRangeUser(-5, maxdata*1.5)

    iRatios1.GetYaxis().SetNdivisions(5)
    iRatios1.GetYaxis().SetTitleSize(0.09)
    iRatios1.GetXaxis().SetTitleSize(0.12)
    iRatios1.GetXaxis().SetTitleOffset(1)
    iRatios1.GetYaxis().SetTitleOffset(0.45)
    iRatios1.GetXaxis().SetLabelOffset(0.007)
    iRatios1.GetYaxis().SetLabelSize(0.09)
    iRatios1.GetXaxis().SetLabelSize(0.1)
    iRatios1.GetXaxis().SetTitle("m_{SD} (GeV)")

    if iRatio:
        iRatios1.Draw("px0e")
        iOneWithErrors = iHists["mc"].Clone();
        iOneWithErrors.Divide(iHists["mc"].Clone());
        for i in range(iOneWithErrors.GetNbinsX()): 
            if iHists["mc"].GetBinContent(i+1) > 0: 
                #print iHists["mc"].GetBinError(i+1)/iHists["mc"].GetBinContent(i+1)
                iOneWithErrors.SetBinError( i+1, iHists["mc"].GetBinError(i+1)/iHists["mc"].GetBinContent(i+1) );
            else: iOneWithErrors.SetBinError( i+1, 0.014);
        iOneWithErrors.SetFillStyle(3001);
        iOneWithErrors.SetFillColor(r.kAzure - 5)
        iOneWithErrors.SetLineColor(r.kAzure - 5)
        iOneWithErrors.SetMarkerSize(0);
        iOneWithErrors.SetLineWidth(2);
        #iOneWithErrors.Draw(" sames");                                                                                                                                         
        iOneWithErrors.Draw("e2 sames");
        iOneWithErrors.SetMarkerSize(0);
        iOneWithErrors.SetLineWidth(2);
        iOneWithErrors.Draw(" sames");
        iRatios1.Draw("px0e sames")
    else:
        iRatios1.Draw('pez')
        iOneWithErrors = iHists["mc"].Clone();
        iOneWithErrors.Add((-1) * iHists["mc"].Clone())
        #iOneWithErrors.GetXaxis().SetRangeUser(RANGE_LO[iJet],RANGE_HI[iJet])
        iOneWithErrors.SetLineColor(r.kGray+2)
        iOneWithErrors.SetFillColor(r.kGray+2)

        sigHistResiduals = []
        sigHists = []
        if not (iB or iPrefit):
            if iHists["zpqq"] != None:
                sigHists.append(iHists["zpqq"])
        if not iNOWZ:
            if iHists["zqq"] != None and iHists["wqq"] != None:
                sigHists.append(iHists["wqq"])
                sigHists.append(iHists["zqq"])        
        for sigHist in sigHists:
            sigHistResidual = sigHist.Clone('sigHistResidual%s%s' % (sigHist.GetName(),str(iCats)))
            #sigHistResidual.GetXaxis().SetRangeUser(RANGE_LO[iJet],RANGE_HI[iJet])
            for bin in range (0,g_data.GetN()):
                value_data = g_data.GetY()[bin]
                err_tot_data = g_data.GetEYhigh()[bin]
                value_signal = sigHist.GetBinContent(bin+1)
                ## Signal residuals
                if err_tot_data>0:                
                    sig_residual = (value_signal) / err_tot_data
                else:
                    sig_residual = 0                                
                ## Fill histo with residuals
                sigHistResidual.SetBinContent(bin+1,sig_residual)
            sigHistResiduals.append(sigHistResidual)
        hstack = r.THStack("hstack","hstack")
        for sigHistResidual in sorted(sigHistResiduals,key=lambda (v): v.Integral()):
            hstack.Add(sigHistResidual) 
            #    sigHistResidual.Draw("hist sames")
        hstack.Draw("hist sames")    
        iOneWithErrorsLine = iOneWithErrors.Clone('iOneWithErrorsLine%s' %str(iCats))
        iOneWithErrorsLine.SetFillStyle(0)
        iOneWithErrorsLine.Draw("hist sames")
        iRatioGraph.Draw("pezsame")

    #lC0.cd(1);
    #p12.cd().RedrawAxis()
    lC0.Modified()
    lC0.Update()

    os.system('mkdir -p %s'%options.odir)
    lC0.SaveAs(options.odir+'/'+iName+".png")
    lC0.SaveAs(options.odir+'/'+iName+".pdf")
    lC0.SaveAs(options.odir+'/'+iName+".root")
    #end()

def norm(iFile,iH,iName) :
    lNorms = iName.split("/")[0].replace("shapes","norm")
    lArg = iFile.Get(lNorms).Clone()
    lName = iName.replace(iName.split("/")[0]+"/","")
    lVal = r.RooRealVar(lArg.find(lName)).getVal();
    iH.Scale(lVal/iH.Integral())
    
def load(iFile,iName,iNorm=True):
    print iName
    lHist = iFile.Get(iName).Clone()
    if iNorm:
        norm(iFile,lHist,iName)
    lHist.SetName(iName.replace("/","_"))
    lHist.SetTitle(iName.replace("/","_"))
    return lHist
    
def loadHist(iFile,iCat,iMass,iFail=False,iNOWZ=False,iComb=False,iS=True,iPreFit=False):
    lHists = {}
    if iPreFit: lFit = "shapes_prefit/"+iCat+"/"
    else:
        lFit = "shapes_fit_s/"+iCat+"/" if iS else "shapes_fit_b/"+iCat+"/"
    if iComb:
        lHists["qcd"] = load(iFile,lFit+"qcd2017")
    else:
        lHists["qcd"] = load(iFile,lFit+"qcd")
    if not iFail:
        lHists["qcd"].SetFillColor(r.kGray+3)
        lHists["qcd"].SetFillStyle(3001)
    lHists["qcd"].SetLineStyle(2)
    lHists["qcd"].SetLineWidth(0)
    
    if not iNOWZ:
        try:
            lHists["wqq"] = load(iFile,lFit+"wqq")
            lHists["wqq"].SetLineColor(r.kGreen+3)
            lHists["wqq"].SetLineStyle(3)
            lHists["wqq"].SetLineWidth(2)
            
            lHists["zqq"] = load(iFile,lFit+"zqq")
            lHists["zqq"].SetLineColor(r.kRed+1)
            lHists["zqq"].SetLineStyle(4)
            lHists["zqq"].SetLineWidth(2)
        except:
            lHists["wqq"] = None
            lHists["zqq"] = None

    lHists["tqq"] = load(iFile,lFit+"tqq")
    if iS:
        try:
            lHists["zpqq"] = load(iFile,lFit+"zqq"+str(iMass))
            lHists["zpqq"].SetLineColor(r.kPink + 7)
            lHists["zpqq"].SetFillColor(r.kPink + 7)
            lHists["zpqq"].SetLineStyle(5)
            lHists["zpqq"].SetLineStyle(2)
        except:
            lHists["zpqq"] = None
    lHists["tqq"].SetLineWidth(2)
    lHists["tqq"].SetLineColor(r.kMagenta+3)

    if iComb:
        lHists["mc"] = load(iFile,lFit+"qcd2017")
    else:
        lHists["mc"] = load(iFile,lFit+"qcd")
    if not iNOWZ:
        if lHists["wqq"] is not None and lHists["zqq"] is not None:
            lHists["mc"].Add(lHists["wqq"])
            lHists["mc"].Add(lHists["zqq"])
    lHists["mc"].Add(lHists["tqq"])
    lHists["mc"].SetLineWidth(3)
    lHists["mc"].SetLineColor(r.kAzure - 5)

    # if not iNOWZ:
    #     print lHists["wqq"], lHists["wqq"].Integral(),lHists["wqq"].GetXaxis().GetXmin(), lHists["wqq"].GetXaxis().GetXmax()
    #     print "wqq"
    #     for i in range(1,lHists["wqq"].GetNbinsX()+1):                                                                                                                                                                         
    #         print i,lHists["wqq"].GetBinContent(i)                                                                                                                                                                             
    #     print "zqq"
    #     for i in range(1,lHists["zqq"].GetNbinsX()+1):
    #         print i,lHists["zqq"].GetBinContent(i)
    #     print "tqq"
    #     for i in range(1,lHists["tqq"].GetNbinsX()+1):
    #         print i,lHists["tqq"].GetBinContent(i)
    #     print lHists["zqq"], lHists["zqq"].Integral(),lHists["zqq"].GetXaxis().GetXmin(), lHists["zqq"].GetXaxis().GetXmax()
    # print lHists["tqq"], lHists["tqq"].Integral(),lHists["tqq"].GetXaxis().GetXmin(), lHists["tqq"].GetXaxis().GetXmax()
    # print lHists["zpqq"], lHists["zpqq"].Integral(),lHists["zpqq"].GetXaxis().GetXmin(), lHists["zpqq"].GetXaxis().GetXmax()
    # print lHists["mc"], lHists["mc"].Integral(),lHists["mc"].GetXaxis().GetXmin(), lHists["mc"].GetXaxis().GetXmax()
    # for i in range(1,lHists["mc"].GetNbinsX()+1):
    #     print i,lHists["mc"].GetBinContent(i)

    return lHists

def loadData(iDataFile,iCat):
    lData = load(iDataFile,"shapes_fit_s/"+str(iCat)+"/data",False)
    lData.GetXaxis().SetTitle("m_{J} (GeV)")
    lData.SetMarkerStyle(20)
    return lData

def hist(iData):
    lX = []
    for i0 in range(iData.GetN()):
        lX.append(-iData.GetErrorXlow(i0)+iData.GetX()[i0])
    lX.append(iData.GetX()[iData.GetN()-1]+iData.GetErrorXhigh(iData.GetN()-1))
    lHist = r.TH1F("dataSum","dataSum",iData.GetN(),array.array('d',lX))
    lHist.Sumw2()
    return lHist

def add(iSum,iData):
    for i0 in range(iData.GetN()):
        iSum.Fill(iData.GetX()[i0],iData.GetY()[i0]*(iData.GetErrorXlow(i0)+iData.GetErrorXhigh(i0)))
        #iSum.SetBinContent(i0,iSum.GetBinContent(i0)+iData.GetY()[i0])
    for i0 in range(1,iSum.GetNbinsX()+1):
        iSum.SetBinError(i0,math.sqrt(iSum.GetBinContent(i0)))
    return iSum

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
    lSum={}; lSumB = {};
    lDSumFail=None
    lSumFail={}
    lCh = "ch"
    iC=0
    if options.isMuonCR: lCh = "cat"
    lFits = True
    if options.prefit: lFits = False
    for cat in options.cats.split(','):
        iC=iC+1
        lCat = lCh+str(int(cat))+options.forcomb+"_pass_cat"+cat
        if options.skipcat == 1:
            lCat = lCh+str(int(cat))+options.forcomb+"_pass_cat"+cat
        if options.onecat == 1:
            lCat = "pass_cat"+cat
        if options.fail:
            lCat = lCat.replace('pass','fail')
        lData  = loadData(lDFile,lCat)
        lHistsB = {}
        if '2017' in options.forcomb:
            lHists = loadHist(lHFile,lCat,options.mass,options.fail,options.nowz,True,lFits,options.prefit)
            if not options.prefit:
                lHistsB = loadHist(lHFile,lCat,options.mass,options.fail,options.nowz,True,False)
        else:
            lHists = loadHist(lHFile,lCat,options.mass,options.fail,options.nowz,False,lFits,options.prefit)
            if not options.prefit:
                lHistsB = loadHist(lHFile,lCat,options.mass,options.fail,options.nowz,False,False,False)
        if not lSum:
            lDSum = hist(lData)
            add(lDSum,lData)
            lSum  = lHists
            lSumB = lHistsB
        else:
            add(lDSum,lData)
            for key,value in lHists.iteritems():
                if lHists[key]!=None:
                    lSum[key].Add(lHists[key])
            for key,value in lHistsB.iteritems():
                if not options.prefit:
                    if lHistsB[key]!=None:
                        lSumB[key].Add(lHistsB[key])

    if iC == 1: cat = int(options.cats)
    else: cat = 7
    name = 'postfit_s_'+str(options.mass)+options.forcomb+'_cat'+str(cat)
    if options.prefit:
        name = 'prefit_'+str(options.mass)+options.forcomb+'_cat'+str(cat)
    if options.fitb:
        name = 'postfit_b_'+str(options.mass)+options.forcomb+'_cat'+str(cat)
    if options.ratio:
        name+= "_ratio"
    if options.fail:
        name += '_fail'
    if options.fitb:
        draw(lDSum,lSumB,name,cat,options.mass,options.ratio,options.jet,options.lumi,options.fail,options.nowz,options.fitb,options.prefit,options.multsig)
    else:
        draw(lDSum,lSum,name,cat,options.mass,options.ratio,options.jet,options.lumi,options.fail,options.nowz,options.fitb,options.prefit,options.multsig)
    if options.template:
        lHists = [lSum["wqq"],lSum["zqq"]]
        lHistsB = [lSumB["wqq"],lSumB["zqq"]]
        lTags = ["W(qq)+jets (S)","Z(qq)+jets (S)"]
        lTagsB = ["W(qq)+jets (B)","Z(qq)+jets (B)"]
        if not options.fitb and lSum["zpqq"] != None:
            lHists.append(lSum["zpqq"])
            lTags.append("Z'(qq) m_{Z'}=%s"%options.mass)
        pMax = 2200 if options.fail else 1000
        #drawTemplates(lHists,lTags,name+"_wz",options.fail,pMax)
        drawTemplates(lHists+lHistsB,lTags+lTagsB,name+"_wz_all",options.fail,pMax)
        lHists = [lSum["qcd"]]; lHistsB = [lSumB["qcd"]];
        lTags = ["QCD (S)"]; lTagsB = ["QCD (B)"]
        pMax = lDSum.GetMaximum()*1.1
        #drawTemplates(lHists,lTags,name+"_qcd",options.fail,pMax)
        drawTemplates(lHists+lHistsB,lTags+lTagsB,name+"_qcd_all",options.fail,pMax)   
