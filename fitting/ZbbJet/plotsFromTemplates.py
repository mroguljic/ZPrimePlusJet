import ROOT as r


def getKFactor(data,qcd,zqq,tqq,wqq):
    qcd_obs = data-zqq-tqq-wqq
    kFactor = qcd_obs/qcd
    return kFactor

#f = r.TFile.Open("./dak8/dak8_2016_fail_0.2-0.9_pass0.9-1-0/data/hist_1DZbb_pt_scalesmear.root")
f = r.TFile.Open("./ddb/ddb_M2_2016/data/hist_1DZbb_pt_scalesmear.root")
#f = r.TFile.Open("dak8/dak8_2016_0.2_0.95/data/hist_1DZbb_pt_scalesmear.root")
r.gROOT.SetBatch(1)
r.gStyle.SetOptStat(0000)
pt_binBoundaries = [450, 500, 550, 600, 675, 800, 1200]


for i in range(1,7):
    hQCD = f.Get("qcd_pass").ProjectionX("QCDpass_{0}".format(i),i,i)
    hWqq = f.Get("wqq_pass").ProjectionX("Wqqpass_{0}".format(i),i,i)
    htqq = f.Get("tqq_pass").ProjectionX("tqqpass_{0}".format(i),i,i)
    hZqq = f.Get("zqq_pass").ProjectionX("Zqqpass_{0}".format(i),i,i)
    hData= f.Get("data_obs_pass").ProjectionX("Datapass_{0}".format(i),i,i)

    kFactor = getKFactor(hData.Integral(),hQCD.Integral(),hZqq.Integral(),htqq.Integral(),hWqq.Integral())
    print("kFactor: ",kFactor)
    hQCD.Scale(kFactor)

    hTotal= hQCD.Clone("hTotal")
    hTotal.Add(hZqq)
    hTotal.Add(hWqq)
    hTotal.Add(htqq)

    hQCD.SetLineColor(r.kGray+2)
    hWqq.SetLineColor(r.kGreen)
    htqq.SetLineColor(r.kViolet)
    hZqq.SetLineColor(r.kRed)
    hData.SetLineColor(r.kBlack)
    hData.SetMarkerStyle(r.kFullCircle)
    hData.SetMarkerSize(2)
    hData.SetLineWidth(4)

    hQCD.SetLineWidth(4)
    hWqq.SetLineWidth(4)
    htqq.SetLineWidth(4)
    hZqq.SetLineWidth(4)
    hTotal.SetLineWidth(4)

    hQCD.SetLineStyle(9)
    hWqq.SetLineStyle(9)
    htqq.SetLineStyle(9)
    hZqq.SetLineStyle(9)
    


    hStack = r.THStack("hStack","")
    hStack.Add(htqq)
    hStack.Add(hWqq)
    hStack.Add(hZqq)

    legend = r.TLegend(0.6,0.6,0.85,0.8)
    legend.SetHeader("{0} < pT < {1} GeV".format(pt_binBoundaries[i-1],pt_binBoundaries[i]),"")
    legend.AddEntry(hTotal,"Total MC","l")
    legend.AddEntry(hQCD,"QCD","l")
    legend.AddEntry(htqq,"tqq","l")
    legend.AddEntry(hWqq,"Wqq","l")
    legend.AddEntry(hZqq,"Zqq","l")
    legend.AddEntry(hData,"data_obs","ep")
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)

    c = r.TCanvas("c","",2000,2000)
    c.cd()
    r.gPad.SetTicks()
    hTotal.SetTitle("")
    hTotal.Draw("HIST")
    hQCD.Draw("HIST same")
    hStack.Draw("HIST same")
    hData.Draw("e1 same")
    legend.Draw()
    c.SaveAs("stack{0}.png".format(i))
    c.Clear()