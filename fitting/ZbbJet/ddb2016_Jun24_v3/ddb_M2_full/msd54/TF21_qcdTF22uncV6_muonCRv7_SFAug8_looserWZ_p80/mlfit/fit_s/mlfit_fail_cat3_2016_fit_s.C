void mlfit_fail_cat3_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat3_2016_fit_s/cfail_cat3_2016_fit_s
//=========  (Mon Sep 30 17:21:41 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat3_2016_fit_s = new TCanvas("cfail_cat3_2016_fit_s", "cfail_cat3_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat3_2016_fit_s->SetHighLightColor(2);
   cfail_cat3_2016_fit_s->Range(0,0,1,1);
   cfail_cat3_2016_fit_s->SetFillColor(0);
   cfail_cat3_2016_fit_s->SetBorderMode(0);
   cfail_cat3_2016_fit_s->SetBorderSize(2);
   cfail_cat3_2016_fit_s->SetTickx(1);
   cfail_cat3_2016_fit_s->SetTicky(1);
   cfail_cat3_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat3_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat3_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat3_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat3_2016_fit_s
   TPad *p12fail_cat3_2016_fit_s = new TPad("p12fail_cat3_2016_fit_s", "p12fail_cat3_2016_fit_s",0,0.3,1,1);
   p12fail_cat3_2016_fit_s->Draw();
   p12fail_cat3_2016_fit_s->cd();
   p12fail_cat3_2016_fit_s->Range(13.7027,-1577.495,221.8108,77297.26);
   p12fail_cat3_2016_fit_s->SetFillColor(0);
   p12fail_cat3_2016_fit_s->SetBorderMode(0);
   p12fail_cat3_2016_fit_s->SetBorderSize(2);
   p12fail_cat3_2016_fit_s->SetTickx(1);
   p12fail_cat3_2016_fit_s->SetTicky(1);
   p12fail_cat3_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat3_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat3_2016_fit_s__33 = new TH1F("htotfail_cat3_2016_fit_s__33","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_s__33->SetBinContent(1,6.094329e-05);
   htotfail_cat3_2016_fit_s__33->SetBinContent(2,6.094329e-05);
   htotfail_cat3_2016_fit_s__33->SetBinContent(3,46273.19);
   htotfail_cat3_2016_fit_s__33->SetBinContent(4,42763.32);
   htotfail_cat3_2016_fit_s__33->SetBinContent(5,40004.68);
   htotfail_cat3_2016_fit_s__33->SetBinContent(6,38584.94);
   htotfail_cat3_2016_fit_s__33->SetBinContent(7,37537.54);
   htotfail_cat3_2016_fit_s__33->SetBinContent(8,35352.45);
   htotfail_cat3_2016_fit_s__33->SetBinContent(9,33136.49);
   htotfail_cat3_2016_fit_s__33->SetBinContent(10,31728.41);
   htotfail_cat3_2016_fit_s__33->SetBinContent(11,30530.99);
   htotfail_cat3_2016_fit_s__33->SetBinContent(12,29356.35);
   htotfail_cat3_2016_fit_s__33->SetBinContent(13,28848.43);
   htotfail_cat3_2016_fit_s__33->SetBinContent(14,27749.8);
   htotfail_cat3_2016_fit_s__33->SetBinContent(15,27003.66);
   htotfail_cat3_2016_fit_s__33->SetBinContent(16,25300.36);
   htotfail_cat3_2016_fit_s__33->SetBinContent(17,23475.6);
   htotfail_cat3_2016_fit_s__33->SetBinContent(18,21840.88);
   htotfail_cat3_2016_fit_s__33->SetBinContent(19,19829.62);
   htotfail_cat3_2016_fit_s__33->SetBinContent(20,18409.1);
   htotfail_cat3_2016_fit_s__33->SetBinContent(21,16308.56);
   htotfail_cat3_2016_fit_s__33->SetBinContent(22,14267.42);
   htotfail_cat3_2016_fit_s__33->SetBinContent(23,12721.18);
   htotfail_cat3_2016_fit_s__33->SetMinimum(0);
   htotfail_cat3_2016_fit_s__33->SetMaximum(69409.78);
   htotfail_cat3_2016_fit_s__33->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__33->SetFillColor(ci);
   htotfail_cat3_2016_fit_s__33->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__33->SetLineColor(ci);
   htotfail_cat3_2016_fit_s__33->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_s__33->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_s__33->SetMarkerSize(0);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__33->Draw("");
   
   TH1F *htot_linefail_cat3_2016_fit_s__34 = new TH1F("htot_linefail_cat3_2016_fit_s__34","wqq in cat3_2016_fail_cat3",23,40,201);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(1,6.094329e-05);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(2,6.094329e-05);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(3,46273.19);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(4,42763.32);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(5,40004.68);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(6,38584.94);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(7,37537.54);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(8,35352.45);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(9,33136.49);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(10,31728.41);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(11,30530.99);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(12,29356.35);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(13,28848.43);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(14,27749.8);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(15,27003.66);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(16,25300.36);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(17,23475.6);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(18,21840.88);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(19,19829.62);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(20,18409.1);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(21,16308.56);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(22,14267.42);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(23,12721.18);
   htot_linefail_cat3_2016_fit_s__34->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat3_2016_fit_s__34->SetFillColor(ci);
   htot_linefail_cat3_2016_fit_s__34->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat3_2016_fit_s__34->SetLineColor(ci);
   htot_linefail_cat3_2016_fit_s__34->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat3_2016_fit_s__34->SetMarkerColor(ci);
   htot_linefail_cat3_2016_fit_s__34->SetMarkerSize(0);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetRange(2,23);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_s__34->Draw("histsame");
   
   TH1F *qcd__35 = new TH1F("qcd__35","qcd in cat3_2016_fail_cat3",23,40,201);
   qcd__35->SetBinContent(3,46147.5);
   qcd__35->SetBinContent(4,42443.95);
   qcd__35->SetBinContent(5,39298.88);
   qcd__35->SetBinContent(6,36784.43);
   qcd__35->SetBinContent(7,35095.51);
   qcd__35->SetBinContent(8,33412.6);
   qcd__35->SetBinContent(9,31829.58);
   qcd__35->SetBinContent(10,31097.76);
   qcd__35->SetBinContent(11,30238.79);
   qcd__35->SetBinContent(12,29200.11);
   qcd__35->SetBinContent(13,28710.82);
   qcd__35->SetBinContent(14,27628.84);
   qcd__35->SetBinContent(15,26895.54);
   qcd__35->SetBinContent(16,25213.78);
   qcd__35->SetBinContent(17,23402.6);
   qcd__35->SetBinContent(18,21785.87);
   qcd__35->SetBinContent(19,19782.2);
   qcd__35->SetBinContent(20,18369.5);
   qcd__35->SetBinContent(21,16281.51);
   qcd__35->SetBinContent(22,14248.74);
   qcd__35->SetBinContent(23,12708);
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
   
   TH1F *htotfail_cat3_2016_fit_s__36 = new TH1F("htotfail_cat3_2016_fit_s__36","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_s__36->SetBinContent(1,6.094329e-05);
   htotfail_cat3_2016_fit_s__36->SetBinContent(2,6.094329e-05);
   htotfail_cat3_2016_fit_s__36->SetBinContent(3,46273.19);
   htotfail_cat3_2016_fit_s__36->SetBinContent(4,42763.32);
   htotfail_cat3_2016_fit_s__36->SetBinContent(5,40004.68);
   htotfail_cat3_2016_fit_s__36->SetBinContent(6,38584.94);
   htotfail_cat3_2016_fit_s__36->SetBinContent(7,37537.54);
   htotfail_cat3_2016_fit_s__36->SetBinContent(8,35352.45);
   htotfail_cat3_2016_fit_s__36->SetBinContent(9,33136.49);
   htotfail_cat3_2016_fit_s__36->SetBinContent(10,31728.41);
   htotfail_cat3_2016_fit_s__36->SetBinContent(11,30530.99);
   htotfail_cat3_2016_fit_s__36->SetBinContent(12,29356.35);
   htotfail_cat3_2016_fit_s__36->SetBinContent(13,28848.43);
   htotfail_cat3_2016_fit_s__36->SetBinContent(14,27749.8);
   htotfail_cat3_2016_fit_s__36->SetBinContent(15,27003.66);
   htotfail_cat3_2016_fit_s__36->SetBinContent(16,25300.36);
   htotfail_cat3_2016_fit_s__36->SetBinContent(17,23475.6);
   htotfail_cat3_2016_fit_s__36->SetBinContent(18,21840.88);
   htotfail_cat3_2016_fit_s__36->SetBinContent(19,19829.62);
   htotfail_cat3_2016_fit_s__36->SetBinContent(20,18409.1);
   htotfail_cat3_2016_fit_s__36->SetBinContent(21,16308.56);
   htotfail_cat3_2016_fit_s__36->SetBinContent(22,14267.42);
   htotfail_cat3_2016_fit_s__36->SetBinContent(23,12721.18);
   htotfail_cat3_2016_fit_s__36->SetMinimum(0);
   htotfail_cat3_2016_fit_s__36->SetMaximum(69409.78);
   htotfail_cat3_2016_fit_s__36->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__36->SetFillColor(ci);
   htotfail_cat3_2016_fit_s__36->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__36->SetLineColor(ci);
   htotfail_cat3_2016_fit_s__36->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_s__36->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_s__36->SetMarkerSize(0);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__36->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis9[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_9 = new TH1F("hstackMC_stack_9","hstackMC",23, xAxis9);
   hstackMC_stack_9->SetMinimum(0);
   hstackMC_stack_9->SetMaximum(2568.208);
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
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat3_2016_fail_cat3",23, xAxis10);
   tqq_stack_1->SetBinContent(3,42.67103);
   tqq_stack_1->SetBinContent(4,52.59727);
   tqq_stack_1->SetBinContent(5,73.95114);
   tqq_stack_1->SetBinContent(6,168.1442);
   tqq_stack_1->SetBinContent(7,191.7123);
   tqq_stack_1->SetBinContent(8,139.9238);
   tqq_stack_1->SetBinContent(9,91.14913);
   tqq_stack_1->SetBinContent(10,89.63422);
   tqq_stack_1->SetBinContent(11,99.1143);
   tqq_stack_1->SetBinContent(12,110.6379);
   tqq_stack_1->SetBinContent(13,119.0702);
   tqq_stack_1->SetBinContent(14,109.4416);
   tqq_stack_1->SetBinContent(15,101.8967);
   tqq_stack_1->SetBinContent(16,83.69218);
   tqq_stack_1->SetBinContent(17,68.98766);
   tqq_stack_1->SetBinContent(18,52.79793);
   tqq_stack_1->SetBinContent(19,47.41137);
   tqq_stack_1->SetBinContent(20,38.50673);
   tqq_stack_1->SetBinContent(21,27.05476);
   tqq_stack_1->SetBinContent(22,18.68656);
   tqq_stack_1->SetBinContent(23,13.18087);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat3_2016_fail_cat3",23,40,201);
   wqq_stack_2->SetBinContent(1,4.275796e-05);
   wqq_stack_2->SetBinContent(2,4.275796e-05);
   wqq_stack_2->SetBinContent(3,69.27964);
   wqq_stack_2->SetBinContent(4,240.7736);
   wqq_stack_2->SetBinContent(5,576.5488);
   wqq_stack_2->SetBinContent(6,1432.366);
   wqq_stack_2->SetBinContent(7,1834.657);
   wqq_stack_2->SetBinContent(8,1124.656);
   wqq_stack_2->SetBinContent(9,590.0413);
   wqq_stack_2->SetBinContent(10,184.1905);
   wqq_stack_2->SetBinContent(11,36.22143);
   wqq_stack_2->SetBinContent(12,12.13627);
   wqq_stack_2->SetBinContent(13,5.139159);
   wqq_stack_2->SetBinContent(14,2.269655);
   wqq_stack_2->SetBinContent(15,4.275796e-05);
   wqq_stack_2->SetBinContent(16,4.275796e-05);
   wqq_stack_2->SetBinContent(17,4.275796e-05);
   wqq_stack_2->SetBinContent(18,4.275796e-05);
   wqq_stack_2->SetBinContent(19,4.275796e-05);
   wqq_stack_2->SetBinContent(20,4.275796e-05);
   wqq_stack_2->SetBinContent(21,4.275796e-05);
   wqq_stack_2->SetBinContent(22,4.275796e-05);
   wqq_stack_2->SetBinContent(23,4.275796e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat3_2016_fail_cat3",23,40,201);
   zqq_stack_3->SetBinContent(1,1.818533e-05);
   zqq_stack_3->SetBinContent(2,1.818533e-05);
   zqq_stack_3->SetBinContent(3,13.7325);
   zqq_stack_3->SetBinContent(4,26.00779);
   zqq_stack_3->SetBinContent(5,55.29771);
   zqq_stack_3->SetBinContent(6,199.9968);
   zqq_stack_3->SetBinContent(7,415.6613);
   zqq_stack_3->SetBinContent(8,675.2716);
   zqq_stack_3->SetBinContent(9,625.7145);
   zqq_stack_3->SetBinContent(10,356.8235);
   zqq_stack_3->SetBinContent(11,156.8649);
   zqq_stack_3->SetBinContent(12,33.46872);
   zqq_stack_3->SetBinContent(13,13.39261);
   zqq_stack_3->SetBinContent(14,9.256289);
   zqq_stack_3->SetBinContent(15,6.216865);
   zqq_stack_3->SetBinContent(16,2.883848);
   zqq_stack_3->SetBinContent(17,4.011364);
   zqq_stack_3->SetBinContent(18,2.217432);
   zqq_stack_3->SetBinContent(19,1.818533e-05);
   zqq_stack_3->SetBinContent(20,1.086837);
   zqq_stack_3->SetBinContent(21,1.818533e-05);
   zqq_stack_3->SetBinContent(22,1.818533e-05);
   zqq_stack_3->SetBinContent(23,1.818533e-05);
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
   
   TH1F *hsigfail_cat3_2016_fit_s_stack_4 = new TH1F("hsigfail_cat3_2016_fit_s_stack_4","ggH_hbb in cat3_2016_fail_cat3",23,40,201);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(1,6.487422e-07);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(2,6.487422e-07);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(3,0.9211598);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(4,1.501464);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(5,1.360025);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(6,2.933614);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(7,3.881919);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(8,2.894312);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(9,4.414291);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(10,5.941792);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(11,9.832102);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(12,16.25173);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(13,16.10658);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(14,10.18922);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(15,6.726162);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(16,2.499847);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(17,2.569864);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(18,1.114231);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(19,1.60498);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(20,0.8515928);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(21,0.7665514);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(22,0.1632494);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(23,0.1527713);
   hsigfail_cat3_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat3_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat3_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat3_2016_fit_s_stack_4,"");
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
   0,
   46247,
   42792,
   40002,
   38588,
   37522,
   35351,
   33170,
   31747,
   30560,
   29399,
   28895,
   27745,
   27004,
   25285,
   23494,
   21863,
   19838,
   18392,
   16338,
   14272,
   12701};
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
   1.841055,
   216.0574,
   207.8684,
   201.011,
   197.4443,
   194.7119,
   189.0245,
   183.1321,
   179.1826,
   175.8199,
   172.467,
   170.991,
   167.5739,
   165.3345,
   160.0181,
   154.283,
   148.8669,
   141.8529,
   136.6225,
   128.8256,
   120.4709,
   113.7041};
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
   0,
   215.055,
   206.8659,
   200.0085,
   196.4417,
   193.7093,
   188.0218,
   182.1294,
   178.1798,
   174.817,
   171.4641,
   169.988,
   166.5709,
   164.3315,
   159.015,
   153.2798,
   147.8635,
   140.8493,
   135.6188,
   127.8216,
   119.4667,
   112.6997};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3009,data_copy_fy3009,data_copy_felx3009,data_copy_fehx3009,data_copy_fely3009,data_copy_fehy3009);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat3_2016_fail_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3009 = new TH1F("Graph_data_copy3009","WH_hbb in cat3_2016_fail_cat3",100,28.1,212.9);
   Graph_data_copy3009->SetMinimum(0);
   Graph_data_copy3009->SetMaximum(51108.44);
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
   entry=leg->AddEntry("htotfail_cat3_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat3_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"550 < p_{T} < 600 GeV");
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
   
   TH1F *htotfail_cat3_2016_fit_s_copy__37 = new TH1F("htotfail_cat3_2016_fit_s_copy__37","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(1,6.094329e-05);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(2,6.094329e-05);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(3,46273.19);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(4,42763.32);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(5,40004.68);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(6,38584.94);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(7,37537.54);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(8,35352.45);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(9,33136.49);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(10,31728.41);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(11,30530.99);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(12,29356.35);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(13,28848.43);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(14,27749.8);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(15,27003.66);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(16,25300.36);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(17,23475.6);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(18,21840.88);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(19,19829.62);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(20,18409.1);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(21,16308.56);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(22,14267.42);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(23,12721.18);
   htotfail_cat3_2016_fit_s_copy__37->SetMaximum(69409.78);
   htotfail_cat3_2016_fit_s_copy__37->SetEntries(92);
   htotfail_cat3_2016_fit_s_copy__37->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s_copy__37->SetFillColor(ci);
   htotfail_cat3_2016_fit_s_copy__37->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s_copy__37->SetLineColor(ci);
   htotfail_cat3_2016_fit_s_copy__37->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_s_copy__37->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_s_copy__37->SetMarkerSize(0);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s_copy__37->Draw("sameaxis");
   p12fail_cat3_2016_fit_s->Modified();
   cfail_cat3_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat3_2016_fit_s
   TPad *p22fail_cat3_2016_fit_s = new TPad("p22fail_cat3_2016_fit_s", "p22fail_cat3_2016_fit_s",0,0,1,0.3);
   p22fail_cat3_2016_fit_s->Draw();
   p22fail_cat3_2016_fit_s->cd();
   p22fail_cat3_2016_fit_s->Range(13.7027,-15.25357,221.8108,18.92499);
   p22fail_cat3_2016_fit_s->SetFillColor(0);
   p22fail_cat3_2016_fit_s->SetBorderMode(0);
   p22fail_cat3_2016_fit_s->SetBorderSize(2);
   p22fail_cat3_2016_fit_s->SetTickx(1);
   p22fail_cat3_2016_fit_s->SetTicky(1);
   p22fail_cat3_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat3_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat3_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat3_2016_fit_s__38 = new TH1F("iOneWithErrorsfail_cat3_2016_fit_s__38","",23,40,201);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMinimum(-5);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMaximum(17.21606);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetFillColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetLineColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMarkerColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMarkerSize(0);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_10 = new TH1F("hstack_stack_10","hstack",23,40,201);
   hstack_stack_10->SetMinimum(0);
   hstack_stack_10->SetMaximum(12.21888);
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
   
   
   TH1F *sigHistResidualwqqfail_cat3_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat3_2016_fit_s_stack_1","wqq in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(3,0.3221484);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(4,1.163911);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(5,2.882622);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(6,7.29156);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(7,9.471188);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(8,5.98152);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(9,3.239683);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(10,1.033734);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(11,0.2071962);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(12,0.07078025);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(13,0.03023248);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(14,0.01362576);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(15,2.601934e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(16,2.688926e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(17,2.789537e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(18,2.891719e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(19,3.035724e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(20,3.152804e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(21,3.345127e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(22,3.57907e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(23,3.793974e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat3_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat3_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat3_2016_fit_s_stack_2","zqq in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(3,0.06385577);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(4,0.1257229);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(5,0.2764768);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(6,1.018098);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(7,2.145799);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(8,3.591454);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(9,3.43555);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(10,2.002604);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(11,0.8973088);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(12,0.1951937);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(13,0.0787856);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(14,0.05556966);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(15,0.03783125);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(16,0.0181357);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(17,0.02617022);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(18,0.01499648);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(19,1.29112e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(20,0.008013912);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(21,1.422711e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(22,1.52221e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(23,1.61361e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat3_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3","ggH_hbb in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(3,0.004283368);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(4,0.007258152);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(5,0.006799837);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(6,0.01493377);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(7,0.02003992);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(8,0.01539349);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(9,0.02423712);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(10,0.03334717);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(11,0.05624225);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(12,0.09478214);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(13,0.09475131);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(14,0.06117047);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(15,0.04093046);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(16,0.01572083);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(17,0.01676584);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(18,0.007535539);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(19,0.01139502);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(20,0.006279312);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(21,0.005997039);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(22,0.001366485);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(23,0.001355561);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat3_2016_fit_s__39 = new TH1F("iOneWithErrorsLinefail_cat3_2016_fit_s__39","",23,40,201);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetFillColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetLineColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fx3010[23] = {
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fy3010[23] = {
   0,
   0,
   0.2630052,
   1.421366,
   3.130017,
   8.282954,
   11.47737,
   9.514537,
   6.821673,
   3.123101,
   1.263178,
   0.5117146,
   0.3807539,
   0.0401059,
   0.03968044,
   -0.07844928,
   0.1452788,
   0.1634613,
   0.05910889,
   -0.1180353,
   0.2284915,
   0.03799382,
   -0.1790399};
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_felx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fely3010[23] = {
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fehx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fehy3010[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat3_2016_fit_s_fx3010,Graph_from_iRatiofail_cat3_2016_fit_s_fy3010,Graph_from_iRatiofail_cat3_2016_fit_s_felx3010,Graph_from_iRatiofail_cat3_2016_fit_s_fehx3010,Graph_from_iRatiofail_cat3_2016_fit_s_fely3010,Graph_from_iRatiofail_cat3_2016_fit_s_fehy3010);
   grae->SetName("Graph_from_iRatiofail_cat3_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010 = new TH1F("Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetMinimum(-2.544681);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetMaximum(13.84301);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetStats(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat3_2016_fit_s_copy__40 = new TH1F("iOneWithErrorsfail_cat3_2016_fit_s_copy__40","",23,40,201);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMinimum(-5);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMaximum(17.21606);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetEntries(184);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetFillColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetLineColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMarkerColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMarkerSize(0);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->Draw("sameaxis");
   p22fail_cat3_2016_fit_s->Modified();
   cfail_cat3_2016_fit_s->cd();
   cfail_cat3_2016_fit_s->Modified();
   cfail_cat3_2016_fit_s->cd();
   cfail_cat3_2016_fit_s->SetSelected(cfail_cat3_2016_fit_s);
}
