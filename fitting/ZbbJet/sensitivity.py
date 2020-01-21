#!/usr/bin/env python

import ROOT as r,sys,math,array,os
from optparse import OptionParser
from operator import add
import math
import sys,os,copy
import datetime


# including other directories
sys.path.insert(0, '../.')
from tools import *

##-------------------------------------------------------------------------------------
def exec_me(command, outf, dryRun):
    print command
    outf.write("%s\n"%command)
    if not dryRun:
        os.system(command)

def getRangeStr(pams):
    slist=[]
    for p in pams:
        s=p['name']+"="+p['min']+","+p['max']
        slist.append(s)
    return ":".join(slist)
def getSetPamStr(pams):
    slist=[]
    for p in pams:
        slist.append( p['name']+"="+p['init'])
    return ",".join(slist)
def getSignalPOIs(pams):
    slist=[]
    for p in pams:
        if p['ToFit']:
            slist.append(p['name'])
    return ",".join(slist)

        
def GOF(ifile,ntoys,lumi,dryRun,freezePams=[],isData=False):

    outpath = os.path.dirname(ifile)+"/GOF/"
    outf  = open(ifile.replace(".root","_report.txt"),"a")

    if not os.path.exists(outpath):
        exec_me("mkdir -p %s"%(outpath),outf, dryRun)
    gof_KS = 'python limit.py -M GoodnessOfFit -d %s --lumi %s --algo KS         -t %s -o %s '%(ifile,lumi,ntoys,outpath)
    gof_Sat= 'python limit.py -M GoodnessOfFit -d %s --lumi %s --algo saturated  -t %s -o %s '%(ifile,lumi,ntoys,outpath)
   
    if isData:
        gof_KS+= " --data " 
        gof_Sat+= " --data " 
    
    if len(freezePams)>0:
        gof_KS+=  " --freezeNuisances "  +",".join(freezePams)
        gof_Sat+= " --freezeNuisances "  +",".join(freezePams)
    exec_me(gof_KS,outf, dryRun)
    exec_me(gof_Sat,outf, dryRun)


def MLfit(ifile,mode,signalPOI,POIs,freezePams,lumi,suffix,justPlot,dryRun,fixTF=False,isData=False):
    basedir = os.path.dirname(ifile)
 
    now = datetime.datetime.now()
    outf  = open(ifile.replace(".root","_report.txt"),"a")
    outf.write("=======sensitivity.py==========\n")
    outf.write("===ifile = %s ==========\n"%ifile)
    outf.write("===odir  = %s ==========\n"%odir)
    outf.write("===mode  = MLfit,%s ==========\n"%mode)
    outf.write("===time  = %s ==========\n"%now.strftime("%Y-%m-%d %H:%M"))
    print "======= sensitivity.py=========="
    print "===  ifile   = %s =========="%ifile
    print "===  odir    = %s =========="%odir
    print "===  mode    = MLfit,%s =========="%mode
    print "===  time    = %s =========="%now.strftime("%Y-%m-%d %H:%M")
    print "===  logfile = %s =========="%ifile.replace(".root","_report.txt")
   
    MLfit_base = 'combine -M FitDiagnostics %s  --robustFit 1 --setRobustFitAlgo Minuit2,Migrad --saveNormalizations  --setRobustFitTolerance  0.0001 --setRobustFitStrategy 2 --saveOverallShapes --saveShapes --saveWithUncertainties --saveWorkspace'%ifile
    MLfit_base+= " --setParameterRanges "+getRangeStr(POIs)
    #MLfit_base+= " --redefineSignalPOIs %s "%signalPOI
    MLfit_base+= " --redefineSignalPOIs "+getSignalPOIs(POIs)
    if fixTF:
        TFpam_list = ['p0r1','p0r2','p1r0','p1r1','p1r2']
        TFpams = [
            {'name':'p0r1','init':'1'},
            {'name':'p0r2','init':'1'},
            {'name':'p1r0','init':'1'},
            {'name':'p1r1','init':'1'},
            {'name':'p1r2','init':'1'}
        ]
        MLfit_base+= " --freezeParameters "+",".join(TFpam_list)
        MLfit_base+= " --setParameters "+getSetPamStr(TFpams)
    
    for pam in POIs:
        if 'freeze' in pam.keys() and pam['freeze']:
            freezePams.append(pam['name'])

    if len(freezePams)>0:
        MLfit_base+= " --freezeParameters "  +",".join(freezePams)
    MLfit_base+= " --setParameters "+getSetPamStr(POIs)

    outpath = basedir+"/mlfit/"
    if not justPlot:
        exec_me(MLfit_base,outf, dryRun)
        if not os.path.exists(outpath):
            exec_me("mkdir -p %s"%(outpath),outf, dryRun)
        exec_me("mv fitDiagnostics.root %s/mlfit_%s.root"%(basedir,suffix.replace(":","_")),outf, dryRun)
        exec_me("mv higgsCombineTest.*.root %s/"%(basedir),outf, dryRun)
    #fitTypes = ['prefit','fit_b','fit_s']
    fitTypes = ['fit_b','fit_s']
    for fit in fitTypes:
        fitoutpath = basedir+"/mlfit/%s/"%fit
        if not os.path.exists(fitoutpath):
            exec_me("mkdir -p %s"%(fitoutpath),outf, dryRun)
        plot = 'python validateMLFit.py -i %s -o %s --fit %s --lumi %s --suffix %s '%(basedir,fitoutpath,fit,lumi,suffix)
        if isData:
            plot += ' --data '
        exec_me(plot,outf, dryRun)
        for pf in ['pass','fail']:
            png_in = ' %s/mlfit_%s_cat*_%s.png'%(fitoutpath,pf,fit)
            pdf_out = ' %s/mlfit_%s_all_%s.pdf'%(fitoutpath,pf,fit)
            merge = 'montage -density 500 -tile 3x0 -geometry 800x800 -border 10 %s  %s'%(png_in,pdf_out)
            exec_me(merge,outf, dryRun)
            rmpng = 'rm %s '%(png_in)
            exec_me(rmpng,outf, dryRun)


