import ROOT as r
from getBernstein1D import getBernstein1D, getTFParams
from array import array

r.gROOT.SetBatch(1)
r.gStyle.SetOptStat(0000)


def createRatio(h1, h2):
    h3 = h1.Clone("h3")
    h3.SetLineColor(r.kBlack)
    h3.SetMarkerStyle(21)
    h3.SetTitle("")
    h3.SetMinimum(0.45)
    h3.SetMaximum(1.55)
    # Set up plot for markers and errors
    h3.Sumw2()
    h3.SetStats(0)
    h3.Divide(h2)
 
    # Adjust y-axis settings
    y = h3.GetYaxis()
    y.SetTitle("Ratio pass / fail ")
    y.SetNdivisions(10)
    y.SetTitleSize(30)
    y.SetTitleFont(43)
    y.SetTitleOffset(1.55)
    y.SetLabelFont(43)
    y.SetLabelSize(30)
 
    # Adjust x-axis settings
    x = h3.GetXaxis()
    x.SetTitleSize(20)
    x.SetTitleFont(43)
    x.SetTitleOffset(4.0)
    x.SetLabelFont(43)
    x.SetLabelSize(50)
 
    return h3

def createCanvasPads():
    c = r.TCanvas("c", "canvas", 2000, 1500)
    # Upper histogram plot is pad1
    pad1 = r.TPad("pad1", "pad1", 0, 0.3, 1, 1.0)
    pad1.SetBottomMargin(0)  # joins upper and lower plot
    pad1.SetGridx()
    pad1.Draw()
    # Lower ratio plot is pad2
    c.cd()  # returns to main canvas before defining pad2
    pad2 = r.TPad("pad2", "pad2", 0, 0.05, 1, 0.3)
    pad2.SetTopMargin(0)  # joins upper and lower plot
    pad2.SetBottomMargin(0.2)
    pad2.SetGridx()
    pad2.Draw()
 
    return c, pad1, pad2


templatesFile = r.TFile.Open("dak8/dak8_2016_0.2_0.9//data/hist_1DZbb_pt_scalesmear.root")
rhalphabaseFile = r.TFile.Open("dak8/dak8_2016_0.2_0.9//TF43_MC_w2Fitv2/rhalphabase.root")
datacardPath = "dak8/dak8_2016_0.2_0.9//TF43_MC_w2Fitv2/card_rhalphabet_all_2016.root"
n_rho = 4
n_pT = 3

pT_bin_centers = [475, 525, 575, 637, 738, 1000]
pt_binBoundaries = [450, 500, 550, 600, 675, 800, 1200]

