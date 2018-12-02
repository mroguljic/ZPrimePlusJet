import ROOT
from optparse import OptionParser
from operator import add
import math
import sys
import time
from array import array
import os
import glob

import CMS_lumi
import tdrstyle
CMS_lumi.cmsText = "CMS"
CMS_lumi.extraText = "Preliminary"
CMS_lumi.cmsTextSize = 0.65
CMS_lumi.outOfFrame = True
tdrstyle.setTDRStyle()

from buildRhalphabet_for2017 import massIterable
from plotLims import *
# including other directories
sys.path.insert(0, '../.')

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptFit(0)
ROOT.gStyle.SetOptTitle(0)
ROOT.gStyle.SetPaintTextFormat("1.2g")
ROOT.gROOT.SetBatch()
ROOT.RooMsgService.instance().setGlobalKillBelow(ROOT.RooFit.FATAL)

ROOT.gStyle.SetPadRightMargin(0.08);
ROOT.gStyle.SetPadLeftMargin(0.11);
ROOT.gStyle.SetPadTopMargin(0.10);

ROOT.gStyle.SetPalette(1);

def getRatioGraphs(limits, limits_alt, masses, masses_alt, options):        
	theory_xsec, theory_inclusive_xsec, sample_xsec, br, legend_entry = setDict()
	
	N = len(masses)
	print " No of mass points : ", N
	obs = ROOT.TGraph(N)         # observed
	obs_alt = ROOT.TGraph(N) 
	obs_ratio = ROOT.TGraph(N) 
	
	kfactor = 1.218 #???
	i = -1
	for mass in masses:
		if mass not in masses_alt: continue
		limit = limits[str(mass)]
                limit_alt = limits_alt[str(mass)]
		i += 1
		if options.xsec or options.gq:
			fac = sample_xsec['Zpqq'].Eval(mass,0,'S')
			theory = theory_xsec['Zpqq'].Eval(mass,0,'S')
			if options.gq:
				if options.is2016sig:
					theory = theory * 6. * 6.
				else:
					theory = theory * 4. * 4.
			else:
				theory = theory_xsec['Zpqq'].Eval(mass,0,'S') * br['Zpqq'].Eval(mass,0,'S')
		else:
			fac = 1
		if options.gq:
			if len(limit)>5:
				print math.sqrt(limit[2]*fac/theory)/math.sqrt(limit_alt[2]*fac/theory)
				obs.SetPoint(       i,    mass, math.sqrt(limit[2]*fac/theory)) # observed
				obs_alt.SetPoint(       i,    mass, math.sqrt(limit_alt[2]*fac/theory))
				obs_ratio.SetPoint(       i,    mass, math.sqrt(limit[2]*fac/theory)/math.sqrt(limit_alt[2]*fac/theory))
		elif options.xsec:
			# scale up by inclusive xsec / xsec ratio
			theoryRatio = theory_inclusive_xsec[options.model].Eval(mass,0,'S') / theory_xsec[options.model].Eval(mass,0,'S')
			if len(limit)>5:
				obs.SetPoint(       i,    mass, limit[2] * fac * theoryRatio) # observed
				obs_alt.SetPoint(       i,    mass, limit_alt[2] * fac * theoryRatio)
				obs_ratio.SetPoint(       i,    mass, (limit[2] * fac * theoryRatio)/(limit_alt[2] * fac * theoryRatio))
		elif options.mu:
			if len(limit)>5:
				obs.SetPoint(       i,    mass, limit[2])
				obs_alt.SetPoint(       i,    mass, limit_alt[2])
				obs_ratio.SetPoint(       i,    mass, (limit[2]/limit_alt[2]))
	return obs, obs_alt, obs_ratio