def MultDimFit(ifile,POIs,freezePams,isAsimov,tag):
    muldimfit_base = "combine -M MultiDimFit -d %s "%(ifile)
    #muldimfit_base+= " --setRobustFitTolerance  0.0001 --setRobustFitStrategy 2 --algo singles --robustFit 1  --setRobustFitAlgo Minuit2,Migrad --saveWorkspace --saveFitResult"
    muldimfit_base+= " --setRobustFitTolerance  0.01 --setRobustFitStrategy 2 --algo singles --robustFit 1  --setRobustFitAlgo Minuit2,Migrad --saveWorkspace --saveFitResult"
    muldimfit_base+= " --setParameterRanges "+getRangeStr(POIs)
    muldimfit_base+= " --setParameters "     +getSetPamStr(POIs)
    muldimfit_base+= " --redefineSignalPOIs "+getSignalPOIs(POIs)
    if tag is not '':
        muldimfit_base += ' -n %s '%tag
    
    for pam in POIs:
        if 'freeze' in pam.keys() and pam['freeze']:
            freezePams.append(pam['name'])
    if len(freezePams)>0:
        muldimfit_base+= " --freezeParameters "  +",".join(freezePams)
    if isAsimov:
        muldimfit_base+=  " -t -1 --toysFreq "
        #muldimfit_base+=  " -t -1 "
    return muldimfit_base
 
def Significance(ifile,signalPOI,POIs,freezePams,isAsimov):
    sig_base = "combine -M Significance --signif %s "%(ifile)

    sig_base += " --redefineSignalPOIs %s"%signalPOI
    sig_base+= " --setParameterRanges "+getRangeStr(POIs)
    sig_base+= " --setParameters "     +getSetPamStr(POIs)
    
    if len(freezePams)>0:
        sig_base+= " --freezeParameters "  +",".join(freezePams)
    if isAsimov:
        #sig_base+=  " -t -1 --toysFreq "
        sig_base+=  " -t -1  "
    return sig_base
 
def UpperLimit(ifile,signalPOI,POIs,freezePams,isAsimov):
    UL_base = "combine -M AsymptoticLimits  %s "%(ifile)
    UL_base += " --redefineSignalPOIs %s"%signalPOI
    UL_base+= " --setParameterRanges "+getRangeStr(POIs)
    
    UL_base+= " --setParameters "     +getSetPamStr(POIs)
    #UL_base+= "  --rAbsAcc 0.5"    
    if len(freezePams)>0:
        UL_base+= " --freezeParameters "  +",".join(freezePams)
    if isAsimov:
        #UL_base+=  " -t -1 --toysFreq "
        UL_base+=  " -t -1 "
    return UL_base
  


def main(ifile,odir,mode,POIs,freezePams,isAsimov,dryRun,tag=''):
    ifileName = ifile.split("/")[-1]
    if odir=="":
        odir = os.path.dirname(ifile) 
        #print "using default output dir:", odir
    tfile = r.TFile.Open(ifile)

    now = datetime.datetime.now()
    outf  = open(ifile.replace(".root","_report.txt"),"a")
    outf.write("=======sensitivity.py==========\n")
    outf.write("===ifile = %s ==========\n"%ifile)
    outf.write("===odir  = %s ==========\n"%odir)
    outf.write("===mode  = %s ==========\n"%mode)
    outf.write("===time  = %s ==========\n"%now.strftime("%Y-%m-%d %H:%M"))
    print "======= sensitivity.py=========="
    print "===  ifile = %s =========="%ifile
    print "===  odir  = %s =========="%odir
    print "===  mode  = %s =========="%mode
    print "===  time  = %s =========="%now.strftime("%Y-%m-%d %H:%M")
    print "===  logfile = %s =========="%ifile.replace(".root","_report.txt")


    if mode =="norm":
        cmd_floatRZ         = MultDimFit(ifile,POIs,freezePams,isAsimov,tag) 
        cmd_floatZ_fixR     = MultDimFit(ifile,POIs,freezePams+["r"],isAsimov,tag) 
        cmd_floatR_fixZ     = MultDimFit(ifile,POIs,freezePams+["r_z"],isAsimov,tag) 
        if 'blind' in ifile:
            cmds = [
                cmd_floatZ_fixR,
            ]
        else:
            cmds = [
                #cmd_floatR_fixZ,
                cmd_floatRZ
            ]
        for cmd in cmds:
            exec_me(cmd, outf,dryRun)
            exec_me('mv multidimfit%s.root %s/'%(tag,odir),outf,dryRun)
            exec_me('mv multidimfit%s.root %s/'%(tag,odir),outf,dryRun)

        if not 'blind' in ifile:
            cmd_floatR_fixZ     = Significance(ifile,'r'  ,POIs,freezePams+["r_z"],isAsimov) 
            cmd_floatRZ         = Significance(ifile,'r'  ,POIs,freezePams        ,isAsimov) 
            cmds = [           
                #cmd_floatR_fixZ       ,
                #cmd_floatRZ
            ]
            for cmd in cmds:
                exec_me(cmd, outf,dryRun)
            #######upper limit####
            POI_UL = copy.deepcopy(POIs)
            for POI in POI_UL:
              if POI['name'] == 'r':
                 POI['init'] = '0'         ## Set POI to 0

            cmd_floatR_fixZ     = UpperLimit(ifile,'r'  ,POI_UL,freezePams+["r_z"],isAsimov) 
            cmd_floatRZ         = UpperLimit(ifile,'r'  ,POI_UL,freezePams,isAsimov) 
            cmds = [           
                 #cmd_floatR_fixZ       , 
                 #cmd_floatRZ
            ]
            for cmd in cmds:
                exec_me(cmd, outf,dryRun)

    if mode =="noMuonCR":
        if not "tqqeffSF" in freezePams: freezePams.append("tqqeffSF")
        if not "tqqnormSF" in freezePams: freezePams.append("tqqnormSF")
        if not isAsimov:
            #cmd_floatRZ         = MultDimFit(ifile,POIs,freezePams,isAsimov) 
            cmd_floatZ_fixR     = MultDimFit(ifile,POIs,freezePams+["r"],isAsimov) 
            #cmd_floatR_fixZ     = MultDimFit(ifile,POIs,freezePams+["r_z"],isAsimov) 
            cmds = [cmd_floatZ_fixR]
            for cmd in cmds:
                exec_me(cmd, outf,dryRun)
                pass
        cmd_sigR        = Significance(ifile,'r'  ,POIs,freezePams,isAsimov) 
        cmd_sigZ        = Significance(ifile,'r_z',POIs,freezePams,isAsimov) 
        cmds = [cmd_sigR,cmd_sigZ]
        for cmd in cmds:
            exec_me(cmd, outf,dryRun)
            pass


