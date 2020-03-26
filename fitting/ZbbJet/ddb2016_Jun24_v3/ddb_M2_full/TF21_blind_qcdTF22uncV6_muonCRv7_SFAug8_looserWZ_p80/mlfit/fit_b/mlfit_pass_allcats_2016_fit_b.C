void mlfit_pass_allcats_2016_fit_b()
{
//=========Macro generated from canvas: cpass_allcats_2016_fit_b/cpass_allcats_2016_fit_b
//=========  (Thu Sep 26 13:57:23 2019) by ROOT version 6.12/07
   TCanvas *cpass_allcats_2016_fit_b = new TCanvas("cpass_allcats_2016_fit_b", "cpass_allcats_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_allcats_2016_fit_b->SetHighLightColor(2);
   cpass_allcats_2016_fit_b->Range(0,0,1,1);
   cpass_allcats_2016_fit_b->SetFillColor(0);
   cpass_allcats_2016_fit_b->SetBorderMode(0);
   cpass_allcats_2016_fit_b->SetBorderSize(2);
   cpass_allcats_2016_fit_b->SetTickx(1);
   cpass_allcats_2016_fit_b->SetTicky(1);
   cpass_allcats_2016_fit_b->SetLeftMargin(0.16);
   cpass_allcats_2016_fit_b->SetBottomMargin(0.13);
   cpass_allcats_2016_fit_b->SetFrameFillStyle(0);
   cpass_allcats_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_allcats_2016_fit_b
   TPad *p12pass_allcats_2016_fit_b = new TPad("p12pass_allcats_2016_fit_b", "p12pass_allcats_2016_fit_b",0,0.3,1,1);
   p12pass_allcats_2016_fit_b->Draw();
   p12pass_allcats_2016_fit_b->cd();
   p12pass_allcats_2016_fit_b->Range(13.7027,-196.8601,221.8108,9646.146);
   p12pass_allcats_2016_fit_b->SetFillColor(0);
   p12pass_allcats_2016_fit_b->SetBorderMode(0);
   p12pass_allcats_2016_fit_b->SetBorderSize(2);
   p12pass_allcats_2016_fit_b->SetTickx(1);
   p12pass_allcats_2016_fit_b->SetTicky(1);
   p12pass_allcats_2016_fit_b->SetLeftMargin(0.16);
   p12pass_allcats_2016_fit_b->SetBottomMargin(0.02);
   p12pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   p12pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_allcats_2016_fit_b__145 = new TH1F("htotpass_allcats_2016_fit_b__145","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b__145->SetBinContent(1,2.722301e-05);
   htotpass_allcats_2016_fit_b__145->SetBinContent(2,5034.759);
   htotpass_allcats_2016_fit_b__145->SetBinContent(3,5316.416);
   htotpass_allcats_2016_fit_b__145->SetBinContent(4,5360.424);
   htotpass_allcats_2016_fit_b__145->SetBinContent(5,5403.166);
   htotpass_allcats_2016_fit_b__145->SetBinContent(6,5641.398);
   htotpass_allcats_2016_fit_b__145->SetBinContent(7,5774.563);
   htotpass_allcats_2016_fit_b__145->SetBinContent(8,5538.972);
   htotpass_allcats_2016_fit_b__145->SetBinContent(9,4921.055);
   htotpass_allcats_2016_fit_b__145->SetBinContent(10,4395.424);
   htotpass_allcats_2016_fit_b__145->SetBinContent(11,2.722301e-05);
   htotpass_allcats_2016_fit_b__145->SetBinContent(12,2.722301e-05);
   htotpass_allcats_2016_fit_b__145->SetBinContent(13,2.722301e-05);
   htotpass_allcats_2016_fit_b__145->SetBinContent(14,2878.982);
   htotpass_allcats_2016_fit_b__145->SetBinContent(15,2482.2);
   htotpass_allcats_2016_fit_b__145->SetBinContent(16,2119.737);
   htotpass_allcats_2016_fit_b__145->SetBinContent(17,1779.144);
   htotpass_allcats_2016_fit_b__145->SetBinContent(18,1468.79);
   htotpass_allcats_2016_fit_b__145->SetBinContent(19,839.9352);
   htotpass_allcats_2016_fit_b__145->SetBinContent(20,711.7738);
   htotpass_allcats_2016_fit_b__145->SetBinContent(21,416.8859);
   htotpass_allcats_2016_fit_b__145->SetBinContent(22,344.5252);
   htotpass_allcats_2016_fit_b__145->SetBinContent(23,283.708);
   htotpass_allcats_2016_fit_b__145->SetBinError(1,1.877372e-06);
   htotpass_allcats_2016_fit_b__145->SetBinError(2,40.01613);
   htotpass_allcats_2016_fit_b__145->SetBinError(3,37.92193);
   htotpass_allcats_2016_fit_b__145->SetBinError(4,47.9222);
   htotpass_allcats_2016_fit_b__145->SetBinError(5,61.41843);
   htotpass_allcats_2016_fit_b__145->SetBinError(6,89.70786);
   htotpass_allcats_2016_fit_b__145->SetBinError(7,113.4336);
   htotpass_allcats_2016_fit_b__145->SetBinError(8,117.0231);
   htotpass_allcats_2016_fit_b__145->SetBinError(9,96.27895);
   htotpass_allcats_2016_fit_b__145->SetBinError(10,80.18448);
   htotpass_allcats_2016_fit_b__145->SetBinError(11,1.877372e-06);
   htotpass_allcats_2016_fit_b__145->SetBinError(12,1.877372e-06);
   htotpass_allcats_2016_fit_b__145->SetBinError(13,1.877372e-06);
   htotpass_allcats_2016_fit_b__145->SetBinError(14,48.54394);
   htotpass_allcats_2016_fit_b__145->SetBinError(15,37.2357);
   htotpass_allcats_2016_fit_b__145->SetBinError(16,28.43449);
   htotpass_allcats_2016_fit_b__145->SetBinError(17,22.88485);
   htotpass_allcats_2016_fit_b__145->SetBinError(18,19.04561);
   htotpass_allcats_2016_fit_b__145->SetBinError(19,10.54955);
   htotpass_allcats_2016_fit_b__145->SetBinError(20,9.348571);
   htotpass_allcats_2016_fit_b__145->SetBinError(21,6.638678);
   htotpass_allcats_2016_fit_b__145->SetBinError(22,5.568265);
   htotpass_allcats_2016_fit_b__145->SetBinError(23,5.425024);
   htotpass_allcats_2016_fit_b__145->SetMinimum(0);
   htotpass_allcats_2016_fit_b__145->SetMaximum(8661.845);
   htotpass_allcats_2016_fit_b__145->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__145->SetFillColor(ci);
   htotpass_allcats_2016_fit_b__145->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__145->SetLineColor(ci);
   htotpass_allcats_2016_fit_b__145->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b__145->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b__145->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b__145->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__145->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b__145->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__145->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b__145->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b__145->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b__145->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__145->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__145->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__145->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__145->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__145->Draw("");
   
   TH1F *htot_linepass_allcats_2016_fit_b__146 = new TH1F("htot_linepass_allcats_2016_fit_b__146","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(1,2.722301e-05);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(2,5034.759);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(3,5316.416);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(4,5360.424);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(5,5403.166);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(6,5641.398);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(7,5774.563);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(8,5538.972);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(9,4921.055);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(10,4395.424);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(11,2.722301e-05);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(12,2.722301e-05);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(13,2.722301e-05);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(14,2878.982);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(15,2482.2);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(16,2119.737);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(17,1779.144);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(18,1468.79);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(19,839.9352);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(20,711.7738);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(21,416.8859);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(22,344.5252);
   htot_linepass_allcats_2016_fit_b__146->SetBinContent(23,283.708);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(1,1.877372e-06);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(2,40.01613);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(3,37.92193);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(4,47.9222);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(5,61.41843);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(6,89.70786);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(7,113.4336);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(8,117.0231);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(9,96.27895);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(10,80.18448);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(11,1.877372e-06);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(12,1.877372e-06);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(13,1.877372e-06);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(14,48.54394);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(15,37.2357);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(16,28.43449);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(17,22.88485);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(18,19.04561);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(19,10.54955);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(20,9.348571);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(21,6.638678);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(22,5.568265);
   htot_linepass_allcats_2016_fit_b__146->SetBinError(23,5.425024);
   htot_linepass_allcats_2016_fit_b__146->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_b__146->SetFillColor(ci);
   htot_linepass_allcats_2016_fit_b__146->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_b__146->SetLineColor(ci);
   htot_linepass_allcats_2016_fit_b__146->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_allcats_2016_fit_b__146->SetMarkerColor(ci);
   htot_linepass_allcats_2016_fit_b__146->SetMarkerSize(0);
   htot_linepass_allcats_2016_fit_b__146->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_allcats_2016_fit_b__146->GetXaxis()->SetRange(2,23);
   htot_linepass_allcats_2016_fit_b__146->GetXaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_b__146->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_b__146->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_b__146->GetXaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_b__146->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_allcats_2016_fit_b__146->GetYaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_b__146->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_allcats_2016_fit_b__146->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_allcats_2016_fit_b__146->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_allcats_2016_fit_b__146->GetYaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_b__146->GetZaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_b__146->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_b__146->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_b__146->GetZaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_b__146->Draw("histsame");
   
   TH1F *qcd_pass_sum__147 = new TH1F("qcd_pass_sum__147","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd_pass_sum__147->SetBinContent(2,4971.583);
   qcd_pass_sum__147->SetBinContent(3,5208.736);
   qcd_pass_sum__147->SetBinContent(4,5153.563);
   qcd_pass_sum__147->SetBinContent(5,5010.19);
   qcd_pass_sum__147->SetBinContent(6,4775.241);
   qcd_pass_sum__147->SetBinContent(7,4523.355);
   qcd_pass_sum__147->SetBinContent(8,4322.309);
   qcd_pass_sum__147->SetBinContent(9,4072.082);
   qcd_pass_sum__147->SetBinContent(10,3849.176);
   qcd_pass_sum__147->SetBinContent(14,2667.031);
   qcd_pass_sum__147->SetBinContent(15,2335.024);
   qcd_pass_sum__147->SetBinContent(16,2013.642);
   qcd_pass_sum__147->SetBinContent(17,1705.549);
   qcd_pass_sum__147->SetBinContent(18,1410.378);
   qcd_pass_sum__147->SetBinContent(19,815.2542);
   qcd_pass_sum__147->SetBinContent(20,684.3683);
   qcd_pass_sum__147->SetBinContent(21,404.5131);
   qcd_pass_sum__147->SetBinContent(22,342.1121);
   qcd_pass_sum__147->SetBinContent(23,282.2088);
   qcd_pass_sum__147->SetBinError(2,38.36144);
   qcd_pass_sum__147->SetBinError(3,33.4696);
   qcd_pass_sum__147->SetBinError(4,41.69343);
   qcd_pass_sum__147->SetBinError(5,51.12791);
   qcd_pass_sum__147->SetBinError(6,65.75155);
   qcd_pass_sum__147->SetBinError(7,75.25527);
   qcd_pass_sum__147->SetBinError(8,71.86062);
   qcd_pass_sum__147->SetBinError(9,63.86474);
   qcd_pass_sum__147->SetBinError(10,54.04571);
   qcd_pass_sum__147->SetBinError(14,30.64371);
   qcd_pass_sum__147->SetBinError(15,26.30899);
   qcd_pass_sum__147->SetBinError(16,22.15897);
   qcd_pass_sum__147->SetBinError(17,18.87368);
   qcd_pass_sum__147->SetBinError(18,16.04033);
   qcd_pass_sum__147->SetBinError(19,9.172737);
   qcd_pass_sum__147->SetBinError(20,7.80718);
   qcd_pass_sum__147->SetBinError(21,5.895319);
   qcd_pass_sum__147->SetBinError(22,5.506318);
   qcd_pass_sum__147->SetBinError(23,5.409106);
   qcd_pass_sum__147->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_pass_sum__147->SetLineColor(ci);
   qcd_pass_sum__147->SetLineStyle(2);
   qcd_pass_sum__147->SetLineWidth(2);
   qcd_pass_sum__147->GetXaxis()->SetTitle("x");
   qcd_pass_sum__147->GetXaxis()->SetLabelFont(42);
   qcd_pass_sum__147->GetXaxis()->SetLabelSize(0.035);
   qcd_pass_sum__147->GetXaxis()->SetTitleSize(0.035);
   qcd_pass_sum__147->GetXaxis()->SetTitleFont(42);
   qcd_pass_sum__147->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_pass_sum__147->GetYaxis()->SetLabelFont(42);
   qcd_pass_sum__147->GetYaxis()->SetLabelSize(0.035);
   qcd_pass_sum__147->GetYaxis()->SetTitleSize(0.035);
   qcd_pass_sum__147->GetYaxis()->SetTitleOffset(0);
   qcd_pass_sum__147->GetYaxis()->SetTitleFont(42);
   qcd_pass_sum__147->GetZaxis()->SetLabelFont(42);
   qcd_pass_sum__147->GetZaxis()->SetLabelSize(0.035);
   qcd_pass_sum__147->GetZaxis()->SetTitleSize(0.035);
   qcd_pass_sum__147->GetZaxis()->SetTitleFont(42);
   qcd_pass_sum__147->Draw("hist sames");
   
   TH1F *htotpass_allcats_2016_fit_b__148 = new TH1F("htotpass_allcats_2016_fit_b__148","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b__148->SetBinContent(1,2.722301e-05);
   htotpass_allcats_2016_fit_b__148->SetBinContent(2,5034.759);
   htotpass_allcats_2016_fit_b__148->SetBinContent(3,5316.416);
   htotpass_allcats_2016_fit_b__148->SetBinContent(4,5360.424);
   htotpass_allcats_2016_fit_b__148->SetBinContent(5,5403.166);
   htotpass_allcats_2016_fit_b__148->SetBinContent(6,5641.398);
   htotpass_allcats_2016_fit_b__148->SetBinContent(7,5774.563);
   htotpass_allcats_2016_fit_b__148->SetBinContent(8,5538.972);
   htotpass_allcats_2016_fit_b__148->SetBinContent(9,4921.055);
   htotpass_allcats_2016_fit_b__148->SetBinContent(10,4395.424);
   htotpass_allcats_2016_fit_b__148->SetBinContent(11,2.722301e-05);
   htotpass_allcats_2016_fit_b__148->SetBinContent(12,2.722301e-05);
   htotpass_allcats_2016_fit_b__148->SetBinContent(13,2.722301e-05);
   htotpass_allcats_2016_fit_b__148->SetBinContent(14,2878.982);
   htotpass_allcats_2016_fit_b__148->SetBinContent(15,2482.2);
   htotpass_allcats_2016_fit_b__148->SetBinContent(16,2119.737);
   htotpass_allcats_2016_fit_b__148->SetBinContent(17,1779.144);
   htotpass_allcats_2016_fit_b__148->SetBinContent(18,1468.79);
   htotpass_allcats_2016_fit_b__148->SetBinContent(19,839.9352);
   htotpass_allcats_2016_fit_b__148->SetBinContent(20,711.7738);
   htotpass_allcats_2016_fit_b__148->SetBinContent(21,416.8859);
   htotpass_allcats_2016_fit_b__148->SetBinContent(22,344.5252);
   htotpass_allcats_2016_fit_b__148->SetBinContent(23,283.708);
   htotpass_allcats_2016_fit_b__148->SetBinError(1,1.877372e-06);
   htotpass_allcats_2016_fit_b__148->SetBinError(2,40.01613);
   htotpass_allcats_2016_fit_b__148->SetBinError(3,37.92193);
   htotpass_allcats_2016_fit_b__148->SetBinError(4,47.9222);
   htotpass_allcats_2016_fit_b__148->SetBinError(5,61.41843);
   htotpass_allcats_2016_fit_b__148->SetBinError(6,89.70786);
   htotpass_allcats_2016_fit_b__148->SetBinError(7,113.4336);
   htotpass_allcats_2016_fit_b__148->SetBinError(8,117.0231);
   htotpass_allcats_2016_fit_b__148->SetBinError(9,96.27895);
   htotpass_allcats_2016_fit_b__148->SetBinError(10,80.18448);
   htotpass_allcats_2016_fit_b__148->SetBinError(11,1.877372e-06);
   htotpass_allcats_2016_fit_b__148->SetBinError(12,1.877372e-06);
   htotpass_allcats_2016_fit_b__148->SetBinError(13,1.877372e-06);
   htotpass_allcats_2016_fit_b__148->SetBinError(14,48.54394);
   htotpass_allcats_2016_fit_b__148->SetBinError(15,37.2357);
   htotpass_allcats_2016_fit_b__148->SetBinError(16,28.43449);
   htotpass_allcats_2016_fit_b__148->SetBinError(17,22.88485);
   htotpass_allcats_2016_fit_b__148->SetBinError(18,19.04561);
   htotpass_allcats_2016_fit_b__148->SetBinError(19,10.54955);
   htotpass_allcats_2016_fit_b__148->SetBinError(20,9.348571);
   htotpass_allcats_2016_fit_b__148->SetBinError(21,6.638678);
   htotpass_allcats_2016_fit_b__148->SetBinError(22,5.568265);
   htotpass_allcats_2016_fit_b__148->SetBinError(23,5.425024);
   htotpass_allcats_2016_fit_b__148->SetMinimum(0);
   htotpass_allcats_2016_fit_b__148->SetMaximum(8661.845);
   htotpass_allcats_2016_fit_b__148->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__148->SetFillColor(ci);
   htotpass_allcats_2016_fit_b__148->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__148->SetLineColor(ci);
   htotpass_allcats_2016_fit_b__148->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b__148->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b__148->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b__148->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__148->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b__148->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__148->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b__148->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b__148->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b__148->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__148->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__148->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__148->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__148->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__148->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis37[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_37 = new TH1F("hstackMC_stack_37","hstackMC",23, xAxis37);
   hstackMC_stack_37->SetMinimum(0);
   hstackMC_stack_37->SetMaximum(1313.769);
   hstackMC_stack_37->SetDirectory(0);
   hstackMC_stack_37->SetStats(0);
   hstackMC_stack_37->SetLineStyle(0);
   hstackMC_stack_37->SetMarkerStyle(20);
   hstackMC_stack_37->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_37->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_37->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_37->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_37->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_37->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_37->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_37->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_37->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_37->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_37->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_37->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_37->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_37->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_37->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_37->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_37->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_37);
   
   Double_t xAxis38[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_pass_sum_stack_1 = new TH1F("tqq_pass_sum_stack_1","tqq in cat1_2016_pass_cat1",23, xAxis38);
   tqq_pass_sum_stack_1->SetBinContent(2,53.86093);
   tqq_pass_sum_stack_1->SetBinContent(3,80.71825);
   tqq_pass_sum_stack_1->SetBinContent(4,101.3836);
   tqq_pass_sum_stack_1->SetBinContent(5,149.4695);
   tqq_pass_sum_stack_1->SetBinContent(6,233.9951);
   tqq_pass_sum_stack_1->SetBinContent(7,270.2776);
   tqq_pass_sum_stack_1->SetBinContent(8,255.1231);
   tqq_pass_sum_stack_1->SetBinContent(9,223.1176);
   tqq_pass_sum_stack_1->SetBinContent(10,248.8757);
   tqq_pass_sum_stack_1->SetBinContent(14,208.2022);
   tqq_pass_sum_stack_1->SetBinContent(15,145.572);
   tqq_pass_sum_stack_1->SetBinContent(16,105.5669);
   tqq_pass_sum_stack_1->SetBinContent(17,73.59518);
   tqq_pass_sum_stack_1->SetBinContent(18,58.41206);
   tqq_pass_sum_stack_1->SetBinContent(19,24.68101);
   tqq_pass_sum_stack_1->SetBinContent(20,27.40551);
   tqq_pass_sum_stack_1->SetBinContent(21,12.37276);
   tqq_pass_sum_stack_1->SetBinContent(22,2.413104);
   tqq_pass_sum_stack_1->SetBinContent(23,1.499146);
   tqq_pass_sum_stack_1->SetBinError(2,11.21759);
   tqq_pass_sum_stack_1->SetBinError(3,17.23844);
   tqq_pass_sum_stack_1->SetBinError(4,20.70649);
   tqq_pass_sum_stack_1->SetBinError(5,29.00123);
   tqq_pass_sum_stack_1->SetBinError(6,45.48264);
   tqq_pass_sum_stack_1->SetBinError(7,50.70771);
   tqq_pass_sum_stack_1->SetBinError(8,48.86232);
   tqq_pass_sum_stack_1->SetBinError(9,43.73856);
   tqq_pass_sum_stack_1->SetBinError(10,48.6634);
   tqq_pass_sum_stack_1->SetBinError(14,37.63519);
   tqq_pass_sum_stack_1->SetBinError(15,26.33992);
   tqq_pass_sum_stack_1->SetBinError(16,17.81114);
   tqq_pass_sum_stack_1->SetBinError(17,12.94219);
   tqq_pass_sum_stack_1->SetBinError(18,10.26854);
   tqq_pass_sum_stack_1->SetBinError(19,5.210935);
   tqq_pass_sum_stack_1->SetBinError(20,5.142347);
   tqq_pass_sum_stack_1->SetBinError(21,3.052418);
   tqq_pass_sum_stack_1->SetBinError(22,0.8282752);
   tqq_pass_sum_stack_1->SetBinError(23,0.4152818);
   tqq_pass_sum_stack_1->SetEntries(138);

   ci = TColor::GetColor("#660066");
   tqq_pass_sum_stack_1->SetLineColor(ci);
   tqq_pass_sum_stack_1->SetLineStyle(4);
   tqq_pass_sum_stack_1->SetLineWidth(2);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitle("x");
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_pass_sum_stack_1,"");
   
   TH1F *wqq_pass_sum_stack_2 = new TH1F("wqq_pass_sum_stack_2","wqq in cat1_2016_pass_cat1",23,40,201);
   wqq_pass_sum_stack_2->SetBinContent(1,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(2,6.149271);
   wqq_pass_sum_stack_2->SetBinContent(3,19.49597);
   wqq_pass_sum_stack_2->SetBinContent(4,80.7832);
   wqq_pass_sum_stack_2->SetBinContent(5,174.8702);
   wqq_pass_sum_stack_2->SetBinContent(6,452.1688);
   wqq_pass_sum_stack_2->SetBinContent(7,585.2742);
   wqq_pass_sum_stack_2->SetBinContent(8,357.1255);
   wqq_pass_sum_stack_2->SetBinContent(9,145.7042);
   wqq_pass_sum_stack_2->SetBinContent(10,34.48975);
   wqq_pass_sum_stack_2->SetBinContent(11,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(12,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(13,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(14,0.4058209);
   wqq_pass_sum_stack_2->SetBinContent(15,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(16,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(17,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(18,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(19,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(20,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(21,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(22,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinContent(23,1.299527e-05);
   wqq_pass_sum_stack_2->SetBinError(1,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(2,0.9685185);
   wqq_pass_sum_stack_2->SetBinError(3,4.150417);
   wqq_pass_sum_stack_2->SetBinError(4,10.59984);
   wqq_pass_sum_stack_2->SetBinError(5,12.60242);
   wqq_pass_sum_stack_2->SetBinError(6,33.2813);
   wqq_pass_sum_stack_2->SetBinError(7,45.54774);
   wqq_pass_sum_stack_2->SetBinError(8,36.47128);
   wqq_pass_sum_stack_2->SetBinError(9,24.35031);
   wqq_pass_sum_stack_2->SetBinError(10,4.874452);
   wqq_pass_sum_stack_2->SetBinError(11,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(12,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(13,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(14,0.381853);
   wqq_pass_sum_stack_2->SetBinError(15,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(16,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(17,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(18,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(19,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(20,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(21,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(22,1.012692e-06);
   wqq_pass_sum_stack_2->SetBinError(23,1.012692e-06);
   wqq_pass_sum_stack_2->SetEntries(138);

   ci = TColor::GetColor("#009900");
   wqq_pass_sum_stack_2->SetLineColor(ci);
   wqq_pass_sum_stack_2->SetLineStyle(2);
   wqq_pass_sum_stack_2->SetLineWidth(2);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitle("x");
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_pass_sum_stack_2,"");
   
   TH1F *zqq_pass_sum_stack_3 = new TH1F("zqq_pass_sum_stack_3","zqq in cat1_2016_pass_cat1",23,40,201);
   zqq_pass_sum_stack_3->SetBinContent(1,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(2,3.165839);
   zqq_pass_sum_stack_3->SetBinContent(3,7.464977);
   zqq_pass_sum_stack_3->SetBinContent(4,24.6937);
   zqq_pass_sum_stack_3->SetBinContent(5,68.63576);
   zqq_pass_sum_stack_3->SetBinContent(6,179.9936);
   zqq_pass_sum_stack_3->SetBinContent(7,395.6569);
   zqq_pass_sum_stack_3->SetBinContent(8,604.4142);
   zqq_pass_sum_stack_3->SetBinContent(9,480.1507);
   zqq_pass_sum_stack_3->SetBinContent(10,262.8834);
   zqq_pass_sum_stack_3->SetBinContent(11,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(12,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(13,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(14,3.342699);
   zqq_pass_sum_stack_3->SetBinContent(15,1.604858);
   zqq_pass_sum_stack_3->SetBinContent(16,0.5281518);
   zqq_pass_sum_stack_3->SetBinContent(17,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(18,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(19,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(20,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(21,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(22,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinContent(23,1.422774e-05);
   zqq_pass_sum_stack_3->SetBinError(1,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(2,1.708231);
   zqq_pass_sum_stack_3->SetBinError(3,1.862559);
   zqq_pass_sum_stack_3->SetBinError(4,4.132772);
   zqq_pass_sum_stack_3->SetBinError(5,12.58046);
   zqq_pass_sum_stack_3->SetBinError(6,23.40768);
   zqq_pass_sum_stack_3->SetBinError(7,50.57615);
   zqq_pass_sum_stack_3->SetBinError(8,69.37418);
   zqq_pass_sum_stack_3->SetBinError(9,51.81633);
   zqq_pass_sum_stack_3->SetBinError(10,33.41744);
   zqq_pass_sum_stack_3->SetBinError(11,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(12,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(13,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(14,0.9613287);
   zqq_pass_sum_stack_3->SetBinError(15,0.7364357);
   zqq_pass_sum_stack_3->SetBinError(16,0.5135155);
   zqq_pass_sum_stack_3->SetBinError(17,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(18,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(19,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(20,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(21,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(22,1.580817e-06);
   zqq_pass_sum_stack_3->SetBinError(23,1.580817e-06);
   zqq_pass_sum_stack_3->SetEntries(138);

   ci = TColor::GetColor("#cc0000");
   zqq_pass_sum_stack_3->SetLineColor(ci);
   zqq_pass_sum_stack_3->SetLineStyle(3);
   zqq_pass_sum_stack_3->SetLineWidth(2);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitle("x");
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_pass_sum_stack_3,"");
   
   TH1F *hsigpass_allcats_2016_fit_b_stack_4 = new TH1F("hsigpass_allcats_2016_fit_b_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_allcats_2016_fit_b_stack_4->SetEntries(667);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_allcats_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_pass_sum_copy_fx3037[23] = {
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
   Double_t data_pass_sum_copy_fy3037[23] = {
   0,
   5134,
   5311,
   5198,
   5385,
   5667,
   5824,
   5504,
   4922,
   4442,
   0,
   0,
   0,
   2903,
   2438,
   2209,
   1760,
   1450,
   839,
   705,
   385,
   321,
   316};
   Double_t data_pass_sum_copy_felx3037[23] = {
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
   Double_t data_pass_sum_copy_fely3037[23] = {
   1.841055,
   72.65816,
   73.88278,
   73.10336,
   74.38871,
   76.28556,
   77.32118,
   75.19507,
   71.16326,
   67.6548,
   1.841055,
   1.841055,
   1.841055,
   54.88687,
   50.38395,
   48.00813,
   42.96123,
   39.08847,
   29.97766,
   27.56499,
   20.63886,
   18.9355,
   18.79556};
   Double_t data_pass_sum_copy_fehx3037[23] = {
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
   Double_t data_pass_sum_copy_fehy3037[23] = {
   0,
   71.65115,
   72.87589,
   72.09639,
   73.38187,
   75.27888,
   76.31459,
   74.1883,
   70.1561,
   66.64726,
   0,
   0,
   0,
   53.87755,
   49.37379,
   46.99746,
   41.94927,
   38.0753,
   28.96035,
   26.54611,
   19.61331,
   17.90752,
   17.76736};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_pass_sum_copy_fx3037,data_pass_sum_copy_fy3037,data_pass_sum_copy_felx3037,data_pass_sum_copy_fehx3037,data_pass_sum_copy_fely3037,data_pass_sum_copy_fehy3037);
   grae->SetName("data_pass_sum_copy");
   grae->SetTitle("tqq in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_pass_sum_copy3037 = new TH1F("Graph_data_pass_sum_copy3037","tqq in cat1_2016_pass_cat1",100,28.1,212.9);
   Graph_data_pass_sum_copy3037->SetMinimum(0);
   Graph_data_pass_sum_copy3037->SetMaximum(6490.53);
   Graph_data_pass_sum_copy3037->SetDirectory(0);
   Graph_data_pass_sum_copy3037->SetStats(0);
   Graph_data_pass_sum_copy3037->SetLineStyle(0);
   Graph_data_pass_sum_copy3037->SetMarkerStyle(20);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_pass_sum_copy3037);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.5,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_pass_sum_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_pass_sum_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_pass_sum_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd_pass_sum","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("htotpass_allcats_2016_fit_b","Total background","lf");

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
   entry=leg->AddEntry("data_pass_sum","Data","pe");
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
      tex = new TLatex(0.25,0.77,"450 < p_{T} < 1200 GeV");
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
   
   TH1F *htotpass_allcats_2016_fit_b_copy__149 = new TH1F("htotpass_allcats_2016_fit_b_copy__149","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(1,2.722301e-05);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(2,5034.759);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(3,5316.416);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(4,5360.424);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(5,5403.166);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(6,5641.398);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(7,5774.563);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(8,5538.972);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(9,4921.055);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(10,4395.424);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(11,2.722301e-05);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(12,2.722301e-05);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(13,2.722301e-05);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(14,2878.982);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(15,2482.2);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(16,2119.737);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(17,1779.144);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(18,1468.79);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(19,839.9352);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(20,711.7738);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(21,416.8859);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(22,344.5252);
   htotpass_allcats_2016_fit_b_copy__149->SetBinContent(23,283.708);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(1,1.877372e-06);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(2,40.01613);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(3,37.92193);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(4,47.9222);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(5,61.41843);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(6,89.70786);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(7,113.4336);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(8,117.0231);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(9,96.27895);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(10,80.18448);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(11,1.877372e-06);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(12,1.877372e-06);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(13,1.877372e-06);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(14,48.54394);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(15,37.2357);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(16,28.43449);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(17,22.88485);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(18,19.04561);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(19,10.54955);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(20,9.348571);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(21,6.638678);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(22,5.568265);
   htotpass_allcats_2016_fit_b_copy__149->SetBinError(23,5.425024);
   htotpass_allcats_2016_fit_b_copy__149->SetMaximum(8661.845);
   htotpass_allcats_2016_fit_b_copy__149->SetEntries(552);
   htotpass_allcats_2016_fit_b_copy__149->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b_copy__149->SetFillColor(ci);
   htotpass_allcats_2016_fit_b_copy__149->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b_copy__149->SetLineColor(ci);
   htotpass_allcats_2016_fit_b_copy__149->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b_copy__149->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b_copy__149->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b_copy__149->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__149->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b_copy__149->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__149->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b_copy__149->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b_copy__149->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b_copy__149->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__149->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__149->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b_copy__149->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b_copy__149->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__149->Draw("sameaxis");
   p12pass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_allcats_2016_fit_b
   TPad *p22pass_allcats_2016_fit_b = new TPad("p22pass_allcats_2016_fit_b", "p22pass_allcats_2016_fit_b",0,0,1,0.3);
   p22pass_allcats_2016_fit_b->Draw();
   p22pass_allcats_2016_fit_b->cd();
   p22pass_allcats_2016_fit_b->Range(13.7027,-16.53325,221.8108,21.91092);
   p22pass_allcats_2016_fit_b->SetFillColor(0);
   p22pass_allcats_2016_fit_b->SetBorderMode(0);
   p22pass_allcats_2016_fit_b->SetBorderSize(2);
   p22pass_allcats_2016_fit_b->SetTickx(1);
   p22pass_allcats_2016_fit_b->SetTicky(1);
   p22pass_allcats_2016_fit_b->SetLeftMargin(0.16);
   p22pass_allcats_2016_fit_b->SetTopMargin(0.05);
   p22pass_allcats_2016_fit_b->SetBottomMargin(0.3);
   p22pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   p22pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b__150 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b__150","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b__150->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_b__150->SetMaximum(19.98871);
   iOneWithErrorspass_allcats_2016_fit_b__150->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__150->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__150->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__150->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__150->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__150->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__150->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__150->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__150->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_38 = new TH1F("hstack_stack_38","hstack",23,40,201);
   hstack_stack_38->SetMinimum(-61.22715);
   hstack_stack_38->SetMaximum(81.39727);
   hstack_stack_38->SetDirectory(0);
   hstack_stack_38->SetStats(0);
   hstack_stack_38->SetLineStyle(0);
   hstack_stack_38->SetMarkerStyle(20);
   hstack_stack_38->GetXaxis()->SetLabelFont(42);
   hstack_stack_38->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_38->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_38->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_38->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_38->GetXaxis()->SetTitleFont(42);
   hstack_stack_38->GetYaxis()->SetLabelFont(42);
   hstack_stack_38->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_38->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_38->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_38->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_38->GetYaxis()->SetTitleFont(42);
   hstack_stack_38->GetZaxis()->SetLabelFont(42);
   hstack_stack_38->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_38->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_38->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_38->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_38);
   
   
   TH1F *sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(2,0.08582237);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(3,0.267523);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(4,1.120489);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(5,2.383016);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(6,6.006582);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(7,7.669231);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(8,4.813772);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(9,2.076858);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(10,0.5174969);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(14,0.007532281);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(15,2.632018e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(16,2.7651e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(17,3.097853e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(18,3.413045e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(19,4.487263e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(20,4.895357e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(21,6.625738e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(22,7.256878e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(23,7.314125e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(1,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(2,0.9685185);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(3,4.150417);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(4,10.59984);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(5,12.60242);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(6,33.2813);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(7,45.54774);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(8,36.47128);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(9,24.35031);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(10,4.874452);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(11,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(12,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(13,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(14,0.381853);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(15,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(16,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(17,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(18,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(19,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(20,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(21,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(22,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinError(23,1.012692e-06);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(2,0.04418407);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(3,0.1024341);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(4,0.3425094);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(5,0.9353231);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(6,2.391023);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(7,5.184551);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(8,8.147029);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(9,6.844034);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(10,3.944399);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(14,0.06204251);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(15,0.03250426);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(16,0.01123788);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(17,3.391654e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(18,3.736739e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(19,4.912836e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(20,5.359634e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(21,7.254125e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(22,7.945122e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(23,8.007798e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(1,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(2,1.708231);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(3,1.862559);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(4,4.132772);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(5,12.58046);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(6,23.40768);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(7,50.57615);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(8,69.37418);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(9,51.81633);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(10,33.41744);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(11,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(12,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(13,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(14,0.9613287);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(15,0.7364357);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(16,0.5135155);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(17,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(18,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(19,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(20,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(21,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(22,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinError(23,1.580817e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_allcats_2016_fit_b__151 = new TH1F("iOneWithErrorsLinepass_allcats_2016_fit_b__151","",23,40,201);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetFillColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetLineColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetMarkerColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->SetMarkerSize(0);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__151->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fx3038[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fy3038[23] = {
   0,
   1.494067,
   0.2916161,
   -0.7898768,
   3.029227,
   8.622395,
   13.32581,
   12.32219,
   8.80792,
   5.083878,
   0,
   0,
   0,
   0.5058879,
   -0.862719,
   1.870329,
   -0.4563617,
   -0.4935065,
   -0.03229176,
   -0.2551712,
   -1.625725,
   -1.313707,
   1.718068};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_felx3038[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fely3038[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fehx3038[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fehy3038[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_allcats_2016_fit_b_fx3038,Graph_from_iRatiopass_allcats_2016_fit_b_fy3038,Graph_from_iRatiopass_allcats_2016_fit_b_felx3038,Graph_from_iRatiopass_allcats_2016_fit_b_fehx3038,Graph_from_iRatiopass_allcats_2016_fit_b_fely3038,Graph_from_iRatiopass_allcats_2016_fit_b_fehy3038);
   grae->SetName("Graph_from_iRatiopass_allcats_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038 = new TH1F("Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->SetMinimum(-4.320879);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->SetMaximum(16.02096);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->SetDirectory(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->SetStats(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_allcats_2016_fit_b3038);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b_copy__152 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b_copy__152","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetMaximum(19.98871);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetEntries(1104);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__152->Draw("sameaxis");
   p22pass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
   cpass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
   cpass_allcats_2016_fit_b->SetSelected(cpass_allcats_2016_fit_b);
}
