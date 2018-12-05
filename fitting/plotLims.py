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
# including other directories
sys.path.insert(0, '../.')

MASSES_AK8 = '50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300'

MASSES_CA15 = '100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,205,210,215,220,230,235,240,245,255,260,265,270,275,280,285,290,295,305,310,315,320,325,330,335,340,345,355,360,365,370,375,380,385,390,395,405,410,415,420,425,430,435,440,445'

MASSES_AK8_CA15 = '50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,205,210,215,220,230,235,240,245,255,260,265,270,280,285,290,295,305,310,315,320,325,330,335,340,345,355,360,365,370,375,380,385,390,395,405,410,415,420,425,430,435,440,445'

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

massSwitch = 175

def Upsilonconstraints(x):	
	mUps = 9.46;
	WidUps = 54e-6;
	alpha = 1/130.;
	Argus = 5.3e-2;
	DimuUps = 2.48e-2;
	RUps = Argus/DimuUps;
	mZp = x[0];
	y = ( 2*4*math.pi*alpha ) * ( math.sqrt( 3.*RUps + 1 ) + 1 ) * (1-(mZp*mZp/(mUps*mUps)))
	if y < 0.: y *= -1;
	return math.sqrt(y)/6.;

def Psiconstraints(x):
	sinthetaW2 = 0.2312;
	sinthetaW = math.sqrt(sinthetaW2);
	costhetaW = math.sqrt(1 - sinthetaW2);
	mW = 80.;
	vev = 246.;
	g = mW*2./vev;
	e = g*sinthetaW;
	Vu = 0.25 - (4. * sinthetaW2 / 6);
	Vd = -0.25 - (2. * sinthetaW2 / 6);
	mZ = 91.18;
	mZp = x[0];
	ynum = relZwidthUnc * 3 * g * (1-(mZp*mZp/(mZ*mZ))) * (2*Vu*Vu + 3*Vd*Vd + 5/16.)
	yden = 2*0.01*costhetaW*sinthetaW*(2*Vu+3*Vd);
	if ynum > 0: ynum *= -1.;
	y = math.sqrt(ynum/yden);
	y = math.sqrt( math.fabs(1-(mZp*mZp/(mZ*mZ))) )
	return y/6.;

def Zconstraints(x):	
	mZ = 91.18;
	mZp = x[0];
	ynum = 4. * math.sqrt( 4. * math.pi ) * 1.96 * 1.1e-3 * ( 1-(mZp*mZp/(mZ*mZ)) );
	yden = 1.193 * 0.02;
	if ynum < 0: ynum *= -1.;
	y = math.sqrt(ynum/yden);
	return y/6.;

def getLimits(file_name):
	tfile = ROOT.TFile.Open(file_name,'read')
	try:
		if tfile.InheritsFrom("TFile") is False:
			print 'tfile.InheritsFrom("TFile") is False'
			return []
	except:
		print 'EXCEPTION'
		return []
	tree = tfile.Get("limit")
	try:
		if tree.InheritsFrom("TTree") is False: 
			print 'limit.InheritsFrom("TTree") is False'
			tfile.cd()
			tfile.Close()
			return []
	except:
		print 'EXCEPTION'
		tfile.cd()
		tfile.Close()
		return []
	limits = []
	for quantile in tree:
		limits.append(tree.limit)
	print limits
	return limits

