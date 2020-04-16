import ROOT as rt
from multiprocessing import Process
from optparse import OptionParser
from operator import add
import math
import sys
import time
import array
import os
from hist import *  

from buildRhalphabetZbb import MASS_BINS,MASS_LO,MASS_HI,BLIND_LO,BLIND_HI,RHO_LO,RHO_HI,SF2017,SF2016,SF2018
from rhalphabet_builder import GetSF

def writeDataCard(boxes,txtfileName,sigs,bkgs,histoDict,options):
    obsRate = {}
    for box in boxes:
        obsRate[box] = histoDict['data_obs_%s'%box].Integral()
    nBkgd = len(bkgs)
    nSig = len(sigs)
    rootFileName = txtfileName.replace('.txt','.root')
    #rootFileName = txtfileName.replace('.txt','_hist.root')


    for key, myhist in histoDict.iteritems():
        if 'mcstat' in key:
            #print 'mcstat names',key
            pass

    if options.year=='2018':
        BB_SF    =SF2018['BB_SF'] 
        BB_SF_ERR=SF2018['BB_SF_ERR']
        V_SF     =SF2018['V_SF']
        V_SF_ERR =SF2018['V_SF_ERR']
        LUMI_ERR = 1.025
    elif options.year=='2017':
        BB_SF    =SF2017['BB_SF'] 
        BB_SF_ERR=SF2017['BB_SF_ERR']
        V_SF     =SF2017['V_SF']
        V_SF_ERR =SF2017['V_SF_ERR']
        LUMI_ERR = 1.023
    elif options.year =='2016':
        BB_SF     =SF2016['BB_SF']
        BB_SF_ERR =SF2016['BB_SF_ERR']
        V_SF      =SF2016['V_SF']
        V_SF_ERR  =SF2016['V_SF_ERR']
        LUMI_ERR = 1.025

    #histToCard = {'tthqq125':'ttH_hbb','whqq125':'WH_hbb','hqq125':'ggH_hbb','zhqq125':'ZH_hbb','vbfhqq125':'qqH_hbb'}
    histToCard = {'zqq':'zqq'}
    for bkg in bkgs:
        histToCard[bkg] = bkg

    rates = {}
    Effentries = {}
    lumiErrs = {}
    hqq125ptErrs = {}
    mcStatErrs = {}
    veffErrs = {}
    bbeffErrs = {}
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
            error = array.array('d',[0.0])
            print('reading ',proc,box)
            if 'zqq' in proc:
                rate = 0.1
                effentries = 0.1
            else:
                rate = histoDict['%s_%s'%(proc,box)].IntegralAndError(1,histoDict['%s_%s'%(proc,box)].GetNbinsX(),error)
                effentries = histoDict['%s_%s'%(proc,box)].GetEffectiveEntries()
            rates['%s_%s'%(proc,box)]  = rate
            Effentries['%s_%s'%(proc,box)]  = effentries
            lumiErrs['%s_%s'%(proc,box)] = LUMI_ERR 
            if proc=='hqq125':
                hqq125ptErrs['%s_%s'%(proc,box)] = 1.3                
            else:
                hqq125ptErrs['%s_%s'%(proc,box)] = 1.0
            if proc=='wqq' or proc=='zqq' or 'hqq' in proc:
                veffErrs['%s_%s'%(proc,box)] = 1.0+V_SF_ERR/V_SF
                bbeffErrs['%s_%s'%(proc,box)] = 1.0
                # if box=='pass':
                #     bbeffErrs['%s_%s'%(proc,box)] = 1.0+BB_SF_ERR/BB_SF
                # else:
                #     ratePass = histoDict['%s_%s'%(proc,'pass')].Integral()
                #     rateFail = histoDict['%s_%s'%(proc,'fail')].Integral()
                #     if rateFail>0:
                #         bbeffErrs['%s_%s'%(proc,box)] = 1.0-BB_SF_ERR*(ratePass/rateFail)
                #     else:
                #         bbeffErrs['%s_%s'%(proc,box)] = 1.0                    
            else:
                veffErrs['%s_%s'%(proc,box)] = 1.
                bbeffErrs['%s_%s'%(proc,box)] = 1.
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
                
            if options.noMcStatShape:                 
                if rate>0:
                    mcStatErrs['%s_%s'%(proc,box)] = 1.0+(error[0]/rate)
                else:
                    mcStatErrs['%s_%s'%(proc,box)] = 1.0
            else:
                for j in range(1,MASS_BINS+1):
                    mcStatErrs['%s_%s'%(proc,box),j] = 1.0
                
            if rate>0 and 'qcd' not in proc and 'zqq' not in proc:
                rateJESUp = histoDict['%s_%s_JESUp'%(proc,box)].Integral()
                rateJESDown = histoDict['%s_%s_JESDown'%(proc,box)].Integral()
                rateJERUp = histoDict['%s_%s_JERUp'%(proc,box)].Integral()
                rateJERDown = histoDict['%s_%s_JERDown'%(proc,box)].Integral()
                ratePuUp = histoDict['%s_%s_PuUp'%(proc,box)].Integral()
                ratePuDown = histoDict['%s_%s_PuDown'%(proc,box)].Integral()
                rateTrigUp = histoDict['%s_%s_mutriggerUp'%(proc,box)].Integral()
                rateIdUp   = histoDict['%s_%s_muisoUp'%(proc,box)].Integral()
                rateIsoUp  = histoDict['%s_%s_muidUp'%(proc,box)].Integral()
                rateTrigDown = histoDict['%s_%s_mutriggerDown'%(proc,box)].Integral()
                rateIdDown   = histoDict['%s_%s_muisoDown'%(proc,box)].Integral()
                rateIsoDown  = histoDict['%s_%s_muidDown'%(proc,box)].Integral()

                jesErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJESUp-rate)+abs(rateJESDown-rate))/(2.*rate)   
                jerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJERUp-rate)+abs(rateJERDown-rate))/(2.*rate)
                mutriggerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateTrigUp-rate)+abs(rateTrigDown-rate))/(2.*rate)   
                muidErrs['%s_%s'%(proc,box)]      =  1.0+(abs(rateIdUp-rate)+abs(rateIdDown-rate))/(2.*rate)   
                muisoErrs['%s_%s'%(proc,box)]     =  1.0+(abs(rateIsoUp-rate)+abs(rateIsoDown-rate))/(2.*rate)   
                puErrs['%s_%s'%(proc,box)] =  1.0+(abs(ratePuUp-rate)+abs(ratePuDown-rate))/(2.*rate)
            else:
                jesErrs['%s_%s'%(proc,box)] =  1.0
                jerErrs['%s_%s'%(proc,box)] =  1.0
                puErrs['%s_%s'%(proc,box)] =  1.0
                mutriggerErrs['%s_%s'%(proc,box)] =  1.0
                muidErrs['%s_%s'%(proc,box)]      =  1.0
                muisoErrs['%s_%s'%(proc,box)]     =  1.0


    print('writing ')
    divider = '------------------------------------------------------------\n'
    datacard = 'imax 2 number of channels\n' + \
       'jmax * number of processes minus 1\n' + \
      'kmax * number of nuisance parameters\n' + \
      divider + \
      'bin fail_muonCR pass_muonCR\n' + \
      'observation %.3f %.3f\n'%(obsRate['fail'],obsRate['pass']) + \
      divider + \
      'shapes * * FAKE\n' + \
      '#shapes * pass_muonCR %s w_muonCR:$PROCESS_pass w_muonCR:$PROCESS_pass_$SYSTEMATIC\n'%rootFileName + \
      '#shapes * fail_muonCR %s w_muonCR:$PROCESS_fail w_muonCR:$PROCESS_fail_$SYSTEMATIC\n'%rootFileName + \
      '#shapes * pass_muonCR %s $PROCESS_pass $PROCESS_pass_$SYSTEMATIC\n'%rootFileName + \
      '#shapes * fail_muonCR %s $PROCESS_fail $PROCESS_fail_$SYSTEMATIC\n'%rootFileName + \
      divider
    binString = 'bin'
    processString = 'process'
    processNumberString = 'process'
    rateString = 'rate'
    if options.year in ['2017','2018']:
        lumiString = 'lumi_13TeV%s lnN'%options.suffix
    else:
        lumiString = 'lumi%s lnN'%options.suffix
    hqq125ptString = 'CMS_gghbb_ggHpt\tlnN'
    veffString = 'CMS_gghbb_veff%s\tlnN'%options.suffix
    bbeffString = 'CMS_eff_bb%s\tlnN'%options.suffix
    znormEWString = 'CMS_gghbb_znormEW\tlnN'
    znormQString = 'CMS_gghbb_znormQ\tlnN'    
    wznormEWString = 'CMS_gghbb_wznormEW\tlnN'
    jesString = 'CMS_scale_j%s\tlnN'%options.suffix
    jerString = 'CMS_res_j%s\tlnN'%options.suffix
    puString = 'CMS_PU%s\tlnN'%options.suffix
    muidString = 'CMS_eff_m_id%s\tlnN'%options.suffix
    muisoString = 'CMS_eff_m_iso%s\tlnN'%options.suffix   
    mutriggerString = 'CMS_eff_m_trg%s\tlnN'%options.suffix  

    mcStatErrString = {}
    for proc in sigs+bkgs:
        for box in boxes:
            if options.noMcStatShape:
                 mcStatErrString['%s_%s'%(proc,box)] = '%s%smuonCR%smcstat\tlnN'%(proc,box,options.year)
            else:
                for j in range(1,MASS_BINS+1):
                    mcStatErrString['%s_%s'%(proc,box),j] = '%s%smuonCR%smcstat%i\tshape'%(proc,box,options.year,j)

    for box in boxes:
        i = -1
        def format_string(number):
            if number==1:
                mystring = '\t-'
            else:
                mystring = '\t%.3f'%number
            return mystring         
        for proc in sigs+bkgs:
            i+=1
            if rates['%s_%s'%(proc,box)] <= 0.0: continue
            binString +='\t%s_muonCR'%box
            processString += '\t%s'%(histToCard[proc])
            processNumberString += '\t%i'%(i-nSig+1)
            rateString += '\t%.3f' %rates['%s_%s'%(proc,box)]
            lumiString += format_string(lumiErrs['%s_%s'%(proc,box)])
            hqq125ptString += format_string(hqq125ptErrs['%s_%s'%(proc,box)])
            veffString += format_string(veffErrs['%s_%s'%(proc,box)])
            bbeffString += format_string(bbeffErrs['%s_%s'%(proc,box)])
            znormEWString += format_string(znormEWErrs['%s_%s'%(proc,box)])
            znormQString += format_string(znormQErrs['%s_%s'%(proc,box)])
            wznormEWString += format_string(wznormEWErrs['%s_%s'%(proc,box)])
            mutriggerString += '\t%.3f'%(mutriggerErrs['%s_%s'%(proc,box)])
            muidString += '\t%.3f'%(muidErrs['%s_%s'%(proc,box)])
            muisoString += '\t%.3f'%(muisoErrs['%s_%s'%(proc,box)])
            jesString += format_string(jesErrs['%s_%s'%(proc,box)])
            jerString += format_string(jerErrs['%s_%s'%(proc,box)])
            puString += format_string(puErrs['%s_%s'%(proc,box)])
            for proc1 in sigs+bkgs:
                for box1 in boxes:
                    if options.noMcStatShape:
                        if proc1==proc and box1==box:
                            mcStatErrString['%s_%s'%(proc1,box1)] += '\t%.3f'% mcStatErrs['%s_%s'%(proc,box)]
                        else:                        
                            mcStatErrString['%s_%s'%(proc1,box1)] += '\t-'
                    else:
                        for j in range(1,MASS_BINS+1):
                            if proc1==proc and box1==box:
                                mcStatErrString['%s_%s'%(proc1,box1),j] += '\t1.0'
                            else:                        
                                mcStatErrString['%s_%s'%(proc1,box1),j] += '\t-'

            
    binString+='\n'; processString+='\n'; processNumberString+='\n'; rateString +='\n'; lumiString+='\n'; hqq125ptString+='\n';
    veffString+='\n'; bbeffString+='\n'; znormEWString+='\n'; znormQString+='\n'; wznormEWString+='\n'; mutriggerString+='\n'; muidString+='\n'; muisoString+='\n'; 
    jesString+='\n'; jerString+='\n'; puString+='\n';     
    for proc in (sigs+bkgs):
        for box in boxes:
            if options.noMcStatShape:                 
                mcStatErrString['%s_%s'%(proc,box)] += '\n'
            else:
                for j in range(1,MASS_BINS+1):
                    mcStatErrString['%s_%s'%(proc,box),j] += '\n'
            
    datacard+=binString+processString+processNumberString+rateString+divider

    # now nuisances
    datacard+=lumiString+hqq125ptString+veffString+bbeffString+znormEWString+znormQString+wznormEWString+mutriggerString+muidString+muisoString+jesString+jerString+puString

    # comment out total mcstat lnN errors
    for proc in (sigs+bkgs):
        for box in boxes:
            if rates['%s_%s'%(proc,box)] <= 0.0: continue
            if options.noMcStatShape:                 
                datacard+=mcStatErrString['%s_%s'%(proc,box)]
            else:
                for j in range(1,MASS_BINS+1):
                    error = histoDict['%s_%s'%(proc,box)].GetBinError(j)
                    rate  = histoDict['%s_%s'%(proc,box)].GetBinContent(j) 
                    if rate-error<=0:
                        continue        ## veto small mcstat uncertainties
                    elif (error/rate)<=0.1 :
                        continue        ## veto small mcstat uncertainties
                    else:
                        print "accepting %s_%s_%s with rate = %.5f, error = %.5f, error/rate = %.5f"%(proc,box,j,rate,error,error/rate)
                        datacard+=mcStatErrString['%s_%s'%(proc,box),j]
            

    # now top rate params
    tqqeff = histoDict['tqq_pass'].Integral()/(histoDict['tqq_pass'].Integral()+histoDict['tqq_fail'].Integral())

    
    #datacard+='tqqpassmuonCR%snorm rateParam pass_muonCR tqq (@0*@1) CMS_gghbb_tqqnormSF_%s,CMS_gghbb_tqqeffSF_%s\n'%(options.year,options.year,options.year) + \
    #    'tqqfailmuonCR%snorm rateParam fail_muonCR tqq (@0*(1.0-@1*%.4f)/(1.0-%.4f)) CMS_gghbb_tqqnormSF_%s,CMS_gghbb_tqqeffSF_%s\n'%(options.year,tqqeff,tqqeff,options.year,options.year) + \
    #    'CMS_gghbb_tqqnormSF_%s extArg 1.0 [0.0,10.0]\n'%options.year + \
    #    'CMS_gghbb_tqqeffSF_%s extArg 1.0 [0.0,10.0]\n'%options.year
    
    txtfile = open(options.odir+'/'+txtfileName,'w')
    txtfile.write(datacard)
    txtfile.close()

    
