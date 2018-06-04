import os
import math
import array
from optparse import OptionParser
import ROOT
import warnings
from ROOT import *
import sys
import warnings 
import json

warnings.filterwarnings(action='ignore', category=RuntimeWarning, message='creating converter.*')

'''
with open("JetHTBsklim.txt", 'r') as mylist:
    JetHTBfiles = [myfile.replace('\n', '') for myfile in mylist.readlines()]
with open("JetHTCsklim.txt", 'r') as mylist:
    JetHTCfiles = [myfile.replace('\n', '') for myfile in mylist.readlines()]
with open("JetHTDsklim.txt", 'r') as mylist:
    JetHTDfiles = [myfile.replace('\n', '') for myfile in mylist.readlines()]
with open("JetHTEsklim.txt", 'r') as mylist:
    JetHTEfiles = [myfile.replace('\n', '') for myfile in mylist.readlines()]
with open("JetHTFsklim.txt", 'r') as mylist:
    JetHTFfiles = [myfile.replace('\n', '') for myfile in mylist.readlines()]
'''
tfiles = {#'jethtb': JetHTBfiles,
          #'jethtc': JetHTCfiles,
          #'jethtd': JetHTDfiles,
          #'jethte': JetHTEfiles,
          #'jethtf': JetHTFfiles,
          # 'jethtb': ['JetHTRun2017B_PromptReco_v1_noPF.root'],
          # 'jethtc': ['JetHTRun2017C_PromptReco_v1_noPF.root'],
          # 'jethtd': ['JetHTRun2017D_PromptReco_v1_noPF.root'],
          # 'jethte': ['JetHTRun2017E_PromptReco_v1_noPF.root'],
          # 'jethtf': ['JetHTRun2017F_PromptReco_v1_noPF.root'],

          'jethtb2016': ['JetHTRun2016B_03Feb2017_ver2_v2_v3.root',
                         'JetHTRun2016B_03Feb2017_ver1_v1_v3.root'],
          'jethtc2016': ['JetHTRun2016C_03Feb2017_v1_v3_0.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_1.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_2.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_3.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_4.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_5.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_6.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_7.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_8.root',
                         'JetHTRun2016C_03Feb2017_v1_v3_9.root'],
          'jethtd2016': ['JetHTRun2016D_03Feb2017_v1_v3_0.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_1.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_10.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_11.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_12.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_13.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_14.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_2.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_3.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_4.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_5.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_6.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_7.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_8.root',
                         'JetHTRun2016D_03Feb2017_v1_v3_9.root'],
          'jethte2016':['JetHTRun2016E_03Feb2017_v1_v3_0.root', 
                        'JetHTRun2016E_03Feb2017_v1_v3_1.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_2.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_3.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_4.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_5.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_6.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_7.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_8.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_9.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_10.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_11.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_12.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_13.root',
                        'JetHTRun2016E_03Feb2017_v1_v3_14.root'],
          'jethtf2016':['JetHTRun2016F_03Feb2017_v1_v3_0.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_1.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_2.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_3.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_4.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_5.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_6.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_7.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_8.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_9.root',
                        'JetHTRun2016F_03Feb2017_v1_v3_10.root'],
          'jethtg2016':['JetHTRun2016G_03Feb2017_v1_v3_0.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_1.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_2.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_3.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_4.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_5.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_6.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_7.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_8.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_9.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_10.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_11.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_12.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_13.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_14.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_15.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_16.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_17.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_18.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_19.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_20.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_21.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_22.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_23.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_24.root',
                        'JetHTRun2016G_03Feb2017_v1_v3_25.root'],
          'jethth2016':['JetHTRun2016H_03Feb2017_ver2_v1_v3_0.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_1.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_2.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_3.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_4.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_5.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_6.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_7.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_8.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_9.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_10.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_11.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_12.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_13.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_14.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_15.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_16.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_17.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_18.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_19.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_20.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_21.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_22.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_23.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_24.root',
                        'JetHTRun2016H_03Feb2017_ver2_v1_v3_25.root',
                        'JetHTRun2016H_03Feb2017_ver3_v1_v3.root'],

          'jethtb': ['JetHTRun2017B_17Nov2017_v1_noPF.root'],
          'jethtc': ['JetHTRun2017C_17Nov2017_v1_noPF.root'],
          'jethtd': ['JetHTRun2017D_17Nov2017_v1_noPF.root'],
          'jethte': ['JetHTRun2017E_17Nov2017_v1_noPF.root'],
          'jethtf': ['JetHTRun2017F_17Nov2017_v1_noPF.root'],

          'singlemub': ['SingleMuonRun2017B_17Nov2017_v1_noPF.root'],
          'singlemuc': ['SingleMuonRun2017C_17Nov2017_v1_noPF.root'],
          'singlemud': ['SingleMuonRun2017D_17Nov2017_v1_noPF.root'],
          'singlemue': ['SingleMuonRun2017E_17Nov2017_v1_noPF.root'],
          'singlemuf': ['SingleMuonRun2017F_17Nov2017_v1_noPF.root'],

          'singlemub2016': ['SingleMuonRun2016B_03Feb2017_ver1_v1_fixtrig.root'],
          'singlemuc2016': ['SingleMuonRun2016C_03Feb2017_v1_fixtrig.root'],
          'singlemud2016': ['SingleMuonRun2016D_03Feb2017_v1_fixtrig.root'],
          'singlemue2016': ['SingleMuonRun2016E_03Feb2017_v1_fixtrig.root'],
          'singlemuf2016': ['SingleMuonRun2016F_03Feb2017_v1_fixtrig.root'],
          'singlemug2016': ['SingleMuonRun2016G_03Feb2017_v1_fixtrig.root'],
          'singlemuh12016': ['SingleMuonRun2016H_03Feb2017_ver2_v1_fixtrig.root'],
          'singlemuh22016': ['SingleMuonRun2016H_03Feb2017_ver3_v1_fixtrig.root'],

          'qcd1000':['QCD_HT1000to1500_13TeV_1000pb_weighted.root'],
          'qcd1500':['QCD_HT1500to2000_13TeV_1000pb_weighted.root'],
          'qcd2000':['QCD_HT2000toInf_13TeV_all_1000pb_weighted.root'],
          'qcd300':['QCD_HT300to500_13TeV_all_1000pb_weighted.root'],
          'qcd500':['QCD_HT500to700_13TeV_1000pb_weighted.root'],
          'qcd700':['QCD_HT700to1000_13TeV_1000pb_weighted.root'],
          'qcd8' : ['QCDAK8.root'],
          'qcd15' : ['QCDCA15.root'],
          'qcd151jet': ['QCD.root'],
          'qcd' : ['QCD_HT100to200_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root',
                   'QCD_HT200to300_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root',
                   'QCD_HT300to500_TuneCP5_13TeV_madgraph_pythia8_noPF_byLumi_1000pb_weighted.root',
                   'QCD_HT500to700_TuneCP5_13TeV_madgraph_pythia8_noPF_byLumi_1000pb_weighted.root',
                   'QCD_HT700to1000_TuneCP5_13TeV_madgraph_pythia8_noPF_byLumi_1000pb_weighted.root',
                   'QCD_HT1000to1500_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root',
                   'QCD_HT1500to2000_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root',
                   'QCD_HT2000toInf_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root',
                   ],

          'qcdnew100': ['QCD_HT100to200_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root'],
          'qcdnew200': ['QCD_HT200to300_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root'],
          'qcdnew300': ['QCD_HT300to500_TuneCP5_13TeV_madgraph_pythia8_noPF_byLumi_1000pb_weighted.root'],
          'qcdnew500': ['QCD_HT500to700_TuneCP5_13TeV_madgraph_pythia8_noPF_byLumi_1000pb_weighted.root'],
          'qcdnew700': ['QCD_HT700to1000_TuneCP5_13TeV_madgraph_pythia8_noPF_byLumi_1000pb_weighted.root'],
          'qcdnew1000': ['QCD_HT1000to1500_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root'],
          'qcdnew1500': ['QCD_HT1500to2000_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root'],
          'qcdnew2000': ['QCD_HT2000toInf_TuneCP5_13TeV_madgraph_pythia8_1000pb_weighted.root'],

          'zqq1chi50': ['VectorDiJet1Jet_madgraph_Mphi50Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi75': ['VectorDiJet1Jet_madgraph_Mphi75Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi100': ['VectorDiJet1Jet_madgraph_Mphi100Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi115': ['VectorDiJet1Jet_madgraph_Mphi115Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi125': ['VectorDiJet1Jet_madgraph_Mphi125Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi150': ['VectorDiJet1Jet_madgraph_Mphi150Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi175': ['VectorDiJet1Jet_madgraph_Mphi175Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi200': ['VectorDiJet1Jet_madgraph_Mphi200Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi225': ['VectorDiJet1Jet_madgraph_Mphi225Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi250': ['VectorDiJet1Jet_madgraph_Mphi250Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi300': ['VectorDiJet1Jet_madgraph_Mphi300Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi350': ['VectorDiJet1Jet_madgraph_Mphi350Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi400': ['VectorDiJet1Jet_madgraph_Mphi400Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi450': ['VectorDiJet1Jet_madgraph_Mphi450Mchi1_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq1chi500': ['VectorDiJet1Jet_madgraph_Mphi500Mchi1_13TeV_noPF_8_1000pb_weighted.root'],

          'zqq3000chi50': ['VectorDiJet1Jet_madgraph_Mphi50Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi75': ['VectorDiJet1Jet_madgraph_Mphi75Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi100': ['VectorDiJet1Jet_madgraph_Mphi100Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi115': ['VectorDiJet1Jet_madgraph_Mphi115Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi125': ['VectorDiJet1Jet_madgraph_Mphi125Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi150': ['VectorDiJet1Jet_madgraph_Mphi150Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi175': ['VectorDiJet1Jet_madgraph_Mphi175Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi200': ['VectorDiJet1Jet_madgraph_Mphi200Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi225': ['VectorDiJet1Jet_madgraph_Mphi225Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi250': ['VectorDiJet1Jet_madgraph_Mphi250Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi300': ['VectorDiJet1Jet_madgraph_Mphi300Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi350': ['VectorDiJet1Jet_madgraph_Mphi350Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi400': ['VectorDiJet1Jet_madgraph_Mphi400Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi450': ['VectorDiJet1Jet_madgraph_Mphi450Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],
          'zqq3000chi500': ['VectorDiJet1Jet_madgraph_Mphi500Mchi3000_13TeV_noPF_8_1000pb_weighted.root'],

          'zqqnew50':['VectorDiJet1Jet_50_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew75':['VectorDiJet1Jet_75_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew100':['VectorDiJet1Jet_100_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew115':['VectorDiJet1Jet_115_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew125':['VectorDiJet1Jet_125_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew150':['VectorDiJet1Jet_150_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew200':['VectorDiJet1Jet_200_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew250':['VectorDiJet1Jet_250_madgraph_2017_noPF_1000pb_weighted.root'],
          'zqqnew300':['VectorDiJet1Jet_300_madgraph_2017_noPF_1000pb_weighted.root'],

          'zqq50':['VectorDiJet1Jet_M50_1000pb_weighted.root'],
          'zqq75':['VectorDiJet1Jet_M75_1000pb_weighted.root'],
          'zqq100':['VectorDiJet1Jet_M100_1000pb_weighted.root'],
          'zqq125':['VectorDiJet1Jet_M125_1000pb_weighted.root'],
          'zqq150':['VectorDiJet1Jet_M150_1000pb_weighted.root'],
          'zqq200':['VectorDiJet1Jet_M200_1000pb_weighted.root'],
          'zqq250':['VectorDiJet1Jet_M250_1000pb_weighted.root'],
          'zqq300':['VectorDiJet1Jet_M300_1000pb_weighted.root'],

          'zqq':['DYJetsToQQ_HT180_13TeV_1000pb_weighted.root'],
          'zqqnew': ['ZJetsToQQ_HT400to600_TuneCP5_13TeV_noPF_1000pb_weighted.root',
                     'ZJetsToQQ_HT600to800_3j_TuneCP5_13TeV_noPF_1000pb_weighted.root',
                     'ZJetsToQQ_HT_800toInf_TuneCP5_13TeV_noPF_1000pb_weighted.root'],
          'tlqq':['TTToSemiLeptonic_TuneCP5_13TeV_powheg_pythia8_byLumi_1000pb_weighted.root'],
          'tqq':['TTToHadronic_TuneCP5_13TeV_powheg_pythia8_byLumi_1000pb_weighted.root',
                ],
          'tqq2016':['TT_powheg_1000pb_weighted.root',],
          'tqqskim':['TTToSemiLeptonic_TuneCP5_13TeV_powheg_pythia8_byLumi_1000pb_weighted.root'],
          
          'wqq':['WJetsToQQ_HT180_13TeV_1000pb_weighted.root'],
          'wqqnew':['WJetsToQQ_HT400to600_TuneCP5_13TeV_noPF_1000pb_weighted.root',
                    'WJetsToQQ_HT600to800_TuneCP5_13TeV_noPF_1000pb_weighted.root',
                    'WJetsToQQ_HT_800toInf_TuneCP5_13TeV_noPF_1000pb_weighted.root'],

          'stqq':['ST_s_channel_4f_leptonDecays_TuneCP5_13TeV_amcatnlo_pythia8_noPF_1000pb_weighted.root',
                  'ST_t_channel_top_4f_inclusiveDecays_TuneCP5_13TeV_powhegV2_madspin_pythia8_1000pb_weighted.root',
                  'ST_tW_top_5f_inclusiveDecays_TuneCP5_13TeV_powheg_pythia8_1000pb_weighted.root',
                  'ST_t_channel_antitop_4f_inclusiveDecays_TuneCP5_13TeV_powhegV2_madspin_pythia8_1000pb_weighted.root',
                  'ST_tW_antitop_5f_inclusiveDecays_TuneCP5_13TeV_powheg_pythia8_1000pb_weighted.root',
                  ],
          'stqq2016':[
                  'ST_tW_antitop_5f_inclusiveDecays_13TeV_powheg_pythia8_TuneCUETP8M2T4_1000pb_weighted.root',
                  'ST_tW_top_5f_inclusiveDecays_13TeV_powheg_pythia8_TuneCUETP8M2T4_1000pb_weighted.root',
                  'ST_t_channel_antitop_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV_powhegV2_madspin_1000pb_weighted.root',
                  #'ST_t_channel_top_4f_inclusiveDecays_TuneCUETP8M2T4_13TeV_powhegV2_madspin_1000pb_weighted.root',
                  'ST_s_channel_4f_leptonDecays_13TeV_amcatnlo_pythia8_TuneCUETP8M1_1000pb_weighted.root'
                  ],

          'vvqq': ['/WWTo4Q_13TeV_powheg_1000pb_weighted.root',
                   '/ZZ_13TeV_pythia8_1000pb_weighted.root',
                   '/WZ_13TeV_pythia8_1000pb_weighted.root'],
          'vvqqwtag': ['/WW_TuneCP5_13TeV_pythia8_1000pb_weighted.root',
                       '/ZZ_TuneCP5_13TeV_pythia8_1000pb_weighted.root',
                       '/WZ_TuneCP5_13TeV_pythia8_1000pb_weighted.root'],
          'vvqq2016': ['/ZZ_13TeV_pythia8_1000pb_weighted.root',
                       '/WZ_13TeV_pythia8_1000pb_weighted.root',
                       '/WW_13TeV_pythia8_1000pb_weighted.root',
                       ],
          
          'zll': ['/DYJetsToLL_M_50_13TeV_ext_1000pb_weighted.root'],
          'wlnu': ['WJetsToLNu_HT_100To200_13TeV_1000pb_weighted.root',
                   '/WJetsToLNu_HT_200To400_13TeV_1000pb_weighted.root',
                   '/WJetsToLNu_HT_400To600_13TeV_1000pb_weighted.root',
                   '/WJetsToLNu_HT_600To800_13TeV_1000pb_weighted.root',
                   '/WJetsToLNu_HT_800To1200_13TeV_1000pb_weighted.root',
                   '/WJetsToLNu_HT_1200To2500_13TeV_1000pb_weighted.root'],
          }

tfiles['zqq151jet'] = tfiles['zqq']
tfiles['tqq151jet'] = tfiles['tqq']
tfiles['wqq151jet'] = tfiles['wqq']
tfiles['stqq151jet'] = tfiles['stqq']

tfiles['thqq'] = tfiles['tqq']

tfiles['tqq1mu'] = tfiles['tqq']
tfiles['tqq1ele'] = tfiles['tqq']
tfiles['tqq1tau'] = tfiles['tqq']
tfiles['tqq0lep'] = tfiles['tqq']
tfiles['tqq2lep'] = tfiles['tqq']

tfiles['zqq201850'] = tfiles['zqq1chi50']
tfiles['zqq201875'] = tfiles['zqq3000chi75']
tfiles['zqq2018100'] = tfiles['zqq1chi100']
tfiles['zqq2018115'] = tfiles['zqq1chi115']
tfiles['zqq2018125'] = tfiles['zqq3000chi125']
tfiles['zqq2018150'] = tfiles['zqq3000chi150']
tfiles['zqq2018175'] = tfiles['zqq3000chi175']
tfiles['zqq2018200'] = tfiles['zqq1chi200']
tfiles['zqq2018225'] = tfiles['zqq3000chi225']
tfiles['zqq2018250'] = tfiles['zqq3000chi250']
#tfiles['zqq2018275'] = tfiles['zqq3000chi275']
tfiles['zqq2018300'] = tfiles['zqq3000chi300']
tfiles['zqq2018350'] = tfiles['zqq1chi350']
tfiles['zqq2018400'] = tfiles['zqq3000chi400']
tfiles['zqq2018450'] = tfiles['zqq1chi450']
tfiles['zqq2018500'] = tfiles['zqq1chi500']

puFiles = ['tlqq',
           'tqq',
           'thqq',
           'stqq',
           'qcdnew100',
           'qcdnew200',
           'qcdnew300',
           'qcdnew500',
           'qcdnew700',
           'qcdnew1000',
           'qcdnew1500',
           'qcdnew2000',
           'zqq201850',
           'zqq201875',
           'zqq2018100',
           'zqq2018125',
           'zqq2018115',
           'zqq2018150',
           'zqq2018175',
           'zqq2018200',
           'zqq2018225',
           'zqq2018250',
           'zqq2018300',
           'zqq2018350',
           'zqq2018400',
           'zqq2018450',
           'zqq2018500',
           ]

PTBINS = {}
PTLO = {}
PTHI = {}
PTBINS['AK8'] = 6;
PTLO['AK8'] = 475;
PTHI['AK8'] = 1000;

PTBINS['CA15'] = 6;
PTLO['CA15'] = 500;
PTHI['CA15'] = 1000;

PTBINBOUND = {}
PTBINBOUND['AK8'] = [475,500,600,700,800,900,1000]
PTBINBOUND['CA15'] = [500,550,600,700,800,900,1000]

RHO_LO ={}
RHO_HI ={}
RHO_LO['AK8']=-6
RHO_HI['AK8']=-2.1

RHO_LO['CA15']=-4.7
RHO_HI['CA15']=-1

RHO_LO_LOOSE ={}
RHO_HI_LOOSE ={}
RHO_LO_LOOSE['AK8']=-6
RHO_HI_LOOSE['AK8']=-2
RHO_LO_LOOSE['CA15']=-4.7
RHO_HI_LOOSE['CA15']=-1

PTCUT = {}
PTCUT['AK8'] = 475
PTCUT['CA15'] = 500

PTCUT_LOOSE = {}
PTCUT_LOOSE['AK8'] = 450
PTCUT_LOOSE['CA15'] = 450

N2CUT = 0.;
MUONPTCUT = 100;

massbins = 100;
masslo   = 0;
masshi   = 500;

n2bins   = 500;
n2lo     = 0;
n2hi     = 0.5;
n2ddtbins = 500;
n2ddtlo = -0.4;
n2ddthi = 0.5;

rhobins = 60;

# update for 2017 samples - if they ever come
DY_SF = 1.45;
W_SF = 1.35;
wscale=[1.0,1.0,1.0,1.20,1.25,1.25,1.0];

MASSES = [];

fcorrGEN = ROOT.TF1("corrGEN","[0]+[1]*pow(x*[2],-[3])",200,3500);
fcorrRECO_cen = ROOT.TF1("corrRECO_cen","[0]+[1]*x+[2]*pow(x,2)+[3]*pow(x,3)+[4]*pow(x,4)+[5]*pow(x,5)",200,3500);
fcorrRECO_for = ROOT.TF1("corrRECO_for","[0]+[1]*x+[2]*pow(x,2)+[3]*pow(x,3)+[4]*pow(x,4)+[5]*pow(x,5)",200,3500);

fpuDir = "root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.07-Pu/hadd/"
fpuData = "data/pileup_Cert_294927-306462_13TeV_PromptReco_Collisions17_withVar.root"

def massIterable(massList):
    if len(massList.split(','))==1:
        massIterableList = [massList]
    else:
        massIterableList = list(eval(massList))
    return massIterableList

def setuppuw(filename="data/puWeights_All.root"):
    f_pu = ROOT.TFile.Open(filename)
    lpuw = f_pu.Get("puw")
    lpuw_up = f_pu.Get("puw_p")
    lpuw_down = f_pu.Get("puw_m")
    lpuw.SetDirectory(0)
    lpuw_up.SetDirectory(0)
    lpuw_down.SetDirectory(0)
    f_pu.Close()
    return lpuw,lpuw_up,lpuw_down

def setuppuw2017(iSample):
    f_puMC = ROOT.TFile.Open(fpuDir+'/'+iSample)
    lpuMC= f_puMC.Get("Pu")
    lpuMC.Scale(1/lpuMC.Integral())
    lpuMC.SetDirectory(0)
    f_puMC.Close()
    f_puData = ROOT.TFile.Open(fpuData)
    lpuData= f_puData.Get("pileup")
    lpuData.Scale(1/lpuData.Integral())
    lpuData.SetDirectory(0)
    f_puData.Close()
    # ltmp = ROOT.TH1F("pileupMc","pileupMc",lpuMC.GetNcells()-3,0,lpuData.GetXaxis().GetXmax())
    # for i0 in range(0, ltmp.GetNcells()):
    #     lpu = ltmp.GetXaxis().GetBinCenter(i0)
    #     ltmp.SetBinContent(i0,lpuMC.GetBinContent(lpuMC.GetXaxis().FindBin(lpu)))
    #     print lpuMC.GetXaxis().FindBin(lpu) 
    #     print lpuMC.GetBinContent(lpuMC.GetXaxis().FindBin(lpu))
    # print 'pumc',lpuMC.GetNcells()   
    # print 'pudata',lpuData.GetNcells() 
    # print 'putmp',ltmp.GetNcells() 
    lpuData.Divide(lpuMC)
    f_puData = ROOT.TFile.Open(fpuData)
    lpuData_up= f_puData.Get("pileup_plus")
    lpuData_up.Scale(1/lpuData_up.Integral())
    lpuData_up.SetDirectory(0)
    lpuData_down= f_puData.Get("pileup_minus")
    lpuData_down.Scale(1/lpuData_down.Integral())
    lpuData_down.SetDirectory(0)
    f_puData.Close()
    lpuData_up.Divide(lpuMC)
    lpuData_down.Divide(lpuMC)
    return lpuData,lpuData_up,lpuData_down

def getDDT(iH,iWP):
    print 'Getting ddt ',iH.GetName()
    lDDT = iH.Project3D("yx")
    for i0 in range(iH.GetXaxis().GetNbins()):
        for i1 in range(iH.GetYaxis().GetNbins()):
            pProj = iH.ProjectionZ(iH.GetName()+str(i0)+str(i1)+"ddt",i0,i0,i1,i1)
            if pProj.Integral() == 0:
                continue
            lp = array.array('d', [iWP])
            lq = array.array('d', [0.0]*len(lp))
            pProj.GetQuantiles(len(lp), lq, lp)
            lDDT.SetBinContent( i0, i1, lq[0] )
    return lDDT

def averageBins(iH,i0,i1,iLength=1):
    pProj = iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt",i0,i0,i1,i1)
    for iP in range(1,iLength+1):
        #print 'averaging %i bins'%iP                                                                                                                      
        if i0 > 0 and i1 >0:
            pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_0_%i"%iP,i0-iP,i0-iP,i1-iP,i1-iP))
        if i0 > 0:
            pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_1_%i"%iP,i0-iP,i0-iP,i1,i1))
            pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_2_%i"%iP,i0-iP,i0-iP,i1+iP,i1+iP))
        pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_3_%i"%iP,i0,i0,i1+iP,i1+iP))
        pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_4_%i"%iP,i0+iP,i0+iP,i1+iP,i1+iP))
        pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_5_%i"%iP,i0+iP,i0+iP,i1,i1))
        if i1 > 0:
            pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_6_%i"%iP,i0+iP,i0+iP,i1-iP,i1-iP))
            pProj.Add(iH.ProjectionZ(iH.GetName()+"_"+str(i0)+"_"+str(i1)+"ddt_7_%i"%iP,i0,i0,i1-iP,i1-iP))
    return pProj

def getAverageDDT(iH,iWP=0.05):
    print 'Getting ddt ',iH.GetName()
    lDDT = iH.Project3D("yx")
    for i0 in range(iH.GetXaxis().GetNbins()):
        for i1 in range(iH.GetYaxis().GetNbins()):
            pProj = averageBins(iH,i0,i1,3)
            if pProj.Integral() == 0:
                continue
            lp = array.array('d', [iWP])
            lq = array.array('d', [0.0]*len(lp))
            pProj.GetQuantiles(len(lp), lq, lp)
            lDDT.SetBinContent( i0, i1, lq[0] )
    return lDDT

def setuph2ddt(filename="data/GridOutput_v13.root",iddt="Rho2D"):
    f_h2ddt = ROOT.TFile.Open(filename)
    if "Rho2D" in iddt:
        ltrans_h2ddt = f_h2ddt.Get("Rho2D");
    else:
        lHTmp= f_h2ddt.Get(iddt);
        ltrans_h2ddt = getDDT(lHTmp,0.05)
    ltrans_h2ddt.SetDirectory(0)
    f_h2ddt.Close()
    return ltrans_h2ddt

def setupCorr():
    fcorrGEN.SetParameter(0,1.00626)
    fcorrGEN.SetParameter(1, -1.06161)
    fcorrGEN.SetParameter(2,0.0799900)
    fcorrGEN.SetParameter(3,1.20454)
    fcorrRECO_cen.SetParameter(0,1.09302)
    fcorrRECO_cen.SetParameter(1,-0.000150068)
    fcorrRECO_cen.SetParameter(2,3.44866e-07)
    fcorrRECO_cen.SetParameter(3,-2.68100e-10)
    fcorrRECO_cen.SetParameter(4,8.67440e-14)
    fcorrRECO_cen.SetParameter(5,-1.00114e-17)
    fcorrRECO_for.SetParameter(0,1.27212)
    fcorrRECO_for.SetParameter(1,-0.000571640)
    fcorrRECO_for.SetParameter(2,8.37289e-07)
    fcorrRECO_for.SetParameter(3,-5.20433e-10)
    fcorrRECO_for.SetParameter(4,1.45375e-13)
    fcorrRECO_for.SetParameter(5,-1.50389e-17)

def correct(iEta,iPt,iMass):
    genCorr  = 1.
    recoCorr = 1.
    genCorr =  fcorrGEN.Eval( iPt )
    if( abs(iEta)  < 1.3 ): recoCorr = fcorrRECO_cen.Eval( iPt )
    else: recoCorr = fcorrRECO_for.Eval( iPt )
    return iMass*recoCorr*genCorr

def setupTrig(filenum='control/triggerMuHTPromptRecopt475/singlemu.root',num='dataMujmsd_jpt_8_0_bin',
              filedenom='control/triggerMuPromptRecopt475/singlemu.root',denom='dataMujmsd_jpt_8_0_bin'):
    f_trig_n = ROOT.TFile.Open(filenum)
    trig_numer_8 = f_trig_n.Get(num)
    trig_numer_8.SetDirectory(0)
    f_trig_n.Close()
    f_trig_d = ROOT.TFile.Open(filedenom)
    trig_denom_8 = f_trig_d.Get(denom)
    trig_denom_8.SetDirectory(0)                                                                                                                                         
    f_trig_d.Close()                                                                                                                                                               
    if (ROOT.TEfficiency.CheckConsistency(trig_numer_8, trig_denom_8)):
        ltrig_eff = ROOT.TEfficiency(trig_numer_8, trig_denom_8)                                                                                                                   
        ltrig_eff.SetDirectory(0)   
    return ltrig_eff

def correctTrig(itrig_eff,iMass,iPt):
    ltrigweight = itrig_eff.GetEfficiency(itrig_eff.FindFixBin(iMass,iPt))
    ltrigweightUp = ltrigweight + itrig_eff.GetEfficiencyErrorUp(itrig_eff.FindFixBin(iMass, iPt))
    ltrigweightDown = ltrigweight - itrig_eff.GetEfficiencyErrorLow(itrig_eff.FindFixBin(iMass, iPt))
    #print 'trigweights are %f, %f, %f, setting all to 1 for Pt %f and Mass %f' % (ltrigweight,ltrigweightUp,ltrigweightDown,iPt,iMass) 
    if ltrigweight <= 0 or ltrigweightDown <= 0 or ltrigweightUp <= 0:
        #print 'trigweights are %f, %f, %f, setting all to 1 for Pt %f and Mass %f' % (ltrigweight,ltrigweightUp,ltrigweightDown,iPt,iMass)
        ltrigweight = 1
        ltrigweightUp = 1
        ltrigweightDown = 1
    return ltrigweight,ltrigweightUp,ltrigweightDown

def correctEff(iEff,iX,iY,iType=1,iName=""):
    if iType == 1:
        lweight = iEff.GetBinContent(iEff.FindBin(iX,iY))
        lweightUp = lweight + iEff.GetBinError(iEff.FindBin(iX,iY))
        lweightDown =lweight - iEff.GetBinError(iEff.FindBin(iX,iY))
    else:
        for etaKey, values in sorted(iEff[iName]["abseta_pt"].iteritems()):
            if float(etaKey[8:12]) < iY and float(etaKey[13:17]) > iY:
                for ptKey, result in sorted(values.iteritems()) :
                    if float(ptKey[4:9]) < iX and float(ptKey[10:15]) > iX:
                        lweight = result["value"]
                        lweightUp = result["value"] + result["error"]
                        lweightDown = result["value"] - result["error"]        
                    else:
                        lweight = 1; lweightDown = 1; lweightUp = 1;
            else: lweight = 1; lweightDown = 1; lweightUp = 1;
    # print 'weights are %f, %f, %f, setting all to 1' % ( lweight, lweightUp, lweightDown)
    if lweight <= 0 or lweightDown <= 0 or lweightUp <= 0:
        # print 'weights are %f, %f, %f, setting all to 1' % ( lweight, lweightUp, lweightDown) 
        lweight = 1
        lweightDown = 1
        lweightUp = 1
    return lweight,lweightUp,lweightDown

def setupkFactors(iPt,iType,filename="data/kfactors.root"):
    iPtMin=150; iPtMax=1000;
    f_kfactors = ROOT.TFile.Open("data/kfactors.root")
    hQCD_Z = f_kfactors.Get('ZJets_012j_NLO/nominal')
    hQCD_W = f_kfactors.Get('WJets_012j_NLO/nominal')
    hLO_Z = f_kfactors.Get('ZJets_LO/inv_pt')
    hLO_W = f_kfactors.Get('WJets_LO/inv_pt')
    hEWK_Z = f_kfactors.Get('EWKcorr/Z')
    hEWK_W = f_kfactors.Get('EWKcorr/W')
    hQCD_Z.SetDirectory(0)
    hQCD_W.SetDirectory(0)
    hLO_Z.SetDirectory(0)
    hLO_W.SetDirectory(0)
    hEWK_Z.SetDirectory(0)
    hEWK_W.SetDirectory(0)
    f_kfactors.Close()
    iPtMin = hQCD_Z.GetBinCenter(1);
    iPtMax = hQCD_Z.GetBinCenter(hQCD_Z.GetNbinsX())
    if iPt < iPtMin: iPt = iPtMin
    if iPt > iPtMax: iPt = iPtMax
    hEWK_Z.Divide(hQCD_Z);
    hEWK_W.Divide(hQCD_W);
    hQCD_Z.Divide(hLO_Z);
    hQCD_W.Divide(hLO_W);
    if iType == 0: #VectorDiJet
        iQCDKF = hQCD_Z.GetBinContent(hQCD_Z.FindBin(bosonpt));
        ivjetsKF = DY_SF*iQCDKF;
    elif iType == 1: #Wjets
        iQCDKF = hQCD_W.GetBinContent(hQCD_W.FindBin(bosonpt));
        iEWKKF = hEWK_W.GetBinContent(hEWK_W.FindBin(bosonpt));
        ivjetsKF = W_SF*iEWKKF*iQCDKF;
        wscale=[1.0,1.0,1.0,1.20,1.25,1.25,1.0];
        ptscale=[0, 500, 600, 700, 800, 900, 1000,3000];
        ptKF=1.
        for i in range(0, len(ptscale)):
            if iPt > ptscale[i] and iPt<ptscale[i+1]:  ptKF=wscale[i]
        ivjetsKF = W_SF*iEWKKF*iQCDKF*ptKF;
    elif iType == 2: #DYJets                                                                                                                                                  
        iEWKKF = hEWK_Z.GetBinContent(hEWK_Z.FindBin(bosonpt));
        ivjetsKF = DY_SF*iEWKKF;
    else:
        ivjetsKF = 1;
    return ivjetsKF;

def getN2DDT(iMass,iPt,iSideband = False):
    if iSideband: h2ddt = ftrans_h2ddt40
    else: h2ddt = ftrans_h2ddt
    iRho = 2.*math.log(iMass/iPt);
    lRho = h2ddt.GetXaxis().FindBin(iRho);
    lPt = h2ddt.GetYaxis().FindBin(iPt);
    if iRho > h2ddt.GetXaxis().GetBinUpEdge( h2ddt.GetXaxis().GetNbins() ): lRho = h2ddt.GetXaxis().GetNbins();
    if iRho < h2ddt.GetXaxis().GetBinLowEdge( 1 ): lRho = 1;
    if iPt > h2ddt.GetYaxis().GetBinUpEdge( h2ddt.GetYaxis().GetNbins() ): lPt = h2ddt.GetYaxis().GetNbins();
    if iPt < h2ddt.GetYaxis().GetBinLowEdge( 1 ): lRho = 1;
    return h2ddt.GetBinContent(lRho,lPt);

def openfile(filename):
    itree='otree'
    sklimpath='root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.07/norm/'
    if 'jetht' in filename or 'singlemu' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.07/sklim/'
    if 'jetht' in filename and '2016' in filename:
        sklimpath='root://cmseos.fnal.gov//eos/uscms/store/user/lpchbb/zprimebits-v12.05/'
    # if  'singlemu' in filename:
    #     itree='Events'
    #     sklimpath='root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.07/hadd/'
    if 'wqq' in filename or 'zqq' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/group/lpchbb/zprimebits-v12.05/'
    if 'wqqnew' in filename or 'zqqnew' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.06/norm/'
    if 'zll' in filename or 'vvqq' in filename or 'wlnu' in filename: # or 'tqq' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/group/lpchbb/zprimebits-v12.04/norm2/cvernier/'
    #if 'qcd' in filename:
    #    itree='otree2'
        #sklimpath='root://cmsxrootd.fnal.gov//store/user/cmantill/sklimZqq2017/'
    if 'zqq100' in filename or 'zqq50' in filename or 'zqq75' in filename or 'zqq125' in filename or 'zqq150' in filename or 'zqq200' in filename or 'zqq250' in filename or 'zqq300' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/user/cmantill/sklimZqq2016/'
    if 'zqq2018' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.07/norm/'
    if '151jet' in filename:
        itree='otree'
        sklimpath='root://cmsxrootd.fnal.gov//store/user/cmantill/sklimZqq2016CA15/'        
    if 'wtag' in filename:
        itree='otree2'
        sklimpath='root://cmsxrootd.fnal.gov//store/group/lpcbacon/dazsle/zprimebits-v12.07/sklimWtag'
    print 'Opening %s from %s'%(filename,sklimpath)
    return itree,sklimpath

def createHistPacked(args):
    tag,out,filename,sf,isf,lumi,mass,sideband,isdata,cutFormula,selMuon,jet,ijet = args
    try:
        return createHist(tag=tag,out=out,filename=filename,sf=sf,isf=isf,lumi=lumi,mass=mass,sideband=sideband,isdata=isdata,cutFormula=cutFormula,selMuon=selMuon,jet=jet,ijet=ijet)
    except ReferenceError:
        print 50*'<'
        print "  Problem with ", tag, "continuing without"
        print 50*'<'
        return False

def createTasks(filename,sf):
    ranges = []
    itree,sklimpath = openfile(filename)

    for f in tfiles[filename]:
        infile=ROOT.TFile.Open(sklimpath+f)
        tree= infile.Get(itree)
        if not infile.Get('Events') and not infile.Get('otree') and not infile.Get('otree2'):
            print 'tree is false'
            infile.Close()
            print 'badfile %s'%f
            continue

        infile.cd()
        if sf!=0:
            l = range(0,tree.GetEntries())
            for i in range(0, len(l), sf):
                ranges.append(l[i:i + sf])
    return ranges

def createHistTasks(options):

    tasklist=[]

    jet = options.jet
    ijet = options.ijet
    tag = options.odir
    if 'CA15' in options.jet:
        tag = tag.replace('sel8','sel15')
    if options.ijet != 0:
        tag = tag.replace(tag,tag+'jet%i'%ijet)
    print 'TAG ',tag
    lumi = 40.9
    lumi10 = 4.1
    selMuon = False
    if options.isMuonCR:
        selMuon = True
        tag = 'muon'+tag
        lumi = 41.1
        lumi10 = 4.1
    if options.nob:
        tag += "NOB"
        lumi =36.2
        lumi10 = 3.6
    tag10 = tag + '10th'

    sideband = False
    if options.sideband:
        sideband = True

    if options.isData:
        if not options.isMuonCR:
            if options.nob:
                data = ['jethtc','jethtd','jethte','jethtf']
            else:
                data = ['jethtb','jethtc','jethtd','jethte','jethtf']
            for d in data:
                if options.blinded:
                    tasklist.append(('data_obs',tag10,d,10,0,1.,0.,sideband,True,"(triggerBits&2)&&passJson",selMuon,jet,ijet))
                else:
                    tasklist.append(('data_obs',tag,d,1,0,1.,0.,sideband,True,"(triggerBits&2)&&passJson",selMuon,jet,ijet))
        else:
            data = ['singlemub','singlemuc','singlemud','singlemue','singlemuf']
            for d in data:
                if options.blinded:
                    tasklist.append(('data_obs',tag10,d,10,0,1.,0.,sideband,True,"(triggerBits&65536)&&passJson",selMuon,jet,ijet))
                else:
                    tasklist.append(('data_obs',tag,d,1,0,1.,0.,sideband,True,"(triggerBits&65536)&&passJson",selMuon,jet,ijet))

    if options.isQCD:
        pName = 'qcd'
        if 'CA15' in options.jet:
            pName = 'qcd15'
            if options.ijet == 1:
                pName += '1jet'
            
        #tasklist.append(('qcd',tag,pName,1,0,lumi,0.,False,"1",selMuon,jet,ijet))
        #tasklist.append(('qcd',tag10,pName,1,0,lumi10,0.,False,"1",selMuon,jet,ijet))
        #tasklist.append(('qcd',tag10,'qcdnew300',1,0,lumi10,0.,False,"1",selMuon,jet,ijet))
        if options.blinded:
            tasklist.append(('qcd',tag10,'qcdnew500',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag10,'qcdnew700',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag10,'qcdnew1000',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag10,'qcdnew1500',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag10,'qcdnew2000',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
        else:
            tasklist.append(('qcd',tag,'qcdnew500',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag,'qcdnew700',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag,'qcdnew1000',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag,'qcdnew1500',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('qcd',tag,'qcdnew2000',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))

    # if I ever want to do ranges again
    #ranges = createTasks('qcd1000',100000)
    #print len(ranges)
    #for i0,i1 in enumerate(ranges):
    #    if i0<15: continue
    #    tasklist.append(('qcd',tag,'qcd1000',i1,i0,options.lumi,0.,False,"AK8Puppijet0_pt>500&&neleLoose==0&&nmuLoose==0&&ntau==0&&AK8Puppijet0_isTightVJet==1"))

    if options.isSig:
        for m in MASSES:
            if options.blinded:
                tasklist.append(('zqq%s'%str(m),tag10,'zqq2018%s'%str(m),1,0,lumi10,m,sideband,False,"1",selMuon,jet,ijet))
            else:
                tasklist.append(('zqq%s'%str(m),tag,'zqq2018%s'%str(m),1,0,lumi,m,sideband,False,"1",selMuon,jet,ijet))
            
    if options.isMc:
        pNames = {}
        pNames['zqq'] = 'zqq';
        pNames['wqq'] = 'wqq';
        if options.isMuonCR:
            pNames['tqq'] = 'tlqq';
        else:
            pNames['tqq'] = 'tqq';
        pNames['stqq'] = 'stqq';
        for pName in pNames:
            if options.ijet ==1 and 'CA15' in jet:
                pNames[pName] = pName + '151jet'
        if options.blinded:            
            tasklist.append(('zqq',tag10,pNames['zqq'],1,0,lumi10,91.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('wqq',tag10,pNames['wqq'],1,0,lumi10,80.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('tqq',tag10,pNames['tqq'],1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('stqq',tag10,pNames['stqq'],1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
        else:
            tasklist.append(('zqq',tag,pNames['zqq'],1,0,lumi,91.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('wqq',tag,pNames['wqq'],1,0,lumi,80.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('tqq',tag,pNames['tqq'],1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
            tasklist.append(('stqq',tag,pNames['stqq'],1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
        if options.isMuonCR:
            print 'appending muoncr mc'
            if options.blinded:
                tasklist.append(('vvqq',tag10,'vvqq',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
                tasklist.append(('wlnu',tag10,'wlnu',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
                tasklist.append(('zll',tag10,'zll',1,0,lumi10,0.,sideband,False,"1",selMuon,jet,ijet))
            else:
                tasklist.append(('tqq',tag,'thqq',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
                tasklist.append(('vvqq',tag,'vvqq',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
                tasklist.append(('wlnu',tag,'wlnu',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))
                tasklist.append(('zll',tag,'zll',1,0,lumi,0.,sideband,False,"1",selMuon,jet,ijet))

    if options.jobs>0:
        print ' Submitting jobs in %d threads' % options.jobs
        import multiprocessing as MP
        pool = MP.Pool(options.jobs)
        pool.map(createHistPacked,tasklist)
    else:
        for tag,out,filename,sf,isf,lumi,mass,sideband,isdata,cutFormula,selMuon,jet,ijet in tasklist:
            createHist(tag=tag,out=out,filename=filename,sf=sf,isf=isf,lumi=lumi,mass=mass,sideband=sideband,isdata=isdata,cutFormula=cutFormula,selMuon=selMuon,jet=jet,ijet=ijet)
        return 0
        
def createHist(tag,out,filename,sf,isf,lumi,mass,sideband=False,isdata=False,cutFormula='(1==1)',selMuon=False,jet='AK8',ijet=0):
    
    h_n2 = TH3F(tag+"_n2","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV); N_{2}^{1} (GeV)",
                    massbins,masslo,masshi,
                    PTBINS[jet],PTLO[jet],PTHI[jet],
                    n2bins,n2lo,n2hi)
    h_n2ddts = TH3F(tag+"_n2ddts","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV); N_{2}^{DDT,s} (GeV)",
                    massbins,masslo,masshi,
                    PTBINS[jet],PTLO[jet],PTHI[jet],
                    n2ddtbins,n2ddtlo,n2ddthi)

    h_pass = TH2F(tag+"_pass","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                      massbins,masslo,masshi,
                      len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail = TH2F(tag+"_fail","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                      massbins,masslo,masshi,
                      len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_matched = TH2F(tag+"_pass_matched","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                          massbins,masslo,masshi,
                          len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_unmatched = TH2F(tag+"_pass_unmatched","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                            massbins,masslo,masshi,
                            len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_matched = TH2F(tag+"_fail_matched","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                          massbins,masslo,masshi,
                          len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_unmatched = TH2F(tag+"_fail_unmatched","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                            massbins,masslo,masshi,
                            len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_PuUp = TH2F(tag+"_pass_PuUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                       massbins,masslo,masshi,
                       len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_triggerUp = TH2F(tag+"_pass_triggerUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                            massbins,masslo,masshi,
                            len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_JESUp = TH2F(tag+"_pass_JESUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                        massbins,masslo,masshi,
                        len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_JERUp = TH2F(tag+"_pass_JERUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                        massbins,masslo,masshi,
                        len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_PuDown = TH2F(tag+"_pass_PuDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                         massbins,masslo,masshi,
                         len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_triggerDown = TH2F(tag+"_pass_triggerDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                              massbins,masslo,masshi,
                              len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_JESDown = TH2F(tag+"_pass_JESDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                          massbins,masslo,masshi,
                          len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_pass_JERDown = TH2F(tag+"_pass_JERDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                          massbins,masslo,masshi,
                          len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_PuUp = TH2F(tag+"_fail_PuUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                       massbins,masslo,masshi,
                       len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_triggerUp = TH2F(tag+"_fail_triggerUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                            massbins,masslo,masshi,
                            len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_JESUp = TH2F(tag+"_fail_JESUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                        massbins,masslo,masshi,
                        len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_JERUp = TH2F(tag+"_fail_JERUp","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                        massbins,masslo,masshi,
                        len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_PuDown = TH2F(tag+"_fail_PuDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                         massbins,masslo,masshi,
                         len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_triggerDown = TH2F(tag+"_fail_triggerDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                              massbins,masslo,masshi,
                              len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_JESDown = TH2F(tag+"_fail_JESDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                          massbins,masslo,masshi,
                          len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_JERDown = TH2F(tag+"_fail_JERDown","; m_{SD}^{PUPPI} (GeV); p_{T} (GeV)",
                          massbins,masslo,masshi,
                          len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))

    h_pass_rho = TH2F(tag+"_pass_rho","; #rho; p_{T} (GeV)",
                      rhobins,RHO_LO_LOOSE[jet],RHO_HI_LOOSE[jet],
                      len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    h_fail_rho = TH2F(tag+"_fail_rho","; #rho; p_{T} (GeV)",
                      rhobins,RHO_LO_LOOSE[jet],RHO_HI_LOOSE[jet],
                      len(PTBINBOUND[jet])-1, array.array('d',PTBINBOUND[jet]))
    
    h_pass_msd = TH1F(tag+"pass_msd", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd = TH1F(tag+"fail_msd", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_matched = TH1F(tag+"pass_msd_matched", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_unmatched = TH1F(tag+"pass_msd_unmatched", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_matched = TH1F(tag+"fail_msd_matched", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_unmatched = TH1F(tag+"fail_msd_unmatched", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_PuUp = TH1F(tag+"pass_msd_PuUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_triggerUp = TH1F(tag+"pass_msd_triggerUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_JESUp = TH1F(tag+"pass_msd_JESUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_JERUp = TH1F(tag+"pass_msd_JERUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_PuDown = TH1F(tag+"pass_msd_PuDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_triggerDown = TH1F(tag+"pass_msd_triggerDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_JESDown = TH1F(tag+"pass_msd_JESDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_JERDown = TH1F(tag+"pass_msd_JERDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_PuUp = TH1F(tag+"fail_msd_PuUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_triggerUp = TH1F(tag+"fail_msd_triggerUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_JESUp = TH1F(tag+"fail_msd_JESUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_JERUp = TH1F(tag+"fail_msd_JERUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_PuDown = TH1F(tag+"fail_msd_PuDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_triggerDown = TH1F(tag+"fail_msd_triggerDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_JESDown = TH1F(tag+"fail_msd_JESDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_JERDown = TH1F(tag+"fail_msd_JERDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)

    h_pass_msd_mutriggerUp = TH1F(tag+"pass_msd_mutriggerUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_mutriggerDown = TH1F(tag+"pass_msd_mutriggerDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_muidUp = TH1F(tag+"pass_msd_muidUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_muidDown = TH1F(tag+"pass_msd_muidDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_muisoUp = TH1F(tag+"pass_msd_muisoUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_pass_msd_muisoDown = TH1F(tag+"pass_msd_muisoDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_mutriggerUp = TH1F(tag+"fail_msd_mutriggerUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_mutriggerDown = TH1F(tag+"fail_msd_mutriggerDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_muidUp = TH1F(tag+"fail_msd_muidUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_muidDown = TH1F(tag+"fail_msd_muidDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_muisoUp = TH1F(tag+"fail_msd_muisoUp", "; m_{SD}^{PUPPI}; N", 40, 0, 500)
    h_fail_msd_muisoDown = TH1F(tag+"fail_msd_muisoDown", "; m_{SD}^{PUPPI}; N", 40, 0, 500)

    itree,sklimpath = openfile(filename)

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
        fcutFormula = ROOT.TTreeFormula("cutFormula",
                                        "(" + cutFormula + ")&&(%sPuppijet%i_pt>%f||%sPuppijet%i_pt_JESDown>%f||%sPuppijet%i_pt_JESUp>%f||%sPuppijet%i_pt_JERUp>%f||%sPuppijet%i_pt_JERDown>%f)" % (
                jet,ijet,PTCUT[jet],jet,ijet,PTCUT[jet],jet,ijet,PTCUT[jet],jet,ijet,PTCUT[jet],jet,ijet,PTCUT[jet]),
                                        tree)
        infile.cd()
        tree.SetNotify(fcutFormula)
        ent=tree.GetEntries()
        maxent = tree.GetEntries()
        minent = 0 
        loopt = range(0,tree.GetEntries())                                                                        

        '''
        if sf!=0:
            loopt = sf
        else:
            loopt = range(0,tree.GetEntries())
            # maxent = tree.GetEntries()/sf
            # fixed = maxent
            # while(maxent<=ent):
            #     print 'filename ',f,' minent',minent
            #     print 'filename ',f,' maxent',maxent
        print loopt[-1]
        '''
        if sf!=0 and maxent <100: continue
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

            lMsd = getattr(tree,"%sPuppijet%i_msd"%(jet,ijet));
            lPt = getattr(tree,"%sPuppijet%i_pt"%(jet,ijet));
            lEta =  getattr(tree,"%sPuppijet%i_eta"%(jet,ijet));
            lPhi =  getattr(tree,"%sPuppijet%i_phi"%(jet,ijet));
            lN2 = getattr(tree,"%sPuppijet%i_N2sdb1"%(jet,ijet));
            lTight = getattr(tree,"%sPuppijet%i_isTightVJet"%(jet,ijet));
            lPtJERUp = getattr(tree,"%sPuppijet%i_pt_JERUp"%(jet,ijet));
            lPtJERDown = getattr(tree,"%sPuppijet%i_pt_JERDown"%(jet,ijet));
            lPtJESUp = getattr(tree,"%sPuppijet%i_pt_JESUp"%(jet,ijet));
            lPtJESDown = getattr(tree,"%sPuppijet%i_pt_JESDown"%(jet,ijet));

            if not isdata:
                puweight = tree.puWeight # corrected from lpuw.GetBinContent(lpuw.FindBin(tree.npu));
                nPuForWeight = min(tree.npu, 49.5)
                puweight_up = lpuw_up.GetBinContent(lpuw_up.FindBin(nPuForWeight))
                puweight_down = lpuw_down.GetBinContent(lpuw_down.FindBin(nPuForWeight))
                if filename in puFiles:
                    puweight = lpuw.GetBinContent(lpuw.FindBin(tree.npu));
                    if puweight<= 0: puweight = 1;
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
            else:
                weight = 1
                weight_triggerUp = 1
                weight_triggerDown = 1
                weight_puUp = 1
                weight_puDown = 1
                weight_mu = 1
                weight_mutriggerUp = 1
                weight_mutriggerDown = 1
                weight_muidUp = 1
                weight_muidDown = 1
                weight_muisoUp = 1
                weight_muisoDown = 1
                weight_mu_puUp = 1
                weight_mu_puDown = 1

            lMass = correct(lEta,lPt,lMsd);
            if lMass <=0: lMass = 0.01
            pRho = 2.*math.log(lMass/lPt);
            if pRho < RHO_LO[jet] or pRho> RHO_HI[jet]: continue

            if sideband:
                lN2DDT40 = lN2 - getN2DDT(lMass,lPt,True)
                if lN2DDT40 < 0: continue

            lN2DDT = lN2 - getN2DDT(lMass,lPt)
            
            pSize = 0.8; 
            if 'CA15' in jet:
                pSize = 1.5;
            pPhi  = 9999;
            pPt   = 9999;
            pMass = 9999;
            if mass > 0 and tree.genVPt >0:
                pPhi = math.fabs(tree.genVPhi - lPhi)
                pPt = math.fabs(tree.genVPt - lPt)/tree.genVPt
                pMass = math.fabs(mass - lMass)/mass
                
            # Single Muon CR
            if selMuon:
                n_MdR0p8_4 = tree.nAK4PuppijetsMPt50dR08_0
                if lPt > PTCUT[jet] and tree.nmuLoose == 1 and tree.neleLoose == 0 and tree.ntau == 0 and tree.vmuoLoose0_pt > MUONPTCUT and abs(tree.vmuoLoose0_eta) < 2.1 and lTight ==1 and abs(math.acos(math.cos(tree.vmuoLoose0_phi - lPhi))) > 2. * ROOT.TMath.Pi() / 3. and n_MdR0p8_4 >= 1:
                    # pass category
                    if lPt > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass.Fill( lMass, lPt, weight_mu )
                        h_pass_msd.Fill( lMass, weight_mu );
                        h_pass_rho.Fill( pRho, lPt, weight_mu );
                        h_pass_msd_PuUp.Fill( lMass, weight_mu_puUp )
                        h_pass_msd_PuDown.Fill( lMass, weight_mu_puDown )
                        h_pass_msd_mutriggerUp.Fill( lMass, weight_mutriggerUp );
                        h_pass_msd_mutriggerDown.Fill( lMass, weight_mutriggerDown );
                        h_pass_msd_muidUp.Fill( lMass, weight_muidUp);
                        h_pass_msd_muidDown.Fill( lMass, weight_muidDown);
                        h_pass_msd_muisoUp.Fill( lMass, weight_muisoUp);
                        h_pass_msd_muisoDown.Fill( lMass, weight_muisoDown);
                    if lPtJESUp > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JESUp.Fill( lMass, lPtJESUp, weight_mu)
                        h_pass_msd_JESUp.Fill( lMass, weight_mu)
                    if lPtJERUp > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JERUp.Fill( lMass, lPtJERUp, weight_mu)
                        h_pass_msd_JERUp.Fill( lMass, weight_mu)
                    if lPtJESDown > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JESDown.Fill( lMass, lPtJESDown, weight_mu)
                        h_pass_msd_JESDown.Fill( lMass, weight_mu)
                    if lPtJERDown > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JERDown.Fill( lMass, lPtJERDown, weight_mu)
                        h_pass_msd_JERDown.Fill( lMass, weight_mu)
                    # fail category
                    if lPt > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail.Fill( lMass, lPt, weight_mu )
                        h_fail_msd.Fill( lMass, weight_mu );
                        h_fail_rho.Fill( pRho, lPt, weight_mu );
                        h_fail_msd_PuUp.Fill( lMass, weight_mu_puUp )
                        h_fail_msd_PuDown.Fill( lMass, weight_mu_puDown )
                        h_fail_msd_mutriggerUp.Fill( lMass, weight_mutriggerUp );
                        h_fail_msd_mutriggerDown.Fill( lMass, weight_mutriggerDown );
                        h_fail_msd_muidUp.Fill( lMass, weight_muidUp);
                        h_fail_msd_muidDown.Fill( lMass, weight_muidDown);
                        h_fail_msd_muisoUp.Fill( lMass,weight_muisoUp);
                        h_fail_msd_muisoDown.Fill( lMass, weight_muisoDown);
                    if lPtJESUp > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JESUp.Fill( lMass, lPtJESUp, weight_mu)
                        h_fail_msd_JESUp.Fill( lMass, weight_mu)
                    if lPtJERUp > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JERUp.Fill( lMass, lPtJERUp, weight_mu)
                        h_fail_msd_JERUp.Fill( lMass, weight_mu)
                    if lPtJESDown > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JESDown.Fill( lMass, lPtJESDown, weight_mu)
                        h_fail_msd_JESDown.Fill( lMass, weight_mu)
                    if lPtJERDown > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JERDown.Fill( lMass, lPtJERDown, weight_mu)
                        h_fail_msd_JERDown.Fill( lMass, weight_mu)
            # Signal Region
            else:
                if tree.neleLoose == 0 and tree.nmuLoose ==0 and tree.ntau==0 and lTight ==1:
                    h_n2.Fill( lMass, lPt, lN2, weight)
                    h_n2ddts.Fill( lMass, lPt, lN2DDT, weight)
                    # pass category
                    if lPt > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass.Fill( lMass, lPt, weight )
                        h_pass_PuUp.Fill( lMass, lPt, weight_puUp )
                        h_pass_triggerUp.Fill( lMass, lPt, weight_triggerUp)
                        h_pass_PuDown.Fill( lMass, lPt, weight_puDown )
                        h_pass_triggerDown.Fill( lMass, lPt, weight_triggerDown)
                        
                        h_pass_msd.Fill( lMass, weight );
                        h_pass_msd_PuUp.Fill( lMass, weight_puUp);
                        h_pass_msd_triggerUp.Fill( lMass, weight_triggerUp)
                        h_pass_msd_PuDown.Fill( lMass, weight_puDown )
                        h_pass_msd_triggerDown.Fill( lMass, weight_triggerDown)

                        h_pass_rho.Fill( pRho, lPt, weight );
                        if pPhi < pSize and pPt < 0.5 and pMass < 0.3:
                            h_pass_msd_matched.Fill( lMass, weight );
                            h_pass_matched.Fill( lMass, lPt, weight );
                        else:
                            h_pass_msd_unmatched.Fill( lMass, weight );
                            h_pass_unmatched.Fill( lMass, lPt, weight );
                    if lPtJESUp > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JESUp.Fill( lMass, lPtJESUp, weight)
                        h_pass_msd_JESUp.Fill( lMass, weight)
                    if lPtJERUp > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JERUp.Fill( lMass, lPtJERUp, weight)
                        h_pass_msd_JERUp.Fill( lMass, weight)
                    if lPtJESDown > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JESDown.Fill( lMass, lPtJESDown, weight)
                        h_pass_msd_JESDown.Fill( lMass, weight)
                    if lPtJERDown > PTCUT[jet] and lN2DDT < N2CUT:
                        h_pass_JERDown.Fill( lMass, lPtJERDown, weight)
                        h_pass_msd_JERDown.Fill( lMass, weight)

                    # fail category
                    if lPt > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail.Fill( lMass, lPt, weight )
                        h_fail_PuUp.Fill( lMass, lPt, weight_puUp )
                        h_fail_triggerUp.Fill( lMass, lPt, weight_triggerUp)
                        h_fail_PuDown.Fill( lMass, lPt, weight_puDown )
                        h_fail_triggerDown.Fill( lMass, lPt, weight_triggerDown)
                        
                        h_fail_msd.Fill( lMass, weight );
                        h_fail_msd_PuUp.Fill( lMass, weight_puUp);
                        h_fail_msd_triggerUp.Fill( lMass, weight_triggerUp)
                        h_fail_msd_PuDown.Fill( lMass, weight_puDown )
                        h_fail_msd_triggerDown.Fill( lMass, weight_triggerDown)

                        h_fail_rho.Fill( pRho, lPt, weight );
                        if pPhi < pSize and pPt < 0.5 and pMass < 0.3:
                            h_fail_msd_matched.Fill( lMass, weight );
                            h_fail_matched.Fill( lMass, lPt, weight );
                        else:
                            h_fail_msd_unmatched.Fill( lMass, weight );	
                            h_fail_unmatched.Fill( lMass, lPt, weight );
                    if lPtJESUp > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JESUp.Fill( lMass, lPtJESUp, weight)
                        h_fail_msd_JESUp.Fill( lMass, weight)
                    if lPtJERUp > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JERUp.Fill( lMass, lPtJERUp, weight)
                        h_fail_msd_JERUp.Fill( lMass, weight)
                    if lPtJESDown > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JESDown.Fill( lMass, lPtJESDown, weight)
                        h_fail_msd_JESDown.Fill( lMass, weight)
                    if lPtJERDown > PTCUT[jet] and lN2DDT > N2CUT:
                        h_fail_JERDown.Fill( lMass, lPtJERDown, weight)
                        h_fail_msd_JERDown.Fill( lMass, weight)

    hists_out = [];
    if not selMuon:
        hists_out.append( h_n2 );
        hists_out.append( h_n2ddts );
        hists_out.append( h_pass_matched );
        hists_out.append( h_pass_unmatched );
        hists_out.append( h_fail_matched );
        hists_out.append( h_fail_unmatched );
    else:
        hists_out.append( h_pass_msd_mutriggerUp );
        hists_out.append( h_pass_msd_mutriggerDown );
        hists_out.append( h_pass_msd_muidUp );
        hists_out.append( h_pass_msd_muidDown );
        hists_out.append( h_pass_msd_muisoUp );
        hists_out.append( h_pass_msd_muisoDown );
        hists_out.append( h_fail_msd_mutriggerUp );
        hists_out.append( h_fail_msd_mutriggerDown );
        hists_out.append( h_fail_msd_muidUp );
        hists_out.append( h_fail_msd_muidDown );
        hists_out.append( h_fail_msd_muisoUp );
        hists_out.append( h_fail_msd_muisoDown );
    hists_out.append( h_pass );
    hists_out.append( h_fail );
    hists_out.append( h_pass_PuUp );
    hists_out.append( h_pass_triggerUp );
    hists_out.append( h_pass_JESUp );
    hists_out.append( h_pass_JERUp );
    hists_out.append( h_pass_PuDown );
    hists_out.append( h_pass_triggerDown );
    hists_out.append( h_pass_JESDown );
    hists_out.append( h_pass_JERDown );
    hists_out.append( h_fail_PuUp );
    hists_out.append( h_fail_triggerUp );
    hists_out.append( h_fail_JESUp );
    hists_out.append( h_fail_JERUp );
    hists_out.append( h_fail_PuDown );
    hists_out.append( h_fail_triggerDown );
    hists_out.append( h_fail_JESDown );
    hists_out.append( h_fail_JERDown );
    hists_out.append( h_pass_rho );
    hists_out.append( h_fail_rho );
        
    hists_out.append( h_pass_msd );
    hists_out.append( h_pass_msd_matched );
    hists_out.append( h_pass_msd_unmatched );
    hists_out.append( h_pass_msd_PuUp );
    hists_out.append( h_pass_msd_triggerUp );
    hists_out.append( h_pass_msd_JESUp );
    hists_out.append( h_pass_msd_JERUp );
    hists_out.append( h_pass_msd_PuDown );
    hists_out.append( h_pass_msd_triggerDown );
    hists_out.append( h_pass_msd_JESDown );
    hists_out.append( h_pass_msd_JERDown );
    hists_out.append( h_fail_msd );
    hists_out.append( h_fail_msd_matched );
    hists_out.append( h_fail_msd_unmatched );
    hists_out.append( h_fail_msd_PuUp );
    hists_out.append( h_fail_msd_triggerUp );
    hists_out.append( h_fail_msd_JESUp );
    hists_out.append( h_fail_msd_JERUp );
    hists_out.append( h_fail_msd_PuDown );
    hists_out.append( h_fail_msd_triggerDown );
    hists_out.append( h_fail_msd_JESDown );
    hists_out.append( h_fail_msd_JERDown );

    os.system("mkdir -p histInputs/%s/"%out)
    fOut=ROOT.TFile.Open('histInputs/'+out+'/'+filename+str(isf)+'.root','RECREATE')
    for h in hists_out: h.Write()
    fOut.Close()

def main(options,args):
    setupCorr()
    global ftrans_h2ddt
    global ftrans_h2ddt40
    global ftrig_eff

    odir = options.odir
    if options.jet=='CA15':
        #ftrans_h2ddt = setuph2ddt("data/OutputCA152017v13.root")
        ftrans_h2ddt = setuph2ddt(options.ddt,options.iddt)
        if options.nob:
            ftrig_eff = setupTrig('data/2018numCA15/singlemu_nob.root','dataMujmsd_jpt_bin',
                                  'data/2018denomCA15/singlemu_nob.root','dataMujmsd_jpt_bin')
        else:
            ftrig_eff = setupTrig('data/2018numCA15/singlemu.root','dataMujmsd_jpt_bin',
                                  'data/2018denomCA15/singlemu.root','dataMujmsd_jpt_bin')
        odir = odir.replace('sel8','sel15')
    else:
        #ftrans_h2ddt = setuph2ddt("data/OutputAK82017v13_scale1fbless1.root")
        ftrans_h2ddt = setuph2ddt(options.ddt,options.iddt)            
        if options.nob:
            ftrig_eff = setupTrig('data/2018numAK8/singlemu_nob.root','dataMujmsd_jpt_bin',
                                  'data/2018denomAK8/singlemu_nob.root','dataMujmsd_jpt_bin')
        else:
            ftrig_eff = setupTrig('data/2018numAK8/singlemu.root','dataMujmsd_jpt_bin',
                                  'data/2018denomAK8/singlemu.root','dataMujmsd_jpt_bin')

    if options.sideband:
        f_h2ddt40 = TFile(options.sideband)
        print("Opened file %s"%options.sideband)
        if 'Rho2D' in options.isideband:
            ftrans_h2ddt40 = f_h2ddt40.Get("Rho2D")
        else:
            lHTmp40 = f_h2ddt40.Get(options.isideband)
            ftrans_h2ddt40 = getDDT(lHTmp40,iWP)
        ftrans_h2ddt40.SetDirectory(0)
        f_h2ddt40.Close()

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

    global MASSES
    MASSES = massIterable(options.masses)

    createHistTasks(options)

if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option("--lumi", dest="lumi", type=float, default = 37.1,help="luminosity", metavar="lumi")
    parser.add_option('-o','--odir', dest='odir', default = '2017sel8pt475409',help='directory to write plots', metavar='odir')
    parser.add_option('--jobs', dest='jobs', default=20, type=int, help='#of jobs to process in parallel the trees [default: %default]')
    parser.add_option('--isMc', action='store_true', dest='isMc', default=False, help='run on mc process')
    parser.add_option('--isQCD', action='store_true', dest='isQCD', default=False, help='run on QCD process')
    parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False, help='run on muon CR')
    parser.add_option('--isData', action='store_true', dest='isData', default=False, help='run on data')
    parser.add_option('--isSig', action='store_true', dest='isSig', default=False, help='run on signals')
    parser.add_option('--masses',dest='masses', default='50,75,100,115,125,150,175,200,225,250,300,350,400,450,500',type="string", help="masses of resonance")
    parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
    parser.add_option('--ijet', dest='ijet', type=int, default=0, help='leading jet')
    parser.add_option('--wp', dest='wp', default=5, help='N2 working point')
    parser.add_option('--nob', action='store_true', dest='nob', default=False, help='no Run B')
    parser.add_option("--ddt", type=str, default='data/GridOutput_v13.root', help="ddt")
    parser.add_option("--iddt", type=str, default='Rho2D', help="iddt")
    parser.add_option("--sideband",   type=str, default=None, help="sideband")
    parser.add_option("--isideband", type=str, default='Rho2D', help="isideband")
    parser.add_option('--blinded', action='store_true', dest='blinded', default=False, help='run 10th')

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



