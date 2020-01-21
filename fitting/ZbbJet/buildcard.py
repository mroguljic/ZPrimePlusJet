#!/usr/bin/env python

import ROOT as r,sys,math,array,os
from optparse import OptionParser
from operator import add
import math
import sys,os,re
import datetime

# including other directories
sys.path.insert(0, '../.')
from tools import *
from buildRhalphabetZbb import SF2018,SF2017,SF2016

##-------------------------------------------------------------------------------------
def exec_me(command, outf, dryRun=False):
    print command
    if not dryRun:
        outf.write("%s\n"%command)
        os.system(command)

def getPolyOrder(s):
    re_polyorder = re.compile("TF(?P<o1>\d)(?P<o2>\d)")
    match_polyorder = re_polyorder.search(s)
    if match_polyorder:
        o1 = int(match_polyorder.group("o1"))
        o2 = int(match_polyorder.group("o2"))
    else:
        sys.exit()
    return o1,o2
    

def main(options,mode,dryRun):
    ifile = options.ifile
    odir  = options.odir
    cats  = options.cats
    if hasattr(options,'suffix'): suffix= options.suffix
    else:                         suffix=''
    if hasattr(options,'pseudo'): pseudo= options.pseudo
    else:                         pseudo=''
    if hasattr(options,'blind'): blind = options.blind
    else:                         blind = True
    if hasattr(options,'iloose'): iloose= options.iloose
    else:                         iloose=''
    if hasattr(options,'muonCR'): muonCR= options.muonCR
    else:                         muonCR=''
    if hasattr(options,'is2017'): is2017= options.is2017
    else:                         is2017=True
    if hasattr(options,'year'): year  = options.year
    else:                         year  =''
    if hasattr(options,'exp'): exp  = options.exp
    else:                         exp  = False
    if hasattr(options,'pseudoPass'): pseudoPass  = options.pseudoPass
    else:                         pseudoPass  = False
    if hasattr(options,'nr'): nr    = options.nr
    else:                         nr    = 2
    if hasattr(options,'np'): np    = options.np
    else:                         np    = 2
    if hasattr(options,'skipQCD'): skipQCD = options.skipQCD
    else:                         skipQCD = False
    if hasattr(options,'MiNLO'): MiNLO = options.MiNLO
    else:                        MiNLO = False
    if hasattr(options,'qcdTF'): qcdTF = options.qcdTF
    else:                        qcdTF = False
    if   year=='2018':   SF = SF2018
    elif year=='2017':   SF = SF2017
    elif year=='2016':   SF = SF2016
    else:                SF = {}

 
    now = datetime.datetime.now()
    ifileName = ifile.split("/")[-1]
    if odir=="":
        odir = os.path.dirname(ifile) 
        print "using default output dir:", odir
    logf  = odir +"buildcard.log" 
    outf  = open(logf,"a")
    if not dryRun:
        outf.write("=======buildcard.py==========\n")
        outf.write("===ifile = %s ==========\n"%ifile)
        outf.write("===odir  = %s ==========\n"%odir)
        outf.write("===mode  = %s ==========\n"%mode)
        outf.write("===time  = %s ==========\n"%now.strftime("%Y-%m-%d %H:%M"))
        outf.write('===git status -uno =======\n')
        os.system('git status -uno  >> %s\n'%logf)
        outf.write('===git log =========== \n')
        os.system('git log -n 1 >> %s\n'%logf)
        outf.write("=== Using SF: ==========\n")
        for key,item in sorted(SF.iteritems()): outf.write("%s       %s\n"%(key,item))
        
    print "=======buildcard.py=========="
    print "====  ifile   = %s =========="%ifile
    print "====  odir    = %s =========="%odir
    print "====  mode    = %s =========="%mode
    print "====  time    = %s =========="%now.strftime("%Y-%m-%d %H:%M")
    print "====  logfile = %s =========="%logf
    print " Using SF:"
    for key,item in sorted(SF.iteritems()): print("%s       %s"%(key,item))
    exec_me('git log -n 1 ',outf,dryRun)

    rhalph_base    = "python buildRhalphabetZbb.py -i %s -o %s --nr %i --np %i --remove-unmatched --prefit "%(ifile,odir,nr,np)
    makecard_base  = "python makeCardsZbb.py       -i %s -o %s --remove-unmatched --no-mcstat-shape "%(ifile,odir)
    makemuonCR_base = "python writeMuonCRDatacard.py       -i %s -o %s --no-mcstat-shape "%(muonCR,odir)
    combcards_base = "combineCards.py "

    t2ws_rz      ="text2workspace.py  -m 125  --PO verbose"
    for cat in cats:
        combcards_base += " %s=%s "%(cat['name'],cat['card'])
           
    if suffix:
        rhalph_base += " --suffix %s"%suffix
        makecard_base += " --suffix %s"%suffix
        makemuonCR_base += " --suffix %s"%suffix
        combcard_all = "%scard_rhalphabet_all_%s.txt "%(odir,suffix)
        combcards_base += " > %s"%(combcard_all)
        
    else:
        combcard_all = "%scard_rhalphabet_all.txt "%(odir)
        combcards_base += " > %s"%(combcard_all)
    if iloose:
        rhalph_base   += " --ifile-loose %s "%iloose
        makecard_base += " --ifile-loose %s "%iloose
    if pseudo:
        rhalph_base += " --pseudo "
    if exp:
        rhalph_base += " --exp "
    if pseudoPass:
        rhalph_base += " --createPassFromFail "
    if skipQCD:
        rhalph_base += " --skipQCD "
        
    if blind:
        rhalph_base += " --blind "
        makecard_base +=" --blind "
    if year:
        rhalph_base += " --year %s "%year
        makecard_base +=" --year %s "%year
        if muonCR:
            makemuonCR_base +=" --year %s "%year
            makemuonCR_cp   = makemuonCR_base.replace(odir,options.idir+"muonCR/")
    if qcdTF: 
        makecard_base +=" --addqcdCovMat "
    if mode =="vbf":
        t2ws_vbf += " %s -o %s"%(combcard_all, combcard_all.replace(".txt","_floatVBF.root"))
    t2ws_rz += " %s -o %s"%(combcard_all, combcard_all.replace(".txt","_floatZ.root"))
    if hasattr(options, 'scaleLumi') and options.scaleLumi:
        insert = 'echo -e "lumiscale rateParam * * 1 \\nnuisance edit freeze lumiscale" >> %s'%combcard_all
        t2ws_rz += " --X-nuisance-group-function mcstat 'expr::lumisyst(\"1/sqrt(@0)\",lumiscale[1])' "
    

    rhalph_base_pseudo = rhalph_base + " --pseudo"
    cmds = [
        rhalph_base_pseudo,
        rhalph_base,
        makecard_base,
        combcards_base,
        t2ws_rz
    ]
    if mode =="vbf":
        cmds.append(t2ws_vbf)
    if muonCR:
        cmds.insert(2,makemuonCR_base)
        cmds.insert(2,makemuonCR_cp)
    if hasattr(options, 'scaleLumi') and options.scaleLumi:
        cmds.insert(3,insert)
    ## skip all building commands for comb
    if mode=='comb':
        cmds = [
           combcards_base,
           t2ws_rz
        ]
    for cmd in cmds:
        exec_me(cmd,outf, dryRun)
    if not dryRun:
        print "=========== Summary ============="
        for cmd in cmds:
            if 'combineCards.py' in cmd:
                print cmd.replace(".txt",'.txt \n')
            else:
                print cmd
        print "Using SF:"
        for key,item in sorted(SF.iteritems()): print("%s       %s"%(key,item))

