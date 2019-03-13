import ROOT as rt
from array import *
import os
import random
import sys
import math

def setStyle():
    rt.gStyle.SetOptStat(0)
    rt.gStyle.SetOptFit(0000)
    rt.gStyle.SetOptTitle(0)
    rt.gStyle.SetPaintTextFormat("1.2g")
    rt.gStyle.SetNumberContours(999)
    rt.gROOT.SetBatch()
    rt.RooMsgService.instance().setGlobalKillBelow(rt.RooFit.FATAL)
    
    rt.gStyle.SetStatY(1.9)
    rt.gStyle.SetStatX(1.9)
    rt.gStyle.SetStatW(0.1)
    rt.gStyle.SetStatH(0.1)


if __name__ == '__main__':
    x = array('d', [ix for ix in range(300,2500)])
    tfile = rt.TFile.Open('controlHists/HTmuonfulldatasettriggerCA15.root','read')
    num = tfile.Get('data_obsjmsd_paper')
    num.SetDirectory(0)
    tfile.Close()

    tfile = rt.TFile.Open('controlHists/MumuonfulldatasettriggerCA15.root','read')
    denom = tfile.Get('data_obsjmsd_paper')
    denom.SetDirectory(0)
    tfile.Close()
    setStyle()

    c = rt.TCanvas("c","c",500,400) 
    c.SetRightMargin(0.15)
    pEff = rt.TEfficiency(num, denom)
    pEffH = pEff.CreateGraph()
    pEff.SetName('eff')
    xaxisTitle = "m_{SD} (GeV)"

    pEff.SetTitle("HLT Efficiency;%s;HLT Efficiency"%xaxisTitle)
    pEff.SetMarkerSize(0.8)
    pEff.SetMarkerStyle(20)
    pEff.SetMarkerColor(rt.kBlue)
    pEff.Draw("ape")
    
    rt.gPad.Update()        
    pEff.GetPaintedGraph().SetMarkerStyle(8)
    pEff.GetPaintedGraph().SetMarkerSize(20)        
    pEff.GetPaintedGraph().SetMinimum(0)
    pEff.GetPaintedGraph().SetMaximum(1.2)
    pEff.GetPaintedGraph().GetXaxis().SetTitle('m_{SD} (GeV)')
    
    rt.gPad.Update()      
    l = rt.TLatex()
    l.SetTextAlign(11)
    l.SetTextSize(0.045)
    l.SetTextFont(42)
    l.SetNDC()
    l.SetTextSize(0.02)
    l.SetTextFont(42)        
    tagname = "Single Muon Run B,C,D,E,F: 41.1 fb^{-1}"
    run= "RunBCDEF"
    #l.DrawLatex(0.12,0.85,"reference:  %s"%('HLT_Mu50'))
    c.Print("triggerplots/"+"HltEff_msd_AK82017.pdf")
    c.Print("triggerplots/"+"HltEff_msd_AK82017.root")

    rootFile = rt.TFile.Open('HltEff.root','update')
    tdirectory = rootFile.GetDirectory('HltEff')
    if tdirectory==None:
        rootFile.mkdir('HltEff')
        tdirectory = rootFile.GetDirectory('HltEff')
    
    tdirectory.cd()
    pEff.Write()
    c.Write()
