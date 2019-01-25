#! /usr/bin/env python                                                                                                                                                               
import ROOT as r,sys,math,array,os
from optparse import OptionParser
from ROOT import std,RooDataHist
#from array import array                                                                                                                                                             
import array
sys.path.insert(0, '../.')

RANGE_LO,RANGE_HI,NBINS = {},{},{};
RANGE_LO['AK8'] = 30
RANGE_HI['AK8'] = 330
NBINS['AK8'] = 60
RANGE_LO['CA15'] = 60
RANGE_HI['CA15'] = 500
NBINS['CA15'] = 80

RHO_RANGE = {}
RHO_RANGE['AK8'] = [-5.5,-2.1]
RHO_RANGE['CA15'] = [-4.39,-1]

PTBINS = {}
#PTBINS['AK8'] = [525,575,625,700,800,1500]
PTBINS['AK8'] = [525,575,625,700,800,1000]
PTBINS['CA15'] = [575,625,700,800,1500]

MIN_M = {}
MAX_M = {}

def add(iSum,iData):
    for i0 in range(iData.GetN()):
        iSum.Fill(iData.GetX()[i0],iData.GetY()[i0]*(iData.GetErrorXlow(i0)+iData.GetErrorXhigh(i0)))
    for i0 in range(1,iSum.GetNbinsX()+1):
        iSum.SetBinError(i0,math.sqrt(iSum.GetBinContent(i0)))
    return iSum

def hist(iData,iT=''):
    lX = []
    for i0 in range(iData.GetN()):
        lX.append(-iData.GetErrorXlow(i0)+iData.GetX()[i0])
    lX.append(iData.GetX()[iData.GetN()-1]+iData.GetErrorXhigh(iData.GetN()-1))
    lHist = r.TH1F("dataSum"+str(iT),"dataSum"+str(iT),iData.GetN(),array.array('d',lX))
    lHist.Sumw2()
    return lHist

def loadData(iDataFile,iCat):
    lData = load(iDataFile,"shapes_fit_s/"+str(iCat)+"/data",False)
    lData.GetXaxis().SetTitle("m_{J} (GeV)")
    lData.SetMarkerStyle(20)
    return lData

def load(iFile,iName,iNorm=False):
    lHist = iFile.Get(iName).Clone()
    if iNorm:
        norm(iFile,lHist,iName)
    lHist.SetName(iName.replace("/","_"))
    lHist.SetTitle(iName.replace("/","_"))
    return lHist

def norm(iFile,iH,iName) :
    lNorms = iName.split("/")[0].replace("shapes","norm")
    lArg = iFile.Get(lNorms).Clone()
    lName = iName.replace(iName.split("/")[0]+"/","")
    lVal = r.RooRealVar(lArg.find(lName)).getVal();
    iH.Scale(lVal/iH.Integral())

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

def loadHist(iFile,iCat,iMass,iFail=False,iNOWZ=False,iComb=False,iS=True,iPreFit=False):
    lHists = {}
    if iPreFit: lFit = "shapes_prefit/"+iCat+"/"
    else:
        lFit = "shapes_fit_s/"+iCat+"/" if iS else "shapes_fit_b/"+iCat+"/"
    if iComb=='2017' or iComb=='comb' or iComb is True:
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
    lHists["tqq"].SetLineWidth(2)
    lHists["tqq"].SetLineColor(r.kMagenta+3)

    if iS:
        try:
            lHists["zpqq"] = load(iFile,lFit+"zqq"+str(iMass))
            lHists["zpqq"].SetLineColor(r.kPink + 7)
            lHists["zpqq"].SetFillColor(r.kPink + 7)
            lHists["zpqq"].SetLineStyle(5)
            lHists["zpqq"].SetLineStyle(2)
        except:
            lHists["zpqq"] = None

    lHists["mc"] = lHists["qcd"].Clone()
    if not iNOWZ:
        if lHists["wqq"] is not None and lHists["zqq"] is not None:
            lHists["mc"].Add(lHists["wqq"].Clone())
            lHists["mc"].Add(lHists["zqq"].Clone())
    lHists["mc"].Add(lHists["tqq"].Clone())
    lHists["mc"].SetLineWidth(3)
    lHists["mc"].SetLineColor(r.kAzure - 5)
    return lHists

