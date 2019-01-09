#!/usr/bin/env python

import ROOT as r,sys,math,array,os
from ROOT import TFile, TTree, TChain, gPad, gDirectory
from multiprocessing import Process
from optparse import OptionParser
from operator import add
import math
import sys
import time
import array
import logging as log

r.gROOT.Macro(os.path.expanduser('~/rootlogon.C'))
# including other directories
sys.path.insert(0, '../.')
from tools import *
from hist import *

MASSBINS,MASSLO,MASSHI = {},{},{}
MASSBINS['AK8'] = 60 # 5 GeV mass resolution                                                                                                                
MASSLO['AK8'] = 30
MASSHI['AK8'] = 330
MASSBINS['CA15'] = 80
MASSLO['CA15'] = 60
MASSHI['CA15'] = 500

MASS_SF,MASS_SF_ERR,MASS_SIGMA = {},{},{}
MASS_SF['AK8'] = 0.989 #0.983 # 1.001
#MASS_SF['AK8'] = 0.974 
#MASS_SF['AK8'] = 0.983
#MASS_SF_ERR['AK8'] = 0.003
#MASS_SF['AK8'] = 0.974
MASS_SF_ERR['AK8'] = 0.012
#MASS_SF_ERR['AK8'] = 0.024
#MASS_SF_ERR['AK8'] = 0.009
#MASS_SF_ERR['AK8'] = 0.006 #0.003
#MASS_SF_ERR['AK8'] = 0.012
#MASS_SF_ERR['AK8'] = 0.003
#MASS_SIGMA['AK8'] = 10 #10 #20
MASS_SIGMA['AK8'] = 3
#MASS_SIGMA['AK8'] = 5
MASS_SF['CA15'] = 0.988 #0.989 # 1.001
MASS_SF_ERR['CA15'] = 0.007
MASS_SIGMA['CA15'] = 5 #4 

RES_SF,RES_SF_ERR,RES_SIGMA = {},{},{}
#RES_SF['AK8'] = 1.082 #1.030 #1.114
#RES_SF_ERR['AK8'] = 0.067 #0.029 #0.067
RES_SF['AK8'] = 1.1
RES_SF_ERR['AK8'] = 0.1
#RES_SF_ERR['AK8'] = 0.62
#RES_SF['AK8']  = 1.699
#RES_SF_ERR['AK8'] = 0.296
#RES_SIGMA['AK8'] = 1 # 2#7
RES_SIGMA['AK8'] = 2
RES_SF['CA15'] = 1.126 #1.092
RES_SF_ERR['CA15'] = 0.084 #0.067
RES_SIGMA['CA15'] = 1 #1.

TT_SF,TT_PT = {},{}
TT_SF['AK8'] = 1 #0.93*0.91
TT_PT['AK8'] = [1.0,1.0,1.0,1.0,1.0,1.0,1.0] #[1.0,1.0,0.9,0.9,0.8,0.7,0.5]
TT_SF['CA15'] = 1 #1.09*1.09
TT_PT['CA15'] = [1.0,1.0,1.0,1.0,1.0,1.0,1.0]

V_SF,V_SF_ERR = {},{}
V_SF['AK8'] = 0.896  #0.896 #0.837
#V_SF_ERR['AK8'] = 0.37
V_SF_ERR['AK8'] = 0.088#0.088 #0.043
#V_SF['AK8'] = 1.259
#V_SF_ERR['AK8'] = 0.294
V_SF['CA15'] = 1.022 #0.864
V_SF_ERR['CA15'] = 0.064 #0.063

RHO_RANGE,MASSES = {},{}
RHO_RANGE['AK8'] = [-5.5,-2.1]
RHO_RANGE['CA15'] = [-4.391,-1] 
MASSES['AK8'] = []
MASSES['CA15'] = []

MASSW = 80.4
MASSZ = 91.

# 2017 signals produced up to 1 jet
KFACTORJET = 1.5
KFACTORWIDTH = 2.065

fHists=[]

CUTSIGNAL = {}
#CUTSIGNAL['AK8'] = 90
#CUTSIGNAL['AK8'] = 130
#CUTSIGNAL['AK8'] = 180
CUTSIGNAL['AK8'] =  210
CUTSIGNAL['CA15'] = 250


def isInRhoRange(iMass,iPt,iJet):
    pRho = r.TMath.Log(iMass*iMass/iPt/iPt)
    if not (pRho < RHO_RANGE[iJet][0] or pRho > RHO_RANGE[iJet][1]):
        return False
    return True

def check2D(iH,iBinMass,iBinPt,iJet):
    pMass = iH.GetXaxis().GetBinCenter(iBinMass)
    pPt = iH.GetYaxis().GetBinLowEdge(iBinPt) + 0.3*(iH.GetYaxis().GetBinWidth(iBinPt))
    return isInRhoRange(pMass,pPt,iJet)

def check1D(iH,iBinMass,iPt,iJet):
    pMass = iH.GetXaxis().GetBinCenter(iBinMass)
    return isInRhoRange(pMass,iPt,iJet)

def find1D(iFile,iPtBins,iProc,iBox,iJet,iDataH):
    lNoYield = []
    lFile = r.TFile.Open(iFile)
    for iBinPt in iPtBins:
        if ('wqq' in iProc or 'zqq' in iProc):
            try:
                lH = lFile.Get('%s_%s_cat%s'%(iProc,iBox,str(iBinPt))).Clone()
                if lH.Integral() > 0:
                    pPt = iDataH.GetYaxis().GetBinLowEdge(iBinPt)+0.3*(iDataH.GetYaxis().GetBinWidth(iBinPt))
                    removeRho([lH],pPt,iBinPt,iJet)
                    if lH.Integral() <= CUTSIGNAL[iJet]:
                        lNoYield.append(iBinPt)
                else:
                    lNoYield.append(iBinPt)
            except:
                lNoYield.append(iBinPt)
    print '1D',lNoYield
    return lNoYield

def massIterable(massList):    
    if len(massList.split(','))==1:
        massIterableList = [massList]
    else:
        massIterableList = list(eval(massList))
    return massIterableList

def scaleHists(iHist,iType,iPassId,iJet='AK8'):
    if (iType == 0 or iType == 1) and iPassId == 1:
        log.info("Scaling %s by V_SF = %f"%(iHist.GetName(),V_SF[iJet]))
        iHist.Scale(V_SF[iJet])
    if iType == 2:
        log.info("Scaling by TT_PT")
        for i0 in range(1,iHist.GetNbinsX()+1):
            for i1 in range(1,iHist.GetNbinsY()+1):
                log.info("Scaling %s in bins %i %i, by TT_PT = %f"%(iHist.GetName(),i0,i1,TT_PT[iJet][i1]))
                iHist.SetBinContent(i0,i1,iHist.GetBinContent(i0,i1)*TT_PT[iJet][i1])
        if iPassId == 1:
            log.info("Scaling %ss by TT_SF = %f"%(iHist.GetName(),TT_SF[iJet]))
            iHist.Scale(TT_SF[iJet])
        if iPassId == 2:
            log.info("Scaling %s by (1/1-0.1*(1-TT_SF)) = %f"%(iHist.GetName(),(1./(1-0.1*(1-TT_SF[iJet])))))
            iHist.Scale(1./(1-0.1*(1-TT_SF[iJet])))
            
def removeRho(iHists,iPt=0,iPtCat=0,iJet='AK8'):
    if iPt == 0:
        for lH in iHists.values():
            log.info('Going to remove Rho region in range %f %f for %s'%(RHO_RANGE[iJet][0], RHO_RANGE[iJet][1], lH.GetName()))
            for i0 in range(1,MASSBINS[iJet]+1):
                lmass = lH.GetXaxis().GetBinCenter(i0)
                for i1 in range(1,lH.GetNbinsY()+1):
                    lpt = lH.GetYaxis().GetBinLowEdge(i1) + lH.GetYaxis().GetBinWidth(i1) * 0.3
                    lrho = r.TMath.Log(lmass*lmass/lpt/lpt)
                    if lrho < RHO_RANGE[iJet][0] or lrho > RHO_RANGE[iJet][1]:
                        log.info("2D HISTO: Removing rho = %.2f for %s, pt bin [%i, %i] and %f, mass bin [%i,%i] and %f" % (
                                lrho, lH.GetName(), lH.GetYaxis().GetBinLowEdge(i1), lH.GetYaxis().GetBinUpEdge(i1), lpt,
                                lH.GetXaxis().GetBinLowEdge(i0), lH.GetXaxis().GetBinUpEdge(i0), lmass))
                        lH.SetBinContent(i0, i1, 0);
            lH.SetDirectory(0);
    else:
        for lH in iHists:
            log.info('Going to remove Rho region in range %f %f for %s'%(RHO_RANGE[iJet][0], RHO_RANGE[iJet][1], lH.GetName()))
            for i0 in range(1, lH.GetNbinsX()+1):
                lmass = lH.GetXaxis().GetBinCenter(i0)
                lpt = iPt
                pPt = iPtCat
                lrho = r.TMath.Log(lmass*lmass/lpt/lpt)
                if lrho < RHO_RANGE[iJet][0] or lrho > RHO_RANGE[iJet][1]:
                    log.info("1D HISTO: Removing rho = %.2f for %s, pt %f and cat %f, mass bin [%i,%i] and %f" % ( 
                            lrho, lH.GetName(), lpt, pPt,
                            lH.GetXaxis().GetBinLowEdge(i0), lH.GetXaxis().GetBinUpEdge(i0),lmass)) 
                    lH.SetBinContent(i0, 0);
            lH.SetDirectory(0);

