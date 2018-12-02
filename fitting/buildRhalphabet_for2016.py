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
sys.path.insert(0, '.')
from tools import *
from hist import *

MASSBINS,MASSLO,MASSHI = {},{},{}
MASSBINS['AK8'] = 60
MASSLO['AK8'] = 30
MASSHI['AK8'] = 330
MASSBINS['CA15'] = 80
MASSLO['CA15'] = 60
MASSHI['CA15'] = 500

MASS_SF,MASS_SF_ERR = {},{}
MASS_SF['AK8'] = 1.000 # 1.001
MASS_SF_ERR['AK8'] = 0.03
MASS_SF['CA15'] = 1.001
MASS_SF_ERR['CA15'] = 0.03

RES_SF,RES_SF_ERR = {},{}
RES_SF['AK8'] = 1.100 #1.114
RES_SF_ERR['AK8'] = 0.08 #0.067
RES_SF['CA15'] = 1.100
RES_SF_ERR['CA15'] = 0.08

TT_SF,TT_PT = {},{}
TT_SF['AK8'] = 0.83
TT_PT['AK8'] = [1.0,0.8,0.75,0.7,0.6,0.5,0.5]
TT_SF['CA15'] = 0.83
TT_PT['CA15'] = [1.0,0.8,0.75,0.7,0.6,0.5,0.5]

V_SF,V_SF_ERR = {},{}
V_SF['AK8'] = 0.89
V_SF_ERR['AK8'] = 0.066
V_SF['CA15'] = 0.89
V_SF_ERR['CA15'] = 0.066

RHO_RANGE,MASSES = {},{}
RHO_RANGE['AK8'] = [-5.5,-2.1]
RHO_RANGE['CA15'] = [-5.5,-2.1]
MASSES['AK8'] = []
MASSES['CA15'] = []

fWScale=[1.0,1.0,1.0,1.20,1.25,1.25,1.0]
fHists=[]

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
    if iType == 0 and iPassId > 0: # tmp
        log.info('Scaling %s by wscale'%(iHist.GetName()))
        for i0 in range(1,iHist.GetNbinsX()+1):
            for i1 in range(1,iHist.GetNbinsY()+1):
                iHist.SetBinContent(i0,i1,iHist.GetBinContent(i0,i1)*fWScale[i1])
    if iType == 2:
        for i0 in range(1,iHist.GetNbinsX()+1):
            for i1 in range(1,iHist.GetNbinsY()+1):
                #log.info("Scaling %s in bins %i %i, by TT_PT = %f"%(iHist.GetName(),i0,i1,TT_PT[iJet][i1]))
                iHist.SetBinContent(i0,i1,iHist.GetBinContent(i0,i1)*TT_PT[iJet][i1])
        if iPassId == 1:
            log.info("Scaling %s by TT_SF = %f"%(iHist.GetName(),TT_SF[iJet]))
            iHist.Scale(TT_SF[iJet])
        if iPassId == 2:
            log.info("Scaling %s by (1/1-0.1*(1-TT_SF)) = %f"%(iHist.GetName(),(1./(1-0.1*(1-TT_SF[iJet])))))
            iHist.Scale(1./(1-0.1*(1-TT_SF[iJet])))
            
# def removeRho(iHists,iPt=0,ilPt=0,iJet='AK8'):
#     for lH in (iHists):
#         for i0 in range(1,MASSBINS['AK8']+1):
#             lmass = lH.GetXaxis().GetBinCenter(i0)
#             if iPt == 0:
#                 for i1 in range(1,lH.GetNbinsY()+1):
#                     lpt = lH.GetYaxis().GetBinLowEdge(i1) + lH.GetYaxis().GetBinWidth(i1) * 0.3
#                     lrho = r.TMath.Log(lmass*lmass/lpt/lpt)
#                     if ((i0 > 31 or i0 < 0) and i1 == 1) or ((i0 > 38 or i0 < 4) and i1 == 2) or ((i0 > 46 or i0 < 5) and i1 == 3) or ((i0 > 56 or i0 < 7) and i1 == 4) or (i0 < 7 and i1 == 5):
#                         lH.SetBinContent(i0, i1, 0);
#             else:
#                 lpt = iPt
#                 pPt = ilPt
#                 lrho = r.TMath.Log(lmass*lmass/iPt/iPt)
#                 if ((i0 > 31 or i0 < 0) and pPt == 1) or ((i0 > 38 or i0 < 4) and pPt == 2) or ((i0 > 46 or i0 < 5) and pPt == 3) or ((i0 > 56 or i0 < 7) and pPt == 4) or (i0 < 7 and pPt == 5):
#                     lH.SetBinContent(i0, 0);
#         lH.SetDirectory(0);

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
                        log.info("2D HISTO: Removing rho = %.2f for %s, pt bin [%i, %i], mass bin [%i,%i]" % (
                                lrho, lH.GetName(), lH.GetYaxis().GetBinLowEdge(i1), lH.GetYaxis().GetBinUpEdge(i1),
                                lH.GetXaxis().GetBinLowEdge(i0), lH.GetXaxis().GetBinUpEdge(i0)))
                        lH.SetBinContent(i0, i1, 0);
            lH.SetDirectory(0);
    else:
        for lH in iHists:
            log.info('Going to remove Rho region in range %f %f for %s'%(RHO_RANGE[iJet][0], RHO_RANGE[iJet][1], lH.GetName()))
            for i0 in range(1,MASSBINS[iJet]+1):
                lmass = lH.GetXaxis().GetBinCenter(i0)
                lpt = iPt
                pPt = iPtCat
                lrho = r.TMath.Log(lmass*lmass/lpt/lpt)
                if lrho < RHO_RANGE[iJet][0] or lrho > RHO_RANGE[iJet][1]:
                    log.info("1D HISTO: Removing rho = %.2f for %s, pt %f, mass bin [%i,%i]" % (
                            lrho, lH.GetName(), lpt,
                            lH.GetXaxis().GetBinLowEdge(i0), lH.GetXaxis().GetBinUpEdge(i0)))
                    lH.SetBinContent(i0, 0);
            lH.SetDirectory(0);

