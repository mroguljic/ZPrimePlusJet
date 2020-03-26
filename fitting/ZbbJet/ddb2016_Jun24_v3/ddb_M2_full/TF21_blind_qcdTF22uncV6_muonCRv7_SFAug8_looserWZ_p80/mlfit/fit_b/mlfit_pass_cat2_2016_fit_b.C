void mlfit_pass_cat2_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat2_2016_fit_b/cpass_cat2_2016_fit_b
//=========  (Thu Sep 26 13:57:21 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_fit_b = new TCanvas("cpass_cat2_2016_fit_b", "cpass_cat2_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_fit_b->SetHighLightColor(2);
   cpass_cat2_2016_fit_b->Range(0,0,1,1);
   cpass_cat2_2016_fit_b->SetFillColor(0);
   cpass_cat2_2016_fit_b->SetBorderMode(0);
   cpass_cat2_2016_fit_b->SetBorderSize(2);
   cpass_cat2_2016_fit_b->SetTickx(1);
   cpass_cat2_2016_fit_b->SetTicky(1);
   cpass_cat2_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat2_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat2_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat2_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_fit_b
   TPad *p12pass_cat2_2016_fit_b = new TPad("p12pass_cat2_2016_fit_b", "p12pass_cat2_2016_fit_b",0,0.3,1,1);
   p12pass_cat2_2016_fit_b->Draw();
   p12pass_cat2_2016_fit_b->cd();
   p12pass_cat2_2016_fit_b->Range(18.24324,-45.18911,197.973,2214.266);
   p12pass_cat2_2016_fit_b->SetFillColor(0);
   p12pass_cat2_2016_fit_b->SetBorderMode(0);
   p12pass_cat2_2016_fit_b->SetBorderSize(2);
   p12pass_cat2_2016_fit_b->SetTickx(1);
   p12pass_cat2_2016_fit_b->SetTicky(1);
   p12pass_cat2_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat2_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_fit_b__33 = new TH1F("htotpass_cat2_2016_fit_b__33","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b__33->SetBinContent(1,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinContent(2,1180.248);
   htotpass_cat2_2016_fit_b__33->SetBinContent(3,1247.334);
   htotpass_cat2_2016_fit_b__33->SetBinContent(4,1262.768);
   htotpass_cat2_2016_fit_b__33->SetBinContent(5,1272.564);
   htotpass_cat2_2016_fit_b__33->SetBinContent(6,1307.396);
   htotpass_cat2_2016_fit_b__33->SetBinContent(7,1325.547);
   htotpass_cat2_2016_fit_b__33->SetBinContent(8,1282.229);
   htotpass_cat2_2016_fit_b__33->SetBinContent(9,1168.034);
   htotpass_cat2_2016_fit_b__33->SetBinContent(10,1056.388);
   htotpass_cat2_2016_fit_b__33->SetBinContent(11,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinContent(12,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinContent(13,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinContent(14,708.0223);
   htotpass_cat2_2016_fit_b__33->SetBinContent(15,610.5844);
   htotpass_cat2_2016_fit_b__33->SetBinContent(16,526.7877);
   htotpass_cat2_2016_fit_b__33->SetBinContent(17,433.7547);
   htotpass_cat2_2016_fit_b__33->SetBinContent(18,357.0347);
   htotpass_cat2_2016_fit_b__33->SetBinContent(19,277.3296);
   htotpass_cat2_2016_fit_b__33->SetBinContent(20,222.1527);
   htotpass_cat2_2016_fit_b__33->SetBinContent(21,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinContent(22,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinContent(23,6.005766e-06);
   htotpass_cat2_2016_fit_b__33->SetBinError(1,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetBinError(2,16.39511);
   htotpass_cat2_2016_fit_b__33->SetBinError(3,15.64275);
   htotpass_cat2_2016_fit_b__33->SetBinError(4,20.33913);
   htotpass_cat2_2016_fit_b__33->SetBinError(5,26.71019);
   htotpass_cat2_2016_fit_b__33->SetBinError(6,37.8882);
   htotpass_cat2_2016_fit_b__33->SetBinError(7,46.81025);
   htotpass_cat2_2016_fit_b__33->SetBinError(8,49.12081);
   htotpass_cat2_2016_fit_b__33->SetBinError(9,41.87377);
   htotpass_cat2_2016_fit_b__33->SetBinError(10,34.79601);
   htotpass_cat2_2016_fit_b__33->SetBinError(11,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetBinError(12,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetBinError(13,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetBinError(14,21.64418);
   htotpass_cat2_2016_fit_b__33->SetBinError(15,16.53678);
   htotpass_cat2_2016_fit_b__33->SetBinError(16,13.38996);
   htotpass_cat2_2016_fit_b__33->SetBinError(17,9.684718);
   htotpass_cat2_2016_fit_b__33->SetBinError(18,8.666297);
   htotpass_cat2_2016_fit_b__33->SetBinError(19,5.735828);
   htotpass_cat2_2016_fit_b__33->SetBinError(20,5.605694);
   htotpass_cat2_2016_fit_b__33->SetBinError(21,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetBinError(22,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetBinError(23,8.252234e-07);
   htotpass_cat2_2016_fit_b__33->SetMinimum(0);
   htotpass_cat2_2016_fit_b__33->SetMaximum(1988.321);
   htotpass_cat2_2016_fit_b__33->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__33->SetFillColor(ci);
   htotpass_cat2_2016_fit_b__33->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__33->SetLineColor(ci);
   htotpass_cat2_2016_fit_b__33->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b__33->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b__33->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b__33->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__33->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b__33->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__33->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b__33->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b__33->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b__33->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__33->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__33->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__33->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__33->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__33->Draw("");
   
   TH1F *htot_linepass_cat2_2016_fit_b__34 = new TH1F("htot_linepass_cat2_2016_fit_b__34","wqq in cat2_2016_pass_cat2",23,40,201);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(1,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(2,1180.248);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(3,1247.334);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(4,1262.768);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(5,1272.564);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(6,1307.396);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(7,1325.547);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(8,1282.229);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(9,1168.034);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(10,1056.388);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(11,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(12,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(13,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(14,708.0223);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(15,610.5844);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(16,526.7877);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(17,433.7547);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(18,357.0347);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(19,277.3296);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(20,222.1527);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(21,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(22,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinContent(23,6.005766e-06);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(1,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(2,16.39511);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(3,15.64275);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(4,20.33913);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(5,26.71019);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(6,37.8882);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(7,46.81025);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(8,49.12081);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(9,41.87377);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(10,34.79601);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(11,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(12,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(13,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(14,21.64418);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(15,16.53678);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(16,13.38996);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(17,9.684718);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(18,8.666297);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(19,5.735828);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(20,5.605694);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(21,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(22,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetBinError(23,8.252234e-07);
   htot_linepass_cat2_2016_fit_b__34->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_b__34->SetFillColor(ci);
   htot_linepass_cat2_2016_fit_b__34->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_b__34->SetLineColor(ci);
   htot_linepass_cat2_2016_fit_b__34->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat2_2016_fit_b__34->SetMarkerColor(ci);
   htot_linepass_cat2_2016_fit_b__34->SetMarkerSize(0);
   htot_linepass_cat2_2016_fit_b__34->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat2_2016_fit_b__34->GetXaxis()->SetRange(2,20);
   htot_linepass_cat2_2016_fit_b__34->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_b__34->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_b__34->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_b__34->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_b__34->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat2_2016_fit_b__34->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_b__34->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat2_2016_fit_b__34->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat2_2016_fit_b__34->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat2_2016_fit_b__34->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_b__34->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_b__34->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_b__34->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_b__34->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_b__34->Draw("histsame");
   
   TH1F *qcd__35 = new TH1F("qcd__35","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__35->SetBinContent(2,1164.876);
   qcd__35->SetBinContent(3,1220.602);
   qcd__35->SetBinContent(4,1212.97);
   qcd__35->SetBinContent(5,1183.559);
   qcd__35->SetBinContent(6,1122.942);
   qcd__35->SetBinContent(7,1064.68);
   qcd__35->SetBinContent(8,1019.993);
   qcd__35->SetBinContent(9,969.3717);
   qcd__35->SetBinContent(10,922.7322);
   qcd__35->SetBinContent(14,658.7321);
   qcd__35->SetBinContent(15,575.7422);
   qcd__35->SetBinContent(16,500.1699);
   qcd__35->SetBinContent(17,417.3958);
   qcd__35->SetBinContent(18,341.2284);
   qcd__35->SetBinContent(19,273.7158);
   qcd__35->SetBinContent(20,213.1527);
   qcd__35->SetBinError(2,15.83803);
   qcd__35->SetBinError(3,13.93694);
   qcd__35->SetBinError(4,18.26572);
   qcd__35->SetBinError(5,22.65397);
   qcd__35->SetBinError(6,28.81347);
   qcd__35->SetBinError(7,32.85554);
   qcd__35->SetBinError(8,32.03829);
   qcd__35->SetBinError(9,28.44523);
   qcd__35->SetBinError(10,23.72593);
   qcd__35->SetBinError(14,13.69303);
   qcd__35->SetBinError(15,11.53565);
   qcd__35->SetBinError(16,9.86678);
   qcd__35->SetBinError(17,7.927479);
   qcd__35->SetBinError(18,6.797889);
   qcd__35->SetBinError(19,5.602626);
   qcd__35->SetBinError(20,4.696406);
   qcd__35->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__35->SetLineColor(ci);
   qcd__35->SetLineStyle(2);
   qcd__35->SetLineWidth(2);
   qcd__35->GetXaxis()->SetTitle("x");
   qcd__35->GetXaxis()->SetLabelFont(42);
   qcd__35->GetXaxis()->SetLabelSize(0.035);
   qcd__35->GetXaxis()->SetTitleSize(0.035);
   qcd__35->GetXaxis()->SetTitleFont(42);
   qcd__35->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__35->GetYaxis()->SetLabelFont(42);
   qcd__35->GetYaxis()->SetLabelSize(0.035);
   qcd__35->GetYaxis()->SetTitleSize(0.035);
   qcd__35->GetYaxis()->SetTitleOffset(0);
   qcd__35->GetYaxis()->SetTitleFont(42);
   qcd__35->GetZaxis()->SetLabelFont(42);
   qcd__35->GetZaxis()->SetLabelSize(0.035);
   qcd__35->GetZaxis()->SetTitleSize(0.035);
   qcd__35->GetZaxis()->SetTitleFont(42);
   qcd__35->Draw("hist sames");
   
   TH1F *htotpass_cat2_2016_fit_b__36 = new TH1F("htotpass_cat2_2016_fit_b__36","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b__36->SetBinContent(1,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinContent(2,1180.248);
   htotpass_cat2_2016_fit_b__36->SetBinContent(3,1247.334);
   htotpass_cat2_2016_fit_b__36->SetBinContent(4,1262.768);
   htotpass_cat2_2016_fit_b__36->SetBinContent(5,1272.564);
   htotpass_cat2_2016_fit_b__36->SetBinContent(6,1307.396);
   htotpass_cat2_2016_fit_b__36->SetBinContent(7,1325.547);
   htotpass_cat2_2016_fit_b__36->SetBinContent(8,1282.229);
   htotpass_cat2_2016_fit_b__36->SetBinContent(9,1168.034);
   htotpass_cat2_2016_fit_b__36->SetBinContent(10,1056.388);
   htotpass_cat2_2016_fit_b__36->SetBinContent(11,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinContent(12,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinContent(13,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinContent(14,708.0223);
   htotpass_cat2_2016_fit_b__36->SetBinContent(15,610.5844);
   htotpass_cat2_2016_fit_b__36->SetBinContent(16,526.7877);
   htotpass_cat2_2016_fit_b__36->SetBinContent(17,433.7547);
   htotpass_cat2_2016_fit_b__36->SetBinContent(18,357.0347);
   htotpass_cat2_2016_fit_b__36->SetBinContent(19,277.3296);
   htotpass_cat2_2016_fit_b__36->SetBinContent(20,222.1527);
   htotpass_cat2_2016_fit_b__36->SetBinContent(21,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinContent(22,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinContent(23,6.005766e-06);
   htotpass_cat2_2016_fit_b__36->SetBinError(1,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetBinError(2,16.39511);
   htotpass_cat2_2016_fit_b__36->SetBinError(3,15.64275);
   htotpass_cat2_2016_fit_b__36->SetBinError(4,20.33913);
   htotpass_cat2_2016_fit_b__36->SetBinError(5,26.71019);
   htotpass_cat2_2016_fit_b__36->SetBinError(6,37.8882);
   htotpass_cat2_2016_fit_b__36->SetBinError(7,46.81025);
   htotpass_cat2_2016_fit_b__36->SetBinError(8,49.12081);
   htotpass_cat2_2016_fit_b__36->SetBinError(9,41.87377);
   htotpass_cat2_2016_fit_b__36->SetBinError(10,34.79601);
   htotpass_cat2_2016_fit_b__36->SetBinError(11,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetBinError(12,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetBinError(13,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetBinError(14,21.64418);
   htotpass_cat2_2016_fit_b__36->SetBinError(15,16.53678);
   htotpass_cat2_2016_fit_b__36->SetBinError(16,13.38996);
   htotpass_cat2_2016_fit_b__36->SetBinError(17,9.684718);
   htotpass_cat2_2016_fit_b__36->SetBinError(18,8.666297);
   htotpass_cat2_2016_fit_b__36->SetBinError(19,5.735828);
   htotpass_cat2_2016_fit_b__36->SetBinError(20,5.605694);
   htotpass_cat2_2016_fit_b__36->SetBinError(21,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetBinError(22,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetBinError(23,8.252234e-07);
   htotpass_cat2_2016_fit_b__36->SetMinimum(0);
   htotpass_cat2_2016_fit_b__36->SetMaximum(1988.321);
   htotpass_cat2_2016_fit_b__36->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__36->SetFillColor(ci);
   htotpass_cat2_2016_fit_b__36->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__36->SetLineColor(ci);
   htotpass_cat2_2016_fit_b__36->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b__36->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b__36->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b__36->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__36->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b__36->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__36->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b__36->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b__36->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b__36->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__36->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__36->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__36->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__36->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__36->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis9[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_9 = new TH1F("hstackMC_stack_9","hstackMC",23, xAxis9);
   hstackMC_stack_9->SetMinimum(0);
   hstackMC_stack_9->SetMaximum(275.3481);
   hstackMC_stack_9->SetDirectory(0);
   hstackMC_stack_9->SetStats(0);
   hstackMC_stack_9->SetLineStyle(0);
   hstackMC_stack_9->SetMarkerStyle(20);
   hstackMC_stack_9->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_9->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_9->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_9->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_9->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_9);
   
   Double_t xAxis10[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat2_2016_pass_cat2",23, xAxis10);
   tqq_stack_1->SetBinContent(2,12.01223);
   tqq_stack_1->SetBinContent(3,19.30003);
   tqq_stack_1->SetBinContent(4,22.97345);
   tqq_stack_1->SetBinContent(5,35.59156);
   tqq_stack_1->SetBinContent(6,52.18668);
   tqq_stack_1->SetBinContent(7,62.39491);
   tqq_stack_1->SetBinContent(8,57.84768);
   tqq_stack_1->SetBinContent(9,45.45697);
   tqq_stack_1->SetBinContent(10,55.05061);
   tqq_stack_1->SetBinContent(14,49.29029);
   tqq_stack_1->SetBinContent(15,34.84209);
   tqq_stack_1->SetBinContent(16,26.61778);
   tqq_stack_1->SetBinContent(17,16.35884);
   tqq_stack_1->SetBinContent(18,15.80628);
   tqq_stack_1->SetBinContent(19,3.613789);
   tqq_stack_1->SetBinContent(20,9.000027);
   tqq_stack_1->SetBinError(2,4.085011);
   tqq_stack_1->SetBinError(3,6.563384);
   tqq_stack_1->SetBinError(4,7.812604);
   tqq_stack_1->SetBinError(5,12.10366);
   tqq_stack_1->SetBinError(6,17.74718);
   tqq_stack_1->SetBinError(7,21.2187);
   tqq_stack_1->SetBinError(8,19.67232);
   tqq_stack_1->SetBinError(9,15.45861);
   tqq_stack_1->SetBinError(10,18.72112);
   tqq_stack_1->SetBinError(14,16.76221);
   tqq_stack_1->SetBinError(15,11.84879);
   tqq_stack_1->SetBinError(16,9.051938);
   tqq_stack_1->SetBinError(17,5.563168);
   tqq_stack_1->SetBinError(18,5.375259);
   tqq_stack_1->SetBinError(19,1.228945);
   tqq_stack_1->SetBinError(20,3.060649);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat2_2016_pass_cat2",23,40,201);
   wqq_stack_2->SetBinContent(1,2.887831e-06);
   wqq_stack_2->SetBinContent(2,2.202097);
   wqq_stack_2->SetBinContent(3,5.920497);
   wqq_stack_2->SetBinContent(4,18.6953);
   wqq_stack_2->SetBinContent(5,33.65326);
   wqq_stack_2->SetBinContent(6,91.80752);
   wqq_stack_2->SetBinContent(7,124.7381);
   wqq_stack_2->SetBinContent(8,83.89754);
   wqq_stack_2->SetBinContent(9,40.24398);
   wqq_stack_2->SetBinContent(10,11.38892);
   wqq_stack_2->SetBinContent(11,2.887831e-06);
   wqq_stack_2->SetBinContent(12,2.887831e-06);
   wqq_stack_2->SetBinContent(13,2.887831e-06);
   wqq_stack_2->SetBinContent(14,2.887831e-06);
   wqq_stack_2->SetBinContent(15,2.887831e-06);
   wqq_stack_2->SetBinContent(16,2.887831e-06);
   wqq_stack_2->SetBinContent(17,2.887831e-06);
   wqq_stack_2->SetBinContent(18,2.887831e-06);
   wqq_stack_2->SetBinContent(19,2.887831e-06);
   wqq_stack_2->SetBinContent(20,2.887831e-06);
   wqq_stack_2->SetBinContent(21,2.887831e-06);
   wqq_stack_2->SetBinContent(22,2.887831e-06);
   wqq_stack_2->SetBinContent(23,2.887831e-06);
   wqq_stack_2->SetBinError(1,4.31703e-07);
   wqq_stack_2->SetBinError(2,0.3751343);
   wqq_stack_2->SetBinError(3,2.491543);
   wqq_stack_2->SetBinError(4,3.374536);
   wqq_stack_2->SetBinError(5,5.091615);
   wqq_stack_2->SetBinError(6,12.59146);
   wqq_stack_2->SetBinError(7,18.15636);
   wqq_stack_2->SetBinError(8,15.61563);
   wqq_stack_2->SetBinError(9,10.62739);
   wqq_stack_2->SetBinError(10,3.202506);
   wqq_stack_2->SetBinError(11,4.31703e-07);
   wqq_stack_2->SetBinError(12,4.31703e-07);
   wqq_stack_2->SetBinError(13,4.31703e-07);
   wqq_stack_2->SetBinError(14,4.31703e-07);
   wqq_stack_2->SetBinError(15,4.31703e-07);
   wqq_stack_2->SetBinError(16,4.31703e-07);
   wqq_stack_2->SetBinError(17,4.31703e-07);
   wqq_stack_2->SetBinError(18,4.31703e-07);
   wqq_stack_2->SetBinError(19,4.31703e-07);
   wqq_stack_2->SetBinError(20,4.31703e-07);
   wqq_stack_2->SetBinError(21,4.31703e-07);
   wqq_stack_2->SetBinError(22,4.31703e-07);
   wqq_stack_2->SetBinError(23,4.31703e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat2_2016_pass_cat2",23,40,201);
   zqq_stack_3->SetBinContent(1,3.117935e-06);
   zqq_stack_3->SetBinContent(2,1.157648);
   zqq_stack_3->SetBinContent(3,1.511311);
   zqq_stack_3->SetBinContent(4,8.128617);
   zqq_stack_3->SetBinContent(5,19.75941);
   zqq_stack_3->SetBinContent(6,40.46015);
   zqq_stack_3->SetBinContent(7,73.7342);
   zqq_stack_3->SetBinContent(8,120.4911);
   zqq_stack_3->SetBinContent(9,112.9611);
   zqq_stack_3->SetBinContent(10,67.21577);
   zqq_stack_3->SetBinContent(11,3.117935e-06);
   zqq_stack_3->SetBinContent(12,3.117935e-06);
   zqq_stack_3->SetBinContent(13,3.117935e-06);
   zqq_stack_3->SetBinContent(14,3.117935e-06);
   zqq_stack_3->SetBinContent(15,3.117935e-06);
   zqq_stack_3->SetBinContent(16,3.117935e-06);
   zqq_stack_3->SetBinContent(17,3.117935e-06);
   zqq_stack_3->SetBinContent(18,3.117935e-06);
   zqq_stack_3->SetBinContent(19,3.117935e-06);
   zqq_stack_3->SetBinContent(20,3.117935e-06);
   zqq_stack_3->SetBinContent(21,3.117935e-06);
   zqq_stack_3->SetBinContent(22,3.117935e-06);
   zqq_stack_3->SetBinContent(23,3.117935e-06);
   zqq_stack_3->SetBinError(1,7.032966e-07);
   zqq_stack_3->SetBinError(2,1.06227);
   zqq_stack_3->SetBinError(3,1.082458);
   zqq_stack_3->SetBinError(4,2.760353);
   zqq_stack_3->SetBinError(5,5.273375);
   zqq_stack_3->SetBinError(6,11.48008);
   zqq_stack_3->SetBinError(7,18.2161);
   zqq_stack_3->SetBinError(8,27.48733);
   zqq_stack_3->SetBinError(9,24.33869);
   zqq_stack_3->SetBinError(10,16.94422);
   zqq_stack_3->SetBinError(11,7.032966e-07);
   zqq_stack_3->SetBinError(12,7.032966e-07);
   zqq_stack_3->SetBinError(13,7.032966e-07);
   zqq_stack_3->SetBinError(14,7.032966e-07);
   zqq_stack_3->SetBinError(15,7.032966e-07);
   zqq_stack_3->SetBinError(16,7.032966e-07);
   zqq_stack_3->SetBinError(17,7.032966e-07);
   zqq_stack_3->SetBinError(18,7.032966e-07);
   zqq_stack_3->SetBinError(19,7.032966e-07);
   zqq_stack_3->SetBinError(20,7.032966e-07);
   zqq_stack_3->SetBinError(21,7.032966e-07);
   zqq_stack_3->SetBinError(22,7.032966e-07);
   zqq_stack_3->SetBinError(23,7.032966e-07);
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
   
   TH1F *hsigpass_cat2_2016_fit_b_stack_4 = new TH1F("hsigpass_cat2_2016_fit_b_stack_4","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3009[23] = {
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
   Double_t data_copy_fy3009[23] = {
   0,
   1202,
   1215,
   1189,
   1243,
   1333,
   1335,
   1244,
   1127,
   1044,
   0,
   0,
   0,
   697,
   593,
   528,
   424,
   337,
   290,
   198,
   0,
   0,
   0};
   Double_t data_copy_felx3009[23] = {
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
   Double_t data_copy_fely3009[23] = {
   1.841055,
   35.68026,
   35.86719,
   35.49231,
   36.26644,
   37.52021,
   37.54759,
   36.28062,
   34.5815,
   33.32203,
   1.841055,
   1.841055,
   1.841055,
   27.41398,
   25.36583,
   23.99328,
   21.60792,
   19.37615,
   18.04936,
   15.09528,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3009[23] = {
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
   Double_t data_copy_fehy3009[23] = {
   0,
   34.6658,
   34.8528,
   34.47777,
   35.25222,
   36.50648,
   36.53386,
   35.2664,
   33.56656,
   32.30651,
   0,
   0,
   0,
   26.39499,
   24.34525,
   22.97147,
   20.58358,
   18.34884,
   17.01993,
   14.05965,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3009,data_copy_fy3009,data_copy_felx3009,data_copy_fehx3009,data_copy_fely3009,data_copy_fehy3009);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat2_2016_pass_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3009 = new TH1F("Graph_data_copy3009","tqq in cat2_2016_pass_cat2",100,28.1,212.9);
   Graph_data_copy3009->SetMinimum(0);
   Graph_data_copy3009->SetMaximum(1508.871);
   Graph_data_copy3009->SetDirectory(0);
   Graph_data_copy3009->SetStats(0);
   Graph_data_copy3009->SetLineStyle(0);
   Graph_data_copy3009->SetMarkerStyle(20);
   Graph_data_copy3009->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3009->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3009->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3009->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3009->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3009);
   
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
   entry=leg->AddEntry("htotpass_cat2_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.77,"500 < p_{T} < 550 GeV");
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
   
   TH1F *htotpass_cat2_2016_fit_b_copy__37 = new TH1F("htotpass_cat2_2016_fit_b_copy__37","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(1,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(2,1180.248);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(3,1247.334);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(4,1262.768);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(5,1272.564);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(6,1307.396);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(7,1325.547);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(8,1282.229);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(9,1168.034);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(10,1056.388);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(11,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(12,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(13,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(14,708.0223);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(15,610.5844);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(16,526.7877);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(17,433.7547);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(18,357.0347);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(19,277.3296);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(20,222.1527);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(21,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(22,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinContent(23,6.005766e-06);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(1,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(2,16.39511);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(3,15.64275);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(4,20.33913);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(5,26.71019);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(6,37.8882);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(7,46.81025);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(8,49.12081);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(9,41.87377);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(10,34.79601);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(11,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(12,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(13,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(14,21.64418);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(15,16.53678);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(16,13.38996);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(17,9.684718);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(18,8.666297);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(19,5.735828);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(20,5.605694);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(21,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(22,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetBinError(23,8.252234e-07);
   htotpass_cat2_2016_fit_b_copy__37->SetMaximum(1988.321);
   htotpass_cat2_2016_fit_b_copy__37->SetEntries(92);
   htotpass_cat2_2016_fit_b_copy__37->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b_copy__37->SetFillColor(ci);
   htotpass_cat2_2016_fit_b_copy__37->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b_copy__37->SetLineColor(ci);
   htotpass_cat2_2016_fit_b_copy__37->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b_copy__37->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b_copy__37->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b_copy__37->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__37->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b_copy__37->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__37->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b_copy__37->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b_copy__37->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b_copy__37->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__37->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__37->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b_copy__37->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b_copy__37->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__37->Draw("sameaxis");
   p12pass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_fit_b
   TPad *p22pass_cat2_2016_fit_b = new TPad("p22pass_cat2_2016_fit_b", "p22pass_cat2_2016_fit_b",0,0,1,0.3);
   p22pass_cat2_2016_fit_b->Draw();
   p22pass_cat2_2016_fit_b->cd();
   p22pass_cat2_2016_fit_b->Range(18.24324,-11.14144,197.973,9.330035);
   p22pass_cat2_2016_fit_b->SetFillColor(0);
   p22pass_cat2_2016_fit_b->SetBorderMode(0);
   p22pass_cat2_2016_fit_b->SetBorderSize(2);
   p22pass_cat2_2016_fit_b->SetTickx(1);
   p22pass_cat2_2016_fit_b->SetTicky(1);
   p22pass_cat2_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat2_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat2_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b__38 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b__38","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b__38->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_b__38->SetMaximum(8.306461);
   iOneWithErrorspass_cat2_2016_fit_b__38->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__38->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__38->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__38->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__38->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__38->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__38->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__38->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__38->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_10 = new TH1F("hstack_stack_10","hstack",23,40,201);
   hstack_stack_10->SetMinimum(-24.07074);
   hstack_stack_10->SetMaximum(32.44913);
   hstack_stack_10->SetDirectory(0);
   hstack_stack_10->SetStats(0);
   hstack_stack_10->SetLineStyle(0);
   hstack_stack_10->SetMarkerStyle(20);
   hstack_stack_10->GetXaxis()->SetLabelFont(42);
   hstack_stack_10->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_10->GetXaxis()->SetTitleFont(42);
   hstack_stack_10->GetYaxis()->SetLabelFont(42);
   hstack_stack_10->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_10->GetYaxis()->SetTitleFont(42);
   hstack_stack_10->GetZaxis()->SetLabelFont(42);
   hstack_stack_10->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_10);
   
   
   TH1F *sigHistResidualwqqpass_cat2_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat2_2016_fit_b_stack_1","wqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(2,0.06352363);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(3,0.1698715);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(4,0.5422422);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(5,0.9546423);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(6,2.514828);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(7,3.414314);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(8,2.378965);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(9,1.198931);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(10,0.3525272);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(14,1.094083e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(15,1.186199e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(16,1.257138e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(17,1.402978e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(18,1.573849e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(19,1.696735e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(20,2.053984e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(1,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(2,0.3751343);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(3,2.491543);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(4,3.374536);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(5,5.091615);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(6,12.59146);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(7,18.15636);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(8,15.61563);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(9,10.62739);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(10,3.202506);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(11,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(12,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(13,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(14,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(15,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(16,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(17,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(18,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(19,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(20,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(21,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(22,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinError(23,4.31703e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat2_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat2_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat2_2016_fit_b_stack_2","zqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(2,0.03339453);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(3,0.04336268);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(4,0.235764);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(5,0.5605152);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(6,1.1083);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(7,2.018243);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(8,3.416597);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(9,3.365288);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(10,2.080564);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(14,1.18126e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(15,1.280716e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(16,1.357308e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(17,1.514768e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(18,1.699255e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(19,1.831932e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(20,2.217647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(1,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(2,1.06227);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(3,1.082458);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(4,2.760353);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(5,5.273375);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(6,11.48008);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(7,18.2161);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(8,27.48733);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(9,24.33869);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(10,16.94422);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(11,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(12,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(13,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(14,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(15,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(16,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(17,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(18,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(19,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(20,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(21,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(22,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinError(23,7.032966e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat2_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_fit_b__39 = new TH1F("iOneWithErrorsLinepass_cat2_2016_fit_b__39","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__39->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fx3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fy3010[23] = {
   0,
   0.703798,
   -0.7144899,
   -1.361568,
   0.6576051,
   4.207644,
   5.537641,
   4.579846,
   3.24368,
   1.987189,
   0,
   0,
   0,
   -0.417592,
   -0.7222909,
   0.05052837,
   -0.4739054,
   -1.091876,
   0.7019883,
   -1.717875,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_felx3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fely3010[23] = {
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
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fehx3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fehy3010[23] = {
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
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_fit_b_fx3010,Graph_from_iRatiopass_cat2_2016_fit_b_fy3010,Graph_from_iRatiopass_cat2_2016_fit_b_felx3010,Graph_from_iRatiopass_cat2_2016_fit_b_fehx3010,Graph_from_iRatiopass_cat2_2016_fit_b_fely3010,Graph_from_iRatiopass_cat2_2016_fit_b_fehy3010);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->SetMinimum(-3.643426);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->SetMaximum(7.463192);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_fit_b3010);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b_copy__40 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b_copy__40","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetMaximum(8.306461);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetEntries(184);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__40->Draw("sameaxis");
   p22pass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
   cpass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
   cpass_cat2_2016_fit_b->SetSelected(cpass_cat2_2016_fit_b);
}