class dazsleRhalphabetBuilder: 

        def __init__( self, hpass, hfail, inputfile, inputsigfile, options):
		self._hpass = hpass;
		self._hfail = hfail;
		self._inputfile = inputfile;
                self._inputsigfile = inputsigfile;
                self._inputrfile = options.inputrfile;
                self._onlyRhalph = options.onlyRhalph;
                self._onlyInputs = False;
                self._bernstein = True;
                self._is2016 = options.is2016;
                self._is2016WZ = options.is2016WZ;
                self._freeze = options.freeze;
                self._mcstat = options.mcstat;
                self._interpol = options.interpol;
                self._jet = options.jet;
                self._comb = options.forcomb;
                self._smooth = options.smooth;
                self._scaleWZ = options.scaleWZ;

		self._outputName = "base.root";
                if self._comb:
                    self._outputName = "base_2017.root";
		self._outfile_validation = r.TFile("validation.root","RECREATE");

		# mass bins
		self._mass_nbins = MASSBINS[self._jet];
		self._mass_lo    = MASSLO[self._jet];
		self._mass_hi    = MASSHI[self._jet];
		log.info("Number of mass bins %f and lo: %f hi: %f "%(self._mass_nbins, self._mass_lo, self._mass_hi));

		# rho range
		self._rho_lo = RHO_RANGE[self._jet][0];
		self._rho_hi = RHO_RANGE[self._jet][1];
		log.info(" Rho: Low : %f High: %f"%(self._rho_lo, self._rho_hi));

		# polynomial order for fit
		self._poly_lNP = options.np; # order in pT
		self._poly_lNR = options.nr; # order in rho

		# pt bins
		self._nptbins = hpass["data_obs"].GetYaxis().GetNbins();
		self._pt_lo   = hpass["data_obs"].GetYaxis().GetBinLowEdge( 1 );
		self._pt_hi   = hpass["data_obs"].GetYaxis().GetBinUpEdge( self._nptbins );
	
		# define RooRealVars
		self._lMSD    = r.RooRealVar("x","x",self._mass_lo,self._mass_hi);
		self._lMSD.setBins(self._mass_nbins);		
		self._lPt     = r.RooRealVar("pt","pt",self._pt_lo,self._pt_hi);
		self._lPt.setBins(self._nptbins);
		self._lRho    = r.RooFormulaVar("rho","log(x*x/pt/pt)",r.RooArgList(self._lMSD,self._lPt));

		self._lEff    = r.RooRealVar("veff"      ,"veff"      ,0.5 ,0.,1.0);
                self._lEffQCD = r.RooRealVar("qcd2017eff"    ,"qcd2017eff"    ,0.01 ,0.,10);

		# set qcdeff
		qcd_pass_integral = 0;
		qcd_fail_integral = 0;
		for i in range(1,hfail["qcd"].GetNbinsX()+1):
			for j in range(1,hfail["qcd"].GetNbinsY()+1):
				if hfail["qcd"].GetXaxis().GetBinCenter(i) > self._mass_lo and hfail["qcd"].GetXaxis().GetBinCenter(i) < self._mass_hi:
					qcd_fail_integral += hfail["qcd"].GetBinContent(i,j);
					qcd_pass_integral += hpass["qcd"].GetBinContent(i,j);
		if qcd_fail_integral>0:
			qcdeff = qcd_pass_integral / qcd_fail_integral;
			self._lEffQCD.setVal(qcdeff);
			log.info("Set qcdeff = %f"%qcdeff);

                # define PolyVar with n = (order in pt)*(order in rho)-1 parameters
                self._lpolyArray = []
                lTagr = "r"; lTagp = "p";
                if self._comb: 
                    lTagr = "r2017"; lTagp = "p2017";
                if self._bernstein:
                    self.buildPolynomialArray(self._lpolyArray,self._poly_lNR,self._poly_lNP,lTagr,lTagp,-5.0,5.0)
                else:
                    self.buildPolynomialArray(self._lpolyArray,self._poly_lNR,self._poly_lNP,lTagr,lTagp,-1.0,1.0)
                log.info("polynomial variables")
                log.info(self._lpolyArray)

		self._lDM     = r.RooRealVar("dm","dm", 0.,-10,10);
		self._lShift  = r.RooFormulaVar("shift",self._lMSD.GetName()+"-dm",r.RooArgList(self._lMSD,self._lDM));

		self._allVars = [];
		self._allShapes = [];
		self._allData = [];
		self._allPars = [];

		self.LoopOverPtBins();

	def LoopOverPtBins(self):

                print "---- [Loop over pT]"

		log.info("Number of pt bins = %f"%self._nptbins);
		for ipt in range(1,self._nptbins+1):
                        # approximate pT bin value
                        pPt = self._hpass["data_obs"].GetYaxis().GetBinLowEdge(ipt)+self._hpass["data_obs"].GetYaxis().GetBinWidth(ipt)*0.3;

			# 1d histograms in each pT bin
			hpass_inPtBin = {};
			hfail_inPtBin = {};
                        for ih, h in self._hpass.iteritems():
                            lpass_inPtBin = proj("cat",str(ipt),h,self._mass_nbins,self._mass_lo,self._mass_hi)
                            removeRho([lpass_inPtBin],pPt,ipt,self._jet)
                            for mass in MASSES:
                                lName = "zqq%s"%str(mass)
                                '''
                                if lName in h.GetName():
                                    self.signalScalePass(lpass_inPtBin,ipt,h.GetName())
                                    '''
                            hpass_inPtBin[ih] = lpass_inPtBin

                        for ih, h in self._hfail.iteritems():
                            lfail_inPtBin = proj("cat",str(ipt),h,self._mass_nbins,self._mass_lo,self._mass_hi); 
                            removeRho([lfail_inPtBin],pPt,ipt,self._jet)
                            hfail_inPtBin[ih] = lfail_inPtBin

                        for lH in (hpass_inPtBin.values()+hfail_inPtBin.values()):    
                            self._outfile_validation.cd()
                            lH.Write()
                            
                        if self._onlyInputs:
                            continue

			# return RooDataHists(data), and histograms
			(pDatas,pHists) = self.workspaceInputs(hpass_inPtBin,hfail_inPtBin,"cat"+str(ipt))

			# make the rhalphabet fit for this specific pt bin
			lParHists = self.makeRhalphabet([hfail_inPtBin["data_obs"],hfail_inPtBin["wqq"],hfail_inPtBin["zqq"],hfail_inPtBin["tqq"]],
                                                        [hpass_inPtBin["data_obs"],hpass_inPtBin["wqq"],hpass_inPtBin["zqq"],hpass_inPtBin["tqq"]],
                                                        pPt,"cat"+str(ipt))

                        # otherwise I will die before this finishes
                        if self._onlyRhalph:
                            continue

			# get SM backgrounds and signals
			lPHists=[pHists[0],pHists[1],pHists[2],pHists[3]]
			lFHists=[pHists[4],pHists[5],pHists[6],pHists[7]]
			lPHists.extend(self.getSignalInputs(hpass_inPtBin,hfail_inPtBin,"cat"+str(ipt))[0])
			lFHists.extend(self.getSignalInputs(hpass_inPtBin,hfail_inPtBin,"cat"+str(ipt))[1])
			log.info("pass_rhps = ")
			log.info(lPHists)

			# write to file
			self.makeWorkspace(self._outputName,[pDatas[0]],lPHists,self._allVars,pPt,"pass_cat"+str(ipt),True)
			self.makeWorkspace(self._outputName,[pDatas[1]],lFHists,self._allVars,pPt,"fail_cat"+str(ipt),True)


		self._outfile_validation.Write();
		self._outfile_validation.Close();
			
        def makeRhalphabet(self,iHs,iHPs,iPt,iCat):
		
		print "---- [makeRhalphabet]"	

		lName ="qcd";
                if self._comb:
                    lName ="qcd2017";
		lUnity = r.RooConstVar("unity","unity",1.);
		lZero  = r.RooConstVar("lZero","lZero",0.);

		# fix the pt (top) and the qcd eff (this one was done before)
		self._lPt.setVal(iPt)
		self._lEffQCD.setConstant(False)

		# now build the function
		lPassBins = r.RooArgList()
		lFailBins = r.RooArgList()

		for i0 in range(1,self._mass_nbins+1):
			self._lMSD.setVal(iHs[0].GetXaxis().GetBinCenter(i0)) 

                        if self._bernstein:
                            lroopoly = self.buildRooPolyRhoArrayBernstein(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,self._lpolyArray)
                        else:
                            lroopoly = self.buildRooPolyArray(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,self._lpolyArray)
			#print 'RooPolyArray:'
			#lroopoly.Print()

			pSum = 0
			pRes = 0

			for i1 in range(0,len(iHs)):
				pSum = pSum + iHs[i1].GetBinContent(i0) if i1 == 0 else pSum - iHs[i1].GetBinContent(i0); # subtract W/Z from data
				if i1 > 0 : pRes += iHs[i1].GetBinContent(i0)
			if pSum < 0: pSum = 0.

			# 10 sigma range + ~ 50 events
                        pUnc = math.sqrt(pSum)*50.+10
                        #pUnc = math.sqrt(pSum)*10.+50
			pUnc += pRes
			# define the failing category
			pFail = r.RooRealVar(lName+"_fail_"+iCat+"_Bin"+str(i0),lName+"_fail_"+iCat+"_Bin"+str(i0),pSum,max(pSum-pUnc,0),max(pSum+pUnc,0))
			log.info("Fail_bin_var: ")
			#pFail.Print()

			# now define the passing cateogry based on the failing (make sure it can't go negative)
                        log.info("QCD EFF: ")
                        #self._lEffQCD.Print()
			lArg = r.RooArgList(pFail,lroopoly,self._lEffQCD)
			pPass = r.RooFormulaVar(lName+"_pass_"+iCat+"_Bin"+str(i0),lName+"_pass_"+iCat+"_Bin"+str(i0),"@0*max(@1,0)*@2",lArg)
			log.info("Pass=fail*poly*eff RooFormulaVar: ")
			#pPass.Print()

			pSumP = 0
			for i1 in range(0,len(iHPs)):
			        pSumP = pSumP + iHPs[i1].GetBinContent(i0) if i1 == 0 else pSumP - iHPs[i1].GetBinContent(i0); # subtract W/Z from data 
                        #if pSumP < 0: pSumP = 0.01
                        if pSumP < 0: pSumP = 0.

			if pSum < 6: # or pSumP < 6:
                            #print 'Too small number on fail %f'%pSum 
                            pFail.setConstant(True)
                            pPass = r.RooRealVar(lName+"_pass_"+iCat+"_Bin"+str(i0),lName+"_pass_"+iCat+"_Bin"+str(i0),0.,0.,0.)
                            pPass.setConstant(True)

			# add bins to the array
			lPassBins.add(pPass)
			lFailBins.add(pFail)
			self._allVars.extend([pPass,pFail])
			self._allPars.extend([pPass,pFail])

		lPass  = r.RooParametricHist(lName+"_pass_"+iCat,lName+"_pass_"+iCat,self._lMSD,lPassBins,iHs[0])
		lFail  = r.RooParametricHist(lName+"_fail_"+iCat,lName+"_fail_"+iCat,self._lMSD,lFailBins,iHs[0])
		#log.info("Print pass and fail RooParametricHists")
		#lPass.Print()
		#lFail.Print()
		lNPass = r.RooAddition(lName+"_pass_"+iCat+"_norm",lName+"_pass_"+iCat+"_norm",lPassBins)
		lNFail = r.RooAddition(lName+"_fail_"+iCat+"_norm",lName+"_fail_"+iCat+"_norm",lFailBins)
		#log.info("Printing NPass and NFail variables:")
		#lNPass.Print()
		#lNFail.Print()
		self._allShapes.extend([lPass,lFail,lNPass,lNFail])
		
		# now write the workspace with the rooparamhist
		lWPass = r.RooWorkspace("w_pass_"+str(iCat))
		lWFail = r.RooWorkspace("w_fail_"+str(iCat))
		getattr(lWPass,'import')(lPass,r.RooFit.RecycleConflictNodes())
		getattr(lWPass,'import')(lNPass,r.RooFit.RecycleConflictNodes())
		getattr(lWFail,'import')(lFail,r.RooFit.RecycleConflictNodes())
		getattr(lWFail,'import')(lNFail,r.RooFit.RecycleConflictNodes())
		#log.info("Printing rhalphabet workspace:")
		#lWPass.Print()
                lTagWorkspace = ".root"
                if self._comb: lTagWorkspace = "_2017.root"
		if iCat.find("1") > -1:
                    lWPass.writeToFile("ralpha"+self._outputName.replace(lTagWorkspace,"_"+str(self._poly_lNP)+str(self._poly_lNR)+"_pt"+lTagWorkspace))
		else:
                    lWPass.writeToFile("ralpha"+self._outputName.replace(lTagWorkspace,"_"+str(self._poly_lNP)+str(self._poly_lNR)+"_pt"+lTagWorkspace),False)
                lWFail.writeToFile("ralpha"+self._outputName.replace(lTagWorkspace,"_"+str(self._poly_lNP)+str(self._poly_lNR)+"_pt"+lTagWorkspace),False)
		return [lPass,lFail]

	def buildRooPolyArray(self,iPt,iRho,iQCD,iZero,iVars):
		
                # print "---- [buildRooPolyArray]"	
		lPt  = r.RooConstVar("Var_Pt_" +str(iPt)+"_"+str(iRho), "Var_Pt_" +str(iPt)+"_"+str(iRho),(iPt))
		lRho = r.RooConstVar("Var_Rho_"+str(iPt)+"_"+str(iRho), "Var_Rho_"+str(iPt)+"_"+str(iRho),(iRho))
		lRhoArray = r.RooArgList()
		lNCount=0
		for pRVar in range(0,self._poly_lNR+1):
			lTmpArray = r.RooArgList()
			for pVar in range(0,self._poly_lNP+1):
                            if lNCount == 0: lTmpArray.add(iQCD); # for the very first constant (e.g. p0r0), just set that to 1
                            else: lTmpArray.add(iVars[lNCount])
                            lNCount=lNCount+1
			pLabel="Var_Pol_Bin_"+str(round(iPt,2))+"_"+str(round(iRho,3))+"_"+str(pRVar)
			pPol = r.RooPolyVar(pLabel,pLabel,lPt,lTmpArray)
			#pPol.Print()
			lRhoArray.add(pPol);
			self._allVars.append(pPol)

		lLabel="Var_RhoPol_Bin_"+str(round(iPt,2))+"_"+str(round(iRho,3))
		lRhoPol = r.RooPolyVar(lLabel,lLabel,lRho,lRhoArray)
		self._allVars.extend([lPt,lRho,lRhoPol])
		return lRhoPol

        def buildRooPolyRhoArrayBernstein(self,iPt,iRho,iQCD,iZero,iVars):
            
                # print "---- [buildRooPolyArrayBernstein]"
                lPt  = r.RooConstVar("Var_Pt_" +str(iPt)+"_"+str(iRho), "Var_Pt_" +str(iPt)+"_"+str(iRho),(iPt))
                lRho = r.RooConstVar("Var_Rho_"+str(iPt)+"_"+str(iRho), "Var_Rho_"+str(iPt)+"_"+str(iRho),(iRho))
                lPt_rescaled = r.RooConstVar("Var_Pt_rescaled_" + str(iPt) + "_" + str(iRho),
                                             "Var_Pt_rescaled_" + str(iPt) + "_" + str(iRho),
                                             ((iPt - self._pt_lo) / (self._pt_hi - self._pt_lo)))
                lRho_rescaled = r.RooConstVar("Var_Rho_rescaled_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)),
                                              "Var_Rho_rescaled_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)),
                                              ((iRho - self._rho_lo) / (self._rho_hi - self._rho_lo)))
                # pT degree
                if self._poly_lNP == 1:
                    ptPolyString = "@0*(1-@2)+@1*@2"
                elif self._poly_lNP == 2:
                    ptPolyString = "@0*(1-@3)**2+@1*2*@3*(1-@3)+@2*@3**2"
                elif self._poly_lNP == 3:
                    ptPolyString = "(@0*(1-@4)**3)+(@1*3*@4*(1-@4)**2)+(@2*3*(@4**2)*(1-@4))+(@3*(@4**3))"
                elif self._poly_lNP == 4:
                    ptPolyString = "(@0*(1-@5)**4)+(@1*4*@5*(1-@5)**3)+(@2*6*(@5**2)*(1-@5)**2)+(@3*4*(@5**3)*(1-@5))+@4*@5**4"
                elif self._poly_lNP == 5:
                    ptPolyString = "(@0*(1-@6)**5)+(@1*5*@6*(1-@6)**4)+(@2*10*(@6**2)*(1-@6)**3)+(@3*10*(@6**3)*(1-@6)**2)+(@4*5*(@6**4)*(1-@6))+@5*@6**5"
                elif self._poly_lNP == 6:
                    ptPolyString = "(@0*(1-@7)**6)+(@1*6*@7*(1-@7)**5)+(@2*15*(@7**2)*(1-@7)**4)+(@3*20*(@7**3)*(1-@7)**3)+(@4*15*(@7**4)*(1-@7)**2)+@5*6*(@7**5)*(1-@7)+@6*@7**6"
                # rho degree
                if self._poly_lNR == 1:
                    rhoPolyString = "@0*(1-@2)+@1*@2"
                elif self._poly_lNR == 2:
                    rhoPolyString = "(@0*(1-@3)**2)+(@1*2*@3*(1-@3))+@2*@3**2"
                elif self._poly_lNR == 3:
                    rhoPolyString = "(@0*(1-@4)**3)+(@1*3*@4*(1-@4)**2)+(@2*3*(@4**2)*(1-@4))+(@3*(@4**3))"
                elif self._poly_lNR == 4:
                    rhoPolyString = "(@0*(1-@5)**4)+(@1*4*@5*(1-@5)**3)+(@2*6*(@5**2)*(1-@5)**2)+(@3*4*(@5**3)*(1-@5))+@4*@5**4"
                elif self._poly_lNR == 5:
                    rhoPolyString = "(@0*(1-@6)**5)+(@1*5*@6*(1-@6)**4)+(@2*10*(@6**2)*(1-@6)**3)+(@3*10*(@6**3)*(1-@6)**2)+(@4*5*(@6**4)*(1-@6))+@5*@6**5"
                elif self._poly_lNR == 6:
                    rhoPolyString = "(@0*(1-@7)**6)+(@1*6*@7*(1-@7)**5)+(@2*15*(@7**2)*(1-@7)**4)+(@3*20*(@7**3)*(1-@7)**3)+(@4*15*(@7**4)*(1-@7)**2)+@5*6*(@7**5)*(1-@7)+@6*@7**6"
                lRhoArray = r.RooArgList()
                lNCount = 0
                for pRVar in range(0,self._poly_lNR+1):
                        lTmpArray = r.RooArgList()
                        for pVar in range(0,self._poly_lNP+1):
                            if lNCount == 0: lTmpArray.add(iQCD)  # for the very first constant (e.g. p0r0), just set that to 1
                            else:
                                lTmpArray.add(iVars[lNCount])
                            lNCount = lNCount + 1
                        pLabel="Var_Pol_Bin_"+str(round(iPt,2))+"_"+str(round(iRho,3))+"_"+str(pRVar)
                        lTmpArray.add(lPt_rescaled)
                        pPol = r.RooFormulaVar(pLabel, pLabel, ptPolyString, lTmpArray)
                        lRhoArray.add(pPol)
                        self._allVars.append(pPol)
                        pPoltest = r.RooPolyVar(pLabel,pLabel,lPt,lTmpArray)

                lLabel="Var_RhoPol_Bin_"+str(round(iPt,2))+"_"+str(round(iRho,3))
                lRhoArray.add(lRho_rescaled)
                lRhoPol = r.RooFormulaVar(lLabel, lLabel, rhoPolyString, lRhoArray)
                self._allVars.extend([lPt_rescaled, lRho_rescaled, lRhoPol])
                return lRhoPol

	def buildPolynomialArray(self, iVars,iNVar0,iNVar1,iLabel0,iLabel1,iXMin0,iXMax0):
            
                #print "---- [buildPolynomialArray]"
                ## form of polynomial
                ## (p0r0 + p1r0 * pT + p2r0 * pT^2 + ...) + 
                ## (p0r1 + p1r1 * pT + p2r1 * pT^2 + ...) * rho + 
                ## (p0r2 + p1r2 * pT + p2r2 * pT^2 + ...) * rho^2 + ...
                # Set to the background only
                if self._freeze:
                    lFile = r.TFile(self._inputrfile)
                    lFit  = r.RooFitResult(lFile.Get("fit_b"))
                    self._lEffQCD.setVal(lFit.floatParsFinal().find("qcd2017eff").getVal())

                for i0 in range(iNVar0+1):
                    for i1 in range(iNVar1+1):
                        pVar = iLabel1+str(i1)+iLabel0+str(i0);
                        pXMin = iXMin0
                        pXMax = iXMax0
                        if self._freeze:
                            pVal  = math.pow(10,-min(i1,2))
                            if i1 == 0:
                                pVal  = math.pow(10,-i1-min(int(i0*0.5),1))
                        else:
                            pVal  = math.pow(10,-min(i1,2))
                            if i1 == 0:
                                pVal  = math.pow(10,-i1-min(int(i0*0.5),1))
                            if self._bernstein:
                                pVal = 10.0
                        if self._freeze:
                            pCent = 0 if pVar == "p0r0" else lFit.floatParsFinal().find(pVar).getVal()
                            if pVar == "p0r0":
                                pXMin = pXMin*pVal
                                pXMax = pXMin*pVal
                            else:
                                #pXmin = pXMin*pVal
                                #pXmax = pXMax*pVal
                                pXMin = (lFit.floatParsFinal().find(pVar).getVal() - 10*lFit.floatParsFinal().find(pVar).getError()*abs(pXMin))
                                pXMax = (lFit.floatParsFinal().find(pVar).getVal() + 10*lFit.floatParsFinal().find(pVar).getError()*abs(pXMax))
                                #print 'this Min %f vs %f'%(pXMin,lFit.floatParsFinal().find(pVar).getVal() - lFit.floatParsFinal().find(pVar).getError() )
                                #print 'this Max %f vs %f'%(pXMax,lFit.floatParsFinal().find(pVar).getVal() + lFit.floatParsFinal().find(pVar).getError() )
                        else:
                            pCent = 0
                            if self._bernstein:
                                pCent = 1.0
                            pXMin = pXMin*pVal
                            pXMax = pXMax*pVal
                        #if pVar != "p0r0" and self._freeze:
                            #print lFit.floatParsFinal().find(pVar).getVal()
                            #print lFit.floatParsFinal().find(pVar).getError()
                        pRooVar = r.RooRealVar(pVar,pVar,pCent,pXMin,pXMax)
                        log.info("Declaring roovars")
                        log.info(pVar+' '+str(pVal))
                        iVars.append(pRooVar)

                if self._freeze and pVar != "p0r0":
                    lFile.Close()

	def workspaceInputs(self, iHP,iHF,iBin):
		
		lCats = r.RooCategory("sample","sample") 
		lCats.defineType("pass",1) 
		lCats.defineType("fail",0) 
		lPData = r.RooDataHist("data_obs_pass_"+iBin,"data_obs_pass_"+iBin,r.RooArgList(self._lMSD),iHP["data_obs"])
		lFData = r.RooDataHist("data_obs_fail_"+iBin,"data_obs_fail_"+iBin,r.RooArgList(self._lMSD),iHF["data_obs"])
		lData  = r.RooDataHist("comb_data_obs","comb_data_obs",r.RooArgList(self._lMSD),r.RooFit.Index(lCats),r.RooFit.Import("pass",lPData),r.RooFit.Import("fail",lFData)) 
		#4 and 5 are pass and fail mass shapes for each bkg, 
                #0 and 1 are pass and fail RooHistPdfs, 
                #2 and 3 are pass and fail extended likelihood
		lW    = self.getRoofitHistObjects([iHP["wqq"],iHF["wqq"]],"wqq",iBin)
		lZ    = self.getRoofitHistObjects([iHP["zqq"],iHF["zqq"]],"zqq",iBin)
		ltop  = self.getRoofitHistObjects([iHP["tqq"],iHF["tqq"]],"tqq",iBin)		
		lQCD  = self.getRoofitHistObjects([iHP["qcd"],iHF["qcd"]],"qcd",iBin)

		lTotP = r.RooAddPdf("tot_pass"+iBin,"tot_pass"+iBin,r.RooArgList(lQCD[0]))
		lTotF = r.RooAddPdf("tot_fail"+iBin,"tot_fail"+iBin,r.RooArgList(lQCD[1]))
		lEWKP = r.RooAddPdf("ewk_pass"+iBin,"ewk_pass"+iBin,r.RooArgList(lW[2],lZ[2],ltop[2]))
		lEWKF = r.RooAddPdf("ewk_fail"+iBin,"ewk_fail"+iBin,r.RooArgList(lW[3],lZ[3],ltop[3]))
		
		lTot  = r.RooSimultaneous("tot","tot",lCats) 
		lTot.addPdf(lTotP,"pass") 
		lTot.addPdf(lTotF,"fail")     
		self._allData.extend([lPData,lFData])
		self._allShapes.extend([lTotP,lTotF,lEWKP,lEWKF])

		## RooDataHist (data), then RooDataHist of each ewk+top
		return ([lPData,lFData],[lW[4],lZ[4],ltop[4],lQCD[4],lW[5],lZ[5],ltop[5],lQCD[5]])

	def getRoofitHistObjects(self,iH,iLabel="w",iBin="_cat0"):

		#normalization
		lNTot   = r.RooRealVar (iLabel+"norm"+iBin,iLabel+"norm"+iBin,(iH[0].Integral()+iH[1].Integral()),0.,5.*(iH[0].Integral()+iH[1].Integral()))
		lNPass  = r.RooFormulaVar(iLabel+"fpass"+iBin ,iLabel+"norm"+iBin+"*(veff)"  ,r.RooArgList(lNTot,self._lEff))
		lNFail  = r.RooFormulaVar(iLabel+"fqail"+iBin ,iLabel+"norm"+iBin+"*(1-veff)",r.RooArgList(lNTot,self._lEff))
		#shapes
		lPData  = r.RooDataHist(iLabel+"_pass_"+iBin,iLabel+"_pass_"+iBin, r.RooArgList(self._lMSD),iH[0])
		lMData  = r.RooDataHist(iLabel+"_fail_"+iBin,iLabel+"_fail_"+iBin, r.RooArgList(self._lMSD),iH[1]) 
		lP      = r.RooHistPdf (iLabel+"passh"+iBin,iLabel+"passh"+iBin, r.RooArgList(self._lShift),r.RooArgList(self._lMSD),lPData,0)
		lF      = r.RooHistPdf (iLabel+"failh"+iBin,iLabel+"failh"+iBin, r.RooArgList(self._lShift),r.RooArgList(self._lMSD),lMData,0)
		#extended likelihood from normalization and shape above
		lEP     = r.RooExtendPdf(iLabel+"_passe_" +iBin,iLabel+"pe" +iBin,lP,lNPass)
		lEF     = r.RooExtendPdf(iLabel+"_faile_" +iBin,iLabel+"fe" +iBin,lF,lNFail)
		
		lHist   = [lP,lF,lEP,lEF,lPData,lMData]
		self._allVars.extend([lNTot,lNPass,lNFail])
		self._allShapes.extend(lHist)
		return lHist	

	def getSignalInputs(self,iHP,iHF,iBin):		
		#getting signals 
		lPSigs  = []
		lFSigs  = []
                for mass in MASSES:
                    lName = "zqq%s"%str(mass)
                    log.info("Building Roofit Hist Objects for %s"%iHP[lName].GetName())
                    lSig = self.getRoofitHistObjects([iHP[lName],iHF[lName]],"zqq"+str(mass),iBin)
                    lPSigs.append(lSig[4])
                    lFSigs.append(lSig[5])
		return (lPSigs,lFSigs)		

	def makeWorkspace(self,iOutput,iDatas,iFuncs,iVars,iPt,iCat="cat0",iShift=True):
                print "---  [Making workspace]: " + "w_" + str(iCat)
		lW = r.RooWorkspace("w_"+str(iCat))

		# get the pT bin (0,1,2,3,4..)
		lPt = iCat[-1:];

                if self._interpol:
                    lInterpolMasses = []; 
                    lInterpolShapes = {};
                    lInterpolShapes['central'] = []
                    lInterpolShapes['scaleUp'] = []
                    lInterpolShapes['scaleDown'] = []
                    lInterpolShapes['smearUp'] = []
                    lInterpolShapes['smearDown'] = []

                for pFunc in iFuncs:
			log.info('Taking matched and unmatched templates from %s'%pFunc.GetName())
			
			process = pFunc.GetName().split("_")[0];
			cat     = pFunc.GetName().split("_")[1];
			mass    = 0.;
                        if "wqq" in process: procid = 0;
                        if "zqq" in process: procid = 1;
                        passid = 1 if "pass" in cat  else 2

			if iShift and ("wqq" in process or "zqq" in process):

                                lHMatched = {}
                                lHUnmatched = {}
                                lsig  = False
                                #lFile = self._inputsigfile;
                                lFile = self._inputfile;
                                if process == "wqq": mass = MASSW;
				elif process == "zqq": mass = MASSZ;
				else: 
                                    mass = float(process[3:])
                                    lsig = True
				log.info("process %s, mass %f"%(process,mass))

                                # 2016 sig samples!!!!!
                                if self._is2016 and int(lPt) ==1 and lsig: continue
                                
				# get the matched and unmatched hist 
                                lFile.cd()
                                if (self._is2016 and lsig) or (self._is2016WZ and (process == "wqq" or process == "zqq")):
                                    lHMatched[process] = lFile.Get(process+"_2016_"+cat+"_matched").Clone();
                                    lHUnmatched[process] = lFile.Get(process+"_2016_"+cat+"_unmatched").Clone();
                                else:
                                    lHMatched[process] = lFile.Get(process+"_"+cat+"_matched").Clone();
                                    lHUnmatched[process] = lFile.Get(process+"_"+cat+"_unmatched").Clone();
                                for lH in (lHMatched.values()+lHUnmatched.values()):
                                    log.info("before scaling template %s, integral: %f"%(lH.GetName(),lH.Integral()))
                                
                                # TMP: scale W and Z
                                if self._scaleWZ:
                                    if process == "wqq":
                                        lHMatched[process].Scale(1/1.1)
                                        lHUnmatched[process].Scale(1/1.1)
                                    if process == "zqq":
                                        lHMatched[process].Scale(1/1.4)
                                        lHUnmatched[process].Scale(1/1.4)

                                # get signals
                                if lsig:
                                    self._inputsigfile.cd()
                                    if not "pass" in cat:
                                        lHMatched[process] = self._inputsigfile.Get(process+"_"+cat+"_matched").Clone();
                                        lHUnmatched[process] = self._inputsigfile.Get(process+"_"+cat+"_unmatched").Clone();

                                # scale them by V_SF
                                scaleHists(lHMatched[process],procid,passid)
                                scaleHists(lHUnmatched[process],procid,0)
                                for lH in (lHMatched.values()+lHUnmatched.values()):
                                    log.info("after scaling template %s, integral: %f"%(lH.GetName(),lH.Integral()))

                                # tmp: scale back 2017 signals 
                                if lsig and not self._is2016:
                                    lHMatched[process].Scale(KFACTORWIDTH) 
                                    lHUnmatched[process].Scale(KFACTORWIDTH)
                                    lHMatched[process].Scale(KFACTORJET)
                                    lHUnmatched[process].Scale(KFACTORJET)

                                # scale signals to same gq for comb
                                if lsig and self._comb:
                                    lHMatched[process].Scale(1/2.25)
                                    lHUnmatched[process].Scale(1/2.25)

                                # remove rho from 2d hists after rescaling
                                #removeRho(lHMatched,0,0,self._jet) #tmp to check interpoltion without rho cut
                                #removeRho(lHUnmatched,0,0,self._jet)

				# project each into mass axis
				tmph_mass_matched = proj("cat",str(lPt),lHMatched[process],self._mass_nbins,self._mass_lo,self._mass_hi);
				tmph_mass_unmatched = proj("cat",str(lPt),lHUnmatched[process],self._mass_nbins,self._mass_lo,self._mass_hi);

                                # remove Rho region after projecting
                                #removeRho([tmph_mass_matched,tmph_mass_unmatched],iPt,int(lPt),self._jet)
                                #log.info('MATCHED AND UNMATCHED CONTENT')

                                # smooth templates
                                if self._smooth:
                                    if lsig and not self._is2016:
                                        if (self._jet == 'AK8' and mass >150) or (self._jet == 'CA15' and mass>200):
                                            tmph_mass_matched.Smooth()
                                            tmph_mass_unmatched.Smooth()

				# smear/shift the matched
				# mass_shift = MASS_SF = m_data/m_mc = 1.001+/-0.05
				# MASS_SF_ERR = sqrt((0.323/82.333)^2+(0.433/82.215)^2) = 0.0065
				# mass_shift_unc =  math.sqrt((m_data_err / m_data) * (m_data_err / m_data) + (m_mc_err / m_mc)) * sigma shift
				# mass_shift_unc = MASS_SF_ERR*sigma shift (MASS_SF_ERR = 0.03) 2*1/15 = 0.06/2 = 0.03? (0.03*2*10 in datacard)
                                # 4 numbers: sf_err_unc, scale in datacard, * sigma, shift_unc*sigma
                                # 0.0065, 0.03, 5, 0.0325 
                                # 2016: 0.15 -> 0.01*15  and 0.03 in datacard, (0.15x2 = 0.3*10 = 3 -> 3%)
                                # so what's in the datacard is related to the sigma shift? so 15 -> 0.01*15 -> 0.01*15*20 -> 3-> 0.03 in datacard
                                # 0.0065 = 0.0065/1.001
                                # or 5 -> 0.0065*5 -> 0.0325*20 -> 0.65 -> 0.01 in datacard
                                # or 5 -> 0.01*5 -> 0.01*5*20 -> 1 -> 0.01 in datacard
                                # 0.15 = 0.01( cons) *15 => 1/15 = 0.06
                                # 2017: 
                                # 0.03 in scale datacard -> so this one is easy just put whatever sigma shift*shift_unc
				# resolution = 1.1+0.4  
				# res_shift = s_data/s_mc = 1.114
				# res_shift_unc = math.sqrt((s_data_err / s_data) * (s_data_err / s_data) + (s_mc_err / s_mc)) * sigma shift
				# res_shift_unc = sqrt((0.453/8.831)^2+(0.340/7.93)^2) * sigma shift= 0.067* sigma shift (0.25*2*10 in datacard)
                                # 3 numbers: sf_err_unc, smear in datacard, * sigma, smear_unc*sigma
                                # 2016: 0.04 -> (0.04*20 = 0.8 -> 1%) and 0.25 in datacard
                                # 0.06 approx to 0.1: 0.1*4 = 0.4 => 1/4: 0.25 in datacard
                                # 0.067, 0.25, 5, 0.335 (0.4)
                                # 0.25 in smear datacard
                                
				hist_container = hist( [mass],[tmph_mass_matched] );	
                                mass_sigma = MASS_SIGMA[self._jet]
				mass_shift = MASS_SF[self._jet];
				mass_shift_unc = MASS_SF_ERR[self._jet] * mass_sigma; 
                                res_sigma = RES_SIGMA[self._jet]
				res_shift = RES_SF[self._jet];
				res_shift_unc = RES_SF_ERR[self._jet] * res_sigma; 

				# get new central value
				shift_val = mass - mass*mass_shift;
                                # shift by -2
                                #shift_val = -2/10 * shift_val
				tmp_shifted_h = hist_container.shift( tmph_mass_matched, shift_val);
				# get new central value and new smeared value
				smear_val = res_shift - 1.;
				tmp_smeared_h =  hist_container.smear( tmp_shifted_h[0] , smear_val)
				hmatched_new_central = tmp_smeared_h[0];
				if smear_val <= 0.: hmatched_new_central = tmp_smeared_h[1];

                                log.info("For %s"%tmph_mass_matched.GetName())
				log.info("Mass shift: %f and unc: %f and shift_val: %f"%(mass_shift,mass_shift_unc,shift_val))
				log.info("Before shift: %f"%tmph_mass_matched.Integral())
				log.info("After shift: %f "%tmp_shifted_h[0].Integral())
				log.info("Res shift: %f and unc: %f and smear_val: %f"%(res_shift,res_shift_unc,smear_val))
				log.info("Before smear: %f"%tmph_mass_matched.Integral())
				log.info("After smear: %f"%hmatched_new_central.Integral())

				# get shift up/down
				shift_unc = mass*mass_shift*mass_shift_unc;
                                #shift_unc = -2/10 * shift_unc
				hmatchedsys_shift = hist_container.shift( hmatched_new_central, shift_unc);
				# get res up/down
				hmatchedsys_smear = hist_container.smear( hmatched_new_central, res_shift_unc);	

                                hmatched_new_central.SetName(pFunc.GetName());
                                hmatchedsys_shift[0].SetName(pFunc.GetName()+"_scaleUp");
                                hmatchedsys_shift[1].SetName(pFunc.GetName()+"_scaleDown");
				hmatchedsys_smear[0].SetName(pFunc.GetName()+"_smearUp");
				hmatchedsys_smear[1].SetName(pFunc.GetName()+"_smearDown");
                                
                                #remove rho regions for smear,shift hists
                                hout = [hmatched_new_central,hmatchedsys_shift[0],hmatchedsys_shift[1],hmatchedsys_smear[0],hmatchedsys_smear[1]];
                                #removeRho(hout,iPt,int(lPt),self._jet); # tmp!

                                # Interpolation
                                if self._interpol: # and 'cat1' not in iCat: # tmp for 2016 samples
                                    if mass > 0 and mass != MASSW and mass != MASSZ:
                                        ht = hmatched_new_central.Clone(pFunc.GetName()+"_tmp_central")
                                        removeRho([ht],iPt,int(lPt),self._jet);
                                        print 'CUTSIGNAL ',ht.GetName(),ht.Integral(),CUTSIGNAL[self._jet]
                                        if ht.Integral() > CUTSIGNAL[self._jet]:
                                            lInterpolMasses.append(mass);     
                                            lInterpolShapes['central'].append(hmatched_new_central)
                                            lInterpolShapes['scaleUp'].append(hmatchedsys_shift[0])
                                            lInterpolShapes['scaleDown'].append(hmatchedsys_shift[1])
                                            lInterpolShapes['smearUp'].append(hmatchedsys_smear[0])
                                            lInterpolShapes['smearDown'].append(hmatchedsys_smear[1])
				
                                # write to validation
                                for h in hout:
                                    # remove rho before saving
                                    removeRho([h],iPt,int(lPt),self._jet);
                                    self._outfile_validation.cd()
                                    h.Write();
                                    tmprdh = RooDataHist(h.GetName(),h.GetName(),r.RooArgList(self._lMSD),h)
                                    getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                                    # create hists for scale pT
                                    if h.GetName().find("scale") > -1:
                                        pName=h.GetName().replace("scale","scalept")
                                        tmprdh = RooDataHist(pName,pName,r.RooArgList(self._lMSD),h)
                                        getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                                        # create hists for scale per category
                                        pName=h.GetName().replace("scale","scale%i"%int(lPt))
                                        print 'SCALE BY CAT %s '%("scale%i"%int(lPt)),pName
                                        tmprdh = RooDataHist(pName,pName,r.RooArgList(self._lMSD),h)
                                        getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
			else: 
				getattr(lW,'import')(pFunc,r.RooFit.RecycleConflictNodes())
				
                # signal interpolation
                if self._interpol and not (self._is2016 and 'cat1' in iCat) and not (self._jet == "CA15" and 'cat1' in iCat): 
                    #print '----- [Interpolating]: ',len(lInterpolMasses), lInterpolMasses,' for cat: ',iCat
                    morphedHistContainer = {}
                    for key,lShape in lInterpolShapes.iteritems():
                        morphedHistContainer[key] = hist(lInterpolMasses,lShape)

                    lDictMass = {
                        '50':  [75,[55.,60.,65.,70.]],
                        '75':  [100,[80.,85.,90.,95.]],
                        '100': [115,[105.,110.]],
                        '115': [125,[120.]],
                        '125': [150,[130.,135.,140.,145.]],
                        '150': [175,[155.,160.,165.,170.]],
                        '175': [200,[180.,185.,190.,195.]],
                        '200': [225,[205.,210.,215.,220.]],
                        '225': [250,[230.,235.,240.,245.]],
                        #'250': [300,[255.,260.,265.,270.,275.,280.,285.,290.,295.]]
                        '250': [275,[255.,260.,265.,270.]],
                        '275': [300,[280.,285.,290.,295.]],
                        '300': [350,[305.,310.,315.,320.,325.,330.,335.,340.,345.]],
                        '350': [400,[355.,360.,365.,370.,375.,380.,385.,390.,395.]],
                        '400': [450,[405.,410.,415.,420.,425.,430.,435.,440.,445.]],
                        }
                    lMasses = []
                    print 'linterpolMasses',lInterpolMasses
                    for iM,iL in lDictMass.iteritems():
                        if int(iM) in lInterpolMasses and iL[0] in lInterpolMasses:
                            lMasses.extend(iL[1])
                    print 'Interpolated masses ',lMasses
                    
                    if self._is2016:
                        lMasses.append(115)
                        lMasses.append(175)
                        lMasses.append(225)
                        lMasses.append(275)

                    for m in lMasses:
			#mid=-1
                        htmp ={}
                        # if self._jet == 'AK8':
                        #     if m > 200 and  int(lPt) == 2:
                        #         mid=len(lInterpolMasses)-3
                        #     if m > 250 and  int(lPt) == 3:
                        #         mid=len(lInterpolMasses)-2
                        # if mid != -1:
                        #     for key,lShapes in lInterpolShapes.iteritems():
                        #         htmp[key] = lShapes[mid].Clone("tmp_%s_%s_%s"%(str(m),iCat,key))
                        # else:
                        for key,container in morphedHistContainer.iteritems():
                            htmp[key] = container.morph(m,"_%s_%s"%(iCat,key))
                            if 'central' in key: 
                                htmp[key].SetName("zqq%i_%s" % (int(m),iCat));
                            else:
                                htmp[key].SetName("zqq%i_%s_%s"% (int(m),iCat,key));

                        hout = [htmp['central'],htmp['scaleUp'],htmp['scaleDown'],htmp['smearUp'],htmp['smearDown']];
			removeRho(hout,iPt,int(lPt),self._jet)

			for h in hout:
                                self._outfile_validation.cd()
				h.Write();
				tmprdh = RooDataHist(h.GetName(),h.GetName(),r.RooArgList(self._lMSD),h)
				getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
				if h.GetName().find("scale") > -1:
					pName=h.GetName().replace("scale","scalept")
					tmprdh = RooDataHist(pName,pName,r.RooArgList(self._lMSD),h)
					getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                                        # create scale hists by pt category
                                        pName=h.GetName().replace("scale","scale%i"%int(lPt))
                                        print 'SCALE BY CAT %s '%("scale%i"%int(lPt)),pName
                                        tmprdh = RooDataHist(pName,pName,r.RooArgList(self._lMSD),h)
                                        getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())

		log.info('Writing to workspace')
		for pData in iDatas:
			getattr(lW,'import')(pData,r.RooFit.RecycleConflictNodes())

                self._outfile_validation.cd()
		if iCat.find("pass_cat1") == -1:
			lW.writeToFile(iOutput,False)
		else:
			lW.writeToFile(iOutput)	
                #lW.Print()

        def signalScalePass(self,iHSig_inPtbin,iPt,iName):
                self._inputsigfile.cd()
                lSig = self._inputsigfile.Get(iName).Clone();
                lSig_inPtbin = proj("cat",str(iPt),lSig,self._mass_nbins,self._mass_lo,self._mass_hi)
                print 'Scaling pass ',iName,iHSig_inPtbin.Integral(),lSig_inPtbin.Integral()
                if iHSig_inPtbin.Integral() > 0:
                    lSig = self._inputsigfile.Get(iName).Clone();
                    lSig_inPtbin = proj("cat",str(iPt),lSig,self._mass_nbins,self._mass_lo,self._mass_hi)
                    iHSig_inPtbin.Scale(lSig_inPtbin.Integral()/iHSig_inPtbin.Integral())
                    # scale again
                    iHSig_inPtbin.Scale(KFACTORWIDTH)
                    iHSig_inPtbin.Scale(KFACTORJET)
                    '''
                    # smooth
                    if self._smooth:
                        iHSig_inPtbin.Smooth()
                        '''