class dazsleRhalphabetBuilder: 

        def __init__( self, hpass, hfail, inputfile, inputsigfile, inputrfile, nr=4, np=3, onlyRhalph = False, freeze_poly = False, mcstat = False, syst = False, interpol = True, jet = 'AK8'): 

		self._hpass = hpass;
		self._hfail = hfail;
		self._inputfile = inputfile;
                self._inputsigfile = inputsigfile;
                self._inputrfile = inputrfile;
                self._onlyRhalph = onlyRhalph;
                self._onlyInputs = False;
                self._freeze = freeze_poly;
                self._mcstat = mcstat;
                self._syst = syst;
                self._interpol = interpol;
                self._jet = jet;

		self._outputName = "base.root";
		self._outfile_validation = r.TFile("validation.root","RECREATE");

		# mass bins
		self._mass_nbins = MASSBINS[jet];
		self._mass_lo    = MASSLO[jet];
		self._mass_hi    = MASSHI[jet];
		log.info("Number of mass bins %f and lo: %f hi: %f "%(self._mass_nbins, self._mass_lo, self._mass_hi));

		# rho range
		self._rho_lo = RHO_RANGE[jet][0];
		self._rho_hi = RHO_RANGE[jet][1];
		log.info(" Rho: Low : %f High: %f"%(self._rho_lo, self._rho_hi));

		# polynomial order for fit
		self._poly_lNP = np; # 3rd order in pT
		self._poly_lNR = nr; # 4th order in rho

		# pt bins
                self._nptbins = hpass["data_obs"].GetYaxis().GetNbins();
                self._pt_lo = hpass["data_obs"].GetYaxis().GetBinLowEdge( 1 );
                self._pt_hi = hpass["data_obs"].GetYaxis().GetBinUpEdge( self._nptbins );
	
		# define RooRealVars
		self._lMSD    = r.RooRealVar("x","x",self._mass_lo,self._mass_hi);
		self._lMSD.setBins(self._mass_nbins);		
		self._lPt     = r.RooRealVar("pt","pt",self._pt_lo,self._pt_hi);
		self._lPt.setBins(self._nptbins);
		self._lRho    = r.RooFormulaVar("rho","log(x*x/pt/pt)",r.RooArgList(self._lMSD,self._lPt));

		self._lEff    = r.RooRealVar("veff"      ,"veff"      ,0.5 ,0.,1.0);
		self._lEffQCD = r.RooRealVar("qcdeff"    ,"qcdeff"    ,0.01 ,0.,10);

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
			self._lEffQCD.setVal(qcdeff); # FIXME: xcheck this with 0.05/0.95
			log.info("Set qcdeff = %f"%qcdeff);

                # define PolyVar with n = (order in pt)*(order in rho)-1 parameters
                self._lpolyArray = []
                self.buildPolynomialArray(self._lpolyArray,self._poly_lNR,self._poly_lNP,"r","p",-1.0,1.0)
                #self.buildPolynomialArray(self._lpolyArray,self._poly_lNR,self._poly_lNP,"r","p",-50.0,50.0)
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
                        # approximate pT bin number
			print "------- pT bin number ",ipt	      
                        pPt = self._hpass["data_obs"].GetYaxis().GetBinLowEdge(ipt)+self._hpass["data_obs"].GetYaxis().GetBinWidth(ipt)*0.3;
	
                        # 1d histograms in each pT bin (in the order... data, w, z, qcd, top, signals)
                        hpass_inPtBin = {};
                        hfail_inPtBin = {};
                        for ih, h in self._hpass.iteritems():
                            lpass_inPtBin = proj("cat",str(ipt),h,self._mass_nbins,self._mass_lo,self._mass_hi)
                            removeRho([lpass_inPtBin],pPt,ipt,self._jet)
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

			# get signals and SM backgrounds
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

			lroopoly = self.buildRooPolyArray(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,self._lpolyArray)                        
			log.info("RooPolyArray: ")
			lroopoly.Print()

			pSum = 0
			pRes = 0

			for i1 in range(0,len(iHs)):
				pSum = pSum + iHs[i1].GetBinContent(i0) if i1 == 0 else pSum - iHs[i1].GetBinContent(i0); # subtract W/Z from data
				if i1 > 0 : pRes += iHs[i1].GetBinContent(i0)
			if pSum < 0: pSum = 0

			# 10 sigma range + 10 events
                        pUnc = math.sqrt(pSum)*10+10
			pUnc += pRes
			# define the failing category
			pFail = r.RooRealVar(lName+"_fail_"+iCat+"_Bin"+str(i0),lName+"_fail_"+iCat+"_Bin"+str(i0),pSum,max(pSum-pUnc,0),max(pSum+pUnc,0))
			log.info("Fail_bin_var: ")
			pFail.Print()

			# now define the passing cateogry based on the failing (make sure it can't go negative)
                        log.info("QCD EFF: ")
                        self._lEffQCD.Print()
			lArg = r.RooArgList(pFail,lroopoly,self._lEffQCD)
			pPass = r.RooFormulaVar(lName+"_pass_"+iCat+"_Bin"+str(i0),lName+"_pass_"+iCat+"_Bin"+str(i0),"@0*max(@1,0)*@2",lArg)
			log.info("Pass=fail*poly*eff RooFormulaVar: ")
			pPass.Print()

			pSumP = 0
			for i1 in range(0,len(iHPs)):
			        pSumP = pSumP + iHPs[i1].GetBinContent(i0) if i1 == 0 else pSumP - iHPs[i1].GetBinContent(i0); # subtract W/Z from data 
			if pSumP < 0: pSumP = 0

			# if the number of events in the failing is small remove the bin from being free in the fit
			if pSum < 5:# and pSumP < 5:
                                # pFail = r.RooRealVar(lName+"_pass_"+iCat+"_Bin"+str(i0),lName+"_pass_"+iCat+"_Bin"+str(i0),pSum ,0.,max(pSum,0.1))
                                print 'Too small number on fail %f'%pSum
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
		log.info("Print pass and fail RooParametricHists")
		lPass.Print()
		lFail.Print()
		lNPass = r.RooAddition(lName+"_pass_"+iCat+"_norm",lName+"_pass_"+iCat+"_norm",lPassBins)
		lNFail = r.RooAddition(lName+"_fail_"+iCat+"_norm",lName+"_fail_"+iCat+"_norm",lFailBins)
		log.info("Printing NPass and NFail variables:")
		lNPass.Print()
		lNFail.Print()
		self._allShapes.extend([lPass,lFail,lNPass,lNFail])
		
		# now write the workspace with the rooparamhist
		lWPass = r.RooWorkspace("w_pass_"+str(iCat))
		lWFail = r.RooWorkspace("w_fail_"+str(iCat))
		getattr(lWPass,'import')(lPass,r.RooFit.RecycleConflictNodes())
		getattr(lWPass,'import')(lNPass,r.RooFit.RecycleConflictNodes())
		getattr(lWFail,'import')(lFail,r.RooFit.RecycleConflictNodes())
		getattr(lWFail,'import')(lNFail,r.RooFit.RecycleConflictNodes())
		log.info("Printing rhalphabet workspace:")
		lWPass.Print()
		if iCat.find("1") > -1:
			lWPass.writeToFile("ralpha"+self._outputName.replace(".root","_"+str(self._poly_lNP)+str(self._poly_lNR)+"_pt.root"))
		else:
			lWPass.writeToFile("ralpha"+self._outputName.replace(".root","_"+str(self._poly_lNP)+str(self._poly_lNR)+"_pt.root"),False)
		lWFail.writeToFile("ralpha"+self._outputName.replace(".root","_"+str(self._poly_lNP)+str(self._poly_lNR)+"_pt.root"),False)
		return [lPass,lFail]

	def buildRooPolyArray(self,iPt,iRho,iQCD,iZero,iVars):
		
		print "---- [buildRooPolyArray]"	
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
			pPol.Print()
			lRhoArray.add(pPol);
			self._allVars.append(pPol)

		lLabel="Var_RhoPol_Bin_"+str(round(iPt,2))+"_"+str(round(iRho,3))
		lRhoPol = r.RooPolyVar(lLabel,lLabel,lRho,lRhoArray)
		self._allVars.extend([lPt,lRho,lRhoPol])
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
                self._lEffQCD.setVal(lFit.floatParsFinal().find("qcdeff").getVal())

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
                    if self._freeze:
                        pCent = 0 if pVar == "p0r0" else lFit.floatParsFinal().find(pVar).getVal()
                        if pVar == "p0r0":
                            pXMin = pXMin*pVal
                            pXMax = pXMin*pVal
                            #pXmin = pXMin*0.1
                            #pXmax = pXMax*0.1
                        else:
                            pXmin = pXMin*pVal
                            pXmax = pXMax*pVal
                            #pXMin = (lFit.floatParsFinal().find(pVar).getVal() - 10*lFit.floatParsFinal().find(pVar).getError()*abs(pXmin))
                            #pXMax = (lFit.floatParsFinal().find(pVar).getVal() + 10*lFit.floatParsFinal().find(pVar).getError()*abs(pXmax))
                            #print 'this Min %f vs %f'%(pXMin,lFit.floatParsFinal().find(pVar).getVal() - lFit.floatParsFinal().find(pVar).getError() )
                            #print 'this Max %f vs %f'%(pXMax,lFit.floatParsFinal().find(pVar).getVal() + lFit.floatParsFinal().find(pVar).getError() )
                    else:
                        pCent = 0
                        pXMin = pXMin#*pVal
                        pXMax = pXMax#*pVal
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
		#4 and 5 are pass and fail mass shapes for each bkg, 0 and 1 are pass and fail RooHistPdfs, 2 and 3 are pass and fail extended likelihood
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
		#getting signals - skip data+MC (first 5 elm in iHP and iHF)
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

		# get the pT bin
		lPt = iCat[-1:];

		self._outfile_validation.cd();			

                if self._interpol:
                    lInterpolMasses = [];
                    lInterpolShape_central = [];
                    lInterpolShape_scaleUp = []; lInterpolShape_scaleDn = [];
                    lInterpolShape_smearUp = []; lInterpolShape_smearDn = [];

		for pFunc in iFuncs:
			log.info('Taking match and unmatched templates from %s'%pFunc.GetName())
			
			process = pFunc.GetName().split("_")[0];
			cat     = pFunc.GetName().split("_")[1];
			mass    = 0.;
                        systematics = ['JES', 'JER', 'trigger', 'mcstat','Pu']
                        if "wqq" in process: procid = 0;
                        if "zqq" in process: procid = 1;
                        if "tqq" in process: procid = 2;
                        passid = 1 if "pass" in cat  else 2
                        if ('tqq' in process or 'wqq' in process or 'zqq' in process) and self._syst:
                            hout = []
                            histDict = {}
                            for syst in systematics:
                                if syst == 'mcstat':
                                    if self._mcstat:
                                        matchingString = ''
                                        if ('wqq' in process or 'zqq' in process): matchingString = '_matched'
                                        tmph = self._inputfile.Get(process + '_' + cat + matchingString).Clone(process + '_' + cat)
                                        tmph_up = self._inputfile.Get(process + '_' + cat + matchingString).Clone(process + '_' + cat + '_' + syst + 'Up')
                                        tmph_down = self._inputfile.Get(process + '_' + cat + matchingString).Clone(process + '_' + cat + '_' + syst + 'Down')
                                        scaleHists(tmph,procid,passid)
                                        scaleHists(tmph_up,procid,passid)
                                        scaleHists(tmph_down,procid,passid)
                                        tmph_mass = proj("cat",str(lPt),tmph,self._mass_nbins,self._mass_lo,self._mass_hi);
                                        tmph_mass_up = proj('cat', str(lPt), tmph_up, self._mass_nbins, self._mass_lo, self._mass_hi)
                                        tmph_mass_down = proj('cat', str(lPt), tmph_down, self._mass_nbins, self._mass_lo,self._mass_hi)
                                        for i in range(1, tmph_mass_up.GetNbinsX() + 1):
                                            mcstatup = tmph_mass_up.GetBinContent(i) + tmph_mass_up.GetBinError(i)
                                            mcstatdown = max(0., tmph_mass_down.GetBinContent(i) - tmph_mass_down.GetBinError(i))
                                            tmph_mass_up.SetBinContent(i, mcstatup)
                                            tmph_mass_down.SetBinContent(i, mcstatdown)
                                        histDict[pFunc.GetName()] = tmph_mass
                                        histDict[pFunc.GetName() + '_' + pFunc.GetName().replace('_', '') + syst + 'Up'] = tmph_mass_up
                                        histDict[pFunc.GetName() + '_' + pFunc.GetName().replace('_', '') + syst + 'Down'] = tmph_mass_down
                                        if 'tqq' in process:
                                            hout.append(tmph_mass)
                                            # hout.append(tmph_mass_up)
                                            # hout.append(tmph_mass_down)
                                else:
                                    print process + '_' + cat + '_' + syst + 'Up'
                                    print process + '_' + cat + '_' + syst + 'Down'
                                    tmph_up = self._inputfile.Get(process + '_' + cat + '_' + syst + 'Up').Clone()
                                    tmph_down = self._inputfile.Get(process + '_' + cat + '_' + syst + 'Down').Clone()                            
                                    scaleHists(tmph_up,procid,passid)
                                    scaleHists(tmph_down,procid,passid)
                                    if procid == 0: #tmp
                                        scaleHists(tmph_up,1.35)
                                        scaleHists(tmph_down,1.35)
                                        log.info("Scaling %s by 1.35"%tmph_up.GetName())
                                        log.info("Scaling %s by 1.35"%tmph_down.GetName())
                                    tmph_mass_up = proj('cat', str(lPt), tmph_up, self._mass_nbins, self._mass_lo, self._mass_hi)
                                    tmph_mass_down = proj('cat', str(lPt), tmph_down, self._mass_nbins, self._mass_lo, self._mass_hi)
                                    tmph_mass_up.SetName(pFunc.GetName() + '_' + syst + 'Up')
                                    tmph_mass_down.SetName(pFunc.GetName() + '_' + syst + 'Down')
                                    hout.append(tmph_mass_up)
                                    hout.append(tmph_mass_down)

                                if self._mcstat:
                                    uncorrelate(histDict, 'mcstat')
                                    for key, myhist in histDict.iteritems():
                                        if 'mcstat' in key:
                                            hout.append(myhist)

                                # remove rho regions
                                removeRho(hout,iPt,int(lPt),self._jet)
                                for h in hout:
                                    tmprdh = RooDataHist(h.GetName(),h.GetName(),r.RooArgList(self._lMSD),h)
                                    getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                                    self._outfile_validation.cd()
                                    h.Write()

			if iShift and ("wqq" in process or "zqq" in process):

                                lFile = self._inputsigfile;
				if process == "wqq": mass = 80.;
				elif process == "zqq": mass = 91.;
				elif process == "tqq": mass = 80.;
				else: 
                                    mass = float(process[3:])
				log.info("process %s, mass %f"%(process,mass))

                                lFile.cd()
				# get the matched and unmatched hist and scale them by V_SF
				tmph_matched = lFile.Get(process+"_"+cat+"_matched").Clone();
                                tmph_unmatched = lFile.Get(process+"_"+cat+"_unmatched").Clone();
                                for lH in [tmph_matched,tmph_unmatched]:
                                    log.info("before scaling template %s, integral: %f"%(lH.GetName(),lH.Integral()))

                                scaleHists(tmph_matched,procid,passid)
                                scaleHists(tmph_unmatched,procid,0)
                                if procid == 0:
                                    log.info("Scaling %s by 1.35"%tmph_matched.GetName())
                                    tmph_matched.Scale(1.35)
                                    log.info("Scaling %s by 1.35"%tmph_unmatched.GetName())
                                    tmph_unmatched.Scale(1.35)
                                if procid == 1:
                                    log.info("Scaling %s by 1.45/1.35"%tmph_matched.GetName())
                                    tmph_matched.Scale(1.45/1.35)
                                for lH in [tmph_matched,tmph_unmatched]:
                                    log.info("after scaling template %s, integral: %f"%(lH.GetName(),lH.Integral()))

				# project each into mass axis
				tmph_mass_matched = proj("cat",str(lPt),tmph_matched,self._mass_nbins,self._mass_lo,self._mass_hi);
				tmph_mass_unmatched = proj("cat",str(lPt),tmph_unmatched,self._mass_nbins,self._mass_lo,self._mass_hi);
                                removeRho([tmph_mass_matched,tmph_mass_unmatched],iPt,int(lPt),self._jet)

				if pFunc.GetName() == "zqq300_pass_cat5": # bork the last 2 bins!
					tmph_mass_matched.SetBinContent(59,0.);
					tmph_mass_matched.SetBinContent(59,0.);
					tmph_mass_unmatched.SetBinContent(60,0.);
					tmph_mass_unmatched.SetBinContent(60,0.);
                                        
                                log.info('MATCHED AND UNMATCHED CONTENT')
                                for lH in [tmph_mass_matched,tmph_mass_unmatched]:
                                   print lH.GetName(), lH.Integral()

				# smear/shift the matched
				# mass_shift = MASS_SF = m_data/m_mc = 1.001+/-0.05
				# MASS_SF_ERR = sqrt((0.323/82.333)^2+(0.433/82.215)^2) = 0.0065
				# mass_shift_unc =  math.sqrt((m_data_err / m_data) * (m_data_err / m_data) + (m_mc_err / m_mc)) * sigma shift
				# mass_shift_unc = MASS_SF_ERR*sigma shift (MASS_SF_ERR = 0.03) 2*1/15 = 0.06/2 = 0.03? (0.03*2*10 in datacard)
				# resolution = 1.1+0.4  
				# res_shift = s_data/s_mc = 1.114
				# res_shift_unc = math.sqrt((s_data_err / s_data) * (s_data_err / s_data) + (s_mc_err / s_mc)) * sigma shift
				# res_shift_unc = sqrt((0.453/8.831)^2+(0.340/7.93)^2) * sigma shift= 0.067* sigma shift (0.25*2*10 in datacard)

                                hist_container = hist( [mass],[tmph_mass_matched] );
                                mass_shift = 1.0;
                                mass_shift_unc = 0.005*30; # This is 30 sigma shift!  Change the card accordingly                                                             
                                # 0.15/0.005 -> 30 sigma shift: 0.03 in datacard, 0.005 well 0.006 from mass SF (rel unc.)                                                      
                                res_shift = 1.1;
                                res_shift_unc = 0.1*4;
                                # we use 1.1+/-0.1 so 4 sigma shift 1/4 = 0.25 in card                                                                                           
                                # 0.4/0.067 -> 5.97 sigma shift but rounded number                                                                                            
                                # to avoid numerical instability We smear by 40% and scale nuisance strength down to 25%

				# get new central value
				shift_val = mass - mass*mass_shift;
				tmp_shifted_h = hist_container.shift( tmph_mass_matched, shift_val);
				# get new central value and new smeared value
				smear_val = res_shift - 1.;
				tmp_smeared_h =  hist_container.smear( tmp_shifted_h[0] , smear_val)
				hmatched_new_central = tmp_smeared_h[0];
				if smear_val <= 0.: hmatched_new_central = tmp_smeared_h[1];
				tmph_mass_matched.GetName()
				log.info("Mass shift: %f and unc: %f and shift_val: %f"%(mass_shift,mass_shift_unc,shift_val))
				log.info("Before shift: %f"%tmph_mass_matched.Integral())
				log.info("After shift: %f "%tmp_shifted_h[0].Integral())
				log.info("Res shift: %f and unc: %f and smear_val: %f"%(res_shift,res_shift_unc,smear_val))
				log.info("Before smear: %f"%tmph_mass_matched.Integral())
				log.info("After smear: %f"%hmatched_new_central.Integral())

				# get shift up/down
				shift_unc = mass*mass_shift*mass_shift_unc;
				hmatchedsys_shift = hist_container.shift( hmatched_new_central, shift_unc);
				# get res up/down
				hmatchedsys_smear = hist_container.smear( hmatched_new_central, res_shift_unc);	

                                # tmp
				hmatched_new_central.SetName(pFunc.GetName());
				if mass == 50 and int(lPt) > 2:
                                    hmatchedsys_shift[1] = hmatched_new_central.Clone("zqq50"+str(cat)+"_"+str(lPt)+"tmpScaleDn")
                                if (mass == 50 and int(lPt) > 3) or (mass == 250 and int(lPt) < 2): # basically 50 GeV is 1 event
                                    # tmp for 40% WP: 
                                    #if (hmatchedsys_shift[0].Integral() == 0 or tmph_mass_unmatched.Integral() == 0): continue
                                    log.info("basically 50 GeV is 1 event ")
                                    log.info("matched sys shift integral %f"%hmatchedsys_shift[0].Integral())
                                    log.info("tmph mass unmatched adding back %f"%tmph_mass_unmatched.Integral())
                                    pInt = hmatched_new_central.Integral()+0.01
                                    hmatched_new_central.Add(tmph_mass_unmatched); hmatched_new_central.Scale(pInt/hmatched_new_central.Integral());
                                    hmatchedsys_shift[0].Add(tmph_mass_unmatched); hmatchedsys_shift[0].Scale(pInt/hmatchedsys_shift[0].Integral());
                                    hmatchedsys_shift[1].Add(tmph_mass_unmatched); hmatchedsys_shift[1].Scale(pInt/hmatchedsys_shift[1].Integral());
                                    hmatchedsys_smear[0].Add(tmph_mass_unmatched); hmatchedsys_smear[0].Scale(pInt/hmatchedsys_smear[0].Integral());
                                    hmatchedsys_smear[1].Add(tmph_mass_unmatched); hmatchedsys_smear[1].Scale(pInt/hmatchedsys_smear[1].Integral());
				if (mass == 300 and int(lPt) < 3):
                                    log.info("basically 300 GeV is 1 event ")
                                    log.info("matched sys shift integral %f"%hmatchedsys_shift[0].Integral())
                                    log.info("tmph mass unmatched adding back %f"%tmph_mass_unmatched.Integral())
                                    # tmp for 40% WP:                                                                                                       
                                    #if (hmatchedsys_shift[0].Integral() == 0 or tmph_mass_unmatched.Integral() == 0): continue
                                    pInt = hmatched_new_central.Integral()+0.01
                                    hmatched_new_central.Add(tmph_mass_unmatched); hmatched_new_central.Scale(pInt/hmatched_new_central.Integral());
                                    hmatchedsys_shift[0].Add(tmph_mass_unmatched); hmatchedsys_shift[0].Scale(pInt/hmatchedsys_shift[0].Integral());
                                    hmatchedsys_shift[1].Add(tmph_mass_unmatched); hmatchedsys_shift[1].Scale(pInt/hmatchedsys_shift[1].Integral());
                                    hmatchedsys_smear[0].Add(tmph_mass_unmatched); hmatchedsys_smear[0].Scale(pInt/hmatchedsys_smear[0].Integral());
                                    hmatchedsys_smear[1].Add(tmph_mass_unmatched); hmatchedsys_smear[1].Scale(pInt/hmatchedsys_smear[1].Integral());
                                # if (mass == 91 and int(lPt) == 5):
                                #     log.info("zqq for sideband is too small ")
                                #     pInt = hmatched_new_central.Integral()+0.01
                                #     hmatched_new_central.Add(tmph_mass_unmatched); hmatched_new_central.Scale(pInt/hmatched_new_central.Integral());
                                #     hmatchedsys_shift[0].Add(tmph_mass_unmatched); hmatchedsys_shift[0].Scale(pInt/hmatchedsys_shift[0].Integral());
                                #     hmatchedsys_shift[1].Add(tmph_mass_unmatched); hmatchedsys_shift[1].Scale(pInt/hmatchedsys_shift[1].Integral());
                                #     hmatchedsys_smear[0].Add(tmph_mass_unmatched); hmatchedsys_smear[0].Scale(pInt/hmatchedsys_smear[0].Integral());
                                #     hmatchedsys_smear[1].Add(tmph_mass_unmatched); hmatchedsys_smear[1].Scale(pInt/hmatchedsys_smear[1].Integral());
                                # wqq5 is 0 for ca15 scaleDown=scaleUp
                                if (mass == 80 and int(lPt) == 5 and 'CA15' in self._jet):
                                    hmatchedsys_shift[1] = hmatched_new_central.Clone("wqq"+str(cat)+"_"+str(lPt)+"tmpScaleDn")
                                if (mass == 91 and int(lPt) == 5 and 'CA15' in self._jet):
                                    hmatchedsys_shift[1] = hmatched_new_central.Clone("wqq"+str(cat)+"_"+str(lPt)+"tmpScaleDn")
				if process == "tqq":
					log.warning("Why is tqq here?")
					hmatchedsys_shift[0].SetName(pFunc.GetName()+"_tscaleUp");
					hmatchedsys_shift[1].SetName(pFunc.GetName()+"_tscaleDown");
				else:
					hmatchedsys_shift[0].SetName(pFunc.GetName()+"_scaleUp");
					hmatchedsys_shift[1].SetName(pFunc.GetName()+"_scaleDown");
				hmatchedsys_smear[0].SetName(pFunc.GetName()+"_smearUp");
				hmatchedsys_smear[1].SetName(pFunc.GetName()+"_smearDown");

                                # Interpolation
                                if self._interpol:
                                    if mass > 0 and mass != 80. and mass != 91.:# and mass != 250. and mass != 300.: 
					lInterpolMasses.append(mass);     
					lInterpolShape_central.append(hmatched_new_central) 
					lInterpolShape_scaleUp.append(hmatchedsys_shift[0]) 
					lInterpolShape_scaleDn.append(hmatchedsys_shift[1])  
					lInterpolShape_smearUp.append(hmatchedsys_smear[0])  
					lInterpolShape_smearDn.append(hmatchedsys_smear[1])  
				
				# remove rho regions for smear,shift hists
                                hout = [hmatched_new_central,hmatchedsys_shift[0],hmatchedsys_shift[1],hmatchedsys_smear[0],hmatchedsys_smear[1]];
				removeRho(hout,iPt,int(lPt),self._jet);

                                # write to validation
				for h in hout:
                                    self._outfile_validation.cd()
                                    h.Write();
                                    tmprdh = RooDataHist(h.GetName(),h.GetName(),r.RooArgList(self._lMSD),h)
                                    getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                                    if h.GetName().find("scale") > -1:
                                        pName=h.GetName().replace("scale","scalept")
                                        tmprdh = RooDataHist(pName,pName,r.RooArgList(self._lMSD),h)
                                        getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                                        
			else: 
				getattr(lW,'import')(pFunc,r.RooFit.RecycleConflictNodes())
				
                if self._interpol:
                    # do the signal interpolation
                    print '----- [Interpolating]: ',len(lInterpolMasses), lInterpolMasses,' for cat: ',iCat
                    morphedHistContainer_central = hist(lInterpolMasses,lInterpolShape_central);
                    morphedHistContainer_scaleUp = hist(lInterpolMasses,lInterpolShape_scaleUp);
                    morphedHistContainer_scaleDn = hist(lInterpolMasses,lInterpolShape_scaleDn);
                    morphedHistContainer_smearUp = hist(lInterpolMasses,lInterpolShape_smearUp);
                    morphedHistContainer_smearDn = hist(lInterpolMasses,lInterpolShape_smearDn);
                    interpolatedMasses = [55.,60.0,65.,70.,
                                          80.,85.,90.0,95.,
                                          105.,110.0,
                                          115., #tmp:removed 115
                                          120.,
                                          130.,135.0,140.,145.,
                                          155.,160.,165.0,170.,
                                          175., #tmp: removed 175
                                          180.0,185.,190.,195., 
                                          205.,210.,215.,220.,
                                          225., #tmp: removed 225
                                          230.,235.,240,245.,
                                          255.,260.,265.,270.,275.,
                                          280.,285.,290.,295.]
                    
                    if self._jet == 'CA15':
                        interpolatedMasses = [
                            175,
                            180.0,185.,190.,195.,
                            205.,210.,215.,220.,
                            225.,
                            230.,235.,240,245.,
                            255.,260.,265.,270.,
                            275.,
                            280.,285.,290.,295.]


                    for m in interpolatedMasses:
			mid=-1
			if m > 200 and  int(lPt) == 1:
                            mid=len(lInterpolMasses)-3
			if m > 250 and  int(lPt) == 2:
                            mid=len(lInterpolMasses)-2
			#if m < 75  and  int(lPt) >  4:
			#	mid=0
                        if mid != -1:
                            htmp_central = lInterpolShape_central[mid].Clone("tmp"+str(m)+"scaleup")
                            htmp_scaleUp = lInterpolShape_scaleUp[mid].Clone("tmp"+str(m)+"scaleup")
                            htmp_scaleDn = lInterpolShape_scaleDn[mid].Clone("tmp"+str(m)+"scaledn")
                            htmp_smearUp = lInterpolShape_smearUp[mid].Clone("tmp"+str(m)+"smearup")
                            htmp_smearDn = lInterpolShape_smearDn[mid].Clone("tmp"+str(m)+"smeardn")
                            if m > 200:
                                htmp_central.Scale(0.001)
                                htmp_scaleUp.Scale(0.001)
                                htmp_scaleDn.Scale(0.001)
                                htmp_smearUp.Scale(0.001)
                                htmp_smearDn.Scale(0.001)
                        else:
                            htmp_central = morphedHistContainer_central.morph(m);
                            htmp_scaleUp = morphedHistContainer_scaleUp.morph(m);
                            htmp_scaleDn = morphedHistContainer_scaleDn.morph(m);
                            htmp_smearUp = morphedHistContainer_smearUp.morph(m);
                            htmp_smearDn = morphedHistContainer_smearDn.morph(m);
                        htmp_central.SetName("zqq%i_%s" % (int(m),iCat));
                        htmp_scaleUp.SetName("zqq%i_%s_scaleUp" % (int(m),iCat)); 
			htmp_scaleDn.SetName("zqq%i_%s_scaleDown" % (int(m),iCat));
			htmp_smearUp.SetName("zqq%i_%s_smearUp" % (int(m),iCat));
			htmp_smearDn.SetName("zqq%i_%s_smearDown" % (int(m),iCat));

			if iCat == "pass_cat5" and m < 125 and m > 100: self.signalChopper(htmp_central,m);

			hout = [htmp_central,htmp_scaleUp,htmp_scaleDn,htmp_smearUp,htmp_smearDn];
			removeRho(hout,iPt,int(lPt),self._jet)

			for h in hout:
				print h.GetName()
                                self._outfile_validation.cd()
				h.Write();
				tmprdh = RooDataHist(h.GetName(),h.GetName(),r.RooArgList(self._lMSD),h)
				getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())
				if h.GetName().find("scale") > -1:
					pName=h.GetName().replace("scale","scalept")
					tmprdh = RooDataHist(pName,pName,r.RooArgList(self._lMSD),h)
					getattr(lW,'import')(tmprdh, r.RooFit.RecycleConflictNodes())

		log.info('Writing to workspace')
		for pData in iDatas:
			getattr(lW,'import')(pData,r.RooFit.RecycleConflictNodes())

		if iCat.find("pass_cat1") == -1:
			lW.writeToFile(iOutput,False)
		else:
			lW.writeToFile(iOutput)	
		lW.Print()

	def signalChopper(self,h,m):
		for i in range(1,h.GetNbinsX()+1):
			if h.GetBinCenter(i) > m + 1.5*math.sqrt(m): h.SetBinContent(i,0.);

