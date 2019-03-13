import os
import math
import array
import ROOT
import warnings
import sys
import warnings
import json

def slice_it(li, cols=2):
    print 'slicing list'
    start = 0
    for i in xrange(cols):
        stop = start + len(li[i::cols])
        yield li[start:stop]
        start = stop

def loopOverEntries(iFile,iTree):
    print 'looping over entries %s'%iFile
    lFile = TFile.Open(iFile)
    lTree = lFile.Get(iTree)
    lEntries = lTree.GetEntriesFast()
    lFile.Close()
    return lEntries

def massIterable(massList):
    if len(massList.split(','))==1:
        massIterableList = [massList]
    else:
        massIterableList = list(eval(massList))
    return massIterableList

def exec_me(command, dryRun=False):
    print command
    if not dryRun:
        os.system(command)

def getPuHistogram(iSample,iPuPath):
    if os.path.isfile(iPuPath):
        return iPuPath
    else:
        for i0,itf in enumerate(tfiles[iSample]):
            f_puMC = ROOT.TFile.Open(itf)
            lTmp = f_puMC.Get("Pu")
            lTmp.SetDirectory(0)
            f_puMC.Close()
            print i0
            if i0 == 0:
                lHPu = lTmp.Clone()
            else:
                lHPu.Add(lTmp)
            lHPu.SetDirectory(0)
        fOut=ROOT.TFile.Open(iPuPath,'RECREATE')
        lHPu.Write()
        fOut.Close()
        os.system("rm data.tgz")
        os.system("tar -zcvf data.tgz data")
        return iPuPath

def getNentries(iFile,iFilePath):
    print 'get N entries for %s in filepath %s'%(iFile,iFilePath)
    n = 0
    for i0,itf in enumerate(tfiles[iFile]):
        print tfiles[iFile]
        lFile = TFile.Open(iFilePath+itf)
        lTmp = lFile.Get("NEvents")
        lTmp.SetDirectory(0)
        lFile.Close()
        if i0 == 0:
            lHNevents = lTmp.Clone()
        else:
            lHNevents.Add(lTmp)
            lHNevents.SetDirectory(0)
        n += lTmp.GetBinContent(1)
    print 'Compare n %i with nevents %i'%(n,lHNevents.GetBinContent(1))
    return lHNevents.GetBinContent(1)

def getXsection(self,fDataSet,xSectionFile):
    thisXsection = 1.0
    FoundXsection = False
    print "XSEC:: using xsection files from : ",xSectionFile
    with open(xSectionFile) as xSections:
        for line in xSections:
            if line[0]=="\n" or line[0]=="#": continue
            line       = line.strip().split()
            DataSetRef = line[0]
            xSection   = line[1]
            if fDataSet == DataSetRef:
                thisXsection = eval(xSection)
                FoundXsection = True
                break
    if not FoundXsection:
        print "NormSampleContainer:: Cannot find xsection for %s",fDataSet
        sys.exit()
    return thisXsection

def getLumiWeight(iLabel,iFilePath,iLumi):
    print 'get Lumi Weight for label %s, filepath %s and lumi %3.2f'%(iLabel,iFilePath,iLumi)
    fXSec = getXSection(xsecdict[iLabel])
    fNentries = getNentries(iLabel,iFilePath)
    fWeight = (iLumi * fXSec * 1000) / fNentries
    print 'lumi %.2f, xsec %.2f , 1000, nent %.3f: weight %f'%(iLumi,fXSec,fNentries,fWeight)
    return fWeight

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
    f_puMC = ROOT.TFile.Open(iSample)
    lpuMC= f_puMC.Get("Pu")
    lpuMC.Scale(1/lpuMC.Integral())
    lpuMC.SetDirectory(0)
    f_puMC.Close()
    f_puData = ROOT.TFile.Open(fpuData)
    lpuData= f_puData.Get("pileup")
    lpuData.Scale(1/lpuData.Integral())
    lpuData.SetDirectory(0)
    f_puData.Close()
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

def getN2DDT(ih2ddt,iMass,iPt):
    iRho = 2.*math.log(iMass/iPt);
    lRho = ih2ddt.GetXaxis().FindBin(iRho);
    lPt = ih2ddt.GetYaxis().FindBin(iPt);
    if iRho > ih2ddt.GetXaxis().GetBinUpEdge( ih2ddt.GetXaxis().GetNbins() ): lRho = ih2ddt.GetXaxis().GetNbins();
    if iRho < ih2ddt.GetXaxis().GetBinLowEdge( 1 ): lRho = 1;
    if iPt > ih2ddt.GetYaxis().GetBinUpEdge( ih2ddt.GetYaxis().GetNbins() ): lPt = ih2ddt.GetYaxis().GetNbins();
    if iPt < ih2ddt.GetYaxis().GetBinLowEdge( 1 ): lRho = 1;
    return ih2ddt.GetBinContent(lRho,lPt);

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
    if ltrigweight <= 0 or ltrigweightDown <= 0 or ltrigweightUp <= 0:
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
    if lweight <= 0 or lweightDown <= 0 or lweightUp <= 0:
        lweight = 1
        lweightDown = 1
        lweightUp = 1
    return lweight,lweightUp,lweightDown

def correctPrefiring(iPt,iEta,iType=0):
    if iType == 0:
        fweight = fprefire_eff_jets.GetBinContent(fprefire_eff_jets.FindBin(iEta,iPt))
    elif iType == 1:
        fweight = fprefire_eff_photons.GetBinContent(fprefire_eff_photons.FindBin(iEta,iPt))
    else:
        fweight = 1;
    return fweight;

