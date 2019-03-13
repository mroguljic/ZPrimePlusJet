import os
import math
import array
from optparse import OptionParser
import ROOT
import warnings
from ROOT import TFile,TH1F,TH2F,TH3F
import sys
import warnings 
import json

import zqq_config
import zqq_utils

warnings.filterwarnings(action='ignore', category=RuntimeWarning, message='creating converter.*')

def createInputHists(iTag,iJet):
    hists = {}
    # 3D
    hists['h_n2']       = TH3F(iTag+"_n2","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV); N_{2}^{1} (GeV)",
                               massbins,masslo,masshi,
                               PTBINS[iJet],PTLO[iJet],PTHI[iJet],
                               n2bins,n2lo,n2hi)
    hists['h_n2ddts']   = TH3F(iTag+"_n2ddts","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV); N_{2}^{DDT,s} (GeV)",
                               massbins,masslo,masshi,
                               PTBINS[iJet],PTLO[iJet],PTHI[iJet],
                               n2ddtbins,n2ddtlo,n2ddthi)
    # 2D
    hists['h_pass_rho'] = TH2F(iTag+"_pass_rho","; #rho; p_{T} (GeV)",
                               rhobins,RHO_LO_LOOSE[iJet],RHO_HI_LOOSE[iJet],
                               len(PTBINBOUND[iJet])-1, array.array('d',PTBINBOUND[iJet]))
    hists['h_fail_rho'] = TH2F(iTag+"_fail_rho","; #rho; p_{T} (GeV)",
                               rhobins,RHO_LO_LOOSE[iJet],RHO_HI_LOOSE[iJet],
                               len(PTBINBOUND[iJet])-1, array.array('d',PTBINBOUND[iJet]))
    tags = ['h_pass',
            'h_pass_matched','h_pass_unmatched',
            'h_pass_PuUp','h_pass_PuDown',
            'h_pass_triggerUp','h_pass_triggerDown'
            'h_pass_JESUp','h_pass_JESDown',
            'h_pass_JERUp','h_pass_JERDown',
            'h_pass_mutriggerUp','h_pass_mutriggerDown',
            'h_pass_msd_muidUp', 'h_pass_msd_muidDown',
            'h_pass_msd_muisoUp', 'h_pass_msd_muisoDown',
            ]
    for key in tags:
        for cat in ['pass','fail']:
            tagcat = key.replace('pass',cat)
            hists[key]      = TH2F(iTag+tagcat.replace('h_',''),"; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                                   massbins,masslo,masshi,
                                   len(PTBINBOUND[iJet])-1, array.array('d',PTBINBOUND[iJet]))
            tagcat = tagcat.replace(cat,cat+'_msd')
            hists[key]      = TH1F(iTag+tagcat.replace('h_',''),"; m_{SD}^{PUPPI} (GeV); N", MASSBINS[iJet], MASSLO[iJet], MASSHI[iJet])

    tags_gen = {'h_pass_gen',
                'h_pass_matched_gen','h_pass_unmatched_gen'}
    for key in tags_gen:
        for cat in ['pass','fail']:
            key = key.replace('pass',cat)
            for i0 in range(0,len(GENPTBINBOUND[iJet])-1):
                hists[key]  = TH2F(iTag+key.replace('h_','')+str(i0),"; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                                   massbins,masslo,masshi,
                                   len(PTBINBOUND[iJet])-1, array.array('d',PTBINBOUND[iJet]))
    # 1D
    hists['h_pt'] = TH1F(iTag+"pt", "; p_{T}; N", 40, 400, 1000)
    hists['h_msd'] =  TH1F(iTag+"msd", "; m_{SD}^{PUPPI}; N", MASSBINS[iJet], MASSLO[iJet], MASSHI[iJet])

