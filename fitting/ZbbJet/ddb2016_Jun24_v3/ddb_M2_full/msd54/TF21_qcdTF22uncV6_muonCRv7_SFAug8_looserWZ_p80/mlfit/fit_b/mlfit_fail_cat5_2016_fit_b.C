void mlfit_fail_cat5_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat5_2016_fit_b/cfail_cat5_2016_fit_b
//=========  (Mon Sep 30 17:21:33 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat5_2016_fit_b = new TCanvas("cfail_cat5_2016_fit_b", "cfail_cat5_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat5_2016_fit_b->SetHighLightColor(2);
   cfail_cat5_2016_fit_b->Range(0,0,1,1);
   cfail_cat5_2016_fit_b->SetFillColor(0);
   cfail_cat5_2016_fit_b->SetBorderMode(0);
   cfail_cat5_2016_fit_b->SetBorderSize(2);
   cfail_cat5_2016_fit_b->SetTickx(1);
   cfail_cat5_2016_fit_b->SetTicky(1);
   cfail_cat5_2016_fit_b->SetLeftMargin(0.16);
   cfail_cat5_2016_fit_b->SetBottomMargin(0.13);
   cfail_cat5_2016_fit_b->SetFrameFillStyle(0);
   cfail_cat5_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat5_2016_fit_b
   TPad *p12fail_cat5_2016_fit_b = new TPad("p12fail_cat5_2016_fit_b", "p12fail_cat5_2016_fit_b",0,0.3,1,1);
   p12fail_cat5_2016_fit_b->Draw();
   p12fail_cat5_2016_fit_b->cd();
   p12fail_cat5_2016_fit_b->Range(13.7027,-699.999,221.8108,34299.95);
   p12fail_cat5_2016_fit_b->SetFillColor(0);
   p12fail_cat5_2016_fit_b->SetBorderMode(0);
   p12fail_cat5_2016_fit_b->SetBorderSize(2);
   p12fail_cat5_2016_fit_b->SetTickx(1);
   p12fail_cat5_2016_fit_b->SetTicky(1);
   p12fail_cat5_2016_fit_b->SetLeftMargin(0.16);
   p12fail_cat5_2016_fit_b->SetBottomMargin(0.02);
   p12fail_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat5_2016_fit_b->SetFrameBorderMode(0);
   p12fail_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat5_2016_fit_b__65 = new TH1F("htotfail_cat5_2016_fit_b__65","wqq in cat5_2016_fail_cat5",23,40,201);
   htotfail_cat5_2016_fit_b__65->SetBinContent(1,3.186039e-05);
   htotfail_cat5_2016_fit_b__65->SetBinContent(2,3.186039e-05);
   htotfail_cat5_2016_fit_b__65->SetBinContent(3,20533.3);
   htotfail_cat5_2016_fit_b__65->SetBinContent(4,19299.34);
   htotfail_cat5_2016_fit_b__65->SetBinContent(5,18000.63);
   htotfail_cat5_2016_fit_b__65->SetBinContent(6,17208.54);
   htotfail_cat5_2016_fit_b__65->SetBinContent(7,16550.91);
   htotfail_cat5_2016_fit_b__65->SetBinContent(8,15527.15);
   htotfail_cat5_2016_fit_b__65->SetBinContent(9,14190.98);
   htotfail_cat5_2016_fit_b__65->SetBinContent(10,13264.42);
   htotfail_cat5_2016_fit_b__65->SetBinContent(11,12773.94);
   htotfail_cat5_2016_fit_b__65->SetBinContent(12,12256.38);
   htotfail_cat5_2016_fit_b__65->SetBinContent(13,11935.63);
   htotfail_cat5_2016_fit_b__65->SetBinContent(14,11638.99);
   htotfail_cat5_2016_fit_b__65->SetBinContent(15,11148.24);
   htotfail_cat5_2016_fit_b__65->SetBinContent(16,11192.9);
   htotfail_cat5_2016_fit_b__65->SetBinContent(17,10646.27);
   htotfail_cat5_2016_fit_b__65->SetBinContent(18,10439.38);
   htotfail_cat5_2016_fit_b__65->SetBinContent(19,10150.54);
   htotfail_cat5_2016_fit_b__65->SetBinContent(20,9779.263);
   htotfail_cat5_2016_fit_b__65->SetBinContent(21,9429.884);
   htotfail_cat5_2016_fit_b__65->SetBinContent(22,9134.164);
   htotfail_cat5_2016_fit_b__65->SetBinContent(23,8455.829);
   htotfail_cat5_2016_fit_b__65->SetMinimum(0);
   htotfail_cat5_2016_fit_b__65->SetMaximum(30799.96);
   htotfail_cat5_2016_fit_b__65->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_b__65->SetFillColor(ci);
   htotfail_cat5_2016_fit_b__65->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_b__65->SetLineColor(ci);
   htotfail_cat5_2016_fit_b__65->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat5_2016_fit_b__65->SetMarkerColor(ci);
   htotfail_cat5_2016_fit_b__65->SetMarkerSize(0);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetRange(2,23);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetLabelOffset(100);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetTitleOffset(100);
   htotfail_cat5_2016_fit_b__65->GetXaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b__65->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat5_2016_fit_b__65->GetYaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b__65->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat5_2016_fit_b__65->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat5_2016_fit_b__65->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat5_2016_fit_b__65->GetYaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b__65->GetZaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b__65->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_b__65->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_b__65->GetZaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b__65->Draw("");
   
   TH1F *htot_linefail_cat5_2016_fit_b__66 = new TH1F("htot_linefail_cat5_2016_fit_b__66","wqq in cat5_2016_fail_cat5",23,40,201);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(1,3.186039e-05);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(2,3.186039e-05);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(3,20533.3);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(4,19299.34);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(5,18000.63);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(6,17208.54);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(7,16550.91);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(8,15527.15);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(9,14190.98);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(10,13264.42);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(11,12773.94);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(12,12256.38);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(13,11935.63);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(14,11638.99);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(15,11148.24);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(16,11192.9);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(17,10646.27);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(18,10439.38);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(19,10150.54);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(20,9779.263);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(21,9429.884);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(22,9134.164);
   htot_linefail_cat5_2016_fit_b__66->SetBinContent(23,8455.829);
   htot_linefail_cat5_2016_fit_b__66->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat5_2016_fit_b__66->SetFillColor(ci);
   htot_linefail_cat5_2016_fit_b__66->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat5_2016_fit_b__66->SetLineColor(ci);
   htot_linefail_cat5_2016_fit_b__66->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat5_2016_fit_b__66->SetMarkerColor(ci);
   htot_linefail_cat5_2016_fit_b__66->SetMarkerSize(0);
   htot_linefail_cat5_2016_fit_b__66->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat5_2016_fit_b__66->GetXaxis()->SetRange(2,23);
   htot_linefail_cat5_2016_fit_b__66->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat5_2016_fit_b__66->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat5_2016_fit_b__66->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat5_2016_fit_b__66->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat5_2016_fit_b__66->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat5_2016_fit_b__66->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat5_2016_fit_b__66->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat5_2016_fit_b__66->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat5_2016_fit_b__66->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat5_2016_fit_b__66->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat5_2016_fit_b__66->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat5_2016_fit_b__66->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat5_2016_fit_b__66->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat5_2016_fit_b__66->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat5_2016_fit_b__66->Draw("histsame");
   
   TH1F *qcd__67 = new TH1F("qcd__67","qcd in cat5_2016_fail_cat5",23,40,201);
   qcd__67->SetBinContent(3,20463.4);
   qcd__67->SetBinContent(4,19099.06);
   qcd__67->SetBinContent(5,17536.22);
   qcd__67->SetBinContent(6,16198.39);
   qcd__67->SetBinContent(7,15258.3);
   qcd__67->SetBinContent(8,14608.04);
   qcd__67->SetBinContent(9,13598.17);
   qcd__67->SetBinContent(10,12970.75);
   qcd__67->SetBinContent(11,12613.05);
   qcd__67->SetBinContent(12,12160.13);
   qcd__67->SetBinContent(13,11854.83);
   qcd__67->SetBinContent(14,11576.62);
   qcd__67->SetBinContent(15,11095.18);
   qcd__67->SetBinContent(16,11143.51);
   qcd__67->SetBinContent(17,10612.97);
   qcd__67->SetBinContent(18,10412.03);
   qcd__67->SetBinContent(19,10126.71);
   qcd__67->SetBinContent(20,9748.689);
   qcd__67->SetBinContent(21,9409.042);
   qcd__67->SetBinContent(22,9116.922);
   qcd__67->SetBinContent(23,8446.394);
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
   
   TH1F *htotfail_cat5_2016_fit_b__68 = new TH1F("htotfail_cat5_2016_fit_b__68","wqq in cat5_2016_fail_cat5",23,40,201);
   htotfail_cat5_2016_fit_b__68->SetBinContent(1,3.186039e-05);
   htotfail_cat5_2016_fit_b__68->SetBinContent(2,3.186039e-05);
   htotfail_cat5_2016_fit_b__68->SetBinContent(3,20533.3);
   htotfail_cat5_2016_fit_b__68->SetBinContent(4,19299.34);
   htotfail_cat5_2016_fit_b__68->SetBinContent(5,18000.63);
   htotfail_cat5_2016_fit_b__68->SetBinContent(6,17208.54);
   htotfail_cat5_2016_fit_b__68->SetBinContent(7,16550.91);
   htotfail_cat5_2016_fit_b__68->SetBinContent(8,15527.15);
   htotfail_cat5_2016_fit_b__68->SetBinContent(9,14190.98);
   htotfail_cat5_2016_fit_b__68->SetBinContent(10,13264.42);
   htotfail_cat5_2016_fit_b__68->SetBinContent(11,12773.94);
   htotfail_cat5_2016_fit_b__68->SetBinContent(12,12256.38);
   htotfail_cat5_2016_fit_b__68->SetBinContent(13,11935.63);
   htotfail_cat5_2016_fit_b__68->SetBinContent(14,11638.99);
   htotfail_cat5_2016_fit_b__68->SetBinContent(15,11148.24);
   htotfail_cat5_2016_fit_b__68->SetBinContent(16,11192.9);
   htotfail_cat5_2016_fit_b__68->SetBinContent(17,10646.27);
   htotfail_cat5_2016_fit_b__68->SetBinContent(18,10439.38);
   htotfail_cat5_2016_fit_b__68->SetBinContent(19,10150.54);
   htotfail_cat5_2016_fit_b__68->SetBinContent(20,9779.263);
   htotfail_cat5_2016_fit_b__68->SetBinContent(21,9429.884);
   htotfail_cat5_2016_fit_b__68->SetBinContent(22,9134.164);
   htotfail_cat5_2016_fit_b__68->SetBinContent(23,8455.829);
   htotfail_cat5_2016_fit_b__68->SetMinimum(0);
   htotfail_cat5_2016_fit_b__68->SetMaximum(30799.96);
   htotfail_cat5_2016_fit_b__68->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_b__68->SetFillColor(ci);
   htotfail_cat5_2016_fit_b__68->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_b__68->SetLineColor(ci);
   htotfail_cat5_2016_fit_b__68->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat5_2016_fit_b__68->SetMarkerColor(ci);
   htotfail_cat5_2016_fit_b__68->SetMarkerSize(0);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetRange(2,23);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetLabelOffset(100);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetTitleOffset(100);
   htotfail_cat5_2016_fit_b__68->GetXaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b__68->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat5_2016_fit_b__68->GetYaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b__68->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat5_2016_fit_b__68->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat5_2016_fit_b__68->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat5_2016_fit_b__68->GetYaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b__68->GetZaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b__68->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_b__68->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_b__68->GetZaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b__68->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis17[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_17 = new TH1F("hstackMC_stack_17","hstackMC",23, xAxis17);
   hstackMC_stack_17->SetMinimum(0);
   hstackMC_stack_17->SetMaximum(1357.248);
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
   tqq_stack_1->SetBinContent(3,17.11031);
   tqq_stack_1->SetBinContent(4,29.22884);
   tqq_stack_1->SetBinContent(5,47.74523);
   tqq_stack_1->SetBinContent(6,84.48627);
   tqq_stack_1->SetBinContent(7,111.362);
   tqq_stack_1->SetBinContent(8,67.39063);
   tqq_stack_1->SetBinContent(9,47.54313);
   tqq_stack_1->SetBinContent(10,49.85234);
   tqq_stack_1->SetBinContent(11,51.19974);
   tqq_stack_1->SetBinContent(12,61.52373);
   tqq_stack_1->SetBinContent(13,67.62178);
   tqq_stack_1->SetBinContent(14,57.66492);
   tqq_stack_1->SetBinContent(15,52.11252);
   tqq_stack_1->SetBinContent(16,49.38407);
   tqq_stack_1->SetBinContent(17,33.30038);
   tqq_stack_1->SetBinContent(18,27.34758);
   tqq_stack_1->SetBinContent(19,23.83268);
   tqq_stack_1->SetBinContent(20,30.57366);
   tqq_stack_1->SetBinContent(21,20.84174);
   tqq_stack_1->SetBinContent(22,17.24197);
   tqq_stack_1->SetBinContent(23,9.43574);
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
   wqq_stack_2->SetBinContent(1,2.212836e-05);
   wqq_stack_2->SetBinContent(2,2.212836e-05);
   wqq_stack_2->SetBinContent(3,41.14031);
   wqq_stack_2->SetBinContent(4,142.8044);
   wqq_stack_2->SetBinContent(5,353.0903);
   wqq_stack_2->SetBinContent(6,803.7);
   wqq_stack_2->SetBinContent(7,968.0958);
   wqq_stack_2->SetBinContent(8,514.7155);
   wqq_stack_2->SetBinContent(9,224.7413);
   wqq_stack_2->SetBinContent(10,68.02991);
   wqq_stack_2->SetBinContent(11,27.6018);
   wqq_stack_2->SetBinContent(12,11.02854);
   wqq_stack_2->SetBinContent(13,5.307088);
   wqq_stack_2->SetBinContent(14,0.9395114);
   wqq_stack_2->SetBinContent(15,2.212836e-05);
   wqq_stack_2->SetBinContent(16,2.212836e-05);
   wqq_stack_2->SetBinContent(17,2.212836e-05);
   wqq_stack_2->SetBinContent(18,2.212836e-05);
   wqq_stack_2->SetBinContent(19,2.212836e-05);
   wqq_stack_2->SetBinContent(20,2.212836e-05);
   wqq_stack_2->SetBinContent(21,2.212836e-05);
   wqq_stack_2->SetBinContent(22,2.212836e-05);
   wqq_stack_2->SetBinContent(23,2.212836e-05);
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
   zqq_stack_3->SetBinContent(1,9.732026e-06);
   zqq_stack_3->SetBinContent(2,9.732026e-06);
   zqq_stack_3->SetBinContent(3,11.65318);
   zqq_stack_3->SetBinContent(4,28.2545);
   zqq_stack_3->SetBinContent(5,63.56991);
   zqq_stack_3->SetBinContent(6,121.9632);
   zqq_stack_3->SetBinContent(7,213.1591);
   zqq_stack_3->SetBinContent(8,337.002);
   zqq_stack_3->SetBinContent(9,320.5308);
   zqq_stack_3->SetBinContent(10,175.7916);
   zqq_stack_3->SetBinContent(11,82.08643);
   zqq_stack_3->SetBinContent(12,23.69716);
   zqq_stack_3->SetBinContent(13,7.870294);
   zqq_stack_3->SetBinContent(14,3.760647);
   zqq_stack_3->SetBinContent(15,0.9505033);
   zqq_stack_3->SetBinContent(16,9.732026e-06);
   zqq_stack_3->SetBinContent(17,9.732026e-06);
   zqq_stack_3->SetBinContent(18,9.732026e-06);
   zqq_stack_3->SetBinContent(19,9.732026e-06);
   zqq_stack_3->SetBinContent(20,9.732026e-06);
   zqq_stack_3->SetBinContent(21,9.732026e-06);
   zqq_stack_3->SetBinContent(22,9.732026e-06);
   zqq_stack_3->SetBinContent(23,9.732026e-06);
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
   
   TH1F *hsigfail_cat5_2016_fit_b_stack_4 = new TH1F("hsigfail_cat5_2016_fit_b_stack_4","ggH_hbb in cat5_2016_fail_cat5",23,40,201);
   hsigfail_cat5_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat5_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat5_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat5_2016_fit_b_stack_4,"");
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
   entry=leg->AddEntry("htotfail_cat5_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat5_2016_fit_b_copy__69 = new TH1F("htotfail_cat5_2016_fit_b_copy__69","wqq in cat5_2016_fail_cat5",23,40,201);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(1,3.186039e-05);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(2,3.186039e-05);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(3,20533.3);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(4,19299.34);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(5,18000.63);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(6,17208.54);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(7,16550.91);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(8,15527.15);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(9,14190.98);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(10,13264.42);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(11,12773.94);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(12,12256.38);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(13,11935.63);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(14,11638.99);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(15,11148.24);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(16,11192.9);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(17,10646.27);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(18,10439.38);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(19,10150.54);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(20,9779.263);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(21,9429.884);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(22,9134.164);
   htotfail_cat5_2016_fit_b_copy__69->SetBinContent(23,8455.829);
   htotfail_cat5_2016_fit_b_copy__69->SetMaximum(30799.96);
   htotfail_cat5_2016_fit_b_copy__69->SetEntries(92);
   htotfail_cat5_2016_fit_b_copy__69->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_b_copy__69->SetFillColor(ci);
   htotfail_cat5_2016_fit_b_copy__69->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat5_2016_fit_b_copy__69->SetLineColor(ci);
   htotfail_cat5_2016_fit_b_copy__69->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat5_2016_fit_b_copy__69->SetMarkerColor(ci);
   htotfail_cat5_2016_fit_b_copy__69->SetMarkerSize(0);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetRange(2,23);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetLabelOffset(100);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetTitleOffset(100);
   htotfail_cat5_2016_fit_b_copy__69->GetXaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b_copy__69->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat5_2016_fit_b_copy__69->GetYaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b_copy__69->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat5_2016_fit_b_copy__69->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat5_2016_fit_b_copy__69->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat5_2016_fit_b_copy__69->GetYaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b_copy__69->GetZaxis()->SetLabelFont(42);
   htotfail_cat5_2016_fit_b_copy__69->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat5_2016_fit_b_copy__69->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat5_2016_fit_b_copy__69->GetZaxis()->SetTitleFont(42);
   htotfail_cat5_2016_fit_b_copy__69->Draw("sameaxis");
   p12fail_cat5_2016_fit_b->Modified();
   cfail_cat5_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_cat5_2016_fit_b
   TPad *p22fail_cat5_2016_fit_b = new TPad("p22fail_cat5_2016_fit_b", "p22fail_cat5_2016_fit_b",0,0,1,0.3);
   p22fail_cat5_2016_fit_b->Draw();
   p22fail_cat5_2016_fit_b->cd();
   p22fail_cat5_2016_fit_b->Range(13.7027,-13.62585,221.8108,15.12698);
   p22fail_cat5_2016_fit_b->SetFillColor(0);
   p22fail_cat5_2016_fit_b->SetBorderMode(0);
   p22fail_cat5_2016_fit_b->SetBorderSize(2);
   p22fail_cat5_2016_fit_b->SetTickx(1);
   p22fail_cat5_2016_fit_b->SetTicky(1);
   p22fail_cat5_2016_fit_b->SetLeftMargin(0.16);
   p22fail_cat5_2016_fit_b->SetTopMargin(0.05);
   p22fail_cat5_2016_fit_b->SetBottomMargin(0.3);
   p22fail_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat5_2016_fit_b->SetFrameBorderMode(0);
   p22fail_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat5_2016_fit_b__70 = new TH1F("iOneWithErrorsfail_cat5_2016_fit_b__70","",23,40,201);
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetMinimum(-5);
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetMaximum(13.68934);
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetFillColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetLineColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetMarkerColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_b__70->SetMarkerSize(0);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_b__70->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b__70->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_18 = new TH1F("hstack_stack_18","hstack",23,40,201);
   hstack_stack_18->SetMinimum(0);
   hstack_stack_18->SetMaximum(9.640278);
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
   
   
   TH1F *sigHistResidualwqqfail_cat5_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqfail_cat5_2016_fit_b_stack_1","wqq in cat5_2016_fail_cat5",23,40,201);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(3,0.2872415);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(4,1.027915);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(5,2.632259);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(6,6.127013);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(7,7.524454);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(8,4.133449);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(9,1.885039);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(10,0.5910454);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(11,0.2441756);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(12,0.09963883);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(13,0.04858638);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(14,0.008715946);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(15,2.09457e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(16,2.092976e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(17,2.144736e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(18,2.165691e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(19,2.194252e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(20,2.238378e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(21,2.277999e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(22,2.313328e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetBinContent(23,2.407957e-07);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat5_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat5_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqfail_cat5_2016_fit_b_stack_2","zqq in cat5_2016_fail_cat5",23,40,201);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(3,0.08136245);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(4,0.2033777);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(5,0.4739085);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(6,0.9297875);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(7,1.656764);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(8,2.706312);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(9,2.688483);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(10,1.527281);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(11,0.7261665);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(12,0.2140953);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(13,0.07205252);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(14,0.03488792);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(15,0.008997031);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(16,9.204884e-08);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(17,9.432523e-08);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(18,9.524684e-08);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(19,9.650294e-08);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(20,9.844357e-08);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(21,1.001861e-07);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(22,1.017399e-07);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetBinContent(23,1.059016e-07);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat5_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3","ggH_hbb in cat5_2016_fail_cat5",23,40,201);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat5_2016_fit_bfail_cat5_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat5_2016_fit_b__71 = new TH1F("iOneWithErrorsLinefail_cat5_2016_fit_b__71","",23,40,201);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetFillColor(ci);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetLineColor(ci);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat5_2016_fit_b__71->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat5_2016_fit_b_fx3018[23] = {
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_b_fy3018[23] = {
   0,
   0,
   0.2252683,
   1.227149,
   3.026632,
   6.984011,
   9.126226,
   6.616557,
   4.72679,
   1.958544,
   0.9973856,
   0.2627782,
   0.07750696,
   -0.1418111,
   0.1285405,
   -0.1408961,
   -0.01229515,
   0.006047804,
   0.1910709,
   -0.06334982,
   0.06231834,
   0.1638293,
   -0.1178398};
   Double_t Graph_from_iRatiofail_cat5_2016_fit_b_felx3018[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_b_fely3018[23] = {
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_b_fehx3018[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat5_2016_fit_b_fehy3018[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat5_2016_fit_b_fx3018,Graph_from_iRatiofail_cat5_2016_fit_b_fy3018,Graph_from_iRatiofail_cat5_2016_fit_b_felx3018,Graph_from_iRatiofail_cat5_2016_fit_b_fehx3018,Graph_from_iRatiofail_cat5_2016_fit_b_fely3018,Graph_from_iRatiofail_cat5_2016_fit_b_fehy3018);
   grae->SetName("Graph_from_iRatiofail_cat5_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018 = new TH1F("Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->SetMinimum(-2.268615);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->SetMaximum(11.25303);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->SetStats(0);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat5_2016_fit_b3018);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat5_2016_fit_b_copy__72 = new TH1F("iOneWithErrorsfail_cat5_2016_fit_b_copy__72","",23,40,201);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetMinimum(-5);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetMaximum(13.68934);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetEntries(184);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetFillColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetLineColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetMarkerColor(ci);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->SetMarkerSize(0);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat5_2016_fit_b_copy__72->Draw("sameaxis");
   p22fail_cat5_2016_fit_b->Modified();
   cfail_cat5_2016_fit_b->cd();
   cfail_cat5_2016_fit_b->Modified();
   cfail_cat5_2016_fit_b->cd();
   cfail_cat5_2016_fit_b->SetSelected(cfail_cat5_2016_fit_b);
}