def setupScaleWZ(iTag,iPt):
    lFile = ROOT.TFile.Open("data/plots%s.root"%iTag)
    l2017 = lFile.Get("%sbosonpt"%iTag)
    l2016 = lFile.Get("%s_2016bosonpt"%iTag)
    l2017.SetDirectory(0)
    l2016.SetDirectory(0)
    lkfactwz = l2017.Clone("kfactwz")
    lkfactwz.Divide(l2016)
    lkfactwz.SetDirectory(0)
    lFile.Close()
    iPtMin_2017=250; iPtMax_2017=1200;
    iPt_2017 = iPt
    if iPt < iPtMin_2017: iPt_2017 = iPtMin_2017
    if iPt > iPtMax_2017: iPt_2017 = iPtMax_2017
    pWeight = 1
    pWeight = lkfactwz.GetBinContent(lkfactwz.FindBin(iPt_2017));
    return pWeight

def setupkFactors(iFile,iPt):
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

    iPtMin=200; iPtMax=1000;
    iPt_2016 = iPt
    if iPt < iPtMin: iPt_2016 = iPtMin
    if iPt > iPtMax: iPt_2016 = iPtMax
    hEWK_Z.Divide(hQCD_Z);
    hEWK_W.Divide(hQCD_W);
    hQCD_Z.Divide(hLO_Z);
    hQCD_W.Divide(hLO_W);
    f_kfactors_W_2017 = ROOT.TFile.Open("data/WJetsCorr_old.root")
    hQCD_W_2017 = f_kfactors_W_2017.Get('NLO')
    hQCD_W_2017.SetDirectory(0)
    f_kfactors_W_2017.Close()
    f_kfactors_Z_2017 = ROOT.TFile.Open("data/ZJetsCorr_old.root")
    hQCD_Z_2017 = f_kfactors_Z_2017.Get('NLO')
    hQCD_Z_2017.SetDirectory(0)
    f_kfactors_Z_2017.Close()
    iPtMin_2017=250; iPtMax_2017=1200;
    iPt_2017 = iPt
    if iPt < iPtMin_2017: iPt_2017 = iPtMin_2017
    if iPt > iPtMax_2017: iPt_2017 = iPtMax_2017
    if 'VectorDiJet' in iFile:
        if 'Mchi' not in iFile:
            iQCDKF = hQCD_Z.GetBinContent(hQCD_Z.FindBin(iPt_2016));
            ivjetsKF = DY_SF; #*iQCDKF;                                                                                                                                           
            iEWKKF = 1;
            iQCDKF = DY_SF;
        else:
            iQCDKF = hQCD_Z_2017.GetBinContent(hQCD_Z_2017.FindBin(iPt_2017));
            ivjetsKF = iQCDKF;
            #ivjetsKF = DY_SF;                                                                                                                                                   
            iEWKKF = 1;
    elif 'WJetsToQQ' in iFile:
        if 'HT180' in iFile:
            iQCDKF = hQCD_W.GetBinContent(hQCD_W.FindBin(iPt_2016));
            iEWKKF = hEWK_W.GetBinContent(hEWK_W.FindBin(iPt_2016));
            wscale=[1.0,1.0,1.0,1.20,1.25,1.25,1.0];
            ptscale=[0, 500, 600, 700, 800, 900, 1000,3000];
            ptKF=1.
            for i in range(0, len(ptscale)):
                if iPt_2016 > ptscale[i] and iPt_2016<ptscale[i+1]:  ptKF=wscale[i]
            ivjetsKF = W_SF*iEWKKF*iQCDKF*ptKF;
            iQCDKF = iQCDKF*ptKF*W_SF
            #print 'pt: %f, k-factor w old: %f, qcd %f, ewk %f and 1.35 and pt'%(iPt,ivjetsKF,iQCDKF,iEWKKF)                                                                    
        else:
            iQCDKF = hQCD_W_2017.GetBinContent(hQCD_W_2017.FindBin(iPt_2017));
            iEWKKF = hEWK_W.GetBinContent(hEWK_W.FindBin(iPt_2017));
            ivjetsKF = iEWKKF*iQCDKF;
            #print 'pt: %f, k-factor w new: %f, qcd %f, ewk %f'%(iPt,ivjetsKF,iQCDKF,iEWKKF)                                                                                     
    elif 'DYJets' in iFile:
        iEWKKF = hEWK_Z.GetBinContent(hEWK_Z.FindBin(iPt_2016));
        iQCDKF = hQCD_W.GetBinContent(hQCD_W.FindBin(iPt_2016));
        ivjetsKF = DY_SF*iEWKKF;
        iQCDKF = DY_SF;
        #print 'pt: %f, k-factor dy: %f, qcd %f, ewk %f and 1.45'%(iPt,ivjetsKF,iQCDKF,iEWKKF) 
    elif 'ZJetsToQQ' in iFile:
        iEWKKF = hEWK_Z.GetBinContent(hEWK_Z.FindBin(iPt_2017));
        iQCDKF = hQCD_Z_2017.GetBinContent(hQCD_Z_2017.FindBin(iPt_2017));
        ivjetsKF = iQCDKF*iEWKKF;
        #print 'pt: %f, k-factor z: %f, qcd %f, ewk %f'%(iPt,ivjetsKF,iQCDKF,iEWKKF)  
    else:
        ivjetsKF = 1;
        iQCDKF = 1;
        iEWKKF = 1;
    return ivjetsKF,iQCDKF,iEWKKF;
