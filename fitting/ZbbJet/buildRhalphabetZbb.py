#!/usr/bin/env python
import ROOT as r, sys, math, os
from ROOT import TFile, TTree, TChain, gPad, gDirectory
from multiprocessing import Process
from optparse import OptionParser
from operator import add
import math
import sys
import time
import array

r.gSystem.Load(os.getenv('CMSSW_BASE') + '/lib/' + os.getenv('SCRAM_ARCH') + '/libHiggsAnalysisCombinedLimit.so')
sys.path.insert(0, '../.')
from tools import *
from hist import *

MASS_BINS = 23
MASS_LO = 40       # mass range for RooVar
MASS_HI = 201
MASS_HIST_LO = 47   # mass range for histograms
MASS_HIST_HI = 201
BLIND_LO = 110
BLIND_HI = 131
RHO_LO = -6
RHO_HI = -2.1

SF2018={
            'shift_SF'  : 0.970,           'shift_SF_ERR' : 0.012,
            'smear_SF'  : 0.9076,          'smear_SF_ERR' : 0.0146,
            'V_SF'      : 0.953,           'V_SF_ERR'     : 0.016,  
            'BB_SF'     : 1.0,             'BB_SF_ERR' : 0.3,     ## M2 SF
}
SF2017={
            'shift_SF'  : 0.978,           'shift_SF_ERR' : 0.012,
            'smear_SF'  : 0.9045,          'smear_SF_ERR' : 0.048,
            'V_SF'      : 0.924,           'V_SF_ERR'  : 0.018,  
            'BB_SF'     : 1.0,             'BB_SF_ERR' : 0.3        , # prelim ddb SF
}
SF2016={
            'BB_SF'     : 1.0,             'BB_SF_ERR' : 0.23,     ## M2 SF
            'V_SF'      : 0.993,            'V_SF_ERR'  : 0.043,
            'shift_SF'  : 1.014,             'shift_SF_ERR': 0.006, # tau21ddt 0.43
            'smear_SF'  : 1.086,             'smear_SF_ERR': 0.086, # tau21ddt 0.43
        }

def main(options, args):
    ifile = options.ifile
    odir = options.odir

    print "loading default rhalphabet_builder"
    from rhalphabet_builder import RhalphabetBuilder, LoadHistograms, GetSF
    # Load the input histograms
    # 	- 2D histograms of pass and fail mass,pT distributions
    # 	- for each MC sample and the data
    f = r.TFile.Open(ifile)    
    fLoose = None
    qcdTFpars = {}
    if options.ifile_loose is not None:
        fLoose = r.TFile.Open(options.ifile_loose)
    if   options.year =='2018':
          sf=SF2018
          if not options.pseudo:
              # qcd TF pars for ddb fit (hbb)    
              qcdTFpars ={'n_rho':2, 'n_pT':2,
                          'pars':[0.0139,-0.9680,2.3695 ,0.6775 ,1.0759 ,1.4427 ,0.1826 ,0.2077 ,1.8612 ,-0.8737],
                          'fitpath':'ddb2018_Jun24_v3/ddb_M2_full/TF22_MC_w2Fit/rhalphabase.root'}
    elif options.year =='2017':
          sf=SF2017
          if not options.pseudo: 
              # qcd TF pars for ddb fit (hbb) 
              qcdTFpars = {'n_rho':2, 'n_pT':2,
                           'pars':[ 0.0151 , -1.0359, 2.3953 , 0.7093 , 1.0947 , 1.6930 , -0.1745, 0.1980 , 1.4567 , -0.0427],
                           'fitpath':'ddb_Jun24_v2/ddb_M2_full/TF22_MC_w2Fit/rhalphabase.root'}
    elif options.year =='2016':
          sf=SF2016
          if not options.pseudo:  
              if 'dak8' in ifile: # dak8
                  qcdTFpars ={'n_rho':2, 'n_pT':2,
                              'pars':[0.23009,0.78652,1.4017,0.8933,-0.62788,3.155,-0.60492,3.0336,0.32512,-0.7438],
                              'fitpath':'dak8/dak8_M2_2016_tightMatch08/TF22_MC_w2Fitv2/rhalphabase.root'}
              else: # ddb
                  qcdTFpars = {'n_rho':2, 'n_pT':2,
                               'pars':[ 0.012287,-1.0841,2.0706, 0.82500,1.2746 ,1.8651 ,0.24751,0.43354 ,1.2328 ,-0.00224],
                               'fitpath':'ddb/ddb_M2_2016/TF22_MC_w2Fitv2/rhalphabase.root'}
              

    (pass_hists,fail_hists) = LoadHistograms(f, options.pseudo, options.blind, options.useQCD, scale=options.scale, r_signal=options.r, mass_range=[MASS_HIST_LO, MASS_HIST_HI], blind_range=[BLIND_LO, BLIND_HI], rho_range=[RHO_LO,RHO_HI], fLoose=fLoose,sf_dict=sf,createPassFromFail=options.createPassFromFail,skipQCD=options.skipQCD)

    # Build the workspacees
    rhalphabuilder = RhalphabetBuilder(pass_hists, fail_hists, f, options.odir, nr=options.NR, np=options.NP, mass_nbins=MASS_BINS, mass_lo=MASS_LO, mass_hi=MASS_HI, blind_lo=BLIND_LO, blind_hi=BLIND_HI, rho_lo=RHO_LO, rho_hi=RHO_HI, blind=options.blind, mass_fit=options.massfit, freeze_poly=options.freeze, remove_unmatched=options.removeUnmatched, input_file_loose=fLoose,suffix=options.suffix,sf_dict=sf,mass_hist_lo=MASS_HIST_LO,mass_hist_hi=MASS_HIST_HI,qcdTFpars=qcdTFpars,exp=options.exp,multi=options.multi,pseudo=options.pseudo)
    rhalphabuilder.run()
    if options.addHptShape:
        rhalphabuilder.addHptShape()	
    if options.prefit:
        rhalphabuilder.prefit()
    elif options.loadfit is not None:
        rhalphabuilder.loadfit(options.loadfit)
    if not options.pseudo:
        rhalphabuilder.createdeco()
        

