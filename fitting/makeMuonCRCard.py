import ROOT as rt
from multiprocessing import Process
from optparse import OptionParser
from operator import add
import math
import sys
import time
import array
import os
import re
import json

from buildRhalphabet_for2017 import MASSBINS,MASSLO,MASSHI,V_SF,V_SF_ERR
from buildRhalphabet_for2017 import scaleHists

from hist import *

re_sbb = re.compile("zqq(?P<mass>\d+)")

def writeDataCard(boxes,txtfileName,sigs,bkgs,histoDict,options,jet_type):
    obsRate = {}
    for box in boxes:
        obsRate[box] = histoDict['data_obs_%s'%box].Integral()
    nBkgd = len(bkgs)
    nSig = len(sigs)
    rootFileName = txtfileName.replace('.txt','.root')

    rates = {}
    lumiErrs = {}
    mcStatErrs = {}
    veffErrs = {}
    znormEWErrs = {}
    znormQErrs = {}
    wznormEWErrs = {}
    mutriggerErrs = {}
    muidErrs = {}
    muisoErrs = {}
    jesErrs = {}
    jerErrs = {}
    puErrs = {}
    for proc in sigs+bkgs:
        for box in boxes:
            print proc, box
            error = array.array('d',[0.0])
            print histoDict['%s_%s'%(proc,box)].Integral()
            rate = histoDict['%s_%s'%(proc,box)].IntegralAndError(1,histoDict['%s_%s'%(proc,box)].GetNbinsX(),error)
            rates['%s_%s'%(proc,box)]  = rate
            lumiErrs['%s_%s'%(proc,box)] = 1.023
            if proc=='wqq' or proc=='zqq':
                veffErrs['%s_%s'%(proc,box)] = 1.0+V_SF_ERR[jet_type]/V_SF[jet_type]                    
            else:
                veffErrs['%s_%s'%(proc,box)] = 1.
            mutriggerErrs['%s_%s'%(proc,box)] = 1
            muidErrs['%s_%s'%(proc,box)] = 1
            muisoErrs['%s_%s'%(proc,box)] = 1

            if proc=='wqq':
                wznormEWErrs['%s_%s'%(proc,box)] = 1.05
            else:
                wznormEWErrs['%s_%s'%(proc,box)] = 1.
            if proc=='zqq' or proc=='wqq':
                znormQErrs['%s_%s'%(proc,box)] = 1.1
                znormEWErrs['%s_%s'%(proc,box)] = 1.15
            else:
                znormQErrs['%s_%s'%(proc,box)] = 1.
                znormEWErrs['%s_%s'%(proc,box)] = 1.
                
            if rate>0:
                mcStatErrs['%s_%s'%(proc,box)] = 1.0+(error[0]/rate)
            else:
                mcStatErrs['%s_%s'%(proc,box)] = 1.0
                
            if rate>0:
                rateJESUp = histoDict['%s_%s_JESUp'%(proc,box)].Integral()
                rateJESDown = histoDict['%s_%s_JESDown'%(proc,box)].Integral()
                rateJERUp = histoDict['%s_%s_JERUp'%(proc,box)].Integral()
                rateJERDown = histoDict['%s_%s_JERDown'%(proc,box)].Integral()
                ratePuUp = histoDict['%s_%s_PuUp'%(proc,box)].Integral()
                ratePuDown = histoDict['%s_%s_PuDown'%(proc,box)].Integral()
                jesErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJESUp-rate)+abs(rateJESDown-rate))/(2.*rate)   
                jerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJERUp-rate)+abs(rateJERDown-rate))/(2.*rate)
                puErrs['%s_%s'%(proc,box)] =  1.0+(abs(ratePuUp-rate)+abs(ratePuDown-rate))/(2.*rate)
            else:
                jesErrs['%s_%s'%(proc,box)] =  1.0
                jerErrs['%s_%s'%(proc,box)] =  1.0
                puErrs['%s_%s'%(proc,box)] =  1.0

    divider = '------------------------------------------------------------\n'
    datacard = 'imax 2 number of channels\n' + \
       'jmax * number of processes minus 1\n' + \
      'kmax * number of nuisance parameters\n' + \
      divider + \
      'bin fail_muonCR pass_muonCR\n' + \
      'observation %.3f %.3f\n'%(obsRate['fail'],obsRate['pass']) + \
      divider + \
      'shapes * pass_muonCR %s w_muonCR:$PROCESS_pass w_muonCR:$PROCESS_pass_$SYSTEMATIC\n'%rootFileName + \
      'shapes * fail_muonCR %s w_muonCR:$PROCESS_fail w_muonCR:$PROCESS_fail_$SYSTEMATIC\n'%rootFileName + \
      divider
    binString = 'bin'
    processString = 'process'
    processNumberString = 'process'
    rateString = 'rate'
    lumiString = 'lumi\tlnN'
    veffString = 'veff\tlnN'
    znormEWString = 'znormEW\tlnN'
    znormQString = 'znormQ\tlnN'    
    wznormEWString = 'wznormEW\tlnN'
    muidString = 'muid\tshape'   
    muisoString = 'muiso\tshape'   
    mutriggerString = 'mutrigger\tshape'  
    jesString = 'JES\tlnN'
    jerString = 'JER\tlnN'
    puString = 'Pu\tlnN'
    mcStatErrString = {}
    for proc in sigs+bkgs:
        for box in boxes:
            mcStatErrString['%s_%s'%(proc,box)] = '%s%smuonCRmcstat\tlnN'%(proc,box)
            
    for box in boxes:
        i = -1
        for proc in sigs+bkgs:
            i+=1
            if rates['%s_%s'%(proc,box)] <= 0.1: continue
            binString +='\t%s_muonCR'%box
            processString += '\t%s'%(proc)
            processNumberString += '\t%i'%(i-nSig+1)
            rateString += '\t%.3f' %rates['%s_%s'%(proc,box)]
            lumiString += '\t%.3f'%lumiErrs['%s_%s'%(proc,box)]
            veffString += '\t%.3f'%veffErrs['%s_%s'%(proc,box)]
            znormEWString += '\t%.3f'%znormEWErrs['%s_%s'%(proc,box)]
            znormQString += '\t%.3f'%znormQErrs['%s_%s'%(proc,box)]
            wznormEWString += '\t%.3f'%wznormEWErrs['%s_%s'%(proc,box)]
            mutriggerString += '\t%.3f'%mutriggerErrs['%s_%s'%(proc,box)]
            muidString += '\t%.3f'%muidErrs['%s_%s'%(proc,box)]
            muisoString += '\t%.3f'%muisoErrs['%s_%s'%(proc,box)]
            jesString += '\t%.3f'%jesErrs['%s_%s'%(proc,box)]
            jerString += '\t%.3f'%jerErrs['%s_%s'%(proc,box)]
            puString += '\t%.3f'%puErrs['%s_%s'%(proc,box)]
            for proc1 in sigs+bkgs:
                for box1 in boxes:
                    if proc1==proc and box1==box:
                        mcStatErrString['%s_%s'%(proc1,box1)] += '\t%.3f'% mcStatErrs['%s_%s'%(proc,box)]
                    else:
                        mcStatErrString['%s_%s'%(proc1,box1)] += '\t-'
            
    binString+='\n'; processString+='\n'; processNumberString+='\n'; rateString +='\n'; lumiString+='\n'; 
    veffString+='\n'; znormEWString+='\n'; znormQString+='\n'; wznormEWString+='\n'; mutriggerString+='\n'; muidString+='\n'; muisoString+='\n'; 
    jesString+='\n'; jerString+='\n'; puString+='\n';     
    for proc in (sigs+bkgs):
        for box in boxes:
            mcStatErrString['%s_%s'%(proc,box)] += '\n'
            
    datacard+=binString+processString+processNumberString+rateString+divider

    # now nuisances
    datacard+=lumiString+veffString+znormEWString+znormQString+wznormEWString+mutriggerString+muidString+muisoString+jesString+jerString+puString

    for proc in (sigs+bkgs):
        for box in boxes:
            if rates['%s_%s'%(proc,box)] <= 0.0: continue
            datacard+=mcStatErrString['%s_%s'%(proc,box)]

    # now top rate params
    tqqeff = histoDict['tqq_pass'].Integral()/(histoDict['tqq_pass'].Integral()+histoDict['tqq_fail'].Integral())
    dataeff = (obsRate['pass']-histoDict['stqq_pass'].Integral()-histoDict['wlnu_pass'].Integral())/(obsRate['pass']+obsRate['fail']-histoDict['stqq_pass'].Integral()-histoDict['stqq_fail'].Integral()-histoDict['wlnu_pass'].Integral()-histoDict['wlnu_fail'].Integral()-histoDict['vvqq_fail'].Integral())
    print 'TQQEFF: pass/(all) ',tqqeff
    print 'DATAEFF (data-other (pass)/data-other) ',dataeff
    print 'MISTAG SF ', dataeff/tqqeff
    # pass = tqq*tqqnormSF*tqqeffSF
    # fail = tqq*(tqqnormSF*(1-tqqeffSF*tqqeff)/(1-tqqeff)) = tqq*tqqnormSF*(1-dataeff)/(1-tqqeff)
    #print 'CA15 MISTAG SF: 1.09'
    #print 'CA15 NORM SF: 1.051'

    datacard+='tqqpassmuonCRnorm rateParam pass_muonCR tqq (@0*@1) tqqnormSF,tqqeffSF\n' + \
        'tqqfailmuonCRnorm rateParam fail_muonCR tqq (@0*(1.0-@1*%.4f)/(1.0-%.4f)) tqqnormSF,tqqeffSF\n'%(tqqeff,tqqeff) + \
        'tqqnormSF extArg 1.0 [0.0,10.0]\n' + \
        'tqqeffSF extArg 1.0 [0.0,10.0]\n'

    txtfile = open(options.odir+'/'+txtfileName,'w')
    txtfile.write(datacard)
    txtfile.close()

    