def setDict():
	sample_xsec = {} # cross section used to normalize sample (in combine)
	theory_xsec = {} # real theory cross section to compare (no BR)
	theory_inclusive_xsec = {} # inclusive theory cross section to compare (no BR)
	br = {} # branching ratio to qq
	legend_entry = {}
	legend_entry['Zpqq'] = "Z', g_{q}=0.25, H_{T}>500 GeV"

	# == 1 since samples already re-weighted
	theory_xsec['Zpqq'] = ROOT.TGraph(16) # HT > 500
	theory_xsec['Zpqq'].SetPoint(0,  50, 1.466e+01)
	theory_xsec['Zpqq'].SetPoint(1,  75, 1.521e+01)
	theory_xsec['Zpqq'].SetPoint(2, 100, 1.433e+01)
	theory_xsec['Zpqq'].SetPoint(3, 115, 1.505e+01)
	theory_xsec['Zpqq'].SetPoint(4, 125, 1.456e+01)
	theory_xsec['Zpqq'].SetPoint(5, 150, 1.444e+01)
	theory_xsec['Zpqq'].SetPoint(6, 175, 1.362e+01)
	theory_xsec['Zpqq'].SetPoint(7, 200, 1.338e+01)
	theory_xsec['Zpqq'].SetPoint(8, 225, 1.370e+01)
	theory_xsec['Zpqq'].SetPoint(9, 250, 1.278e+01)
	theory_xsec['Zpqq'].SetPoint(10,275, 1.423e+01)
	theory_xsec['Zpqq'].SetPoint(11,300, 1.398e+01)
	theory_xsec['Zpqq'].SetPoint(12,350, 1.511e+01)
	theory_xsec['Zpqq'].SetPoint(13,400, 1.625e+01)
	theory_xsec['Zpqq'].SetPoint(14,450, 1.838e+01)
	theory_xsec['Zpqq'].SetPoint(15,500, 3.120e+01)

	sample_xsec['Zpqq'] = theory_xsec['Zpqq']

	# 2016 inclusive xsec
	theory_inclusive_xsec['Zpqq'] =  ROOT.TGraph(10)
	theory_inclusive_xsec['Zpqq'].SetPoint(0,  50, 1.394e+05)
        theory_inclusive_xsec['Zpqq'].SetPoint(1,  60, 8.419e+04)
	theory_inclusive_xsec['Zpqq'].SetPoint(2,  75, 4.481e+04) 
        theory_inclusive_xsec['Zpqq'].SetPoint(3,  90, 2.641e+04)
	theory_inclusive_xsec['Zpqq'].SetPoint(4, 100, 1.939e+04)
	theory_inclusive_xsec['Zpqq'].SetPoint(5, 110, 1.462e+04)
	theory_inclusive_xsec['Zpqq'].SetPoint(6, 135,      7870)
	theory_inclusive_xsec['Zpqq'].SetPoint(7, 150,      5707)
	theory_inclusive_xsec['Zpqq'].SetPoint(8, 165,      4254)
	theory_inclusive_xsec['Zpqq'].SetPoint(9, 180,      3233)
        theory_inclusive_xsec['Zpqq'].SetPoint(10,200,      2320)
	theory_inclusive_xsec['Zpqq'].SetPoint(11,250,      1131)
	theory_inclusive_xsec['Zpqq'].SetPoint(12,300,       620)

	br['Zpqq'] = ROOT.TGraph(10)
	br['Zpqq'].SetPoint(0,  50, 1)
	br['Zpqq'].SetPoint(1, 100, 1)
	br['Zpqq'].SetPoint(2, 150, 1)
	br['Zpqq'].SetPoint(3, 200, 1)
	br['Zpqq'].SetPoint(4, 250, 1)
	br['Zpqq'].SetPoint(5, 300, 1)
	br['Zpqq'].SetPoint(6, 325, 1)
	br['Zpqq'].SetPoint(7, 350, 1)
	br['Zpqq'].SetPoint(8, 400, 1)
	br['Zpqq'].SetPoint(9, 500, 1)

	return theory_xsec, theory_inclusive_xsec, sample_xsec, br, legend_entry