for i in range(1,7):
    #QCD fail and pass from templates
    hQCDFail = templatesFile.Get("qcd_fail").ProjectionX("fail_{0}".format(i),i,i)
    hQCDPass = templatesFile.Get("qcd_pass").ProjectionX("pass_{0}".format(i),i,i)
    hQCDFail.SetDirectory(0)
    hQCDPass.SetDirectory(0)
    hQCDPass.SetMarkerSize(1)
    hQCDPass.SetMarkerStyle(r.kFullCircle)
    hQCDPass.SetLineColor(r.kBlack)
    hQCDFail.SetLineWidth(2)
    hQCDPass.SetBinContent(1,0)
    hQCDFail.SetBinContent(1,0)    

    #Fail x Rpf, Rpf, Fail from rhalphabase
    hQCDfromRpf = hQCDFail.Clone("hQCDfromRpf_{0}".format(i))#we want the binning to match
    hFailFromRhalphabase = hQCDFail.Clone("hFailFromRhalphabase_{0}".format(i))#Fail histogram from rhalphabase
    hRpfValue   = hQCDFail.Clone("hRpf_{0}".format(i))#control plot, divides QCD from Rpf with QCD to extract Rpf
    hQCDfromRpf.Reset()
    hFailFromRhalphabase.Reset()
    hRpfValue.Reset()
    hQCDfromRpf.SetDirectory(0)
    hFailFromRhalphabase.SetDirectory(0)
    hQCDfromRpf.SetLineColor(r.kRed)
    hFailFromRhalphabase.SetLineColor(r.kViolet)
    hQCDfromRpf.SetLineWidth(2)
    hFailFromRhalphabase.SetLineWidth(3)

    #Reading from rhalphabase
    wSpaceName = 'w_pass_cat{0}'.format(i)
    wspace = rhalphabaseFile.Get(wSpaceName)
    nBins = hQCDFail.GetNbinsX()
    for nBin in range(1,nBins+1):
        if(nBin==1):#comment if you don't want to skip the first bin
            hQCDfromRpf.SetBinContent(1,0)
            continue
        try:
            nPass = r.RooFormulaVar(wspace.obj("qcd_pass_cat{0}_2016_Bin{1}".format(i,nBin))).evaluate()#fail x Rpf
            nFail = r.RooFormulaVar(wspace.obj("qcd_fail_cat{0}_2016_Bin{1}_func".format(i,nBin))).evaluate()#fail
        except:
            nPass = 0.
            nFail = 0
        hQCDfromRpf.SetBinContent(nBin,nPass)
        hFailFromRhalphabase.SetBinContent(nBin,nFail)


    #normalize everything
    hQCDPass.Scale(1/hQCDPass.Integral())
    hQCDFail.Scale(1/hQCDFail.Integral())
    hQCDfromRpf.Scale(1/hQCDfromRpf.Integral())
    hFailFromRhalphabase.Scale(1/hFailFromRhalphabase.Integral())


    #calculate Rpf value by dividing hPass with hFail
    for nBin in range(1,nBins+1):
        if(nBin==1):#comment if you don't want to skip the first bin
            hRpfValue.SetBinContent(1,0)
            continue
        if(hQCDFail.GetBinContent(nBin)==0):
            hRpfValue.SetBinContent(nBin,0.)
        else:
            hRpfValue.SetBinContent(nBin,hQCDfromRpf.GetBinContent(nBin)/hQCDFail.GetBinContent(nBin))

    #calculate Rpf from the fitted function
    TFparams = getTFParams(datacardPath,n_pT=n_pT,n_rho=n_rho)
    TFx, TFy = array( 'd' ), array( 'd' )
    bernstein1D = getBernstein1D(pT_bin_centers[i-1],n_pT=n_pT,n_rho=n_rho)#returns 2dBernstein function evaluated at the center of the pT bin (1d function)
    for n in range(1,hQCDPass.GetNbinsX()):#skipping first bin
        massPoint = hQCDPass.GetBinCenter(n+1)#because bin counting starts from 1
        TFvalue = bernstein1D([massPoint],TFparams)#evaluates the 1dBernstein function at given mass
        TFx.append(massPoint)
        TFy.append(TFvalue)#value of the Rpf transfer function

    gr = r.TGraph( hQCDPass.GetNbinsX()-1, TFx, TFy )
    gr.SetLineColor(r.kRed)
    gr.SetLineWidth(2)


    legend = r.TLegend(0.55,0.45,0.85,0.95)
    legend.SetHeader("","")
    legend.AddEntry(hQCDFail,"QCD fail, {0} < pT < {1} GeV".format(pt_binBoundaries[i-1],pt_binBoundaries[i]),"l")
    legend.AddEntry(hQCDPass,"QCD pass, {0} < pT < {1} GeV".format(pt_binBoundaries[i-1],pt_binBoundaries[i]),"ep")
    legend.AddEntry(hQCDfromRpf,"QCD fail x polynomial","l")
    legend.AddEntry(hFailFromRhalphabase,"QCD from rhalphabase","l")
    chi2 = hQCDfromRpf.Chi2Test(hQCDPass,"WWCHI2/NDF")
    legend.AddEntry(0, "\chi^2/NDF = {0:.2f}".format(chi2), "");
    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    legend.SetTextSize(0.035);
    c, pad1, pad2 = createCanvasPads()
    # draw everything
    pad1.cd()
    r.gPad.SetTicks()
    hQCDPass.SetTitle("")
    hQCDPass.Draw("")
    hQCDFail.Draw("h same")
    hFailFromRhalphabase.Draw("h same")
    hQCDfromRpf.Draw("h same")
    legend.Draw()
    # # to avoid clipping the bottom zero, redraw a small axis
    axis = r.TGaxis(-5, 20, -5, 220, 20, 220, 510, "")
    axis.SetLabelFont(43)
    axis.SetLabelSize(15)
    axis.Draw()
    pad2.cd()

    hRpf = createRatio(hQCDPass,hQCDFail)
    hRpf.Draw("ep")
    gr.Draw("same")
    legendBot = r.TLegend(0.68,0.7,0.90,0.98)
    legendBot.SetHeader("","")
    legendBot.AddEntry(hRpf,"hQCD pass / hQCD fail","ep")
    legendBot.AddEntry(gr,"Rpf at pT = {0} GeV".format(pT_bin_centers[i-1]),"l")
    legendBot.SetBorderSize(0)
    legendBot.SetFillStyle(0)
    legendBot.SetTextSize(0.09);
    legendBot.Draw()
    #hRpfValue.Draw("same")
    c.SaveAs("cat_{0}.png".format(i))
    print("Chi2/Ndof: ", chi2)