def main(options, args):
    
    boxes = ['pass', 'fail']
    sigs = ['zqq'] 
    bkgs = ['qcd','tqq','stqq']
    systs = ['JER','JES','mutrigger','muid','muiso','Pu','mcstat']

    if options.year=='2018':
        BB_SF    =SF2018['BB_SF'] 
        BB_SF_ERR=SF2018['BB_SF_ERR']
        V_SF     =SF2018['V_SF']
        V_SF_ERR =SF2018['V_SF_ERR']
        sf_dict = SF2018
    elif options.year=='2017':
        BB_SF    =SF2017['BB_SF'] 
        BB_SF_ERR=SF2017['BB_SF_ERR']
        V_SF     =SF2017['V_SF']
        V_SF_ERR =SF2017['V_SF_ERR']
        sf_dict = SF2017
    elif options.year =='2016':
        BB_SF     =SF2016['BB_SF']
        BB_SF_ERR =SF2016['BB_SF_ERR']
        V_SF      =SF2016['V_SF']
        V_SF_ERR  =SF2016['V_SF_ERR']
        sf_dict = SF2016


    print(options.ifile)
    tfile = rt.TFile.Open(options.ifile,'read')
    
    histoDict = {}
    datahistDict = {}
    
    fLoose = None
    removeUnmatched=False
    iPt=-1
    for proc in (bkgs+['data_obs']):
        for box in boxes:
            print 'getting histogram for process: %s_%s'%(proc,box)
            histoDict['%s_%s'%(proc,box)] = tfile.Get('%s_%s'%(proc,box)).Clone()
            histoDict['%s_%s'%(proc,box)].Scale(GetSF(proc,box,tfile,fLoose,removeUnmatched,iPt,sf_dict))
            for syst in systs:
                if proc!='data_obs':
                    if syst!='mcstat':
                        if proc=='qcd': continue
                        print 'getting histogram for process: %s_%s_%sUp'%(proc,box,syst)
                        histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('%s_%s_%sUp'%(proc,box,syst)).Clone()
                        histoDict['%s_%s_%sUp'%(proc,box,syst)].Scale(GetSF(proc,box,tfile,fLoose,removeUnmatched,iPt,sf_dict))
                        histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('%s_%s_%sDown'%(proc,box,syst)).Clone()
                        histoDict['%s_%s_%sDown'%(proc,box,syst)].Scale(GetSF(proc,box,tfile,fLoose,removeUnmatched,iPt,sf_dict))
                    else:
                        if proc=='qcd': continue
                        histoDict['%s_%s_%s%smuonCR%smcstatUp'%(proc,box,proc,box,options.year)] = tfile.Get('%s_%s'%(proc,box)).Clone(tfile.Get('%s_%s'%(proc,box)).GetName()+'_%s%smuonCR%smcstatUp'%(proc,box,options.year))
                        histoDict['%s_%s_%s%smuonCR%smcstatUp'%(proc,box,proc,box,options.year)].Scale(GetSF(proc,box,tfile,fLoose,removeUnmatched,iPt,sf_dict))
                        histoDict['%s_%s_%s%smuonCR%smcstatDown'%(proc,box,proc,box,options.year)] = tfile.Get('%s_%s'%(proc,box)).Clone(tfile.Get('%s_%s'%(proc,box)).GetName()+'_%s%smuonCR%smcstatDown'%(proc,box,options.year))
                        histoDict['%s_%s_%s%smuonCR%smcstatDown'%(proc,box,proc,box,options.year)].Scale(GetSF(proc,box,tfile,fLoose,removeUnmatched,iPt,sf_dict))
                        for ibin in range(1,histoDict['%s_%s'%(proc,box)].GetNbinsX()+1):
                            if histoDict['%s_%s'%(proc,box)].GetBinContent(ibin) <0:            ### Set negative bin to zero
                                histoDict['%s_%s'%(proc,box)].SetBinContent(ibin,0) 
                            histoDict['%s_%s_%s%smuonCR%smcstatUp'%(proc,box,proc,box,options.year)].SetBinContent(ibin, histoDict['%s_%s'%(proc,box)].GetBinContent(ibin)+ histoDict['%s_%s'%(proc,box)].GetBinError(ibin)) 
                            histoDict['%s_%s_%s%smuonCR%smcstatDown'%(proc,box,proc,box,options.year)].SetBinContent(ibin,max(1E-06, histoDict['%s_%s'%(proc,box)].GetBinContent(ibin)- histoDict['%s_%s'%(proc,box)].GetBinError(ibin))) 

    def ZeroHistogram1D(h):
        for i in range(1, h.GetNbinsX() + 1):
            h.SetBinContent(i, 0.01)
            h.SetBinError(i, 0.)

    for proc in (sigs):
        for box in boxes:
            print 'getting histogram for process: %s_%s'%(proc,box)
            h = tfile.Get('stqq_%s'%(box)).Clone('%s_%s'%(proc,box))
            h.SetDirectory(0)
            ZeroHistogram1D(h)
            histoDict['%s_%s'%(proc,box)] = h
            for syst in systs:
                if syst!='mcstat':
                    histoDict['%s_%s_%sUp'%(proc,box,syst)] = h.Clone('%s_%s_%sUp'%(proc,box,syst))
                    histoDict['%s_%s_%sDown'%(proc,box,syst)] = h.Clone('%s_%s_%sDown'%(proc,box,syst))
                else:
                    histoDict['%s_%s_%s%smuonCR%smcstatUp'%(proc,box,proc,box,options.year)] = h.Clone('%s_%s_%s%smuonCR%smcstatUp'%(proc,box,proc,box,options.year))
                    histoDict['%s_%s_%s%smuonCR%smcstatDown'%(proc,box,proc,box,options.year)] = h.Clone('%s_%s_%s%smuonCR%smcstatDown'%(proc,box,proc,box,options.year))

    uncorrelate(histoDict, 'mcstat')
    
    outFile = 'datacard_muonCR.root'
    outFileHist = 'datacard_muonCR_hist.root'
    
    outputFile = rt.TFile.Open(options.odir+'/'+outFile,'recreate')
    w = rt.RooWorkspace('w_muonCR')
    w.factory('x[%i,%i,%i]'%(MASS_LO,MASS_LO,MASS_HI))
    w.var('x').setBins(MASS_BINS)

    outputFileHist = rt.TFile.Open(options.odir+'/'+outFileHist,'recreate')
    for key, histo in histoDict.iteritems():
        outputFileHist.cd()
        histo.Write(key)
        ds = rt.RooDataHist(key,key,rt.RooArgList(w.var('x')),histo)
        getattr(w,'import')(ds, rt.RooCmdArg())
    outputFileHist.Close()

    outputFile.cd()
    w.Write()
    outputFile.Close()
    txtfileName = outFile.replace('.root','.txt')

    print(histoDict.keys())
    print(histoDict['qcd_pass'])
    print(histoDict['qcd_pass'].GetNbinsX())
    print(histoDict['qcd_pass'].IntegralAndError(1,histoDict['qcd_pass'].GetNbinsX(),array.array('d',[0.0])))
    writeDataCard(boxes,txtfileName,sigs,bkgs,histoDict,options)
    print '\ndatacard:\n'
    print('%s/%s'%(options.odir,txtfileName))
    os.system('cat %s/%s'%(options.odir,txtfileName))



if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option('--lumi', dest='lumi', type=float, default = 20,help='lumi in 1/fb ', metavar='lumi')
    parser.add_option('-i','--ifile', dest='ifile', default = './',help='directory with data', metavar='ifile')
    parser.add_option('-o','--odir', dest='odir', default = './',help='directory to write cards', metavar='odir')
    parser.add_option('-y' ,'--year', type='choice', dest='year', default ='2016',choices=['2016','2017','2018'],help='switch to use different year ', metavar='year')
    parser.add_option('--suffix', dest='suffix', default='', help='suffix for conflict variables',metavar='suffix')
    parser.add_option('--no-mcstat-shape', action='store_true', dest='noMcStatShape', default =False,help='change mcstat uncertainties to lnN', metavar='noMcStatShape')
    
    (options, args) = parser.parse_args()

    if options.suffix!='':
        options.suffix='_'+options.suffix
    main(options, args)