def getGraphs(limits, masses, options):        
	theory_xsec, theory_inclusive_xsec, sample_xsec, br, legend_entry = setDict()
	print theory_inclusive_xsec
	N = len(masses)
	print " No of mass points : ", N
	yellow = ROOT.TGraph(2*N)    # yellow band
	green = ROOT.TGraph(2*N)     # green band
	median = ROOT.TGraph(N)      # median line
	obs = ROOT.TGraph(N)         # observed

	kFactor = 1.218 #???
	up2s = [ ]
	i = -1
	for mass in masses:
		limit = limits[str(mass)]
		i += 1
		up2s.append(limit[4])
		if options.xsec or options.gq:
			fac = sample_xsec['Zpqq'].Eval(mass,0,'S')
			theory = theory_xsec['Zpqq'].Eval(mass,0,'S')
			if options.gq:
				if options.forcomb or options.is2016sig:
					theory = theory * 6. * 6.
				else:
					theory = theory * 4. * 4.
			else:
				theory = theory_xsec['Zpqq'].Eval(mass,0,'S') * br['Zpqq'].Eval(mass,0,'S')
		else:
			fac = 1
		if options.gq:
			#print fac/theory
			yellow.SetPoint(    i,    mass, math.sqrt(limit[4]*fac/theory)) # + 2 sigma 
			green.SetPoint(     i,    mass, math.sqrt(limit[3]*fac/theory)) # + 1 sigma
			median.SetPoint(    i,    mass, math.sqrt(limit[2]*fac/theory)) # median
			green.SetPoint(  2*N-1-i, mass, math.sqrt(limit[1]*fac/theory)) # - 1 sigma
			yellow.SetPoint( 2*N-1-i, mass, math.sqrt(limit[0]*fac/theory)) # - 2 sigma
			if len(limit)>5:
				obs.SetPoint(       i,    mass, math.sqrt(limit[5]*fac/theory)) # observed
				print "observed (expected) @ %s: %s (%s)"%( mass, math.sqrt(limit[5]*fac/theory), math.sqrt(limit[2]*fac/theory))
		elif options.xsec:
			# scale up by inclusive xsec / xsec ratio
			theoryRatio = theory_inclusive_xsec['Zpqq'].Eval(mass,0,'S') / theory_xsec['Zpqq'].Eval(mass,0,'S')
			yellow.SetPoint(    i,    mass, limit[4] * fac * theoryRatio * kFactor) # + 2 sigma
			green.SetPoint(     i,    mass, limit[3] * fac * theoryRatio * kFactor) # + 1 sigma
			median.SetPoint(    i,    mass, limit[2] * fac * theoryRatio * kFactor) # median
			green.SetPoint(  2*N-1-i, mass, limit[1] * fac * theoryRatio * kFactor) # - 1 sigma
			yellow.SetPoint( 2*N-1-i, mass, limit[0] * fac * theoryRatio * kFactor) # - 2 sigma
			if len(limit)>5:
				obs.SetPoint(       i,    mass, limit[5] * fac * theoryRatio) # observed
				print mass,  limit[5], fac, theoryRatio, kFactor
				print "observed (expected) @ %s: %s (%s)"%( mass, limit[5] * fac * theoryRatio * kFactor, limit[2] * fac * theoryRatio * kFactor)
		elif options.mu:
			yellow.SetPoint(    i,    mass, limit[4])
			green.SetPoint(     i,    mass, limit[3])
			median.SetPoint(    i,    mass, limit[2])
			green.SetPoint(  2*N-1-i, mass, limit[1])
			yellow.SetPoint( 2*N-1-i, mass, limit[0])
			if len(limit)>5:
				obs.SetPoint(       i,    mass, limit[5])
				#print "observed (expected) @ %s: %s (%s)"%( mass, limit[5], limit[2])
	return yellow, green, median, obs

