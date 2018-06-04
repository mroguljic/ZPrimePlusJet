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

from Zqq_create import *

fLCSV = 0.5803
fMCSV = 0.8838
fTCSV = 0.9693

def getAllN2DDT(iMass,iPt):
    iRho = 2.*math.log(iMass/iPt);
    lRho = fh2ddt.GetXaxis().FindBin(iRho);
    lPt = fh2ddt.GetYaxis().FindBin(iPt);
    if iRho > fh2ddt.GetXaxis().GetBinUpEdge( fh2ddt.GetXaxis().GetNbins() ): lRho = fh2ddt.GetXaxis().GetNbins();
    if iRho < fh2ddt.GetXaxis().GetBinLowEdge( 1 ): lRho = 1;
    if iPt > fh2ddt.GetYaxis().GetBinUpEdge( fh2ddt.GetYaxis().GetNbins() ): lPt = fh2ddt.GetYaxis().GetNbins();
    if iPt < fh2ddt.GetYaxis().GetBinLowEdge( 1 ): lRho = 1;
    return fh2ddt.GetBinContent(lRho,lPt);

def createAllHistPacked(args):
    tag,out,filename,sf,isf,lumi,mass,isdata,cutFormula,selMuon,selTrigger,jet,selWtag = args
    try:
        return createAllHist(tag=tag,out=out,filename=filename,sf=sf,isf=isf,lumi=lumi,mass=mass,isdata=isdata,cutFormula=cutFormula,selMuon=selMuon,selTrigger=selTrigger,jet=jet,selWtag=selWtag)
    except ReferenceError:
        print 50*'<'
        print "  Problem with ", tag, "continuing without"
        print 50*'<'
        return False

