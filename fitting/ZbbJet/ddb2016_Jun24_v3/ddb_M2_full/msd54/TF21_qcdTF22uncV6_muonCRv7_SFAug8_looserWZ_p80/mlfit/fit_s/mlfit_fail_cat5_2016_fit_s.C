void mlfit_fail_cat5_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat5_2016_fit_s/cfail_cat5_2016_fit_s
//=========  (Mon Sep 30 17:21:42 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat5_2016_fit_s = new TCanvas("cfail_cat5_2016_fit_s", "cfail_cat5_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat5_2016_fit_s->SetHighLightColor(2);
   cfail_cat5_2016_fit_s->Range(0,0,1,1);
   cfail_cat5_2016_fit_s->SetFillColor(0);
   cfail_cat5_2016_fit_s->SetBorderMode(0);
   cfail_cat5_2016_fit_s->SetBorderSize(2);
   cfail_cat5_2016_fit_s->SetTickx(1);
   cfail_cat5_2016_fit_s->SetTicky(1);
   cfail_cat5_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat5_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat5_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat5_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat5_2016_fit_s
   TPad *p12fail_cat5_2016_fit_s = new TPad("p12fail_cat5_2016_fit_s", "p12fail_cat5_2016_fit_s",0,0.3,1,1);
   p12fail_cat5_2016_fit_s->Draw();
   p12fail_cat5_2016_fit_s->cd();
   p12fail_cat5_2016_fit_s->Range(13.7027,-699.8744,221.8108,34293.84);
   p12fail_cat5_2016_fit_s->SetFillColor(0);
   p12fail_cat5_2016_fit_s->SetBorderMode(0);
   p12fail_cat5_2016_fit_s->SetBorderSize(2);
   p12fail_cat5_2016_fit_s->SetTickx(1);
   p12fail_cat5_2016_fit_s->SetTicky(1);
   p12fail_cat5_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat5_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat5_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat5_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat5_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat5_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat5_2016_fit_s__65 = new TH1F("htotfail_cat5_2016_fit_s__65","wqq in cat5_2016_fail_cat5",23,40,201);
   htotfail_cat5_2016_fit_s__65->SetBinContent(1,3.370731e-05);
   htotfail_cat5_2016_fit_s__65->SetBinContent(2,3.370731e-05);
   htotfail_cat5_2016_fit_s__65->SetBinContent(3,20529.65);
   htotfail_cat5_2016_fit_s__65->SetBinContent(4,19299.09);
   htotfail_cat5_2016_fit_s__65->SetBinContent(5,18002.38);
   htotfail_cat5_2016_fit_s__65->SetBinContent(6,17206.64);
   htotfail_cat5_2016_fit_s__65->SetBinContent(7,16548.08);
   htotfail_cat5_2016_fit_s__65->SetBinContent(8,15522.19);
   htotfail_cat5_2016_fit_s__65->SetBinContent(9,14188.28);
   htotfail_cat5_2016_fit_s__65->SetBinContent(10,13259.56);
   htotfail_cat5_2016_fit_s__65->SetBinContent(11,12766.25);
   htotfail_cat5_2016_fit_s__65->SetBinContent(12,12244.05);
   htotfail_cat5_2016_fit_s__65->SetBinContent(13,11923.27);
   htotfail_cat5_2016_fit_s__65->SetBinContent(14,11630.82);
   htotfail_cat5_2016_fit_s__65->SetBinContent(15,11144.7);
   htotfail_cat5_2016_fit_s__65->SetBinContent(16,11193.18);
   htotfail_cat5_2016_fit_s__65->SetBinContent(17,10648.08);
   htotfail_cat5_2016_fit_s__65->SetBinContent(18,10441.04);
   htotfail_cat5_2016_fit_s__65->SetBinContent(19,10151.78);
   htotfail_cat5_2016_fit_s__65->SetBinContent(20,9779.766);
   htotfail_cat5_2016_fit_s__65->SetBinContent(21,9430.199);
   htotfail_cat5_2016_fit_s__65->SetBinContent(22,9133.575);
   htotfail_cat5_2016_fit_s__65->SetBinContent(23,8455.329);
   htotfail_cat5_2016_fit_s__65->SetMinimum(0);
   htotfail_cat5_2016_fit_s__65->SetMaximum(30794.47);
   htotfail_cat5_2016_fit_s__65->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_s__65->SetFillColor(ci);
   htotfail_cat5_2016_fit_s__65->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_s__65->SetLineColor(ci);
   htotfail_cat5_2016_fit_s__65->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat5_2016_fit_s__65->SetMarkerColor(ci);
   htotfail_cat5_2016_fit_s__65->SetMarkerSize(0);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetRange(2,23);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetLabelOffset(100);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetTitleOffset(100);
   htotfail_cat5_2016_fit_s__65->GetXaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s__65->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat5_2016_fit_s__65->GetYaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s__65->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat5_2016_fit_s__65->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat5_2016_fit_s__65->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat5_2016_fit_s__65->GetYaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s__65->GetZaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s__65->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_s__65->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_s__65->GetZaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s__65->Draw("");
   
   TH1F *htot_linefail_cat5_2016_fit_s__66 = new TH1F("htot_linefail_cat5_2016_fit_s__66","wqq in cat5_2016_fail_cat5",23,40,201);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(1,3.370731e-05);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(2,3.370731e-05);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(3,20529.65);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(4,19299.09);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(5,18002.38);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(6,17206.64);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(7,16548.08);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(8,15522.19);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(9,14188.28);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(10,13259.56);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(11,12766.25);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(12,12244.05);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(13,11923.27);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(14,11630.82);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(15,11144.7);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(16,11193.18);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(17,10648.08);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(18,10441.04);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(19,10151.78);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(20,9779.766);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(21,9430.199);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(22,9133.575);
   htot_linefail_cat5_2016_fit_s__66->SetBinContent(23,8455.329);
   htot_linefail_cat5_2016_fit_s__66->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat5_2016_fit_s__66->SetFillColor(ci);
   htot_linefail_cat5_2016_fit_s__66->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat5_2016_fit_s__66->SetLineColor(ci);
   htot_linefail_cat5_2016_fit_s__66->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat5_2016_fit_s__66->SetMarkerColor(ci);
   htot_linefail_cat5_2016_fit_s__66->SetMarkerSize(0);
   htot_linefail_cat5_2016_fit_s__66->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat5_2016_fit_s__66->GetXaxis()->SetRange(2,23);
   htot_linefail_cat5_2016_fit_s__66->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat5_2016_fit_s__66->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat5_2016_fit_s__66->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat5_2016_fit_s__66->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat5_2016_fit_s__66->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat5_2016_fit_s__66->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat5_2016_fit_s__66->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat5_2016_fit_s__66->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat5_2016_fit_s__66->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat5_2016_fit_s__66->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat5_2016_fit_s__66->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat5_2016_fit_s__66->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat5_2016_fit_s__66->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat5_2016_fit_s__66->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat5_2016_fit_s__66->Draw("histsame");
   
   TH1F *qcd__67 = new TH1F("qcd__67","qcd in cat5_2016_fail_cat5",23,40,201);
   qcd__67->SetBinContent(3,20453.93);
   qcd__67->SetBinContent(4,19083.42);
   qcd__67->SetBinContent(5,17508.9);
   qcd__67->SetBinContent(6,16141.81);
   qcd__67->SetBinContent(7,15199.05);
   qcd__67->SetBinContent(8,14563.02);
   qcd__67->SetBinContent(9,13563.2);
   qcd__67->SetBinContent(10,12953.87);
   qcd__67->SetBinContent(11,12597.51);
   qcd__67->SetBinContent(12,12145.66);
   qcd__67->SetBinContent(13,11841.68);
   qcd__67->SetBinContent(14,11568.29);
   qcd__67->SetBinContent(15,11091.98);
   qcd__67->SetBinContent(16,11144.3);
   qcd__67->SetBinContent(17,10615.11);
   qcd__67->SetBinContent(18,10413.97);
   qcd__67->SetBinContent(19,10128.19);
   qcd__67->SetBinContent(20,9749.5);
   qcd__67->SetBinContent(21,9409.567);
   qcd__67->SetBinContent(22,9116.507);
   qcd__67->SetBinContent(23,8445.988);
   qcd__67->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__67->SetLineColor(ci);
   qcd__67->SetLineStyle(2);
   qcd__67->SetLineWidth(2);
   qcd__67->GetXaxis()->SetTitle("x");
   qcd__67->GetXaxis()->SetLabelFont(42);
   qcd__67->GetXaxis()->SetLabelSize(0.035);
   qcd__67->GetXaxis()->SetTitleSize(0.035);
   qcd__67->GetXaxis()->SetTitleFont(42);
   qcd__67->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__67->GetYaxis()->SetLabelFont(42);
   qcd__67->GetYaxis()->SetLabelSize(0.035);
   qcd__67->GetYaxis()->SetTitleSize(0.035);
   qcd__67->GetYaxis()->SetTitleOffset(0);
   qcd__67->GetYaxis()->SetTitleFont(42);
   qcd__67->GetZaxis()->SetLabelFont(42);
   qcd__67->GetZaxis()->SetLabelSize(0.035);
   qcd__67->GetZaxis()->SetTitleSize(0.035);
   qcd__67->GetZaxis()->SetTitleFont(42);
   qcd__67->Draw("hist sames");
   
   TH1F *htotfail_cat5_2016_fit_s__68 = new TH1F("htotfail_cat5_2016_fit_s__68","wqq in cat5_2016_fail_cat5",23,40,201);
   htotfail_cat5_2016_fit_s__68->SetBinContent(1,3.370731e-05);
   htotfail_cat5_2016_fit_s__68->SetBinContent(2,3.370731e-05);
   htotfail_cat5_2016_fit_s__68->SetBinContent(3,20529.65);
   htotfail_cat5_2016_fit_s__68->SetBinContent(4,19299.09);
   htotfail_cat5_2016_fit_s__68->SetBinContent(5,18002.38);
   htotfail_cat5_2016_fit_s__68->SetBinContent(6,17206.64);
   htotfail_cat5_2016_fit_s__68->SetBinContent(7,16548.08);
   htotfail_cat5_2016_fit_s__68->SetBinContent(8,15522.19);
   htotfail_cat5_2016_fit_s__68->SetBinContent(9,14188.28);
   htotfail_cat5_2016_fit_s__68->SetBinContent(10,13259.56);
   htotfail_cat5_2016_fit_s__68->SetBinContent(11,12766.25);
   htotfail_cat5_2016_fit_s__68->SetBinContent(12,12244.05);
   htotfail_cat5_2016_fit_s__68->SetBinContent(13,11923.27);
   htotfail_cat5_2016_fit_s__68->SetBinContent(14,11630.82);
   htotfail_cat5_2016_fit_s__68->SetBinContent(15,11144.7);
   htotfail_cat5_2016_fit_s__68->SetBinContent(16,11193.18);
   htotfail_cat5_2016_fit_s__68->SetBinContent(17,10648.08);
   htotfail_cat5_2016_fit_s__68->SetBinContent(18,10441.04);
   htotfail_cat5_2016_fit_s__68->SetBinContent(19,10151.78);
   htotfail_cat5_2016_fit_s__68->SetBinContent(20,9779.766);
   htotfail_cat5_2016_fit_s__68->SetBinContent(21,9430.199);
   htotfail_cat5_2016_fit_s__68->SetBinContent(22,9133.575);
   htotfail_cat5_2016_fit_s__68->SetBinContent(23,8455.329);
   htotfail_cat5_2016_fit_s__68->SetMinimum(0);
   htotfail_cat5_2016_fit_s__68->SetMaximum(30794.47);
   htotfail_cat5_2016_fit_s__68->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_s__68->SetFillColor(ci);
   htotfail_cat5_2016_fit_s__68->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_s__68->SetLineColor(ci);
   htotfail_cat5_2016_fit_s__68->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat5_2016_fit_s__68->SetMarkerColor(ci);
   htotfail_cat5_2016_fit_s__68->SetMarkerSize(0);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetRange(2,23);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetLabelOffset(100);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetTitleOffset(100);
   htotfail_cat5_2016_fit_s__68->GetXaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s__68->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat5_2016_fit_s__68->GetYaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s__68->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat5_2016_fit_s__68->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat5_2016_fit_s__68->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat5_2016_fit_s__68->GetYaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s__68->GetZaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s__68->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_s__68->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_s__68->GetZaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s__68->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis17[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_17 = new TH1F("hstackMC_stack_17","hstackMC",23, xAxis17);
   hstackMC_stack_17->SetMinimum(0);
   hstackMC_stack_17->SetMaximum(1418.623);
   hstackMC_stack_17->SetDirectory(0);
   hstackMC_stack_17->SetStats(0);
   hstackMC_stack_17->SetLineStyle(0);
   hstackMC_stack_17->SetMarkerStyle(20);
   hstackMC_stack_17->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_17->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_17->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_17->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_17->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_17->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_17->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_17->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_17->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_17->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_17->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_17->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_17->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_17->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_17->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_17->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_17->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_17);
   
   Double_t xAxis18[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat5_2016_fail_cat5",23, xAxis18);
   tqq_stack_1->SetBinContent(3,16.93766);
   tqq_stack_1->SetBinContent(4,28.93391);
   tqq_stack_1->SetBinContent(5,47.26347);
   tqq_stack_1->SetBinContent(6,83.63379);
   tqq_stack_1->SetBinContent(7,110.2384);
   tqq_stack_1->SetBinContent(8,66.71066);
   tqq_stack_1->SetBinContent(9,47.06341);
   tqq_stack_1->SetBinContent(10,49.34932);
   tqq_stack_1->SetBinContent(11,50.68312);
   tqq_stack_1->SetBinContent(12,60.90294);
   tqq_stack_1->SetBinContent(13,66.93946);
   tqq_stack_1->SetBinContent(14,57.08308);
   tqq_stack_1->SetBinContent(15,51.5867);
   tqq_stack_1->SetBinContent(16,48.88578);
   tqq_stack_1->SetBinContent(17,32.96437);
   tqq_stack_1->SetBinContent(18,27.07164);
   tqq_stack_1->SetBinContent(19,23.5922);
   tqq_stack_1->SetBinContent(20,30.26517);
   tqq_stack_1->SetBinContent(21,20.63144);
   tqq_stack_1->SetBinContent(22,17.068);
   tqq_stack_1->SetBinContent(23,9.340532);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat5_2016_fail_cat5",23,40,201);
   wqq_stack_2->SetBinContent(1,2.347124e-05);
   wqq_stack_2->SetBinContent(2,2.347124e-05);
   wqq_stack_2->SetBinContent(3,45.62211);
   wqq_stack_2->SetBinContent(4,156.7352);
   wqq_stack_2->SetBinContent(5,377.7208);
   wqq_stack_2->SetBinContent(6,850.9778);
   wqq_stack_2->SetBinContent(7,1013.84);
   wqq_stack_2->SetBinContent(8,540.4876);
   wqq_stack_2->SetBinContent(9,245.1315);
   wqq_stack_2->SetBinContent(10,73.63976);
   wqq_stack_2->SetBinContent(11,29.43485);
   wqq_stack_2->SetBinContent(12,12.09323);
   wqq_stack_2->SetBinContent(13,6.227366);
   wqq_stack_2->SetBinContent(14,1.124512);
   wqq_stack_2->SetBinContent(15,2.347124e-05);
   wqq_stack_2->SetBinContent(16,2.347124e-05);
   wqq_stack_2->SetBinContent(17,2.347124e-05);
   wqq_stack_2->SetBinContent(18,2.347124e-05);
   wqq_stack_2->SetBinContent(19,2.347124e-05);
   wqq_stack_2->SetBinContent(20,2.347124e-05);
   wqq_stack_2->SetBinContent(21,2.347124e-05);
   wqq_stack_2->SetBinContent(22,2.347124e-05);
   wqq_stack_2->SetBinContent(23,2.347124e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat5_2016_fail_cat5",23,40,201);
   zqq_stack_3->SetBinContent(1,1.023607e-05);
   zqq_stack_3->SetBinContent(2,1.023607e-05);
   zqq_stack_3->SetBinContent(3,13.16338);
   zqq_stack_3->SetBinContent(4,29.99737);
   zqq_stack_3->SetBinContent(5,68.50477);
   zqq_stack_3->SetBinContent(6,130.2193);
   zqq_stack_3->SetBinContent(7,224.9582);
   zqq_stack_3->SetBinContent(8,351.9712);
   zqq_stack_3->SetBinContent(9,332.8788);
   zqq_stack_3->SetBinContent(10,182.7022);
   zqq_stack_3->SetBinContent(11,88.62881);
   zqq_stack_3->SetBinContent(12,25.3998);
   zqq_stack_3->SetBinContent(13,8.425117);
   zqq_stack_3->SetBinContent(14,4.318442);
   zqq_stack_3->SetBinContent(15,1.128129);
   zqq_stack_3->SetBinContent(16,1.023607e-05);
   zqq_stack_3->SetBinContent(17,1.023607e-05);
   zqq_stack_3->SetBinContent(18,1.023607e-05);
   zqq_stack_3->SetBinContent(19,1.023607e-05);
   zqq_stack_3->SetBinContent(20,1.023607e-05);
   zqq_stack_3->SetBinContent(21,1.023607e-05);
   zqq_stack_3->SetBinContent(22,1.023607e-05);
   zqq_stack_3->SetBinContent(23,1.023607e-05);
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
   
   TH1F *hsigfail_cat5_2016_fit_s_stack_4 = new TH1F("hsigfail_cat5_2016_fit_s_stack_4","ggH_hbb in cat5_2016_fail_cat5",23,40,201);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(1,3.705637e-07);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(2,3.705637e-07);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(3,1.038721);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(4,0.8585911);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(5,0.6370202);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(6,1.571872);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(7,2.032889);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(8,3.020081);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(9,3.712971);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(10,5.888231);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(11,6.750791);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(12,7.7294);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(13,6.499591);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(14,5.341399);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(15,3.401661);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(16,1.933062);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(17,0.8547446);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(18,0.3830908);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(19,0.1921137);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(20,0.4168772);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(21,0.1163168);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(22,0.4999121);
   hsigfail_cat5_2016_fit_s_stack_4->SetBinContent(23,0.05833676);
   hsigfail_cat5_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat5_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat5_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat5_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat5_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat5_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat5_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat5_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat5_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat5_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat5_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat5_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3017[23] = {
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
   Double_t data_copy_fy3017[23] = {
   0,
   0,
   20513,
   19300,
   17993,
   17206,
   16553,
   15506,
   14214,
   13248,
   12778,
   12251,
   11931,
   11619,
   11161,
   11178,
   10645,
   10440,
   10170,
   9773,
   9436,
   9150,
   8445};
   Double_t data_copy_felx3017[23] = {
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
   Double_t data_copy_fely3017[23] = {
   1.841055,
   1.841055,
   144.2291,
   139.9299,
   135.1434,
   132.177,
   129.6639,
   125.5285,
   120.2279,
   116.1054,
   114.0452,
   111.6897,
   110.2346,
   108.7969,
   106.6511,
   106.7315,
   104.1801,
   103.1818,
   101.8519,
   99.86402,
   98.14463,
   96.66121,
   92.90232};
   Double_t data_copy_fehx3017[23] = {
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
   Double_t data_copy_fehy3017[23] = {
   0,
   0,
   143.2255,
   138.9262,
   134.1396,
   131.1732,
   128.6599,
   124.5244,
   119.2237,
   115.101,
   113.0408,
   110.6851,
   109.2299,
   107.7922,
   105.6463,
   105.7268,
   103.1752,
   102.1769,
   100.8469,
   98.85893,
   97.13945,
   95.65595,
   91.89685};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3017,data_copy_fy3017,data_copy_felx3017,data_copy_fehx3017,data_copy_fely3017,data_copy_fehy3017);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat5_2016_fail_cat5");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3017 = new TH1F("Graph_data_copy3017","WH_hbb in cat5_2016_fail_cat5",100,28.1,212.9);
   Graph_data_copy3017->SetMinimum(0);
   Graph_data_copy3017->SetMaximum(22722.03);
   Graph_data_copy3017->SetDirectory(0);
   Graph_data_copy3017->SetStats(0);
   Graph_data_copy3017->SetLineStyle(0);
   Graph_data_copy3017->SetMarkerStyle(20);
   Graph_data_copy3017->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3017->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3017->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3017->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3017->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3017->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3017->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3017->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3017->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3017->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3017->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3017);
   
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
   entry=leg->AddEntry("htotfail_cat5_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat5_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat5_2016_fit_s_copy__69 = new TH1F("htotfail_cat5_2016_fit_s_copy__69","wqq in cat5_2016_fail_cat5",23,40,201);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(1,3.370731e-05);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(2,3.370731e-05);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(3,20529.65);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(4,19299.09);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(5,18002.38);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(6,17206.64);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(7,16548.08);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(8,15522.19);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(9,14188.28);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(10,13259.56);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(11,12766.25);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(12,12244.05);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(13,11923.27);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(14,11630.82);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(15,11144.7);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(16,11193.18);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(17,10648.08);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(18,10441.04);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(19,10151.78);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(20,9779.766);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(21,9430.199);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(22,9133.575);
   htotfail_cat5_2016_fit_s_copy__69->SetBinContent(23,8455.329);
   htotfail_cat5_2016_fit_s_copy__69->SetMaximum(30794.47);
   htotfail_cat5_2016_fit_s_copy__69->SetEntries(92);
   htotfail_cat5_2016_fit_s_copy__69->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_s_copy__69->SetFillColor(ci);
   htotfail_cat5_2016_fit_s_copy__69->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_s_copy__69->SetLineColor(ci);
   htotfail_cat5_2016_fit_s_copy__69->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat5_2016_fit_s_copy__69->SetMarkerColor(ci);
   htotfail_cat5_2016_fit_s_copy__69->SetMarkerSize(0);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetRange(2,23);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetLabelOffset(100);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetTitleOffset(100);
   htotfail_cat5_2016_fit_s_copy__69->GetXaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s_copy__69->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat5_2016_fit_s_copy__69->GetYaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s_copy__69->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat5_2016_fit_s_copy__69->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat5_2016_fit_s_copy__69->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat5_2016_fit_s_copy__69->GetYaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s_copy__69->GetZaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_s_copy__69->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_s_copy__69->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_s_copy__69->GetZaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_s_copy__69->Draw("sameaxis");
   p12fail_cat5_2016_fit_s->Modified();
   cfail_cat5_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat5_2016_fit_s
   TPad *p22fail_cat5_2016_fit_s = new TPad("p22fail_cat5_2016_fit_s", "p22fail_cat5_2016_fit_s",0,0,1,0.3);
   p22fail_cat5_2016_fit_s->Draw();
   p22fail_cat5_2016_fit_s->cd();
   p22fail_cat5_2016_fit_s->Range(13.7027,-13.9482,221.8108,15.87912);
   p22fail_cat5_2016_fit_s->SetFillColor(0);
   p22fail_cat5_2016_fit_s->SetBorderMode(0);
   p22fail_cat5_2016_fit_s->SetBorderSize(2);
   p22fail_cat5_2016_fit_s->SetTickx(1);
   p22fail_cat5_2016_fit_s->SetTicky(1);
   p22fail_cat5_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat5_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat5_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat5_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat5_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat5_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat5_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat5_2016_fit_s__70 = new TH1F("iOneWithErrorsfail_cat5_2016_fit_s__70","",23,40,201);
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetMinimum(-5);
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetMaximum(14.38776);
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetFillColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetLineColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetMarkerColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_s__70->SetMarkerSize(0);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_s__70->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s__70->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_18 = new TH1F("hstack_stack_18","hstack",23,40,201);
   hstack_stack_18->SetMinimum(0);
   hstack_stack_18->SetMaximum(10.12648);
   hstack_stack_18->SetDirectory(0);
   hstack_stack_18->SetStats(0);
   hstack_stack_18->SetLineStyle(0);
   hstack_stack_18->SetMarkerStyle(20);
   hstack_stack_18->GetXaxis()->SetLabelFont(42);
   hstack_stack_18->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_18->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_18->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_18->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_18->GetXaxis()->SetTitleFont(42);
   hstack_stack_18->GetYaxis()->SetLabelFont(42);
   hstack_stack_18->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_18->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_18->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_18->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_18->GetYaxis()->SetTitleFont(42);
   hstack_stack_18->GetZaxis()->SetLabelFont(42);
   hstack_stack_18->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_18->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_18->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_18->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_18);
   
   
   TH1F *sigHistResidualwqqfail_cat5_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat5_2016_fit_s_stack_1","wqq in cat5_2016_fail_cat5",23,40,201);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(3,0.3185334);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(4,1.12819);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(5,2.815878);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(6,6.487436);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(7,7.879995);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(8,4.340414);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(9,2.056064);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(10,0.6397839);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(11,0.2603914);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(12,0.1092579);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(13,0.05701153);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(14,0.01043222);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(15,2.221681e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(16,2.219991e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(17,2.274892e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(18,2.297118e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(19,2.327412e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(20,2.374216e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(21,2.416242e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(22,2.453715e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetBinContent(23,2.554086e-07);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat5_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat5_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat5_2016_fit_s_stack_2","zqq in cat5_2016_fail_cat5",23,40,201);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(3,0.09190663);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(4,0.215923);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(5,0.5106974);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(6,0.992728);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(7,1.748471);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(8,2.826523);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(9,2.792054);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(10,1.587321);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(11,0.7840428);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(12,0.229478);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(13,0.07713193);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(14,0.04006264);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(15,0.01067836);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(16,9.681625e-08);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(17,9.921054e-08);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(18,1.001799e-07);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(19,1.01501e-07);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(20,1.035422e-07);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(21,1.05375e-07);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(22,1.070092e-07);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetBinContent(23,1.113865e-07);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat5_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3","ggH_hbb in cat5_2016_fail_cat5",23,40,201);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(3,0.007252344);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(4,0.006180194);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(5,0.004748933);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(6,0.01198318);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(7,0.01580048);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(8,0.02425291);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(9,0.03114291);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(10,0.05115708);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(11,0.05971996);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(12,0.06983233);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(13,0.05950375);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(14,0.04955272);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(15,0.03219857);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(16,0.01828356);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(17,0.008284398);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(18,0.00374929);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(19,0.001905003);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(20,0.004216889);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(21,0.001197421);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(22,0.005226147);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetBinContent(23,0.000634807);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat5_2016_fit_sfail_cat5_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat5_2016_fit_s__71 = new TH1F("iOneWithErrorsLinefail_cat5_2016_fit_s__71","",23,40,201);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetFillColor(ci);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetLineColor(ci);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_s__71->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat5_2016_fit_s_fx3018[23] = {
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_s_fy3018[23] = {
   0,
   0,
   0.2921514,
   1.340976,
   3.232417,
   7.418531,
   9.591839,
   6.980604,
   5.021575,
   2.108302,
   1.13822,
   0.3978746,
   0.2030649,
   -0.05914155,
   0.163418,
   -0.1435932,
   -0.02984342,
   -0.01017881,
   0.1788749,
   -0.06843717,
   0.05910442,
   0.1699214,
   -0.1123989};
   Double_t Graph_from_iRatiofail_cat5_2016_fit_s_felx3018[23] = {
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_s_fely3018[23] = {
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
   1,
   1,
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_s_fehx3018[23] = {
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_s_fehy3018[23] = {
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
   1,
   1,
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat5_2016_fit_s_fx3018,Graph_from_iRatiofail_cat5_2016_fit_s_fy3018,Graph_from_iRatiofail_cat5_2016_fit_s_felx3018,Graph_from_iRatiofail_cat5_2016_fit_s_fehx3018,Graph_from_iRatiofail_cat5_2016_fit_s_fely3018,Graph_from_iRatiofail_cat5_2016_fit_s_fehy3018);
   grae->SetName("Graph_from_iRatiofail_cat5_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018 = new TH1F("Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->SetMinimum(-2.317136);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->SetMaximum(11.76538);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->SetStats(0);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat5_2016_fit_s3018);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat5_2016_fit_s_copy__72 = new TH1F("iOneWithErrorsfail_cat5_2016_fit_s_copy__72","",23,40,201);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetMinimum(-5);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetMaximum(14.38776);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetEntries(184);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetFillColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetLineColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetMarkerColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->SetMarkerSize(0);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_s_copy__72->Draw("sameaxis");
   p22fail_cat5_2016_fit_s->Modified();
   cfail_cat5_2016_fit_s->cd();
   cfail_cat5_2016_fit_s->Modified();
   cfail_cat5_2016_fit_s->cd();
   cfail_cat5_2016_fit_s->SetSelected(cfail_cat5_2016_fit_s);
}