def plotUpperLimits(options,args):
        theory_xsec, theory_inclusive_xsec, sample_xsec, br, legend_entry = setDict()
	masses = options.masses
	if options.masses == 'all' and options.box == 'AK8':
                masses = MASSES_AK8
	if options.masses == 'all' and options.box == 'CA15':
		masses = MASSES_CA15
	if options.masses == 'all' and options.box == 'AK8_CA15':
		masses = MASSES_AK8_CA15
        all_masses = massIterable(masses)
	#print all_masses
	masses = {}; limits = {};
	for jet_type in options.box.split('_'):
		masses[jet_type] = []
		limits[jet_type] = {}

        for mass in all_masses:
		file_name = ''
		#print mass,len(options.box.split('_'))
		if mass <= massSwitch or len(options.box.split('_')) == 1:
			jet_type = options.box.split('_')[0]
			file_name = "results/"+options.idir + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tag)
		if glob.glob(file_name):
			limits[jet_type][str(mass)] = getLimits(file_name)
			if len( limits[jet_type][str(mass)] )>=5:
				masses[jet_type].append(mass)
		if mass >= massSwitch and len(options.box.split('_')) > 1:
                        jet_type = options.box.split('_')[1]
			file_name = "results/"+options.idir + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tag)
			if options.tagswitch != '':
				file_name = "results/"+options.idirswitch + "/%s/ZQQ_%s/%s.root"%(jet_type,str(mass),options.tagswitch)
		if glob.glob(file_name):
			limits[jet_type][str(mass)] = getLimits(file_name)
			print limits[jet_type][str(mass)]
			if len( limits[jet_type][str(mass)] )>=5:
				masses[jet_type].append(mass)
	#print limits
	#print masses
	yellowList, greenList, medianList, obsList = [], [], [], []
	for jet_type in options.box.split('_'):
		yellow, green, median, obs = getGraphs(limits[jet_type], masses[jet_type], options)
		#print yellow, green, median, obs
		yellowList.append(yellow)
		greenList.append(green)
		medianList.append(median)
		obsList.append(obs)


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
	for yellow in yellowList: h_limit.Add(yellow)
	for green in greenList: h_limit.Add(green)
	for median in medianList:  h_limit.Add(median)
	h_limit.Draw('a3')
	h_limit.GetXaxis().SetLimits(options.massMin,options.massMax)
	h_limit.SetMinimum(options.xsecMin)
	h_limit.SetMaximum(options.xsecMax)
	h_limit.GetXaxis().SetTitle("Z' mass [GeV]")
	if options.gq:
		h_limit.GetYaxis().SetTitle("g'_{q}")
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

	for yellow in yellowList:
		yellow.SetFillColor(ROOT.kOrange)
		yellow.SetLineColor(ROOT.kBlack)
		yellow.SetFillStyle(1001)
		yellow.SetLineWidth(2)
		yellow.SetLineStyle(2)
		yellow.Draw('Fsame')

	for green in greenList:    
		green.SetFillColor(ROOT.kGreen+1)
		green.SetLineColor(ROOT.kBlack)
		green.SetLineWidth(2)
		green.SetLineStyle(2)
		green.SetFillStyle(1001)
		green.Draw('Fsame')
		
	for median in medianList:
		median.SetLineColor(1)
		median.SetLineWidth(3)
		median.SetLineStyle(2)
		median.Draw('Csame')
    
	for obs in obsList:
		obs.SetMarkerStyle(20)
		obs.SetLineWidth(3)
		if options.observed:
			#obs.Draw('PLsame')
			obs.Draw('Csame')

	if options.xsec:
		theory_inclusive_xsec['Zpqq'].SetMarkerStyle(20)
		theory_inclusive_xsec['Zpqq'].SetLineColor(ROOT.kBlue+2)
		theory_inclusive_xsec['Zpqq'].SetLineWidth(2)
		theory_inclusive_xsec['Zpqq'].SetLineStyle(6)
		theory_inclusive_xsec['Zpqq'].Draw('Csame')

	if options.gq:
		addFactor=True;
		gr_UA2 = csvToGraph( "data/UA2.csv",4,addFactor);
		gr_CDFRun1 = csvToGraph( "data/CDF_Run1.csv",2,addFactor );
		gr_CDFRun2 = csvToGraph( "data/CDF_Run2.csv",6,addFactor );
		gr_ATLAS = csvToGraph( "data/gBMZB_ATLAS_all_fbinv.csv",7,False );
		gr_CMS = csvToGraph( "data/CMS_Scouting.csv",8,False );
		gr_ATLAS_isrphoton = csvToGraph( "data/ATLAS_Run2ISRPhoton.csv",2,False );
		gr_ATLAS_scouting = csvToGraph( "data/ATLAS_Run2Scouting.csv",4,False );
		gr_UA2.SetLineStyle(3);
		gr_CDFRun1.SetLineStyle(3);
		gr_CDFRun2.SetLineStyle(3);
		gr_UA2.Draw("csames")
		gr_CDFRun1.Draw("csames")
		gr_CDFRun2.Draw("csames")
		gr_ATLAS.Draw("csames")
		gr_ATLAS_isrphoton.Draw("csames")
		gr_ATLAS_scouting.Draw("csames")
		gr_CMS.Draw("csames")

	CMS_lumi.lumi_13TeV = "%.1f fb^{-1} (2017)"%options.lumi
	if options.forcomb:
		CMS_lumi.lumi_13TeV = "%.1f fb^{-1} (2016+2017)"%options.lumi
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
		legend.AddEntry(obs, "Observed",'l')
	#legend.AddEntry(median, "Asymptotic CL_{s} expected",'L')
	legend.AddEntry(green, "Expected #pm 1 s.d.",'lf')
	legend.AddEntry(yellow,"Expected #pm 2 s.d.",'lf')
	if options.xsec: 
		legend.AddEntry(theory_inclusive_xsec['Zpqq'], legend_entry['Zpqq'],'l')
	# if options.gq:
	# 	legend.AddEntry(gr_UA2,"UA2","l")
	# 	legend.AddEntry(gr_CDFRun1,"CDF Run 1","l")
	# 	legend.AddEntry(gr_CDFRun2,"CDF Run 2","l")
	# 	legend.AddEntry(gr_ATLAS,"ATLAS 13 #oplus 20.3  fb^{-1}","l")
	# 	legend.AddEntry(gr_ATLAS_isrphoton,"ATLAS 13 #oplus 3.2 fb^{-1} (ISR #gamma)","l")
	# 	legend.AddEntry(gr_ATLAS_scouting,"ATLAS 13 #oplus 3.2 fb^{-1} (TLA)","l")
	# 	legend.AddEntry(gr_CMS,"CMS 8 #oplus 18.8 fb^{-1} (Scouting)","l")
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
	os.system('mkdir -p %s'%options.odir)
	print " "
	if options.gq: 
		ROOT.gPad.SetLogx();
		ROOT.gPad.SetLogy();
		if options.observed:
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq_observed.pdf")
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq_observed.png")
		else:
			c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq.pdf") 
                        c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "gq.png")
	elif options.xsec: 
		#c.SetLogy()
                ROOT.gPad.SetLogy();
		c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "xsec.pdf") 
        elif options.mu:
		ROOT.gPad.SetLogx();
                c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + "mu.pdf")
	else: 
		c.SaveAs(options.odir+"/Limit_Zpqq_" + options.box + ".pdf")
	c.Close()

