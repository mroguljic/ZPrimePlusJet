import ROOT as rt
import array
import re
rt.gROOT.SetBatch()

from buildRhalphabet_for2017 import *

def main(options,args):

    jet_type = options.jet
    sigName = 'zqq'
    muonCR = options.isMuonCR

    sigs = [sigName+str(m) for m in [50, 75, 100, 125, 150, 200, 250, 300]]
    if jet_type == 'CA15':
        sigs = [sigName+str(m) for m in [50, 75, 100, 125, 150, 200, 250, 300, 350, 400, 450, 500]]
    if options.is2016:
        for iS,S in enumerate(sigs):
            sigs[iS] = S+'_2016'
    histoDict = {};
    tfile = r.TFile.Open(options.ifile)
    numberOfMassBins = MASSBINS[options.jet]; #options.nmass;                                                                                                                                                                                     
    histoDict["data_obs_pass"] = tfile.Get('data_obs_pass').Clone()
    numberOfPtBins = histoDict["data_obs_pass"].GetYaxis().GetNbins(); #options.npt;
    if muonCR:
        numberOfPtBins = 1

    for proc in sigs:
        for box in ['pass','fail']:
            #print 'getting histogram for process: %s_%s'%(proc,box)
            histoDict['%s_%s'%(proc,box)] = tfile.Get('%s_%s'%(proc,box)).Clone()
            matchString = '_matched'
            histoDict['%s_%s%s'%(proc,box,matchString)] = tfile.Get('%s_%s%s'%(proc,box,matchString)).Clone()
            for syst in ['JER','JES','Pu','trigger']:
                #print 'getting histogram for process: %s_%s_%sUp'%(proc,box,syst)
                histoDict['%s_%s_%sUp'%(proc,box,syst)] = tfile.Get('%s_%s_%sUp'%(proc,box,syst)).Clone()
                #print 'getting histogram for process: %s_%s_%sDown'%(proc,box,syst)
                histoDict['%s_%s_%sDown'%(proc,box,syst)] = tfile.Get('%s_%s_%sDown'%(proc,box,syst)).Clone()

    rates = {}
    mcstatErrs = {}
    jesErrs = {}
    jerErrs = {}
    puErrs = {}
    triggerErrs = {}
    jesGraph = {}
    jerGraph = {} 
    mcstatGraph = {}
    puGraph = {}
    triggerGraph = {}
    for box in ['pass','fail']:
        for i in range(1,numberOfPtBins+1):
            jesGraph[box, i] = rt.TGraph(len(sigs))
            jerGraph[box, i] = rt.TGraph(len(sigs))
            puGraph[box, i] = rt.TGraph(len(sigs))
            triggerGraph[box, i] = rt.TGraph(len(sigs))
            mcstatGraph[box, i] = rt.TGraph(len(sigs))
            jesGraph[box, i].SetName('jes_%s_cat%i'%(box,i))
            jerGraph[box, i].SetName('jer_%s_cat%i'%(box,i))
            puGraph[box, i].SetName('pu_%s_cat%i'%(box,i))
            mcstatGraph[box, i].SetName('mcstat_%s_cat%i'%(box,i))
            triggerGraph[box, i].SetName('trigger_%s_cat%i'%(box,i))

    re_zqq = re.compile("zqq(?P<mass>\d+)")
    for i_sig, proc in enumerate(sigs):
        re_match = re_zqq.search(proc)
        mass = int(re_match.group("mass"))
        #print 'MASS ',mass,' i_sig ',i_sig, ' proc'
        for box in ['pass','fail']:
            for i in range(1,numberOfPtBins+1):
                if muonCR:
                    histo = histoDict['%s_%s'%(proc,box)]
                    error = array.array('d',[0.0])
                    rate = histoDict['%s_%s'%(proc,box)].IntegralAndError(1,histo.GetNbinsX(),error)
                else:
                    matchString = '_matched'
                    if 'pass' in box:
                        histo = histoDict['%s_%s%s'%(proc,box,matchString)]
                    else:
                        histo = histoDict['%s_%s%s'%(proc,box,matchString)]
                    error = array.array('d',[0.0])
                    rate = histo.IntegralAndError(1,histo.GetNbinsX(),i,i,error)
                if rate>0:
                    mcstatErrs['%s_%s'%(proc,box),i,1] = 1.0+(error[0]/rate)
                else:
                    mcstatErrs['%s_%s'%(proc,box),i,1] = 1.0

                if not muonCR:
                    rate = histoDict['%s_%s'%(proc,box)].Integral(1, numberOfMassBins, i, i)        
                if rate>0:
                    if muonCR:
                        rateJESUp = histoDict['%s_%s_JESUp'%(proc,box)].Integral()
                        rateJESDown = histoDict['%s_%s_JESDown'%(proc,box)].Integral()
                        rateJERUp = histoDict['%s_%s_JERUp'%(proc,box)].Integral()
                        rateJERDown = histoDict['%s_%s_JERDown'%(proc,box)].Integral()
                        ratePuUp = histoDict['%s_%s_PuUp'%(proc,box)].Integral()
                        ratePuDown = histoDict['%s_%s_PuDown'%(proc,box)].Integral()
                        rateTriggerUp = histoDict['%s_%s_triggerUp'%(proc,box)].Integral()
                        rateTriggerDown = histoDict['%s_%s_triggerDown'%(proc,box)].Integral()
                    else:
                        rateJESUp = histoDict['%s_%s_JESUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        rateJESDown = histoDict['%s_%s_JESDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        rateJERUp = histoDict['%s_%s_JERUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        rateJERDown = histoDict['%s_%s_JERDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        ratePuUp = histoDict['%s_%s_PuUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        ratePuDown = histoDict['%s_%s_PuDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        rateTriggerUp = histoDict['%s_%s_triggerUp'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                        rateTriggerDown = histoDict['%s_%s_triggerDown'%(proc,box)].Integral(1, numberOfMassBins, i, i)
                    jesErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJESUp-rate)+abs(rateJESDown-rate))/(2.*rate)   
                    jerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateJERUp-rate)+abs(rateJERDown-rate))/(2.*rate) 
                    puErrs['%s_%s'%(proc,box)] =  1.0+(abs(ratePuUp-rate)+abs(ratePuDown-rate))/(2.*rate)
                    triggerErrs['%s_%s'%(proc,box)] =  1.0+(abs(rateTriggerUp-rate)+abs(rateTriggerDown-rate))/(2.*rate)
                else:
                    jesErrs['%s_%s'%(proc,box)] =  1.0
                    jerErrs['%s_%s'%(proc,box)] =  1.0
                    puErrs['%s_%s'%(proc,box)] =  1.0
                    triggerErrs['%s_%s'%(proc,box)] =  1.0
                #print proc, 'cat %i'%i, 'JES', jesErrs['%s_%s'%(proc,box)], 'JER' ,jerErrs['%s_%s'%(proc,box)], 'PU', puErrs['%s_%s'%(proc,box)], 'mcstat', mcstatErrs['%s_%s'%(proc,box),i,1], 'trigger', triggerErrs['%s_%s'%(proc,box)]
                jesGraph[box, i].SetPoint(i_sig, mass,  jesErrs['%s_%s'%(proc,box)])
                jerGraph[box, i].SetPoint(i_sig, mass,  jerErrs['%s_%s'%(proc,box)])
                puGraph[box, i].SetPoint(i_sig, mass,  puErrs['%s_%s'%(proc,box)])
                mcstatGraph[box, i].SetPoint(i_sig, mass,  mcstatErrs['%s_%s'%(proc,box),i,1])
                triggerGraph[box, i].SetPoint(i_sig, mass,  triggerErrs['%s_%s'%(proc,box)])


    if jet_type == 'CA15':
        hist = rt.TH1D('hist','hist',100,100, 500)
    else:
        hist = rt.TH1D('hist','hist',100,50, 350)
    hist.SetMinimum(1)
    if muonCR: 
        hist.SetMaximum(2)
    else:
        hist.SetMaximum(1.4)
        
    c = rt.TCanvas('c','c',500,400)
    if muonCR:
        muonString = '_muonCR'
    else:
        muonString = ''
    tfile_out = rt.TFile.Open(options.ifile.replace('.root','_lnN.root'),'recreate')
    for box in ['pass','fail']:
        for i in range(1,numberOfPtBins+1):
            hist.SetTitle('%s %s %s cat%i%s'%(jet_type, sigName, box, i,muonString))
            hist.Draw()
            jerGraph[box,i].Draw("csame")
            jesGraph[box,i].Draw("csame")
            jesGraph[box,i].SetLineColor(rt.kBlue)
            jesGraph[box,i].SetLineStyle(2)
            puGraph[box,i].Draw("csame")
            puGraph[box,i].SetLineColor(rt.kRed)
            puGraph[box,i].SetLineStyle(3)
            #triggerGraph[box,i].Draw("csame")
            triggerGraph[box,i].SetLineColor(rt.kViolet)
            triggerGraph[box,i].SetLineStyle(1)
            mcstatGraph[box,i].Draw("csame")
            mcstatGraph[box,i].SetLineColor(rt.kGreen)
            mcstatGraph[box,i].SetLineStyle(4)
            legend = rt.TLegend(0.5, 0.7, 0.9, 0.9)
            legend.SetFillStyle(0)
            legend.SetBorderSize(0)
            legend.SetTextSize(0.038)
            legend.SetTextFont(42)
            legend.AddEntry(jerGraph[box,i],'JER','l')
            legend.AddEntry(jesGraph[box,i],'JES','l')
            legend.AddEntry(puGraph[box,i],'PU', 'l')
            legend.AddEntry(mcstatGraph[box,i],'mcstat', 'l')
            #legend.AddEntry(triggerGraph[box,i],'trigger', 'l')
            legend.Draw('same')
            #c.Print('lnN_%s_%s_%s_cat%i%s.pdf'%(jet_type,sigName,box,i,muonString))
            #c.Print('lnN_%s_%s_%s_cat%i%s.png'%(jet_type,sigName,box,i,muonString))
            tfile_out.cd()
            jerGraph[box,i].Write()
            jesGraph[box,i].Write()
            puGraph[box,i].Write()
            mcstatGraph[box,i].Write()
            triggerGraph[box,i].Write()
                   
if __name__ == '__main__':
    parser = OptionParser()
    parser.add_option('-b', action='store_true', dest='noX', default=False, help='no X11 windows')
    parser.add_option('--input', dest='ifile', default = 'histInputs/hist_1DZqq-dataReRecoSpring165eff-3481-Gridv130-final.root',
                      help='file with histogram inputs', metavar='ifile')
    parser.add_option('--jet', dest='jet', default='AK8', help='jet type')
    parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False, help='run on muon CR')
    parser.add_option('--is2016', action='store_true', dest='is2016',  default=False, help='is 2016')

    (options, args) = parser.parse_args()
    
    import tdrstyle
    tdrstyle.setTDRStyle()
    r.gStyle.SetPadTopMargin(0.10)
    r.gStyle.SetPadLeftMargin(0.16)
    r.gStyle.SetPadRightMargin(0.10)
    r.gStyle.SetPalette(1)
    r.gStyle.SetPaintTextFormat("1.1f")
    r.gStyle.SetOptFit(0000)
    r.gROOT.SetBatch()
    
    main(options,args)
        