##-------------------------------------------------------------------------------------
if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option('-i', '--ifile', dest='ifile', default='hist_1DZbb.root', help='file with histogram inputs',
                      metavar='ifile')
    parser.add_option('--ifile-loose', dest='ifile_loose', default=None, help='second file with histogram inputs (looser b-tag cut to take W/Z/H templates)',
                      metavar='ifile_loose')
    parser.add_option('-o', '--odir', dest='odir', default='./', help='directory to write plots', metavar='odir')
    parser.add_option('--pseudo', action='store_true', dest='pseudo', default=False, help='use MC', metavar='pseudo')
    parser.add_option('--blind', action='store_true', dest='blind', default=False, help='blind signal region',
                      metavar='blind')
    parser.add_option('--use-qcd', type='int', dest='useQCD', default=1, help='use real QCD MC',
                      metavar='useQCD')
    parser.add_option('--massfit', action='store_true', dest='massfit', default=False, help='mass fit or rho',
                      metavar='massfit')
    parser.add_option('--exp', action='store_true', dest='exp', default=False, help='use exp(bernstein poly) transfer function',
                      metavar='exp')
    parser.add_option('--multi', action='store_true', dest='multi', default=False, help='define RooMultiPdf',
                      metavar='multi')
    parser.add_option('--freeze', action='store_true', dest='freeze', default=False, help='freeze pol values',
                      metavar='freeze')
    parser.add_option('--scale', dest='scale', default=1, type='float',
                      help='scale factor to scale MC (assuming only using a fraction of the data)')
    parser.add_option('--nr', dest='NR', default=2, type='int', help='order of rho (or mass) polynomial')
    parser.add_option('--np', dest='NP', default=1, type='int', help='order of pt polynomial')
    parser.add_option('-r', dest='r', default=1, type='float', help='signal strength for MC pseudodataset')
    parser.add_option('--remove-unmatched', action='store_true', dest='removeUnmatched', default =False,help='remove unmatched', metavar='removeUnmatched')
    parser.add_option('--prefit', action='store_true', dest='prefit', default =False,help='do prefit', metavar='prefit')
    parser.add_option('--addHptShape',action='store_true',dest='addHptShape',default =False,help='add H pt shape unc', metavar='addHptShape')
    parser.add_option('--loadfit', dest='loadfit', default=None, help='load qcd polynomial parameters from alternative rhalphabase.root',metavar='loadfit')
    parser.add_option('-y' ,'--year', type='choice', dest='year', default ='2016',choices=['2016','2017','2018'],help='switch to use different year ', metavar='year')
    parser.add_option('--suffix', dest='suffix', default='', help='suffix for conflict variables',metavar='suffix')
    parser.add_option('--createPassFromFail', action='store_true', dest='createPassFromFail', default=False, help='Creating data_obs pass from data_obs fail', metavar='createPassFromFail')
    parser.add_option('--skipQCD', action='store_true', dest='skipQCD', default=False, help='skipQCD MC template', metavar='skipQCD')

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

    main(options, args)
##-------------------------------------------------------------------------------------
