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

##-------------------------------------------------------------------------------------
def main(options,args):

	boxes = ['pass','fail']            
	bkgs = ['wqq','zqq','tqq','qcd']
	systs = ['JER','JES','Pu','trigger']    

	tfile = r.TFile.Open(options.ifile)
	for iMass in massIterable(options.masses):
		print 'mkdir -p %s/%s/ZQQ_%s'%(options.tag,options.jet,str(iMass))
		os.system('mkdir -p %s/%s/ZQQ_%s'%(options.tag,options.jet,str(iMass)))
		histoDict = {}
		sigs = ['zqq%s'%str(iMass)]
		for proc in (sigs+bkgs):
			for box in boxes:
				#print 'getting histogram for process: %s_%s'%(proc,box)
				histoDict['%s_%s'%(proc,box)] = tfile.Get('%s_%s'%(proc,box)).Clone()
				#print proc,' ',histoDict['%s_%s'%(proc,box)].Integral()
				if ('wqq' in proc or 'zqq' in proc):
					histoDict['%s_%s_matched'%(proc,box)] = tfile.Get('%s_%s_matched'%(proc,box)).Clone()
					histoDict['%s_%s_unmatched'%(proc,box)] = tfile.Get('%s_%s_unmatched'%(proc,box)).Clone()
					#print 'matched ',histoDict['%s_%s_matched'%(proc,box)].Integral()
					#print 'unmatched ',histoDict['%s_%s_unmatched'%(proc,box)].Integral()
				if options.syst:
					for syst in systs:
						#print 'getting histogram for process: %s_%s_%sUp'%(proc,box,syst)
						histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('%s_%s_%sUp'%(proc,box,syst)).Clone()
						#print histoDict['%s_%s_%sUp'%(proc,box,syst)].Integral()
						#print 'getting histogram for process: %s_%s_%sDown'%(proc,box,syst)
						histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('%s_%s_%sDown'%(proc,box,syst)).Clone()
						#print histoDict['%s_%s_%sDown'%(proc,box,syst)].Integral()


		dctpl = open("datacard_for2017.tpl");
		histoDict["data_obs_pass"] = tfile.Get('data_obs_pass').Clone()
		numberOfMassBins = MASSBINS[options.jet]; #options.nmass;
		numberOfPtBins = histoDict["data_obs_pass"].GetYaxis().GetNbins(); #options.npt;
		print 'Number of Ptbins ',numberOfPtBins

		combinecards = 'combineCards.py ';
		linel = [];
		for line in dctpl:
			#print line.strip().split();
			#print iMass
			line = line.replace("SIGNALNAME", 'zqq').replace("SIGNALMASS", str(iMass))
			#print line.strip()
			linel.append(line.strip());

		for i in range(1,numberOfPtBins+1):
			jesErrs = {}
			jerErrs = {}
			puErrs = {}
			triggerErrs = {}
			vErrs = {}
			mcstatErrs = {}
			scaleptErrs = {}
			tag = "cat"+str(i);
			for box in boxes:
				for proc in (sigs+bkgs):
					#print "Taking integral of %s_%s"%(proc,box)
					rate = histoDict['%s_%s'%(proc,box)].Integral(1, numberOfMassBins, i, i)
					#print 'rate ',rate
					if rate>0 and options.syst:
						rateJESUp = histoDict['%s_%s_JESUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						rateJESDown = histoDict['%s_%s_JESDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						rateJERUp = histoDict['%s_%s_JERUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						rateJERDown = histoDict['%s_%s_JERDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						ratePuUp = histoDict['%s_%s_PuUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						ratePuDown = histoDict['%s_%s_PuDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						rateTriggerUp = histoDict['%s_%s_triggerUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                                                rateTriggerDown = histoDict['%s_%s_triggerDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
						print 'rateJESUp ',rateJESUp
						print 'rateJESDown ',rateJESDown
						print 'rateJERUp ',rateJERUp
						print 'rateJERDown ',rateJERDown
						print 'ratePuUp ',ratePuUp
                                                print 'ratePuDown ',ratePuDown
						print 'rateTriggerUp ',rateTriggerUp
                                                print 'rateTriggerDown ',rateTriggerDown
						jesErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJESUp-rate)+abs(rateJESDown-rate))/(2.*rate)
						jerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJERUp-rate)+abs(rateJERDown-rate))/(2.*rate)
						puErrs['%s_%s'%(proc,box)] =  1.0+(abs(ratePuUp-rate)+abs(ratePuDown-rate))/(2.*rate)
						triggerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateTriggerUp-rate)+abs(rateTriggerDown-rate))/(2.*rate)
						print 'jesErrs', jesErrs['%s_%s'%(proc,box)]
						print 'jerErrs', jerErrs['%s_%s'%(proc,box)]
						print 'puErrs', puErrs['%s_%s'%(proc,box)]
						print 'triggerErrs', triggerErrs['%s_%s'%(proc,box)]
					else:
						jesErrs['%s_%s'%(proc,box)] =  1.0
						jerErrs['%s_%s'%(proc,box)] =  1.0
						puErrs['%s_%s'%(proc,box)] =  1.0
                                                triggerErrs['%s_%s'%(proc,box)] =  1.02
					if (i == 2 and numberOfPtBins == 5) or (i == 3 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.03
					elif (i == 3 and numberOfPtBins == 5) or (i == 4 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.06
					elif (i == 4 and numberOfPtBins == 5) or (i == 5 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.09
					elif (i == 5 and numberOfPtBins == 5) or (i == 6 and numberOfPtBins == 6):
						scaleptErrs['%s_%s'%(proc,box)] =  0.12

					vErrs['%s_%s'%(proc,box)] = 1.0+V_SF_ERR[options.jet]/V_SF[options.jet]

					# lnN stat unc
					for j in range(1,numberOfMassBins+1):
						if options.noMcStatShape:                 
							matchString = ''
							if (proc =='wqq' or proc=='zqq' or 'zqq' in proc):
								matchString = '_matched'
							histo = histoDict['%s_%s%s'%(proc,box,matchString)]
							error = array.array('d',[0.0])
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
					if proc=='qcd':
						jesString += ' -'
						jerString += ' -'
						puString += ' -'
                                                triggerString += ' -'
					else:
						jesString += ' %.3f'%jesErrs['%s_%s'%(proc,box)]
						jerString += ' %.3f'%jerErrs['%s_%s'%(proc,box)]
						puString += ' %.3f'%puErrs['%s_%s'%(proc,box)]
                                                triggerString += ' %.3f'%triggerErrs['%s_%s'%(proc,box)]
					if proc in ['qcd','tqq']:
						if (i > 1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6):
							scaleptString += ' -'
					else:
						#print i
						#print numberOfPtBins
						if (i > 1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6):
							scaleptString += ' %.3f'%scaleptErrs['%s_%s'%(proc,box)]
					if proc in ['qcd','tqq']:
						vString += ' -'
					else:
						vString += ' %.3f'%vErrs['%s_%s'%(proc,box)]
					for j in range(1,numberOfMassBins+1):
						for box1 in boxes:
							for proc1 in (sigs+bkgs):
								if proc1==proc and box1==box and proc!='qcd':
									mcStatStrings['%s_%s'%(proc1,box1),i,j] += '\t%.3f'% mcstatErrs['%s_%s'%(proc1,box1),i,j] 
								else:
									mcStatStrings['%s_%s'%(proc1,box1),i,j] += '\t-'

			tag = "cat"+str(i);
			#print i
			#print options.skipcat
			if i != options.skipcat:
				combinecards += "card_rhalphabet_%s%s_%s.txt " % (str(options.np),str(options.nr),tag)
			dctmp = open("%s/%s/ZQQ_%s/card_rhalphabet_%s%s_%s.txt" % (options.tag,options.jet,str(iMass),str(options.np),str(options.nr),tag), 'w')
			for l in linel:
				if 'JES' in l:
					if options.syst: newline = jesString
					else: continue
				elif 'JER' in l:
					if options.syst: newline = jerString
					else: continue
				elif 'Pu' in l:
					if options.syst: newline = puString
					else: continue
				elif 'trigger' in l:
                                        if options.syst: newline = triggerString
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
					if ((i>1 and numberOfPtBins == 5) or (i > 2 and numberOfPtBins == 6)):
						newline = scaleptString
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
				else:
					newline = l;
				if "CATX" in l: newline = l.replace('CATX',tag);
				dctmp.write(newline + "\n");
			for i0 in range(options.nr+1):
				for i1 in range(options.np+1):
					pVar = "p"+str(i1)+"r"+str(i0);
					if pVar!="p0r0":
						dctmp.write("%s flatParam \n"%pVar)
			if options.automc:
				#print 'include %s%scat%i autoMCstats'%(proc,box,i)
				dctmp.write('$CHANNEL autoMCStats 10 \n') ##FIXME: modify threshold
			elif options.mcstat:
				for box in boxes:
					for proc in sigs+bkgs:
						if options.noMcStatShape and proc!='qcd':                        
							#print 'include %s%scat%imcstat'%(proc,box,i)
							dctmp.write(mcStatStrings['%s_%s'%(proc,box),i,1].replace('mcstat1','mcstat') + "\n")
							continue
						for j in range(numberOfMassBins):
						        #if stat. unc. is greater than 50%
							matchString = ''
							if 'wqq' in proc or 'zqq' in proc:
								matchString = '_matched'
							histo = histoDict['%s_%s%s'%(proc,box,matchString)]
							if abs(histo.GetBinContent(j,i)) > 0. and histo.GetBinError(j,i) > 0.5*histo.GetBinContent(j,i) and proc!='qcd':
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
					dctmp.write("qcd_fail_%s_Bin%i flatParam \n" % (tag,im+1))
				else:
					histo = histoDict['qcd_fail']
					if abs(histo.GetBinContent(im,i)) > 0.:
						pMass = histo.GetXaxis().GetBinCenter(im)
						pPt = histo.GetYaxis().GetBinLowEdge(i) + 0.3*(histo.GetYaxis().GetBinWidth(i))
						pRho = r.TMath.Log(pMass*pMass/pPt/pPt)
						if not (pRho < RHO_RANGE[options.jet][0] or pRho > RHO_RANGE[options.jet][1]):
							dctmp.write("qcd_fail_%s_Bin%i flatParam \n" % (tag,im+1))
							#print 'include qcd_fail_%s_Bin%i'%(tag,im+1)
						#else:
						#	print 'do not include qcd_fail_%s_Bin%i'%(tag,im+1)
					#else:
					#	print '0 content: do not include qcd_fail_%s_Bin%i'%(tag,im+1)
			dctmp.close()

		os.chdir('%s/%s/ZQQ_%s/'%(options.tag,options.jet,str(iMass)))
		print '%s > card_rhalphabet_%s%s_pt.txt'%(combinecards,str(options.np),str(options.nr))
		os.system('%s > card_rhalphabet_%s%s_pt.txt'%(combinecards,str(options.np),str(options.nr)))
		os.chdir('../../../')
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
	parser.add_option('--no-mcstat-shape', action='store_true', dest='noMcStatShape', default =False,help='change mcstat uncertainties to lnN', metavar='noMcStatShape')
        parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
        parser.add_option('--tag', dest='tag', default='blinded', help='tag')
        parser.add_option('--skipcat', dest='skipcat', default=0, type=int, help='number of cat to skip')

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