##############################################################################
##############################################################################
#### E N D   O F   C L A S S
##############################################################################
##############################################################################

def main(options,args):
	
	global MASSES
        MASSES = massIterable(options.masses)

	#load input histograms: 2D histograms(mass,pT) of pass and fail region, for each MC and data
        lFile  = r.TFile(options.input);
        if options.sig: 
            lFileSig = r.TFile(options.sig);
            log.info('signal file %s'%options.sig)
        else: lFileSig = lFile
	(hpass,hfail) = loadHistograms(lFile,lFileSig,options)

	#build the workspaces
	dazsleRhalphabetBuilder(hpass,hfail,lFile,lFileSig,options);

def loadHistograms(ifile,ifilesig,options):

	print "---- [Load histograms]"
        lBackgrounds = ["wqq", "zqq", "qcd", "tqq"]
        lData = ["data_obs"]

	lHPass = {};
	lHFail = {};

        ifile.cd()

        # W,Z matched components - only need to scale by V_SF
        # 2016 W scaled to W_SF(1.35)*EWK*QCD * wscale[1.0,1.0,1.0,1.20,1.25,1.25,1.0] in Zqq_create(2017)
        # 2017 W scaled to newkfactors*EWK
        if options.is2016WZ:
            lHP1 = ifile.Get("wqq_2016_pass_matched").Clone()
            lHF1 = ifile.Get("wqq_2016_fail_matched").Clone()
        else:
            lHP1 = ifile.Get("wqq_pass_matched").Clone()
            lHF1 = ifile.Get("wqq_fail_matched").Clone()
        log.info('wqq_pass_matched %f'%lHP1.Integral())
        log.info('wqq_fail_matched %f'%lHF1.Integral())
	scaleHists(lHP1,0,1)
	scaleHists(lHF1,0,2)
        ## TMP: lets try scaling w(2017) to match w(2016) norm:
        if options.scaleWZ:
            lHP1.Scale(1/1.1)
            lHF1.Scale(1/1.1)
	log.info('wqq_pass_matched scaled %f'%lHP1.Integral())
	log.info('wqq_fail_matched scaled %f'%lHF1.Integral())
        lHPass["wqq"] = lHP1
        lHFail["wqq"] = lHF1

        # 2016 Z scaled to DY_SF(1.45)*EWK in Zqq_create(2016)
        # 2017 Z scaled to newKfactors*EWK
        if options.is2016WZ:
            lHP2 = ifile.Get("zqq_2016_pass_matched").Clone()
            lHF2 = ifile.Get("zqq_2016_fail_matched").Clone()
        else:
            lHP2 = ifile.Get("zqq_pass_matched").Clone()
            lHF2 = ifile.Get("zqq_fail_matched").Clone()
        log.info('zqq_pass_matched %f'%lHP2.Integral())
        log.info('zqq_fail_matched %f'%lHF2.Integral())
        scaleHists(lHP2,1,1)
        scaleHists(lHF2,1,2)
        ## TMP: lets try scaling z(2017) to match z(2016) norm:
        if options.scaleWZ:
            lHP2.Scale(1/1.4)
            lHF2.Scale(1/1.4)
        log.info('zqq_pass_matched scaled %f'%lHP2.Integral())
	log.info('zqq_fail_matched scaled %f'%lHF2.Integral())
        lHPass["zqq"] = lHP2
        lHFail["zqq"] = lHF2

        # QCD
        ifile.cd()
	lHP3 = ifile.Get("qcd_pass").Clone()
	lHF3 = ifile.Get("qcd_fail").Clone()
        log.info('qcd_pass %f'%lHP3.Integral())
        log.info('qcd_fail %f'%lHF3.Integral())
        lHPass["qcd"] = lHP3
        lHFail["qcd"] = lHF3

        # TT
	lHP4 = ifile.Get("tqq_pass").Clone()
        lHF4 = ifile.Get("tqq_fail").Clone()
        log.info('tqq_pass %f'%lHP4.Integral())
        log.info('tqq_fail %f'%lHF4.Integral())
        scaleHists(lHP4,2,1)
	scaleHists(lHF4,2,2)
        log.info('tqq_pass scaled %f'%lHP4.Integral())
        log.info('tqq_fail scaled %f'%lHF4.Integral())        
        # ST
	lTHP4 = ifile.Get("stqq_pass").Clone()
	lTHF4 = ifile.Get("stqq_fail").Clone()
	log.info('stqq_pass %f'%lTHP4.Integral())
	log.info('stqq_fail %f'%lTHF4.Integral())
	lHP4.Add(lTHP4)
	lHF4.Add(lTHF4)
	log.info('s+tqq_pass %f'%lHP4.Integral())
	log.info('s+tqq_fail %f'%lHF4.Integral())
        lHPass["tqq"] = lHP4
        lHFail["tqq"] = lHF4

	log.info('total mc pass %f'%(lHP1.Integral()+lHP2.Integral()+lHP3.Integral()+lHP4.Integral()))
        log.info('total mc fail %f'%(lHF1.Integral()+lHF2.Integral()+lHF3.Integral()+lHF4.Integral()))

	if options.pseudo:
		lHP0 = lHP3.Clone("data_obs_pass")
		lHF0 = lHF3.Clone("data_obs_fail")
		lHF0.Add(lHF1)
		lHF0.Add(lHF2)
		lHF0.Add(lHF4)
		lHP0.Add(lHP1)
		lHP0.Add(lHP2)
		lHP0.Add(lHP4)
		log.info('data(mc) pass %f'%lHP0.Integral())
		log.info('data(mc) fail %f'%lHF0.Integral())
	elif options.pseudo15:
		lHF0 = lHF3.Clone("data_obs_fail")
		lHP0 = lHF3.Clone("data_obs_pass");
		lHP0.Scale(0.05);
		lHP0.Add(lHP1)
		lHP0.Add(lHP2)
		lHP0.Add(lHP4)
		lHF0.Add(lHF1)
                lHF0.Add(lHF2)
                lHF0.Add(lHF4)
	else:
		lHP0 = ifile.Get("data_obs_pass").Clone()
		lHF0 = ifile.Get("data_obs_fail").Clone()
        log.info('data_pass %f'%lHP0.Integral())
        log.info('data_fail %f'%lHF0.Integral())
        lHPass["data_obs"] = lHP0
        lHFail["data_obs"] = lHF0

        for lH in (lHPass.values()+lHFail.values()):
            lH.SetDirectory(0)

	# Z' signals already scaled to DY_SF(1.45) in Zqq_create
        for mass in MASSES:
            ifile.cd()
            if not options.is2016:
                lpass = ifile.Get("zqq"+str(mass)+"_pass_matched").Clone()
                lfail = ifile.Get("zqq"+str(mass)+"_fail_matched").Clone()
            else:
                lpass = ifile.Get("zqq"+str(mass)+"_2016_pass_matched").Clone()
                lfail = ifile.Get("zqq"+str(mass)+"_2016_fail_matched").Clone()
            log.info('Getting histogram for mass: '+str(mass))
            log.info(lpass.GetName()+' '+str(lpass.Integral()))
            log.info(lfail.GetName()+' '+str(lfail.Integral()))
            lpass.SetDirectory(0)
            lfail.SetDirectory(0)
            

            #scale N2DDT = 0.2  templates back to 0.0
            ifilesig.cd()
            #lpassN2 = ifilesig.Get("zqq"+str(mass)+"_pass_matched").Clone()
            lfailN2 = ifilesig.Get("zqq"+str(mass)+"_fail_matched").Clone()
            #print mass,lpassN2.Integral(),lpass.Integral()
            #lpass.Scale(lpassN2.Integral()/lpass.Integral())
            lfail = lfailN2
            #log.info('After scaling histogram for mass: '+str(mass))
            #log.info(lpass.GetName()+' '+str(lpass.Integral()))
            #log.info(lfail.GetName()+' '+str(lfail.Integral()))
            #print mass,lpass.Integral()

            scaleHists(lpass,1,1)
            scaleHists(lfail,1,2)
            # tmp: scale back signals
            if not options.is2016:
                lpass.Scale(KFACTORWIDTH)
                lfail.Scale(KFACTORWIDTH)
                lpass.Scale(KFACTORJET)
                lfail.Scale(KFACTORJET)
                if options.forcomb:
                    lpass.Scale(1/2.25)
                    lfail.Scale(1/2.25)
                log.info(lpass.GetName()+' scaled '+str(lpass.Integral()))
                log.info(lfail.GetName()+' scaled '+str(lfail.Integral()))
            lpass.SetDirectory(0)
            lfail.SetDirectory(0)

            lpass.Smooth()
            lfail.Smooth()

            lHPass["zqq"+str(mass)] = lpass
            lHFail["zqq"+str(mass)] = lfail                

        for lH in (lHPass.values()+lHFail.values()):
            log.info("loaded 2D histogram %s with integral %f"%(lH.GetName(), lH.Integral()))
            
	# remove rho regions
        removeRho(lHPass,0,0,options.jet)
        removeRho(lHFail,0,0,options.jet)

        for lH in (lHPass.values()+lHFail.values()):
            log.info("loaded 2D histogram %s with integral %f (after rho cut)"%(lH.GetName(), lH.Integral()))

	return (lHPass,lHFail);