def fun25(x, par):
    pt = x[1]
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0]*(1.0 + par[1]*pt + par[2]*pt*pt)
    poly1 = par[0]*(par[3] + par[4]*pt + par[5]*pt*pt)*rho
    poly2 = par[0]*(par[6] + par[7]*pt + par[8]*pt*pt)*rho*rho
    poly3 = par[0]*(par[9] + par[10]*pt + par[11]*pt*pt)*rho*rho*rho
    poly4 = par[0]*(par[12] + par[13]*pt + par[14]*pt*pt)*rho*rho*rho*rho
    poly5 = par[0]*(par[15] + par[16]*pt + par[17]*pt*pt)*rho*rho*rho*rho*rho
    return (poly0 + poly1 + poly2 + poly3 + poly4+ poly5)

def fun25rho(x, par):
    rho = x[0]
    pt = x[1]
    poly0 = par[0]*(1.0 + par[1]*pt + par[2]*pt*pt)
    poly1 = par[0]*(par[3] + par[4]*pt + par[5]*pt*pt)*rho
    poly2 = par[0]*(par[6] + par[7]*pt + par[8]*pt*pt)*rho*rho
    poly3 = par[0]*(par[9] + par[10]*pt + par[11]*pt*pt)*rho*rho*rho
    poly4 = par[0]*(par[12] + par[13]*pt + par[14]*pt*pt)*rho*rho*rho*rho
    poly5 = par[0]*(par[15] + par[16]*pt + par[17]*pt*pt)*rho*rho*rho*rho*rho
    return (poly0 + poly1 + poly2 + poly3 + poly4+ poly5)

# (pT in )*rho
def fun34(x, par):
    pt = x[1]
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0]*(1.0 + par[1]*pt + par[2]*pt*pt + par[3]*pt*pt*pt)
    poly1 = par[0]*(par[4] + par[5]*pt + par[6]*pt*pt + par[7]*pt*pt*pt)*rho
    poly2 = par[0]*(par[8] + par[9]*pt + par[10]*pt*pt + par[11]*pt*pt*pt)*rho*rho
    poly3 = par[0]*(par[12] + par[13]*pt + par[14]*pt*pt + par[15]*pt*pt*pt)*rho*rho*rho
    poly4 = par[0]*(par[16] + par[17]*pt + par[18]*pt*pt + par[19]*pt*pt*pt)*rho*rho*rho*rho
    return poly0 + poly1 + poly2 + poly3 + poly4

'''
def fun34rho(x, par):
    #rho = "r.TMath.Log((x * x) / (y * y))"
    poly0 = "[0]*(1.0 + [1]*x +[2]*x*x + [3]*x*x*x + [4]*x*x*x*x)"
    poly1 = "[0]*([5] + [6]*x + [7]*x*x + [8]*x*x*x + [9]*x*x*x*x)*y"
    poly2 = "[0]*([10] + [11]*x + [12]*x*x + [13]*x*x*x + [14]*x*x*x*x)*y"
    poly3 = "[0]*([15] + [16]*x + [17]*x*x + [18]*x*x*x + [19]*x*x*x*x)*y"
    return poly0 + poly1 + poly2 + poly3
'''
def fun34rho(x, par):
    rho = x[0]
    pt = x[1]
    poly0 = par[0]*(1.0 + par[1]*pt + par[2]*pt*pt + par[3]*pt*pt*pt)
    poly1 = par[0]*(par[4] + par[5]*pt + par[6]*pt*pt + par[7]*pt*pt*pt)*rho
    poly2 = par[0]*(par[8] + par[9]*pt + par[10]*pt*pt + par[11]*pt*pt*pt)*rho*rho
    poly3 = par[0]*(par[12] + par[13]*pt + par[14]*pt*pt + par[15]*pt*pt*pt)*rho*rho*rho
    poly4 = par[0]*(par[16] + par[17]*pt + par[18]*pt*pt + par[19]*pt*pt*pt)*rho*rho*rho*rho
    return poly0 + poly1 + poly2 + poly3 + poly4

def fun35(x, par):
    pt = x[1]
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    poly0 = par[0]*(1.0 + par[1]*pt + par[2]*pt*pt + par[3]*pt*pt*pt)
    poly1 = par[0]*(par[4] + par[5]*pt + par[6]*pt*pt + par[7]*pt*pt*pt)*rho
    poly2 = par[0]*(par[8] + par[9]*pt + par[10]*pt*pt + par[11]*pt*pt*pt)*rho*rho
    poly3 = par[0]*(par[12] + par[13]*pt + par[14]*pt*pt + par[15]*pt*pt*pt)*rho*rho*rho
    poly4 = par[0]*(par[16] + par[17]*pt + par[18]*pt*pt + par[19]*pt*pt*pt)*rho*rho*rho*rho
    poly5 = par[0]*(par[20] + par[21]*pt + par[22]*pt*pt + par[23]*pt*pt*pt)*rho*rho*rho*rho*rho
    return (poly0 + poly1 + poly2 + poly3 + poly4+ poly5)

