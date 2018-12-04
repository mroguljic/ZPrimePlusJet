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

# including other directories
sys.path.insert(0, '../.')
from tools import *
from buildRhalphabet_for2017 import *
#from buildRhalphabet_for2017_updatedsf import *

##-------------------------------------------------------------------------------------
def main(options,args):

	skipcats = options.skipcat.split(',')
	#print 'SKIP',skipcats
	boxes = ['pass','fail']            
	bkgs = ['wqq','zqq','tqq']
	if options.forcomb:
		bkgs.append('qcd2017')
	else:
		bkgs.append('qcd')	
	systs = ['JER','JES','Pu','trigger']    

	tfile = r.TFile.Open(options.ifile)
	#lnNFile = r.TFile.Open(options.ifile)
	if not options.is2016:
		lnNFile =  r.TFile.Open(options.ifile.replace('.root','_lnN.root'))
	lmasses = options.masses
	if options.wonly:
		lmasses = '80'
	if options.zonly:
		lmasses= '90'

	for iMass in massIterable(lmasses):
                histoDict = {}
		sigs = []
		jetdir = options.jet
		if options.jetdir != '':
			jetdir = options.jetdir
		print options.jet,options.jetdir
		print 'JETDIR',jetdir
		lDir = 'results/%s/%s/ZQQ_%s'%(options.tag,jetdir,str(iMass))
		if options.wonly:
			lDir = 'results/%s/%s/WQQ'%(options.tag,jetdir)
		elif options.zonly:
                        lDir = 'results/%s/%s/ZQQ'%(options.tag,jetdir)
		else:
			sigs = ['zqq%s'%str(iMass)]
		print 'mkdir -p %s'%lDir
		os.system('mkdir -p %s'%lDir)
		for proc in (sigs+bkgs):
			for box in boxes:
				if options.interpol and str(iMass) in proc:
					continue
				#if not os.path.isfile(options.ifile.replace('.root','_lnN.root')): continue
				#       lnNFile =  r.TFile.Open(options.ifile.replace('.root','_lnN.root'))
				if options.syst:
                                        for syst in systs:
						if 'qcd' in proc and options.forcomb:
							histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('qcd_%s_%sUp'%(box,syst)).Clone()
							histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('qcd_%s_%sDown'%(box,syst)).Clone()
						elif str(iMass) in proc and options.is2016sig:
							histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('%s_2016_%s_%sUp'%(proc,box,syst)).Clone()
                                                        histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('%s_2016_%s_%sDown'%(proc,box,syst)).Clone()
						else:
							#print 'getting histogram for process: %s_%s_%sUp'%(proc,box,syst)
							histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('%s_%s_%sUp'%(proc,box,syst)).Clone()
							# print histoDict['%s_%s_%sUp'%(proc,box,syst)].Integral()
							# print 'getting histogram for process: %s_%s_%sDown'%(proc,box,syst)  
							histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('%s_%s_%sDown'%(proc,box,syst)).Clone()
				#if options.interpol and str(iMass) in proc: continue
				#print 'getting histogram for process: %s_%s'%(proc,box)
				if 'qcd' in proc and options.forcomb:
					histoDict['%s_%s'%(proc,box)] = tfile.Get('%s_%s'%(proc.replace('qcd2017','qcd'),box)).Clone()
				else:
					if str(iMass) in proc and options.is2016sig:
						histoDict['%s_%s'%(proc,box)] = tfile.Get('%s_2016_%s'%(proc,box)).Clone()
					else:
						histoDict['%s_%s'%(proc,box)] = tfile.Get('%s_%s'%(proc,box)).Clone()
				#print proc,' ',histoDict['%s_%s'%(proc,box)].Integral()
				if ('wqq' in proc or 'zqq' in proc):
					if str(iMass) in proc and options.is2016sig:
						histoDict['%s_%s_matched'%(proc,box)] = tfile.Get('%s_2016_%s_matched'%(proc,box)).Clone()
						histoDict['%s_%s_unmatched'%(proc,box)] = tfile.Get('%s_2016_%s_unmatched'%(proc,box)).Clone()
					else:
						histoDict['%s_%s_matched'%(proc,box)] = tfile.Get('%s_%s_matched'%(proc,box)).Clone()
						histoDict['%s_%s_unmatched'%(proc,box)] = tfile.Get('%s_%s_unmatched'%(proc,box)).Clone()
					#print 'matched ',histoDict['%s_%s_matched'%(proc,box)].Integral()
					#print 'unmatched ',histoDict['%s_%s_unmatched'%(proc,box)].Integral()

		if options.jet == 'CA15':
			if options.forcomb:
				dctpl = open("datacard_templates/datacard_for2017_CA15_forcomb.tpl");
				dctplnowz = open("datacard_templates/datacard_for2017_CA15_nowz_forcomb.tpl");
			else:
				#dctpl = open("datacard_templates/datacard_for2017_CA15.tpl");
                                #dctpl = open("datacard_templates/datacard_for2017_CA15_updatedsf.tpl");
				dctpl = open("datacard_templates/datacard_for2017_CA15_updatedsf_test.tpl");
                                dctplnosig = open("datacard_templates/datacard_for2017_CA15_updatedsf_test_nosig.tpl");
				dctplnowz = open("datacard_templates/datacard_for2017_CA15_nowz.tpl");
		if options.wonly:
			dctpl = open("datacard_templates/datacard_for2017_W.tpl");
		if options.zonly:
			dctpl = open("datacard_templates/datacard_for2017_Z.tpl");
		if options.jet == 'AK8':
			if options.forcomb:
				dctpl = open("datacard_templates/datacard_for2017_forcomb.tpl");
			else:
				#dctpl = open("datacard_templates/datacard_for2017.tpl");
                                dctpl = open("datacard_templates/datacard_for2017_updatedsf.tpl");
                                #dctpl = open("datacard_templates/datacard_for2017_updatedsf_test.tpl");
				dctplnosig = open("datacard_templates/datacard_for2017_updatedsf_test_nosig.tpl");
		if options.is2016:
                        dctpl = open("datacard_templates/datacard_for2016.tpl")
		histoDict["data_obs_pass"] = tfile.Get('data_obs_pass').Clone()
		numberOfMassBins = MASSBINS[options.jet]; #options.nmass;
		numberOfPtBins = histoDict["data_obs_pass"].GetYaxis().GetNbins(); #options.npt;
		#print 'Number of Ptbins ',numberOfPtBins

		combinecards = 'combineCards.py ';
		linel = [];
		for line in dctpl:
			#print line.strip().split();
			#print iMass
			line = line.replace("SIGNALNAME", 'zqq').replace("SIGNALMASS", str(iMass))
			#print line.strip()
			linel.append(line.strip());
                if options.jet == 'CA15':
			linelnowz = [];
			for line in dctplnowz:
				line = line.replace("SIGNALNAME", 'zqq').replace("SIGNALMASS", str(iMass))
				linelnowz.append(line.strip());
		if options.nosig != 0:
			linelnosig = [];
			for line in dctplnosig:
                                line = line.replace("SIGNALNAME", 'zqq').replace("SIGNALMASS", str(iMass))
				linelnosig.append(line.strip());

		for i in range(1,numberOfPtBins+1):
			jesErrs = {}
			jerErrs = {}
			puErrs = {}
			triggerErrs = {}
			vErrs = {}
			mcstatErrs = {}
			scaleptErrs = {}
			zreweightErrs = {}
			tag = "cat"+str(i);
			for box in boxes:
				for proc in (sigs+bkgs):
					#print "Taking integral of %s_%s"%(proc,box)
					if options.interpol and str(iMass) in proc:
						rate = 0.01;
					else:
						rate = histoDict['%s_%s'%(proc,box)].Integral(1, numberOfMassBins, i, i)
					#print 'rate ',rate
                                        if options.interpol and str(iMass) in proc and options.syst:
						jesGraph = lnNFile.Get('jes_%s_cat%i'%(box,i)).Clone()
                                                jerGraph = lnNFile.Get('jer_%s_cat%i'%(box,i)).Clone()
                                                puGraph = lnNFile.Get('pu_%s_cat%i'%(box,i)).Clone()
                                                triggerGraph = lnNFile.Get('trigger_%s_cat%i'%(box,i)).Clone()
                                                jesErrs['%s_%s'%(proc,box)] = min(max(jesGraph.Eval(float(iMass), 0, 'S'), 1.0), 2.0)
                                                jerErrs['%s_%s'%(proc,box)] = min(max(jerGraph.Eval(float(iMass), 0, 'S'), 1.0), 2.0)
                                                puErrs['%s_%s'%(proc,box)] = min(max(puGraph.Eval(float(iMass), 0, 'S'), 1.0), 2.0)
                                                triggerErrs['%s_%s'%(proc,box)] = min(max(triggerGraph.Eval(float(iMass), 0, 'S'), 1.0), 2.0)
                                                #print "%s, jes(interp) = %.3f"%(str(iMass), jesGraph.Eval(float(iMass), 0, 'S'))
                                                #print "%s, jer(interp) = %.3f"%(str(iMass), jerGraph.Eval(float(iMass), 0, 'S'))
                                                #print "%s, pu(interp) = %.3f"%(str(iMass), puGraph.Eval(float(iMass), 0, 'S'))
                                                #print "%s, trigger(interp) = %.3f"%(str(iMass), triggerGraph.Eval(float(iMass), 0, 'S'))
					else:
						if rate>0 and options.syst:
							rateJESUp = histoDict['%s_%s_JESUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							rateJESDown = histoDict['%s_%s_JESDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							rateJERUp = histoDict['%s_%s_JERUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							rateJERDown = histoDict['%s_%s_JERDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							ratePuUp = histoDict['%s_%s_PuUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							ratePuDown = histoDict['%s_%s_PuDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							rateTriggerUp = histoDict['%s_%s_triggerUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							rateTriggerDown = histoDict['%s_%s_triggerDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
							# print 'rateJESUp ',rateJESUp
							# print 'rateJESDown ',rateJESDown
							# print 'rateJERUp ',rateJERUp
							# print 'rateJERDown ',rateJERDown
							# print 'ratePuUp ',ratePuUp
							# print 'ratePuDown ',ratePuDown
							# print 'rateTriggerUp ',rateTriggerUp
							# print 'rateTriggerDown ',rateTriggerDown
							jesErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJESUp-rate)+abs(rateJESDown-rate))/(2.*rate)
							jerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJERUp-rate)+abs(rateJERDown-rate))/(2.*rate)
							puErrs['%s_%s'%(proc,box)] =  1.0+(abs(ratePuUp-rate)+abs(ratePuDown-rate))/(2.*rate)
							triggerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateTriggerUp-rate)+abs(rateTriggerDown-rate))/(2.*rate)
							# print 'jesErrs', jesErrs['%s_%s'%(proc,box)]
							# print 'jerErrs', jerErrs['%s_%s'%(proc,box)]
							# print 'puErrs', puErrs['%s_%s'%(proc,box)]
							# print 'triggerErrs', triggerErrs['%s_%s'%(proc,box)]
						else:
							jesErrs['%s_%s'%(proc,box)] =  1.0
							jerErrs['%s_%s'%(proc,box)] =  1.0
							puErrs['%s_%s'%(proc,box)] =  1.0
							triggerErrs['%s_%s'%(proc,box)] =  1.02
					if (i == 2 and numberOfPtBins == 5) or (i == 3 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.03
						zreweightErrs['%s_%s'%(proc,box)] = 1.03
					elif (i == 3 and numberOfPtBins == 5) or (i == 4 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.06
                                                zreweightErrs['%s_%s'%(proc,box)] = 1.03
					elif (i == 4 and numberOfPtBins == 5) or (i == 5 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.09
                                                zreweightErrs['%s_%s'%(proc,box)] = 1.05
					elif (i == 5 and numberOfPtBins == 5) or (i == 6 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.12
                                                zreweightErrs['%s_%s'%(proc,box)] = 1.08

					vErrs['%s_%s'%(proc,box)] = 1.0+V_SF_ERR[options.jet]/V_SF[options.jet]

					# lnN stat unc
					for j in range(1,numberOfMassBins+1):
						if options.noMcStatShape:                 
							matchString = ''
							if (proc =='wqq' or proc=='zqq' or 'zqq' in proc):
								matchString = '_matched'
                                                        error = array.array('d',[0.0])
							if options.interpol and str(iMass) in proc:
								mcstatGraph = lnNFile.Get('mcstat_%s_cat%i'%(box,i))
								mcstatErrs['%s_%s'%(proc,box),i,j] = min(max(mcstatGraph.Eval(float(iMass), 0, 'S'), 1.0), 2.0)
							else:
								histo = histoDict['%s_%s%s'%(proc,box,matchString)]
								rate = histo.IntegralAndError(1,histo.GetNbinsX(),i,i,error)
								#print proc, box, rate, error[0]
								if rate>0:
									mcstatErrs['%s_%s'%(proc,box),i,j] = 1.0+(error[0]/rate)
								else:
									mcstatErrs['%s_%s'%(proc,box),i,j] = 1.0
						else:
							mcstatErrs['%s_%s'%(proc,box),i,j] = 1.0

			jesString = 'JES lnN'
			jerString = 'JER lnN'
			puString = 'Pu lnN'
			triggerString = 'trigger lnN'
			vString = 'veff lnN'
			scaleptString = 'scalept shape'
			zreweightString = 'zreweight lnN'
			mcStatStrings = {}

			# lnN stat unc
			for box in boxes:
				for proc in sigs+bkgs:
					for j in range(1,numberOfMassBins+1):
						if options.noMcStatShape:
							mcStatStrings['%s_%s'%(proc,box),i,j] = '%s%scat%imcstat%i lnN'%(proc,box,i,j)
						else:
							mcStatStrings['%s_%s'%(proc,box),i,j] = '%s%scat%imcstat%i shape'%(proc,box,i,j)
                        
			for box in boxes:
				for proc in (sigs+bkgs):
					if proc in sigs and options.nosig != 0 and (i!=options.nosig): continue
					if 'qcd' in proc:
						jesString += ' -'
						jerString += ' -'
						puString += ' -'
                                                triggerString += ' -'
					else:
						jesString += ' %.3f'%jesErrs['%s_%s'%(proc,box)]
						jerString += ' %.3f'%jerErrs['%s_%s'%(proc,box)]
						puString += ' %.3f'%puErrs['%s_%s'%(proc,box)]
                                                triggerString += ' %.3f'%triggerErrs['%s_%s'%(proc,box)]
					if proc in ['qcd','tqq','qcd2017']:
						if (i > 1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6):
							scaleptString += ' -'
							zreweightString += ' -'
					else:
						#print i
						#print numberOfPtBins
						if (i > 1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6):
							scaleptString += ' %.3f'%scaleptErrs['%s_%s'%(proc,box)]
							zreweightString += ' %.3f'%zreweightErrs['%s_%s'%(proc,box)]
					if proc in ['qcd','tqq','qcd2017']:
						vString += ' -'
					else:
						vString += ' %.3f'%vErrs['%s_%s'%(proc,box)]
					for j in range(1,numberOfMassBins+1):
						for box1 in boxes:
							for proc1 in (sigs+bkgs):
								if proc1==proc and box1==box and proc!='qcd' and proc !='qcd2017':
									mcStatStrings['%s_%s'%(proc1,box1),i,j] += '\t%.3f'% mcstatErrs['%s_%s'%(proc1,box1),i,j] 
								else:
									mcStatStrings['%s_%s'%(proc1,box1),i,j] += '\t-'

			tag = "cat"+str(i);
			#print i
			#print skipcats
			tagcat = tag
			if options.is2016:
				tagcat += "_2016"
			if str(i) not in skipcats:
				combinecards += "%s=card_rhalphabet_%s%s_%s.txt " % (tagcat,str(options.np),str(options.nr),tagcat)
			#print(os.getcwd())
			dctmp = open("%s/card_rhalphabet_%s%s_%s.txt" % (lDir,str(options.np),str(options.nr),tagcat), 'w')
			linelines = linel
			# no W and Z for cats 5 and 6 for CA15
			if options.jet == 'CA15' and (i == 5 or i == 6) and options.nowz:
				linelines= linelnowz
			if options.nosig != 0 and (i!=options.nosig):
				linelines=linelnosig
			for l in linelines:
				if 'JES' in l:
					if options.nowz and (i==5 or i==6): continue
					if options.syst: newline = jesString
					else: continue
				elif 'JER' in l:
					if options.nowz and (i==5 or i==6): continue
					if options.syst: newline = jerString
					else: continue
				elif 'Pu' in l:
					if options.nowz and (i==5 or i==6): continue
					if options.syst: newline = puString
					else: continue
				elif 'trigger' in l:
					if options.nowz and (i==5 or i==6): continue
                                        if options.syst: newline = triggerString
					elif options.forcomb: newline = l
                                        else: continue
				elif 'jecs' in l:
					if options.syst: continue
					else: newline = l
				elif 'veff' in l:
					if options.veff:
						newline = vString ##FIXME?
					else:
						newline = l
				elif 'scalept' in l:
					if options.nowz and (i==5 or i==6): continue
					if ((i>1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6)):
						newline = scaleptString
					else:
						newline = l.replace('0.03','-')
				elif 'zreweight' in l:
					if options.nowz and (i==5 or i==6): continue
                                        if ((i>1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6)):
                                                newline = zreweightString
                                        else:
                                                newline = l.replace('0.03','-')
				elif 'znormEW' in l and 'wznormEW' not in l:
					if not options.corrZ:
						l = l.replace('EW','E'+str(i))
					if ((i==2 and numberOfPtBins == 5) or (i==3 and numberOfPtBins == 6)):
						newline = l.replace('1.15','1.25')
					elif ((i==3 and numberOfPtBins == 5) or (i==4 and numberOfPtBins == 6)):
						newline = l.replace('1.15','1.35')
					elif ((i==4 and numberOfPtBins == 5) or (i==5 and numberOfPtBins == 6)):
						newline = l.replace('1.15','1.35')
					elif ((i==5 and numberOfPtBins == 5) or (i==6 and numberOfPtBins == 6)):
						newline = l.replace('1.15','1.35')
					else:
						newline = l
				elif 'wznormEW' in l:
					if not options.corrWZ:
						l = l.replace('EW','E'+str(i))
					if ((i==3 and numberOfPtBins == 5) or (i==4 and numberOfPtBins == 6)):
						newline = l.replace('1.05','1.15')
					elif ((i==4 and numberOfPtBins == 5) or (i==5 and numberOfPtBins == 6)):
						newline = l.replace('1.05','1.15')
					elif ((i==5 and numberOfPtBins == 5) or (i==6 and numberOfPtBins == 6)):
						newline = l.replace('1.05','1.15')
					else:
						newline = l
				elif 'ralphabase' in l:
					newline = l.replace('ralphabase','ralphabase_'+str(options.np)+str(options.nr)+'_pt')
					if options.forcomb:
						newline = l.replace('ralphabase','ralphabase_'+str(options.np)+str(options.nr)+'_pt_2017')
				elif 'tqqnormSF' in l or 'tqqeffSF' in l:
					if 'lnN' in l:
						if options.isMuonCR: continue
						else: newline = l;
					else:
						if options.isMuonCR: 
							if 'TQQEFF' in l:
								tqqeff = histoDict['tqq_pass'].Integral() / (histoDict['tqq_pass'].Integral() + histoDict['tqq_fail'].Integral())
								newline = l.replace('TQQEFF','%.4f'%tqqeff)
							else: newline = l;
						else: continue
				else:
					newline = l;
				if "CATX" in l: newline = newline.replace('CATX',tag);
				dctmp.write(newline + "\n");
			# if options.isMuonCR:
			# 	dctmp.write('tqqnormSF extArg 1.0 [0.0,10.0]\n')
			# 	dctmp.write('tqqeffSF extArg 1.0 [0.0,10.0]\n')
			for i0 in range(options.nr+1):
				for i1 in range(options.np+1):
					pVar = "p"+str(i1)+"r"+str(i0);
					if options.forcomb:
						pVar = "p2017"+str(i1)+"r2017"+str(i0);
					if pVar!="p0r0" or pVar!="p20170r20170":
						dctmp.write("%s flatParam \n"%pVar)
			if options.automc:
				#print 'include %s%scat%i autoMCstats'%(proc,box,i)
				dctmp.write('$CHANNEL autoMCStats 10 \n') ##FIXME: modify threshold
			elif options.mcstat and not (options.nowz and (i==5 or i==6)):
				for box in boxes:
					for proc in sigs+bkgs:
						if options.noMcStatShape and proc!='qcd' and proc!='qcd2017':                        
							#print 'include %s%scat%imcstat'%(proc,box,i)
							dctmp.write(mcStatStrings['%s_%s'%(proc,box),i,1].replace('mcstat1','mcstat') + "\n")
							continue
						for j in range(numberOfMassBins):
						        #if stat. unc. is greater than 50%
							matchString = ''
							if 'wqq' in proc or 'zqq' in proc:
								matchString = '_matched'
							histo = histoDict['%s_%s%s'%(proc,box,matchString)]
							if abs(histo.GetBinContent(j,i)) > 0. and histo.GetBinError(j,i) > 0.5*histo.GetBinContent(j,i) and proc!='qcd' and proc !='qcd2017':
								pMass = histo.GetXaxis().GetBinCenter(j)
								pPt = histo.GetYaxis().GetBinLowEdge(i) + 0.3*(histo.GetYaxis().GetBinWidth(i))
								pRho = r.TMath.Log(pMass*pMass/pPt/pPt)
								if not (pRho < RHO_RANGE[options.jet][0] or pRho > RHO_RANGE[options.jet][1]):
									dctmp.write(mcStatStrings['%s_%s'%(proc,box),i,j] + "\n")
									#print 'include %s%scat%imcstat%i'%(proc,box,i,j)
								#else:
								#print 'do not include %s%scat%imcstat%i'%(proc,box,i,j)
							#else:
							#	print 'do not include %s%scat%imcstat%i'%(proc,box,i,j)
			for im in range(numberOfMassBins):
				if options.qcd:
					if options.forcomb:
						dctmp.write("qcd2017_fail_%s_Bin%i flatParam \n" % (tag,im+1))
					else:
						dctmp.write("qcd_fail_%s_Bin%i flatParam \n" % (tag,im+1))
				else:
					if options.forcomb:
						histo = histoDict['qcd2017_fail']
					else:
						histo = histoDict['qcd_fail']
					if abs(histo.GetBinContent(im,i)) > 0.:
						pMass = histo.GetXaxis().GetBinCenter(im)
						pPt = histo.GetYaxis().GetBinLowEdge(i) + 0.3*(histo.GetYaxis().GetBinWidth(i))
						pRho = r.TMath.Log(pMass*pMass/pPt/pPt)
						if not (pRho < RHO_RANGE[options.jet][0] or pRho > RHO_RANGE[options.jet][1]):
							if options.forcomb:
								dctmp.write("qcd2017_fail_%s_Bin%i flatParam \n" % (tag,im+1))
							else:
								dctmp.write("qcd_fail_%s_Bin%i flatParam \n" % (tag,im+1))
							#print 'include qcd_fail_%s_Bin%i'%(tag,im+1)
						#else:
						#	print 'do not include qcd_fail_%s_Bin%i'%(tag,im+1)
					#else:
					#	print '0 content: do not include qcd_fail_%s_Bin%i'%(tag,im+1)
			dctmp.close()

		ldir = os.getcwd()
		os.chdir(lDir)
		if options.isMuonCR:
			combinecards += 'muonCR=datacard_muonCR_%s.txt '%options.jet
                        os.system('cp %s/datacard_muonCR_%s.txt .'%(ldir,options.jet))
			os.system('cp %s/datacard_muonCR_%s.root .'%(ldir,options.jet))
		print '%s > card_rhalphabet_%s%s_pt.txt'%(combinecards,str(options.np),str(options.nr))
		if not options.is2016:
			os.system('%s > card_rhalphabet_%s%s_pt.txt'%(combinecards,str(options.np),str(options.nr)))
		else:
                        os.system('%s > card_rhalphabet_%s%s_pt_2016.txt'%(combinecards,str(options.np),str(options.nr)))
		os.chdir(ldir)
	tfile.Close()

##-------------------------------------------------------------------------------------
if __name__ == '__main__':
	parser = OptionParser()
	parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
	parser.add_option('--input', dest='ifile', default = 'histInputs/hist_1DZqq-dataReRecoSpring165eff-3481-Gridv130-final.root',
			  help='file with histogram inputs', metavar='ifile')
        parser.add_option('--np', dest="np", type=int,default=3, help='degree poly pt')
        parser.add_option('--nr', dest="nr", type=int,default=4, help='degree poly rho')
        parser.add_option('--nmass', dest="nmass", type=int,default=60, help='number of mass bins')
        parser.add_option('--npt', dest="npt", type=int,default=5, help='number of pt bins')
	parser.add_option('--pseudo', action='store_true', dest='pseudo', default =False,help='signal comparison', metavar='isData')
	parser.add_option('--masses',dest='masses', default='50,75,100,115,125,150,175,200,225,250,300',type='string',help='masses of resonance')
	parser.add_option('--mcstat', action='store_true', dest='mcstat', default=False, help='do bin by bin')
        parser.add_option('--automc', action='store_true', dest='automc', default=False, help='do autoMcStats')
        parser.add_option('--syst', action='store_true', dest='syst', default=False, help='pick unc from templates')
        parser.add_option('--corrWZ', action='store_true', dest='corrWZ', default=False, help='correlate WZnorm')
        parser.add_option('--corrZ', action='store_true', dest='corrZ', default=False, help='correlate Znorm')
        parser.add_option('--veff', action='store_true', dest='veff', default=False, help='same veff for pass and fail?')
        parser.add_option('--qcd', action='store_true', dest='qcd', default=False, help='all qcd fail bins')
        parser.add_option('--nowz', action='store_true', dest='nowz', default=False, help='no w and z')
	parser.add_option('--no-mcstat-shape', action='store_true', dest='noMcStatShape', default =False,help='change mcstat uncertainties to lnN', metavar='noMcStatShape')
        parser.add_option('--nosig', dest='nosig', type=int, default=0, help='no signal (if not 0 then inject signal in that cat)')
        parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
        parser.add_option('--jetdir', dest='jetdir', default='', help='jet dir')
        parser.add_option('--tag', dest='tag', default='blinded', help='tag')
        parser.add_option('--skipcat', action='store', dest='skipcat', default='1', type='string', help='number of cat to skip')
        parser.add_option('--interpol', action='store_true', dest='interpol', default=False, help='do signal interpolation')
	parser.add_option('--forcomb', action='store_true', dest='forcomb',  default=False, help='combine with 2016')
        parser.add_option('--is2016', action='store_true', dest='is2016',  default=False, help='is 2016')
        parser.add_option('--is2016sig', action='store_true', dest='is2016sig',  default=False, help='is 2016 signal')
	parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False, help='muon CR')
	parser.add_option('--wonly', action='store_true', dest='wonly', default=False, help='only W extraction')
	parser.add_option('--zonly', action='store_true', dest='zonly',default=False, help='only Z extraction')

	(options, args) = parser.parse_args()

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