def createAllHistTasks(opt):

    tasklist=[]
    tag = opt.odir
    if 'CA15' in opt.jet:
        #tag = tag.replace('sel8','sel15')
        tag += '15'
    lumi = 40.9
    lumi10 = 4.1
    selMuon = False
    selTrigger = False
    selWtag = False
    if options.nob:
        tag += "NOB"
        lumi =36.2
        lumi10 = 3.6
    tag10 = tag + '10th'
    if opt.isMuonCR:
        selMuon = True
        tag = 'muon'+tag
        tag10 = 'muon'+tag10
        #lumi = 29.75
        #lumi = 9.1
        lumi = 41.1
        #lumi10 = 2.98
        if opt.selWtag:
            selWtag = True
            selMuon = False
    if opt.trigger:
        selTrigger = True
        tagT = 'HTMu'+tag
        tagTH = 'HTORMu'+tag
        tagMu =  'Mu'+tag
        tagJ =  'J'+tag
        tagTrim = 'HTTrim'+tag
        tagNoTrim = 'HTNoTrim'+tag
    if opt.selWtag:
        selWtag = True
        selMuon = False
        lumi = 41.1

    jet = opt.jet

    if opt.isData:
        if opt.trigger:
            data = ['singlemub','singlemuc','singlemud','singlemue','singlemuf'] #change this to read from hadd
            #data = ['singlemuc']
            for d in data:
                #tasklist.append(('dataMu',tagT,d,1,0,1.,0.,True,"(triggerBits&4)&&(triggerBits&2)&&passJson",selMuon,selTrigger,jet,selWtag))
                tasklist.append(('dataMu',tagMu,d,1,0,1.,0.,True,"(triggerBits&4)&&passJson",selMuon,selTrigger,jet,selWtag))
                tasklist.append(('dataMu',tagTH,d,1,0,1.,0.,True,"(triggerBits&4)&&(triggerBits&4096||triggerBits&8192||triggerBits&16384||triggerBits&131072||triggerBits&262144||triggerBits&524288||triggerBits&1048576||triggerBits&2097152||triggerBits&4194304||triggerBits&8388608||triggerBits&16777216||triggerBits&33554432||triggerBits&134217728)&&passJson",selMuon,selTrigger,jet,selWtag))
                tasklist.append(('dataMu',tagTrim,d,1,0,1.,0.,True,"(triggerBits&4)&&(triggerBits&4096||triggerBits&16777216||triggerBits&8192)&&passJson",selMuon,selTrigger,jet,selWtag))
                tasklist.append(('dataMu',tagNoTrim,d,1,0,1.,0.,True,"(triggerBits&4)&&(triggerBits&16384||triggerBits&131072||triggerBits&262144||triggerBits&524288||triggerBits&1048576||triggerBits&2097152||triggerBits&4194304||triggerBits&8388608||triggerBits&33554432||triggerBits&134217728)&&passJson",selMuon,selTrigger,jet,selWtag))
                #tasklist.append(('dataMu',tagJ,d,1,0,1.,0.,True,"passJson",selMuon,selTrigger,jet,selWtag))
        elif opt.isMuonCR or opt.selWtag:
            data = ['singlemub','singlemuc','singlemud','singlemue','singlemuf']
            for d in data:
                if opt.blinded:
                    tasklist.append(('data_obs',tag10,d,10,0,1.,0.,True,"(triggerBits&4)&&passJson",selMuon,selTrigger,jet,selWtag))
                else:
                    tasklist.append(('data_obs',tag,d,1,0,1.,0.,True,"(triggerBits&4)&&passJson",selMuon,selTrigger,jet,selWtag))
        else:
            if options.nob:
                data = ['jethtc','jethtd','jethte','jethtf']
            else:
                data = ['jethtb','jethtc','jethtd','jethte','jethtf']
            if options.data2016:
                data = ['jethtb2016','jethtc2016','jethtd2016','jethte2016','jethtf2016','jethtg2016','jethth2016']
            for d in data:
                if opt.blinded:
                    tasklist.append(('data_obs',tag10,d,10,0,1.,0.,True,"(triggerBits&2)&&passJson",selMuon,selTrigger,jet,selWtag))
                else:
                    tasklist.append(('data_obs',tag,d,1,0,1.,0.,True,"(triggerBits&2)&&passJson",selMuon,selTrigger,jet,selWtag))

    if opt.isQCD:
        pName = 'qcd'
        if 'CA15' in opt.jet:
            pName = 'qcd15'
        if opt.blinded:
            #tasklist.append(('qcd',tag10,pName,10,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('qcd',tag10,'qcdnew100',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('qcd',tag10,'qcdnew200',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag10,'qcdnew300',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag10,'qcdnew500',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag10,'qcdnew700',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag10,'qcdnew1000',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag10,'qcdnew1500',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag10,'qcdnew2000',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
        else:
            #tasklist.append(('qcd',tag,pName,1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('qcd',tag,'qcdnew100',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('qcd',tag,'qcdnew200',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('qcd',tag,'qcdnew300',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag,'qcdnew500',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag,'qcdnew700',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag,'qcdnew1000',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag,'qcdnew1500',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('qcd',tag,'qcdnew2000',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
       
    if opt.isSig:
        for m in MASSES:
            if opt.blinded:
                tasklist.append(('zqq%s'%str(m),tag10,'zqq2018%s'%str(m),1,0,lumi10,m,False,"1",selMuon,selTrigger,jet,selWtag))
            else:
                tasklist.append(('zqq%s'%str(m),tag,'zqq2018%s'%str(m),1,0,lumi,m,False,"1",selMuon,selTrigger,jet,selWtag))

    if opt.isMc:
        if opt.blinded:
            tasklist.append(('zqq',tag10,'zqq',1,0,lumi10,91.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('wqq',tag10,'wqq',1,0,lumi10,80.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('zqq',tag10,'zqqnew',1,0,lumi10,91.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('wqq',tag10,'wqqnew',1,0,lumi10,80.,False,"1",selMuon,selTrigger,jet,selWtag)) 
            tasklist.append(('tqq',tag10,'tqq',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('stqq',tag10,'stqq',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
        else:
            tasklist.append(('zqq',tag,'zqq',1,0,lumi,91.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('wqq',tag,'wqq',1,0,lumi,80.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('zqq',tag,'zqqnew',1,0,lumi,91.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('wqq',tag,'wqqnew',1,0,lumi,91.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('tqq',tag,'tqq',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('stqq',tag,'stqq',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
        #if opt.isMuonCR:
        if opt.isMuonCR or opt.selWtag:
            #tasklist.append(('vvqq',tag,'vvqq',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('vvqq',tag,'vvqqwtag',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('wlnu',tag,'wlnu',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('zll',tag,'zll',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            # tasklist.append(('tqq1mu',tag,'tqq1mu',1,0,lumi,0.,False,"genMuFromW==1&&genEleFromW+genTauFromW==0",selMuon,selTrigger,jet,selWtag))
            # tasklist.append(('tqq1ele',tag,'tqq1ele',1,0,lumi,0.,False,"genEleFromW==1&&genMuFromW+genTauFromW==0",selMuon,selTrigger,jet,selWtag))
            # tasklist.append(('tqq1tau',tag,'tqq1tau',1,0,lumi,0.,False,"genTauFromW==1&&genEleFromW+genMuFromW==0",selMuon,selTrigger,jet,selWtag))
            # tasklist.append(('tqq0lep',tag,'tqq0lep',1,0,lumi,0.,False,"genMuFromW+genEleFromW+genTauFromW==0",selMuon,selTrigger,jet,selWtag))
            # tasklist.append(('tqq2lep',tag,'tqq2lep',1,0,lumi,0.,False,"genMuFromW+genEleFromW+genTauFromW==2",selMuon,selTrigger,jet,selWtag))
            #tasklist.append(('tqq',tag,'tqq',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            tasklist.append(('tqq',tag,'tlqq',1,0,lumi,0.,False,"1",selMuon,selTrigger,jet,selWtag))
            if opt.blinded:
                tasklist.append(('vvqq',tag10,'vvqq',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
                tasklist.append(('wlnu',tag10,'wlnu',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
                #tasklist.append(('zll',tag10,'zll',1,0,lumi10,0.,False,"1",selMuon,selTrigger,jet,selWtag))
                # tasklist.append(('tqq1mu',tag10,'tqq1mu',1,0,lumi10,0.,False,"genMuFromW==1&&genEleFromW+genTauFromW==0",selMuon,selTrigger,jet,selWtag))
                # tasklist.append(('tqq1ele',tag10,'tqq1ele',1,0,lumi10,0.,False,"genEleFromW==1&&genMuFromW+genTauFromW==0",selMuon,selTrigger,jet,selWtag))
                # tasklist.append(('tqq1tau',tag10,'tqq1tau',1,0,lumi10,0.,False,"genTauFromW==1&&genEleFromW+genMuFromW==0",selMuon,selTrigger,jet,selWtag))
                # tasklist.append(('tqq0lep',tag10,'tqq0lep',1,0,lumi10,0.,False,"genMuFromW+genEleFromW+genTauFromW==0",selMuon,selTrigger,jet,selWtag))
                # tasklist.append(('tqq2lep',tag10,'tqq2lep',1,0,lumi10,0.,False,"genMuFromW+genEleFromW+genTauFromW==2",selMuon,selTrigger,jet,selWtag))

    if opt.jobs>0:
        print ' Submitting jobs in %d threads' % opt.jobs
        import multiprocessing as MP
        pool = MP.Pool(opt.jobs)
        pool.map(createAllHistPacked,tasklist)
    else:
        for tag,out,filename,sf,isf,lumi,mass,isdata,cutFormula,selMuon,selTrigger,jet,selWtag in tasklist:
            createAllHist(tag=tag,out=out,filename=filename,sf=sf,isf=isf,lumi=opt.lumi,mass=mass,isdata=isdata,cutFormula=cutFormula,selMuon=selMuon,selTrigger=selTrigger,jet=jet,selWtag=selWtag)
        return 0

    '''
    Trigger list:
    triggerBits&2 HLT_AK8PFJet380_TrimMass30_v || HLT_AK8PFJet400_TrimMass30_v|| HLT_AK8PFJet420_TrimMass30_v ||
                  HLT_AK8PFHT800_TrimMass50_v|| HLT_AK8PFHT850_TrimMass50_v|| HLT_AK8PFHT900_TrimMass50_v||
                  HLT_PFJet500_v||
                  HLT_PFHT890_v|| HLT_PFHT1050_v||
                  HLT_AK8PFJet500_v|| HLT_AK8PFJet550_v||
                  HLT_CaloJet500_NoJetID_v ||HLT_CaloJet550_NoJetId_v ||
                  HLT_AK8PFJet330_PFAK8BTagCSV_p17_v || HLT_AK8PFJet330_PFAK8BTagCSV_p1_v 
    triggerBits&4 HLT_Mu50_v || HLT_TkMu50_v
    triggerBits&65536 HLT_Mu50_v
    triggerBits&8 HLT_Ele45_WPLoose_v || HLT_Ele105_CaloIdVT_GsfTrkIdT_v
    2016 triggers: (triggerBits&16||triggerBits&32||triggerBits&64||triggerBits&128||triggerBits&256||triggerBits&512||triggerBits&1024||triggerBits&2048)
    triggerBits&16 HLT_AK8PFJet360_TrimMass30_v
    triggerBits&32 HLT_AK8PFHT700_TrimR0p1PT0p03Mass50_v
    triggerBits&64 HLT_PFHT800_v
    triggerBits&128 HLT_PFHT900_v
    triggerBits&256 HLT_PFHT650_WideJetMJJ950DEtaJJ1p5_v
    triggerBits&512 HLT_PFHT650_WideJetMJJ900DEtaJJ1p5_v
    triggerBits&1024 HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20_v
    triggerBits&2048 HLT_PFJet450_v
    2017 triggers: (triggerBits&4096||triggerBits&8192||triggerBits&16384||triggerBits&131072||triggerBits&262144||triggerBits&524288||triggerBits&1048576||triggerBits&2097152||triggerBits&4194304||triggerBits&8388608||triggerBits&16777216||triggerBits&33554432||triggerBits&134217728)
    triggerBits&4096 HLT_AK8PFJet400_TrimMass30_v
    triggerBits&8192 HLT_AK8PFHT800_TrimMass50_v
    triggerBits&16384 HLT_PFJet500_v
    triggerBits&131072 HLT_PFHT890_v
    triggerBits&262144 HLT_AK8PFHT850_TrimMass50_v
    triggerBits&524288 HLT_AK8PFHT900_TrimMass50_v
    triggerBits&1048576 HLT_CaloJet500_NoJetID_v
    triggerBits&2097152 HLT_AK8PFJet500_v
    triggerBits&4194304 HLT_AK8PFJet550_v
    triggerBits&8388608 HLT_CaloJet550_NoJetId_v
    triggerBits&16777216 HLT_AK8PFJet380_TrimMass30_v
    triggerBits&33554432 HLT_AK8PFJet420_TrimMass30_v
    triggerBits&134217728 HLT_PFHT1050_v
    +doubleb (triggerBits&32768||triggerBits&67108864)
    triggerBits&32768 HLT_AK8PFJet330_PFAK8BTagCSV_p17_v
    triggerBits&67108864 HLT_AK8PFJet330_PFAK8BTagCSV_p1_v
    '''
    
def createAllHist(tag,out,filename,sf,isf,lumi,mass,isdata=False,cutFormula='(AK8Puppijet0_pt>475||AK8Puppijet0_pt_JESDown>475||AK8Puppijet0_pt_JESUp>475||AK8Puppijet0_pt_JERUp>475||AK8Puppijet0_pt_JERDown>475)',selMuon=False,selTrigger=False,jet='AK8',selWtag=False):

    h_HT           = TH1F(tag+'HT',";HT (GeV);N", 50, 300, 2100)
    h_pu           = TH1F(tag+'pu',"; Numper of PU;N", 100, 0 ,100)
    h_pu_noweight  = TH1F(tag+'pu_noweight',"; Numper of PU (unweighted);N", 100, 0 ,100)
    if selMuon or selWtag:
        h_jmsd     = TH1F(tag+"jmsd",";p_{T}-leading jet m_{SD} (GeV);N", 40, 40, 200)
        h_jmsd_pass= TH1F(tag+"jmsd_pass",";p_{T}-leading jet m_{SD} (GeV);N", 40, 40, 200)
        h_jmsd_fail= TH1F(tag+"jmsd_fail",";p_{T}-leading jet m_{SD} (GeV);N", 40, 40, 200)
    else:
        h_jmsd         = TH1F(tag+"jmsd",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        h_jmsd_pass    = TH1F(tag+"jmsd_pass",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
        h_jmsd_fail    = TH1F(tag+"jmsd_fail",";p_{T}-leading jet m_{SD} (GeV);N", 80, 0, 500)
    h_jpt          = TH1F(tag+"jpt",";p_{T}-leading jet p_{T} (GeV);N", 40, 0, 2500)
    h_jN2sdb1      = TH1F(tag+"jN2sdb1",";p_{T}-leading jet N_{2}^{1,SD} (GeV);N", 40, 0, 0.7)
    h_jN2sdb1_DDT  = TH1F(tag+"jN2sdb1_DDT",";p_{T}-leading jet N_{2}^{1,DDT} (GeV);N", 40, -0.5, 0.5)
    h_jtau21       = TH1F(tag+"jtau21",";p_{T}-leading jet #tau_{21}; N", 40, 0, 1)
    h_jrho         = TH1F(tag+"jrho",";p_{T}-leading jet #rho = 2*log(m_{SD}/p_{T});N", 40, -7, -1)
    h_jrhodef      = TH1F(tag+"jrhodef",";p_{T}-leading jet #rho = 2*log(m_{SD}/p_{T}*R);N", 40, -7, -1)
    h_mupt         = TH1F(tag+"mupt",";p_{T}-leading #mu p_{T} (GeV);N", 40, 0, 1000)

    h_jmsd_uncor = TH1F(tag+"jmsd_uncor",";p_{T}-leading jet m_{SD} uncorr (GeV);N", 40, 40, 200)
    h_jeta = TH1F(tag+"jeta",";p_{T}-leading jet #eta;N", 40, -2.4, 2.4)
    h_met = TH1F(tag+"met",";MET;N", 40, 0, 300)

    h_mupt_mueta   = TH2F(tag+"mupt_mueta","muon p_{T} (GeV); muon #eta;N",40,0,500,40,0,2.4)
    h_jmsd_jpt     = TH2F(tag+"jmsd_jpt",";p_{T}-leading jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 40, 0, 250, 40, 0, 2500)
    h_jmsd_jpt_bin = TH2F(tag+"jmsd_jpt_bin",";p_{T}-leading  jet m_{SD} (GeV);leading  jet p_{T} (GeV);N", 25, 0, 250, 20, 300, 800)
    h_jrho_jpt_bin = TH2F(tag+"jrho_jpt_bin",";p_{T}-leading  jet #rho;leading  jet p_{T} (GeV);N", 25, -7, -1, 20, 300, 800)

    itree,sklimpath = openfile(filename)
    if selWtag:
        itree = "otree"
        if isdata:
            sklimpath = "/eos/uscms/store/user/lpcbacon/dazsle/zprimebits-v12.07/sklimN2/"
        else:
            sklimpath ="/eos/uscms/store/user/lpcbacon/dazsle/zprimebits-v12.07/normN2/"
    for f in tfiles[filename]:
        nentp = 0
        infile=ROOT.TFile.Open(sklimpath+f)
        print(sklimpath+f)
        tree= infile.Get(itree)
        if not infile.Get('Events') and not infile.Get('otree') and not infile.Get('otree2'):
            print 'tree is false'
            infile.Close()
            print 'badfile %s'%f
            continue

        lpuw,lpuw_up,lpuw_down = fpuw,fpuw_up,fpuw_down
        if filename in puFiles:
            print 'getting from Pu file %s'%(f.replace('_1000pb_weighted',''))
            lpuw,lpuw_up,lpuw_down = setuppuw2017(f.replace('_1000pb_weighted',''))

        nent = tree.GetEntries();
        print 'selWtag: ',selWtag
        if selTrigger:
            fcutFormula = ROOT.TTreeFormula("cutFormula",cutFormula,tree)
        elif selWtag:
            fcutFormula = ROOT.TTreeFormula("cutFormula",cutFormula,tree)
        else:
            fcutFormula = ROOT.TTreeFormula("cutFormula",
                                            "(" + cutFormula + ")&&(%sPuppijet0_pt>%f||%sPuppijet0_pt_JESDown>%f||%sPuppijet0_pt_JESUp>%f||%sPuppijet0_pt_JERUp>%f||%sPuppijet0_pt_JERDown>%f)" % (
                    jet,PTCUT[jet],jet,PTCUT[jet],jet,PTCUT[jet],jet,PTCUT[jet],jet,PTCUT[jet]),
                                            tree)
        infile.cd()
        tree.SetNotify(fcutFormula)
        ent=tree.GetEntries()
        maxent = tree.GetEntries()
        minent = 0
        loopt = range(0,tree.GetEntries())

        print 'lumi: ',lumi

        for i in loopt:

            if i % sf != 0: continue

            tree.LoadTree(i)
            selected = False
            for j in range(fcutFormula.GetNdata()):
                if (fcutFormula.EvalInstance(j)):
                    selected = True
                    break
            if not selected: continue

            tree.GetEntry(i)
            if(i % (1 * loopt[-1]/100) == 0):
                sys.stdout.write("\r[" + "="*int(20*i/loopt[-1]) + " " + str(round(100.*i/loopt[-1],0)) + "% done")
                sys.stdout.flush()

            lMsd = getattr(tree,"%sPuppijet0_msd"%jet);
            lPt = getattr(tree,"%sPuppijet0_pt"%jet);
            lEta =  getattr(tree,"%sPuppijet0_eta"%jet);
            lPhi =  getattr(tree,"%sPuppijet0_phi"%jet);
            lTight = getattr(tree,"%sPuppijet0_isTightVJet"%jet);
            if not selWtag:
                lPtJERUp = getattr(tree,"%sPuppijet0_pt_JERUp"%jet);
                lPtJERDown = getattr(tree,"%sPuppijet0_pt_JERDown"%jet);
                lPtJESUp = getattr(tree,"%sPuppijet0_pt_JESUp"%jet);
                lPtJESDown = getattr(tree,"%sPuppijet0_pt_JESDown"%jet);                
            
            if not isdata:
                puweight = tree.puWeight # corrected from lpuw.GetBinContent(lpuw.FindBin(tree.npu));                              
                if filename in puFiles:
                    puweight = lpuw.GetBinContent(lpuw.FindBin(tree.npu));
                    if puweight<= 0: puweight =1;
                nPuForWeight = min(tree.npu, 49.5)
                puweight_up = lpuw_up.GetBinContent(lpuw_up.FindBin(nPuForWeight))
                puweight_down = lpuw_down.GetBinContent(lpuw_down.FindBin(nPuForWeight))
                fbweight = tree.scale1fb * lumi
                if 'QCD' in filename and tree.scale1fb > 1: continue
                if 'VectorDiJet' in filename:
                    vjetsKF = setupkFactors(1,tree.fBosonPt)
                elif 'WJets' in filename:
                    vjetsKF = setupkFactors(2,tree.fBosonPt)
                elif 'DYJets' in filename:
                    vjetsKF = setupkFactors(3,tree.fBosonPt)
                else:
                    vjetsKF = 1;
                ltrigweight,ltrigweightUp,ltrigweightDown = correctTrig(ftrig_eff,min(lMsd, 300. ),max(200., min(lPt  , 1000. )))

                mutrigweight = 1; mutrigweightUp = 1; mutrigweightDown = 1;
                muidweight = 1;muidweightUp = 1; muidweightDown = 1;
                muisoweight = 1; muisoweightUp = 1; muisoweightDown = 1;
                if tree.nmuLoose > 0:
                    mutrigweight,mutrigweightUp,mutrigweightDown = correctEff(fmutrig_eff,tree.vmuoLoose0_pt,abs(tree.vmuoLoose0_eta))
                    muidweight,muidweightUp,muidweightDown = correctEff(fmuid_eff,tree.vmuoLoose0_pt,abs(tree.vmuoLoose0_eta),2,"NUM_SoftID_DEN_genTracks")
                    muisoweight,muisoweightUp,muisoweightDown = correctEff(fmuiso_eff,tree.vmuoLoose0_pt,abs(tree.vmuoLoose0_eta),2,"NUM_LooseRelIso_DEN_LooseID")
                    '''
                if tree.nmuLoose > 0:
                    mutrigweight,mutrigweightUp,mutrigweightDown = correctEff(fmutrig_eff,max(52., min(tree.vmuoLoose0_pt, 700.)),min(abs(tree.vmuoLoose0_eta), 2.3))
                    muidweight,muidweightUp,muidweightDown = correctEff(fmuid_eff,max(20., min(tree.vmuoLoose0_pt, 100.)),min(abs(tree.vmuoLoose0_eta), 2.3))
                    muisoweight,muisoweightUp,muisoweightDown = correctEff(fmuiso_eff,max(20., min(tree.vmuoLoose0_pt, 100.)),min(abs(tree.vmuoLoose0_eta), 2.3))
                    '''
                weight = puweight*fbweight*vjetsKF*ltrigweight
                weight_triggerUp = puweight*fbweight*vjetsKF*ltrigweightUp
                weight_triggerDown = puweight*fbweight*vjetsKF*ltrigweightDown
                weight_puUp = puweight_up*fbweight*vjetsKF*ltrigweight
                weight_puDown = puweight_down*fbweight*vjetsKF*ltrigweight
                weight_nopu = fbweight*vjetsKF*ltrigweight
                weight_mu = puweight*fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
                weight_mutriggerUp = puweight*fbweight*vjetsKF*mutrigweightUp*muidweight*muisoweight
                weight_mutriggerDown = puweight*fbweight*vjetsKF*mutrigweightDown*muidweight*muisoweight
                weight_muidUp = puweight*fbweight*vjetsKF*mutrigweight*muidweightUp*muisoweight
                weight_muidDown = puweight*fbweight*vjetsKF*mutrigweight*muidweightDown*muisoweight
                weight_muisoUp = puweight*fbweight*vjetsKF*mutrigweight*muidweight*muisoweightUp
                weight_muisoDown = puweight*fbweight*vjetsKF*mutrigweight*muidweight*muisoweightDown
                weight_mu_pu_up = puweight_up*fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
                weight_mu_pu_down = puweight_down*fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
                weight_mu_nopu = fbweight*vjetsKF*mutrigweight*muidweight*muisoweight
                #print 'puweight scale1fb vjets ltrig lid liso',puweight,tree.scale1fb,vjetsKF,mutrigweight,muidweight,muisoweight
            else:
                weight = 1
                weight_triggerUp = 1
                weight_triggerDown = 1
                weight_puUp = 1
                weight_puDown = 1
                weight_nopu = 1
                weight_mu = 1
                weight_mutriggerUp = 1
                weight_mutriggerDown = 1
                weight_muidUp = 1
                weight_muidDown = 1
                weight_muisoUp = 1
                weight_muisoDown = 1
                weight_mu_puUp = 1
                weight_mu_puDown = 1
                weight_mu_nopu = 1
            lMass = correct(lEta,lPt,lMsd);
            if lMass <=0: lMass = 0.01
            pRho = 2.*math.log(lMass/lPt);
            if jet == 'AK8': jsize = 0.8;
            if jet == 'CA15': jsize = 1.5
            pRhoDef = 2.*math.log(lMass/(lPt*jsize));
            lN2 = getattr(tree,"%sPuppijet0_N2sdb1"%jet);
            lN2DDT = lN2 - getAllN2DDT(lMass,lPt)
            
            lHT = 0.
            if (abs(tree.AK4Puppijet0_eta) < 2.4 and tree.AK4Puppijet0_pt > 30): lHT = lHT +tree.AK4Puppijet0_pt
            if (abs(tree.AK4Puppijet1_eta) < 2.4 and tree.AK4Puppijet1_pt > 30): lHT = lHT +tree.AK4Puppijet1_pt
            if (abs(tree.AK4Puppijet2_eta) < 2.4 and tree.AK4Puppijet2_pt > 30): lHT = lHT +tree.AK4Puppijet2_pt
            if (abs(tree.AK4Puppijet3_eta) < 2.4 and tree.AK4Puppijet3_pt > 30): lHT = lHT +tree.AK4Puppijet3_pt
            h_HT.Fill(lHT, weight)

            if selMuon:
                # by pt
                if lPt < 600  or lPt>700: continue
                n_MdR0p8_4 = tree.nAK4PuppijetsMPt50dR08_0
                #print 'muloose ',tree.nmuLoose
                #print 'eleloose ',tree.neleLoose
                #print 'tauloose ',tree.ntau
                if lPt > 475 and tree.nmuLoose == 1 and tree.neleLoose == 0 and tree.ntau == 0 and tree.vmuoLoose0_pt > MUONPTCUT and abs(tree.vmuoLoose0_eta) < 2.1 and lTight ==1 and abs(math.acos(math.cos(tree.vmuoLoose0_phi - lPhi))) > 2. * ROOT.TMath.Pi() / 3. and n_MdR0p8_4 >= 1:
                    if lPt > 475 and lN2DDT < N2CUT:
                        h_jmsd_pass.Fill( lMass, weight_mu );
                    if lPt > 475 and lN2DDT > N2CUT:
                        h_jmsd_fail.Fill( lMass, weight_mu );
                    h_mupt.Fill( tree.vmuoLoose0_pt, weight_mu );
                    h_jpt.Fill(lPt, weight_mu)
                    h_jmsd.Fill(lMass, weight_mu)
                    h_jN2sdb1.Fill(lN2, weight_mu)
                    h_jN2sdb1_DDT.Fill(lN2DDT, weight_mu)
                    h_jrho.Fill(pRho, weight_mu)
                    h_jrhodef.Fill(pRhoDef, weight_mu)
                    h_mupt_mueta.Fill(tree.vmuoLoose0_pt, abs(tree.vmuoLoose0_eta), weight_mu)
                    h_jmsd_jpt.Fill(lMass, lPt, weight_mu)
                    h_jmsd_jpt_bin.Fill(lMass, lPt, weight_mu)
                    h_jrho_jpt_bin.Fill(pRho, lPt, weight_mu)
            elif selWtag:
                lTau21 = getattr(tree,"%sPuppijet0_tau21"%jet);
                lVMatching = getattr(tree,"%sPuppijet0_vMatching"%(jet));
                lVHadronic = getattr(tree,"%sPuppijet0_isHadronicV"%(jet));
                lVSize = getattr(tree,"%sPuppijet0_vSize"%(jet));
                if lVHadronic == 1 and lVMatching < jsize and lVMatching > 0.0:
                    lMatchedHadW = 1.
                else:
                    lMatchedHadW = 0.
                if tree.pfmet < 40: continue
                lnLooseMuons = 0
                if tree.nmuLoose == 1:
                    if tree.vmuoLoose0_pt > 20 and abs(tree.vmuoLoose0_eta) < 2.4:
                        lnLooseMuons+= 1
                if tree.nmuLoose == 2:
                    if tree.vmuoLoose0_pt > 20 and abs(tree.vmuoLoose0_eta) < 2.4:
                        lnLooseMuons+= 1
                    if tree.vmuoLoose1_pt > 20 and abs(tree.vmuoLoose1_eta) < 2.4:
                        lnLooseMuons+= 1
                lnTightMuons = 0
                lmuPt = 0; lmuEta = 0; lmuPhi = 0; 
                if tree.nmuTight == 1:
                    if tree.vmuoLoose0_pt > 53 and abs(tree.vmuoLoose0_eta) < 2.1:
                        lnTightMuons+= 1
                        lmuPt = tree.vmuoLoose0_pt
                        lmuEta = tree.vmuoLoose0_eta
                        lmuPhi = tree.vmuoLoose0_phi
                if tree.nmuTight == 2:
                    if tree.vmuoLoose0_pt > 53 and abs(tree.vmuoLoose0_eta) < 2.1:
                        lnTightMuons+= 1
                        lmuPt = tree.vmuoLoose0_pt
                        lmuEta = tree.vmuoLoose0_eta
                        lmuPhi = tree.vmuoLoose0_phi
                    if tree.vmuoLoose1_pt > 53 and abs(tree.vmuoLoose1_eta) < 2.1:
                        lnTightMuons+= 1
                        lmuPt = tree.vmuoLoose1_pt
                        lmuEta = tree.vmuoLoose1_eta
                        lmuPhi = tree.vmuoLoose1_phi
                if lnTightMuons != 1 or lnLooseMuons != 1:
                    continue

                lHadronicJet = 0.
                lDPhi_Jet_TightMuon = lPhi - lmuPhi
                if lDPhi_Jet_TightMuon >= math.pi:
                    lDPhi_Jet_TightMuon -= 2.*math.pi
                elif lDPhi_Jet_TightMuon < -math.pi:
                    lDPhi_Jet_TightMuon += 2.*math.pi
                lDR_Jet_TightMuon = math.sqrt((lEta - lmuEta)*(lEta - lmuEta)+lDPhi_Jet_TightMuon*lDPhi_Jet_TightMuon)
                if abs(lEta) < 2.4 and lDR_Jet_TightMuon > 1.0:
                    lHadronicJet = 1
                if lHadronicJet != 1:
                    continue

                lnBTaggedAK4Jet = 0
                for i0 in range(0,4):
                    lDR_TightMuon_Matched = 0
                    lDR_Jet_Matched = 0
                    lAK4Pt = getattr(tree,"AK4Puppijet%i_pt"%i0);
                    lAK4Phi = getattr(tree,"AK4Puppijet%i_phi"%i0);
                    lAK4Eta = getattr(tree,"AK4Puppijet%i_eta"%i0);
                    lAK4Csv = getattr(tree,"AK4Puppijet%i_csv"%i0);

                    lDPhi_AK4Jet_TightMuon = lAK4Phi - lmuPhi
                    if lDPhi_AK4Jet_TightMuon >= math.pi:
                        lDPhi_AK4Jet_TightMuon -= 2.*math.pi
                    elif lDPhi_AK4Jet_TightMuon < -math.pi:
                        lDPhi_AK4Jet_TightMuon += 2.*math.pi
                    lDR_AK4Jet_TightMuon = math.sqrt((lAK4Eta - lmuEta)*(lAK4Eta - lmuEta)+lDPhi_AK4Jet_TightMuon*lDPhi_AK4Jet_TightMuon)
                    if lDR_AK4Jet_TightMuon < 0.3:
                        lDR_TightMuon_Matched = 1

                    lDPhi_AK4Jet_Jet = lAK4Phi - lPhi
                    if lDPhi_AK4Jet_Jet >= math.pi:
                        lDPhi_AK4Jet_Jet -= 2.*math.pi
                    elif lDPhi_AK4Jet_Jet < -math.pi:
                        lDPhi_AK4Jet_Jet += 2.*math.pi
                    lDR_AK4Jet_Jet = math.sqrt((lAK4Eta - lEta)*(lAK4Eta - lEta)+lDPhi_AK4Jet_Jet*lDPhi_AK4Jet_Jet)
                    if lDR_AK4Jet_Jet < jsize:
                        lDR_Jet_Matched = 1

                    if abs(lAK4Eta) < 2.4 and lAK4Csv > fMCSV and lDR_TightMuon_Matched ==0 and lDR_Jet_Matched == 0 and lAK4Pt > 30.:
                        lnBTaggedAK4Jet += 1

                if lnBTaggedAK4Jet <= 0:
                    continue

                lPassingLeptonicW = 0.
                lpxMet = tree.pfmet*math.cos(tree.pfmetphi)
                lpyMet = tree.pfmet*math.sin(tree.pfmetphi)
                lpxMuon = lmuPt*math.cos(lmuPhi)
                lpyMuon = lmuPt*math.sin(lmuPhi)
                if math.sqrt((lpxMet+lpxMuon)*(lpxMet+lpxMuon) + (lpyMet+lpyMuon)*(lpyMet+lpyMuon)) > 200.:
                    lPassingLeptonicW = 1.
                if lPassingLeptonicW <= 0:
                    continue
                if tree.pfmet > 40 and lnTightMuons == 1 and lnLooseMuons == 1 and lHadronicJet == 1 and lnBTaggedAK4Jet > 0 and lPassingLeptonicW > 0:
                    h_pu_noweight.Fill(tree.npu, weight_mu_nopu)
                    h_pu.Fill(tree.npu, weight_mu)
                    if lN2DDT < N2CUT:
                        h_jmsd_pass.Fill( lMass, weight_mu );
                    if lN2DDT > N2CUT:
                        h_jmsd_fail.Fill( lMass, weight_mu );
                    h_mupt.Fill( tree.vmuoLoose0_pt, weight_mu );
                    h_jpt.Fill(lPt, weight_mu)
                    h_jmsd.Fill(lMass, weight_mu)
                    h_jmsd_uncor.Fill(lMsd, weight_mu)
                    h_jN2sdb1.Fill(lN2, weight_mu)
                    h_jN2sdb1_DDT.Fill(lN2DDT, weight_mu)
                    h_jrho.Fill(pRho, weight_mu)
                    h_jrhodef.Fill(pRhoDef, weight_mu)
                    h_jtau21.Fill(lTau21, weight_mu)
                    h_jeta.Fill(lEta, weight_mu)
                    h_met.Fill(tree.pfmet, weight_mu)
            else:
                h_pu_noweight.Fill(tree.npu, weight_nopu)
                h_pu.Fill(tree.npu, weight)
                h_mupt_mueta.Fill(tree.vmuoLoose0_pt, abs(tree.vmuoLoose0_eta), weight)
                h_jmsd_jpt.Fill(lMass, lPt, weight)
                h_jmsd_jpt_bin.Fill(lMass, lPt, weight)
                h_jrho_jpt_bin.Fill(pRho, lPt, weight)
                if lPt > PTCUT[jet] and pRho > RHO_LO[jet] and pRho < RHO_HI[jet] and tree.neleLoose == 0 and tree.ntau==0 and lTight ==1 and tree.nmuLoose == 0:
                    h_jpt.Fill(lPt, weight)
                    h_jmsd.Fill(lMass, weight)
                    if lN2DDT < N2CUT:
                        h_jmsd_pass.Fill( lMass, weight_mu );
                    if lN2DDT > N2CUT:
                        h_jmsd_fail.Fill( lMass, weight_mu );
                    h_jN2sdb1.Fill(lN2, weight)
                    h_jN2sdb1_DDT.Fill(lN2DDT, weight) 
                    h_jrho.Fill(pRho, weight)
                    h_jrhodef.Fill(pRhoDef, weight)
                    h_jmsd_jpt.Fill(lMass, lPt, weight)
                    h_jmsd_jpt_bin.Fill(lMass, lPt, weight)
                    h_jrho_jpt_bin.Fill(pRho, lPt, weight)

    hists_out = {};
    hists_out = {'h_HT':h_HT,
                 'h_pu':h_pu,
                 'h_pu_noweight':h_pu_noweight,
                 'h_mupt':h_mupt,
                 'h_jpt':h_jpt,
                 'h_jmsd':h_jmsd,
                 'h_jmsd_pass':h_jmsd_pass,
                 'h_jmsd_fail':h_jmsd_fail,
                 'h_jN2sdb1':h_jN2sdb1,
                 'h_jN2sdb1_DDT':h_jN2sdb1_DDT,
                 'h_jrho':h_jrho,
                 'h_jrhodef':h_jrhodef,
                 'h_mupt_mueta':h_mupt_mueta,
                 'h_jmsd_jpt':h_jmsd_jpt,
                 'h_jmsd_jpt_bin':h_jmsd_jpt_bin,
                 'h_jrho_jpt_bin':h_jrho_jpt_bin,
                 'h_jmsd_uncor':h_jmsd_uncor,
                 'h_jtau21':h_jtau21,
                 'h_jeta': h_jeta,
                 'h_met': h_met,
                 }
            
    os.system("mkdir -p control/%s"%out)
    fOut=ROOT.TFile.Open('control/'+out+'/'+filename+'.root','RECREATE')
    for h in hists_out: hists_out[h].Write()
    fOut.Close()

def main(options,args):
    setupCorr()
    global fh2ddt
    global ftrig_eff
    if options.jet=='CA15':
        #fh2ddt = setuph2ddt("data/Output_CA15.root")
        fh2ddt = setuph2ddt("data/OutputCA152017v13.root")
        if options.nob:
            ftrig_eff = setupTrig('data/2018numCA15/singlemu_nob.root','dataMujmsd_jpt_bin',
                                  'data/2018denomCA15/singlemu_nob.root','dataMujmsd_jpt_bin')
        else:
            ftrig_eff = setupTrig('data/2018numCA15/singlemu.root','dataMujmsd_jpt_bin',
                                  'data/2018denomCA15/singlemu.root','dataMujmsd_jpt_bin')
    else:
        #fh2ddt = setuph2ddt("data/Output_AK8_2017_v0.root")
        #fh2ddt = setuph2ddt()
        fh2ddt = setuph2ddt("data/OutputAK82017v13.root")
        if options.nob:
            ftrig_eff = setupTrig('data/2018numAK8/singlemu_nob.root','dataMujmsd_jpt_bin',
                                  'data/2018denomAK8/singlemu_nob.root','dataMujmsd_jpt_bin')
        else:
            ftrig_eff = setupTrig('data/2018numAK8/singlemu.root','dataMujmsd_jpt_bin',
                                  'data/2018denomAK8/singlemu.root','dataMujmsd_jpt_bin')


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

    global fpuw
    global fpuw_up
    global fpuw_down
    fpuw, fpuw_up, fpuw_down = setuppuw()
    global MASSES
    MASSES = massIterable(options.masses)

    createAllHistTasks(options)


if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option("--lumi", dest="lumi", type=float, default = 30,help="luminosity", metavar="lumi")
    parser.add_option('-o','--odir', dest='odir', default = '2017sel8pt475409',help='directory to write plots', metavar='odir')
    parser.add_option('--jobs', dest='jobs', default=20, type=int, help='#of jobs to process in parallel the trees [default: %default]')
    parser.add_option('--isMc', action='store_true', dest='isMc', default=False, help='run on mc process')
    parser.add_option('--isQCD', action='store_true', dest='isQCD', default=False, help='run on QCD process')
    parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False, help='run on muon CR')
    parser.add_option('--isData', action='store_true', dest='isData', default=False, help='run on data')
    parser.add_option('--isSig', action='store_true', dest='isSig', default=False, help='run on signals')
    parser.add_option('--trigger', action='store_true', dest='trigger', default=False, help='run trigger')
    parser.add_option('--masses',dest='masses', default='50,75,100,115,125,150,175,200,225,250,300,350,400,450,500',type="string", help="masses of resonance")
    parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
    parser.add_option('--blinded', action='store_true', dest='blinded', default=False, help='run 10th')
    parser.add_option('--nob', action='store_true', dest='nob', default=False, help='no Run B')
    parser.add_option('--selWtag', action='store_true', dest='selWtag', default=False, help='sel Wtag')
    parser.add_option('--data2016', action='store_true', dest='data2016', default=False, help='2016')
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
##----##----##----##----##----##----##




