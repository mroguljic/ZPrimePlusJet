import os
import glob
import math
import array
import sys
import time
from optparse import OptionParser
import ROOT
from ROOT import *
from plotHelpers import *

def main(options,args):
    plots = [
        'h_jpt',
        'h_jmsd',
        'h_jmsd_prefire',
        'h_jmsd_notrig',
        'h_jmsd_nocuts',
        'h_jmsd_rhocut',
        'h_jmsd_raw',
        'h_jmsd_pass',
        'h_jmsd_fail',
        'h_jpt_pass',
        'h_jN2sdb1',
        'h_jN2sdb1_DDT',
        'h_jrho',
        'h_jpt_N20',
        'h_jmsd_N20',
        'h_jrho_N20',
        ]

    sigSamples = ['zqq50']
    bkgSamples = ['qcd','zqq','wqq','stqq']
    dataSamples = ['data_obs']

    if options.is2016:
        sigSamples2016 = ['zqq50_2016']
        bkgSamples2016 = ['qcd_2016','zqq_2016','wqq_2016','stqq_2016','tqq_2016']
        dataSamples2016 = ['data_obs_2016']
    else:
        sigSamples2016 = []
        bkgSamples2016 = []
        dataSamples2016 = []

    tag = options.idir
    tag10 = tag + '10th'
    #lumi = 36.2
    lumi = 41.1
    lumi10 = 4.1
    lumi2016 = 35.9
    lumi201610 = 3.6
    selMuon = False
    if options.isMuonCR:
        bkgSamples.extend(['wlnu','zll','vvqq','tqq']) #'tqq2lep','tqq1ele','tqq1tau','tqq1mu','tqq0lep'])
        selMuon = True
        tag = 'muon'+tag
        tag10 = 'muon'+tag10
        lumi = 41.1
        lumi10 = 4.1
        bkgSamples.remove('qcd')
        #bkgSamples.remove('zqq')
        #bkgSamples.remove('wqq')
    else:
        bkgSamples.extend(['tqq'])

    #idir = 'control'
    idir = 'controlHists'

    color = {'zqq100': ROOT.kPink,
             'vvqq': ROOT.kOrange,
             'zll':  ROOT.kRed-3,
             'wlnu':  ROOT.kGreen+1,
             'tqq':  ROOT.kGray,
             'tlqq':  ROOT.kGray,
             'stqq': ROOT.kRed-2,
             'zqq':  ROOT.kRed,
             'wqq':  ROOT.kGreen+2,
             'qcd': ROOT.kAzure+10,
             'data_obs': ROOT.kBlack,
             'zqq100_2016': ROOT.kPink,
             'vvqq_2016': ROOT.kOrange,
             'zll_2016':  ROOT.kRed-3,
             'wlnu_2016':  ROOT.kGreen+1,
             'tqq_2016':  ROOT.kGray,
             'tlqq_2016':  ROOT.kGray,
             'stqq_2016': ROOT.kRed-2,
             'zqq_2016':  ROOT.kRed,
             'wqq_2016':  ROOT.kGreen+2,
             'qcd_2016': ROOT.kAzure+10,
             'data_obs_2016': ROOT.kBlack,
             }
    legname = {'zqq100':"Z\'(qq) m_{Z'} = 100 GeV (2017)",
               'vvqq': 'VV(4q) (2017)',
               'zll': 'Z(ll)+jets (2017)',
               'wlnu': 'W(l#nu)+jets (2017)',
               'zqq': 'Z+jets (2017)',
               'wqq': 'W+jets (2017)',
               'tqq': 't#bar{t}+jets (2017)',
               'tlqq': 't#bar{t}+jets semilep (2017)',
               'stqq' : 'single-t (2017)',
               'qcd': 'QCD (2017)',
               'data_obs': 'Data (2017)',
               'zqq100_2016':"Z\'(qq) m_{Z'} = 100 GeV (2016)",
               'vvqq_2016': 'VV(4q) (2016)',
               'zll_2016': 'Z(ll)+jets (2016)',
               'wlnu_2016': 'W(l#nu)+jets (2016)',
               'zqq_2016': 'Z+jets (2016)',
               'wqq_2016': 'W+jets (2016)',
               'tqq_2016': 't#bar{t}+jets (2016)',
               'tlqq_2016': 't#bar{t}+jets semilep (2016)',
               'stqq_2016' : 'single-t (2016)',
               'qcd_2016': 'QCD (2016)',
               'data_obs_2016': 'Data (2016)',
               }
    style = {'zqq100': 2,
             'vvqq': 1,
             'zll': 1,
             'wlnu': 1,
             'tqq': 1,
             'tlqq': 1,
             'stqq': 1,
             'zqq': 1,
             'wqq': 1,
             'qcd': 1,
             'data_obs': 1,
             'zqq100_2016': 3,
             'vvqq_2016': 2,
             'zll_2016': 2,
             'wlnu_2016': 2,
             'tqq_2016': 2,
             'tlqq_2016': 2,
             'stqq_2016': 2,
             'zqq_2016': 2,
             'wqq_2016': 2,
             'qcd_2016': 2,
             'data_obs_2016': 2
             }

    canvases = []
    
    ofile = ROOT.TFile.Open(idir+'/'+tag+'.root','read')

    for plot in plots:
        print plot
        hs = {}
        for process in sigSamples:
            #print process
            print plot.replace('h_',process)
            #ofile = ROOT.TFile.Open(idir+'/'+tag+'/'+process.replace('zqq','zqq')+'.root','read')
            #ofile = ROOT.TFile.Open(idir+'/'+tag+'/'+process.replace('zqq','zqq2018')+'.root','read')
            hs[process] = ofile.Get(plot.replace('h_',process)).Clone()
            hs[process].SetDirectory(0)
            #ofile.Close()
        hs2016 = {}
        for process in sigSamples2016:
            hs2016[process] = ofile.Get(plot.replace('h_',process)).Clone()
            hs2016[process].SetDirectory(0)
        hb = {}
        for process in bkgSamples:
            print process
            print plot.replace('h_',process)
            #ofile = ROOT.TFile.Open(idir+'/'+tag+'/'+process+'.root','read')
            hb[process] = ofile.Get(plot.replace('h_',process)).Clone()
            hb[process].SetDirectory(0)
            #ofile.Close()
        hb2016 = {}
        for process in bkgSamples2016:
            hb2016[process] = ofile.Get(plot.replace('h_',process)).Clone()
            hb2016[process].SetDirectory(0)
        if options.isMuonCR:
            #ofile = ROOT.TFile.Open(idir+'/'+tag+'/singlemu.root','read')
            hd = ofile.Get(plot.replace('h_','data_obs'))
            hd.SetDirectory(0)
        else:
            #dfile = ROOT.TFile.Open(idir+'/'+tag+'/jetht.root','read')
            #hd = dfile.Get(plot.replace('h_','data_obs'))
            hd = ofile.Get(plot.replace('h_','data_obs'))
            hd.SetDirectory(0)
            hd.SetMarkerColor(1)
            hd.SetMarkerSize(2)
            hd.SetLineStyle(1)
        hd2016 = None
        for process in dataSamples2016:
            #print process,plot,plot.replace('h_',process)
            hd2016 = ofile.Get(plot.replace('h_',process)).Clone()
            hd2016.SetDirectory(0)
        ifile = ROOT.TFile.Open(idir+'/'+tag+'/plots.root','RECREATE')
        ratio = makeCanvasComparisonStackWData(hd,hs,hb,legname,color,style,plot.replace('h_','stack_'),options.odir,lumi,ifile)
        if options.is2016:
            ratio2016 = makeCanvasComparisonStackWData(hd2016,hs2016,hb2016,legname,color,style,plot.replace('h_','stack2016_'),options.odir,lumi2016,ifile)
            makeCanvasDoubleRatio(ratio,ratio2016,['2017','2016'],[2,3],plot.replace('h_','ratio2017vs2016_'),options.odir)