##-------------------------------------------------------------------------------------
if __name__ == '__main__':
	parser = OptionParser()
	parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
        parser.add_option('-v', action='store_true', dest='verbose', default=False, help='verbose')
        parser.add_option('--np', dest="np", type=int,default=3, help='degree poly pt')
        parser.add_option('--nr', dest="nr", type=int,default=4, help='degree poly rho')
        parser.add_option('--masses',dest='masses', default='50,75,100,115,125,150,175,200,225,250,275,300',type="string", help="masses of resonance")
        parser.add_option('--freeze', action='store_true', dest='freeze', default=False, help='freeze pol values', metavar='freeze')
	parser.add_option('--pseudo', action='store_true', dest='pseudo', default =False,help='data = MC', metavar='isData')
	parser.add_option('--pseudo15', action='store_true', dest='pseudo15', default =False,help='data = MC (fail) and fail*0.05 (pass)', metavar='isData')
        parser.add_option('--pseudo17', action='store_true', dest='pseudo17', default =False,help='data = MC (fail) and fail*0.05 (pass)', metavar='isData')
	parser.add_option('--input', dest='input', default = 'histInputs/2016hist_1DZqq-dataReRecoSpring165eff-3481-Gridv130-final.root',help='input histograms')
        parser.add_option('--sig', dest='sig', default = None, help='input signals')
        parser.add_option('--rfile', dest='inputrfile', default = 'mlfit_bonly.root',help='file for poly freeze')
        parser.add_option('--ronly', action='store_true', dest='onlyRhalph', default=False, help='running rhalph only')
        parser.add_option('--mcstat', action='store_true', dest='mcstat', default=False, help='do bin by bin unc')
        parser.add_option('--syst', action='store_true', dest='syst', default=False, help='pick unc from templates')
        parser.add_option('--interpol', action='store_true', dest='interpol', default=False, help='do signal interpolation')
        parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
        parser.add_option('--forcomb', action='store_true', dest='forcomb',  default=False, help='combine with 2016')
        parser.add_option('--smooth', action='store_true', dest='smooth',  default=False, help='smooth pass histogram')
        parser.add_option('--scaleWZ', action='store_true', dest='scaleWZ', default=False, help='scale W and Z to match 2017')
        parser.add_option('--is2016', action='store_true', dest='is2016',  default=False, help='is 2016 signal samples')
        parser.add_option('--is2016WZ', action='store_true', dest='is2016WZ',  default=False, help='is 2016 W and Z samples')

	(options, args) = parser.parse_args()

	if options.verbose:
            log.basicConfig(format="%(levelname)s: %(message)s", level=log.DEBUG)
	else:
            log.basicConfig(format="%(levelname)s: %(message)s")

	import tdrstyle
	tdrstyle.setTDRStyle()
	r.gStyle.SetPadTopMargin(0.10)
	r.gStyle.SetPadLeftMargin(0.16)
	r.gStyle.SetPadRightMargin(0.10)
	r.gStyle.SetPalette(1)
	r.gStyle.SetPaintTextFormat("1.1f")
	r.gStyle.SetOptFit(0000)
	r.gROOT.SetBatch()
	
	main(options,args)
##-------------------------------------------------------------------------------------