#buildcats from ifile
def buildcats(ifile,odir,muonCR,suffix):
    #get N ptbins
    tf = r.TFile(ifile)
    #print ifile
    ncats=tf.Get("data_obs_pass").GetYaxis().GetNbins()
    cats=[]
    for icat in range(1,ncats+1):
        cats.append( {"name":"cat%s"%icat,"card":odir+"card_rhalphabet_cat%s.txt"%icat})
    if muonCR:
        cats.append({"name":"muonCR","card":odir+"datacard_muonCR.txt"})
    if suffix:
        for catdict in cats:
            catdict['name'] = catdict['name']+"_"+suffix
    return cats

def loadcats(idir,odir,muonCR,suffix):
    if not os.path.exists(idir+'../data/hist_1DZbb_pt_scalesmear.root'):
        print idir+'../data/hist_1DZbb_pt_scalesmear.root'+' does not exists'
        sys.exit()
    else:
        return buildcats(idir+'../data/hist_1DZbb_pt_scalesmear.root',idir,muonCR,suffix)

def data_main(options):
    dryRun = options.dryRun
    mode   = 'norm'
    options.suffix = ""
    options.iloose = ""
    options.blind  = True 
    options.exp    = False
    options.pseudoPass = False
    options.pseudo = False 
    options.is2017 = True
    options.scaleLumi = False 
    idirs = [
        #'ddb_Oct22/ddb_M2_2016/',
        'dak8_Oct24/dak8_M2_2016/',
    ]
    odirs = [
        #'TF22_MC_w2Fitv2/',
        #'TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/',                 
        'TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/',
    ]

    #config1  = SFJun4-0.7 GeV scale                                 ddb_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_config1/   #Best fit r_z: 1.51297  -0.293166/+0.375001  (68% CL) 
    #config2  = SFJun4-0.7 GeV scale                                 ddb_Jun6_v2/ddb_M2_full/TF22_blind_muonCR_config2/   #Best fit r_z: 1.51297  -0.293166/+0.375001  (68% CL)
    #config3  = SFJun4-0.7 GeV scale-scaleNorm                       ddb_Apr17/ddb_M2_full/TF22_blind_muonCR_config3/     #Best fit r_z: 1.17925  -0.245345/+0.39457   (68% CL)
    #config4  = SFJun4-0.7 GeV scale-scaleNorm - smear               ddb_Apr17/ddb_M2_full/TF22_blind_muonCR_config4/     #Best fit r_z: 1.18065  -0.243768/+0.414102  (68% CL)
    #config5  = SFJun4-0.7 GeV scale-scaleNorm - smear - veff        ddb_Apr17/ddb_M2_full/TF22_blind_muonCR_config5/     #Best fit r_z: 1.1395   -0.241985/+0.383181  (68% CL)w/0.68 bbeff
    #config6  = SFJun4-3% scale-scaleNorm - smear - veff             ddb_Jun16/ddb_M2_full/TF22_blind_muonCR_config6/   #Best fit r_z: 1.51297  -0.293166/+0.375001  (68% CL) 
    #config6  = SFJun4+3% scale+ -scaleNorm - smear - veff           ddb_Jun16/ddb_M2_full/TF22_blind_muonCR_config6/   #Best fit r_z: 1.51297  -0.293166/+0.375001  (68% CL) 
                                                                                                                                #Best fit r_z: 1.09698  -0.233341/+0.364163  (68% CL) w/0.7 bbeff
    #Pre App                                                         ddb_Apr17/ddb_M2_full/msd47_TF22_muonCR_beffp7_blind/    #Best fit r_z: 1.07164  -0.253762/+0.332153  (68% CL)
    #config7  = SFJun4+ x2 scaleErr                                  ddb_Jun12/ddb_M2_full/TF22_blind_muonCR_config6/   #Best fit r_z: 1.51297  -0.293166/+0.375001  (68% CL) 

    paths = []
    for idir in idirs:
        options.idir = idir
        if   '2018' in idir:    options.year = '2018'
        elif '2016' in idir:    options.year = '2016'
        else:                   options.year = '2017'
        options.suffix = options.year
        for odir in odirs:
            #if not 'MC' in odir:
            #    if 'looserWZ' in odir and not( options.year=='2016'): continue
            #    if '2016'     in idir and not( 'looserWZ' in odir  ): continue
            options.odir = idir+odir
            if not os.path.exists(options.odir): os.mkdir(options.odir)
            options.ifile  = options.idir+"data/hist_1DZbb_pt_scalesmear.root"
            if 'muonCR' in odir:                options.muonCR = options.idir+"muonCR/hist_1DZbb_muonCR.root"
            else:                               options.muonCR = '' 
            if 'blind' in odir:                 options.blind = True
            else:                               options.blind = False
            if 'exp'   in odir:                 options.exp = True
            else:                               options.exp = False
            #if 'looserWZ'   in odir:            options.iloose = options.idir+'looserWZ_%s'%odir.split("_")[-2]+"/hist_1DZbb_pt_scalesmear_looserWZ.root"
            if 'looserWZ'   in odir:            options.iloose = options.idir+'looserWZ_%s'%odir.split("_")[-1]+"/hist_1DZbb_pt_scalesmear_looserWZ.root"
            else:                               options.iloose = ''
            if 'pseudoPass'   in odir:          options.pseudoPass = True
            else:                               options.pseudoPass = False
            if 'MC'      in odir:               options.pseudo     = True
            else:                               options.pseudo     = False
            if 'MiNLO'  in idir:                options.MiNLO     = True
            else:                               options.MiNLO     = False
            if 'qcdTF'  in odir:                options.qcdTF     = True 
            else:                               options.qcdTF     = False
            if idir =='ddb2016_Jun24/ddb_M2_full/': options.skipQCD = True
            else:                                   options.skipQCD = False
            nrho, npT  = getPolyOrder(odir)
            options.nr     = nrho
            options.np     = npT

            options.cats = buildcats(options.ifile,options.odir,options.muonCR,options.suffix)
            main(options, mode,dryRun)
            paths.append( idir+odir)
    print "==============================="
    for p in paths: print p


 
##-------------------------------------------------------------------------------------
if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-i', dest='ifile', default='card_rhalphabet_muonCR_floatZ.root', help='datacard root')
    parser.add_option('-o','--odir', dest='odir', default = '',help='directory to write cards', metavar='odir')
    parser.add_option('-m','--mode', dest='mode', default = 'norm',help='setting of pams', metavar='mode')
    parser.add_option('--dryRun', dest='dryRun', action='store_true',default=False,help='dryRun', metavar='dryRun')

    (options, args) = parser.parse_args()

    data_main(options)