def plotRatioUpperLimits(options,args):
	masses = options.masses
	if options.masses == 'all' and options.box == 'AK8':
                masses = MASSES_AK8
	if options.masses == 'all' and options.box == 'CA15':
		masses = MASSES_CA15
	if options.masses == 'all' and options.box == 'AK8_CA15':
		masses = MASSES_AK8_CA15
        all_masses = massIterable(masses)
	#print all_masses
	masses = {}; masses_alt = {}; limits = {}; limits_alt ={};
	for jet_type in options.box.split('_'):
		masses[jet_type] = []
                masses_alt[jet_type] = []
		limits[jet_type] = {}
		limits_alt[jet_type] = {}

        for mass in all_masses:
		file_name = ''; file_name_alt = '';
		#print mass,len(options.box.split('_'))
		if mass <= massSwitch or len(options.box.split('_')) == 1:
			jet_type = options.box.split('_')[0]
			file_name = "results/"+options.idir + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tag)
			file_name_alt = "results/"+options.idir + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tagalt)
		print file_name
		print file_name_alt
		if glob.glob(file_name):
			limits[jet_type][str(mass)] = getLimits(file_name)
			if glob.glob(file_name_alt):
				masses[jet_type].append(mass)
				limits_alt[jet_type][str(mass)] = getLimits(file_name_alt)

		if mass >= massSwitch and len(options.box.split('_')) > 1:
                        jet_type = options.box.split('_')[1]
			file_name = "results/"+options.idir + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tag)
			file_name_alt  = "results/"+options.idir + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tagalt)
			if options.tagswitch != '':
				file_name = "results/"+options.idirswitch + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tagswitch)
				file_name_alt = "results/"+options.idirswitchalt + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tagswitchalt)
		if glob.glob(file_name):
			limits[jet_type][str(mass)] = getLimits(file_name)
			if glob.glob(file_name_alt):
				masses_alt[jet_type].append(mass)
                                limits_alt[jet_type][str(mass)] = getLimits(file_name_alt)
	print masses
	print masses_alt
	print limits
	print limits_alt
	obsList = []; obsList_alt = []; obsList_ratio =[];
	for jet_type in options.box.split('_'):
		obs, obs_alt, obs_ratio = getRatioGraphs(limits[jet_type], limits_alt[jet_type], masses[jet_type], masses_alt[jet_type], options)
		obsList.append(obs)
                obsList_alt.append(obs_alt)
		obsList_ratio.append(obs_ratio)

	W = 800
	H  = 600
	T = 0.08*H
	B = 0.12*H
	L = 0.12*W#*scaleleftmargin
	R = 0.04*W#*scalerightmargin
	c = ROOT.TCanvas("c","c",100,100,W,H)
	c.SetFillColor(0)
	c.SetBorderMode(0)
	c.SetFrameFillStyle(0)
	c.SetFrameBorderMode(0)
	c.SetLeftMargin( L/W )
	c.SetRightMargin( R/W )
	c.SetTopMargin( T/H )
	c.SetBottomMargin( B/H )
	c.SetTickx(0)
	c.SetTicky(0)
	c.cd()
	frame = c.DrawFrame(1.4,0.001, 4.1, 1.0)
	frame.GetYaxis().CenterTitle()
	frame.GetYaxis().SetTitleSize(0.05)
	frame.GetXaxis().SetTitleSize(0.05)
	frame.GetXaxis().SetLabelSize(0.04)
	frame.GetYaxis().SetLabelSize(0.04)
	frame.GetYaxis().SetTitleOffset(0.9)
	frame.GetXaxis().SetNdivisions(508)
	frame.GetYaxis().CenterTitle(True)

	h_limit = ROOT.TMultiGraph()
	if options.ratio:
		for obs in obsList_ratio: 
			h_limit.Add(obs)
	else:
		for obs in obsList:
                        h_limit.Add(obs)
	h_limit.Draw('pe')
	h_limit.GetXaxis().SetLimits(options.massMin,options.massMax)
	h_limit.SetMinimum(options.xsecMin)
	h_limit.SetMaximum(options.xsecMax)
	h_limit.GetYaxis().SetRangeUser(options.xsecMin,options.xsecMax)
	h_limit.GetXaxis().SetTitle("Z' mass [GeV]")
	if options.gq:
		h_limit.GetYaxis().SetTitle("g'_{q}")
		if options.ratio:
			h_limit.GetYaxis().SetTitle("g'_{q} Ratio")
		h_limit.GetYaxis().SetMoreLogLabels()
		h_limit.GetYaxis().SetNdivisions(10);
		h_limit.GetYaxis().SetNoExponent()
		h_limit.GetXaxis().SetMoreLogLabels()
                h_limit.GetXaxis().SetNdivisions(10);
		h_limit.GetXaxis().SetNoExponent()
	elif options.xsec:
		h_limit.GetYaxis().SetTitle("#sigma #times B [pb]")
        elif options.mu:
		h_limit.GetYaxis().SetTitle("#mu =\sigma_{95\%CL}/\sigma_{th}")
	h_limit.GetYaxis().SetTitleOffset(0.9)
	if options.ratio:
		h_limit.SetMinimum(0.5)
		h_limit.SetMaximum(1.5)
	for obs in obsList:
		obs.SetMarkerStyle(20)
		obs.SetLineWidth(3)
		obs.SetLineColor(ROOT.kBlue)
		if options.observed:
			#obs.Draw('PLsame')
			obs.Draw('Csame')

        for obs_alt in obsList_alt:
                obs_alt.SetMarkerStyle(20)
                obs_alt.SetLineWidth(3)
		obs_alt.SetLineColor(ROOT.kBlue)
                if options.observed:
                        obs_alt.Draw('Csame')

	for obs_ratio in obsList_ratio:
                obs_ratio.SetMarkerStyle(20)
                obs_ratio.SetLineWidth(3)
                if options.ratio:
			obs_ratio.Draw('PLsame')

	CMS_lumi.lumi_13TeV = "%.1f fb^{-1} (2017)"%options.lumi
	CMS_lumi.CMS_lumi(c,4,11)

	if options.gq:
		x1 = 0.67
	else:
		x1 = 0.6
	x2 = x1 + 0.24
	if options.xsec: 
		y1 = 0.72
	else: 
		y1 = 0.3
	y2 = y1 + 0.18
	legend = ROOT.TLegend(x1,y1,x2,y2)
	legend.SetFillStyle(0)
	legend.SetBorderSize(0)
	legend.SetTextSize(0.038)
	legend.SetTextFont(42)
	if options.observed:
		legend.AddEntry(obs, "Expected %s"%options.tagobs,'l')
		legend.AddEntry(obs_alt, "Expected %s"%options.tagobsalt,'l')
	if options.ratio:
		legend.AddEntry(obs_ratio, "ratio ",'l')
	if options.xsec: 
		legend.AddEntry(theory_inclusive_xsec[options.model], legend_entry[options.model],'l')
	legend.Draw()

	if len(options.box.split('_')) > 1:
		if options.xsec:
			dxleg = 30
			dyleg = 1
			yleg1 = 0.05*1000
			yleg2 = 5*1000
		elif options.gq: 
			dxleg = 30
			dyleg = 0.05
			yleg1 = 0.15
			yleg2 = 0.6
		else:
			dxleg = 40
			dyleg = 0.05
			yleg1 = 0.15
			yleg2 = 0.5  
		line1 = ROOT.TLine(massSwitch,yleg1,massSwitch,yleg2)
		line1.SetLineStyle(2)
		line1.SetLineWidth(2)
		line1.SetLineColor(ROOT.kGray+3)
		line1.Draw()
		lab = ROOT.TLatex()
		lab.SetTextSize(0.035)
		lab.SetTextFont(42)
		lab.SetTextColor(ROOT.kGray+3)
		lab.SetTextAlign(23)
		lab.DrawLatex(massSwitch-dxleg,yleg2-dyleg,"#leftarrow #splitline{anti-k_{T}}{R=0.8}")
		lab.DrawLatex(massSwitch+dxleg,yleg2-dyleg,"#splitline{CA}{R=1.5} #rightarrow")
		lab.Draw()

	legend.Draw("same")
	print " "
	if options.gq: 
		if options.observed:
			ROOT.gPad.SetLogx();
			ROOT.gPad.SetLogy();
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq_observed" + "_" +options.tagobs +"_" +options.tagobsalt +".pdf")
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq_observed" + "_" +options.tagobs +"_" +options.tagobsalt +".png")
		else:
			if options.ratio:
				c.SaveAs(options.odir+"/RatioExpectedLimit_Zpqq_" + options.box + "gq_observed" + "_" +options.tagobs +"vs" +options.tagobsalt +".pdf")
				c.SaveAs(options.odir+"/RatioExpectedLimit_Zpqq_" + options.box + "gq_observed" + "_" +options.tagobs +"vs" +options.tagobsalt +".png")
			else:
				ROOT.gPad.SetLogx();
				ROOT.gPad.SetLogy();
				c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq" + "_" +options.tagobs +"_" +options.tagobsalt +".pdf") 
				c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq" + "_" +options.tagobs +"_" +options.tagobsalt +".png")
	elif options.xsec: 
		if options.ratio:
			c.SaveAs(options.odir+"/RatioExpectedLimit_Zpqq_" + options.box + "_" +options.tagobs +"_" +options.tagobsalt +"xsec.pdf")
		else:
			c.SetLogy()
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "_" +options.tagobs +"_" +options.tagobsalt +"xsec.pdf") 
        elif options.mu:
                if options.ratio:
                        ROOT.gPad.SetLogx();
			c.SaveAs(options.odir+"/RatioLimit_Zpqq_" + options.box + "_" +options.tagobs +"_" +options.tagobsalt +"mu.pdf")
		else:
			ROOT.gPad.SetLogx();
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "_" +options.tagobs +"_" +options.tagobsalt +"mu.pdf")
	else: 
		c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "_" +options.tagobs +"_" +options.tagobsalt +".pdf")
	c.Close()