def fun35rho(x, par):
    rho = x[0]
    pt = x[1]
    poly0 = par[0]*(1.0 + par[1]*pt + par[2]*pt*pt + par[3]*pt*pt*pt)
    poly1 = par[0]*(par[4] + par[5]*pt + par[6]*pt*pt + par[7]*pt*pt*pt)*rho
    poly2 = par[0]*(par[8] + par[9]*pt + par[10]*pt*pt + par[11]*pt*pt*pt)*rho*rho
    poly3 = par[0]*(par[12] + par[13]*pt + par[14]*pt*pt + par[15]*pt*pt*pt)*rho*rho*rho
    poly4 = par[0]*(par[16] + par[17]*pt + par[18]*pt*pt + par[19]*pt*pt*pt)*rho*rho*rho*rho
    poly5 = par[0]*(par[20] + par[21]*pt + par[22]*pt*pt + par[23]*pt*pt*pt)*rho*rho*rho*rho*rho
    return (poly0 + poly1 + poly2 + poly3 + poly4+ poly5)

def ptpoly3(par0,par1,par2,par3,pt):
    # 0:p0
    # 1:p1
    # 2:p2
    # 3:p3
    # 4:ptresclaed
    return (par0*(1-pt)**3) + (par1*3*pt*(1-pt)**2) + (par2*3*(pt**2)*(1-pt)) + (par3*(pt**3))

def rhopoly5(par0,par1,par2,par3,par4,par5,rho):
    # 0:pol0
    # 1:pol1
    # 2:pol2
    # 3:pol3
    # 4:pol4
    # 5:pol5
    # 5:rho
    return (par0*(1-rho)**5)+(par1*5*rho*(1-rho)**4)+(par2*10*(rho**2)*(1-rho)**3)+(par3*10*(rho**3)*(1-rho)**2)+(par4*5*(rho**4)*(1-rho))+par5*rho**5

def fun35bern(x, par):
    rho = r.TMath.Log((x[0] * x[0]) / (x[1] * x[1]))
    rho = (rho-RHO_RANGE['AK8'][0])/(RHO_RANGE['AK8'][1]-RHO_RANGE['AK8'][0])
    pt = (x[1]-475)/(1500-475)
    poly0 = ptpoly3(1,par[1],par[2],par[3],pt)
    poly1 = ptpoly3(par[4],par[5],par[6],par[7],pt)
    poly2 = ptpoly3(par[8],par[9],par[10],par[11],pt)
    poly3 = ptpoly3(par[12],par[13],par[14],par[15],pt)
    poly4 = ptpoly3(par[16],par[17],par[18],par[19],pt)
    poly5 = ptpoly3(par[20],par[21],par[22],par[23],pt)
    return  par[0]*(rhopoly5(poly0,poly1,poly2,poly3,poly4,poly5,rho))

def fun35rhobern(x, par):
    rho = (x[0]-RHO_RANGE['AK8'][0])/(RHO_RANGE['AK8'][1]-RHO_RANGE['AK8'][0])
    pt = (x[1]-475)/(1500-475)
    poly0 = ptpoly3(1,par[1],par[2],par[3],pt)
    poly1 = ptpoly3(par[4],par[5],par[6],par[7],pt)
    poly2 = ptpoly3(par[8],par[9],par[10],par[11],pt)
    poly3 = ptpoly3(par[12],par[13],par[14],par[15],pt)
    poly4 = ptpoly3(par[16],par[17],par[18],par[19],pt)
    poly5 = ptpoly3(par[20],par[21],par[22],par[23],pt)
    return  par[0]*(rhopoly5(poly0,poly1,poly2,poly3,poly4,poly5,rho))

def end():
    if __name__ == '__main__':
        rep = ''
        while not rep in [ 'q', 'Q','a',' ' ]:
            rep = raw_input( 'enter "q" to quit: ' )
            if 1 < len(rep):
                rep = rep[0]