def csvToGraph(fn, linecolor=1, addFactor=False):
	factor = 1.;
	if addFactor: factor = 6.;
	a_m = array('d', []);
	a_g = array('d', []);
	ifile = open(fn,'r');
	npoints = 0;
	for line in ifile: 
		lline = line.strip().split(',');
		a_m.append(float(lline[0]))
		a_g.append(float(lline[1])*factor)
		npoints += 1;
	gr = ROOT.TGraph(npoints,a_m,a_g);
	gr.SetLineColor(linecolor);
	gr.SetLineWidth(2);
	return gr

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
        parser.add_option('--tagswitch', dest='tagswitch', default='', help='tag switch',metavar='tagswitch')
        parser.add_option('--idir', dest='idir', default='./', help='input directory',metavar='idir')
        parser.add_option('--idirswitch', dest='idirswitch', default='./', help='input directory',metavar='idirswitch')
	parser.add_option('--odir', dest='odir', default='./', help='output directory',metavar='odir')
	parser.add_option('--massMin',dest="massMin", default=50.,type="float", help="minimum mass")
	parser.add_option('--massMax',dest="massMax", default=500.,type="float", help="maximum mass")
	parser.add_option('--xsecMin',dest="xsecMin", default=0.05,type="float", help="minimum xsec")
	parser.add_option('--xsecMax',dest="xsecMax", default=1.0,type="float", help="maximum xsec")
        parser.add_option('--forcomb', action='store_true', dest='forcomb',  default=False, help='combine with 2016')
	parser.add_option('--is2016sig', action='store_true', dest='is2016sig',  default=False, help='is 2016 signal')

	(options,args) = parser.parse_args()   
	plotUpperLimits(options,args) 
