import ROOT as rt
from array import *
import os
import random
import sys
import math
import CMS_lumi
import tdrstyle

CMS_lumi.cmsText = "CMS"
CMS_lumi.cmsTextSize = 0.65
CMS_lumi.outOfFrame=True
tdrstyle.setTDRStyle()

def setStyle():
    rt.gStyle.SetOptStat(0)
    rt.gStyle.SetOptFit(0000)
    rt.gStyle.SetOptTitle(0)
    rt.gStyle.SetPaintTextFormat("1.2g")
    rt.gStyle.SetNumberContours(999)
    rt.gROOT.SetBatch(rt.kTRUE)
    rt.RooMsgService.instance().setGlobalKillBelow(rt.RooFit.FATAL)
    
    rt.gStyle.SetStatY(1.9)
    rt.gStyle.SetStatX(1.9)
    rt.gStyle.SetStatW(0.1)
    rt.gStyle.SetStatH(0.1)

def get_plot(jet):
    tfile = rt.TFile.Open('data/2018num%s/singlemu.root'%jet,'read')
    if jet == 'AK8': pTcutoffBin = tfile.Get('dataMujmsd_jpt_bin').ProjectionY("proj",0,-1,"").FindBin(525)
    else:            pTcutoffBin = tfile.Get('dataMujmsd_jpt_bin').ProjectionY("proj",0,-1,"").FindBin(575)
    num = tfile.Get('dataMujmsd_jpt_bin').ProjectionX("proj",pTcutoffBin,-1,"")
    num.SetDirectory(0)
    tfile.Close()
    tfile = rt.TFile.Open('data/2018denom%s/singlemu.root'%jet,'read')
    denom = tfile.Get('dataMujmsd_jpt_bin').ProjectionX("proj1",pTcutoffBin,-1,"")
    denom.SetDirectory(0)
    pEff = rt.TEfficiency(num, denom)
    return pEff

if __name__ == '__main__':
  rt.gROOT.SetBatch(rt.kTRUE)
  rt.gROOT.SetBatch(1)
  #setStyle()
  #c = get_frame()
  #c.SetRightMargin(0.15)

  W = 800
  H  = 600
  T = 0.08*H
  B = 0.12*H
  L = 0.12*W#*scaleleftmargin
  R = 0.04*W#*scalerightmargin
  c = rt.TCanvas("c","c",100,100,W,H)
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
  frame.GetYaxis().SetTitleOffset(0.15)
  frame.GetXaxis().SetNdivisions(508)
  frame.GetYaxis().CenterTitle(True)

  l0 = rt.TLegend(0.67,0.22,0.98,0.4)
  l0.SetFillStyle(0)
  l0.SetBorderSize(0)
  l0.SetTextSize(0.046)
  l0.SetTextFont(42)


  m0 = rt.TMultiGraph()

  AK8_eff  = get_plot('AK8')
  CA15_eff = get_plot('CA15')

  AK8_eff.SetName('AK8_eff')
  CA15_eff.SetName('CA15_eff')

  AK8_size  = 1.5
  AK8_color = rt.kBlue
  AK8_style = 26

  CA15_size  = 1.5
  CA15_color = rt.kRed
  CA15_style = 25

  gAK8 = AK8_eff.CreateGraph()
  gAK8.SetMarkerSize(AK8_size)
  gAK8.SetMarkerStyle(AK8_style)
  gAK8.SetMarkerColor(AK8_color)
  gAK8.GetXaxis().SetTitle('m_{SD} (GeV)')
  gAK8.GetYaxis().SetRangeUser(0.,1.2)
  m0.Add(gAK8,"")
  l0.AddEntry(gAK8,"AK8")
  gCA15 = CA15_eff.CreateGraph()
  gCA15.SetMarkerSize(CA15_size)
  gCA15.SetMarkerStyle(CA15_style)
  gCA15.SetMarkerColor(CA15_color)
  gCA15.GetXaxis().SetTitle('m_{SD} (GeV)')
  gCA15.GetYaxis().SetRangeUser(0.,1.2)
  m0.Add(gCA15,"")
  l0.AddEntry(gCA15,"CA15")

  m0.Draw("apel")
  m0.GetYaxis().SetTitle("HLT Efficiency")
  m0.GetXaxis().SetTitle("Jet m_{SD} (GeV)")
  m0.GetYaxis().SetRangeUser(0.,1.2)
  m0.GetYaxis().SetTitleOffset(0.9)
  l0.Draw()
  CMS_lumi.lumi_13TeV = "41.1 fb^{-1} (2017)"
  CMS_lumi.CMS_lumi(c,4,11)
  l0.SetFillStyle(0)
  c.SaveAs("triggerEfficiency.png")
  c.SaveAs("triggerEfficiency.pdf")

  f = rt.TFile.Open('triggerEfficiency.root','recreate')
  gAK8.Write("AK8")
  gCA15.Write("CA15")
  c.Write("canvas")
  f.Close()