#Observed
#combine -M Significance --signif card_rhalphabet_muonCR_floatZ.root --redefineSignalPOIs r --setParameterRanges r=-5,5:r_z=-2,2 --freezeParameter r_z
#Expected
#combine -M Significance --signif card_rhalphabet_muonCR_floatZ.root --redefineSignalPOIs r -t -1  --toysFreq  --expectSignal 1 --setParameterRanges r=-5,5:r_z=-2,2 
#combine -M Significance --signif card_rhalphabet_muonCR_floatZ.root --redefineSignalPOIs r -t -1  --toysFreq  --expectSignal 1 --setParameterRanges r=-5,5     --freezeParameter r_z

def getYear(ifile):
    lumi=41.1
    if '2016' in ifile:
        lumi=35.5   
        suffix = '2016'
    elif '2017' in ifile:
        lumi=41.5 
        suffix = '2017'
    elif '2018' in ifile:
        lumi=59.2 
        suffix = '2018'
    elif 'comb161718' in ifile or "card_rhalphabet_all_floatZ.root" in ifile:
        lumi=136.2
        suffix = '2016:2017:2018'
    elif 'comb1718' in ifile:
        lumi=100
        suffix = '2017:2018'
    else:
        suffix = ''
    return lumi,suffix


def rzptfit(): 
    pam_r         = {"name":"r"           ,"min":"-20","max":"20" ,'init':"1"   ,'freeze':False,'ToFit':True}
    POI_rz = [
        {"name":"rz_cat1"     ,"min":"-5","max":"5"    ,'init':"1"   ,'freeze':False,'ToFit':True},
        {"name":"rz_cat2"     ,"min":"-5","max":"5"    ,'init':"1"   ,'freeze':False,'ToFit':True},
        {"name":"rz_cat3"     ,"min":"-5","max":"5"    ,'init':"1"   ,'freeze':False,'ToFit':True},
        {"name":"rz_cat4"     ,"min":"-5","max":"5"    ,'init':"1"   ,'freeze':False,'ToFit':True},
        {"name":"rz_cat5"     ,"min":"-5","max":"5"    ,'init':"1"   ,'freeze':False,'ToFit':True},
        {"name":"rz_cat6"     ,"min":"-5","max":"5"    ,'init':"1"   ,'freeze':False,'ToFit':True},
        pam_r
    ]
    ifiles = [
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco_minlo/2016/card_rhalphabet_rz_ptCats_floatZ.root'},
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco_minlo/2017/card_rhalphabet_rz_ptCats_floatZ.root'},
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco_minlo/2018/card_rhalphabet_rz_ptCats_floatZ.root'},
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco_minlo/comb/card_rhalphabet_rz_ptCats_floatZ.root'},
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco/2016/card_rhalphabet_rz_ptCats_floatZ.root'},
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco/2017/card_rhalphabet_rz_ptCats_floatZ.root'},
        {'POI':POI_rz,'tag':'rzpt','card':'cards/fdeco/comb/card_rhalphabet_rz_ptCats_floatZ.root'},
    ]
    for ifile in ifiles:
        freezePams = []   #extra pams to freeze
        mode ='norm'
        fixTF= False
        POI = ifile['POI'] 

        isAsimov= False
        main(ifile['card'],odir,mode,POI,freezePams,isAsimov,dryRun,ifile['tag'])

