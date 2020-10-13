import ROOT as r
from optparse import OptionParser

def getYields(filename,fit):#fit_s/prefit

    f = r.TFile.Open(filename)

    failYield   = 0
    passYield   = 0

    for i in range(1,7):
        h_fail = f.Get("shapes_{1}/cat{0}_2016_fail_cat{0}/zqq".format(i,fit))
        h_pass = f.Get("shapes_{1}/cat{0}_2016_pass_cat{0}/zqq".format(i,fit))
        failYield += h_fail.Integral()
        passYield += h_pass.Integral()

    return passYield,failYield


parser = OptionParser()
parser.add_option('-i', '--input', metavar='IFILE', type='string', action='store',
                default   =   'fitDiagnostics.root',
                dest      =   'input',
                help      =   'fitDiagnostics.root file')
(options, args) = parser.parse_args()


prefit_pass, prefit_fail = getYields(options.input,"prefit")
fit_s_pass, fit_s_fail   = getYields(options.input,"fit_s")
r_z = (fit_s_pass+fit_s_fail)/(prefit_fail+prefit_pass)

print("Prefit pass:  {0:.2f} | Prefit fail:  {1:.2f}".format(prefit_pass,prefit_fail))
print("Postfit pass: {0:.2f} | Postfit fail: {1:.2f}".format(fit_s_pass,fit_s_fail))
print("r_z: {0:.2f}".format((fit_s_pass+fit_s_fail)/(prefit_fail+prefit_pass)))