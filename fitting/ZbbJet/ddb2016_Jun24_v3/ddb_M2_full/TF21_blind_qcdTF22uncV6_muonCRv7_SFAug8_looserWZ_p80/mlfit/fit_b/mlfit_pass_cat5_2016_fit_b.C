void mlfit_pass_cat5_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_b/cpass_cat5_2016_fit_b
//=========  (Thu Sep 26 13:57:22 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat5_2016_fit_b = new TCanvas("cpass_cat5_2016_fit_b", "cpass_cat5_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat5_2016_fit_b->SetHighLightColor(2);
   cpass_cat5_2016_fit_b->Range(0,0,1,1);
   cpass_cat5_2016_fit_b->SetFillColor(0);
   cpass_cat5_2016_fit_b->SetBorderMode(0);
   cpass_cat5_2016_fit_b->SetBorderSize(2);
   cpass_cat5_2016_fit_b->SetTickx(1);
   cpass_cat5_2016_fit_b->SetTicky(1);
   cpass_cat5_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat5_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat5_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat5_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat5_2016_fit_b
   TPad *p12pass_cat5_2016_fit_b = new TPad("p12pass_cat5_2016_fit_b", "p12pass_cat5_2016_fit_b",0,0.3,1,1);
   p12pass_cat5_2016_fit_b->Draw();
   p12pass_cat5_2016_fit_b->cd();
   p12pass_cat5_2016_fit_b->Range(13.7027,-11.91834,221.8108,583.9987);
   p12pass_cat5_2016_fit_b->SetFillColor(0);
   p12pass_cat5_2016_fit_b->SetBorderMode(0);
   p12pass_cat5_2016_fit_b->SetBorderSize(2);
   p12pass_cat5_2016_fit_b->SetTickx(1);
   p12pass_cat5_2016_fit_b->SetTicky(1);
   p12pass_cat5_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat5_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat5_2016_fit_b__105 = new TH1F("htotpass_cat5_2016_fit_b__105","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b__105->SetBinContent(1,2.554205e-06);
   htotpass_cat5_2016_fit_b__105->SetBinContent(2,289.4613);
   htotpass_cat5_2016_fit_b__105->SetBinContent(3,301.8183);
   htotpass_cat5_2016_fit_b__105->SetBinContent(4,310.0052);
   htotpass_cat5_2016_fit_b__105->SetBinContent(5,308.4862);
   htotpass_cat5_2016_fit_b__105->SetBinContent(6,321.1437);
   htotpass_cat5_2016_fit_b__105->SetBinContent(7,349.6047);
   htotpass_cat5_2016_fit_b__105->SetBinContent(8,330.3624);
   htotpass_cat5_2016_fit_b__105->SetBinContent(9,272.7416);
   htotpass_cat5_2016_fit_b__105->SetBinContent(10,246.6372);
   htotpass_cat5_2016_fit_b__105->SetBinContent(11,2.554205e-06);
   htotpass_cat5_2016_fit_b__105->SetBinContent(12,2.554205e-06);
   htotpass_cat5_2016_fit_b__105->SetBinContent(13,2.554205e-06);
   htotpass_cat5_2016_fit_b__105->SetBinContent(14,185.4236);
   htotpass_cat5_2016_fit_b__105->SetBinContent(15,171.8627);
   htotpass_cat5_2016_fit_b__105->SetBinContent(16,159.7494);
   htotpass_cat5_2016_fit_b__105->SetBinContent(17,144.5744);
   htotpass_cat5_2016_fit_b__105->SetBinContent(18,132.3573);
   htotpass_cat5_2016_fit_b__105->SetBinContent(19,122.0389);
   htotpass_cat5_2016_fit_b__105->SetBinContent(20,112.6542);
   htotpass_cat5_2016_fit_b__105->SetBinContent(21,101.7711);
   htotpass_cat5_2016_fit_b__105->SetBinContent(22,87.4678);
   htotpass_cat5_2016_fit_b__105->SetBinContent(23,74.60974);
   htotpass_cat5_2016_fit_b__105->SetBinError(1,3.901807e-07);
   htotpass_cat5_2016_fit_b__105->SetBinError(2,9.691565);
   htotpass_cat5_2016_fit_b__105->SetBinError(3,6.945323);
   htotpass_cat5_2016_fit_b__105->SetBinError(4,8.218429);
   htotpass_cat5_2016_fit_b__105->SetBinError(5,10.67967);
   htotpass_cat5_2016_fit_b__105->SetBinError(6,16.78346);
   htotpass_cat5_2016_fit_b__105->SetBinError(7,22.57388);
   htotpass_cat5_2016_fit_b__105->SetBinError(8,21.72299);
   htotpass_cat5_2016_fit_b__105->SetBinError(9,15.18233);
   htotpass_cat5_2016_fit_b__105->SetBinError(10,16.1689);
   htotpass_cat5_2016_fit_b__105->SetBinError(11,3.901807e-07);
   htotpass_cat5_2016_fit_b__105->SetBinError(12,3.901807e-07);
   htotpass_cat5_2016_fit_b__105->SetBinError(13,3.901807e-07);
   htotpass_cat5_2016_fit_b__105->SetBinError(14,11.52181);
   htotpass_cat5_2016_fit_b__105->SetBinError(15,10.33292);
   htotpass_cat5_2016_fit_b__105->SetBinError(16,7.312266);
   htotpass_cat5_2016_fit_b__105->SetBinError(17,5.797065);
   htotpass_cat5_2016_fit_b__105->SetBinError(18,4.185811);
   htotpass_cat5_2016_fit_b__105->SetBinError(19,3.830918);
   htotpass_cat5_2016_fit_b__105->SetBinError(20,3.814768);
   htotpass_cat5_2016_fit_b__105->SetBinError(21,3.457601);
   htotpass_cat5_2016_fit_b__105->SetBinError(22,2.609084);
   htotpass_cat5_2016_fit_b__105->SetBinError(23,2.532703);
   htotpass_cat5_2016_fit_b__105->SetMinimum(0);
   htotpass_cat5_2016_fit_b__105->SetMaximum(524.407);
   htotpass_cat5_2016_fit_b__105->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__105->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__105->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__105->SetLineColor(ci);
   htotpass_cat5_2016_fit_b__105->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b__105->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b__105->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b__105->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__105->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b__105->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__105->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b__105->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b__105->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b__105->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__105->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__105->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__105->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__105->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__105->Draw("");
   
   TH1F *htot_linepass_cat5_2016_fit_b__106 = new TH1F("htot_linepass_cat5_2016_fit_b__106","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(1,2.554205e-06);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(2,289.4613);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(3,301.8183);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(4,310.0052);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(5,308.4862);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(6,321.1437);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(7,349.6047);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(8,330.3624);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(9,272.7416);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(10,246.6372);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(11,2.554205e-06);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(12,2.554205e-06);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(13,2.554205e-06);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(14,185.4236);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(15,171.8627);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(16,159.7494);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(17,144.5744);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(18,132.3573);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(19,122.0389);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(20,112.6542);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(21,101.7711);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(22,87.4678);
   htot_linepass_cat5_2016_fit_b__106->SetBinContent(23,74.60974);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(1,3.901807e-07);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(2,9.691565);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(3,6.945323);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(4,8.218429);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(5,10.67967);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(6,16.78346);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(7,22.57388);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(8,21.72299);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(9,15.18233);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(10,16.1689);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(11,3.901807e-07);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(12,3.901807e-07);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(13,3.901807e-07);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(14,11.52181);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(15,10.33292);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(16,7.312266);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(17,5.797065);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(18,4.185811);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(19,3.830918);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(20,3.814768);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(21,3.457601);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(22,2.609084);
   htot_linepass_cat5_2016_fit_b__106->SetBinError(23,2.532703);
   htot_linepass_cat5_2016_fit_b__106->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_b__106->SetFillColor(ci);
   htot_linepass_cat5_2016_fit_b__106->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_b__106->SetLineColor(ci);
   htot_linepass_cat5_2016_fit_b__106->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_fit_b__106->SetMarkerColor(ci);
   htot_linepass_cat5_2016_fit_b__106->SetMarkerSize(0);
   htot_linepass_cat5_2016_fit_b__106->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_fit_b__106->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_fit_b__106->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__106->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_b__106->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_b__106->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__106->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_fit_b__106->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__106->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_fit_b__106->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_fit_b__106->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_fit_b__106->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__106->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__106->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_b__106->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_b__106->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__106->Draw("histsame");
   
   TH1F *qcd__107 = new TH1F("qcd__107","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__107->SetBinContent(2,288.2516);
   qcd__107->SetBinContent(3,294.8228);
   qcd__107->SetBinContent(4,288.6343);
   qcd__107->SetBinContent(5,270.5131);
   qcd__107->SetBinContent(6,249.6074);
   qcd__107->SetBinContent(7,232.9027);
   qcd__107->SetBinContent(8,223.978);
   qcd__107->SetBinContent(9,209.1427);
   qcd__107->SetBinContent(10,198.0495);
   qcd__107->SetBinContent(14,163.3925);
   qcd__107->SetBinContent(15,152.0535);
   qcd__107->SetBinContent(16,147.6443);
   qcd__107->SetBinContent(17,135.4204);
   qcd__107->SetBinContent(18,127.2174);
   qcd__107->SetBinContent(19,117.7594);
   qcd__107->SetBinContent(20,107.0739);
   qcd__107->SetBinContent(21,97.02736);
   qcd__107->SetBinContent(22,87.4678);
   qcd__107->SetBinContent(23,74.60974);
   qcd__107->SetBinError(2,9.6781);
   qcd__107->SetBinError(3,6.631486);
   qcd__107->SetBinError(4,6.956296);
   qcd__107->SetBinError(5,8.44083);
   qcd__107->SetBinError(6,10.57033);
   qcd__107->SetBinError(7,11.36062);
   qcd__107->SetBinError(8,11.04304);
   qcd__107->SetBinError(9,9.940543);
   qcd__107->SetBinError(10,8.579045);
   qcd__107->SetBinError(14,5.634909);
   qcd__107->SetBinError(15,5.011393);
   qcd__107->SetBinError(16,4.793438);
   qcd__107->SetBinError(17,4.02107);
   qcd__107->SetBinError(18,3.467524);
   qcd__107->SetBinError(19,3.296214);
   qcd__107->SetBinError(20,2.841243);
   qcd__107->SetBinError(21,2.696718);
   qcd__107->SetBinError(22,2.609084);
   qcd__107->SetBinError(23,2.532703);
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
   
   TH1F *htotpass_cat5_2016_fit_b__108 = new TH1F("htotpass_cat5_2016_fit_b__108","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b__108->SetBinContent(1,2.554205e-06);
   htotpass_cat5_2016_fit_b__108->SetBinContent(2,289.4613);
   htotpass_cat5_2016_fit_b__108->SetBinContent(3,301.8183);
   htotpass_cat5_2016_fit_b__108->SetBinContent(4,310.0052);
   htotpass_cat5_2016_fit_b__108->SetBinContent(5,308.4862);
   htotpass_cat5_2016_fit_b__108->SetBinContent(6,321.1437);
   htotpass_cat5_2016_fit_b__108->SetBinContent(7,349.6047);
   htotpass_cat5_2016_fit_b__108->SetBinContent(8,330.3624);
   htotpass_cat5_2016_fit_b__108->SetBinContent(9,272.7416);
   htotpass_cat5_2016_fit_b__108->SetBinContent(10,246.6372);
   htotpass_cat5_2016_fit_b__108->SetBinContent(11,2.554205e-06);
   htotpass_cat5_2016_fit_b__108->SetBinContent(12,2.554205e-06);
   htotpass_cat5_2016_fit_b__108->SetBinContent(13,2.554205e-06);
   htotpass_cat5_2016_fit_b__108->SetBinContent(14,185.4236);
   htotpass_cat5_2016_fit_b__108->SetBinContent(15,171.8627);
   htotpass_cat5_2016_fit_b__108->SetBinContent(16,159.7494);
   htotpass_cat5_2016_fit_b__108->SetBinContent(17,144.5744);
   htotpass_cat5_2016_fit_b__108->SetBinContent(18,132.3573);
   htotpass_cat5_2016_fit_b__108->SetBinContent(19,122.0389);
   htotpass_cat5_2016_fit_b__108->SetBinContent(20,112.6542);
   htotpass_cat5_2016_fit_b__108->SetBinContent(21,101.7711);
   htotpass_cat5_2016_fit_b__108->SetBinContent(22,87.4678);
   htotpass_cat5_2016_fit_b__108->SetBinContent(23,74.60974);
   htotpass_cat5_2016_fit_b__108->SetBinError(1,3.901807e-07);
   htotpass_cat5_2016_fit_b__108->SetBinError(2,9.691565);
   htotpass_cat5_2016_fit_b__108->SetBinError(3,6.945323);
   htotpass_cat5_2016_fit_b__108->SetBinError(4,8.218429);
   htotpass_cat5_2016_fit_b__108->SetBinError(5,10.67967);
   htotpass_cat5_2016_fit_b__108->SetBinError(6,16.78346);
   htotpass_cat5_2016_fit_b__108->SetBinError(7,22.57388);
   htotpass_cat5_2016_fit_b__108->SetBinError(8,21.72299);
   htotpass_cat5_2016_fit_b__108->SetBinError(9,15.18233);
   htotpass_cat5_2016_fit_b__108->SetBinError(10,16.1689);
   htotpass_cat5_2016_fit_b__108->SetBinError(11,3.901807e-07);
   htotpass_cat5_2016_fit_b__108->SetBinError(12,3.901807e-07);
   htotpass_cat5_2016_fit_b__108->SetBinError(13,3.901807e-07);
   htotpass_cat5_2016_fit_b__108->SetBinError(14,11.52181);
   htotpass_cat5_2016_fit_b__108->SetBinError(15,10.33292);
   htotpass_cat5_2016_fit_b__108->SetBinError(16,7.312266);
   htotpass_cat5_2016_fit_b__108->SetBinError(17,5.797065);
   htotpass_cat5_2016_fit_b__108->SetBinError(18,4.185811);
   htotpass_cat5_2016_fit_b__108->SetBinError(19,3.830918);
   htotpass_cat5_2016_fit_b__108->SetBinError(20,3.814768);
   htotpass_cat5_2016_fit_b__108->SetBinError(21,3.457601);
   htotpass_cat5_2016_fit_b__108->SetBinError(22,2.609084);
   htotpass_cat5_2016_fit_b__108->SetBinError(23,2.532703);
   htotpass_cat5_2016_fit_b__108->SetMinimum(0);
   htotpass_cat5_2016_fit_b__108->SetMaximum(524.407);
   htotpass_cat5_2016_fit_b__108->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__108->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__108->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__108->SetLineColor(ci);
   htotpass_cat5_2016_fit_b__108->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b__108->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b__108->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b__108->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__108->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b__108->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__108->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b__108->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b__108->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b__108->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__108->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__108->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__108->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__108->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__108->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis27[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_27 = new TH1F("hstackMC_stack_27","hstackMC",23, xAxis27);
   hstackMC_stack_27->SetMinimum(0);
   hstackMC_stack_27->SetMaximum(122.537);
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
   tqq_stack_1->SetBinContent(2,0.8257949);
   tqq_stack_1->SetBinContent(3,2.958347);
   tqq_stack_1->SetBinContent(4,6.692247);
   tqq_stack_1->SetBinContent(5,11.05314);
   tqq_stack_1->SetBinContent(6,10.87081);
   tqq_stack_1->SetBinContent(7,17.91858);
   tqq_stack_1->SetBinContent(8,20.22231);
   tqq_stack_1->SetBinContent(9,13.13942);
   tqq_stack_1->SetBinContent(10,25.7915);
   tqq_stack_1->SetBinContent(14,22.03115);
   tqq_stack_1->SetBinContent(15,19.80927);
   tqq_stack_1->SetBinContent(16,12.10517);
   tqq_stack_1->SetBinContent(17,9.154017);
   tqq_stack_1->SetBinContent(18,5.139855);
   tqq_stack_1->SetBinContent(19,4.279474);
   tqq_stack_1->SetBinContent(20,5.580295);
   tqq_stack_1->SetBinContent(21,4.743788);
   tqq_stack_1->SetBinError(2,0.3767002);
   tqq_stack_1->SetBinError(3,1.3495);
   tqq_stack_1->SetBinError(4,3.052781);
   tqq_stack_1->SetBinError(5,5.042074);
   tqq_stack_1->SetBinError(6,4.958901);
   tqq_stack_1->SetBinError(7,8.173859);
   tqq_stack_1->SetBinError(8,9.224743);
   tqq_stack_1->SetBinError(9,5.993766);
   tqq_stack_1->SetBinError(10,11.76522);
   tqq_stack_1->SetBinError(14,10.04988);
   tqq_stack_1->SetBinError(15,9.036327);
   tqq_stack_1->SetBinError(16,5.521973);
   tqq_stack_1->SetBinError(17,4.175758);
   tqq_stack_1->SetBinError(18,2.34463);
   tqq_stack_1->SetBinError(19,1.952153);
   tqq_stack_1->SetBinError(20,2.545544);
   tqq_stack_1->SetBinError(21,2.163958);
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
   wqq_stack_2->SetBinContent(1,1.321756e-06);
   wqq_stack_2->SetBinContent(2,0.01926927);
   wqq_stack_2->SetBinContent(3,3.098872);
   wqq_stack_2->SetBinContent(4,11.18758);
   wqq_stack_2->SetBinContent(5,21.217);
   wqq_stack_2->SetBinContent(6,42.37159);
   wqq_stack_2->SetBinContent(7,63.52285);
   wqq_stack_2->SetBinContent(8,34.19845);
   wqq_stack_2->SetBinContent(9,10.54748);
   wqq_stack_2->SetBinContent(10,2.65916);
   wqq_stack_2->SetBinContent(11,1.321756e-06);
   wqq_stack_2->SetBinContent(12,1.321756e-06);
   wqq_stack_2->SetBinContent(13,1.321756e-06);
   wqq_stack_2->SetBinContent(14,1.321756e-06);
   wqq_stack_2->SetBinContent(15,1.321756e-06);
   wqq_stack_2->SetBinContent(16,1.321756e-06);
   wqq_stack_2->SetBinContent(17,1.321756e-06);
   wqq_stack_2->SetBinContent(18,1.321756e-06);
   wqq_stack_2->SetBinContent(19,1.321756e-06);
   wqq_stack_2->SetBinContent(20,1.321756e-06);
   wqq_stack_2->SetBinContent(21,1.321756e-06);
   wqq_stack_2->SetBinContent(22,1.321756e-06);
   wqq_stack_2->SetBinContent(23,1.321756e-06);
   wqq_stack_2->SetBinError(1,2.550012e-07);
   wqq_stack_2->SetBinError(2,0.00922666);
   wqq_stack_2->SetBinError(3,1.466533);
   wqq_stack_2->SetBinError(4,2.851165);
   wqq_stack_2->SetBinError(5,3.889983);
   wqq_stack_2->SetBinError(6,9.318122);
   wqq_stack_2->SetBinError(7,13.99999);
   wqq_stack_2->SetBinError(8,10.85483);
   wqq_stack_2->SetBinError(9,3.91973);
   wqq_stack_2->SetBinError(10,0.6740142);
   wqq_stack_2->SetBinError(11,2.550012e-07);
   wqq_stack_2->SetBinError(12,2.550012e-07);
   wqq_stack_2->SetBinError(13,2.550012e-07);
   wqq_stack_2->SetBinError(14,2.550012e-07);
   wqq_stack_2->SetBinError(15,2.550012e-07);
   wqq_stack_2->SetBinError(16,2.550012e-07);
   wqq_stack_2->SetBinError(17,2.550012e-07);
   wqq_stack_2->SetBinError(18,2.550012e-07);
   wqq_stack_2->SetBinError(19,2.550012e-07);
   wqq_stack_2->SetBinError(20,2.550012e-07);
   wqq_stack_2->SetBinError(21,2.550012e-07);
   wqq_stack_2->SetBinError(22,2.550012e-07);
   wqq_stack_2->SetBinError(23,2.550012e-07);
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
   zqq_stack_3->SetBinContent(1,1.23245e-06);
   zqq_stack_3->SetBinContent(2,0.3646671);
   zqq_stack_3->SetBinContent(3,0.9382529);
   zqq_stack_3->SetBinContent(4,3.491041);
   zqq_stack_3->SetBinContent(5,5.703011);
   zqq_stack_3->SetBinContent(6,18.29399);
   zqq_stack_3->SetBinContent(7,35.2605);
   zqq_stack_3->SetBinContent(8,51.96366);
   zqq_stack_3->SetBinContent(9,39.91203);
   zqq_stack_3->SetBinContent(10,20.13708);
   zqq_stack_3->SetBinContent(11,1.23245e-06);
   zqq_stack_3->SetBinContent(12,1.23245e-06);
   zqq_stack_3->SetBinContent(13,1.23245e-06);
   zqq_stack_3->SetBinContent(14,1.23245e-06);
   zqq_stack_3->SetBinContent(15,1.23245e-06);
   zqq_stack_3->SetBinContent(16,1.23245e-06);
   zqq_stack_3->SetBinContent(17,1.23245e-06);
   zqq_stack_3->SetBinContent(18,1.23245e-06);
   zqq_stack_3->SetBinContent(19,1.23245e-06);
   zqq_stack_3->SetBinContent(20,1.23245e-06);
   zqq_stack_3->SetBinContent(21,1.23245e-06);
   zqq_stack_3->SetBinContent(22,1.23245e-06);
   zqq_stack_3->SetBinContent(23,1.23245e-06);
   zqq_stack_3->SetBinError(1,2.953224e-07);
   zqq_stack_3->SetBinError(2,0.344706);
   zqq_stack_3->SetBinError(3,0.5376235);
   zqq_stack_3->SetBinError(4,1.305339);
   zqq_stack_3->SetBinError(5,1.501054);
   zqq_stack_3->SetBinError(6,7.650786);
   zqq_stack_3->SetBinError(7,10.84918);
   zqq_stack_3->SetBinError(8,12.12502);
   zqq_stack_3->SetBinError(9,8.966562);
   zqq_stack_3->SetBinError(10,6.997036);
   zqq_stack_3->SetBinError(11,2.953224e-07);
   zqq_stack_3->SetBinError(12,2.953224e-07);
   zqq_stack_3->SetBinError(13,2.953224e-07);
   zqq_stack_3->SetBinError(14,2.953224e-07);
   zqq_stack_3->SetBinError(15,2.953224e-07);
   zqq_stack_3->SetBinError(16,2.953224e-07);
   zqq_stack_3->SetBinError(17,2.953224e-07);
   zqq_stack_3->SetBinError(18,2.953224e-07);
   zqq_stack_3->SetBinError(19,2.953224e-07);
   zqq_stack_3->SetBinError(20,2.953224e-07);
   zqq_stack_3->SetBinError(21,2.953224e-07);
   zqq_stack_3->SetBinError(22,2.953224e-07);
   zqq_stack_3->SetBinError(23,2.953224e-07);
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
   
   TH1F *hsigpass_cat5_2016_fit_b_stack_4 = new TH1F("hsigpass_cat5_2016_fit_b_stack_4","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   hsigpass_cat5_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat5_2016_fit_b_stack_4,"");
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
   
   TLegend *leg = new TLegend(0.6,0.5,0.75,0.85,NULL,"brNDC");
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
   entry=leg->AddEntry("htotpass_cat5_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat5_2016_fit_b_copy__109 = new TH1F("htotpass_cat5_2016_fit_b_copy__109","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(1,2.554205e-06);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(2,289.4613);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(3,301.8183);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(4,310.0052);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(5,308.4862);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(6,321.1437);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(7,349.6047);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(8,330.3624);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(9,272.7416);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(10,246.6372);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(11,2.554205e-06);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(12,2.554205e-06);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(13,2.554205e-06);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(14,185.4236);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(15,171.8627);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(16,159.7494);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(17,144.5744);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(18,132.3573);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(19,122.0389);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(20,112.6542);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(21,101.7711);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(22,87.4678);
   htotpass_cat5_2016_fit_b_copy__109->SetBinContent(23,74.60974);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(1,3.901807e-07);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(2,9.691565);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(3,6.945323);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(4,8.218429);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(5,10.67967);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(6,16.78346);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(7,22.57388);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(8,21.72299);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(9,15.18233);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(10,16.1689);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(11,3.901807e-07);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(12,3.901807e-07);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(13,3.901807e-07);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(14,11.52181);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(15,10.33292);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(16,7.312266);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(17,5.797065);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(18,4.185811);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(19,3.830918);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(20,3.814768);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(21,3.457601);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(22,2.609084);
   htotpass_cat5_2016_fit_b_copy__109->SetBinError(23,2.532703);
   htotpass_cat5_2016_fit_b_copy__109->SetMaximum(524.407);
   htotpass_cat5_2016_fit_b_copy__109->SetEntries(92);
   htotpass_cat5_2016_fit_b_copy__109->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__109->SetFillColor(ci);
   htotpass_cat5_2016_fit_b_copy__109->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__109->SetLineColor(ci);
   htotpass_cat5_2016_fit_b_copy__109->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b_copy__109->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b_copy__109->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b_copy__109->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__109->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b_copy__109->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__109->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b_copy__109->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b_copy__109->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b_copy__109->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__109->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__109->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__109->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__109->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__109->Draw("sameaxis");
   p12pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_b
   TPad *p22pass_cat5_2016_fit_b = new TPad("p22pass_cat5_2016_fit_b", "p22pass_cat5_2016_fit_b",0,0,1,0.3);
   p22pass_cat5_2016_fit_b->Draw();
   p22pass_cat5_2016_fit_b->cd();
   p22pass_cat5_2016_fit_b->Range(13.7027,-11.08075,221.8108,9.188415);
   p22pass_cat5_2016_fit_b->SetFillColor(0);
   p22pass_cat5_2016_fit_b->SetBorderMode(0);
   p22pass_cat5_2016_fit_b->SetBorderSize(2);
   p22pass_cat5_2016_fit_b->SetTickx(1);
   p22pass_cat5_2016_fit_b->SetTicky(1);
   p22pass_cat5_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat5_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat5_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b__110 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b__110","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b__110->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_b__110->SetMaximum(8.174957);
   iOneWithErrorspass_cat5_2016_fit_b__110->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__110->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__110->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__110->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__110->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__110->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__110->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__110->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__110->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_28 = new TH1F("hstack_stack_28","hstack",23,40,201);
   hstack_stack_28->SetMinimum(-10.58341);
   hstack_stack_28->SetMaximum(18.28741);
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
   
   
   TH1F *sigHistResidualwqqpass_cat5_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat5_2016_fit_b_stack_1","wqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(2,0.001136088);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(3,0.1746907);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(4,0.6388434);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(5,1.194156);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(6,2.344303);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(7,3.416588);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(8,1.823611);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(9,0.6715606);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(10,0.1646999);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(14,9.261541e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(15,1.059366e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(16,9.972381e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(17,1.091386e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(18,1.143227e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(19,1.298152e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(20,1.213333e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(21,1.35846e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(22,1.550527e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(23,1.428039e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(1,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(2,0.00922666);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(3,1.466533);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(4,2.851165);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(5,3.889983);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(6,9.318122);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(7,13.99999);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(8,10.85483);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(9,3.91973);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(10,0.6740142);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(11,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(12,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(13,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(14,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(15,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(16,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(17,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(18,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(19,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(20,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(21,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(22,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinError(23,2.550012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat5_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat5_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat5_2016_fit_b_stack_2","zqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(2,0.02150024);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(3,0.05289151);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(4,0.1993486);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(5,0.3209824);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(6,1.012156);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(7,1.896492);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(8,2.77093);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(9,2.541209);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(10,1.247227);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(14,8.635773e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(15,9.877884e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(16,9.298584e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(17,1.017645e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(18,1.065984e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(19,1.210441e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(20,1.131353e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(21,1.266674e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(22,1.445764e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(23,1.331552e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(1,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(2,0.344706);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(3,0.5376235);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(4,1.305339);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(5,1.501054);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(6,7.650786);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(7,10.84918);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(8,12.12502);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(9,8.966562);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(10,6.997036);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(11,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(12,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(13,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(14,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(15,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(16,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(17,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(18,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(19,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(20,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(21,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(22,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinError(23,2.953224e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat5_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_b__111 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_b__111","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__111->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fx3028[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fy3028[23] = {
   0,
   -0.0635233,
   0.9174834,
   0.6296044,
   1.832018,
   3.482454,
   4.851246,
   5.449971,
   1.476769,
   2.163361,
   0,
   0,
   0,
   1.213624,
   -1.271372,
   1.137044,
   0.1844248,
   0.1303221,
   -1.771677,
   0.5314912,
   -0.695918,
   -1.69719,
   1.104798};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_felx3028[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fely3028[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fehx3028[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fehy3028[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_b_fx3028,Graph_from_iRatiopass_cat5_2016_fit_b_fy3028,Graph_from_iRatiopass_cat5_2016_fit_b_felx3028,Graph_from_iRatiopass_cat5_2016_fit_b_fehx3028,Graph_from_iRatiopass_cat5_2016_fit_b_fely3028,Graph_from_iRatiopass_cat5_2016_fit_b_fehy3028);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->SetMinimum(-3.693842);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->SetMaximum(7.372136);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_fit_b3028);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b_copy__112 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b_copy__112","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetMaximum(8.174957);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__112->Draw("sameaxis");
   p22pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
   cpass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
   cpass_cat5_2016_fit_b->SetSelected(cpass_cat5_2016_fit_b);
}
