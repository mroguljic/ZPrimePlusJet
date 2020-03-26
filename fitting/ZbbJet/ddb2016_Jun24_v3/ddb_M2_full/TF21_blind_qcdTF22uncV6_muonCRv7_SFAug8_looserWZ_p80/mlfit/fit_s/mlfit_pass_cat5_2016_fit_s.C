void mlfit_pass_cat5_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_s/cpass_cat5_2016_fit_s
//=========  (Thu Sep 26 13:57:43 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat5_2016_fit_s = new TCanvas("cpass_cat5_2016_fit_s", "cpass_cat5_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat5_2016_fit_s->SetHighLightColor(2);
   cpass_cat5_2016_fit_s->Range(0,0,1,1);
   cpass_cat5_2016_fit_s->SetFillColor(0);
   cpass_cat5_2016_fit_s->SetBorderMode(0);
   cpass_cat5_2016_fit_s->SetBorderSize(2);
   cpass_cat5_2016_fit_s->SetTickx(1);
   cpass_cat5_2016_fit_s->SetTicky(1);
   cpass_cat5_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat5_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat5_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat5_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat5_2016_fit_s
   TPad *p12pass_cat5_2016_fit_s = new TPad("p12pass_cat5_2016_fit_s", "p12pass_cat5_2016_fit_s",0,0.3,1,1);
   p12pass_cat5_2016_fit_s->Draw();
   p12pass_cat5_2016_fit_s->cd();
   p12pass_cat5_2016_fit_s->Range(13.7027,-11.86526,221.8108,581.3979);
   p12pass_cat5_2016_fit_s->SetFillColor(0);
   p12pass_cat5_2016_fit_s->SetBorderMode(0);
   p12pass_cat5_2016_fit_s->SetBorderSize(2);
   p12pass_cat5_2016_fit_s->SetTickx(1);
   p12pass_cat5_2016_fit_s->SetTicky(1);
   p12pass_cat5_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat5_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat5_2016_fit_s__105 = new TH1F("htotpass_cat5_2016_fit_s__105","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s__105->SetBinContent(1,2.654615e-06);
   htotpass_cat5_2016_fit_s__105->SetBinContent(2,291.3737);
   htotpass_cat5_2016_fit_s__105->SetBinContent(3,301.7314);
   htotpass_cat5_2016_fit_s__105->SetBinContent(4,308.4514);
   htotpass_cat5_2016_fit_s__105->SetBinContent(5,303.8943);
   htotpass_cat5_2016_fit_s__105->SetBinContent(6,325.2268);
   htotpass_cat5_2016_fit_s__105->SetBinContent(7,348.0477);
   htotpass_cat5_2016_fit_s__105->SetBinContent(8,322.1257);
   htotpass_cat5_2016_fit_s__105->SetBinContent(9,263.1782);
   htotpass_cat5_2016_fit_s__105->SetBinContent(10,234.5675);
   htotpass_cat5_2016_fit_s__105->SetBinContent(11,2.654615e-06);
   htotpass_cat5_2016_fit_s__105->SetBinContent(12,2.654615e-06);
   htotpass_cat5_2016_fit_s__105->SetBinContent(13,2.654615e-06);
   htotpass_cat5_2016_fit_s__105->SetBinContent(14,176.4336);
   htotpass_cat5_2016_fit_s__105->SetBinContent(15,164.0956);
   htotpass_cat5_2016_fit_s__105->SetBinContent(16,154.7998);
   htotpass_cat5_2016_fit_s__105->SetBinContent(17,140.8698);
   htotpass_cat5_2016_fit_s__105->SetBinContent(18,130.1919);
   htotpass_cat5_2016_fit_s__105->SetBinContent(19,120.4177);
   htotpass_cat5_2016_fit_s__105->SetBinContent(20,110.9211);
   htotpass_cat5_2016_fit_s__105->SetBinContent(21,100.4981);
   htotpass_cat5_2016_fit_s__105->SetBinContent(22,87.88235);
   htotpass_cat5_2016_fit_s__105->SetBinContent(23,75.15753);
   htotpass_cat5_2016_fit_s__105->SetBinError(1,3.837925e-07);
   htotpass_cat5_2016_fit_s__105->SetBinError(2,9.019657);
   htotpass_cat5_2016_fit_s__105->SetBinError(3,6.175343);
   htotpass_cat5_2016_fit_s__105->SetBinError(4,7.079009);
   htotpass_cat5_2016_fit_s__105->SetBinError(5,8.463363);
   htotpass_cat5_2016_fit_s__105->SetBinError(6,14.61783);
   htotpass_cat5_2016_fit_s__105->SetBinError(7,19.89399);
   htotpass_cat5_2016_fit_s__105->SetBinError(8,17.62222);
   htotpass_cat5_2016_fit_s__105->SetBinError(9,12.53856);
   htotpass_cat5_2016_fit_s__105->SetBinError(10,11.1085);
   htotpass_cat5_2016_fit_s__105->SetBinError(11,3.837925e-07);
   htotpass_cat5_2016_fit_s__105->SetBinError(12,3.837925e-07);
   htotpass_cat5_2016_fit_s__105->SetBinError(13,3.837925e-07);
   htotpass_cat5_2016_fit_s__105->SetBinError(14,6.622564);
   htotpass_cat5_2016_fit_s__105->SetBinError(15,5.76907);
   htotpass_cat5_2016_fit_s__105->SetBinError(16,4.5292);
   htotpass_cat5_2016_fit_s__105->SetBinError(17,3.666881);
   htotpass_cat5_2016_fit_s__105->SetBinError(18,3.081008);
   htotpass_cat5_2016_fit_s__105->SetBinError(19,2.798698);
   htotpass_cat5_2016_fit_s__105->SetBinError(20,2.690535);
   htotpass_cat5_2016_fit_s__105->SetBinError(21,2.637435);
   htotpass_cat5_2016_fit_s__105->SetBinError(22,2.55363);
   htotpass_cat5_2016_fit_s__105->SetBinError(23,2.419934);
   htotpass_cat5_2016_fit_s__105->SetMinimum(0);
   htotpass_cat5_2016_fit_s__105->SetMaximum(522.0715);
   htotpass_cat5_2016_fit_s__105->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__105->SetFillColor(ci);
   htotpass_cat5_2016_fit_s__105->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__105->SetLineColor(ci);
   htotpass_cat5_2016_fit_s__105->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s__105->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s__105->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s__105->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__105->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s__105->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__105->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s__105->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s__105->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s__105->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__105->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__105->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__105->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__105->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__105->Draw("");
   
   TH1F *htot_linepass_cat5_2016_fit_s__106 = new TH1F("htot_linepass_cat5_2016_fit_s__106","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(1,2.654615e-06);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(2,291.3737);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(3,301.7314);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(4,308.4514);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(5,303.8943);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(6,325.2268);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(7,348.0477);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(8,322.1257);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(9,263.1782);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(10,234.5675);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(11,2.654615e-06);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(12,2.654615e-06);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(13,2.654615e-06);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(14,176.4336);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(15,164.0956);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(16,154.7998);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(17,140.8698);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(18,130.1919);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(19,120.4177);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(20,110.9211);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(21,100.4981);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(22,87.88235);
   htot_linepass_cat5_2016_fit_s__106->SetBinContent(23,75.15753);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(1,3.837925e-07);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(2,9.019657);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(3,6.175343);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(4,7.079009);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(5,8.463363);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(6,14.61783);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(7,19.89399);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(8,17.62222);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(9,12.53856);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(10,11.1085);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(11,3.837925e-07);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(12,3.837925e-07);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(13,3.837925e-07);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(14,6.622564);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(15,5.76907);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(16,4.5292);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(17,3.666881);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(18,3.081008);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(19,2.798698);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(20,2.690535);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(21,2.637435);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(22,2.55363);
   htot_linepass_cat5_2016_fit_s__106->SetBinError(23,2.419934);
   htot_linepass_cat5_2016_fit_s__106->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_s__106->SetFillColor(ci);
   htot_linepass_cat5_2016_fit_s__106->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_s__106->SetLineColor(ci);
   htot_linepass_cat5_2016_fit_s__106->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_fit_s__106->SetMarkerColor(ci);
   htot_linepass_cat5_2016_fit_s__106->SetMarkerSize(0);
   htot_linepass_cat5_2016_fit_s__106->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_fit_s__106->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_fit_s__106->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_s__106->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_s__106->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_s__106->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_s__106->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_fit_s__106->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_s__106->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_fit_s__106->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_fit_s__106->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_fit_s__106->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_s__106->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_s__106->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_s__106->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_s__106->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_s__106->Draw("histsame");
   
   TH1F *qcd__107 = new TH1F("qcd__107","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__107->SetBinContent(2,290.4174);
   qcd__107->SetBinContent(3,294.6436);
   qcd__107->SetBinContent(4,286.8834);
   qcd__107->SetBinContent(5,267.1972);
   qcd__107->SetBinContent(6,246.496);
   qcd__107->SetBinContent(7,232.5201);
   qcd__107->SetBinContent(8,223.308);
   qcd__107->SetBinContent(9,207.446);
   qcd__107->SetBinContent(10,195.7697);
   qcd__107->SetBinContent(14,161.4034);
   qcd__107->SetBinContent(15,150.5812);
   qcd__107->SetBinContent(16,146.5413);
   qcd__107->SetBinContent(17,134.6247);
   qcd__107->SetBinContent(18,126.6853);
   qcd__107->SetBinContent(19,117.4982);
   qcd__107->SetBinContent(20,107.1141);
   qcd__107->SetBinContent(21,97.26174);
   qcd__107->SetBinContent(22,87.88235);
   qcd__107->SetBinContent(23,75.15753);
   qcd__107->SetBinError(2,9.01139);
   qcd__107->SetBinError(3,6.008943);
   qcd__107->SetBinError(4,6.261013);
   qcd__107->SetBinError(5,6.920349);
   qcd__107->SetBinError(6,8.032848);
   qcd__107->SetBinError(7,8.644271);
   qcd__107->SetBinError(8,8.128481);
   qcd__107->SetBinError(9,7.738656);
   qcd__107->SetBinError(10,6.771169);
   qcd__107->SetBinError(14,4.47199);
   qcd__107->SetBinError(15,3.740644);
   qcd__107->SetBinError(16,3.648336);
   qcd__107->SetBinError(17,3.053983);
   qcd__107->SetBinError(18,2.86251);
   qcd__107->SetBinError(19,2.632954);
   qcd__107->SetBinError(20,2.38919);
   qcd__107->SetBinError(21,2.418646);
   qcd__107->SetBinError(22,2.55363);
   qcd__107->SetBinError(23,2.419934);
   qcd__107->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__107->SetLineColor(ci);
   qcd__107->SetLineStyle(2);
   qcd__107->SetLineWidth(2);
   qcd__107->GetXaxis()->SetTitle("x");
   qcd__107->GetXaxis()->SetLabelFont(42);
   qcd__107->GetXaxis()->SetLabelSize(0.035);
   qcd__107->GetXaxis()->SetTitleSize(0.035);
   qcd__107->GetXaxis()->SetTitleFont(42);
   qcd__107->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__107->GetYaxis()->SetLabelFont(42);
   qcd__107->GetYaxis()->SetLabelSize(0.035);
   qcd__107->GetYaxis()->SetTitleSize(0.035);
   qcd__107->GetYaxis()->SetTitleOffset(0);
   qcd__107->GetYaxis()->SetTitleFont(42);
   qcd__107->GetZaxis()->SetLabelFont(42);
   qcd__107->GetZaxis()->SetLabelSize(0.035);
   qcd__107->GetZaxis()->SetTitleSize(0.035);
   qcd__107->GetZaxis()->SetTitleFont(42);
   qcd__107->Draw("hist sames");
   
   TH1F *htotpass_cat5_2016_fit_s__108 = new TH1F("htotpass_cat5_2016_fit_s__108","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s__108->SetBinContent(1,2.654615e-06);
   htotpass_cat5_2016_fit_s__108->SetBinContent(2,291.3737);
   htotpass_cat5_2016_fit_s__108->SetBinContent(3,301.7314);
   htotpass_cat5_2016_fit_s__108->SetBinContent(4,308.4514);
   htotpass_cat5_2016_fit_s__108->SetBinContent(5,303.8943);
   htotpass_cat5_2016_fit_s__108->SetBinContent(6,325.2268);
   htotpass_cat5_2016_fit_s__108->SetBinContent(7,348.0477);
   htotpass_cat5_2016_fit_s__108->SetBinContent(8,322.1257);
   htotpass_cat5_2016_fit_s__108->SetBinContent(9,263.1782);
   htotpass_cat5_2016_fit_s__108->SetBinContent(10,234.5675);
   htotpass_cat5_2016_fit_s__108->SetBinContent(11,2.654615e-06);
   htotpass_cat5_2016_fit_s__108->SetBinContent(12,2.654615e-06);
   htotpass_cat5_2016_fit_s__108->SetBinContent(13,2.654615e-06);
   htotpass_cat5_2016_fit_s__108->SetBinContent(14,176.4336);
   htotpass_cat5_2016_fit_s__108->SetBinContent(15,164.0956);
   htotpass_cat5_2016_fit_s__108->SetBinContent(16,154.7998);
   htotpass_cat5_2016_fit_s__108->SetBinContent(17,140.8698);
   htotpass_cat5_2016_fit_s__108->SetBinContent(18,130.1919);
   htotpass_cat5_2016_fit_s__108->SetBinContent(19,120.4177);
   htotpass_cat5_2016_fit_s__108->SetBinContent(20,110.9211);
   htotpass_cat5_2016_fit_s__108->SetBinContent(21,100.4981);
   htotpass_cat5_2016_fit_s__108->SetBinContent(22,87.88235);
   htotpass_cat5_2016_fit_s__108->SetBinContent(23,75.15753);
   htotpass_cat5_2016_fit_s__108->SetBinError(1,3.837925e-07);
   htotpass_cat5_2016_fit_s__108->SetBinError(2,9.019657);
   htotpass_cat5_2016_fit_s__108->SetBinError(3,6.175343);
   htotpass_cat5_2016_fit_s__108->SetBinError(4,7.079009);
   htotpass_cat5_2016_fit_s__108->SetBinError(5,8.463363);
   htotpass_cat5_2016_fit_s__108->SetBinError(6,14.61783);
   htotpass_cat5_2016_fit_s__108->SetBinError(7,19.89399);
   htotpass_cat5_2016_fit_s__108->SetBinError(8,17.62222);
   htotpass_cat5_2016_fit_s__108->SetBinError(9,12.53856);
   htotpass_cat5_2016_fit_s__108->SetBinError(10,11.1085);
   htotpass_cat5_2016_fit_s__108->SetBinError(11,3.837925e-07);
   htotpass_cat5_2016_fit_s__108->SetBinError(12,3.837925e-07);
   htotpass_cat5_2016_fit_s__108->SetBinError(13,3.837925e-07);
   htotpass_cat5_2016_fit_s__108->SetBinError(14,6.622564);
   htotpass_cat5_2016_fit_s__108->SetBinError(15,5.76907);
   htotpass_cat5_2016_fit_s__108->SetBinError(16,4.5292);
   htotpass_cat5_2016_fit_s__108->SetBinError(17,3.666881);
   htotpass_cat5_2016_fit_s__108->SetBinError(18,3.081008);
   htotpass_cat5_2016_fit_s__108->SetBinError(19,2.798698);
   htotpass_cat5_2016_fit_s__108->SetBinError(20,2.690535);
   htotpass_cat5_2016_fit_s__108->SetBinError(21,2.637435);
   htotpass_cat5_2016_fit_s__108->SetBinError(22,2.55363);
   htotpass_cat5_2016_fit_s__108->SetBinError(23,2.419934);
   htotpass_cat5_2016_fit_s__108->SetMinimum(0);
   htotpass_cat5_2016_fit_s__108->SetMaximum(522.0715);
   htotpass_cat5_2016_fit_s__108->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__108->SetFillColor(ci);
   htotpass_cat5_2016_fit_s__108->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__108->SetLineColor(ci);
   htotpass_cat5_2016_fit_s__108->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s__108->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s__108->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s__108->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__108->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s__108->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__108->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s__108->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s__108->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s__108->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__108->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__108->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__108->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__108->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__108->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis27[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_27 = new TH1F("hstackMC_stack_27","hstackMC",23, xAxis27);
   hstackMC_stack_27->SetMinimum(-367.3369);
   hstackMC_stack_27->SetMaximum(442.6108);
   hstackMC_stack_27->SetDirectory(0);
   hstackMC_stack_27->SetStats(0);
   hstackMC_stack_27->SetLineStyle(0);
   hstackMC_stack_27->SetMarkerStyle(20);
   hstackMC_stack_27->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_27->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_27->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_27->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_27->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_27->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_27->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_27->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_27->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_27->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_27->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_27->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_27->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_27->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_27->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_27->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_27->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_27);
   
   Double_t xAxis28[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat5_2016_pass_cat5",23, xAxis28);
   tqq_stack_1->SetBinContent(2,0.5633778);
   tqq_stack_1->SetBinContent(3,2.018258);
   tqq_stack_1->SetBinContent(4,4.565618);
   tqq_stack_1->SetBinContent(5,7.540726);
   tqq_stack_1->SetBinContent(6,7.416337);
   tqq_stack_1->SetBinContent(7,12.2245);
   tqq_stack_1->SetBinContent(8,13.79616);
   tqq_stack_1->SetBinContent(9,8.964041);
   tqq_stack_1->SetBinContent(10,17.5956);
   tqq_stack_1->SetBinContent(14,15.0302);
   tqq_stack_1->SetBinContent(15,13.51438);
   tqq_stack_1->SetBinContent(16,8.258445);
   tqq_stack_1->SetBinContent(17,6.245099);
   tqq_stack_1->SetBinContent(18,3.506537);
   tqq_stack_1->SetBinContent(19,2.919564);
   tqq_stack_1->SetBinContent(20,3.807016);
   tqq_stack_1->SetBinContent(21,3.23633);
   tqq_stack_1->SetBinError(2,0.183091);
   tqq_stack_1->SetBinError(3,0.6559097);
   tqq_stack_1->SetBinError(4,1.483771);
   tqq_stack_1->SetBinError(5,2.450646);
   tqq_stack_1->SetBinError(6,2.410221);
   tqq_stack_1->SetBinError(7,3.972817);
   tqq_stack_1->SetBinError(8,4.483587);
   tqq_stack_1->SetBinError(9,2.913205);
   tqq_stack_1->SetBinError(10,5.718362);
   tqq_stack_1->SetBinError(14,4.884635);
   tqq_stack_1->SetBinError(15,4.392011);
   tqq_stack_1->SetBinError(16,2.683896);
   tqq_stack_1->SetBinError(17,2.029582);
   tqq_stack_1->SetBinError(18,1.139583);
   tqq_stack_1->SetBinError(19,0.948823);
   tqq_stack_1->SetBinError(20,1.237235);
   tqq_stack_1->SetBinError(21,1.051769);
   tqq_stack_1->SetEntries(23);

   ci = TColor::GetColor("#660066");
   tqq_stack_1->SetLineColor(ci);
   tqq_stack_1->SetLineStyle(4);
   tqq_stack_1->SetLineWidth(2);
   tqq_stack_1->GetXaxis()->SetTitle("x");
   tqq_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_stack_1,"");
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat5_2016_pass_cat5",23,40,201);
   wqq_stack_2->SetBinContent(1,1.239343e-06);
   wqq_stack_2->SetBinContent(2,0.02277524);
   wqq_stack_2->SetBinContent(3,3.656186);
   wqq_stack_2->SetBinContent(4,12.17637);
   wqq_stack_2->SetBinContent(5,22.24033);
   wqq_stack_2->SetBinContent(6,46.21064);
   wqq_stack_2->SetBinContent(7,56.31945);
   wqq_stack_2->SetBinContent(8,25.86746);
   wqq_stack_2->SetBinContent(9,8.394157);
   wqq_stack_2->SetBinContent(10,2.161649);
   wqq_stack_2->SetBinContent(11,1.239343e-06);
   wqq_stack_2->SetBinContent(12,1.239343e-06);
   wqq_stack_2->SetBinContent(13,1.239343e-06);
   wqq_stack_2->SetBinContent(14,1.239343e-06);
   wqq_stack_2->SetBinContent(15,1.239343e-06);
   wqq_stack_2->SetBinContent(16,1.239343e-06);
   wqq_stack_2->SetBinContent(17,1.239343e-06);
   wqq_stack_2->SetBinContent(18,1.239343e-06);
   wqq_stack_2->SetBinContent(19,1.239343e-06);
   wqq_stack_2->SetBinContent(20,1.239343e-06);
   wqq_stack_2->SetBinContent(21,1.239343e-06);
   wqq_stack_2->SetBinContent(22,1.239343e-06);
   wqq_stack_2->SetBinContent(23,1.239343e-06);
   wqq_stack_2->SetBinError(1,2.315573e-07);
   wqq_stack_2->SetBinError(2,0.007121655);
   wqq_stack_2->SetBinError(3,1.133823);
   wqq_stack_2->SetBinError(4,2.586327);
   wqq_stack_2->SetBinError(5,3.933068);
   wqq_stack_2->SetBinError(6,8.880383);
   wqq_stack_2->SetBinError(7,13.35445);
   wqq_stack_2->SetBinError(8,8.591164);
   wqq_stack_2->SetBinError(9,2.62837);
   wqq_stack_2->SetBinError(10,0.5728902);
   wqq_stack_2->SetBinError(11,2.315573e-07);
   wqq_stack_2->SetBinError(12,2.315573e-07);
   wqq_stack_2->SetBinError(13,2.315573e-07);
   wqq_stack_2->SetBinError(14,2.315573e-07);
   wqq_stack_2->SetBinError(15,2.315573e-07);
   wqq_stack_2->SetBinError(16,2.315573e-07);
   wqq_stack_2->SetBinError(17,2.315573e-07);
   wqq_stack_2->SetBinError(18,2.315573e-07);
   wqq_stack_2->SetBinError(19,2.315573e-07);
   wqq_stack_2->SetBinError(20,2.315573e-07);
   wqq_stack_2->SetBinError(21,2.315573e-07);
   wqq_stack_2->SetBinError(22,2.315573e-07);
   wqq_stack_2->SetBinError(23,2.315573e-07);
   wqq_stack_2->SetEntries(23);

   ci = TColor::GetColor("#009900");
   wqq_stack_2->SetLineColor(ci);
   wqq_stack_2->SetLineStyle(2);
   wqq_stack_2->SetLineWidth(2);
   wqq_stack_2->GetXaxis()->SetTitle("x");
   wqq_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_stack_2,"");
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat5_2016_pass_cat5",23,40,201);
   zqq_stack_3->SetBinContent(1,1.415272e-06);
   zqq_stack_3->SetBinContent(2,0.3701374);
   zqq_stack_3->SetBinContent(3,1.413342);
   zqq_stack_3->SetBinContent(4,4.826018);
   zqq_stack_3->SetBinContent(5,6.916114);
   zqq_stack_3->SetBinContent(6,25.10386);
   zqq_stack_3->SetBinContent(7,46.9836);
   zqq_stack_3->SetBinContent(8,59.15409);
   zqq_stack_3->SetBinContent(9,38.37398);
   zqq_stack_3->SetBinContent(10,19.04058);
   zqq_stack_3->SetBinContent(11,1.415272e-06);
   zqq_stack_3->SetBinContent(12,1.415272e-06);
   zqq_stack_3->SetBinContent(13,1.415272e-06);
   zqq_stack_3->SetBinContent(14,1.415272e-06);
   zqq_stack_3->SetBinContent(15,1.415272e-06);
   zqq_stack_3->SetBinContent(16,1.415272e-06);
   zqq_stack_3->SetBinContent(17,1.415272e-06);
   zqq_stack_3->SetBinContent(18,1.415272e-06);
   zqq_stack_3->SetBinContent(19,1.415272e-06);
   zqq_stack_3->SetBinContent(20,1.415272e-06);
   zqq_stack_3->SetBinContent(21,1.415272e-06);
   zqq_stack_3->SetBinContent(22,1.415272e-06);
   zqq_stack_3->SetBinContent(23,1.415272e-06);
   zqq_stack_3->SetBinError(1,3.060685e-07);
   zqq_stack_3->SetBinError(2,0.3398264);
   zqq_stack_3->SetBinError(3,0.5583002);
   zqq_stack_3->SetBinError(4,1.421769);
   zqq_stack_3->SetBinError(5,1.504191);
   zqq_stack_3->SetBinError(6,8.030192);
   zqq_stack_3->SetBinError(7,11.266);
   zqq_stack_3->SetBinError(8,12.27028);
   zqq_stack_3->SetBinError(9,9.051716);
   zqq_stack_3->SetBinError(10,6.672496);
   zqq_stack_3->SetBinError(11,3.060685e-07);
   zqq_stack_3->SetBinError(12,3.060685e-07);
   zqq_stack_3->SetBinError(13,3.060685e-07);
   zqq_stack_3->SetBinError(14,3.060685e-07);
   zqq_stack_3->SetBinError(15,3.060685e-07);
   zqq_stack_3->SetBinError(16,3.060685e-07);
   zqq_stack_3->SetBinError(17,3.060685e-07);
   zqq_stack_3->SetBinError(18,3.060685e-07);
   zqq_stack_3->SetBinError(19,3.060685e-07);
   zqq_stack_3->SetBinError(20,3.060685e-07);
   zqq_stack_3->SetBinError(21,3.060685e-07);
   zqq_stack_3->SetBinError(22,3.060685e-07);
   zqq_stack_3->SetBinError(23,3.060685e-07);
   zqq_stack_3->SetEntries(23);

   ci = TColor::GetColor("#cc0000");
   zqq_stack_3->SetLineColor(ci);
   zqq_stack_3->SetLineStyle(3);
   zqq_stack_3->SetLineWidth(2);
   zqq_stack_3->GetXaxis()->SetTitle("x");
   zqq_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_stack_3,"");
   
   TH1F *hsigpass_cat5_2016_fit_s_stack_4 = new TH1F("hsigpass_cat5_2016_fit_s_stack_4","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(1,5.719978e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(2,0.02114318);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(3,2.781237);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(4,0.006931377);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(5,0.6942781);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(6,1.355322);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(7,4.285809);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(8,6.976669);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(9,10.04615);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(10,11.86188);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(11,5.719978e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(12,5.719978e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(13,5.719978e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(14,27.0986);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(15,13.30183);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(16,3.097426);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(17,0.08133622);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(18,0.01884874);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(19,0.01923837);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(20,0.03939156);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(21,0.01379084);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(22,0.006789482);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(23,0.007303407);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(1,8.198854e-06);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(2,0.05283088);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(3,44.76528);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(4,0.01731862);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(5,7.075386);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(6,15.07419);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(7,61.80108);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(8,106.7511);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(9,151.9378);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(10,162.9794);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(11,8.198854e-06);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(12,8.198854e-06);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(13,8.198854e-06);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(14,394.4355);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(15,201.4267);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(16,47.72436);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(17,0.4233804);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(18,0.1093715);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(19,0.05981554);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(20,0.08075353);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(21,0.03445896);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(22,0.01696406);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(23,0.01824825);
   hsigpass_cat5_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat5_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3027[23] = {
   43.5,
   50.5,
   57.5,
   64.5,
   71.5,
   78.5,
   85.5,
   92.5,
   99.5,
   106.5,
   113.5,
   120.5,
   127.5,
   134.5,
   141.5,
   148.5,
   155.5,
   162.5,
   169.5,
   176.5,
   183.5,
   190.5,
   197.5};
   Double_t data_copy_fy3027[23] = {
   0,
   288,
   315,
   307,
   316,
   327,
   346,
   352,
   247,
   261,
   0,
   0,
   0,
   204,
   156,
   176,
   147,
   134,
   104,
   119,
   95,
   73,
   86};
   Double_t data_copy_felx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t data_copy_fely3027[23] = {
   1.841055,
   17.9906,
   18.76744,
   18.54085,
   18.79556,
   19.102,
   19.61943,
   19.77987,
   16.73782,
   17.17651,
   1.841055,
   1.841055,
   1.841055,
   15.30654,
   13.51699,
   14.29195,
   13.15215,
   12.60492,
   11.23099,
   11.93955,
   10.78125,
   9.583245,
   10.30981};
   Double_t data_copy_fehx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t data_copy_fehy3027[23] = {
   0,
   16.96107,
   17.7392,
   17.51224,
   17.76736,
   18.07428,
   18.59248,
   18.75315,
   15.70592,
   16.14548,
   0,
   0,
   0,
   14.27145,
   12.47686,
   13.25417,
   12.1108,
   11.56162,
   10.18183,
   10.89359,
   9.729809,
   8.524559,
   9.255741};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3027,data_copy_fy3027,data_copy_felx3027,data_copy_fehx3027,data_copy_fely3027,data_copy_fehy3027);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat5_2016_pass_cat5");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3027 = new TH1F("Graph_data_copy3027","tqq in cat5_2016_pass_cat5",100,28.1,212.9);
   Graph_data_copy3027->SetMinimum(0);
   Graph_data_copy3027->SetMaximum(408.0126);
   Graph_data_copy3027->SetDirectory(0);
   Graph_data_copy3027->SetStats(0);
   Graph_data_copy3027->SetLineStyle(0);
   Graph_data_copy3027->SetMarkerStyle(20);
   Graph_data_copy3027->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3027->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3027->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3027->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3027->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3027->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3027->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3027->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3027->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3027->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3027->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3027);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.55,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("htotpass_cat5_2016_fit_s","Total background","lf");

   ci = TColor::GetColor("#3366cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hsigpass_cat5_2016_fit_s_stack_4","H(b#bar{b})","lf");

   ci = TColor::GetColor("#ff0099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("data","Data","pe");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.67,0.92,"35.5 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.82,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.055);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.25,0.77,"675 < p_{T} < 800 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.25,0.72,"Deep double-b tagger");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat5_2016_fit_s_copy__109 = new TH1F("htotpass_cat5_2016_fit_s_copy__109","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(1,2.654615e-06);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(2,291.3737);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(3,301.7314);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(4,308.4514);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(5,303.8943);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(6,325.2268);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(7,348.0477);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(8,322.1257);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(9,263.1782);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(10,234.5675);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(11,2.654615e-06);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(12,2.654615e-06);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(13,2.654615e-06);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(14,176.4336);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(15,164.0956);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(16,154.7998);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(17,140.8698);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(18,130.1919);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(19,120.4177);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(20,110.9211);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(21,100.4981);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(22,87.88235);
   htotpass_cat5_2016_fit_s_copy__109->SetBinContent(23,75.15753);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(1,3.837925e-07);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(2,9.019657);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(3,6.175343);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(4,7.079009);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(5,8.463363);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(6,14.61783);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(7,19.89399);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(8,17.62222);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(9,12.53856);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(10,11.1085);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(11,3.837925e-07);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(12,3.837925e-07);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(13,3.837925e-07);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(14,6.622564);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(15,5.76907);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(16,4.5292);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(17,3.666881);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(18,3.081008);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(19,2.798698);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(20,2.690535);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(21,2.637435);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(22,2.55363);
   htotpass_cat5_2016_fit_s_copy__109->SetBinError(23,2.419934);
   htotpass_cat5_2016_fit_s_copy__109->SetMaximum(522.0715);
   htotpass_cat5_2016_fit_s_copy__109->SetEntries(92);
   htotpass_cat5_2016_fit_s_copy__109->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s_copy__109->SetFillColor(ci);
   htotpass_cat5_2016_fit_s_copy__109->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s_copy__109->SetLineColor(ci);
   htotpass_cat5_2016_fit_s_copy__109->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s_copy__109->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s_copy__109->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s_copy__109->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__109->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s_copy__109->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__109->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s_copy__109->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s_copy__109->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s_copy__109->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__109->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__109->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s_copy__109->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s_copy__109->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__109->Draw("sameaxis");
   p12pass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_s
   TPad *p22pass_cat5_2016_fit_s = new TPad("p22pass_cat5_2016_fit_s", "p22pass_cat5_2016_fit_s",0,0,1,0.3);
   p22pass_cat5_2016_fit_s->Draw();
   p22pass_cat5_2016_fit_s->cd();
   p22pass_cat5_2016_fit_s->Range(13.7027,-11.32912,221.8108,9.767941);
   p22pass_cat5_2016_fit_s->SetFillColor(0);
   p22pass_cat5_2016_fit_s->SetBorderMode(0);
   p22pass_cat5_2016_fit_s->SetBorderSize(2);
   p22pass_cat5_2016_fit_s->SetTickx(1);
   p22pass_cat5_2016_fit_s->SetTicky(1);
   p22pass_cat5_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat5_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat5_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_s__110 = new TH1F("iOneWithErrorspass_cat5_2016_fit_s__110","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_s__110->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_s__110->SetMaximum(8.713088);
   iOneWithErrorspass_cat5_2016_fit_s__110->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__110->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__110->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__110->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__110->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__110->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__110->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s__110->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__110->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_28 = new TH1F("hstack_stack_28","hstack",23,40,201);
   hstack_stack_28->SetMinimum(-392.5367);
   hstack_stack_28->SetMaximum(416.151);
   hstack_stack_28->SetDirectory(0);
   hstack_stack_28->SetStats(0);
   hstack_stack_28->SetLineStyle(0);
   hstack_stack_28->SetMarkerStyle(20);
   hstack_stack_28->GetXaxis()->SetLabelFont(42);
   hstack_stack_28->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_28->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_28->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_28->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_28->GetXaxis()->SetTitleFont(42);
   hstack_stack_28->GetYaxis()->SetLabelFont(42);
   hstack_stack_28->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_28->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_28->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_28->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_28->GetYaxis()->SetTitleFont(42);
   hstack_stack_28->GetZaxis()->SetLabelFont(42);
   hstack_stack_28->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_28->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_28->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_28->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_28);
   
   
   TH1F *sigHistResidualwqqpass_cat5_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat5_2016_fit_s_stack_1","wqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(2,0.001342795);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(3,0.2061078);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(4,0.6953061);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(5,1.251752);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(6,2.556707);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(7,3.029151);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(8,1.379366);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(9,0.534458);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(10,0.1338856);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(14,8.684075e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(15,9.933134e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(16,9.350593e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(17,1.023337e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(18,1.071946e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(19,1.217211e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(20,1.137681e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(21,1.273759e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(22,1.45385e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(23,1.338999e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(1,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(2,0.007121655);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(3,1.133823);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(4,2.586327);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(5,3.933068);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(6,8.880383);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(7,13.35445);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(8,8.591164);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(9,2.62837);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(10,0.5728902);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(11,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(12,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(13,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(14,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(15,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(16,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(17,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(18,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(19,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(20,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(21,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(22,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinError(23,2.315573e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat5_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat5_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat5_2016_fit_s_stack_2","zqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(2,0.02182276);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(3,0.07967341);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(4,0.2755797);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(5,0.3892595);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(6,1.388927);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(7,2.527022);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(8,3.154355);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(9,2.44328);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(10,1.179313);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(14,9.91681e-08);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(15,1.134318e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(16,1.067794e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(17,1.168603e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(18,1.224113e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(19,1.389998e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(20,1.299179e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(21,1.454573e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(22,1.660229e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(23,1.529075e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(1,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(2,0.3398264);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(3,0.5583002);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(4,1.421769);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(5,1.504191);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(6,8.030192);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(7,11.266);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(8,12.27028);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(9,9.051716);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(10,6.672496);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(11,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(12,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(13,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(14,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(15,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(16,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(17,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(18,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(19,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(20,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(21,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(22,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinError(23,3.060685e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat5_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(2,0.001246571);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(3,0.1567848);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(4,0.0003958018);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(5,0.03907604);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(6,0.07498623);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(7,0.230513);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(8,0.3720265);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(9,0.6396409);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(10,0.7346874);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(14,1.898798);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(15,1.06612);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(16,0.2336945);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(17,0.006716005);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(18,0.001630286);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(19,0.001889481);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(20,0.003616031);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(21,0.00141738);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(22,0.0007964614);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(23,0.0007890678);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(1,8.198854e-06);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(2,0.05283088);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(3,44.76528);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(4,0.01731862);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(5,7.075386);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(6,15.07419);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(7,61.80108);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(8,106.7511);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(9,151.9378);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(10,162.9794);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(11,8.198854e-06);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(12,8.198854e-06);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(13,8.198854e-06);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(14,394.4355);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(15,201.4267);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(16,47.72436);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(17,0.4233804);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(18,0.1093715);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(19,0.05981554);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(20,0.08075353);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(21,0.03445896);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(22,0.01696406);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinError(23,0.01824825);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_s__111 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_s__111","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__111->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fx3028[23] = {
   43.5,
   50.5,
   57.5,
   64.5,
   71.5,
   78.5,
   85.5,
   92.5,
   99.5,
   106.5,
   113.5,
   120.5,
   127.5,
   134.5,
   141.5,
   148.5,
   155.5,
   162.5,
   169.5,
   176.5,
   183.5,
   190.5,
   197.5};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fy3028[23] = {
   0,
   -0.1757439,
   0.9771284,
   0.8387439,
   2.195311,
   3.826181,
   5.160974,
   5.808725,
   1.827595,
   2.773249,
   0,
   0,
   0,
   1.800953,
   -0.6488489,
   1.48337,
   0.4661001,
   0.3021149,
   -1.612454,
   0.6766488,
   -0.5650748,
   -1.745821,
   1.051665};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_felx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fely3028[23] = {
   0,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fehx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fehy3028[23] = {
   0,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0,
   0,
   0,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_s_fx3028,Graph_from_iRatiopass_cat5_2016_fit_s_fy3028,Graph_from_iRatiopass_cat5_2016_fit_s_felx3028,Graph_from_iRatiopass_cat5_2016_fit_s_fehx3028,Graph_from_iRatiopass_cat5_2016_fit_s_fely3028,Graph_from_iRatiopass_cat5_2016_fit_s_fehy3028);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->SetMinimum(-3.701276);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->SetMaximum(7.76418);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_fit_s3028);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_s_copy__112 = new TH1F("iOneWithErrorspass_cat5_2016_fit_s_copy__112","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetMaximum(8.713088);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__112->Draw("sameaxis");
   p22pass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
   cpass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
   cpass_cat5_2016_fit_s->SetSelected(cpass_cat5_2016_fit_s);
}