##############################################################################
##############################################################################
#### E N D   O F   C L A S S
##############################################################################
##############################################################################

def main(options,args):
	
	global MASSES
        MASSES = massIterable(options.masses)

	#load input histograms: 2D histograms(mass,pT) of pass and fail region, for each MC and data
	#1:wqq,2:zqq,3:qcd,4:tqq,0:data+signals(50,75,100,125,150,200,250,300)
        f  = r.TFile(options.input);
        fs = r.TFile(options.input);
        if options.sig: fs = r.TFile(options.sig);
        print 'signal file',options.sig
	(hpass,hfail) = loadHistograms(f,fs,options.jet,options.pseudo,options.pseudo15,options.pseudo17);

	#build the workspaces
	dazsleRhalphabetBuilder(hpass,hfail,
                                f,fs,
                                options.inputrfile,
                                options.nr,options.np,
                                options.onlyRhalph,options.freeze,
                                options.mcstat,options.syst,
                                options.interpol,
                                options.jet);
	
##-------------------------------------------------------------------------------------
def loadHistograms(ifile,ifilesig,ijet,ipseudo,ipseudo15,ipseudo17):

	print "---- [Load histograms]"
        lBackgrounds = ["wqq", "zqq", "qcd", "tqq"]
        lData = ["data_obs"]

        lHPass = {};
        lHFail = {};

        ifile.cd()
        # wqq,zqq
        lHP1 = ifile.Get("wqq_pass_matched").Clone()
        lHF1 = ifile.Get("wqq_fail_matched").Clone()
        log.info('wqq_pass_matched %f'%lHP1.Integral())
        log.info('wqq_fail_matched %f'%lHF1.Integral())
        scaleHists(lHP1,0,1)
        scaleHists(lHF1,0,2)
	lHP1.Scale(1.35) #tmp
	lHF1.Scale(1.35) #tmp
        log.info('Scaling %s by %f'%(lHP1.GetName(),1.35))
        log.info('Scaling %s by %f'%(lHF1.GetName(),1.35))
        log.info('wqq_pass_matched scaled %f'%lHP1.Integral())
        log.info('wqq_fail_matched scaled %f'%lHF1.Integral())
        lHPass["wqq"] = lHP1
        lHFail["wqq"] = lHF1

        lHP2 = ifile.Get("zqq_pass_matched").Clone()
        lHF2 = ifile.Get("zqq_fail_matched").Clone()
        log.info('zqq_pass_matched %f'%lHP2.Integral())
        log.info('zqq_fail_matched %f'%lHF2.Integral())
        scaleHists(lHP2,1,1)
        scaleHists(lHF2,1,2)
	lHP2.Scale(1.45/1.35) #tmp
	lHF2.Scale(1.45/1.35) #tmp
        log.info('Scaling %s by %f/%f'%(lHP2.GetName(),1.35,1.45))
        log.info('Scaling %s by %f/%f'%(lHF2.GetName(),1.35,1.45))
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
        #tmp : Remove high weighted events from QCD
        lHF3.SetBinContent(37, 1, (lHF3.GetBinContent(36,1) + lHF3.GetBinContent(38,1))/ 2.)
        lHF3.SetBinContent(26, 2, lHF3.GetBinContent(25, 2) - (lHF3.GetBinContent(25,2) - lHF3.GetBinContent(28,2)) / 3.)
        lHF3.SetBinContent(27, 2, lHF3.GetBinContent(28, 2) + (lHF3.GetBinContent(25,2) - lHF3.GetBinContent(28,2)) / 3.)
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
        
        # TMP for QCD2017
        #lHP3 = f.Get("qcd2017_pass")
        #lHF3 = f.Get("qcd2017_fail")
        #lHP3.SetDirectory(0)
        #lHF3.SetDirectory(0)

	log.info('total mc pass %f'%(lHP1.Integral()+lHP2.Integral()+lHP3.Integral()+lHP4.Integral()))
        log.info('total mc fail %f'%(lHF1.Integral()+lHF2.Integral()+lHF3.Integral()+lHF4.Integral()))

	if ipseudo:
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
        elif ipseudo17:
                #lHP3 = lHP32017
                #lHF3 = lHF32017
                lHP0 = lHP3.Clone("data_obs_pass")
                lHF0 = lHF3.Clone("data_obs_fail")
                lHF0.Add(lHF1)
                lHF0.Add(lHF2)
                lHF0.Add(lHF4)
                lHP0.Add(lHP1)
                lHP0.Add(lHP2)
                lHP0.Add(lHP4)
                print 'pass ', lHP0.Integral()
                print 'fail ', lHF0.Integral()
	elif ipseudo15:
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
            
	# signals
        ifilesig.cd()
        for mass in MASSES:
            lpass = ifilesig.Get("zqq"+str(mass)+"_pass_matched").Clone()
            lfail = ifilesig.Get("zqq"+str(mass)+"_fail_matched").Clone()
            log.info('Getting histogram for mass: '+str(mass))
            log.info(lpass.GetName()+' '+str(lpass.Integral()))
            log.info(lfail.GetName()+' '+str(lfail.Integral()))
            scaleHists(lpass,1,1)
            scaleHists(lfail,1,2)
            lpass.Scale(1.45/1.35) #tmp  
            lfail.Scale(1.45/1.35) #tmp 
            log.info(lpass.GetName()+' scaled '+str(lpass.Integral()))
            log.info(lfail.GetName()+' scaled '+str(lfail.Integral()))
            lpass.SetDirectory(0)
            lfail.SetDirectory(0)
            lHPass["zqq"+str(mass)] = lpass
            lHFail["zqq"+str(mass)] = lfail

        for lH in (lHPass.values()+lHFail.values()):
            log.info("loaded 2D histogram %s with integral %f"%(lH.GetName(), lH.Integral()))

	# remove rho regions
        removeRho(lHPass,0,0,ijet)
        removeRho(lHFail,0,0,ijet)

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
        parser.add_option('--masses',dest='masses', default='50,75,100,125,150,200,250,300',type="string", help="masses of resonance")
        parser.add_option('--freeze', action='store_true', dest='freeze', default=False, help='freeze pol values', metavar='freeze')
	parser.add_option('--pseudo', action='store_true', dest='pseudo', default =False,help='data = MC', metavar='isData')
	parser.add_option('--pseudo15', action='store_true', dest='pseudo15', default =False,help='data = MC (fail) and fail*0.05 (pass)', metavar='isData')
        parser.add_option('--pseudo17', action='store_true', dest='pseudo17', default =False,help='data = MC (fail) and fail*0.05 (pass)', metavar='isData')
        parser.add_option('--input', dest='input', default = 'input_hists/fulldataset/AK8_2016_v1_Lumi371.root',help='directory with data', metavar='idir')
        parser.add_option('--sig', dest='sig', default = None, help='input signals')
        parser.add_option('--rfile', dest='inputrfile', default = 'data/2016/AK8/mlfit_param.root',help='file for poly freeze')
        parser.add_option('--ronly', action='store_true', dest='onlyRhalph', default=False, help='running rhalph only')
        parser.add_option('--mcstat', action='store_true', dest='mcstat', default=False, help='do bin by bin unc')
        parser.add_option('--syst', action='store_true', dest='syst', default=False, help='pick unc from templates')
        parser.add_option('--interpol', action='store_true', dest='interpol', default=False, help='do signal interpolation')
        parser.add_option('--jet', dest='jet', default='AK8', help='jet type')

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