if __name__ == '__main__':
	parser = OptionParser()
	parser.add_option('--masses',dest='masses', default='all',type='string',help='masses of resonance')
	parser.add_option('-b','--box',dest="box", default="AK8",type="string", help="box name")
	parser.add_option("--lumi", dest="lumi", default=4.1, type="float", help="luminosity", metavar="lumi")
	parser.add_option('-x','--xsec', dest='xsec', action='store_true',default=False, help='cross_section',metavar='xsec')
        parser.add_option('--mu', dest='mu', action='store_true',default=False, help='signal strenght',metavar='mu')
	parser.add_option('--observed', dest='observed', action='store_true',default=False, help='show observed',metavar='observed')
	parser.add_option('--gq', dest='gq', action='store_true',default=False, help='gq',metavar='gq')
        parser.add_option('--ratio', dest='ratio', action='store_true',default=True, help='ratio plot',metavar='ratio')
	parser.add_option('--tag', dest='tag', default='blinded', help='tag',metavar='tag')
	parser.add_option('--tagalt', dest='tagalt', default='blinded', help='tag alt')
        parser.add_option('--tagswitch', dest='tagswitch', default='', help='tag switch',metavar='tagswitch')
        parser.add_option('--idir', dest='idir', default='./', help='input directory',metavar='idir')
	parser.add_option('--idiralt', dest='idiralt', default='./', help='input directory',metavar='idiralt')
        parser.add_option('--idirswitch', dest='idirswitch', default='./', help='input directory',metavar='idirswitch')
	parser.add_option('--tagobs', dest='tagobs', default = '', help='tag 1 limit')
	parser.add_option('--tagobsalt', dest='tagobsalt', default = '', help='tag 2 limit')
	parser.add_option('--odir', dest='odir', default='./', help='output directory',metavar='odir')
	parser.add_option('--massMin',dest="massMin", default=50.,type="float", help="minimum mass")
	parser.add_option('--massMax',dest="massMax", default=500.,type="float", help="maximum mass")
	parser.add_option('--xsecMin',dest="xsecMin", default=0.05,type="float", help="minimum xsec")
	parser.add_option('--xsecMax',dest="xsecMax", default=1.0,type="float", help="maximum xsec")
	parser.add_option('--is2016sig', action='store_true', dest='is2016sig',  default=False, help='is 2016 signal')

	(options,args) = parser.parse_args()   
	plotRatioUpperLimits(options,args) 
