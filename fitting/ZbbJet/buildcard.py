#!/usr/bin/env/python

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
    else: suffix=''
    if hasattr(options,'pseudo'): pseudo= options.pseudo
    else: pseudo=''
    if hasattr(options,'blind'): blind = options.blind
    else: blind = True
    if hasattr(options,'iloose'): iloose= options.iloose
    else: iloose = ''
    if hasattr(options,'muonCR'): muonCR= options.muonCR
    else: muonCR = ''
    if hasattr(options,'year'): year  = options.year
    else: year = ''
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
    if hasattr(options,'makedeco'): makedeco= options.makedeco
    else: makedeco=False
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
    if options.exp:
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

    makecard_base_noqcd = makecard_base
    if qcdTF: 
        makecard_base +=" --addqcdCovMat "

    t2ws_rz += " %s -o %s"%(combcard_all, combcard_all.replace(".txt","_floatZ.root"))

    rhalph_base_pseudo = rhalph_base + " --pseudo"
    if makedeco:
        rhalph_base += '\n python make_decorrelated.py -i %s --year %s'%(odir,year)

    cmds = [
        rhalph_base_pseudo,
        rhalph_base,
        makecard_base,
        combcards_base,
        t2ws_rz
    ]
    if muonCR:
        cmds.insert(2,makemuonCR_base)
        cmds.insert(2,makemuonCR_cp)
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
    mode   = options.mode
    
    # fix options with odir
    # change TF order here?
    # TF: order
    # blind: blind Hbb mass window
    # qcdTF22uncV6: fit MC qcd TF
    # muonCRv7: include muonCR datacard
    # SFJul8: latest from hbb
    odirs = [
        'TF22_MC_w2Fitv2/',
        'TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/'
        ]
    for odir in odirs:
        options.odir = odir
        idir = options.idir
        if '2018' in idir: 
            options.year = '2018'
        elif '2016' in idir:    
            options.year = '2016'
        else:   
            options.year = '2017'
        options.suffix = options.year
            
        #if not 'MC' in odir:
        #    if 'looserWZ' in odir and not( options.year=='2016'): continue
        #    if '2016'     in idir and not( 'looserWZ' in odir  ): continue
        options.odir = idir+odir
        if not os.path.exists(options.odir): 
            os.mkdir(options.odir)
        options.ifile  = options.idir+"data/hist_1DZbb_pt_scalesmear.root"
        if 'muonCR' in odir: options.muonCR = options.idir+"muonCR/hist_1DZbb_muonCR.root"
        else: options.muonCR = '' 
        if 'blind' in odir: options.blind = True
        else:  options.blind = False
        if 'exp'   in odir: options.exp = True
        else: options.exp = False
        if 'looserWZ'   in odir: options.iloose = options.idir+'looserWZ_%s'%odir.split("_")[-1]+"/hist_1DZbb_pt_scalesmear_looserWZ.root"
        else:  options.iloose = ''
        if 'pseudoPass'   in odir: options.pseudoPass = True
        else:   options.pseudoPass = False
        if 'MC' in odir: options.pseudo     = True
        else: options.pseudo     = False
        if 'MiNLO'  in idir: options.MiNLO     = True
        else: options.MiNLO     = False
        if 'qcdTF'  in odir: options.qcdTF     = True 
        else: options.qcdTF     = False
        if idir =='ddb2016_Jun24/ddb_M2_full/': 
            options.skipQCD = True
        else:
            options.skipQCD = False
        if 'MC' in odir: options.makedeco = True
        else: options.makedeco = False
        nrho, npT  = getPolyOrder(odir)
        options.nr     = nrho
        options.np     = npT
    
        options.cats = buildcats(options.ifile,options.odir,options.muonCR,options.suffix)
        main(options, mode,dryRun)
        print "==============================="


 
##-------------------------------------------------------------------------------------
if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-i', dest='idir', default='', help='idir with data')
    parser.add_option('-o','--odir', dest='odir', default='',help='directory to write cards', metavar='odir')
    parser.add_option('-m','--mode', dest='mode', default='norm',help='setting of pams', metavar='mode')
    parser.add_option('--dryRun', dest='dryRun', action='store_true',default=False,help='dryRun', metavar='dryRun')
    parser.add_option('--suffix', dest='suffix', default='', help='suffix - year?')
    parser.add_option('--year', dest='year', default='', help='year')
    parser.add_option('--iloose', dest='iloose', default='', help='file with loose selection hists')
    parser.add_option('--blind', dest='blind', action='store_true',default=True,help='blind hbb mass window')
    parser.add_option('--exp', dest='exp', action='store_true',default=False,help='exp fit')
    parser.add_option('--pseudoPass', dest='pseudoPass', action='store_true',default=False,help='pseudo fit for pass region')
    parser.add_option('--pseudo', dest='pseudo', default='',help='pseudo')
    parser.add_option('--muonCR', dest='muonCR', default='',help='muonCR')
    (options, args) = parser.parse_args()

    data_main(options)