def createControlHists(iTag,iJet,iMuon,iWtag):
    hists = {}
    hists['h_HT']                   = TH1F(iTag+'HT',";HT (GeV);N", 50, 300, 2100)
    hists['h_pu']                   = TH1F(iTag+'pu',"; Numper of PU;N", 100, 0 ,100)
    hists['h_pu_noweight']          = TH1F(iTag+'pu_noweight',"; Numper of PU (unweighted);N", 100, 0 ,100)
    hists['h_prefirweight']         = TH1F(iTag+'prefirweight',"; pre-firing evt weight;N", 100, 0 ,1)
    hists['h_kfactor']              = TH1F(iTag+'kfactor',"; kfactor;N", 100, 0, 3)
    hists['h_bosonpt']              = TH1F(iTag+"bosonpt","; boson p_{T} (GeV);N", 40, 20, 1300)
    hists['h_genpt']                = TH1F(iTag+"genpt", "; gen p_{T};N", 40, 200, 1300)
    hists['h_h_jpt']                = TH1F(iTag+"jpt",";p_{T}-leading jet p_{T} (GeV);N", 40, 0, 2500)
    if iMuon and iWtag:
        if iJet == "CA15":
            hists['h_jmsd']         = TH1F(iTag+"jmsd",";p_{T}-leading jet m_{SD} (GeV);N", 40, 50, 280)
            hists['h_jmsd_pass']    = TH1F(iTag+"jmsd_pass",";p_{T}-leading jet m_{SD} (GeV);N", 40, 50, 280)
            hists['h_jmsd_fail']    = TH1F(iTag+"jmsd_fail",";p_{T}-leading jet m_{SD} (GeV);N", 40, 50, 280)
        else:
            hists['h_jmsd']         = TH1F(iTag+"jmsd",";p_{T}-leading jet m_{SD} (GeV);N", 40, 40, 200)
            hists['h_jmsd_pass']    = TH1F(iTag+"jmsd_pass",";p_{T}-leading jet m_{SD} (GeV);N", 40, 40, 200)
            hists['h_jmsd_fail']    = TH1F(iTag+"jmsd_fail",";p_{T}-leading jet m_{SD} (GeV);N", 40, 40, 200)
    else:
        hists['h_jmsd_nocuts']        = TH1F(iTag+"jmsd_nocuts",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd_rhocut']        = TH1F(iTag+"jmsd_rhocut",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd_prefire']       = TH1F(iTag+"jmsd_prefire",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd']               = TH1F(iTag+"jmsd",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd_paper']         = TH1F(iTag+"jmsd_paper",";p_{T}-leading jet m_{SD} (GeV);N", 30, 40, 450)
        hists['h_jmsd_raw']           = TH1F(iTag+"jmsd_raw", "; m_{SD}^{PUPPI} RAW; N",  80, 0, 500)
        hists['h_jmsd_rho']           = TH1F(iTag+"jmsd_rho",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd_msd']           = TH1F(iTag+"jmsd_msd",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd_pass']          = TH1F(iTag+"jmsd_pass",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        hists['h_jmsd_fail']          = TH1F(iTag+"jmsd_fail",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
    hists['h_jN2sdb1']                = TH1F(iTag+"jN2sdb1",";p_{T}-leading jet N_{2}^{1,SD} (GeV);N", 40, 0, 0.7)
    hists['h_jN2sdb1_DDT']            = TH1F(iTag+"jN2sdb1_DDT",";p_{T}-leading jet N_{2}^{1,DDT(5%)} (GeV);N", 40, -0.5, 0.5)
    hists['h_jN2sdb1_DDT40']          = TH1F(iTag+"jN2sdb1_DDT40",";p_{T}-leading jet N_{2}^{1,DDT(40%)} (GeV);N", 40, -0.5, 0.5)
    hists['h_jtau21']                 = TH1F(iTag+"jtau21",";p_{T}-leading jet #tau_{21}; N", 40, 0, 1)
    hists['h_jrho']                   = TH1F(iTag+"jrho",";p_{T}-leading jet #rho = 2*log(m_{SD}/p_{T});N", 40, -7, -0.5)
    hists['h_jrhodef']                = TH1F(iTag+"jrhodef",";p_{T}-leading jet #rho = 2*log(m_{SD}/p_{T}*R);N", 40, -7, -0.5)
    hists['h_mupt']                   = TH1F(iTag+"mupt",";p_{T}-leading #mu p_{T} (GeV);N", 40, 0, 1000)
    hists['h_jeta']                   = TH1F(iTag+"jeta",";p_{T}-leading jet #eta;N", 40, -2.4, 2.4)
    hists['h_met']                    = TH1F(iTag+"met",";MET;N", 40, 0, 300)
    if iJet == "CA15":
        hists['h_jmsd_jpt']           = TH2F(iTag+"jmsd_jpt",";p_{T}-leading jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 30, 0, 500, 40, 0, 2500)
        hists['h_jmsd_jpt_bin']       = TH2F(iTag+"jmsd_jpt_bin",";p_{T}-leading  jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 30, 0, 500, 20, 300, 800)
        hists['h_jmsd_jpt_bin_AK8']   = TH2F(iTag+"jmsd_jpt_AK8",";p_{T}-leading  jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 30, 0, 500, 20, 300, 800)
        hists['h_jrho_jpt_bin']       = TH2F(iTag+"jrho_jpt_bin",";p_{T}-leading  jet #rho;leading  jet p_{T} (GeV);N", 30, -7, -0.5, 20, 300, 800)
    else:
        hists['h_jmsd_jpt']           = TH2F(iTag+"jmsd_jpt",";p_{T}-leading jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 20, 0, 300, 40, 0, 2500)
        hists['h_jmsd_jpt_bin']       = TH2F(iTag+"jmsd_jpt_bin",";p_{T}-leading  jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 20, 0, 300, 20, 300, 800)
        hists['h_jmsd_jpt_bin_AK8']   = TH2F(iTag+"jmsd_jpt_AK8",";p_{T}-leading  jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 30, 0, 500, 20, 300, 800)
        hists['h_jrho_jpt_bin']       = TH2F(iTag+"jrho_jpt_bin",";p_{T}-leading  jet #rho;leading  jet p_{T} (GeV);N", 30, -7, -0.5, 20, 300, 800)

def fillHist(iTag,iOut,iFile,iSf,iLumi,iMass,
             iTree,
             iEvt0=0,iEvt1=-1,
             iSideband=False,iPuFile=None,
             iData=False,iCutFormula='(1==1)',
             iMuon=False,iTrigger=False,iJet='AK8',iJetIndex=0,
             iControl=False):

    # create hist dictionary
    if iControl:
        h = createInputHists(iTag,iJet)
    else:
        h = createControlHists(iTag,iJet)

    # read file
    infile=ROOT.TFile.Open(iFile)
    nevents = infile.Get("NEvents")
    tree = infile.Get(iTree)
    if not isinstance(tree,ROOT.TTree):
        return 0

    # pileup
    lpuw,lpuw_up,lpuw_down = fpuw,fpuw_up,fpuw_down
    if iPuFile:
        print 'getting from Pu file %s'%(iPuFile)
        lpuw,lpuw_up,lpuw_down = setuppuw2017(iPuFile)
        
    # entries to loop over
    nent = tree.GetEntries();
    cutFormula = ROOT.TTreeFormula("cutFormula","(" + iCutFormula + ")", tree)
    infile.cd()
    tree.SetNotify(cutFormula)
    if iEvt1 == -1:
        maxent = tree.GetEntries()
        minent = 0
    else:
        maxent = int(iEvt1)
        minent = int(iEvt0)
    loopt = range(minent,maxent)

    # loop over entries
    iEnt = 0
    for i in loopt:
        if i % iSf != 0: continue

        tree.LoadTree(i)
        selected = False
        for j in range(cutFormula.GetNdata()):
            if (cutFormula.EvalInstance(j)):
                selected = True
                break
        if not selected: continue
        
        tree.GetEntry(i)
        if(i % (1 * loopt[-1]/100) == 0):
            sys.stdout.write("\r[" + "="*int(20*i/loopt[-1]) + " " + str(round(100.*i/loopt[-1],0)) + "% done")
            sys.stdout.flush()
            
        # variables
        lMsd = getattr(tree,"%sPuppijet%i_msd"%(iJet,iJetIndex));
        lPt = getattr(tree,"%sPuppijet%i_pt"%(iJet,iJetIndex));
        lEta =  getattr(tree,"%sPuppijet%i_eta"%(iJet,iJetIndex));
        lPhi =  getattr(tree,"%sPuppijet%i_phi"%(iJet,iJetIndex));
        lN2 = getattr(tree,"%sPuppijet%i_N2sdb1"%(iJet,iJetIndex));
        lTight = getattr(tree,"%sPuppijet%i_isTightVJet"%(iJet,iJetIndex));
        try:
            lPtJERUp = getattr(tree,"%sPuppijet%i_pt_JERUp"%(iJet,iJetIndex));
            lPtJERDown = getattr(tree,"%sPuppijet%i_pt_JERDown"%(iJet,iJetIndex));
            lPtJESUp = getattr(tree,"%sPuppijet%i_pt_JESUp"%(iJet,iJetIndex));
            lPtJESDown = getattr(tree,"%sPuppijet%i_pt_JESDown"%(iJet,iJetIndex));
        except:
            lPtJERUp =0; lPtJERDown = 0; lPtJESUp = 0; lPtJESDown = 0; # for zqq2016
        # not jets
        lN_MdR0p8_4 = getattr(tree,nAK4PuppijetsMPt50dR08_0);
        lHT = 0.
        if (abs(tree.AK4Puppijet0_eta) < 2.4 and tree.AK4Puppijet0_pt > 30): lHT = lHT +tree.AK4Puppijet0_pt
        if (abs(tree.AK4Puppijet1_eta) < 2.4 and tree.AK4Puppijet1_pt > 30): lHT = lHT +tree.AK4Puppijet1_pt
        if (abs(tree.AK4Puppijet2_eta) < 2.4 and tree.AK4Puppijet2_pt > 30): lHT = lHT +tree.AK4Puppijet2_pt
        if (abs(tree.AK4Puppijet3_eta) < 2.4 and tree.AK4Puppijet3_pt > 30): lHT = lHT +tree.AK4Puppijet3_pt
        # mass
        lMass = correct(lEta,lPt,lMsd);
        if lMass <=0: lMass = 0.01
        # rho
        pRho = 2.*math.log(lMass/lPt);
        # sideband
        if iSideband:
            lN2DDT40 = lN2 - getN2DDT(ftrans_h2ddt40,lMass,lPt)
            if lN2DDT40 < 0: continue
        # n2
        lN2DDT = lN2 - getN2DDT(ftrans_h2ddt,lMass,lPt)

        # matching for iMass
        pSize = 0.8;
        if 'CA15' in iJet: pSize = 1.5;
        pPhi  = 9999; pPt   = 9999; pMass = 9999;
        if iMass > 0 and tree.genVPt >0:
            pPhi = math.fabs(tree.genVPhi - lPhi)
            pPt = math.fabs(tree.genVPt - lPt)/tree.genVPt
            pMass = math.fabs(iMass - lMass)/iMass

        # weights
        vjetsKF = 1;
        qcdKF = 1;
        ewkKF = 1;
        weight = 1
        weight_triggerUp = 1; weight_triggerDown = 1;
        weight_puUp = 1; weight_puDown = 1;
        weight_mu = 1;
        weight_mutriggerUp = 1; weight_mutriggerDown = 1;
        weight_muidUp = 1; weight_muidDown = 1;
        weight_muisoUp = 1; weight_muisoDown = 1;
        weight_mu_puUp = 1; weight_mu_puDown = 1;
        if not iData:
            # pu
            puweight = tree.puWeight # 2016
            nPuForWeight = min(tree.npu, 100)
            puweight_up = lpuw_up.GetBinContent(lpuw_up.FindBin(nPuForWeight))
            puweight_down = lpuw_down.GetBinContent(lpuw_down.FindBin(nPuForWeight))
            if iPuFile: # 2017
                puweight = lpuw.GetBinContent(lpuw.FindBin(tree.npu));
                if puweight<= 0: puweight = 1;
            # norm
            fbweight = tree.scale1fb * iLumi
            if iEnt == 0:
                print 'weight: %.2f, nevents %i, lumi %.2f'%(fbweight,int(nevents.GetEntries()),iLumi)
            iEnt+=1
            if 'QCD' in iFile and tree.scale1fb > 1: continue # remove high-weighted qcd events
            # k-factor
            if any(x in iFile for x in ['VectorDiJet','WJetsToQQ','DYJets','ZJetsToQQ']):
                vjetsKF,qcdKF,ewkKF = setupkFactors(iFile,tree.fBosonPt)
            scalewzKF = 1;
            if scalewzKF!=1: print 'SCALE WZ for tag ',scalewzKF,iTag
            vjetsKF = vjetsKF*scalewzKF
            # trigger
            ltrigweight,ltrigweightUp,ltrigweightDown = correctTrig(ftrig_eff,min(lMsd, 300. ),max(200., min(lPt  , 1000. )))
            # muon 
            mutrigweight = 1; mutrigweightUp = 1; mutrigweightDown = 1;
            muidweight = 1;muidweightUp = 1; muidweightDown = 1;
            muisoweight = 1; muisoweightUp = 1; muisoweightDown = 1;
            if tree.nmuLoose > 0:
                mutrigweight,mutrigweightUp,mutrigweightDown = correctEff(fmutrig_eff,tree.vmuoLoose0_pt,abs(tree.vmuoLoose0_eta))
                muidweight,muidweightUp,muidweightDown = correctEff(fmuid_eff,tree.vmuoLoose0_pt,abs(tree.vmuoLoose0_eta),2,"NUM_SoftID_DEN_genTracks")
                muisoweight,muisoweightUp,muisoweightDown = correctEff(fmuiso_eff,tree.vmuoLoose0_pt,abs(tree.vmuoLoose0_eta),2,"NUM_LooseRelIso_DEN_LooseID")
            # prefire => not for noe
            fWeight_Prefire = 1;
            for i0 in range(0,4):
                lAK4Pt = getattr(tree,"AK4Puppijet%i_pt"%i0);
                lAK4Eta = getattr(tree,"AK4Puppijet%i_eta"%i0);
                if (lAK4Pt > 40 and abs(lAK4Eta) < 3.0):
                    fWeight_Prefire = fWeight_Prefire * (1 - correctPrefiring(lAK4Pt,lAK4Eta,0))
            if (tree.vpho0_pt > 20 and abs(tree.vpho0_eta) < 3.0):
                fWeight_Prefire = fWeight_Prefire * (1- correctPrefiring(tree.vpho0_pt,tree.vpho0_eta,1))
            fWeight_Prefire = 1
            # qcd xsec
            weight_tune = 1
            if 'QCD_HT500to700_TuneCP5_13TeV' in iFile:
                weight_tune = float(29980/32100)
            if 'QCD_HT700to1000_TuneCP5_13TeV' in iFile:
                weight_tune = float(6334/6831)
            if 'QCD_HT1000to1500_TuneCP5_13TeV'in iFile:
                weight_tune = float(1088/1207)
            if 'QCD_HT1500to2000_TuneCP5_13TeV'in iFile:
                weight_tune = float(99.11/119.9)
            if 'QCD_HT2000toInf_TuneCP5_13TeV' in iFile:
                weight_tune = float(20.23/25.24)
            fbweight = fbweight*weight_tune

            weight = puweight*fbweight*vjetsKF*ltrigweight
            weight_triggerUp = puweight*fbweight*vjetsKF*ltrigweightUp
            weight_triggerDown = puweight*fbweight*vjetsKF*ltrigweightDown
            weight_puUp = puweight_up*fbweight*vjetsKF*ltrigweight
            weight_puDown = puweight_down*fbweight*vjetsKF*ltrigweight
            weight_mu = puweight*fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
            weight_mutriggerUp = puweight*fbweight*vjetsKF*mutrigweightUp*muidweight*muisoweight
            weight_mutriggerDown = puweight*fbweight*vjetsKF*mutrigweightDown*muidweight*muisoweight
            weight_muidUp = puweight*fbweight*vjetsKF*mutrigweight*muidweightUp*muisoweight
            weight_muidDown = puweight*fbweight*vjetsKF*mutrigweight*muidweightDown*muisoweight
            weight_muisoUp = puweight*fbweight*vjetsKF*mutrigweight*muidweight*muisoweightUp
            weight_muisoDown = puweight*fbweight*vjetsKF*mutrigweight*muidweight*muisoweightDown
            weight_mu_puUp = puweight_up*fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
            weight_mu_puDown = puweight_down*fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
        
        # control hists
        if iControl:
            if iMuon and not iTrigger:
                n_MdR0p8_4 = tree.nAK4PuppijetsMPt50dR08_0
                if lPt > 475 and tree.nmuLoose == 1 and tree.neleLoose == 0 and tree.ntau == 0 and tree.vmuoLoose0_pt > MUONPTCUT and abs(tree.vmuoLoose0_eta) < 2.1 and lTight ==1 and abs(math.acos(math.cos(tree.vmuoLoose0_phi - lPhi))) > 2. * ROOT.TMath.Pi() / 3. and n_MdR0p8_4 >= 1:
                    if lPt > 475 and lN2DDT < N2CUT:
                        h['h_jmsd_pass'].Fill( lMass, weight_mu );
                    if lPt > 475 and lN2DDT > N2CUT:
                        h['h_jmsd_fail'].Fill( lMass, weight_mu );
                    h['h_mupt'].Fill( tree.vmuoLoose0_pt, weight_mu );
                    h['h_jpt'].Fill(lPt, weight_mu)
                    h['h_jmsd'].Fill(lMass, weight_mu)
                    h['h_jN2sdb1'].Fill(lN2, weight_mu)
                    h['h_jN2sdb1_DDT'].Fill(lN2DDT, weight_mu)
                    h['h_jrho'].Fill(pRho, weight_mu)
                    h['h_jrhodef'].Fill(pRhoDef, weight_mu)
                    h['h_jmsd_jpt'].Fill(lMass, lPt, weight_mu)
                    h['h_jmsd_jpt_bin'].Fill(lMass, lPt, weight_mu)
                    h['h_jrho_jpt_bin'].Fill(pRho, lPt, weight_mu)
            elif iTrigger:
                if 'Pass' in iOut:
                    if lN2DDT < N2CUT:
                        h['h_jmsd_jpt'].Fill(lMass, lPt, weight)
                        h['h_jmsd_jpt_bin'].Fill(lMass, lPt, weight)
                        h['h_jrho_jpt_bin'].Fill(pRho, lPt, weight)
                elif 'Fail' in iOut:
                    if lN2DDT > N2CUT:
                        h['h_jmsd_jpt'].Fill(lMass, lPt, weight)
                        h['h_jmsd_jpt_bin'].Fill(lMass, lPt, weight)
                        h['h_jrho_jpt_bin'].Fill(pRho, lPt, weight)
                else:
                    h['h_jmsd_jpt'].Fill(lMass, lPt, weight)
                    h['h_jmsd_jpt_bin'].Fill(lMass, lPt, weight)
                    h['h_jrho_jpt_bin'].Fill(pRho, lPt, weight)
                if lPt > PTCUT[iJet]:
                    h['h_jmsd'].Fill(lMass, weight)
                    h['h_jmsd_paper'].Fill(lMass, weight)
                    if pRho > -4.391 and pRho <-1: h['h_jmsd_rho'].Fill(lMass, weight)
                if lMass > 170: h['h_jmsd_msd'].Fill(lMass, weight)
                if lN2DDT < N2CUT:
                    h['h_jmsd_pass'].Fill( lMass, weight );
                if lN2DDT > N2CUT:
                    h['h_jmsd_fail'].Fill( lMass, weight );
            else:
                h['h_HT'].Fill(lHT, weight)
                h['h_pu_noweight'].Fill(tree.npu, weight_nopu)
                h['h_pu'].Fill(tree.npu, weight)
                h['h_prefirweight'].Fill(fWeight_Prefire)
                h['h_kfactor'].Fill(vjetsKF)
                if not iData:
                    h['h_bosonpt'].Fill(tree.fBosonPt,weight)
                if lPt > PTCUT[iJet] and pRho > RHO_LO[iJet] and pRho < RHO_HI[iJet] and tree.neleLoose == 0 and tree.ntau==0 and lTight ==1 and tree.nmuLoose == 0:
                    h['h_jpt'].Fill(lPt, weight)
                    h['h_jmsd'].Fill(lMass, weight)
                    h['h_jmsd_raw'].Fill( lMsd, weight);
                    h['h_jmsd_prefire'].Fill( lMass, weight_Prefire);
                    h['h_jN2sdb1'].Fill(lN2, weight)
                    h['h_jN2sdb1_DDT'].Fill(lN2DDT, weight)
                    h['h_jrho'].Fill(pRho, weight)
                    h['h_jrhodef'].Fill(pRhoDef, weight)
                    if pRho > RHO_LO[iJet] and pRho < RHO_HI[iJet]:
                        h['h_jmsd_rhocut'].Fill(lMass, weight)
                    if lN2DDT < N2CUT:
                        h['h_jmsd_pass'].Fill( lMass, weight );
                    if lN2DDT > N2CUT:
                        h['h_jmsd_fail'].Fill( lMass, weight );
        # input hists
        else:
            if iMuon:
                if lPt > PTCUT_LOOSE[iJet] and tree.nmuLoose == 1 and tree.neleLoose == 0 and tree.ntau == 0 and tree.vmuoLoose0_pt > MUONPTCUT and abs(tree.vmuoLoose0_eta) < 2.1 and lTight ==1 and abs(math.acos(math.cos(tree.vmuoLoose0_phi - lPhi))) > 2. * ROOT.TMath.Pi() / 3. and lN_MdR0p8_4 >= 1:
                h['h_msd'].Fill( lMass, weight_mu );
                h['h_pt'].Fill( lPt, weight_mu);
                # pass cat
                if lPt > PTCUT_LOOSE[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass'].Fill( lMass, lPt, weight_mu )
                    h['h_pass_msd'].Fill( lMass, weight_mu );
                    h['h_pass_rho'].Fill( pRho, lPt, weight_mu );
                    h['h_pass_msd_PuUp'].Fill( lMass, weight_mu_puUp )
                    h['h_pass_msd_PuDown'].Fill( lMass, weight_mu_puDown )
                    h['h_pass_msd_mutriggerUp'].Fill( lMass, weight_mutriggerUp );
                    h['h_pass_msd_mutriggerDown'].Fill( lMass, weight_mutriggerDown );
                    h['h_pass_msd_muidUp'].Fill( lMass, weight_muidUp);
                    h['h_pass_msd_muidDown'].Fill( lMass, weight_muidDown);
                    h['h_pass_msd_muisoUp'].Fill( lMass, weight_muisoUp);
                    h['h_pass_msd_muisoDown'].Fill( lMass, weight_muisoDown);
                if lPtJESUp > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JESUp'].Fill( lMass, lPtJESUp, weight_mu)
                    h['h_pass_msd_JESUp'].Fill( lMass, weight_mu)
                if lPtJERUp > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JERUp'].Fill( lMass, lPtJERUp, weight_mu)
                    h['h_pass_msd_JERUp'].Fill( lMass, weight_mu)
                if lPtJESDown > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JESDown'].Fill( lMass, lPtJESDown, weight_mu)
                    h['h_pass_msd_JESDown'].Fill( lMass, weight_mu)
                if lPtJERDown > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JERDown'].Fill( lMass, lPtJERDown, weight_mu)
                    h['h_pass_msd_JERDown'].Fill( lMass, weight_mu)
                # fail cat
                if lPt > PTCUT[iJet] and lN2DDT > N2CUTUP:
                    h['h_fail'].Fill( lMass, lPt, weight_mu )
                    h['h_fail_msd'].Fill( lMass, weight_mu );
                    h['h_fail_rho'].Fill( pRho, lPt, weight_mu );
                    h['h_fail_msd_PuUp'].Fill( lMass, weight_mu_puUp )
                    h['h_fail_msd_PuDown'].Fill( lMass, weight_mu_puDown )
                    h['h_fail_msd_mutriggerUp'].Fill( lMass, weight_mutriggerUp );
                    h['h_fail_msd_mutriggerDown'].Fill( lMass, weight_mutriggerDown );
                    h['h_fail_msd_muidUp'].Fill( lMass, weight_muidUp);
                    h['h_fail_msd_muidDown'].Fill( lMass, weight_muidDown);
                    h['h_fail_msd_muisoUp'].Fill( lMass,weight_muisoUp);
                    h['h_fail_msd_muisoDown'].Fill( lMass, weight_muisoDown);
                if lPtJESUp > PTCUT[iJet] and lN2DDT > N2CUTUP:
                    h['h_fail_JESUp'].Fill( lMass, lPtJESUp, weight_mu)
                    h['h_fail_msd_JESUp'].Fill( lMass, weight_mu)
                if lPtJERUp > PTCUT[iJet] and lN2DDT > N2CUTUP:
                    h['h_fail_JERUp'].Fill( lMass, lPtJERUp, weight_mu)
                    h['h_fail_msd_JERUp'].Fill( lMass, weight_mu)
                if lPtJESDown > PTCUT[iJet] and lN2DDT > N2CUTUP:
                    h['h_fail_JESDown'].Fill( lMass, lPtJESDown, weight_mu)
                    h['h_fail_msd_JESDown'].Fill( lMass, weight_mu)
                if lPtJERDown > PTCUT[iJet] and lN2DDT > N2CUTUP:
                    h['h_fail_JERDown'].Fill( lMass, lPtJERDown, weight_mu)
                    h['h_fail_msd_JERDown'].Fill( lMass, weight_mu)
        # Signal Region
        else:
            if tree.neleLoose == 0 and tree.nmuLoose ==0 and tree.ntau==0 and lTight ==1 and pRho > RHO_LO[iJet] and pRho< RHO_HI[iJet]:
                h['h_n2'].Fill( lMass, lPt, lN2, weight)
                h['h_n2ddts'].Fill( lMass, lPt, lN2DDT, weight)
                h['h_msd'].Fill( lMass, weight);
                h['h_pt'].Fill( lPt, weight);
                # pass cat
                if lPt > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass'].Fill( lMass, lPt, weight )
                    h['h_pass_PuUp'].Fill( lMass, lPt, weight_puUp )
                    h['h_pass_triggerUp'].Fill( lMass, lPt, weight_triggerUp)
                    h['h_pass_PuDown'].Fill( lMass, lPt, weight_puDown )
                    h['h_pass_triggerDown'].Fill( lMass, lPt, weight_triggerDown)                    
                    h['h_pass_msd'].Fill( lMass, weight );
                    h['h_pass_msd_PuUp'].Fill( lMass, weight_puUp);
                    h['h_pass_msd_triggerUp'].Fill( lMass, weight_triggerUp)
                    h['h_pass_msd_PuDown'].Fill( lMass, weight_puDown )
                    h['h_pass_msd_triggerDown'].Fill( lMass, weight_triggerDown)
                    h['h_pass_rho'].Fill( pRho, lPt, weight );
                    if pPhi < pSize and pPt < 0.5 and pMass < 0.3:
                        h['h_pass_msd_matched'].Fill( lMass, weight );
                        h['h_pass_matched'].Fill( lMass, lPt, weight );
                    else:
                        h['h_pass_msd_unmatched'].Fill( lMass, weight );
                        h['h_pass_unmatched'].Fill( lMass, lPt, weight );
                if lPtJESUp > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JESUp'].Fill( lMass, lPtJESUp, weight)
                    h['h_pass_msd_JESUp'].Fill( lMass, weight)
                if lPtJERUp > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JERUp'].Fill( lMass, lPtJERUp, weight)
                    h['h_pass_msd_JERUp'].Fill( lMass, weight)
                if lPtJESDown > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JESDown'].Fill( lMass, lPtJESDown, weight)
                    h['h_pass_msd_JESDown'].Fill( lMass, weight)
                if lPtJERDown > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_pass_JERDown'].Fill( lMass, lPtJERDown, weight)
                    h['h_pass_msd_JERDown'].Fill( lMass, weight)

                # fail cat
                if lPt > PTCUT[iJet] and lN2DDT > N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_fail'].Fill( lMass, lPt, weight )
                    h['h_fail_PuUp'].Fill( lMass, lPt, weight_puUp )
                    h['h_fail_triggerUp'].Fill( lMass, lPt, weight_triggerUp)
                    h['h_fail_PuDown'].Fill( lMass, lPt, weight_puDown )
                    h['h_fail_triggerDown'].Fill( lMass, lPt, weight_triggerDown)
                    
                    h['h_fail_msd'].Fill( lMass, weight );
                    h['h_fail_msd_PuUp'].Fill( lMass, weight_puUp);
                    h['h_fail_msd_triggerUp'].Fill( lMass, weight_triggerUp)
                    h['h_fail_msd_PuDown'].Fill( lMass, weight_puDown )
                    h['h_fail_msd_triggerDown'].Fill( lMass, weight_triggerDown)
                    
                    h['h_fail_rho'].Fill( pRho, lPt, weight );
                    if pPhi < pSize and pPt < 0.5 and pMass < 0.3:
                        h['h_fail_msd_matched'].Fill( lMass, weight );
                        h['h_fail_matched'].Fill( lMass, lPt, weight );
                    else:
                        h['h_fail_msd_unmatched'].Fill( lMass, weight );	
                        h['h_fail_unmatched'].Fill( lMass, lPt, weight );
                if lPtJESUp > PTCUT[iJet] and lN2DDT > N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_fail_JESUp'].Fill( lMass, lPtJESUp, weight)
                    h['h_fail_msd_JESUp'].Fill( lMass, weight)
                if lPtJERUp > PTCUT[iJet] and lN2DDT > N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_fail_JERUp'].Fill( lMass, lPtJERUp, weight)
                    h['h_fail_msd_JERUp'].Fill( lMass, weight)
                if lPtJESDown > PTCUT[iJet] and lN2DDT > N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_fail_JESDown'].Fill( lMass, lPtJESDown, weight)
                    h['h_fail_msd_JESDown'].Fill( lMass, weight)
                if lPtJERDown > PTCUT[iJet] and lN2DDT > N2CUTUP and lN2DDT > N2CUTDN:
                    h['h_fail_JERDown'].Fill( lMass, lPtJERDown, weight)
                    h['h_fail_msd_JERDown'].Fill( lMass, weight)

                # gen pt cats
                if not iData:
                    for i0 in range(0,len(GENPTBINBOUND[iJet])-1):
                        lMinGenPt = GENPTBINBOUND[iJet][i0]
                        lMaxGenPt = GENPTBINBOUND[iJet][i0+1]
                        lGenPt =  getattr(tree,"%sPuppijet%i_genpt"%(iJet,iJetIndex));
                        if lGenPt > lMinGenPt and lGenPt < lMaxGenPt:
                            if lPt > PTCUT[iJet] and lN2DDT < N2CUTUP and lN2DDT > N2CUTDN:
                                h['h_pass_gen%i'%i0].Fill( lMass, lPt, weight)
                                if pPhi < pSize and pPt < 0.5 and pMass < 0.3:
                                    h['h_pass_matched_gen%i'%i0].Fill( lMass, lPt, weight)
                                else:
                                    h['h_pass_unmatched_gen%i'%i0].Fill( lMass, lPt, weight)
                            if lPt > PTCUT[iJet] and lN2DDT > N2CUTUP and lN2DDT > N2CUTDN:
                                h['h_fail_gen%i'%i0].Fill( lMass, lPt, weight)
                                if pPhi < pSize and pPt < 0.5 and pMass < 0.3:
                                    h['h_fail_matched_gen%i'%i0].Fill( lMass, lPt, weight)
                                else:
                                    h['h_fail_unmatched_gen%i'%i0].Fill( lMass, lPt, weight)

    hists_out = [];
    for ih,hist in h.iteritems():
        hists_out.append( hist );

    os.system("mkdir -p %s"%iOut)
    fOut=ROOT.TFile.Open(iOut+'/'+iFile.replace('.root','_%s_%s.root'%(str(minent),str(maxent))).replace('/','_'),'RECREATE')
    for h in hists_out: h.Write()
    fOut.Close()

def main(options,args):
    setupCorr();
    global ftrans_h2ddt
    global ftrans_h2ddt40
    global ftrig_eff
    global fprefire_eff_jets
    global fprefire_eff_photons
    
    if options.jet=='CA15':
        ftrans_h2ddt = setuph2ddt(options.ddt,options.iddt)
        if options.nob:
            ftrig_eff = setupTrig('data/2018numCA15/singlemu_nob.root','dataMujmsd_jpt_bin',
                                 'data/2018denomCA15/singlemu_nob.root','dataMujmsd_jpt_bin')
        else:
            ftrig_eff = setupTrig('data/2018numCA15/singlemu.root','dataMujmsd_jpt_bin',
                                  'data/2018denomCA15/singlemu.root','dataMujmsd_jpt_bin')
    else:
        ftrans_h2ddt = setuph2ddt(options.ddt,options.iddt)            
        if options.nob:
            ftrig_eff = setupTrig('data/2018numAK8/singlemu_nob.root','dataMujmsd_jpt_bin',
                                  'data/2018denomAK8/singlemu_nob.root','dataMujmsd_jpt_bin')
        else:
            ftrig_eff = setupTrig('data/2018numAK8/singlemu.root','dataMujmsd_jpt_bin',
                                  'data/2018denomAK8/singlemu.root','dataMujmsd_jpt_bin')

    if options.is2016:
        ftrig_eff = setupTrig('data/RUNTriggerEfficiencies_SingleMuon_Run2016_V2p1_v03.root','DijetTriggerEfficiencySeveralTriggers/jet1SoftDropMassjet1PtPassing_cutJet',
                              'data/RUNTriggerEfficiencies_SingleMuon_Run2016_V2p1_v03.root','DijetTriggerEfficiencySeveralTriggers/jet1SoftDropMassjet1PtDenom_cutJet'
                              )

    pPrefireFile = TFile.Open('data/L1prefiring_jet_2017BtoF.root')
    fprefire_eff_jets = pPrefireFile.Get('L1prefiring_jet_2017BtoF').Clone()
    fprefire_eff_jets.SetDirectory(0)
    pPrefireFile.Close

    pPrefireFilePhoton = TFile.Open('data/L1prefiring_photon_2017BtoF.root')
    fprefire_eff_photons = pPrefireFilePhoton.Get('L1prefiring_photon_2017BtoF').Clone()
    fprefire_eff_photons.SetDirectory(0)
    pPrefireFilePhoton.Close

    lSideband = False
    if options.sideband:
        f_h2ddt40 = TFile.Open(options.sideband)
        print("Opened file %s"%options.sideband)
        if 'Rho2D' in options.isideband:
            ftrans_h2ddt40 = f_h2ddt40.Get("Rho2D")
        else:
            lHTmp40 = f_h2ddt40.Get(options.isideband)
            ftrans_h2ddt40 = getDDT(lHTmp40,0.4)
        ftrans_h2ddt40.SetDirectory(0)
        f_h2ddt40.Close()
        lSideband = True

    global fpuw
    global fpuw_up
    global fpuw_down
    fpuw, fpuw_up, fpuw_down = setuppuw()

    global fmutrig_eff
    f_mutrig = ROOT.TFile.Open("data/EfficienciesAndSF_RunBtoF_Nov17Nov2017.root", "read")
    fmutrig_eff = f_mutrig.Get("Mu50_PtEtaBins/efficienciesDATA/pt_abseta_DATA")
    fmutrig_eff.Sumw2()
    fmutrig_eff.SetDirectory(0)
    f_mutrig.Close()

    global fmuid_eff
    with open("data/RunBCDEF_data_ID.json") as ID_input_file:
        fmuid_eff = json.load(ID_input_file)

    global fmuiso_eff
    with open("data/RunBCDEF_data_ISO.json") as ISO_input_file:
        fmuiso_eff = json.load(ISO_input_file)

    lEvts = options.evts.split(',')

    cut = "(1==1)"
    lTrigger = False
    if 'data' in options.tag:
        cut = "(triggerBits&2)&&passJson" # 12.01 trigger bit
        cut = "(triggerBits&4096||triggerBits&33554432||triggerBits&8192||triggerBits&262144||triggerBits&524288||triggerBits&16384||triggerBits&134217728||triggerBits&2097152||triggerBits&4194304||triggerBits&1048576||triggerBits&8388608||triggerBits&32768||triggerBits&67108864)&&passJson" # 12.07 trigger bit map
        if options.isMuonCR:
            cut = "(triggerBits&65536)&&passJson"
        if options.trigger is not None:
            lTrigger = True
            if 'Mu' in options.trigger:
                #cut = "(triggerBits&4)&&passJson"
            else:
                #cut = "(triggerBits&4096||triggerBits&33554432||triggerBits&8192||triggerBits&262144||triggerBits&524288||triggerBits&16384||triggerBits&134217728||triggerBits&2097152||triggerBits&4194304||triggerBits&1048576||triggerBits&8388608||triggerBits&32768||triggerBits&67108864)&&(triggerBits&4)&&passJson"
        if '2016' in options.tag:
            cut = "(triggerBits&2)&&passJson"
            
    fillHist(options.tag,options.odir,options.filename,
             int(options.sf),options.lumi,options.mass,
             options.tree,
             int(lEvts[0]),int(lEvts[1]),               
             options.sideband,options.isPu,
             options.isData,cut,
               options.isMuonCR,
             lTrigger,options.jet,options.ijet,options.control)
    
if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b',         action='store_true', dest='noX',      default=False,         help='no X11 windows')
    parser.add_option('--nob',      action='store_true', dest='nob',      default=False,         help='no Run B')
    parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False,         help='run on muon CR')
    parser.add_option('--isData',   action='store_true', dest='isData',   default=False,         help='run on data')
    parser.add_option('--blinded',  action='store_true', dest='blinded',  default=False,         help='run 10th')
    parser.add_option('--control',  action='store_true', dest='control',  default=False,         help='control hists')
    parser.add_option('--is2016',   action='store_true', dest='is2016',   default=False,         help='run 2016')
    parser.add_option('--isPu',     type = str,          dest='isPu',     default=None,          help='pu files 2017')
    parser.add_option('--tag',      type = str,          dest='tag',      default='tag',         help='tag')
    parser.add_option('--odir',     type = str,          dest='odir',     default='inputHists',  help='directory to write plots')
    parser.add_option('--mass',     type = float,        dest='mass',     default=0,             help='mass')
    parser.add_option('--lumi',     type = float,        dest='lumi',     default=1,             help='lumi weight'
    parser.add_option('--sf',       type = int,          dest='sf',       default=1,             help='percentage of data')
    parser.add_option('--jet',      type = str,          dest='jet',      default='AK8',         help='jet type')
    parser.add_option('--ijet',     type = int,          dest='ijet',     default=0,             help='leading jet')
    parser.add_option('--filename', type = str,          dest='filename', default='',            help='')
    parser.add_option('--evts',     type = str,          dest='evts',     default='0,-1',        help='Running for evts (-1 is all)')
    parser.add_option('--wp',       type = int,          dest='wp',       default=5,             help='N2 working point')   
    parser.add_option('--tree',     type=str,            dest='tree',     default='otree',       help='tree name')
    parser.add_option('--ddt',      type=str,            dest='ddt',      default='',            help='ddt root file')
    parser.add_option('--iddt',     type=str,            dest='iddt',     default='Rho2D',       help='ddt hist name')
    parser.add_option('--sideband', type=str,            dest='sideband', default=None,          help='sideband')
    parser.add_option('--isideband',type=str,            dest='isideband',default='Rho2D',       help='ddt for sideband')
    parser.add_option('--trigger',  type=str,            dest='trigger',  default=None,          help='run trigger plots')

    (options, args) = parser.parse_args()

    ROOT.gStyle.SetPadTopMargin(0.10)
    ROOT.gStyle.SetPadLeftMargin(0.16)
    ROOT.gStyle.SetPadRightMargin(0.10)
    ROOT.gStyle.SetPalette(1)
    ROOT.gStyle.SetPaintTextFormat("1.1f")
    ROOT.gStyle.SetOptFit(0000)
    ROOT.gROOT.SetBatch()

    main(options,args)



