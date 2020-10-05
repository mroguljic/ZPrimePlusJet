#!/usr/bin/env python
import ROOT as r, sys, math, os
from multiprocessing import Process
from optparse import OptionParser
from operator import add
import math
import sys
import time
import array
import re 
import numpy as np
r.gSystem.Load(os.getenv('CMSSW_BASE')+'/lib/'+os.getenv('SCRAM_ARCH')+'/libHiggsAnalysisCombinedLimit.so')

sys.path.insert(0, '/uscms_data/d3/ncsmith/dazsle/sl7combine/CMSSW_10_2_13/src/rhalphalib')
import rhalphalib as rl
rl.util.install_roofit_helpers()

# including other directories
import tools as tools
from RootIterator import RootIterator
from hist import *
import bernstein

##############################################################################
##############################################################################
#### B E G I N N I N G   O F   C L A S S
##############################################################################
##############################################################################

class RhalphabetBuilder():
    def __init__(self, pass_hists, fail_hists, input_file, out_dir, nr=2, np=1, mass_nbins=23, mass_lo=40, mass_hi=201,
                 blind_lo=110, blind_hi=131, rho_lo=-6, rho_hi=-2.1, blind=False, mass_fit=False, freeze_poly=False,
                 remove_unmatched=False, input_file_loose=None,suffix=None,sf_dict={},mass_hist_lo=40,mass_hist_hi=201,qcdTFpars={},exp=False,multi=False,pseudo=False):
        self._pass_hists = pass_hists
        self._fail_hists = fail_hists
        self._mass_fit = mass_fit
        self._freeze = freeze_poly
        self._inputfile = input_file
        self._inputfile_loose = input_file_loose
        self._sf_dict = sf_dict
        self._pseudo = pseudo
        if suffix:
            if suffix[0]!='_': self._suffix = '_'+suffix 
        else:
            self._suffix = ''
        print "RhalphabetBuilder::init : suffix = ", self._suffix

        self._output_path = "{}/base.root".format(out_dir)
        self._rhalphabet_output_path = "{}/rhalphabase.root".format(out_dir)

        self._outfile_validation = r.TFile.Open("{}/validation.root".format(out_dir), "RECREATE");

        self._mass_nbins = mass_nbins
        self._mass_lo = mass_lo
        self._mass_hi = mass_hi
        self._mass_hist_lo = mass_hist_lo
        self._mass_hist_hi = mass_hist_hi
        self._blind = blind
        self._mass_blind_lo = blind_lo
        self._mass_blind_hi = blind_hi
        self._rho_lo = rho_lo
        self._rho_hi = rho_hi

        self._remove_unmatched = remove_unmatched
        print "number of mass bins and lo/hi: ", self._mass_nbins, self._mass_lo, self._mass_hi;

        # polynomial order for fit
        self._poly_degree_rho = nr  # 1 = linear ; 2 is quadratic
        self._poly_degree_pt = np  # 1 = linear ; 2 is quadratic
        self._poly_degree_rho_exp = nr  # 1 = linear ; 2 is quadratic
        self._poly_degree_pt_exp = np  # 1 = linear ; 2 is quadratic
        self._exp = exp
        self._multi = multi
        if self._multi:
            # fixed exp orders for RooMultiPdf tests
            self._poly_degree_rho_exp = 3  # 1 = linear ; 2 is quadratic
            self._poly_degree_pt_exp = 1  # 1 = linear ; 2 is quadratic
        self._pdf_index = r.RooCategory("pdf_index","Index of Pdf which is active")
        self._nptbins = pass_hists["data_obs"].GetYaxis().GetNbins()
        self._pt_lo = pass_hists["data_obs"].GetYaxis().GetBinLowEdge(1)
        self._pt_hi = pass_hists["data_obs"].GetYaxis().GetBinUpEdge(self._nptbins)
        self._ptbins = []
        for ipt in range(0,self._nptbins+1):
            self._ptbins.append(pass_hists["data_obs"].GetYaxis().GetBinLowEdge(ipt+1))
        self._categories=[]
        for ipt in range(1,self._nptbins+1):
            self._categories.append('pass_cat%s'%ipt)
            self._categories.append('fail_cat%s'%ipt)
            

        # define RooRealVars
        self._lMSD = r.RooRealVar("x", "x", self._mass_lo, self._mass_hi)
        self._lMSD.setRange('Low', self._mass_lo, self._mass_blind_lo)
        self._lMSD.setRange('Blind', self._mass_blind_lo, self._mass_blind_hi)
        self._lMSD.setRange('High', self._mass_blind_hi, self._mass_hi)
        # self._lMSD.setBins(self._mass_nbins)
        self._lPt = r.RooRealVar("pt", "pt", self._pt_lo, self._pt_hi)
        self._lPt.setBins(self._nptbins)
        self._lRho = r.RooFormulaVar("rho", "log(x*x/pt/pt)", r.RooArgList(self._lMSD, self._lPt))

        self._lEff = r.RooRealVar("veff", "veff", 0.5, 0., 1.0)

        self._lEffQCD = r.RooRealVar("qcdeff", "qcdeff", 0.01, 0., 10.)
        qcd_pass_integral = 0
        qcd_fail_integral = 0
        if 'qcd' in fail_hists.keys():
            for i in range(1, fail_hists["qcd"].GetNbinsX() + 1):
                for j in range(1, fail_hists["qcd"].GetNbinsY() + 1):
                    if fail_hists["qcd"].GetXaxis().GetBinCenter(i) > self._mass_lo and fail_hists[
                        "qcd"].GetXaxis().GetBinCenter(i) < self._mass_hi:
                        qcd_fail_integral += fail_hists["qcd"].GetBinContent(i, j)
                        qcd_pass_integral += pass_hists["qcd"].GetBinContent(i, j)
            if qcd_fail_integral > 0:
                qcdeff = qcd_pass_integral / qcd_fail_integral
                self._lEffQCD.setVal(qcdeff)
        else:
            print "WARNING: cannot find qcd MC in input histograms, using default qcd eff = 0.015"
            qcdeff = 0.015
            self._lEffQCD.setVal(qcdeff)
        print "qcdeff = %f" % qcdeff
        self._lDM = r.RooRealVar("dm", "dm", 0., -10, 10)
        self._lShift = r.RooFormulaVar("shift", self._lMSD.GetName() + "-dm", r.RooArgList(self._lMSD, self._lDM))

        self._all_vars = []
        self._all_shapes = []
        self._all_data = []
        self._all_pars = []

        self._background_names = ["wqq", "zqq", "qcd", "tqq"]
        self._signal_names = [] # for Zbb

        ## qcdTFpars = {'n_rho':n_rho,'n_pT':n_pT,'pars':[p0r0,...]}
        if not qcdTFpars =={}:
            self._qcd_deco_output_path = "{}/qcdfit_decorrelated.root".format(out_dir)
            print('creating output ',self._qcd_deco_output_path)
            f2params    = array.array('d', qcdTFpars['pars'])
            npar        = len(f2params)
            boundaries={}
            boundaries['RHO_LO']=-6.
            boundaries['RHO_HI']=-2.1
            boundaries['PT_LO' ]= 450.
            boundaries['PT_HI' ]= 1200.

            f_bernstein = bernstein.genBernsteinTF(qcdTFpars['n_rho'],qcdTFpars['n_pT'],boundaries,IsMsdPt=True,qcdeff=True,rescale=True)
            self._tf2   = r.TF2("f2", f_bernstein, 40,201,450,1200,npar)
            self._tf2.SetParameters(f2params)
            self._qcdTFpars = qcdTFpars
        else:
            self._qcdTFpars = {}


    def run(self):
        self.LoopOverPtBins()

    def addHptShape(self):
        fbase = r.TFile.Open(self._output_path, 'update')

        #categories = ['pass_cat1', 'pass_cat2', 'pass_cat3', 'pass_cat4', 'pass_cat5', 'pass_cat6',
        #              'fail_cat1', 'fail_cat2', 'fail_cat3', 'fail_cat4', 'fail_cat5', 'fail_cat6']

        sigs = self._signal_names
        wbase = {}
        for cat in self._categories:
            wbase[cat] = fbase.Get('w_%s' % cat)
        x = wbase[self._categories[0]].var('x')
        rooCat = r.RooCategory('cat', 'cat')

        histpdf = {}
        datahist = {}
        hptpdfUp_s = {}
        hptpdfDown_s = {}
        signorm = {}
        all_int = 0
        all_int_rescale_Down = 0
        all_int_rescale_Up = 0
        proc = 'hqq125'
        total_unc = 1.3 # -> cat6 has 130% SF w.r.t cat1
        #total_unc = 1.6 # -> cat6 has 160% SF w.r.t. cat1
        #total_unc = 3.0 # -> cat6 has 300% SF w.r.t. cat1
        iptlo = self._ptbins[0]
        ipthi = self._ptbins[-2]
        for cat in self._categories:
            iptbin = int(cat[-1])-1 # returns 0 for cat1, 1 for cat2, etc.
            ipt = self._ptbins[iptbin]
            rooCat.defineType(cat)
            datahist['%s_%s' % (proc, cat)] = wbase[cat].data('%s_%s' % (proc, cat))
            myint = datahist['%s_%s' % (proc, cat)].sumEntries()
            all_int_rescale_Up += myint * (1 + (ipt-iptlo) * (total_unc-1.) / (ipthi-iptlo))
            all_int_rescale_Down += myint / (1 + (ipt-iptlo) * (total_unc-1.) / (ipthi-iptlo))
            all_int += myint
            #print cat, (1 + (ipt-iptlo) * (total_unc-1.) / (ipthi-iptlo))

        for cat in self._categories:           
            iptbin = int(cat[-1])-1 # returns 0 for cat1, 1 for cat2, etc.
            ipt = self._ptbins[iptbin]
            rooCat.defineType(cat)
            histpdf['%s_%s' % (proc, cat)] = r.RooHistPdf('histpdf_%s_%s' % (proc, cat),
                                                          'histpdf_%s_%s' % (proc, cat),
                                                          r.RooArgSet(wbase[cat].var('x')),
                                                          datahist['%s_%s' % (proc, cat)])

            hist_up = histpdf['%s_%s' % (proc, cat)].createHistogram("x")
            hist_down = histpdf['%s_%s' % (proc, cat)].createHistogram("x")

            rescaled_int_up = datahist['%s_%s' % (proc, cat)].sumEntries() * (1. + (ipt-iptlo) * (total_unc-1.) / (ipthi-iptlo)) * (all_int / all_int_rescale_Up)
            rescaled_int_down = datahist['%s_%s' % (proc, cat)].sumEntries() / (1. + (ipt-iptlo) * (total_unc-1.) / (ipthi-iptlo)) * (all_int / all_int_rescale_Down)

            if hist_up.Integral()>0:
                hist_up.Scale(rescaled_int_up/hist_up.Integral())
            if hist_down.Integral()>0:
                hist_down.Scale(rescaled_int_down/hist_down.Integral())

            # validation
            self._outfile_validation.cd()
            hist_up.SetName('%s_%s_%s'%(proc,cat,'CMS_gghbb_ggHptShapeUp'))
            hist_up.Write()
            hist_down.SetName('%s_%s_%s'%(proc,cat,'CMS_gghbb_ggHptShapeDown'))
            hist_down.Write()

            hptpdfUp_s[cat] = r.RooDataHist('%s_%s_%s'%(proc,cat,'CMS_gghbb_ggHptShapeUp'), '%s_%s_%s'%(proc,cat,'CMS_gghbb_ggHptShapeUp'), r.RooArgList(x), hist_up)
            hptpdfDown_s[cat] = r.RooDataHist('%s_%s_%s'%(proc,cat,'CMS_gghbb_ggHptShapeDown'), '%s_%s_%s'%(proc,cat,'CMS_gghbb_ggHptShapeDown'), r.RooArgList(x), hist_down)

            getattr(wbase[cat], 'import')(hptpdfUp_s[cat], r.RooFit.RecycleConflictNodes())
            getattr(wbase[cat], 'import')(hptpdfDown_s[cat], r.RooFit.RecycleConflictNodes())

        up = 0
        down = 0
        nom = 0
        for cat in self._categories:
            nom  += datahist['%s_%s' % (proc, cat)].sumEntries()
            up += hptpdfUp_s[cat].sumEntries()
            down += hptpdfDown_s[cat].sumEntries()
            #print cat, datahist['%s_%s' % (proc, cat)].sumEntries()
            #print cat, hptpdfUp_s[cat].sumEntries()
            #print cat, hptpdfDown_s[cat].sumEntries()
        #print "total", nom
        #print "total", up
        #print "total", down
        
        icat = 0
        for cat in self._categories:
            if icat == 0:
                wbase[cat].writeToFile(self._output_path, True)
            else:
                wbase[cat].writeToFile(self._output_path, False)
            icat += 1

    def createdeco(self):
        qcdralpha = self._qcdTFpars['fitpath']
        qcdfit    = r.TFile.Open(qcdralpha).Get("w_pass_cat1").obj("fitresult_simPdf_s_data_obs")

        #print(qcdfit)
        year = self._suffix.replace("_",'') 
        #print('opening fout ',self._qcd_deco_output_path)
        fout = r.TFile.Open(self._qcd_deco_output_path, "recreate")
        # print('opening rhalp ',self._rhalphabet_output_path)
        fralphabase = r.TFile.Open(self._rhalphabet_output_path, 'READ')
        ws = r.RooWorkspace("qcdfit_deco_%s" % year)

        def getconst(name):
            p = qcdfit.constPars().find(name)
            if p == None:
                raise ValueError(name)
            return p.getVal()

        ptbins = np.array([450, 500, 550, 600, 675, 800, 1200])
        npt = len(ptbins) - 1
        msdbins = np.linspace(40, 201, 24)
        msd = rl.Observable('x', msdbins)
    
        # here we derive these all at once with 2D array
        ptpts, msdpts = np.meshgrid(ptbins[:-1] + 0.3 * np.diff(ptbins), msdbins[:-1] + 0.5 * np.diff(msdbins), indexing='ij')
        rhopts = 2*np.log(msdpts/ptpts)
        ptscaled = (ptpts - 450.) / (1200. - 450.)
        rhoscaled = (rhopts - (-6)) / ((-2.1) - (-6))
        validbins = (rhoscaled >= 0) & (rhoscaled <= 1)
        validbins[:, 0] = False  # cut msd 40-47
        validbins[:, 1] = False  # cut msd 47-54
        if self._blind:
            validbins[:, 10:13] = False  # blind
        rhoscaled[~validbins] = 1  # we will mask these out later
    
        tf_MCtempl = rl.BernsteinPoly("qcdfit_tf_%s" % year, (self._qcdTFpars['n_pT'], self._qcdTFpars['n_rho']), ['pt', 'rho'], limits=(-10, 10))
        param_names = ['p%dr%d_%s' % (ipt, irho, year) for ipt in range(3) for irho in range(3)]
        decoVector = rl.DecorrelatedNuisanceVector.fromRooFitResult(tf_MCtempl.name + '_deco', qcdfit, param_names)
        tf_MCtempl.parameters = decoVector.correlated_params.reshape(tf_MCtempl.parameters.shape)
        qcdeff = getconst("qcdeff_%s" % year)
        tf_MCtempl_params_final = tf_MCtempl(ptscaled, rhoscaled)
    
        tf_dataResidual = rl.BernsteinPoly("dataResidual_%s" % year, (self._poly_degree_pt, self._poly_degree_rho), ['pt', 'rho'], limits=(-10, 10), coefficient_transform=None)
        tf_dataResidual_params = tf_dataResidual(ptscaled, rhoscaled)
        tf_params = qcdeff * tf_MCtempl_params_final * tf_dataResidual_params

        wbase = fralphabase.Get('w_pass_cat1')  # to get 'prefit' params
        for (i, j), param in np.ndenumerate(tf_dataResidual.parameters):
            param.name = 'p%dr%d_%s' % (i, j, year)
            oldvar = wbase.var(param.name)
            if oldvar == None:
                raise Exception("can't find %s in rhalphabase! maybe wrong TF order?" % param.name)
            param.value = oldvar.getVal()
            param.error = oldvar.getError()
            # print("setting %r to %f" % (param, param.value))

        fout.cd()
        for ipt in range(npt):
            wbase = fralphabase.Get('w_fail_cat%d' % (ipt + 1, ))
            qcdinV = np.full(msd.nbins, None)
            qcduncV = np.full(msd.nbins, None)
            qcdparamV = np.full(msd.nbins, None)
            for imsd in range(msd.nbins):
                qcdin_name = "qcd_fail_cat{ptcat}_Bin{msdbin}_In_{year}".format(ptcat=ipt + 1, msdbin=imsd + 1, year=year)
                qcdunc_name = "qcd_fail_cat{ptcat}_Bin{msdbin}_Unc_{year}".format(ptcat=ipt + 1, msdbin=imsd + 1, year=year)
                qcdparam_name = "qcd_fail_cat{ptcat}_Bin{msdbin}_{year}".format(ptcat=ipt + 1, msdbin=imsd + 1, year=year)
                qcdin = wbase.var(qcdin_name).getVal()
                qcdunc = wbase.var(qcdunc_name).getVal()
                # already in card
                # card.write("%s flatParam\n" % qcdparam_name)
                valid = validbins[ipt, imsd]
                if not valid and qcdin > 0.:
                    print("nonzero qcdin for bin %d,%d: %d" % (ipt, imsd, qcdin))
                qcdinV[imsd] = rl.IndependentParameter(qcdin_name, qcdin, constant=True)
                qcduncV[imsd] = rl.IndependentParameter(qcdunc_name, qcdunc, constant=True)
                if valid:
                    qcdparamV[imsd] = rl.IndependentParameter(qcdparam_name, 0., lo=-50, hi=50)
                else:
                    qcdparamV[imsd] = rl.IndependentParameter(qcdparam_name, 0., constant=True)
            
            scaledparams = qcdinV * (qcduncV**qcdparamV)
            fail_qcd = rl.ParametericSample('qcd_fail_cat%d_%s' % (ipt + 1, year), rl.Sample.BACKGROUND, msd, scaledparams)
            fail_qcd.renderRoofit(ws)
            pass_qcd = rl.TransferFactorSample('qcd_pass_cat%d_%s' % (ipt + 1, year), rl.Sample.BACKGROUND, tf_params[ipt, :], fail_qcd)
            pass_qcd.renderRoofit(ws)
        ws.Write()

    def prefit(self):

        fbase = r.TFile.Open(self._output_path, 'update')
        fralphabase = r.TFile.Open(self._rhalphabet_output_path, 'update')

        bkgs = self._background_names
        sigs = self._signal_names

        wbase = {}
        wralphabase = {}
        for cat in self._categories:
            wbase[cat] = fbase.Get('w_%s' % cat)
            wralphabase[cat] = fralphabase.Get('w_%s' % cat)

        w = r.RooWorkspace('w')
        w.factory('mu[1.,0.,20.]')
        x = wbase[self._categories[0]].var('x')
        rooCat = r.RooCategory('cat', 'cat')

        mu = w.var('mu')
        epdf_b = {}
        epdf_s = {}
        datahist = {}
        histpdf = {}
        histpdfnorm = {}
        data = {}
        signorm = {}
        for cat in self._categories:
            rooCat.defineType(cat)

        for cat in self._categories:
            norms_b = r.RooArgList()
            norms_s = r.RooArgList()
            if self._multi:
                norms_b.add(wralphabase[cat].function('qcd_multi_%s%s_norm' % (cat, self._suffix)))
                norms_s.add(wralphabase[cat].function('qcd_multi_%s%s_norm' % (cat, self._suffix)))
            else:
                norms_b.add(wralphabase[cat].function('qcd_%s%s_norm' % (cat, self._suffix)))
                norms_s.add(wralphabase[cat].function('qcd_%s%s_norm' % (cat, self._suffix)))
            pdfs_b = r.RooArgList()
            pdfs_s = r.RooArgList()
            if self._multi:
                pdfs_b.add(wralphabase[cat].pdf('qcd_multi_%s%s' % (cat, self._suffix)))
                pdfs_s.add(wralphabase[cat].pdf('qcd_multi_%s%s' % (cat, self._suffix)))
            else:
                pdfs_b.add(wralphabase[cat].pdf('qcd_%s%s' % (cat, self._suffix)))
                pdfs_s.add(wralphabase[cat].pdf('qcd_%s%s' % (cat, self._suffix)))

            data[cat] = wbase[cat].data('data_obs_%s' % cat)
            for proc in (bkgs + sigs):
                if proc == 'qcd': continue

                datahist['%s_%s' % (proc, cat)] = wbase[cat].data('%s_%s' % (proc, cat))
                histpdf['%s_%s' % (proc, cat)] = r.RooHistPdf('histpdf_%s_%s' % (proc, cat),
                                                              'histpdf_%s_%s' % (proc, cat),
                                                              r.RooArgSet(wbase[cat].var('x')),
                                                              datahist['%s_%s' % (proc, cat)])
                getattr(w, 'import')(datahist['%s_%s' % (proc, cat)], r.RooFit.RecycleConflictNodes())
                getattr(w, 'import')(histpdf['%s_%s' % (proc, cat)], r.RooFit.RecycleConflictNodes())
                #getattr(w, 'import')(datahist['%s_%s' % (proc, cat)], r.RooFit.RenameConflictNodes(self._suffix))
                #getattr(w, 'import')(histpdf['%s_%s' % (proc, cat)] , r.RooFit.RenameConflictNodes(self._suffix))
                if 'hqq125' in proc:
                    # signal
                    signorm['%s_%s' % (proc, cat)] = r.RooRealVar('signorm_%s_%s' % (proc, cat),
                                                                  'signorm_%s_%s' % (proc, cat),
                                                                  datahist['%s_%s' % (proc, cat)].sumEntries(),
                                                                  0, 10. * datahist['%s_%s' % (proc, cat)].sumEntries())
                    signorm['%s_%s' % (proc, cat)].setConstant(True)
                    getattr(w, 'import')(signorm['%s_%s' % (proc, cat)], r.RooFit.RecycleConflictNodes())
                    histpdfnorm['%s_%s' % (proc, cat)] = r.RooFormulaVar('histpdfnorm_%s_%s' % (proc, cat),
                                                                         '@0*@1', r.RooArgList(mu, signorm[
                            '%s_%s' % (proc, cat)]))
                    pdfs_s.add(histpdf['%s_%s' % (proc, cat)])
                    norms_s.add(histpdfnorm['%s_%s' % (proc, cat)])
                else:
                    # background
                    histpdfnorm['%s_%s' % (proc, cat)] = r.RooRealVar('histpdfnorm_%s_%s' % (proc, cat),
                                                                      'histpdfnorm_%s_%s' % (proc, cat),
                                                                      datahist['%s_%s' % (proc, cat)].sumEntries(),
                                                                      0, 10. * datahist[
                                                                          '%s_%s' % (proc, cat)].sumEntries())
                    histpdfnorm['%s_%s' % (proc, cat)].setConstant(True)
                    getattr(w, 'import')(histpdfnorm['%s_%s' % (proc, cat)], r.RooFit.RecycleConflictNodes())
                    pdfs_b.add(histpdf['%s_%s' % (proc, cat)])
                    pdfs_s.add(histpdf['%s_%s' % (proc, cat)])
                    norms_b.add(histpdfnorm['%s_%s' % (proc, cat)])
                    norms_s.add(histpdfnorm['%s_%s' % (proc, cat)])

            epdf_b[cat] = r.RooAddPdf('epdf_b_' + cat, 'epdf_b_' + cat, pdfs_b, norms_b)
            epdf_s[cat] = r.RooAddPdf('epdf_s_' + cat, 'epdf_s_' + cat, pdfs_s, norms_s)

            #getattr(w, 'import')(epdf_b[cat], r.RooFit.RecycleConflictNodes())
            #getattr(w, 'import')(epdf_s[cat], r.RooFit.RecycleConflictNodes())
            getattr(w, 'import')(epdf_b[cat], r.RooFit.RenameConflictNodes(self._suffix))
            getattr(w, 'import')(epdf_s[cat], r.RooFit.RenameConflictNodes(self._suffix))

        ## arguments = ["data_obs","data_obs",r.RooArgList(x),rooCat]

        ## m = r.std.map('string, RooDataHist*')()
        ## for cat in categories:
        ##    m.insert(r.std.pair('string, RooDataHist*')(cat, data[cat]))
        ## arguments.append(m)

        ## combData = getattr(r,'RooDataHist')(*arguments)

        cat = self._categories[0]
        args = data[cat].get(0)

        combiner = r.CombDataSetFactory(args, rooCat)

        for cat in self._categories:
            combiner.addSetBin(cat, data[cat])
        combData = combiner.done('data_obs', 'data_obs')

        simPdf_b = r.RooSimultaneous('simPdf_b', 'simPdf_b', rooCat)
        simPdf_s = r.RooSimultaneous('simPdf_s', 'simPdf_s', rooCat)
        for cat in self._categories:
            simPdf_b.addPdf(epdf_b[cat], cat)
            simPdf_s.addPdf(epdf_s[cat], cat)

        mu.setVal(1.)

        getattr(w, 'import')(simPdf_b, r.RooFit.RecycleConflictNodes())
        getattr(w, 'import')(simPdf_s, r.RooFit.RecycleConflictNodes())
        getattr(w, 'import')(combData, r.RooFit.RecycleConflictNodes())

        #w.Print('v')
        simPdf_b = w.pdf('simPdf_b')
        simPdf_s = w.pdf('simPdf_s')
        combData = w.data('data_obs')
        x = w.var('x')
        rooCat = w.cat('cat')
        mu = w.var('mu')
        CMS_set = r.RooArgSet()
        CMS_set.add(rooCat)
        CMS_set.add(x)

        opt = r.RooLinkedList()
        opt.Add(r.RooFit.CloneData(False))
        allParams = simPdf_b.getParameters(combData)
        r.RooStats.RemoveConstantParameters(allParams)
        opt.Add(r.RooFit.Constrain(allParams))

        mu.setVal(1)
        mu.setConstant(True)

        if self._multi:
            pdf_index = w.cat('pdf_index')
            #pdf_index.Print('V')
            pdf_index.setIndex(0)
            pdf_index.setConstant(True)
            for i in range(0,self._poly_degree_rho_exp+1):
                for j in range(0,self._poly_degree_pt_exp+1):
                    w.var('expp'+str(j)+'r'+str(i)+self._suffix).setConstant(True)
                    w.var('expp'+str(j)+'r'+str(i)+self._suffix).Print('v')
            for i in range(0,self._poly_degree_rho+1):
                for j in range(0,self._poly_degree_pt+1):
                    w.var('p'+str(j)+'r'+str(i)+self._suffix).setConstant(False)
                    w.var('p'+str(j)+'r'+str(i)+self._suffix).Print('v')

        if not self._pseudo:
            nll = simPdf_s.createNLL(combData)
            m2 = r.RooMinimizer(nll)
            m2.setStrategy(2)
            m2.setMaxFunctionCalls(100000)
            m2.setMaxIterations(100000)
            m2.setPrintLevel(-1)
            m2.setPrintEvalErrors(-1)
            m2.setEps(1e-5)
            m2.optimizeConst(2)

            migrad_status = m2.minimize('Minuit2', 'migrad')
            improve_status = m2.minimize('Minuit2', 'improve')
            hesse_status = m2.minimize('Minuit2', 'hesse')
            
            fr = m2.save()
        else:
            fr = simPdf_s.fitTo(combData,r.RooFit.Extended(True),r.RooFit.Offset(True),r.RooFit.Strategy(2),r.RooFit.Save(),r.RooFit.Minimizer('Minuit2','migradimproved'))
            #fr = simPdf_s.fitTo(combData,r.RooFit.Extended(True),r.RooFit.SumW2Error(True),r.RooFit.Strategy(2),r.RooFit.Save(),r.RooFit.Minimizer('Minuit2','migradimproved'))
            fr.Print('v')

        if self._multi:
            pdf_index = w.cat('pdf_index')
            pdf_index.setIndex(1)
            pdf_index.setConstant(True)
            for i in range(0,self._poly_degree_rho_exp+1):
                for j in range(0,self._poly_degree_pt_exp+1):
                    w.var('expp'+str(j)+'r'+str(i)+self._suffix).setConstant(False)
                    w.var('expp'+str(j)+'r'+str(i)+self._suffix).Print('v')
            for i in range(0,self._poly_degree_rho+1):
                for j in range(0,self._poly_degree_pt+1):
                    w.var('p'+str(j)+'r'+str(i)+self._suffix).setConstant(True)
                    w.var('p'+str(j)+'r'+str(i)+self._suffix).Print('v')
                
                nll = simPdf_s.createNLL(combData)
                m2 = r.RooMinimizer(nll)
                m2.setStrategy(2)
                m2.setMaxFunctionCalls(100000)
                m2.setMaxIterations(100000)
                m2.setPrintLevel(-1)
                m2.setPrintEvalErrors(-1)
                m2.setEps(1e-5)
                m2.optimizeConst(2)

            migrad_status = m2.minimize('Minuit2', 'migrad')
            improve_status = m2.minimize('Minuit2', 'improve')
            hesse_status = m2.minimize('Minuit2', 'hesse')
            
            fr = m2.save()
            #fr.Print('v')

            pdf_index.setConstant(False)
            for i in range(0,self._poly_degree_rho_exp+1):
                for j in range(0,self._poly_degree_pt_exp+1):
                    w.var('expp'+str(j)+'r'+str(i)+self._suffix).setConstant(False)
                    #w.var('expp'+str(j)+'r'+str(i)+self._suffix).Print('v')
            for i in range(0,self._poly_degree_rho+1):
                for j in range(0,self._poly_degree_pt+1):
                    w.var('p'+str(j)+'r'+str(i)+self._suffix).setConstant(False)
                    #w.var('p'+str(j)+'r'+str(i)+self._suffix).Print('v')

        icat = 0
        for cat in self._categories:
            reset(wralphabase[cat], fr)
            if icat == 0:
                getattr(wralphabase[cat], 'import')(fr)
                wralphabase[cat].writeToFile(self._rhalphabet_output_path, True)
            else:
                wralphabase[cat].writeToFile(self._rhalphabet_output_path, False)
            icat += 1
    def loadfit(self, fitToLoad):

        fralphabase_load = r.TFile.Open(fitToLoad, 'read')
        fr = fralphabase_load.Get('w_pass_cat1').obj('nll_simPdf_s_data_obs')

        fbase = r.TFile.Open(self._output_path, 'update')
        fralphabase = r.TFile.Open(self._rhalphabet_output_path, 'update')

        #categories = ['pass_cat1', 'pass_cat2', 'pass_cat3', 'pass_cat4', 'pass_cat5', 'pass_cat6',
        #              'fail_cat1', 'fail_cat2', 'fail_cat3', 'fail_cat4', 'fail_cat5', 'fail_cat6']

        bkgs = self._background_names
        sigs = self._signal_names

        wbase = {}
        wralphabase = {}
        for cat in self._categories:
            wbase[cat] = fbase.Get('w_%s' % cat)
            wralphabase[cat] = fralphabase.Get('w_%s' % cat)

        icat = 0
        for cat in self._categories:
            reset(wralphabase[cat], fr, exclude='qcd_fail_cat')
            if icat == 0:
                wralphabase[cat].writeToFile(self._rhalphabet_output_path, True)
            else:
                wralphabase[cat].writeToFile(self._rhalphabet_output_path, False)
            icat += 1

    def LoopOverPtBins(self):

        print "number of pt bins = ", self._nptbins;
        for pt_bin in range(1, self._nptbins + 1):
            # for pt_bin in range(1,2):
            print "------- pT bin number ", pt_bin

            # 1d histograms in each pT bin (in the order... data, w, z, qcd, top, signals)
            pass_hists_ptbin = {}
            fail_hists_ptbin = {}
            for name, hist in self._pass_hists.iteritems():
                pass_hists_ptbin[name] = tools.proj("cat", str(pt_bin), hist, self._mass_nbins, self._mass_lo,
                                                    self._mass_hi)
            for name, hist in self._fail_hists.iteritems():
                fail_hists_ptbin[name] = tools.proj("cat", str(pt_bin), hist, self._mass_nbins, self._mass_lo,
                                                    self._mass_hi)

            # make RooDataset, RooPdfs, and histograms
            # GetWorkspaceInputs returns: RooDataHist (data), then RooHistPdf of each electroweak
            (data_pass_rdh, data_fail_rdh, pass_rhps, fail_rhps) = self.GetWorkspaceInputs(pass_hists_ptbin,
                                                                                           fail_hists_ptbin,
                                                                                           "cat" + str(pt_bin))
            # Get approximate pt bin value
            this_pt = self._pass_hists["data_obs"].GetYaxis().GetBinLowEdge(pt_bin) + self._pass_hists[
                                                                                          "data_obs"].GetYaxis().GetBinWidth(
                pt_bin) * 0.3;
            print "------- this bin pT value ", this_pt

            # Make the rhalphabet fit for this pt bin
            (rhalphabet_hist_pass, rhalphabet_hist_fail) = self.MakeRhalphabet(["data_obs", "wqq", "zqq", "tqq"],
                                                                               fail_hists_ptbin,pass_hists_ptbin , this_pt,
                                                                               "cat" + str(pt_bin))

            # Get signals
            (signal_rdhs_pass, signal_rdhs_fail) = self.GetSignalInputs(pass_hists_ptbin, fail_hists_ptbin,
                                                                        "cat" + str(pt_bin))
            pass_rhps.update(signal_rdhs_pass)
            fail_rhps.update(signal_rdhs_fail)

            # #Write to file
            print "pass_rhps = "
            #print pass_rhps
            self.MakeWorkspace(self._output_path, [data_pass_rdh] + pass_rhps.values(), "pass_cat" + str(pt_bin), True,
                               True, this_pt)
            self.MakeWorkspace(self._output_path, [data_fail_rdh] + fail_rhps.values(), "fail_cat" + str(pt_bin), True,
                               True, this_pt)

        #for pt_bin in range(1, self._nptbins + 1):
        #    for mass_bin in range(1, self._mass_nbins + 1):
        #        print "qcd_fail_cat%i_Bin%i flatParam" % (pt_bin, mass_bin)

    # iHs = dict of fail histograms
    def MakeRhalphabet(self, samples, fail_histograms,pass_histograms,  pt, category):
        print "---- [MakeRhalphabet]"

        rhalph_bkgd_name = "qcd";
        lUnity = r.RooConstVar("unity", "unity", 1.)
        lZero = r.RooConstVar("lZero", "lZero", 0.)

        # Fix the pt (top) and the qcd eff
        self._lPt.setVal(pt)
        self._lEffQCD.setConstant(True)

        polynomial_variables = []
        # let it go negative
        self.buildPolynomialArray(polynomial_variables, self._poly_degree_rho, self._poly_degree_pt, "r", "p", -30, 30)
        if self._multi:
            exp_polynomial_variables = []
            self.buildPolynomialArray(exp_polynomial_variables, self._poly_degree_rho_exp, self._poly_degree_pt_exp, "r", "expp", -30, 30)
        
        print "polynomial_variables=",
        print polynomial_variables

        # Now build the function
        pass_bins = r.RooArgList()
        if self._multi:
            pass_bins_exp = r.RooArgList()
        fail_bins = r.RooArgList()

        for mass_bin in range(1, self._mass_nbins + 1):
            self._lMSD.setVal(fail_histograms["data_obs"].GetXaxis().GetBinCenter(mass_bin))
            if self._mass_fit:
                print ("Pt/mass poly")
                roopolyarray = self.buildRooPolyArray(self._lPt.getVal(), self._lMSD.getVal(), lUnity, lZero,
                                                      polynomial_variables)
            else:
                print ("Pt/Rho poly")
                #roopolyarray = self.buildRooPolyRhoArray(self._lPt.getVal(), self._lRho.getVal(), lUnity, lZero,
                #                                         polynomial_variables)
                if self._exp:
                    roopolyarray = self.buildRooPolyRhoArrayBernsteinExp(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,polynomial_variables)   
                elif self._multi:
                    roopolyarray_exp = self.buildRooPolyRhoArrayBernsteinExp(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,exp_polynomial_variables)
                    roopolyarray = self.buildRooPolyRhoArrayBernstein(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,polynomial_variables)
                else:
                    roopolyarray = self.buildRooPolyRhoArrayBernstein(self._lPt.getVal(),self._lRho.getVal(),lUnity,lZero,polynomial_variables)

            print "RooPolyArray:"
            roopolyarray.Print()
            fail_bin_content = 0
            for sample in samples:
                if sample == "data_obs":
                    print sample, fail_histograms[sample].GetName(), "add data"
                    print "\t+={}".format(fail_histograms[sample].GetBinContent(mass_bin))
                    fail_bin_content += fail_histograms[sample].GetBinContent(mass_bin)  # add data
                else:
                    print sample, fail_histograms[sample].GetName(), "subtract W/Z/ttbar"
                    print "\t-={}".format(fail_histograms[sample].GetBinContent(mass_bin))
                    fail_bin_content -= fail_histograms[sample].GetBinContent(mass_bin)  # subtract W/Z/ttbar from data
            
            if fail_bin_content < 0: fail_bin_content = 0.

            fail_bin_unc = 1.+1./math.sqrt(max(fail_bin_content,1))

            print rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin), fail_bin_content, fail_bin_unc

            # Define the failing category
            fail_bin_var_real = r.RooRealVar(rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin),
                                             rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin),
                                             0, -50, 50)
            fail_bin_var_in = r.RooRealVar(rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin) + "_In",
                                           rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin) + "_In",
                                           fail_bin_content)
            fail_bin_var_unc = r.RooRealVar(rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin) + "_Unc",
                                            rhalph_bkgd_name + "_fail_" + category + "_Bin" + str(mass_bin) + "_Unc",
                                            fail_bin_unc)
            fail_bin_var_in.setConstant(True)
            fail_bin_var_unc.setConstant(True)
            fail_bin_var = r.RooFormulaVar(rhalph_bkgd_name + "_fail_" + category + self._suffix + "_Bin" + str(mass_bin) + "_func",
                                           rhalph_bkgd_name + "_fail_" + category + self._suffix + "_Bin" + str(mass_bin) + "_func",
                                           "@1*pow(@2,@0)", r.RooArgList(fail_bin_var_real,fail_bin_var_in,fail_bin_var_unc))

            print "[david debug] fail_bin_var:"
            fail_bin_var_real.Print()
            fail_bin_var.Print()

            qcd_fail_bin_content = fail_histograms['qcd'].GetBinContent(mass_bin)
            qcd_pass_bin_content = pass_histograms['qcd'].GetBinContent(mass_bin)
            if not self._qcdTFpars=={}:
                try:
                    qcd_bin_ratio = self._tf2.Eval(self._lMSD.getVal(),pt)
                except:
                    qcd_bin_ratio = 1
                    print "WARNING EVAL",self._lMSD.getVal()
                if qcd_fail_bin_content>0:
                    print "Evaluating TF2 at : msd = %.3f, pT = %.3f"%(self._lMSD.getVal(),pt)
                    print "qcd fail =%.3f , pass = %.3f, qcd P/F = %.3f, qcdTF eff = %.3f, qcd_incl. eff = %.3f "%(
                        qcd_fail_bin_content,qcd_pass_bin_content,qcd_pass_bin_content/qcd_fail_bin_content,qcd_bin_ratio,self._lEffQCD.getVal())
                lEffQCD_bin = r.RooRealVar("qcdeff_"+category+self._suffix + "_Bin" + str(mass_bin),
                                         "qcdeff_"+category+self._suffix + "_Bin" + str(mass_bin),
                                          10, 0., 100.)
                lEffQCD_bin_exp = r.RooFormulaVar("qcdeff_exp_"+category+self._suffix + "_Bin" + str(mass_bin),
                                                  "qcdeff_exp_"+category+self._suffix + "_Bin" + str(mass_bin),
                                                   "@0*1E-3", r.RooArgList(lEffQCD_bin))

                lEffQCD_bin.setVal(qcd_bin_ratio*1000)
                lEffQCD_bin.setConstant(True)
                lArg = r.RooArgList(fail_bin_var, roopolyarray, lEffQCD_bin_exp)  #Use bin-by-bin qcd-eff
            else:
                qcd_bin_ratio        = 1.0
                if qcd_fail_bin_content>0:
                    print "qcd fail =%.3f , pass = %.3f, qcd P/F = %.3f, qcd_incl. eff = %.3f "%(
                        qcd_fail_bin_content,qcd_pass_bin_content,qcd_pass_bin_content/qcd_fail_bin_content,self._lEffQCD.getVal())
                    qcd_bin_ratio        = qcd_pass_bin_content/qcd_fail_bin_content
                lArg = r.RooArgList(fail_bin_var, roopolyarray, self._lEffQCD)

            
            # Now define the passing cateogry based on the failing (make sure it can't go negative)
            pass_bin_var = r.RooFormulaVar(rhalph_bkgd_name + "_pass_" + category + self._suffix + "_Bin" + str(mass_bin),
                                           rhalph_bkgd_name + "_pass_" + category + self._suffix + "_Bin" + str(mass_bin),
                                           "@0*@1*@2", lArg)
            if self._multi:
                lArg_exp = r.RooArgList(fail_bin_var, roopolyarray_exp, self._lEffQCD)
            
                pass_bin_var_exp = r.RooFormulaVar(rhalph_bkgd_name + "_exp_pass_" + category + self._suffix + "_Bin" + str(mass_bin),
                                                   rhalph_bkgd_name + "_exp_pass_" + category + self._suffix + "_Bin" + str(mass_bin),
                                                   "@0*@1*@2", lArg_exp)

            print "Pass=fail*poly*eff RooFormulaVar:"
            print pass_bin_var.Print()

            # print pass_bin_var.GetName()

            # If the number of events in the failing is small remove the bin from being free in the fit
            if fail_bin_content < 4:
                print "too small number of events", fail_bin_content, "Bin", str(mass_bin)
                fail_bin_var_real.setConstant(True)
                pass_bin_var = r.RooRealVar(rhalph_bkgd_name + "_pass_" + category + "_Bin" + str(mass_bin),
                                            rhalph_bkgd_name + "_pass_" + category + "_Bin" + str(mass_bin), 0, 0, 0)

                pass_bin_var.setConstant(True)
                if self._multi:
                    pass_bin_var_exp = pass_bin_var.Clone(rhalph_bkgd_name + "_exp_pass_" + category + "_Bin" + str(mass_bin))

            # Add bins to the array
            pass_bins.add(pass_bin_var)
            if self._multi:
                pass_bins_exp.add(pass_bin_var_exp)
            fail_bins.add(fail_bin_var)
            if not self._qcdTFpars=={}:
                self._all_vars.extend([pass_bin_var, fail_bin_var, fail_bin_var_in, fail_bin_var_unc, fail_bin_var_real,lEffQCD_bin,lEffQCD_bin_exp])
            else:
                self._all_vars.extend([pass_bin_var, fail_bin_var, fail_bin_var_in, fail_bin_var_unc, fail_bin_var_real])
            # print  fail_bin_var.GetName(),"flatParam",lPass#,lPass+"/("+lFail+")*@0"

        # print "Printing pass_bins:"
        # for i in xrange(pass_bins.getSize()):
        #    pass_bins[i].Print()
            if self._multi:
                self._all_vars.extend([pass_bin_var, pass_bin_var_exp, fail_bin_var, fail_bin_var_in, fail_bin_var_unc, fail_bin_var_real])
                self._all_pars.extend([pass_bin_var, pass_bin_var_exp, fail_bin_var, fail_bin_var_in, fail_bin_var_unc, fail_bin_var_real])
            else:
                self._all_vars.extend([pass_bin_var, fail_bin_var, fail_bin_var_in, fail_bin_var_unc, fail_bin_var_real])
                self._all_pars.extend([pass_bin_var, fail_bin_var, fail_bin_var_in, fail_bin_var_unc, fail_bin_var_real])
 
        pass_rparh = r.RooParametricHist(rhalph_bkgd_name + "_pass_" + category + self._suffix, 
                                         rhalph_bkgd_name + "_pass_" + category + self._suffix,
                                         self._lMSD, pass_bins, fail_histograms["data_obs"])
        if self._multi:
            pass_rparh_exp = r.RooParametricHist(rhalph_bkgd_name + "_exp_pass_" + category + self._suffix, 
                                                 rhalph_bkgd_name + "_exp_pass_" + category + self._suffix,
                                                 self._lMSD, pass_bins_exp, fail_histograms["data_obs"])
            mypdfs = r.RooArgList()
            mypdfs.add(pass_rparh)
            mypdfs.add(pass_rparh_exp)
            pass_rparh_multi = r.RooMultiPdf(rhalph_bkgd_name + "_multi_pass_" + category + self._suffix, 
                                             rhalph_bkgd_name + "_multi_pass_" + category + self._suffix,
                                             self._pdf_index, mypdfs)
            fail_rparh = r.RooParametricHist(rhalph_bkgd_name + "_multi_fail_" + category + self._suffix, 
                                             rhalph_bkgd_name + "_multi_fail_" + category + self._suffix,
                                             self._lMSD, fail_bins, fail_histograms["data_obs"])
        else:
            fail_rparh = r.RooParametricHist(rhalph_bkgd_name + "_fail_" + category + self._suffix, 
                                             rhalph_bkgd_name + "_fail_" + category + self._suffix,
                                             self._lMSD, fail_bins, fail_histograms["data_obs"])
        print "Print pass and fail RooParametricHists"
        pass_rparh.Print()
        fail_rparh.Print()
        pass_norm = r.RooAddition(rhalph_bkgd_name + "_pass_" + category + self._suffix + "_norm",
                                  rhalph_bkgd_name + "_pass_" + category + self._suffix + "_norm", pass_bins)
        if self._multi:
            pass_norm_exp = r.RooAddition(rhalph_bkgd_name + "_exp_pass_" + category + self._suffix + "_norm",
                                          rhalph_bkgd_name + "_exp_pass_" + category + self._suffix + "_norm", pass_bins_exp)
            
            multi_arg = r.RooArgList()
            multi_arg.add(self._pdf_index)
            multi_arg.add(pass_norm)
            multi_arg.add(pass_norm_exp)
            pass_norm_multi = r.RooFormulaVar(rhalph_bkgd_name + "_multi_pass_" + category + self._suffix + "_norm",
                                              rhalph_bkgd_name + "_multi_pass_" + category + self._suffix + "_norm",
                                              '(1-@0)*@1 + @0*@2',multi_arg)
            fail_norm = r.RooAddition(rhalph_bkgd_name + "_multi_fail_" + category + self._suffix + "_norm",
                                      rhalph_bkgd_name + "_multi_fail_" + category + self._suffix + "_norm", fail_bins)
        else:
            fail_norm = r.RooAddition(rhalph_bkgd_name + "_fail_" + category + self._suffix + "_norm",
                                      rhalph_bkgd_name + "_fail_" + category + self._suffix + "_norm", fail_bins)
        print "Printing NPass and NFail variables:"
        pass_norm.Print()
        fail_norm.Print()
        if self._multi:
            self._all_shapes.extend([pass_rparh, pass_rparh_exp, fail_rparh, pass_norm, pass_norm_exp, fail_norm])
        else:
            self._all_shapes.extend([pass_rparh, fail_rparh, pass_norm, fail_norm])
        
        # Now write the workspace with the rooparamhist
        pass_workspace = r.RooWorkspace("w_pass_" + str(category))
        fail_workspace = r.RooWorkspace("w_fail_" + str(category))

        if self._multi:
            getattr(pass_workspace, 'import')(pass_rparh_multi, r.RooFit.RecycleConflictNodes(), r.RooFit.RenameAllVariablesExcept(self._suffix.replace('_',''),'x,pdf_index'))
            getattr(pass_workspace, 'import')(pass_norm_multi, r.RooFit.RecycleConflictNodes(), r.RooFit.RenameAllVariablesExcept(self._suffix.replace('_',''),'x,pdf_index'))
        else:
            getattr(pass_workspace, 'import')(pass_rparh, r.RooFit.RecycleConflictNodes(), r.RooFit.RenameAllVariablesExcept(self._suffix.replace('_',''),'x'))
            getattr(pass_workspace, 'import')(pass_norm, r.RooFit.RecycleConflictNodes(), r.RooFit.RenameAllVariablesExcept(self._suffix.replace('_',''),'x'))

            
        getattr(fail_workspace, 'import')(fail_rparh, r.RooFit.RecycleConflictNodes(), r.RooFit.RenameAllVariablesExcept(self._suffix.replace('_',''),'x'))
        getattr(fail_workspace, 'import')(fail_norm, r.RooFit.RecycleConflictNodes(), r.RooFit.RenameAllVariablesExcept(self._suffix.replace('_',''),'x'))
        print "Printing rhalphabet workspace:"
        pass_workspace.Print('V')
        if category.find("1") > -1:
            pass_workspace.writeToFile(self._rhalphabet_output_path)
        else:
            pass_workspace.writeToFile(self._rhalphabet_output_path, False)
        fail_workspace.writeToFile(self._rhalphabet_output_path, False)
        return [pass_rparh, fail_rparh]

    def buildRooPolyArray(self, iPt, iMass, iQCD, iZero, iVars):

        # print "---- [buildRooPolyArray]"  
        # print len(iVars);

        lPt = r.RooConstVar("Var_Pt_" + str(iPt) + "_" + str(iMass), "Var_Pt_" + str(iPt) + "_" + str(iMass), (iPt))
        lMass = r.RooConstVar("Var_Mass_" + str(iPt) + "_" + str(iMass), "Var_Mass_" + str(iPt) + "_" + str(iMass),
                              (iMass))
        lMassArray = r.RooArgList()
        lNCount = 0
        for pRVar in range(0, self._poly_degree_rho + 1):
            lTmpArray = r.RooArgList()
            for pVar in range(0, self._poly_degree_pt + 1):
                if lNCount == 0:
                    lTmpArray.add(iQCD)  # for the very first constant (e.g. p0r0), just set that to 1
                else:
                    lTmpArray.add(iVars[lNCount])
                lNCount = lNCount + 1
            pLabel = "Var_Pol_Bin_" + str(round(iPt, 2)) + "_" + str(round(iMass, 3)) + "_" + str(pRVar) + self._suffix
            pPol = r.RooPolyVar(pLabel , pLabel , lPt, lTmpArray)
            lMassArray.add(pPol)
            self._all_vars.append(pPol)

        lLabel = "Var_MassPol_Bin_" + str(round(iPt, 2)) + "_" + str(round(iMass, 3)) + self._suffix
        lMassPol = r.RooPolyVar(lLabel , lLabel , lMass, lMassArray)
        self._all_vars.extend([lPt, lMass, lMassPol])
        return lMassPol

    def buildRooPolyRhoArray(self, iPt, iRho, iQCD, iZero, iVars):

        # print "---- [buildRooPolyArray]"      

        lPt = r.RooConstVar("Var_Pt_" + str(iPt) + "_" + str(iRho), "Var_Pt_" + str(iPt) + "_" + str(iRho), (iPt))
        lRho = r.RooConstVar("Var_Rho_" + str(iPt) + "_" + str(iRho), "Var_Rho_" + str(iPt) + "_" + str(iRho), (iRho))
        lRhoArray = r.RooArgList()
        lNCount = 0
        for pRVar in range(0, self._poly_degree_rho + 1):
            lTmpArray = r.RooArgList()
            for pVar in range(0, self._poly_degree_pt + 1):
                if lNCount == 0:
                    lTmpArray.add(iQCD);  # for the very first constant (e.g. p0r0), just set that to 1
                else:
                    print "lNCount = " + str(lNCount)
                    lTmpArray.add(iVars[lNCount])
                lNCount = lNCount + 1
            pLabel = "Var_Pol_Bin_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)) + "_" + str(pRVar) + self._suffix
            pPol = r.RooPolyVar(pLabel, pLabel, lPt, lTmpArray)
            print "pPol:"
            print pPol.Print()
            lRhoArray.add(pPol);
            self._all_vars.append(pPol)

        lLabel = "Var_RhoPol_Bin_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)) + self._suffix
        lRhoPol = r.RooPolyVar(lLabel, lLabel, lRho, lRhoArray)
        self._all_vars.extend([lPt, lRho, lRhoPol])
        return lRhoPol

    def generate_bernstein_string(self, n):
        # x = @(n+1)
        monomials = []
        for v in xrange(0, n+1):
                normalization = 1. * math.factorial(n) / (math.factorial(v) * math.factorial(n - v))
                monomials.append("({} * @{} * (@{}**{}) * ((1.-@{})**{}))".format(normalization, v, n+1, v, n+1, n-v))
        return " + ".join(monomials)

    def buildRooPolyRhoArrayBernstein(self, iPt, iRho, iQCD, iZero, iVars):

        print "---- [buildRooPolyArrayBernstein]"

        lPt = r.RooConstVar("Var_Pt_" + str(iPt) + "_" + str(iRho), "Var_Pt_" + str(iPt) + "_" + str(iRho), (iPt))
        lPt_rescaled = r.RooConstVar("Var_Pt_rescaled_" + str(iPt) + "_" + str(iRho),
                                     "Var_Pt_rescaled_" + str(iPt) + "_" + str(iRho),
                                     ((iPt - self._pt_lo) / (self._pt_hi - self._pt_lo)))
        lRho = r.RooConstVar("Var_Rho_" + str(iPt) + "_" + str(iRho), "Var_Rho_" + str(iPt) + "_" + str(iRho), (iRho))
        lRho_rescaled = r.RooConstVar("Var_Rho_rescaled_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)),
                                      "Var_Rho_rescaled_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)),
                                      ((iRho - self._rho_lo) / (self._rho_hi - self._rho_lo)))

        ptPolyString = self.generate_bernstein_string(self._poly_degree_pt)
        rhoPolyString = self.generate_bernstein_string(self._poly_degree_rho)

        lRhoArray = r.RooArgList()
        lNCount = 0
        for pRVar in range(0, self._poly_degree_rho + 1):
            lTmpArray = r.RooArgList()
            for pVar in range(0, self._poly_degree_pt + 1):
                #if lNCount == 0:
                #    lTmpArray.add(iQCD)  # for the very first constant (e.g. p0r0), just set that to 1
                #else:
                print "lNCount = " + str(lNCount)
                lTmpArray.add(iVars[lNCount])
                print "iVars[lNCount]: ", iVars[lNCount]
                print "iVars[lNCount]"
                iVars[lNCount].Print()
                lNCount = lNCount + 1
            pLabel = "Var_Pol_Bin_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)) + "_" + str(pRVar)
            lTmpArray.add(lPt_rescaled)
            print "lTmpArray: ", lTmpArray.Print()
            pPol = r.RooFormulaVar(pLabel, pLabel, ptPolyString, lTmpArray)
            print "pPol:"
            print pPol.Print("V")
            lRhoArray.add(pPol)
            self._all_vars.append(pPol)

        lLabel = "Var_RhoPol_Bin_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3))
        lRhoArray.add(lRho_rescaled)
        print "lRhoArray: ", lRhoArray.Print()
        lRhoPol = r.RooFormulaVar(lLabel, lLabel, rhoPolyString, lRhoArray)
        self._all_vars.extend([lPt_rescaled, lRho_rescaled, lRhoPol])
        return lRhoPol


    def buildRooPolyRhoArrayBernsteinExp(self, iPt, iRho, iQCD, iZero, iVars):

        print "---- [buildRooPolyArrayBernsteinExp]"

        lPt = r.RooConstVar("Var_Pt_" + str(iPt) + "_" + str(iRho), "Var_Pt_" + str(iPt) + "_" + str(iRho), (iPt))
        lPt_rescaled = r.RooConstVar("Var_Pt_rescaled_" + str(iPt) + "_" + str(iRho),
                                     "Var_Pt_rescaled_" + str(iPt) + "_" + str(iRho),
                                     ((iPt - self._pt_lo) / (self._pt_hi - self._pt_lo)))
        lRho = r.RooConstVar("Var_Rho_" + str(iPt) + "_" + str(iRho), "Var_Rho_" + str(iPt) + "_" + str(iRho), (iRho))
        lRho_rescaled = r.RooConstVar("Var_Rho_rescaled_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)),
                                      "Var_Rho_rescaled_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)),
                                      ((iRho - self._rho_lo) / (self._rho_hi - self._rho_lo)))

        ptPolyString = self.generate_bernstein_string(self._poly_degree_pt_exp)
        rhoPolyString = self.generate_bernstein_string(self._poly_degree_rho_exp)

        lRhoArray = r.RooArgList()
        lNCount = 0
        for pRVar in range(0, self._poly_degree_rho_exp + 1):
            lTmpArray = r.RooArgList()
            for pVar in range(0, self._poly_degree_pt_exp + 1):
                #if lNCount == 0:
                #    lTmpArray.add(iQCD)  # for the very first constant (e.g. p0r0), just set that to 1
                #else:
                print "lNCount = " + str(lNCount)
                lTmpArray.add(iVars[lNCount])
                print "iVars[lNCount]: ", iVars[lNCount]
                print "iVars[lNCount]"
                iVars[lNCount].Print()
                lNCount = lNCount + 1
            pLabel = "Var_Pol_Bin_exp_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3)) + "_" + str(pRVar)
            lTmpArray.add(lPt_rescaled)
            print "lTmpArray: ", lTmpArray.Print()
            pPol = r.RooFormulaVar(pLabel, pLabel, ptPolyString, lTmpArray)
            print "pPol:"
            print pPol.Print("V")
            lRhoArray.add(pPol)
            self._all_vars.append(pPol)

        lLabel = "Var_RhoPol_Bin_exp_" + str(round(iPt, 2)) + "_" + str(round(iRho, 3))
        lRhoArray.add(lRho_rescaled)
        print "lRhoArray: ", lRhoArray.Print()
        lRhoPol = r.RooFormulaVar(lLabel, lLabel, 'exp('+rhoPolyString+')', lRhoArray)
        print('exp('+rhoPolyString+')')
        self._all_vars.extend([lPt_rescaled, lRho_rescaled, lRhoPol])
        return lRhoPol


    def buildPolynomialArray(self, iVars, iNVar0, iNVar1, iLabel0, iLabel1, iXMin0, iXMax0):

        print "---- [buildPolynomialArray]"
        ## form of polynomial
        ## (p0r0 + p1r0 * pT + p2r0 * pT^2 + ...) + 
        ## (p0r1 + p1r1 * pT + p2r1 * pT^2 + ...) * rho + 
        ## (p0r2 + p1r2 * pT + p2r2 * pT^2 + ...) * rho^2 + ...
        '''
        r0p0    =    0, pXMin,pXMax
        r1p0    =   -3.7215e-03 +/-  1.71e-08
        r2p0    =    2.4063e-06 +/-  2.76e-11
            r0p1    =   -2.1088e-01 +/-  2.72e-06I  
            r1p1    =    3.6847e-05 +/-  4.66e-09
            r2p1    =   -3.8415e-07 +/-  7.23e-12
            r0p2    =   -8.5276e-02 +/-  6.90e-07
            r1p2    =    2.2058e-04 +/-  1.10e-09
            r2p2    =   -2.2425e-07 +/-  1.64e-12
        '''
        value = [0.,
                 -3.7215e-03,
                 2.4063e-06,
                 -2.1088e-01,
                 3.6847e-05,
                 -3.8415e-07,
                 -8.5276e-02,
                 2.2058e-04,
                 -2.2425e-07]
        error = [iXMax0,
                 1.71e-08,
                 2.76e-11,
                 2.72e-06,
                 4.66e-09,
                 7.23e-12,
                 6.90e-07,
                 1.10e-09,
                 1.64e-12]

        for i0 in range(iNVar0 + 1):
            for i1 in range(iNVar1 + 1):
                pVar = iLabel1 + str(i1) + iLabel0 + str(i0);
                if self._freeze:

                    start = value[i0 * 3 + i1]
                    pXMin = value[i0 * 3 + i1] - error[i0 * 3 + i1]
                    pXMax = value[i0 * 3 + i1] + error[i0 * 3 + i1]

                else:
                    start = 0.0
                    pXMin = iXMin0
                    pXMax = iXMax0

                pRooVar = r.RooRealVar(pVar, pVar, 1.0, pXMin, pXMax)
                #pRooVar = r.RooRealVar(pVar, pVar, self._lEffQCD.getVal(), pXMin, pXMax)
                # print("========  here i0 %s i1 %s"%(i0,i1))
                print pVar
                # print(" is : %s  +/- %s"%(value[i0*3+i1],error[i0*3+i1]))
                iVars.append(pRooVar)
                self._all_vars.append(pRooVar)

    def GetWorkspaceInputs(self, pass_histograms, fail_histograms, iBin):

        roocategories = r.RooCategory("sample", "sample")
        roocategories.defineType("pass", 1)
        roocategories.defineType("fail", 0)
        data_rdh_pass = r.RooDataHist("data_obs_pass_" + iBin, "data_obs_pass_" + iBin, r.RooArgList(self._lMSD),
                                      pass_histograms["data_obs"])
        data_rdh_fail = r.RooDataHist("data_obs_fail_" + iBin, "data_obs_fail_" + iBin, r.RooArgList(self._lMSD),
                                      fail_histograms["data_obs"])
        data_rdh_comb = r.RooDataHist("comb_data_obs", "comb_data_obs", r.RooArgList(self._lMSD),
                                      r.RooFit.Index(roocategories), r.RooFit.Import("pass", data_rdh_pass),
                                      r.RooFit.Import("fail", data_rdh_fail))

        roofit_shapes = {}
        for sample in ["wqq", "zqq", "tqq"]:
            roofit_shapes[sample] = self.GetRoofitHistObjects(pass_histograms[sample], fail_histograms[sample], sample,
                                                              iBin)

        #total_pdf_pass = r.RooAddPdf("tot_pass" + iBin, "tot_pass" + iBin,
        #                             r.RooArgList(roofit_shapes["qcd"]["pass_epdf"]))
        #total_pdf_fail = r.RooAddPdf("tot_fail" + iBin, "tot_fail" + iBin,
        #                             r.RooArgList(roofit_shapes["qcd"]["fail_epdf"]))
        #ewk_pdf_pass = r.RooAddPdf("ewk_pass" + iBin, "ewk_pass" + iBin,
        #                           r.RooArgList(roofit_shapes["wqq"]["pass_epdf"], roofit_shapes["zqq"]["pass_epdf"],
        #                                        roofit_shapes["tqq"]["pass_epdf"]))
        #ewk_pdf_fail = r.RooAddPdf("ewk_fail" + iBin, "ewk_fail" + iBin,
        #                           r.RooArgList(roofit_shapes["wqq"]["fail_epdf"], roofit_shapes["zqq"]["fail_epdf"],
        #                                        roofit_shapes["tqq"]["fail_epdf"]))

        #total_simulpdf = r.RooSimultaneous("tot", "tot", roocategories)
        #total_simulpdf.addPdf(total_pdf_pass, "pass")
        #total_simulpdf.addPdf(total_pdf_fail, "fail")
        self._all_data.extend([data_rdh_pass, data_rdh_fail])
        #self._all_shapes.extend([total_pdf_pass, total_pdf_fail, ewk_pdf_pass, ewk_pdf_fail])

        ## find out which to make global
        ## RooDataHist (data), then RooHistPdf of each electroweak
        # Previous return values 2 and 3 (RooAbsPdf (qcd,ewk)) removed by David on 19/1/2017, because they don't seem to be used. 
        return [
            data_rdh_pass,
            data_rdh_fail,
            # {"qcd":total_pdf_pass, "ewk":ewk_pdf_pass},
            # {"qcd":total_pdf_fail, "ewk":ewk_pdf_fail},
            {"wqq": roofit_shapes["wqq"]["pass_rdh"], "zqq": roofit_shapes["zqq"]["pass_rdh"],
             "tqq": roofit_shapes["tqq"]["pass_rdh"]},
            {"wqq": roofit_shapes["wqq"]["fail_rdh"], "zqq": roofit_shapes["zqq"]["fail_rdh"],
             "tqq": roofit_shapes["tqq"]["fail_rdh"]},
        ]

    # Get (RooHistPdf, RooExtendPdf, RooDataHist) for a pair of pass/fail histograms
    # - The RooExtendPdfs are coupled via their normalizations, N*eff or N*(1-eff). 
    def GetRoofitHistObjects(self, hist_pass, hist_fail, label="w", category="_cat0"):
        # normalization
        total_norm = r.RooRealVar(label + "norm" + category, label + "norm" + category,
                                  (hist_pass.Integral() + hist_fail.Integral()), 0.,
                                  5. * (hist_pass.Integral() + hist_fail.Integral()))
        pass_norm = r.RooFormulaVar(label + "fpass" + category, label + "norm" + category + "*(veff)",
                                    r.RooArgList(total_norm, self._lEff))
        fail_norm = r.RooFormulaVar(label + "fqail" + category, label + "norm" + category + "*(1-veff)",
                                    r.RooArgList(total_norm, self._lEff))

        # shapes
        pass_rdh = r.RooDataHist(label + "_pass_" + category, label + "_pass_" + category, r.RooArgList(self._lMSD),
                                 hist_pass)
        fail_rdh = r.RooDataHist(label + "_fail_" + category, label + "_fail_" + category, r.RooArgList(self._lMSD),
                                 hist_fail)
        pass_rhp = r.RooHistPdf(label + "passh" + category, label + "passh" + category, r.RooArgList(self._lShift),
                                r.RooArgList(self._lMSD), pass_rdh, 0)
        fail_rhp = r.RooHistPdf(label + "failh" + category, label + "failh" + category, r.RooArgList(self._lShift),
                                r.RooArgList(self._lMSD), fail_rdh, 0)

        # extended likelihood from normalization and shape above
        pass_epdf = r.RooExtendPdf(label + "_passe_" + category, label + "pe" + category, pass_rhp, pass_norm)
        fail_epdf = r.RooExtendPdf(label + "_faile_" + category, label + "fe" + category, fail_rhp, fail_norm)

        # lHist   = [pass_pdf,fail_rhp,pass_epdf,fail_epdf,pass_rdh,fail_rdh]
        return_dict = {
            "pass_rdh": pass_rdh,
            "fail_rdh": fail_rdh,
            "pass_pdf": pass_rhp,
            "fail_pdf": fail_rhp,
            "pass_epdf": pass_epdf,
            "fail_epdf": fail_epdf
        }
        self._all_vars.extend([total_norm, pass_norm, fail_norm])
        self._all_shapes.extend(return_dict.values())
        return return_dict

    def GetSignalInputs(self, iHP, iHF, iBin):
        # get signals
        lPSigs = {}
        lFSigs = {}
        for signal_name in self._signal_names:
            roofit_shapes = self.GetRoofitHistObjects(iHP[signal_name], iHF[signal_name], signal_name, iBin)
            lPSigs[signal_name] = roofit_shapes["pass_rdh"]
            lFSigs[signal_name] = roofit_shapes["fail_rdh"]
        return (lPSigs, lFSigs)

    # def MakeWorkspace(self,iOutput,iDatas,iFuncs,iVars,iCat="cat0",iShift=True):
    def MakeWorkspace(self, output_path, import_objects, category="cat0", do_shift=True, do_syst=True, pt_val=500.):
        print "Making workspace " + "w_" + str(category)
        workspace = r.RooWorkspace("w_" + str(category))

        # get the pT bin
        iPt = category[-1:]

        def removeMass(iHists,iMass):
            for lH in iHists:
                for i0 in range(1, lH.GetNbinsX()+1):
                    lmass = lH.GetXaxis().GetBinCenter(i0)
                    if lmass < iMass-30 or lmass > iMass+30:
                        print('Removing ',lmass,iMass,iMass-30,iMass+30)
                        lH.SetBinContent(i0, 0);
                lH.SetDirectory(0);

        for import_object in import_objects:
            import_object.Print()
            process = import_object.GetName().split('_')[0]
            cat = import_object.GetName().split('_')[1]
            mass = 0
            systematics = ['JES', 'JER', 'trigger', 'mcstat', 'Pu']
            if do_syst and ('tqq' in process or 'wqq' in process or 'zqq' in process or 'hqq' in process):
                # get systematic histograms
                hout = []
                histDict = {}
                for syst in systematics:
                    if syst == 'mcstat':
                        matchingString = ''
                        if self._remove_unmatched and ('wqq' in process or 'zqq' in process):
                            matchingString = '_matched'
                        if self._inputfile_loose is not None and (
                                'wqq' in process or 'zqq' in process) and 'pass' in cat:
                            tmph = self._inputfile_loose.Get(process + '_' + cat + matchingString).Clone(
                                process + '_' + cat)
                            tmph_up = self._inputfile_loose.Get(process + '_' + cat + matchingString).Clone(
                                process + '_' + cat + '_' + syst + 'Up')
                            tmph_down = self._inputfile_loose.Get(process + '_' + cat + matchingString).Clone(
                                process + '_' + cat + '_' + syst + 'Down')
                            tmph.Scale(
                                GetSF(process, cat, self._inputfile, self._inputfile_loose, self._remove_unmatched,iPt,self._sf_dict))
                            tmph_up.Scale(
                                GetSF(process, cat, self._inputfile, self._inputfile_loose, self._remove_unmatched,iPt,self._sf_dict))
                            tmph_down.Scale(
                                GetSF(process, cat, self._inputfile, self._inputfile_loose, self._remove_unmatched,iPt,self._sf_dict))
                        else:
                            tmph = self._inputfile.Get(process + '_' + cat + matchingString).Clone(process + '_' + cat)
                            tmph_up = self._inputfile.Get(process + '_' + cat + matchingString).Clone(
                                process + '_' + cat + '_' + syst + 'Up')
                            tmph_down = self._inputfile.Get(process + '_' + cat + matchingString).Clone(
                                process + '_' + cat + '_' + syst + 'Down')
                            tmph.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                            tmph_up.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                            tmph_down.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))

                        tmph_mass = tools.proj('cat', str(iPt), tmph, self._mass_nbins, self._mass_lo, self._mass_hi)
                        tmph_mass_up = tools.proj('cat', str(iPt), tmph_up, self._mass_nbins, self._mass_lo,
                                                  self._mass_hi)
                        tmph_mass_down = tools.proj('cat', str(iPt), tmph_down, self._mass_nbins, self._mass_lo,
                                                    self._mass_hi)
                        for i in range(1, tmph_mass_up.GetNbinsX() + 1):
                            mcstatup = tmph_mass_up.GetBinContent(i) + tmph_mass_up.GetBinError(i)
                            mcstatdown = max(0., tmph_mass_down.GetBinContent(i) - tmph_mass_down.GetBinError(i))
                            tmph_mass_up.SetBinContent(i, mcstatup)
                            tmph_mass_down.SetBinContent(i, mcstatdown)
                        tmph_mass.SetName(import_object.GetName())
                        tmph_mass_up.SetName(
                            import_object.GetName() + '_' + import_object.GetName().replace('_', '') + syst + 'Up')
                        tmph_mass_down.SetName(
                            import_object.GetName() + '_' + import_object.GetName().replace('_', '') + syst + 'Down')
                        histDict[import_object.GetName()] = tmph_mass
                        histDict[import_object.GetName() + '_' + import_object.GetName().replace('_',
                                                                                                 '') + syst + 'Up'] = tmph_mass_up
                        histDict[
                            import_object.GetName() + '_' + import_object.GetName().replace('_',
                                                                                            '') + syst + 'Down'] = tmph_mass_down
                        if 'tqq' in process:
                            hout.append(tmph_mass)
                            # hout.append(tmph_mass_up)
                            # hout.append(tmph_mass_down)
                    else:
                        print process, cat, syst
                        tmph_norm = self._inputfile.Get(process + '_' + cat ).Clone()
                        tmph_up = self._inputfile.Get(process + '_' + cat + '_' + syst + 'Up').Clone()
                        tmph_down = self._inputfile.Get(process + '_' + cat + '_' + syst + 'Down').Clone()
                        SF = (GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                        tmph_norm.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                        tmph_up.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                        tmph_down.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                        tmph_mass_norm = tools.proj('cat', str(iPt), tmph_norm, self._mass_nbins, self._mass_lo,self._mass_hi)
                        tmph_mass_up   = tools.proj('cat', str(iPt), tmph_up, self._mass_nbins, self._mass_lo,self._mass_hi)
                        tmph_mass_down = tools.proj('cat', str(iPt), tmph_down, self._mass_nbins, self._mass_lo,self._mass_hi)

                        print "SF = ",SF
                        print "tmph_mass_norm integral = ",tmph_mass_norm.Integral()
                        print "tmph_mass_up integral   = ",tmph_mass_up.Integral()
                        print "tmph_mass_down integral = ",tmph_mass_down.Integral()
                        tmph_mass_up.SetName(import_object.GetName() + '_' + syst + self._suffix + 'Up')
                        tmph_mass_down.SetName(import_object.GetName() + '_' + syst +self._suffix + 'Down')
                        hout.append(tmph_mass_up)
                        hout.append(tmph_mass_down)
                uncorrelate(histDict, 'mcstat')
                for key, myhist in histDict.iteritems():
                    if 'mcstat' in key:
                        print key
                        hout.append(myhist)
                # blind if necessary and output to workspace
                for h in hout:
                    #Zero sys. histogram contents
                    rhoRange = [self._rho_lo ,self._rho_hi]
                    blindRange=[self._mass_blind_lo, self._mass_blind_hi]
                    massHistRange = [self._mass_hist_lo, self._mass_hist_hi]
                    ZeroHistogram1D(h,pt_val, blind = self._blind, mass_range = massHistRange, blind_range = blindRange,rho_range = rhoRange)
                    
                    tmprdh = r.RooDataHist(h.GetName(), h.GetName(), r.RooArgList(self._lMSD), h)
                    getattr(workspace, 'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                    # validation
                    self._outfile_validation.cd()
                    h.Write()

            if do_shift and ('wqq' in process or 'zqq' in process or 'hqq' in process):
                if process == 'wqq':
                    mass = 80.
                elif process == 'zqq':
                    mass = 91.
                elif 'hqq' in process:
                    mass = float(process[-3:])  # hqq125 -> 125
                elif 'Pbb' in process:
                    mass = float(process.split('_')[-1])  # Pbb_75 -> 75

                # get the matched and unmatched hist
                if self._inputfile_loose is not None and ('wqq' in process or 'zqq' in process) and 'pass' in cat:
                    tmph_matched = self._inputfile_loose.Get(process + '_' + cat + '_matched').Clone()
                    tmph_unmatched = self._inputfile_loose.Get(process + '_' + cat + '_unmatched').Clone()
                    tmph_matched.Scale(
                        GetSF(process, cat, self._inputfile, self._inputfile_loose, self._remove_unmatched, iPt,sf_dict=self._sf_dict))
                    tmph_unmatched.Scale(GetSF(process, cat, self._inputfile, self._inputfile_loose,
                                               False,sf_dict=self._sf_dict))  # doesn't matter if removing unmatched so just remove that option
                else:
                    tmph_matched = self._inputfile.Get(process + '_' + cat + '_matched').Clone()
                    tmph_unmatched = self._inputfile.Get(process + '_' + cat + '_unmatched').Clone()
                    tmph_matched.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                    tmph_unmatched.Scale(GetSF(process, cat, self._inputfile,sf_dict=self._sf_dict))
                ### Proj to 1GeV bin width
                #tmph_mass_matched = tools.proj('cat', str(iPt), tmph_matched, self._mass_nbins*7, self._mass_lo,self._mass_hi)
                #tmph_mass_unmatched = tools.proj('cat', str(iPt), tmph_unmatched, self._mass_nbins*7, self._mass_lo,self._mass_hi)
                tmph_mass_matched = tools.proj('cat', str(iPt), tmph_matched, self._mass_nbins, self._mass_lo,self._mass_hi)
                tmph_mass_unmatched = tools.proj('cat', str(iPt), tmph_unmatched, self._mass_nbins, self._mass_lo,self._mass_hi)
                print "tmph_mass_matched integral = ",tmph_mass_matched.Integral()

                #removeMass([tmph_mass_matched],mass)
            
                # smear/shift the matched
                hist_container = hist([mass], [tmph_mass_matched])
                # mass_shift = 0.99
                # mass_shift_unc = 0.03*2. #(2 sigma shift)
                # res_shift = 1.094
                # res_shift_unc = 0.123*2. #(2 sigma shift)
                if 'shift_SF' in self._sf_dict.keys():
                    mass_shift     = self._sf_dict['shift_SF']
                    mass_shift_unc = self._sf_dict['shift_SF_ERR'] * 10  # (10 sigma shift)
                else:
                    m_data     =self._sf_dict['m_data']    # 82.657
                    m_data_err =self._sf_dict['m_data_err']# 0.313
                    m_mc       =self._sf_dict['m_mc']      # 82.548
                    m_mc_err   =self._sf_dict['m_mc_err']  # 0.191
                    mass_shift = m_data / m_mc
                    mass_shift_unc = math.sqrt((m_data_err / m_data) * (m_data_err / m_data) + (m_mc_err / m_mc) * (
                        m_mc_err / m_mc)) * 10.  # (10 sigma shift)
                if 'smear_SF' in self._sf_dict.keys():
                    res_shift     = self._sf_dict['smear_SF']
                    year = self._suffix.replace("_",'') 
                    if year =='2018':
                        res_shift_unc = self._sf_dict['smear_SF_ERR']  *20     # (20 sigma shift) for 2018
                    else:
                        res_shift_unc = self._sf_dict['smear_SF_ERR']  *4
                else:
                    s_data     =self._sf_dict['s_data']    # 8.701
                    s_data_err =self._sf_dict['s_data_err']# 0.433
                    s_mc       =self._sf_dict['s_mc']      # 8.027
                    s_mc_err   =self._sf_dict['s_mc_err']  # 0.607
                    res_shift = s_data / s_mc
                    res_shift_unc = math.sqrt((s_data_err / s_data) * (s_data_err / s_data) + (s_mc_err / s_mc) * (
                        s_mc_err / s_mc)) * 4.  # (2 sigma shift)

                    
                # get new central value
                #shift_val = mass * (mass_shift-1)
                shift_val = 0 

                tmp_shifted_h = hist_container.shift(tmph_mass_matched, shift_val)
                # get new central value and new smeared value
                smear_val = res_shift - 1
                tmp_smeared_h = hist_container.smear(tmp_shifted_h[0], smear_val)
                hmatched_new_central = tmp_smeared_h[0]
                if smear_val <= 0: hmatched_new_central = tmp_smeared_h[1]

                if re.match('zqq', tmph_mass_matched.GetName()):
                    print tmph_mass_matched.GetName()
                    print "mass_shift", mass_shift
                    print "mass_shift_unc", mass_shift_unc
                    print "shift_val", shift_val
                    print "before shift integral", tmph_mass_matched.Integral()
                    print "after shift integral", tmp_shifted_h[0].Integral()
                    print "before shift mean", tmph_mass_matched.GetMean()
                    print "after shift mean", tmp_shifted_h[0].GetMean()

                    print "res_shift", res_shift
                    print "res_shift_unc", res_shift_unc
                    print "smear_val", smear_val
                    print "before smear integral", tmph_mass_matched.Integral()
                    print "after smear integral", hmatched_new_central.Integral()

                # get shift up/down
                # shift by half the bin width, to make a 1 bin-shift template
                shift_unc = 7.0 
                #shift_unc  = mass * mass_shift * mass_shift_unc
                hmatchedsys_shift = hist_container.shift(hmatched_new_central, shift_unc)
                # get res up/down
                hmatchedsys_smear = hist_container.smear(hmatched_new_central, res_shift_unc)

                if not (self._remove_unmatched and ('wqq' in process or 'zqq' in process)):
                    # add back the unmatched
                    hmatched_new_central.Add(tmph_mass_unmatched)
                    hmatchedsys_shift[0].Add(tmph_mass_unmatched)
                    hmatchedsys_shift[1].Add(tmph_mass_unmatched)
                    hmatchedsys_smear[0].Add(tmph_mass_unmatched)
                    hmatchedsys_smear[1].Add(tmph_mass_unmatched)
                hmatched_new_central.SetName(import_object.GetName())
                hmatchedsys_shift[0].SetName(import_object.GetName() + "_CMS_gghbb_scale%sUp"%self._suffix)
                hmatchedsys_shift[1].SetName(import_object.GetName() + "_CMS_gghbb_scale%sDown"%self._suffix)
                #print "scale name = ", import_object.GetName() + "_scale%s%sUp"%(cat,self._suffix)
                #hmatchedsys_shift[0].SetName(import_object.GetName() + "_scale%s%sUp"%(cat,self._suffix))
                #hmatchedsys_shift[1].SetName(import_object.GetName() + "_scale%s%sDown"%(cat,self._suffix))
                print "Inital mean central = ",tmph_mass_matched.GetMean()
                print "Final shift mean central = ",hmatched_new_central.GetMean(),' shifted by ',shift_val
                print "Final shift mean up= ",hmatchedsys_shift[0].GetMean(),' shifted by ', shift_unc
                print "Final shift mean up= ",hmatchedsys_shift[0].GetMean(),' mean diff = %.3f '% (hmatchedsys_shift[0].GetMean()-hmatched_new_central.GetMean())
                print "Final shift mean up max bin center= ",hmatchedsys_shift[0].GetBinCenter(hmatchedsys_shift[0].GetMaximumBin())
                print "Final smear mean up= ",hmatchedsys_smear[0].GetMean(),' smeared by ', res_shift_unc
                print "Final smear mean up max bin center= ",hmatchedsys_smear[0].GetBinCenter(hmatchedsys_smear[0].GetMaximumBin())

                hmatchedsys_smear[0].SetName(import_object.GetName() + "_CMS_gghbb_smear%sUp"%self._suffix)
                hmatchedsys_smear[1].SetName(import_object.GetName() + "_CMS_gghbb_smear%sDown"%self._suffix)



                hout = [hmatched_new_central, hmatchedsys_shift[0], hmatchedsys_shift[1], hmatchedsys_smear[0],
                        hmatchedsys_smear[1]]
                # blind if necessary and output to workspace
                for h in hout:
                    #Zero sys. histogram contents
                    rhoRange = [self._rho_lo ,self._rho_hi]
                    blindRange=[self._mass_blind_lo, self._mass_blind_hi]
                    massHistRange = [self._mass_hist_lo, self._mass_hist_hi]
                    ZeroHistogram1D(h,pt_val, blind = self._blind, mass_range = massHistRange, blind_range = blindRange,rho_range = rhoRange)

                    tmprdh = r.RooDataHist(h.GetName(), h.GetName(), r.RooArgList(self._lMSD), h)
                    getattr(workspace, 'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                    if h.GetName().find("scale") > -1:
                        #if 'pass' in cat.lower():
                        #    pName = h.GetName().replace("scalepass", "scalepass_cat%s"%iPt)
                        #elif 'fail' in cat.lower():
                        #    pName = h.GetName().replace("scalefail", "scalefail_cat%s"%iPt)
                        #else:
                        #    pName = h.GetName().replace("scale", "scalept")
                        #pName = h.GetName().replace("scale", "scale_cat%s"%iPt)   ## scalept -> scale_cat
                        pName = h.GetName().replace("scale", "scalept")
                        tmprdh = r.RooDataHist(pName, pName, r.RooArgList(self._lMSD), h)
                        getattr(workspace, 'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                        # pName = h.GetName().replace("scale", "shiftMH")
                        # tmprdh = r.RooDataHist(pName, pName, r.RooArgList(self._lMSD), h)
                        # getattr(workspace, 'import')(tmprdh, r.RooFit.RecycleConflictNodes())
                    # validation
                    self._outfile_validation.cd()
                    ### Rebin to 7 GeV bin width
                    #h.Rebin(7)
                    h.Write()
            else:
                print "Importing {}".format(import_object.GetName())
                getattr(workspace, 'import')(import_object, r.RooFit.RecycleConflictNodes())

        if category.find("pass_cat1") == -1:
            workspace.writeToFile(output_path, False)
        else:
            workspace.writeToFile(output_path)
        workspace.Print()
        # workspace.writeToFile(output_path)   

##############################################################################
##############################################################################
#### E N D   O F   C L A S S
##############################################################################
##############################################################################

def ZeroHistogram1D(h,pt_val,blind,mass_range,blind_range,rho_range):
    for i in range(1, h.GetNbinsX() + 1):
        massVal = h.GetXaxis().GetBinCenter(i)
        rhoVal = r.TMath.Log(massVal * massVal / pt_val / pt_val)
        if blind and massVal > blind_range[0] and massVal < blind_range[1]:
            print "blinding signal region for %s, mass bin [%i,%i] " % (h.GetName(), h.GetXaxis().GetBinLowEdge(i), h.GetXaxis().GetBinUpEdge(i))
            h.SetBinContent(i, 0.)
            h.SetBinError(i, 0.)
        if rhoVal < rho_range[0] or rhoVal > rho_range[1]:
            print "removing rho = %.2f for %s, pt_val = %.2f, mass bin [%i,%i]" % (rhoVal, h.GetName(), pt_val, h.GetXaxis().GetBinLowEdge(i),h.GetXaxis().GetBinUpEdge(i))
            h.SetBinContent(i, 0.)
            h.SetBinError(i, 0.)
        if massVal < mass_range[0] or massVal > mass_range[1] :
            print "removing mass = %.2f for %s, because %.2f not in [%i,%i]" % (massVal,h.GetName(),massVal,mass_range[0], mass_range[1])
            h.SetBinContent(i, 0.)
            h.SetBinError(i, 0.)

    
##-------------------------------------------------------------------------------------
def LoadHistograms(f, pseudo, blind, useQCD, scale, r_signal, mass_range, blind_range, rho_range, fLoose=None,sf_dict={},createPassFromFail=False,skipQCD=False):
    pass_hists = {}
    fail_hists = {}
    f.ls()

    #qcdkfactor = 0.7
    qcdkfactor  =1.0
    # backgrounds
    pass_hists_bkg = {}
    fail_hists_bkg = {}
    if skipQCD:
        background_names = ["wqq", "zqq", "tqq"]
    else:
        background_names = ["wqq", "zqq", "qcd", "tqq"]
    for i, bkg in enumerate(background_names):
        if bkg == 'qcd' :
            qcd_fail = f.Get('qcd_fail')
            qcd_fail.Scale(qcdkfactor)
            qcd_fail.Scale(1. / scale)
            if useQCD:
                print "Using QCD MC"
                qcd_pass = f.Get('qcd_pass').Clone()
                qcd_pass.Scale(qcdkfactor)
                qcd_pass.Scale(1. / scale)
            else:
                print "Using  qcd_pass = qcd_fail * eff(pass)/eff(fail)"
                qcd_pass_real = f.Get('qcd_pass').Clone('qcd_pass_real')
                qcd_pass_real.Scale(1. / scale)
                qcd_pass = qcd_fail.Clone('qcd_pass')
                qcd_pass_real_integral = 0
                qcd_fail_integral = 0
                for i in range(1, qcd_pass_real.GetNbinsX() + 1):
                    for j in range(1, qcd_pass_real.GetNbinsY() + 1):
                        if qcd_pass_real.GetXaxis().GetBinCenter(i) > mass_range[
                            0] and qcd_pass_real.GetXaxis().GetBinCenter(
                                i) < mass_range[1]:
                            qcd_pass_real_integral += qcd_pass_real.GetBinContent(i, j)
                            qcd_fail_integral += qcd_fail.GetBinContent(i, j)
                qcd_pass.Scale(qcd_pass_real_integral / qcd_fail_integral)  # qcd_pass = qcd_fail * eff(pass)/eff(fail)
            pass_hists_bkg["qcd"] = qcd_pass
            fail_hists_bkg["qcd"] = qcd_fail
            print 'qcd pass integral', qcd_pass.Integral()
            print 'qcd fail integral', qcd_fail.Integral()
        elif (fLoose is not None) and (bkg == 'wqq' or bkg == 'zqq'):
            print "Trying to get ", bkg + '_pass'
            hpass_tmp = fLoose.Get(bkg + '_pass').Clone()
            hfail_tmp = f.Get(bkg + '_fail').Clone()
            hpass_tmp.Scale(1. / scale)
            hfail_tmp.Scale(1. / scale)
            hpass_tmp.Scale(GetSF(bkg, 'pass', f, fLoose,sf_dict=sf_dict))
            hfail_tmp.Scale(GetSF(bkg, 'fail', f,sf_dict=sf_dict))
            pass_hists_bkg[bkg] = hpass_tmp
            fail_hists_bkg[bkg] = hfail_tmp
        else:
            hpass_tmp = f.Get(bkg + '_pass').Clone()
            hfail_tmp = f.Get(bkg + '_fail').Clone()
            hpass_tmp.Scale(1. / scale)
            hfail_tmp.Scale(1. / scale)
            hpass_tmp.Scale(GetSF(bkg, 'pass', f,sf_dict=sf_dict))
            hfail_tmp.Scale(GetSF(bkg, 'fail', f,sf_dict=sf_dict))
            pass_hists_bkg[bkg] = hpass_tmp
            fail_hists_bkg[bkg] = hfail_tmp

    # signals ( empty for Zbb)
    pass_hists_sig = {}
    fail_hists_sig = {}
    masses = [] 
    sigs = ["hqq", "zhqq", "whqq", "vbfhqq", "tthqq"]
    signal_names = []

    for mass in masses:
        for sig in sigs:
            passhist = f.Get(sig + str(mass) + "_pass").Clone()
            failhist = f.Get(sig + str(mass) + "_fail").Clone()
            for hist in [passhist, failhist]:
                for i in range(0, hist.GetNbinsX() + 2):
                    for j in range(0, hist.GetNbinsY() + 2):
                        if hist.GetBinContent(i, j) <= 0:
                            hist.SetBinContent(i, j, 0)
            failhist.Scale(1. / scale)
            passhist.Scale(1. / scale)
            failhist.Scale(GetSF(sig + str(mass), 'fail', f,sf_dict=sf_dict))
            passhist.Scale(GetSF(sig + str(mass), 'pass', f,sf_dict=sf_dict))
            pass_hists_sig[sig + str(mass)] = passhist
            fail_hists_sig[sig + str(mass)] = failhist
            signal_names.append(sig + str(mass))

    if pseudo:
        for i, bkg in enumerate(background_names):
            if i == 0:
                pass_hists["data_obs"] = pass_hists_bkg[bkg].Clone('data_obs_pass')
                fail_hists["data_obs"] = fail_hists_bkg[bkg].Clone('data_obs_fail')
            else:
                pass_hists["data_obs"].Add(pass_hists_bkg[bkg])
                fail_hists["data_obs"].Add(fail_hists_bkg[bkg])

        for i, signal in enumerate(signal_names):
            pass_hists["data_obs"].Add(pass_hists_sig[signal], r_signal)
            fail_hists["data_obs"].Add(fail_hists_sig[signal], r_signal)
    elif createPassFromFail:
        print "Creating data_obs pass from data_obs fail:   data_obs_pass = data_obs_fail * eff(pass)/eff(fail)"
        data_pass_real = f.Get('data_obs_pass').Clone('data_obs_pass_real')
        data_obs_fail  = f.Get('data_obs_fail')
        data_pass_real.Scale(1. / scale)
        data_pass = data_obs_fail.Clone('data_obs_pass')
        data_pass_real_integral = 0
        data_fail_integral = 0
        for i in range(1, data_pass_real.GetNbinsX() + 1):
            for j in range(1, data_pass_real.GetNbinsY() + 1):
                if data_pass_real.GetXaxis().GetBinCenter(i) > mass_range[0] and data_pass_real.GetXaxis().GetBinCenter(i) < mass_range[1]:
                    data_pass_real_integral += data_pass_real.GetBinContent(i, j)
                    data_fail_integral += data_obs_fail.GetBinContent(i, j)
        data_pass.Scale(data_pass_real_integral / data_fail_integral)  # qcd_pass = qcd_fail * eff(pass)/eff(fail)
        pass_hists["data_obs"] = data_pass 
        fail_hists["data_obs"] = data_obs_fail 
    else:
        pass_hists["data_obs"] = f.Get('data_obs_pass')
        fail_hists["data_obs"] = f.Get('data_obs_fail')

    pass_hists.update(pass_hists_bkg)
    pass_hists.update(pass_hists_sig)
    fail_hists.update(fail_hists_bkg)
    fail_hists.update(fail_hists_sig)

    for histogram in (pass_hists.values() + fail_hists.values()):
        for i in range(1, histogram.GetNbinsX() + 1):
            for j in range(1, histogram.GetNbinsY() + 1):
                massVal = histogram.GetXaxis().GetBinCenter(i)
                ptVal = histogram.GetYaxis().GetBinLowEdge(j) + histogram.GetYaxis().GetBinWidth(j) * 0.3
                rhoVal = r.TMath.Log(massVal * massVal / ptVal / ptVal)
                if blind and histogram.GetXaxis().GetBinCenter(i) > blind_range[
                    0] and histogram.GetXaxis().GetBinCenter(i) < blind_range[1]:
                    print "blinding signal region for %s, mass bin [%i,%i] " % (
                    histogram.GetName(), histogram.GetXaxis().GetBinLowEdge(i), histogram.GetXaxis().GetBinUpEdge(i))
                    histogram.SetBinContent(i, j, 0.)
                if rhoVal < rho_range[0] or rhoVal > rho_range[1]:
                    print "removing rho = %.2f for %s, pt bin [%i, %i], mass bin [%i,%i]" % (
                        rhoVal, histogram.GetName(), histogram.GetYaxis().GetBinLowEdge(j),
                        histogram.GetYaxis().GetBinUpEdge(j),
                        histogram.GetXaxis().GetBinLowEdge(i), histogram.GetXaxis().GetBinUpEdge(i))
                    histogram.SetBinContent(i, j, 0.)
                if massVal < mass_range[0] or massVal > mass_range[1]:
                    print "removing mass = %.2f for %s, pt bin [%i, %i], mass bin [%i,%i]" % (
                        massVal, histogram.GetName(), histogram.GetYaxis().GetBinLowEdge(j),
                        histogram.GetYaxis().GetBinUpEdge(j),
                        histogram.GetXaxis().GetBinLowEdge(i), histogram.GetXaxis().GetBinUpEdge(i))
                    histogram.SetBinContent(i, j, 0.)

        histogram.SetDirectory(0)

    return (pass_hists, fail_hists)


def GetSF(process, cat, f, fLoose=None, removeUnmatched=False, iPt=-1,sf_dict={}):
    SF = 1
    print process, cat
    BB_SF = sf_dict['BB_SF']
    V_SF  = sf_dict['V_SF']
    if 'hqq' in process or 'zqq' in process or 'Pbb' in process:
        if 'pass' in cat:
            SF *= BB_SF
            if 'zqq' in process:
                print BB_SF
        else:
            passInt = f.Get(process + '_pass').Integral()
            failInt = f.Get(process + '_fail').Integral()
            if failInt > 0:
                SF *= (1. + (1. - BB_SF) * passInt / failInt)
                if 'zqq' in process:
                    print (1. + (1. - BB_SF) * passInt / failInt)
    if 'wqq' in process or 'zqq' in process or 'hqq' in process or 'Pbb' in process:
        SF *= V_SF
        if 'zqq' in process:
            print V_SF
    matchingString = ''
    if removeUnmatched and ('wqq' in process or 'zqq' in process):
        matchingString = '_matched'
    if fLoose is not None and ('wqq' in process or 'zqq' in process) and 'pass' in cat:
        if iPt > -1:
            nbinsX = f.Get(process + '_pass' + matchingString).GetXaxis().GetNbins()
            passInt = f.Get(process + '_pass' + matchingString).Integral(1, nbinsX, int(iPt), int(iPt))
            passIntLoose = fLoose.Get(process + '_pass' + matchingString).Integral(1, nbinsX, int(iPt), int(iPt))
        else:
            passInt = f.Get(process + '_pass' + matchingString).Integral()
            passIntLoose = fLoose.Get(process + '_pass' + matchingString).Integral()
        SF *= passInt / passIntLoose
        if 'zqq' in process:
            print passInt / passIntLoose
    #if 'qcd' in process:
    #    qcdkfactor =0.78
    #    print "Applying qcdkfactor = %s"%qcdkfactor
    #    SF *= qcdkfactor

    return SF


def reset(w, fr, exclude=None):
    for p in RootIterator(fr.floatParsFinal()):
        if exclude is not None and exclude in p.GetName(): continue
        if w.var(p.GetName()):
            print 'setting %s = %e +/- %e from %s' % (p.GetName(), p.getVal(), p.getError(), fr.GetName())
            w.var(p.GetName()).setVal(p.getVal())
            w.var(p.GetName()).setError(p.getError())
    return True