if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option("--lumi", dest="lumi", type=float, default = 30,help="luminosity", metavar="lumi")
    parser.add_option('-i','--idir', dest='idir', default = '2017sel8pt475409old/',help='directory with data', metavar='idir')
    parser.add_option('-o','--odir', dest='odir', default = 'plots/',help='directory to write plots', metavar='odir')
    parser.add_option('--jobs', dest='jobs', default=20, type=int, help='#of jobs to process in parallel the trees [default: %default]')
    parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False, help='run on muon CR')
    parser.add_option('--isData', action='store_true', dest='isData', default=False, help='run on data')
    parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
    parser.add_option('--blind', dest='blind', default=False, help='10th of dataset')
    parser.add_option('--is2016', action='store_true', dest='is2016', default=False, help='run 2016')

    (options, args) = parser.parse_args()


    import tdrstyle
    tdrstyle.setTDRStyle()
    ROOT.gStyle.SetPadTopMargin(0.10)
    ROOT.gStyle.SetPadLeftMargin(0.16)
    ROOT.gStyle.SetPadRightMargin(0.10)
    ROOT.gStyle.SetPalette(1)
    ROOT.gStyle.SetPaintTextFormat("1.1f")
    ROOT.gStyle.SetOptFit(0000)
    ROOT.gROOT.SetBatch()

    main(options,args)
