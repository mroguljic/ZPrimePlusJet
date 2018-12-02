from math import sqrt, floor
import ROOT as rt,sys,math,os

rt.gROOT.SetBatch(True)
rt.gStyle.SetOptStat(0)
rt.gStyle.SetOptTitle(0)

NOMINAL_MASSES = [50,75,100,115,125,150,175,200,225,250,275,300,350,400,450,500]

INTERPOL_MASSES ={}
INTERPOL_MASSES['AK8'] = [55.,60.0,65.,70.,
			  80.,85.,90.0,95.,
			  105.,110.0,
			  120.,
			  130.,135.0,140.,145.,
			  155.,160.,165.0,170.,
			  180.0,185.,190.,195.,
			  205.,210.,215.,220.,
			  230.,235.,240,245.,
			  255.,260.,265.,270.,
			  280.,285.,290.,295.]
INTERPOL_MASSES['CA15'] = [105.,110.0,
			   120.,
			   130.,135.0,140.,145.,
			   155.,160.,165.0,170.,
			   175.,
			   180.0,185.,190.,195.,
			   205.,210.,215.,220.,
			   225.,
			   230.,235.,240,245.,
			   255.,260.,265.,270.,
			   275.,
			   280.,285.,290.,295.,
			   305.,310.,315.,320.,
			   325.,330.,335.,340.,345.,
			   355.,360.,365.,370.,375.,
			   380.,385.,390.,395.,
			   405.,410.,415.,420.,
			   425.,430.,435.,440.,445.
			   ]

color = {'zqq50': rt.kRed,
	 'zqq75': rt.kOrange,
	 'zqq100':  rt.kRed,
	 'zqq115':  rt.kGreen,
	 'zqq125':  rt.kGray,
	 'zqq150': rt.kMagenta,
	 'zqq175':  rt.kViolet,
	 'zqq200':  rt.kSpring,
	 'zqq225':  rt.kBlue,
	 'zqq250':  rt.kGray,
         'zqq275':  rt.kCyan,
	 'zqq300': rt.kAzure,
	 'zqq350':  rt.kRed,
	 'zqq400':  rt.kTeal,
	 'zqq450': rt.kYellow,
	 'zqq500': rt.kBlue}

boxes = ['pass_cat1',
	 'pass_cat2',
	 'pass_cat3',
	 'pass_cat4','pass_cat5','pass_cat6',
	 'fail_cat1',
	 'fail_cat2',
	 'fail_cat3','fail_cat4','fail_cat5','fail_cat6',
	 ]

# get histograms from validation file
def getHistograms(args):
	tfile = rt.TFile.Open('validation.root')
	simHists = {}
	interpolHists = {}
	masses =  args.masses
        if args.masses == 'all' and args.jet == 'AK8':
                masses = '50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295'
	if args.masses == 'all' and args.jet == 'CA15':
		#masses = '100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300,305,310,315,320,325,330,335,340,345,350,355,360,365,370,375,380,385,390,395,400,405,410,415,420,425,430,435,440,445,450'
		masses = '100,105,115,120,125,135,150,165,175,190,200,215,225,245,250,260,275,290,300,325,350,375,400,425,450'

        input_masses = [int(x) for x in masses.split(",")]

	icolor = 0
	for mass in input_masses:
		if args.jet == 'AK8' and mass > 300: continue
		for ibox in boxes:
			tmph = tfile.Get('zqq%s_%s'%(str(mass),ibox)).Clone()
			print 'zqq%s_%s'%(str(mass),ibox),tmph.Integral()
			tmph.SetMaximum(2.*tmph.GetMaximum())
			if tmph.GetMaximum() < 5: tmph.SetMaximum(5) 
			tmph.SetMarkerStyle(24)
			tmph.SetLineWidth(2)
			tmph.GetXaxis().SetTitle('m_{SD} (GeV)')
			if mass in NOMINAL_MASSES:
				icolor = color['zqq%s'%(str(mass))]
				tmph.SetLineColor(icolor)
				tmph.SetMarkerColor(icolor)
				tmph.SetDirectory(0)
				simHists['zqq%s_%s'%(str(mass),ibox)] = tmph
			elif mass in INTERPOL_MASSES[args.jet]:
				iMass = 50
				for i0 in xrange(0,len(NOMINAL_MASSES),2):
					print i0,mass,NOMINAL_MASSES[i0],NOMINAL_MASSES[i0+1]
					if mass > NOMINAL_MASSES[i0] and mass < NOMINAL_MASSES[i0+1]: iMass = NOMINAL_MASSES[i0]
				#print 'imass ',iMass
				icolor += 1
				tmph.SetLineColor(icolor)
                                tmph.SetMarkerColor(icolor)
				tmph.SetDirectory(0)
				interpolHists['zqq%s_%s'%(str(mass),ibox)] = tmph

	return simHists,interpolHists
		
def main(args):
	simHists,interpolHists = getHistograms(args)
	masses =  args.masses
        if args.masses == 'all' and args.jet == 'AK8':
                masses = '50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295'
	if args.masses == 'all' and args.jet == 'CA15':
                #masses = '100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300,305,310,315,320,325,330,335,340,345,350,355,360,365,370,375,380,385,390,395,400,405,410,415,420,425,430,435,440,445,450'
		masses = '100,105,115,120,125,135,150,165,175,190,200,215,225,245,250,260,275,290,300,325,350,375,400,425,450'
        input_masses = [int(x) for x in masses.split(",")]
	for ibox in boxes:
		c_comparison = rt.TCanvas("c_sim_validation_%s"%ibox, "c", 800, 1000)
		for mass in input_masses:
			#print simHists['zqq%s_%s'%(str(mass),ibox)]
                        if mass in NOMINAL_MASSES:
				simHists['zqq%s_%s'%(str(mass),ibox)].Draw("same")
                c_comparison.SaveAs("sim_validation_%s.png"%ibox)
                c_comparison = rt.TCanvas("c_interpol_validation_%s"%ibox, "c", 800, 1000)
                for mass in input_masses:
                        if mass in INTERPOL_MASSES:
                                interpolHists['zqq%s_%s'%(str(mass),ibox)].Draw("same")
		#c_comparison.SetLogx()
		c_comparison.SaveAs("interpol_validation_%s.png"%ibox)

if __name__ == "__main__":
        import argparse
        parser = argparse.ArgumentParser(description='Plot signal interpolations on mSD histograms.')
        parser.add_argument('--jet', type=str, default="AK8", help="AK8 or CA15")
        #parser.add_argument('--masses', type=str, default="50,75,100,125,150,200,250,300", help="List of input masses (comma-separated)")
        parser.add_argument('--masses', type=str, default="100,115,125,150,175,200,225,250,275,300", help="List of input masses (comma-separated)")
        args = parser.parse_args()

	main(args);
