#!/bin/python
import ROOT

# rho
RHO_LO ={}
RHO_HI ={}
RHO_LO['AK8']=-6
RHO_HI['AK8']=-2.1

RHO_LO['CA15']=-4.7
RHO_HI['CA15']=-0.7

RHO_LO_LOOSE ={}
RHO_HI_LOOSE ={}
RHO_LO_LOOSE['AK8']=-6
RHO_HI_LOOSE['AK8']=-2
RHO_LO_LOOSE['CA15']=-5
RHO_HI_LOOSE['CA15']=-0.5

rhobins = 60;

# pt
PTBINS = {}
PTLO = {}
PTHI = {}
PTBINS['AK8'] = 6;
PTLO['AK8'] = 525;
PTHI['AK8'] = 1500;

PTBINS['CA15'] = 6;
PTLO['CA15'] = 575;
PTHI['CA15'] = 1500;

PTBINBOUND = {}
PTBINBOUND['AK8'] = [500,525,575,625,700,800,1500]
PTBINBOUND['CA15'] = [500,575,625,700,800,1500]

GENPTBINBOUND = {}
GENPTBINBOUND['AK8'] = [0,400,600,800,1000]
GENPTBINBOUND['CA15'] = [0,400,600,800,1000]

PTCUT = {}
PTCUT['AK8'] = 525
PTCUT['CA15'] = 575

PTCUT_LOOSE = {}
PTCUT_LOOSE['AK8'] = 450
PTCUT_LOOSE['CA15'] = 450

# mass
MASSBINS,MASSLO,MASSHI = {},{},{}
MASSBINS['AK8'] = 60 
MASSLO['AK8'] = 30
MASSHI['AK8'] = 330
MASSBINS['CA15'] = 80
MASSLO['CA15'] = 60
MASSHI['CA15'] = 500

massbins = 100;
masslo   = 0;
masshi   = 500;

# n2
N2CUT = 0.;
N2CUTDN = -100;
N2CUTUP = 0.;

n2bins   = 500;
n2lo     = 0;
n2hi     = 0.5;
n2ddtbins = 500;
n2ddtlo = -0.4;
n2ddthi = 0.5;

# muon CR
MUONPTCUT = 100;
fLCSV = 0.5803
fMCSV = 0.8838
fTCSV = 0.9693

# WZ k-factors
DY_SF = 1.45;
W_SF = 1.35;
wscale=[1.0,1.0,1.0,1.20,1.25,1.25,1.0];

# mass corr
fcorrGEN = ROOT.TF1("corrGEN","[0]+[1]*pow(x*[2],-[3])",200,3500);
fcorrRECO_cen = ROOT.TF1("corrRECO_cen","[0]+[1]*x+[2]*pow(x,2)+[3]*pow(x,3)+[4]*pow(x,4)+[5]*pow(x,5)",200,3500);
fcorrRECO_for = ROOT.TF1("corrRECO_for","[0]+[1]*x+[2]*pow(x,2)+[3]*pow(x,3)+[4]*pow(x,4)+[5]*pow(x,5)",200,3500);

# pileup
fpuData = "data/pileup_Cert_294927-306462_13TeV_PromptReco_Collisions17_withVar.root"
fPuPath = 'data/pu2017/'

# masses zqq
MASSES2017 = '50,75,100,115,125,150,175,200,225,250,275,300,350,400,450,500'
MASSES2016 = '50,75,100,125,150,200,250,300'

# files
fXSecFile = 'data/xSections.dat'

# trigger
triggerNames={}
triggerNames['mu2017'] = {"version":"zprimebit-15.01","branchName":"triggerBits",
                          "names":["HLT_Mu50_v*"]}
triggerNames['ht2017'] = {"version":"zprimebit-15.01","branchName":"triggerBits",
                          "names":[
        "HLT_AK8PFJet330_PFAK8BTagCSV_p17_v*",
        "HLT_PFHT1050_v*",
        "HLT_AK8PFJet400_TrimMass30_v*",
        "HLT_AK8PFJet420_TrimMass30_v*",
        "HLT_AK8PFHT800_TrimMass50_v*",
        "HLT_PFJet500_v*",
        "HLT_AK8PFJet500_v*"]}
triggerNames['htmu2017'] = {"version":"zprimebit-15.01","branchName":"triggerBits",
                          "names":[
        "HLT_Mu50_v*",
        "HLT_AK8PFJet330_PFAK8BTagCSV_p17_v*",
        "HLT_PFHT1050_v*",
        "HLT_AK8PFJet400_TrimMass30_v*",
        "HLT_AK8PFJet420_TrimMass30_v*",
        "HLT_AK8PFHT800_TrimMass50_v*",
        "HLT_PFJet500_v*",
        "HLT_AK8PFJet500_v*"]}
