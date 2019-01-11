#!/usr/bin/env python
import ROOT as rt,sys,math,os
import numpy as np
from ROOT import TFile, TTree, TChain, gPad, gDirectory
from multiprocessing import Process
from optparse import OptionParser
from operator import add
import math
import sys
import time

# including other directories
#sys.path.insert(0, '../.')
#from tools import *
#from RootIterator import RootIterator

from array import array

def main(options, args):
    tfile = rt.TFile.Open(options.idir+'/validation.root')
    #tfile = rt.TFile.Open(options.idir+'/validation_2017ak8blinded.root')
    bkgs = ['wqq','zqq'] #,'tqq']
    #sigs = ['zqq100','zqq115','zqq125','zqq150','zqq175','zqq200','zqq225','zqq250','zqq275','zqq300','zqq350','zqq400','zqq450','zqq500']
    #sigs = ['zqq50','zqq200','zqq250'] #'zqq100','zqq125','zqq150','zqq200','zqq250','zqq300'] #,'zqq350','zqq400','zqq450']
    #sigs = ['zqq195','zqq200','zqq205','zqq225','zqq235','zqq250','zqq275','zqq300']
    #sigs = ['zqq50','zqq75','zqq100','zqq115','zqq125','zqq150','zqq175','zqq200','zqq225','zqq250','zqq275','zqq300']
    sigs = ['zqq70','zqq100']
    #sigs = ['zqq70','zqq125','zqq250','zqq300']
    
    #massList = '50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300'
    #massList = '100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300,305,310,315,320,325,330,335,340,345,350,355,360,365,370,375,380,385,390,395,400,405,410,415,420,425,430,435,440,445,450,455,460,465,470,475,480,485,490,495,500'
    #sigs = ['zqq50','zqq55','zqq60','zqq65','zqq70','zqq75','zqq80','zqq85','zqq90','zqq95','zqq100','zqq105','zqq110','zqq115','zqq125']
    #sigs = ['zqq400','zqq425','zqq450']
    procdict = {}
    procdict['tqq'] = 't#bar{t}'
    procdict['wqq'] = 'W(qq)'
    procdict['zqq'] = 'Z(qq)'
    procdict['zqq50'] = "Z'(q#bar{q}), m = 50 GeV"
    procdict['zqq70'] = "Z'(q#bar{q}), m = 70 GeV"
    procdict['zqq75'] = "Z'(q#bar{q}), m = 75 GeV"
    procdict['zqq80'] = "Z'(q#bar{q}), m = 80 GeV"
    procdict['zqq100'] = "Z'(q#bar{q}), m = 100 GeV"
    procdict['zqq115'] = "Z'(q#bar{q}), m = 115 GeV"
    procdict['zqq125'] = "Z'(q#bar{q}), m = 125 GeV"
    procdict['zqq145'] = "Z'(q#bar{q}), m = 145 GeV"
    procdict['zqq150'] = "Z'(q#bar{q}), m = 150 GeV"
    procdict['zqq175'] = "Z'(q#bar{q}), m = 175 GeV"
    procdict['zqq200'] = "Z'(q#bar{q}), m = 200 GeV"
    procdict['zqq225'] = "Z'(q#bar{q}), m = 225 GeV"
    procdict['zqq235'] = "Z'(q#bar{q}), m = 235 GeV"
    procdict['zqq250'] = "Z'(q#bar{q}), m = 250 GeV"
    procdict['zqq275'] = "Z'(q#bar{q}), m = 275 GeV"
    procdict['zqq300'] = "Z'(q#bar{q}), m = 300 GeV"
    procdict['zqq350'] = "Z'(q#bar{q}), m = 350 GeV"
    procdict['zqq400'] = "Z'(q#bar{q}), m = 400 GeV"
    procdict['zqq425'] = "Z'(q#bar{q}), m = 425 GeV"
    procdict['zqq450'] = "Z'(q#bar{q}), m = 450 GeV"
    procdict['zqq500'] = "Z'(q#bar{q}), m = 500 GeV"
    boxes = ['pass_cat2','pass_cat3','pass_cat4','pass_cat5',#'pass_cat6',
             'fail_cat2','fail_cat3','fail_cat4','fail_cat5']#,'fail_cat6']
    systs = ['JER','JES','scale','smear','Pu']
    #systs = ['smear','scale']
    
    #numberOfMassBins = 23    
    #numberOfPtBins = 6
    #for box in boxes:
    #    for proc in (bkgs+sigs):
    #        for i in range(1,numberOfMassBins+1):
    #            systs.append('%s%s%s%i'%(proc,box.replace('_',''),'mcstat',i))        

    shapes = {}

    hists = {}
    for proc in (bkgs+sigs):
        hists['%s'%(proc)] = None

    os.system('mkdir -p %s'%options.odir)

    #tfile.ls()
    i0 = 0
    for ibox in boxes:
        c = rt.TCanvas("c","c",1000,800)
        for proc in (bkgs+sigs):
            box = ibox
            # if 'wqq' or 'zqq' in proc:
            #     box = box.replace('_cat',"_matched_cat")
            # else:
            #     box = ibox
            print '%s_%s'%(proc,box)
            tmph = tfile.Get('%s_%s'%(proc,box))
            if 'pass' in box:
                #print '%s_%s'%(proc,box),hists
                if hists['%s'%(proc)] is None:
                    hists['%s'%(proc)] = tmph.Clone()
                else:
                    hists['%s'%(proc)].Add(tmph)

            # print '%s_%s'%(proc,box)
            # if "wqq" or "zqq" in proc:
            #     print tmph.GetName()
            #     for i in range(1,tmph.GetNbinsX()+1):
            #         print i,tmph.GetBinContent(i)
            tmph.SetMaximum(2.*tmph.GetMaximum())
            tmph.SetLineColor(rt.kBlack)
            tmph.GetXaxis().SetTitle('m_{SD} (GeV)')
            #print tmph
            for syst in systs:
                #print '%s_%s_%sUp'%(proc,box,syst)
                #print '%s_%s_%sDown'%(proc,box,syst)
                tmphUp = tfile.Get('%s_%s_%sUp'%(proc,box,syst))
                tmphDown = tfile.Get('%s_%s_%sDown'%(proc,box,syst))
                try:
                    if not tmphUp.InheritsFrom('TH1'):
                        print 'not TH1'
                        continue
                except:
                    #print 'not here'
                    continue
                if 'mcstat' in syst:
                    iBin = int(syst.split('mcstat')[-1])
                    diff = (tmphUp.GetBinContent(iBin)-tmphDown.GetBinContent(iBin))/2.   
                    ave = (tmphUp.GetBinContent(iBin)+tmphDown.GetBinContent(iBin))/2.
                    cen = tmph.GetBinContent(iBin)
                    #print proc, box, syst, iBin, diff, ave, cen, tmphUp.GetBinContent(iBin), tmphDown.GetBinContent(iBin)
                    if ave<=0.: continue
                    if diff <= 0.5*ave: continue
                tmphUp.SetLineColor(rt.kBlue)
                tmphUp.SetLineStyle(2)
                tmphDown.SetLineColor(rt.kRed)
                tmphDown.SetLineStyle(3)
                tmph.Draw('hist')
                #tmph.Draw('histsame')
                tmphUp.Draw('histsame')
                tmphDown.Draw('histsame')    
                tLeg = rt.TLegend(0.2,0.6,0.44,0.89)
                tLeg.SetLineColor(rt.kWhite)
                tLeg.SetFillColor(rt.kWhite)
                tLeg.SetLineWidth(0)
                tLeg.SetTextFont(42)
                tLeg.SetFillStyle(0)
                tLeg.AddEntry(tmph,"%s, %s"%(procdict[proc],box.replace('_',', ')),"l")
                nsigma = 1
                if syst in ['scale']:
                    #nsigma = 30 # 2016 v1 
                    nsigma = options.scale # 2017 v4 
                    #nsigma = 10 # 2017 v1 CA15
                    #nsigma = 7 # 2017 v4 CA15                                                                                                                                                                                                                                                                                                                                     
                if syst in ['smear']:
                    #nsigma = 4 # 2016 v1        
                    nsigma = options.smear # 2017 v4
                    #nsigma = 3 # 2017 v1 CA15
                    #nsigma = 2 # 2017 v4 CA15
                tLeg.AddEntry(tmphUp,"%s_%s +%i#sigma"%(proc,syst,nsigma),"l")
                tLeg.AddEntry(tmphDown,"%s_%s -%i#sigma"%(proc,syst,nsigma),"l")
                tLeg.Draw('same')
                #c.Print('%s/%s_%s_%s.pdf'%(options.odir,proc,box,syst))
                #c.Print('%s/%s_%s_%s.C'%(options.odir,proc,box,syst))
                #c.Print('%s/%s_%s_%s.gif'%(options.odir,proc,box,syst))
                c.Print('%s/%s_%s_%s.png'%(options.odir,proc,box,syst))
        #c.Print('%s/allproc_%s_%s.png'%(options.odir,box,syst))

    c = rt.TCanvas("c","c",1000,800)
    i0 = 1
    tLeg = rt.TLegend(0.2,0.6,0.44,0.89)
    tLeg.SetLineColor(rt.kWhite)
    tLeg.SetFillColor(rt.kWhite)
    tLeg.SetLineWidth(0)
    tLeg.SetTextFont(42)
    tLeg.SetFillStyle(0)
    for proc in (bkgs+sigs):
        #c = rt.TCanvas("c","c",1000,800)
        #tLeg = rt.TLegend(0.2,0.6,0.44,0.89)
        #tLeg.SetLineColor(rt.kWhite)
        #tLeg.SetFillColor(rt.kWhite)
        #tLeg.SetLineWidth(0)
        #tLeg.SetTextFont(42)
        #tLeg.SetFillStyle(0)
        hists['%s'%(proc)].SetMaximum(2.*hists['%s'%(proc)].GetMaximum())
        hists['%s'%(proc)].Draw('histsames')
        hists['%s'%(proc)].SetLineColor(i0)
        i0 += 1
        tLeg.AddEntry(hists['%s'%(proc)],"%s"%(proc),"l")
        tLeg.Draw('same')
    c.Print('%s/allproc_allcats.png'%(options.odir))

if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option('--lumi', dest='lumi', type=float, default = 20,help='lumi in 1/fb ', metavar='lumi')
    parser.add_option('-i','--idir', dest='idir', default = './',help='directory with data', metavar='idir')
    parser.add_option('-o','--odir', dest='odir', default = './',help='directory to write cards', metavar='odir')
    parser.add_option('--scale', dest='scale', type=float, default = 20,help='scale sigma')
    parser.add_option('--smear', dest='smear', type=float, default = 7,help='smear sigma ')
    

    (options, args) = parser.parse_args()
    import tdrstyle
    tdrstyle.setTDRStyle()
    rt.gStyle.SetPadTopMargin(0.10)
    rt.gStyle.SetPadLeftMargin(0.16)
    rt.gStyle.SetPadRightMargin(0.10)
    rt.gStyle.SetPalette(1)
    rt.gStyle.SetPaintTextFormat("1.1f")
    rt.gStyle.SetOptFit(0000)
    rt.gROOT.SetBatch()

    main(options, args)

