import ROOT as r

def getYields(category,fit):#pass/fail, prefit/fit_s

    f = r.TFile.Open("dak8/dak8_2016_fail_0.2-0.9_pass0.9-1-0/TF22_blind_qcdTF43uncV6_muonCRv7_SFAug8/mlfit_2016.root")

    bins = [4,5,6,7,8,9,10]
    MC_yield   = 0
    data_yield = 0

    for i in range(1,7):
        h_tqq = f.Get("shapes_{2}/cat{0}_2016_{1}_cat{0}/tqq".format(i,category,fit))
        h_wqq = f.Get("shapes_{2}/cat{0}_2016_{1}_cat{0}/wqq".format(i,category,fit))
        h_zqq = f.Get("shapes_{2}/cat{0}_2016_{1}_cat{0}/zqq".format(i,category,fit))
        h_qcd = f.Get("shapes_{2}/cat{0}_2016_{1}_cat{0}/qcd".format(i,category,fit))
        h_data= f.Get("shapes_{2}/cat{0}_2016_{1}_cat{0}/data".format(i,category,fit))

        for binN in bins:
            MC_yield += h_zqq.GetBinContent(binN)
            dataN = h_data.GetY()[binN-1]-h_qcd.GetBinContent(binN)-h_tqq.GetBinContent(binN)-h_wqq.GetBinContent(binN)
            data_yield += dataN

    return MC_yield,data_yield

MC_fail_post, data_fail_post = getYields("fail","fit_s")
MC_pass_post, data_pass_post = getYields("pass","fit_s")
MC_fail_pre, data_fail_pre =getYields("fail","prefit")
MC_pass_pre, data_pass_pre =getYields("pass","prefit")

print("Prefit Fail:  MC {0}; data {1}".format(MC_fail_pre,data_fail_pre))
print("Prefit Pass:  MC {0}; data {1}".format(MC_pass_pre,data_pass_pre))
print("Postfit Fail: MC {0}; data {1}".format(MC_fail_post,data_fail_post))
print("Postfit Pass: MC {0}; data {1}".format(MC_pass_post,data_pass_post))

print("MC efficiency: Prefit {0}; Postfit {1}".format(MC_pass_pre/(MC_fail_pre+MC_pass_pre), MC_pass_post/(MC_fail_post+MC_pass_post)))
print("data efficiency: Prefit {0}; Postfit {1}".format(data_pass_pre/(data_fail_pre+data_pass_pre), data_pass_post/(data_fail_post+data_pass_post)))