def main(options, args):
    
    boxes = ['pass', 'fail']
    ## for Wqq extraction:
    sigs = [] #'wqq']
    bkgs = ['tqq','vvqq','stqq','wlnu','zqq'] #,'wqq','zqq']
    systs = ['JER','JES','Pu','mutrigger','muid','muiso']

    jet_type = 'AK8'
    if options.jet == "CA15":
        jet_type = 'CA15'
    tfile = rt.TFile.Open(options.input,'read')
    
    histoDict = {}
    datahistDict = {}
    adjProc = {}
    
    ## fix process for signal
    adjProc['wqq'] = 'wqq'
    ## keep process for everything else
    for proc in (bkgs+['data_obs']):
        adjProc[proc] = proc
        
    for proc in (bkgs+sigs+['data_obs']):
        for box in boxes:
            print 'getting histogram for process: %s_%s'%(proc,box)
            if "wqq" in proc: procid = 0;
            elif "zqq" in proc: procid = 1;
            elif "tqq" in proc: procid = 2;
            else: procid = -1;
            passid = 1 if "pass" in box  else 2
            print '%s_%s'%(adjProc[proc],box)
            histoDict['%s_%s'%(proc,box)] = tfile.Get('%s%s_msd'%(adjProc[proc],box)).Clone()
            if 'tqq' not in proc:
                scaleHists(histoDict['%s_%s'%(proc,box)],procid,passid)
                
            for syst in systs:
                if proc!='data_obs':
                    print 'getting histogram for process: %s_%s_%sUp'%(proc,box,syst)
                    histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('%s%s_msd_%sUp'%(adjProc[proc],box,syst)).Clone()
                    if 'tqq' not in proc:
                        scaleHists(histoDict['%s_%s_%sUp'%(proc,box,syst)],procid,passid)
                    print 'getting histogram for process: %s_%s_%sDown'%(proc,box,syst)
                    histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('%s%s_msd_%sDown'%(adjProc[proc],box,syst)).Clone()
                    if 'tqq' not in proc:
                        scaleHists(histoDict['%s_%s_%sDown'%(proc,box,syst)],procid,passid)
                            
    outFile = 'datacard_muonCR_%s.root'%jet_type
    outputFile = rt.TFile.Open(options.odir+'/'+outFile,'recreate')
    outputFile.cd()
    w = rt.RooWorkspace('w_muonCR')
    w.factory('x[%i,%i,%i]'%(MASSLO[jet_type],MASSLO[jet_type],MASSHI[jet_type]))
    w.var('x').setBins(MASSBINS[jet_type])
    for key, histo in histoDict.iteritems():
        ds = rt.RooDataHist(key,key,rt.RooArgList(w.var('x')),histo)
        getattr(w,'import')(ds, rt.RooCmdArg())
    w.Write()
    outputFile.Close()
    txtfileName = outFile.replace('.root','.txt')

    writeDataCard(boxes,txtfileName,sigs,bkgs,histoDict,options,jet_type)
    print '\ndatacard:\n'
    os.system('cat %s/%s'%(options.odir,txtfileName))



if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option('--lumi', dest='lumi', type=float, default = 20,help='lumi in 1/fb ', metavar='lumi')
    parser.add_option('-o','--odir', dest='odir', default = './',help='directory to write cards', metavar='odir')
    parser.add_option('--input', dest='input', default = './',help='input file', metavar='input')
    parser.add_option('--lrho', dest='lrho', default=-6.0, type= 'float', help='low value rho cut')
    parser.add_option('--hrho', dest='hrho', default=-2.1, type='float', help=' high value rho cut')
    parser.add_option('--mass', dest='mass', default='100', type='string', help='mass value')
    parser.add_option('-m', '--model', dest='model', default='zqq', type='string', help='mass value')
    parser.add_option('--jet', dest='jet', default='AK8', help='jet type')

    (options, args) = parser.parse_args()

    main(options, args)