def genptfit(): 
    pam_rxHbb     = {"name":"r_xHbb"      ,"min":"-20","max":"20" ,'init':"1"   ,'freeze':True,'ToFit':False}
    pam_rz        = {"name":"r_z"         ,"min":"0","max":"3"    ,'init':"1"   ,'freeze':True,'ToFit':False}
    pam_r         = {"name":"r"           ,"min":"-20","max":"20" ,'init':"1"   ,'freeze':False,'ToFit':True}

    ##[0, 200, 350, 600, 10000]
    ## stxs real:  [0, 200, 300, 450, 650, inf] 
    POI_genpt_stxs = [
        {"name":"r_genpt1"    ,"min":"-20","max":"20" ,'init':"0"  ,'freeze':True,'ToFit':False},
        {"name":"r_genpt2"    ,"min":"-40","max":"40" ,'init':"1"  ,'freeze':True,'ToFit':False},
        {"name":"r_genpt3"    ,"min":"-30","max":"30" ,'init':"1"  ,'freeze':False,'ToFit':True},
        {"name":"r_genpt4"    ,"min":"-50","max":"50" ,'init':"1"  ,'freeze':False,'ToFit':True},
        {"name":"r_genpt5"    ,"min":"-50","max":"50" ,'init':"1"  ,'freeze':False,'ToFit':True},
        pam_rz,pam_rxHbb
    ]
    ###[350,450, 500, 550, 600, 675, 800, 10000]
    POI_genpt_6bin=[
     #{"name":"r_genpt1"    ,"min":"-20","max":"20" ,'init':"1",'freeze':True,'ToFit':False},
     {"name":"r_genpt1"    ,"min":"-20","max":"20" ,'init':"1",'freeze':False,'ToFit':True}, ## fit underflow
     {"name":"r_genpt23"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     {"name":"r_genpt45"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     {"name":"r_genpt67"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     #{"name":"r_genpt2"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     #{"name":"r_genpt3"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     #{"name":"r_genpt4"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     #{"name":"r_genpt5"   ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},
     #{"name":"r_genpt67"   ,"min":"-60","max":"60" ,'init':"1",'freeze':False,'ToFit':True},
     pam_rz,pam_rxHbb
    ]

    #[0,350, 450, 10000]
    POI_genpt_450 =[
        {"name":"r_genpt1"    ,"min":"-20","max":"20" ,'init':"0",'freeze':True,'ToFit':False},
        {"name":"r_genpt2"    ,"min":"-40","max":"40" ,'init':"1",'freeze':False,'ToFit':True},     ## fit underflow
        #{"name":"r_genpt2"    ,"min":"-40","max":"40" ,'init':"1",'freeze':True,'ToFit':False},
        {"name":"r_genpt3"    ,"min":"-30","max":"30" ,'init':"1",'freeze':False,'ToFit':True},
        pam_rz,pam_rxHbb
    ]
    POI_norm = [pam_rz,pam_r]

    ifiles =[
        #### inclusive binning
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450_minlo/2016/card_rhalphabet_all_2016_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450_minlo/2017/card_rhalphabet_all_2017_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450_minlo/2018/card_rhalphabet_all_2018_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'_Ubin','card':'cards/genpt450_minlo/comb/card_rhalphabet_all_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450/2016/card_rhalphabet_all_2016_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450/2017/card_rhalphabet_all_2017_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450/2018/card_rhalphabet_all_2018_floatZ_genpt.root'},
        #{'POI':POI_genpt_450,'tag':'','card':'cards/genpt450/comb/card_rhalphabet_all_floatZ_genpt.root'},
        #### STXS binning
        #{'POI':POI_genpt_stxs,'tag':'_fixUbin','card':'cards/genpt_stxs_minlo/2016/card_rhalphabet_all_2016_floatZ_genpt.root'},
        #{'POI':POI_genpt_stxs,'tag':'_fixUbin','card':'cards/genpt_stxs_minlo/2017/card_rhalphabet_all_2017_floatZ_genpt.root'},
        #{'POI':POI_genpt_stxs,'tag':'_fixUbin','card':'cards/genpt_stxs_minlo/2018/card_rhalphabet_all_2018_floatZ_genpt.root'},
        {'POI':POI_genpt_stxs,'tag':'_UbinSnap','card':'cards/genpt_stxs_minlo/comb/card_rhalphabet_all_floatZ_genpt.root'},
        #{'POI':POI_genpt_stxs,'tag':'','card':'cards/genpt_stxs/2016/card_rhalphabet_all_2016_floatZ_genpt.root'},
        #{'POI':POI_genpt_stxs,'tag':'','card':'cards/genpt_stxs/2017/card_rhalphabet_all_2017_floatZ_genpt.root'},
        #{'POI':POI_genpt_stxs,'tag':'','card':'cards/genpt_stxs/2018/card_rhalphabet_all_2018_floatZ_genpt.root'},
        #{'POI':POI_genpt_stxs,'tag':'','card':'cards/genpt_stxs/comb/card_rhalphabet_all_floatZ_genpt.root'},

        ##### fine binning
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6_minlo/2016/card_rhalphabet_all_2016_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6_minlo/2017/card_rhalphabet_all_2017_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6_minlo/2018/card_rhalphabet_all_2018_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'test','card':'cards/genpt6_minlo/2018/card_rhalphabet_all_2018_floatZ_genpt_v2.root'},
        #{'POI':POI_genpt_6bin,'tag':'_uflow','card':'cards/genpt6_minlo/comb/card_rhalphabet_all_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'_uflow','card':'ddb_comb_Jun24/comb161718/MiNLO_genpt_fine_SFJul8/card_rhalphabet_all_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'_uflow','card':'ddb_comb_Jun24/comb161718/Pow_genpt_fine_SFJul8/card_rhalphabet_all_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'_fine','card':'cards/genpt6_minlo/comb/card_rhalphabet_all_floatZ_genpt_v2.root'},
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6/2016/card_rhalphabet_all_2016_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6/2017/card_rhalphabet_all_2017_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6/2018/card_rhalphabet_all_2018_floatZ_genpt.root'},
        #{'POI':POI_genpt_6bin,'tag':'','card':'cards/genpt6/comb/card_rhalphabet_all_floatZ_genpt.root'},

        ### nominal x-check
        #{'POI':POI_norm,'card':'cards/genpt450_minlo/2016/card_rhalphabet_all_2016_floatZ.root'},
        #{'POI':POI_norm,'card':'cards/genpt450_minlo/2017/card_rhalphabet_all_2017_floatZ.root'},
        #{'POI':POI_norm,'card':'cards/genpt450_minlo/2018/card_rhalphabet_all_2018_floatZ_genptmerged.root'},
    ]

    for ifile in ifiles:
        freezePams = []   #extra pams to freeze
        mode ='norm'
        fixTF= False
        POI = ifile['POI'] 

        isAsimov= False
        main(ifile['card'],odir,mode,POI,freezePams,isAsimov,dryRun,ifile['tag'])
        lumi,suffix = getYear(ifile['card'])

        poi = 'r_genpt23'
        #MLfit(ifile['card'],mode,signalPOI=poi,POIs=POI,freezePams=[],lumi=lumi,suffix=suffix ,justPlot= options.justPlot,dryRun = dryRun,fixTF=fixTF,isData=True)
	
##-------------------------------------------------------------------------------------
if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-i', dest='ifile', default='card_rhalphabet_muonCR_floatZ.root', help='datacard root')
    parser.add_option('-o','--odir', dest='odir', default = '',help='directory to write cards', metavar='odir')
    parser.add_option('-m','--mode', dest='mode', default = 'norm',help='setting of pams', metavar='mode')
    parser.add_option('--dryRun', dest='dryRun', action='store_true',default=False,help='dryRun', metavar='dryRun')
    parser.add_option("--lumi", dest="lumi", default=41.1, type="float", help="luminosity", metavar="lumi")
    parser.add_option('--justPlot', dest='justPlot', action='store_true',default=False,help='just plot from mlfit.root', metavar='justPlot')

    (options, args) = parser.parse_args()

    dryRun = options.dryRun
    mode = 'noMuonCR'
    odir =""

    pam_rz        = {"name":"r_z"         ,"min":"0","max":"3"    ,'init':"1"   ,'freeze':True,'ToFit':False}
    pam_r         = {"name":"r"           ,"min":"-20","max":"20" ,'init':"1"   ,'freeze':False,'ToFit':True}
    pam_r_minlo         = {"name":"r"           ,"min":"-20","max":"20" ,'init':"1"   ,'freeze':False,'ToFit':True}
    pam_vbf = {"name":"r_vbf","min":"-50","max":"50" ,'init':"1"}
    POI_z    = [pam_r,pam_rz]
    POI_z_minlo    = [pam_r_minlo,pam_rz]
    POI_vbf  = [pam_r,pam_vbf]

    genptfit()
    #rzptfit()
    ########### DDB MC #######
    mode='noMuonCR'
    ifiles = [
        #"ddb_Feb5/ddb_L/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M2/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"Hbb_MC_2017/mcOnly/card_rhalphabet_muonCR_floatZ.root",
        #"2ndjet/leading_pow/mcOnly/card_rhalphabet_all_leadJet_floatZ.root",
        #"ddb_Feb5/ddb_T/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_T2/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_L_pt1200/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M2_pt1200/qcdMC_TF21/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M2_pt1200/msd47_TF21_rescaled/card_rhalphabet_all_floatZ.root",
        #"ddb_Mar7/ddb_M2/msd47_TF21_rescaled/card_rhalphabet_all_floatZ.root",
        #"ddb_Mar7/ddb_M2/beff0/card_rhalphabet_all_floatZ.root",
        ## 2017 MC
        #"ddb_Mar19/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root",
        #'ddb_Mar19/ddb_M2/msd47_TF21_fakeLooseWZ/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2/msd54_TF21_fakeQCD/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2/msd54_TF21_poissonQCD/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2/msd47_TF21_newQCDeff/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2/msd47_TF21_muonCR_fakeQCD/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr3/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr4/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr8/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2/msd47_TF22/card_rhalphabet_all_floatZ.root',
        ## 2017 10% dataset
        #'ddb_Mar19/ddb_M2_p10/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2_p10/msd47_TF21_blind/card_rhalphabet_all_floatZ.root',
        #'ddb_Mar19/ddb_M2_p10/msd47_TF21_muonCR_blind/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr3/ddb_M2_p10/msd47_TF21_muonCR_blind/card_rhalphabet_all_floatZ.root',

        #'ddb_Apr17/ddb_M2_full/msd47_TF21_muonCR_blind/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2_full/msd47_TF21_pbeff_blind/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2_full/msd47_TF22_qcdTF_blind/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2_full/msd47_TF21_qcdTF_blind/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2_full/msd47_TF22_muonCR_blind/card_rhalphabet_all_floatZ.root'

        #'ddb2016_May21_v2/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2_full/msd47_TF31_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2_full/msd47_TF31_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2_full/msd47_TF31_blind_WZp85/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2_full/msd47_TF31_blind_WZp8/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2_full/msd47_TF31_blind_WZp7/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May20/ddb_M2_full/msd47_TF21_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May20/ddb_M2_full/msd47_TF21_looserWZ_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May20/ddb_M2_full/msd47_TF21_muonCR_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2_full/msd47_TF21_blind/card_rhalphabet_all_floatZ.root'
        #'ddb2018_Apr17/ddb_M2_full/msd47_TF22_muonCR_blind/card_rhalphabet_all_floatZ.root'
        #### 2016 MC #####
        #'ddb2016_Apr28/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2/msd47_TF31/card_rhalphabet_all_floatZ.root',
        #### 2018 MC #####
        #'ddb2018_Mar19/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Mar19/ddb_M2/msd47_TF21_fakeQCD/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2/msd47_TF22_smoothQCD/card_rhalphabet_all_floatZ.root' 
        #'ddb2018_Apr17/ddb_M2/msd47_TF22/card_rhalphabet_all_floatZ.root' 
        #'ddb_Apr17/ddb_M2/msd47_TF22/card_rhalphabet_all_floatZ.root' ,
        #'ddb2016_May21_v2/ddb_M2/msd47_TF31/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2_full/msd47_TF22_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2_full/msd47_TF22_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May21_v2/ddb_M2_full/msd47_TF31_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May28/ddb_M2/msd47_TF31_beffp7/card_rhalphabet_all_floatZ.root'
        #'ddb2016_May28/ddb_M2_full/msd47_TF31_beffp7_blind/card_rhalphabet_all_floatZ.root'
        #'ddb2016_May28/ddb_M2_full/msd47_TF31_muonCR_beffp7_blind/card_rhalphabet_all_floatZ.root'
        #'ddb_Apr17/ddb_M2_full/msd47_TF22_beffp7_blind/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2_full/msd47_TF22_beffp7_blind/card_rhalphabet_all_floatZ.root'
        #'ddb2016_May28_v2/ddb_M2_full/msd47_TF31_beffp68_blind/card_rhalphabet_all_floatZ.root'


        #'ddb2016_May28_v2/ddb_T2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May28_v2/ddb_T2/TF22_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May28_v2/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May28_v2/ddb_M2/TF22_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb_Apr17/ddb_M2/TF22_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Apr17/ddb_M2/TF22_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Jun6/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root ',
        #'ddb2018_Jun6_v2/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root ',
        #'ddb2018_Jun6_v2/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb_Jun6_v2/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2018_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_SFJun4/card_rhalphabet_all_floatZ.root',
        #'ddb2016_May28_v2/ddb_M2_full/TF22_blind_muonCR_SFJun4/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2018_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_SFJun4_Jun8/card_rhalphabet_all_2018_floatZ.root',


        #'ddb_Jun6_v2/ddb_M2_full/expTF44_blind_muonCR_SFJun4_Jun8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun6_v2/ddb_M2_full/expTF22_blind_muonCR_SFJun4_Jun8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_SFJun4_Jun8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun6_v2/ddb_M2_full/TF44_blind_muonCR_SFJun4_Jun8/card_rhalphabet_all_2017_floatZ.root',

        #'ddb2018_Jun10/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_Jun10/ddb_M2_full/TF22_blind_SFJun4/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun12/ddb_M2_full/TF22_blind_muonCR_SFJun4/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun16/ddb_M2_full/TF22_blind_muonCR_config6/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun16/ddb_M2_full/TF22_blind_muonCR_config7/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun16/ddb_M2_full/TF22_blind_muonCR_SF1/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun21/ddb_M2_full/TF22_blind_muonCR_bbSF1/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24/ddb_M2_full/TF22_blind_bbSF1/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v2/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v2_ewk/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v3_ewk/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v4_ewk/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v5_ewk/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v6_ewk/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v6p5_ewk/card_rhalphabet_all_2017_floatZ.root',
        #### Good fits ####
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_bbSF1_v6_ewk/card_rhalphabet_all_2016_floatZ.root'
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_looserWZ_p87/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_looserWZ_p85/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_bbSF1_v6_ewk/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24/ddb_M2_full/TF22_blind_muonCR_bbSF1_v6_ewk/card_rhalphabet_all_2018_floatZ.root'
        #'ddb2018_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root'
        ### Powheg SFJul8 ###
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF22_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        ### MiNLO results###
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_blind_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_blind_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_MiNLO/ddb_M2_full/TF22_blind_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_muonCR_MiNLO_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_muonCR_MiNLO_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_MiNLO/ddb_M2_full/TF22_muonCR_MiNLO_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_MiNLO/ddb_M2_full/TF22_muonCR_SFJul8/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_comb_Jun24/comb1718/MiNLO_blind_SFJul8/card_rhalphabet_all_floatZ.root'

        ##
        #'ddb_Jun24_v2/ddb_M2_full/TF21_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'

        ### qcdTF22 ####
        #'ddb2018_Jun24_v3/ddb_M2_full/TF22_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_qcdTF22_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_MiNLO/ddb_M2_full/TF22_qcdTF22_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root'

        ### qcdTF22 Unc V6####
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_comb_Jun24/comb161718/Pow_qcdTF22uncV6_blind_SFJul8/card_rhalphabet_all_floatZ.root',        
        # unblinded
        #'ddb2016_Jun24_v3/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/Pow_qcdTF22uncV6_SFJul8/card_rhalphabet_all_floatZ.root',        
        #MINLO blinded cards
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb2016_Jun24_MiNLO_v2/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_comb_Jun24/comb161718/MiNLO_qcdTF22uncV6_blind_SFJul8/card_rhalphabet_all_floatZ.root',
        #MINLO unblinded cards
        #'ddb2016_Jun24_MiNLO_v2/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/MiNLO_qcdTF22uncV6_SFJul8/card_rhalphabet_all_floatZ.root'

        #'cards/tf22/2016/card_rhalphabet_all_2016_floatZ.root',
        #'cards/tf22/2017/card_rhalphabet_all_2017_floatZ.root',
        #'cards/tf22/2018/card_rhalphabet_all_2018_floatZ.root',
        #'cards/tf22/comb_Pow/card_rhalphabet_all_floatZ.root',
        #'cards/tf22_minlo/2016/card_rhalphabet_all_2016_floatZ.root',
        #'cards/tf22_minlo/2017/card_rhalphabet_all_2017_floatZ.root',
        #'cards/tf22_minlo/2018/card_rhalphabet_all_2018_floatZ.root',
        #'cards/tf22/comb_Min/card_rhalphabet_all_floatZ.root',


        # msd 54
        #'cards/msd54/2016/card_rhalphabet_all_2016_floatZ.root',
        #'cards/msd54/2017/card_rhalphabet_all_2017_floatZ.root',
        #'cards/msd54/2018/card_rhalphabet_all_2018_floatZ.root',
        #'cards/msd54/comb/card_rhalphabet_all_floatZ.root',
        #'cards/msd54_minlo/2016/card_rhalphabet_all_2016_floatZ.root',
        #'cards/msd54_minlo/2017/card_rhalphabet_all_2017_floatZ.root',
        #'cards/msd54_minlo/2018/card_rhalphabet_all_2018_floatZ.root',
        #'cards/msd54_minlo/comb/card_rhalphabet_all_floatZ.root',

        #### TF11/TF21
        ## unblinded
        #'ddb2016_Jun24_v3/ddb_M2_full/TF21_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/Pow_fdeco_SFJul8/card_rhalphabet_all_floatZ.root',
        #'ddb2016_Jun24_MiNLO_v2/ddb_M2_full/TF21_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/MiNLO_fdeco_SFJul8/card_rhalphabet_all_floatZ.root',
        #'cards/fdeco/2016/card_rhalphabet_all_2016_floatZ.root',
        #'cards/fdeco/2017/card_rhalphabet_all_2017_floatZ.root',
        #'cards/fdeco/2018/card_rhalphabet_all_2018_floatZ.root',
        #'cards/fdeco/comb/card_rhalphabet_all_floatZ.root',
        #'cards/fdeco_minlo/2016/card_rhalphabet_all_2016_floatZ.root',
        #'cards/fdeco_minlo/2017/card_rhalphabet_all_2017_floatZ.root',
        'cards/fdeco_minlo/2018/card_rhalphabet_all_2018_floatZ.root',
        #'cards/fdeco_minlo/comb/card_rhalphabet_all_floatZ.root',

        ## blinded
        #'ddb2016_Jun24_v3/ddb_M2_full/TF21_blind_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF11_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_v3/ddb_M2_full/TF11_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/Pow_fdeco_blind_SFJul8/card_rhalphabet_all_floatZ.root',
        #'ddb2016_Jun24_MiNLO_v2/ddb_M2_full/TF21_blind_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF11_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF11_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/MiNLO_fdeco_blind_SFJul8/card_rhalphabet_all_floatZ.root',


        
        ### Nicks
        #'nick/TF22_blind_qcdTF22uncV5_muonCRv7_SFJul8_v1/card_rhalphabet_all_2016_floatZ.root',
        #'nick/TF22_blind_qcdTF22uncV5_muonCRv7_SFJul8_v1/card_rhalphabet_all_2017_floatZ.root',
        #'nick/TF22_blind_qcdTF22uncV5_muonCRv7_SFJul8_v1/card_rhalphabet_all_2018_floatZ.root',
        #'nick/TF22_blind_qcdTF22uncV5_muonCRv7_SFJul8_v1/card_rhalphabet_all_floatZ.root',

        #'nick/hbb_deco/tf22_blind/card_rhalphabet_all_2016_floatZ.root',
        #'nick/hbb_deco/tf22_blind/card_rhalphabet_all_2017_floatZ.root',
        #'nick/hbb_deco/tf22_blind/card_rhalphabet_all_2018_floatZ.root',
        #'nick/hbb_deco/tf22_blind/card_rhalphabet_all_floatZ.root',

        #'nick/hbb_deco/tf22_minlo_blind/card_rhalphabet_all_2016_floatZ.root',
        #'nick/hbb_deco/tf22_minlo_blind/card_rhalphabet_all_2017_floatZ.root',
        #'nick/hbb_deco/tf22_minlo_blind/card_rhalphabet_all_2018_floatZ.root',
        #'nick/hbb_deco/tf22_minlo_blind/card_rhalphabet_all_floatZ.root',

        #'nick/hbb_deco/tf22/card_rhalphabet_all_2016_floatZ.root',
        #'nick/hbb_deco/tf22/card_rhalphabet_all_2017_floatZ.root',
        #'nick/hbb_deco/tf22/card_rhalphabet_all_2018_floatZ.root',
        #'nick/hbb_deco/tf22/card_rhalphabet_all_floatZ.root',
        #'nick/hbb_deco/tf22_minlo/card_rhalphabet_all_2016_floatZ.root',
        #'nick/hbb_deco/tf22_minlo/card_rhalphabet_all_2017_floatZ.root',
        #'nick/hbb_deco/tf22_minlo/card_rhalphabet_all_2018_floatZ.root',



        #This has 2016 qcdMC fit uncertainty
        #'ddb2016_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV3_muonCRv3_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV4_muonCRv3_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #This has larger qcdeff uncertainty(2017)
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22uncV3_muonCRv3_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',  
        #'ddb_comb_Jun24/comb161718/Pow_blind_muCRv3/card_rhalphabet_all_floatZ.root'

        #'ddb_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root'
        #'ddb2016_Jun24_MiNLO_v2/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root' 

        ### special fits###
        #'ddb2016_Jun24_MiNLO_v2/ddb_M2_full/TF21_qcdTF22uncV6_muonCRv7_scaleCat_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_MiNLO/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_scaleCat_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb2018_Jun24_MiNLO/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_scaleCat_SFJul8/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Jun24/comb161718/MiNLO_scaleCat_SFJul8/card_rhalphabet_all_floatZ.root',

        #'ddb2016_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV3_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root'
        #'ddb_comb_Jun24/comb161718/testcomb/card_rhalphabet_all_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_scaleptCat/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_scaleFail/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_scaleFailpt/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_scaleCat/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_scalePassFailCat/card_rhalphabet_all_2017_floatZ.root'
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_scaleptCat_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_weff/card_rhalphabet_all_2017_floatZ.root'
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_looserWZ_p85/card_rhalphabet_all_2016_floatZ.root',
        #'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_muonCR_looserWZ_p87/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/expTF31_blind_muonCR_bbSF1/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/TF22_MC_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/TF21_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_Jun24_v2/ddb_M2_full/expTF21_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun24_v2/ddb_M2_full/expTF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'

        #'ddb_Jun16/ddb_T3_full/TF22_blind_SF2016/card_rhalphabet_all_2017_floatZ.root'
        #'ddb2016_Jun16/ddb_M2_full/TF22_blind_muonCR_config6/card_rhalphabet_all_2016_floatZ.root',
        #'ddb_Jun12/ddb_M2_full/TF22_blind_muonCR_config1/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_config1_rescaledVqq/card_rhalphabet_all_2017_floatZ.root'
        #'ddb_Apr17/ddb_M2_full/msd47_TF22_muonCR_beffp7_blind/card_rhalphabet_all_floatZ.root'

        ### combinations
        #'ddb_comb_Mar29/msd47_TF21_fakeQCD/2017/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_comb_Mar29/msd47_TF21_fakeQCD/2018/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Mar29/msd47_TF21_fakeQCD/comb1718/card_rhalphabet_all_floatZ.root',
        #'ddb_comb_Mar29/msd47_TF21/2017/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_comb_Mar29/msd47_TF21/2018/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Mar29/msd47_TF21/comb1718/card_rhalphabet_all_floatZ.root',

        #'ddb_comb_Apr17/msd47_TF21_muonCR/2017/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_comb_Apr17/msd47_TF21_muonCR/2018/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Apr17/msd47_TF21_muonCR/comb1718/card_rhalphabet_all_floatZ.root',
        #'ddb_comb_Apr17/msd47_TF21/comb1718/card_rhalphabet_all_floatZ.root',

        #'ddb_comb_Apr17/msd47_TF22/2017/card_rhalphabet_all_2017_floatZ.root',
        #'ddb_comb_Apr17/msd47_TF22/2018/card_rhalphabet_all_2018_floatZ.root',
        #'ddb_comb_Apr17/msd47_TF22/comb1718/card_rhalphabet_all_floatZ.root',
        #'ddb_comb_Jun24/comb1718/data/card_rhalphabet_all_floatZ.root'
        #'ddb_comb_Jun24/comb161718/MiNLO_blind_SFJul8/card_rhalphabet_all_floatZ.root'


        ###
        #'coffea_Apr17/powheg_skim/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'coffea_Apr17/NNLOPS/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'coffea_Apr17/powheg_raw/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'coffea_Mar27/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'coffea_Apr8/ddb_M2/msd47_TF21_muonCR/card_rhalphabet_all_floatZ.root',
        ## NNLOPS
        #'coffea_Apr11/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #'coffea_Apr11/ddb_M2/msd47_TF21_CKKW/card_rhalphabet_all_floatZ.root',
        #'matching/ddb_M2/msd47_TF21/card_rhalphabet_all_floatZ.root',
        #"ddb_Mar7/ddb_M2/msd54_TF21_rescaled/card_rhalphabet_all_floatZ.root",
        ### double B
        #"db_Mar7/TF21/card_rhalphabet_all_floatZ.root",

        ## other WPs
        #"ddb_Mar7/ddb_M2/msd47_TF41_rescaled/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M2_pt1200/msd47_TF21/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M2_pt1200/msd47_TF22/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_M2_pt1200/msd47_TF31/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/ddb_T2_pt1200/qcdMC_TF41/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/mcOnly/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/mcOnly_muonCR/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/qcdMC/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_r1/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_NR3/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/card_rhalphabet_all_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/ftest/cards_mc_r3p1/card_rhalphabet_all_r3p1_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/ftest/cards_mc_r2p2/card_rhalphabet_all_r2p2_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/ftest/cards_mc_r4p1/card_rhalphabet_all_r4p1_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/ftest/cards_mc_r3p2/card_rhalphabet_all_r3p2_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/ftest/cards_mc_r5p1/card_rhalphabet_all_r5p1_floatZ.root",
        #"ddb_Jan17/MC/qcdMC_newTF21/ftest/cards_mc_r4p2/card_rhalphabet_all_r4p2_floatZ.root",
        #"ddb_Jan31/MC/mcOnly/card_rhalphabet_all_floatZ.root",
        #"ddb_Feb5/MC/mcOnly/card_rhalphabet_all_floatZ.root",
    ]
    for ifile in ifiles:
        #if ('muonCR' in ifile ) or ('comb') in ifile:
        #    freezePams = []
        #    mode ='norm'
        #else:
        #    mode = 'noMuonCR'
        #    freezePams = ['tqqnormSF_2016','tqqeffSF_2016']
        freezePams = []
        mode ='norm'
        if 'minlo' in ifile.lower():
            POI = POI_z_minlo
        else:
            POI = POI_z

        if not 'blind' in ifile:
            isAsimov= True
            #main(ifile,odir,mode,POI,freezePams,isAsimov,dryRun)
            isAsimov= False
            #main(ifile,odir,mode,POI,freezePams,isAsimov,dryRun)
        else:
            isAsimov= False
            #main(ifile,odir,mode,POI,freezePams,isAsimov,dryRun)
            isAsimov= True
            #main(ifile,odir,mode,POI,freezePams,isAsimov,dryRun)

        lumi=41.1
        fixTF= False
        if '2016' in ifile:
            lumi=35.5   
            suffix = '2016'
        elif '2017' in ifile:
            lumi=41.5 
            suffix = '2017'
        elif '2018' in ifile:
            lumi=59.2 
            suffix = '2018'
        elif 'comb161718' in ifile or "card_rhalphabet_all_floatZ.root" in ifile:
            lumi=136.2
            suffix = '2016:2017:2018'
        elif 'comb1718' in ifile:
            lumi=100
            suffix = '2017:2018'
        else:
            suffix = ''
        poi = 'r'
        #if 'blind' in ifile:    poi = 'r_z'
        #else:                   poi = 'r'
        if 'full' in ifile:      isData=True
        else:                    isData=False
        if 'blind' in ifile:
            #GOF(ifile,100,lumi,dryRun,freezePams=['r'],isData=isData)
            pass
        else:
            #GOF(ifile,100,lumi,dryRun,freezePams=['r_z'],isData=isData)
            #GOF(ifile,50,lumi,dryRun,freezePams=['r_z'],isData=isData)
            pass
        if 'blind' in ifile:
            #MLfit(ifile,mode,signalPOI=poi,POIs=POI,freezePams=['r'],lumi=lumi,suffix=suffix ,justPlot= options.justPlot,dryRun = dryRun,fixTF=fixTF,isData=True)
            pass
        else:
            #MLfit(ifile,mode,signalPOI=poi,POIs=POI,freezePams=['r_z'],lumi=lumi,suffix=suffix ,justPlot= options.justPlot,dryRun = dryRun,fixTF=fixTF,isData=True)
            pass

##-------------------------------------------------------------------------------------
# higgsCombineTest.MultiDimFit.mH120.root   
# limit           = 4.9168e-317
# limitErr        = 0
# mh              = 120
# syst            = 1
# iToy            = -1
# iSeed           = 123456
# iChannel        = 0
# t_cpu           = 0
# t_real          = 0
# quantileExpected = 0.32
# r_z             = 1.32985
# r               = 1
# deltaNLL        = 0

#
# higgsCombineTest.Significance.mH120.root
# limit           = 0.392465
# limitErr        = 0
# mh              = 120
# syst            = 1
# iToy            = -1
# iSeed           = 123456
# iChannel        = 0
# t_cpu           = 0.0283333
# t_real          = 0.0283805
# quantileExpected = -1
