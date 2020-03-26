void mlfit_fail_allcats_2016_fit_s()
{
//=========Macro generated from canvas: cfail_allcats_2016_fit_s/cfail_allcats_2016_fit_s
//=========  (Mon Sep 30 17:21:43 2019) by ROOT version 6.12/07
   TCanvas *cfail_allcats_2016_fit_s = new TCanvas("cfail_allcats_2016_fit_s", "cfail_allcats_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_allcats_2016_fit_s->SetHighLightColor(2);
   cfail_allcats_2016_fit_s->Range(0,0,1,1);
   cfail_allcats_2016_fit_s->SetFillColor(0);
   cfail_allcats_2016_fit_s->SetBorderMode(0);
   cfail_allcats_2016_fit_s->SetBorderSize(2);
   cfail_allcats_2016_fit_s->SetTickx(1);
   cfail_allcats_2016_fit_s->SetTicky(1);
   cfail_allcats_2016_fit_s->SetLeftMargin(0.16);
   cfail_allcats_2016_fit_s->SetBottomMargin(0.13);
   cfail_allcats_2016_fit_s->SetFrameFillStyle(0);
   cfail_allcats_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_allcats_2016_fit_s
   TPad *p12fail_allcats_2016_fit_s = new TPad("p12fail_allcats_2016_fit_s", "p12fail_allcats_2016_fit_s",0,0.3,1,1);
   p12fail_allcats_2016_fit_s->Draw();
   p12fail_allcats_2016_fit_s->cd();
   p12fail_allcats_2016_fit_s->Range(13.7027,-12446.08,221.8108,609857.8);
   p12fail_allcats_2016_fit_s->SetFillColor(0);
   p12fail_allcats_2016_fit_s->SetBorderMode(0);
   p12fail_allcats_2016_fit_s->SetBorderSize(2);
   p12fail_allcats_2016_fit_s->SetTickx(1);
   p12fail_allcats_2016_fit_s->SetTicky(1);
   p12fail_allcats_2016_fit_s->SetLeftMargin(0.16);
   p12fail_allcats_2016_fit_s->SetBottomMargin(0.02);
   p12fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   p12fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_allcats_2016_fit_s__105 = new TH1F("htotfail_allcats_2016_fit_s__105","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_s__105->SetBinContent(1,0.0004790755);
   htotfail_allcats_2016_fit_s__105->SetBinContent(2,0.0004790755);
   htotfail_allcats_2016_fit_s__105->SetBinContent(3,365084.9);
   htotfail_allcats_2016_fit_s__105->SetBinContent(4,338285.8);
   htotfail_allcats_2016_fit_s__105->SetBinContent(5,320391.4);
   htotfail_allcats_2016_fit_s__105->SetBinContent(6,311011.8);
   htotfail_allcats_2016_fit_s__105->SetBinContent(7,302325.8);
   htotfail_allcats_2016_fit_s__105->SetBinContent(8,287601.8);
   htotfail_allcats_2016_fit_s__105->SetBinContent(9,270044.2);
   htotfail_allcats_2016_fit_s__105->SetBinContent(10,256329.4);
   htotfail_allcats_2016_fit_s__105->SetBinContent(11,246154.7);
   htotfail_allcats_2016_fit_s__105->SetBinContent(12,234288);
   htotfail_allcats_2016_fit_s__105->SetBinContent(13,221810.4);
   htotfail_allcats_2016_fit_s__105->SetBinContent(14,208002.8);
   htotfail_allcats_2016_fit_s__105->SetBinContent(15,193146.1);
   htotfail_allcats_2016_fit_s__105->SetBinContent(16,177818.9);
   htotfail_allcats_2016_fit_s__105->SetBinContent(17,161902.1);
   htotfail_allcats_2016_fit_s__105->SetBinContent(18,145130.9);
   htotfail_allcats_2016_fit_s__105->SetBinContent(19,81951.08);
   htotfail_allcats_2016_fit_s__105->SetBinContent(20,74852.9);
   htotfail_allcats_2016_fit_s__105->SetBinContent(21,43638.06);
   htotfail_allcats_2016_fit_s__105->SetBinContent(22,40209.26);
   htotfail_allcats_2016_fit_s__105->SetBinContent(23,36660.33);
   htotfail_allcats_2016_fit_s__105->SetMinimum(0);
   htotfail_allcats_2016_fit_s__105->SetMaximum(547627.4);
   htotfail_allcats_2016_fit_s__105->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__105->SetFillColor(ci);
   htotfail_allcats_2016_fit_s__105->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__105->SetLineColor(ci);
   htotfail_allcats_2016_fit_s__105->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_s__105->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_s__105->SetMarkerSize(0);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__105->Draw("");
   
   TH1F *htot_linefail_allcats_2016_fit_s__106 = new TH1F("htot_linefail_allcats_2016_fit_s__106","wqq in cat1_2016_fail_cat1",23,40,201);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(1,0.0004790755);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(2,0.0004790755);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(3,365084.9);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(4,338285.8);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(5,320391.4);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(6,311011.8);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(7,302325.8);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(8,287601.8);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(9,270044.2);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(10,256329.4);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(11,246154.7);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(12,234288);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(13,221810.4);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(14,208002.8);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(15,193146.1);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(16,177818.9);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(17,161902.1);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(18,145130.9);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(19,81951.08);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(20,74852.9);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(21,43638.06);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(22,40209.26);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(23,36660.33);
   htot_linefail_allcats_2016_fit_s__106->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_allcats_2016_fit_s__106->SetFillColor(ci);
   htot_linefail_allcats_2016_fit_s__106->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_allcats_2016_fit_s__106->SetLineColor(ci);
   htot_linefail_allcats_2016_fit_s__106->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_allcats_2016_fit_s__106->SetMarkerColor(ci);
   htot_linefail_allcats_2016_fit_s__106->SetMarkerSize(0);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetRange(2,23);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_s__106->Draw("histsame");
   
   TH1F *qcd_fail_sum__107 = new TH1F("qcd_fail_sum__107","qcd in cat1_2016_fail_cat1",23,40,201);
   qcd_fail_sum__107->SetBinContent(3,364114);
   qcd_fail_sum__107->SetBinContent(4,335635);
   qcd_fail_sum__107->SetBinContent(5,314920);
   qcd_fail_sum__107->SetBinContent(6,297317.5);
   qcd_fail_sum__107->SetBinContent(7,283230.4);
   qcd_fail_sum__107->SetBinContent(8,272134.3);
   qcd_fail_sum__107->SetBinContent(9,259615.2);
   qcd_fail_sum__107->SetBinContent(10,251404.4);
   qcd_fail_sum__107->SetBinContent(11,243647.8);
   qcd_fail_sum__107->SetBinContent(12,232940.5);
   qcd_fail_sum__107->SetBinContent(13,220804.1);
   qcd_fail_sum__107->SetBinContent(14,207078.8);
   qcd_fail_sum__107->SetBinContent(15,192333.5);
   qcd_fail_sum__107->SetBinContent(16,177194.8);
   qcd_fail_sum__107->SetBinContent(17,161423.3);
   qcd_fail_sum__107->SetBinContent(18,144738.5);
   qcd_fail_sum__107->SetBinContent(19,81743.59);
   qcd_fail_sum__107->SetBinContent(20,74669.05);
   qcd_fail_sum__107->SetBinContent(21,43549.57);
   qcd_fail_sum__107->SetBinContent(22,40146.71);
   qcd_fail_sum__107->SetBinContent(23,36619.41);
   qcd_fail_sum__107->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_fail_sum__107->SetLineColor(ci);
   qcd_fail_sum__107->SetLineStyle(2);
   qcd_fail_sum__107->SetLineWidth(2);
   qcd_fail_sum__107->GetXaxis()->SetTitle("x");
   qcd_fail_sum__107->GetXaxis()->SetLabelFont(42);
   qcd_fail_sum__107->GetXaxis()->SetLabelSize(0.035);
   qcd_fail_sum__107->GetXaxis()->SetTitleSize(0.035);
   qcd_fail_sum__107->GetXaxis()->SetTitleFont(42);
   qcd_fail_sum__107->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_fail_sum__107->GetYaxis()->SetLabelFont(42);
   qcd_fail_sum__107->GetYaxis()->SetLabelSize(0.035);
   qcd_fail_sum__107->GetYaxis()->SetTitleSize(0.035);
   qcd_fail_sum__107->GetYaxis()->SetTitleOffset(0);
   qcd_fail_sum__107->GetYaxis()->SetTitleFont(42);
   qcd_fail_sum__107->GetZaxis()->SetLabelFont(42);
   qcd_fail_sum__107->GetZaxis()->SetLabelSize(0.035);
   qcd_fail_sum__107->GetZaxis()->SetTitleSize(0.035);
   qcd_fail_sum__107->GetZaxis()->SetTitleFont(42);
   qcd_fail_sum__107->Draw("hist sames");
   
   TH1F *htotfail_allcats_2016_fit_s__108 = new TH1F("htotfail_allcats_2016_fit_s__108","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_s__108->SetBinContent(1,0.0004790755);
   htotfail_allcats_2016_fit_s__108->SetBinContent(2,0.0004790755);
   htotfail_allcats_2016_fit_s__108->SetBinContent(3,365084.9);
   htotfail_allcats_2016_fit_s__108->SetBinContent(4,338285.8);
   htotfail_allcats_2016_fit_s__108->SetBinContent(5,320391.4);
   htotfail_allcats_2016_fit_s__108->SetBinContent(6,311011.8);
   htotfail_allcats_2016_fit_s__108->SetBinContent(7,302325.8);
   htotfail_allcats_2016_fit_s__108->SetBinContent(8,287601.8);
   htotfail_allcats_2016_fit_s__108->SetBinContent(9,270044.2);
   htotfail_allcats_2016_fit_s__108->SetBinContent(10,256329.4);
   htotfail_allcats_2016_fit_s__108->SetBinContent(11,246154.7);
   htotfail_allcats_2016_fit_s__108->SetBinContent(12,234288);
   htotfail_allcats_2016_fit_s__108->SetBinContent(13,221810.4);
   htotfail_allcats_2016_fit_s__108->SetBinContent(14,208002.8);
   htotfail_allcats_2016_fit_s__108->SetBinContent(15,193146.1);
   htotfail_allcats_2016_fit_s__108->SetBinContent(16,177818.9);
   htotfail_allcats_2016_fit_s__108->SetBinContent(17,161902.1);
   htotfail_allcats_2016_fit_s__108->SetBinContent(18,145130.9);
   htotfail_allcats_2016_fit_s__108->SetBinContent(19,81951.08);
   htotfail_allcats_2016_fit_s__108->SetBinContent(20,74852.9);
   htotfail_allcats_2016_fit_s__108->SetBinContent(21,43638.06);
   htotfail_allcats_2016_fit_s__108->SetBinContent(22,40209.26);
   htotfail_allcats_2016_fit_s__108->SetBinContent(23,36660.33);
   htotfail_allcats_2016_fit_s__108->SetMinimum(0);
   htotfail_allcats_2016_fit_s__108->SetMaximum(547627.4);
   htotfail_allcats_2016_fit_s__108->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__108->SetFillColor(ci);
   htotfail_allcats_2016_fit_s__108->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__108->SetLineColor(ci);
   htotfail_allcats_2016_fit_s__108->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_s__108->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_s__108->SetMarkerSize(0);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__108->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis27[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_27 = new TH1F("hstackMC_stack_27","hstackMC",23, xAxis27);
   hstackMC_stack_27->SetMinimum(0);
   hstackMC_stack_27->SetMaximum(20077);
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
   
   TH1F *tqq_fail_sum_stack_1 = new TH1F("tqq_fail_sum_stack_1","tqq in cat1_2016_fail_cat1",23, xAxis28);
   tqq_fail_sum_stack_1->SetBinContent(3,310.8208);
   tqq_fail_sum_stack_1->SetBinContent(4,404.0699);
   tqq_fail_sum_stack_1->SetBinContent(5,668.1176);
   tqq_fail_sum_stack_1->SetBinContent(6,1291.903);
   tqq_fail_sum_stack_1->SetBinContent(7,1608.95);
   tqq_fail_sum_stack_1->SetBinContent(8,1174.414);
   tqq_fail_sum_stack_1->SetBinContent(9,800.8234);
   tqq_fail_sum_stack_1->SetBinContent(10,730.2466);
   tqq_fail_sum_stack_1->SetBinContent(11,762.2318);
   tqq_fail_sum_stack_1->SetBinContent(12,818.478);
   tqq_fail_sum_stack_1->SetBinContent(13,821.6208);
   tqq_fail_sum_stack_1->SetBinContent(14,812.7697);
   tqq_fail_sum_stack_1->SetBinContent(15,729.7829);
   tqq_fail_sum_stack_1->SetBinContent(16,590.6597);
   tqq_fail_sum_stack_1->SetBinContent(17,461.2112);
   tqq_fail_sum_stack_1->SetBinContent(18,372.7122);
   tqq_fail_sum_stack_1->SetBinContent(19,207.4887);
   tqq_fail_sum_stack_1->SetBinContent(20,182.7587);
   tqq_fail_sum_stack_1->SetBinContent(21,88.4913);
   tqq_fail_sum_stack_1->SetBinContent(22,62.55044);
   tqq_fail_sum_stack_1->SetBinContent(23,40.92483);
   tqq_fail_sum_stack_1->SetEntries(138);

   ci = TColor::GetColor("#660066");
   tqq_fail_sum_stack_1->SetLineColor(ci);
   tqq_fail_sum_stack_1->SetLineStyle(4);
   tqq_fail_sum_stack_1->SetLineWidth(2);
   tqq_fail_sum_stack_1->GetXaxis()->SetTitle("x");
   tqq_fail_sum_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_fail_sum_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_fail_sum_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_fail_sum_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_fail_sum_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_fail_sum_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_fail_sum_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_fail_sum_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_fail_sum_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_fail_sum_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_fail_sum_stack_1,"");
   
   TH1F *wqq_fail_sum_stack_2 = new TH1F("wqq_fail_sum_stack_2","wqq in cat1_2016_fail_cat1",23,40,201);
   wqq_fail_sum_stack_2->SetBinContent(1,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(2,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(3,579.0758);
   wqq_fail_sum_stack_2->SetBinContent(4,2002.107);
   wqq_fail_sum_stack_2->SetBinContent(5,4202.133);
   wqq_fail_sum_stack_2->SetBinContent(6,10898.1);
   wqq_fail_sum_stack_2->SetBinContent(7,14551.62);
   wqq_fail_sum_stack_2->SetBinContent(8,8771.138);
   wqq_fail_sum_stack_2->SetBinContent(9,4293.259);
   wqq_fail_sum_stack_2->SetBinContent(10,1330.049);
   wqq_fail_sum_stack_2->SetBinContent(11,395.2751);
   wqq_fail_sum_stack_2->SetBinContent(12,138.7106);
   wqq_fail_sum_stack_2->SetBinContent(13,63.14058);
   wqq_fail_sum_stack_2->SetBinContent(14,18.14146);
   wqq_fail_sum_stack_2->SetBinContent(15,11.65986);
   wqq_fail_sum_stack_2->SetBinContent(16,3.455159);
   wqq_fail_sum_stack_2->SetBinContent(17,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(18,3.937657);
   wqq_fail_sum_stack_2->SetBinContent(19,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(20,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(21,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(22,0.0003308326);
   wqq_fail_sum_stack_2->SetBinContent(23,0.0003308326);
   wqq_fail_sum_stack_2->SetEntries(138);

   ci = TColor::GetColor("#009900");
   wqq_fail_sum_stack_2->SetLineColor(ci);
   wqq_fail_sum_stack_2->SetLineStyle(2);
   wqq_fail_sum_stack_2->SetLineWidth(2);
   wqq_fail_sum_stack_2->GetXaxis()->SetTitle("x");
   wqq_fail_sum_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_fail_sum_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_fail_sum_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_fail_sum_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_fail_sum_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_fail_sum_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_fail_sum_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_fail_sum_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_fail_sum_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_fail_sum_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_fail_sum_stack_2,"");
   
   TH1F *zqq_fail_sum_stack_3 = new TH1F("zqq_fail_sum_stack_3","zqq in cat1_2016_fail_cat1",23,40,201);
   zqq_fail_sum_stack_3->SetBinContent(1,0.0001482428);
   zqq_fail_sum_stack_3->SetBinContent(2,0.0001482428);
   zqq_fail_sum_stack_3->SetBinContent(3,81.04464);
   zqq_fail_sum_stack_3->SetBinContent(4,244.6818);
   zqq_fail_sum_stack_3->SetBinContent(5,601.1219);
   zqq_fail_sum_stack_3->SetBinContent(6,1504.348);
   zqq_fail_sum_stack_3->SetBinContent(7,2934.806);
   zqq_fail_sum_stack_3->SetBinContent(8,5521.917);
   zqq_fail_sum_stack_3->SetBinContent(9,5334.907);
   zqq_fail_sum_stack_3->SetBinContent(10,2864.723);
   zqq_fail_sum_stack_3->SetBinContent(11,1349.472);
   zqq_fail_sum_stack_3->SetBinContent(12,390.3547);
   zqq_fail_sum_stack_3->SetBinContent(13,121.4853);
   zqq_fail_sum_stack_3->SetBinContent(14,93.05164);
   zqq_fail_sum_stack_3->SetBinContent(15,71.18203);
   zqq_fail_sum_stack_3->SetBinContent(16,30.0795);
   zqq_fail_sum_stack_3->SetBinContent(17,17.54048);
   zqq_fail_sum_stack_3->SetBinContent(18,15.74655);
   zqq_fail_sum_stack_3->SetBinContent(19,0.0001482428);
   zqq_fail_sum_stack_3->SetBinContent(20,1.086967);
   zqq_fail_sum_stack_3->SetBinContent(21,0.0001482428);
   zqq_fail_sum_stack_3->SetBinContent(22,0.0001482428);
   zqq_fail_sum_stack_3->SetBinContent(23,0.0001482428);
   zqq_fail_sum_stack_3->SetEntries(138);

   ci = TColor::GetColor("#cc0000");
   zqq_fail_sum_stack_3->SetLineColor(ci);
   zqq_fail_sum_stack_3->SetLineStyle(3);
   zqq_fail_sum_stack_3->SetLineWidth(2);
   zqq_fail_sum_stack_3->GetXaxis()->SetTitle("x");
   zqq_fail_sum_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_fail_sum_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_fail_sum_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_fail_sum_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_fail_sum_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_fail_sum_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_fail_sum_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_fail_sum_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_fail_sum_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_fail_sum_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_fail_sum_stack_3,"");
   
   TH1F *hsigfail_allcats_2016_fit_s_stack_4 = new TH1F("hsigfail_allcats_2016_fit_s_stack_4","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(1,4.40966e-06);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(2,4.40966e-06);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(3,10.20728);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(4,8.484057);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(5,14.92014);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(6,19.2874);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(7,25.57184);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(8,27.14708);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(9,35.55001);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(10,49.85444);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(11,70.24335);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(12,103.8092);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(13,99.01602);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(14,75.01331);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(15,45.18571);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(16,18.6093);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(17,11.32383);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(18,6.069021);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(19,4.512372);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(20,2.509254);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(21,1.326998);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(22,0.9743738);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(23,0.3475499);
   hsigfail_allcats_2016_fit_s_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigfail_allcats_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_allcats_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_allcats_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_fail_sum_copy_fx3027[23] = {
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
   Double_t data_fail_sum_copy_fy3027[23] = {
   0,
   0,
   365009,
   338415,
   320409,
   310993,
   302310,
   287674,
   270080,
   256347,
   246295,
   234364,
   221931,
   208068,
   193238,
   177740,
   161921,
   145144,
   81953,
   74854,
   43668,
   40235,
   36629};
   Double_t data_fail_sum_copy_felx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_fail_sum_copy_fely3027[23] = {
   1.841055,
   1.841055,
   605.1734,
   582.7477,
   567.0597,
   558.6802,
   550.8398,
   537.3648,
   520.7042,
   507.3189,
   497.2926,
   485.1228,
   472.1065,
   457.1554,
   440.5988,
   422.6022,
   403.4037,
   381.9869,
   287.2817,
   274.6018,
   209.975,
   201.5927,
   192.393};
   Double_t data_fail_sum_copy_fehx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_fail_sum_copy_fehy3027[23] = {
   0,
   0,
   604.1726,
   581.7468,
   566.0588,
   557.6793,
   549.8389,
   536.3638,
   519.7032,
   506.3179,
   496.2916,
   484.1217,
   471.1054,
   456.1542,
   439.5976,
   421.601,
   402.4024,
   380.9855,
   286.28,
   273.5999,
   208.9726,
   200.5901,
   191.3903};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_fail_sum_copy_fx3027,data_fail_sum_copy_fy3027,data_fail_sum_copy_felx3027,data_fail_sum_copy_fehx3027,data_fail_sum_copy_fely3027,data_fail_sum_copy_fehy3027);
   grae->SetName("data_fail_sum_copy");
   grae->SetTitle("WH_hbb in cat1_2016_fail_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_fail_sum_copy3027 = new TH1F("Graph_data_fail_sum_copy3027","WH_hbb in cat1_2016_fail_cat1",100,28.1,212.9);
   Graph_data_fail_sum_copy3027->SetMinimum(0);
   Graph_data_fail_sum_copy3027->SetMaximum(402174.7);
   Graph_data_fail_sum_copy3027->SetDirectory(0);
   Graph_data_fail_sum_copy3027->SetStats(0);
   Graph_data_fail_sum_copy3027->SetLineStyle(0);
   Graph_data_fail_sum_copy3027->SetMarkerStyle(20);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetLabelFont(42);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetLabelSize(0.05);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetTitleSize(0.06);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetTitleFont(42);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetLabelFont(42);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetLabelSize(0.05);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetTitleSize(0.06);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetTitleFont(42);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetLabelFont(42);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetLabelSize(0.05);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetTitleSize(0.06);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_fail_sum_copy3027);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.55,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_fail_sum_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_fail_sum_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_fail_sum_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd_fail_sum","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("htotfail_allcats_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_allcats_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   entry=leg->AddEntry("data_fail_sum","Data","pe");
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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_allcats_2016_fit_s_copy__109 = new TH1F("htotfail_allcats_2016_fit_s_copy__109","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(1,0.0004790755);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(2,0.0004790755);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(3,365084.9);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(4,338285.8);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(5,320391.4);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(6,311011.8);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(7,302325.8);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(8,287601.8);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(9,270044.2);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(10,256329.4);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(11,246154.7);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(12,234288);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(13,221810.4);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(14,208002.8);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(15,193146.1);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(16,177818.9);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(17,161902.1);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(18,145130.9);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(19,81951.08);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(20,74852.9);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(21,43638.06);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(22,40209.26);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(23,36660.33);
   htotfail_allcats_2016_fit_s_copy__109->SetMaximum(547627.4);
   htotfail_allcats_2016_fit_s_copy__109->SetEntries(552);
   htotfail_allcats_2016_fit_s_copy__109->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s_copy__109->SetFillColor(ci);
   htotfail_allcats_2016_fit_s_copy__109->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s_copy__109->SetLineColor(ci);
   htotfail_allcats_2016_fit_s_copy__109->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_s_copy__109->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_s_copy__109->SetMarkerSize(0);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s_copy__109->Draw("sameaxis");
   p12fail_allcats_2016_fit_s->Modified();
   cfail_allcats_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_allcats_2016_fit_s
   TPad *p22fail_allcats_2016_fit_s = new TPad("p22fail_allcats_2016_fit_s", "p22fail_allcats_2016_fit_s",0,0,1,0.3);
   p22fail_allcats_2016_fit_s->Draw();
   p22fail_allcats_2016_fit_s->cd();
   p22fail_allcats_2016_fit_s->Range(13.7027,-29.2652,221.8108,51.6188);
   p22fail_allcats_2016_fit_s->SetFillColor(0);
   p22fail_allcats_2016_fit_s->SetBorderMode(0);
   p22fail_allcats_2016_fit_s->SetBorderSize(2);
   p22fail_allcats_2016_fit_s->SetTickx(1);
   p22fail_allcats_2016_fit_s->SetTicky(1);
   p22fail_allcats_2016_fit_s->SetLeftMargin(0.16);
   p22fail_allcats_2016_fit_s->SetTopMargin(0.05);
   p22fail_allcats_2016_fit_s->SetBottomMargin(0.3);
   p22fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   p22fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_allcats_2016_fit_s__110 = new TH1F("iOneWithErrorsfail_allcats_2016_fit_s__110","",23,40,201);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMinimum(-5);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMaximum(47.5746);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetFillColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetLineColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMarkerColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMarkerSize(0);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_28 = new TH1F("hstack_stack_28","hstack",23,40,201);
   hstack_stack_28->SetMinimum(0);
   hstack_stack_28->SetMaximum(33.4418);
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
   
   
   TH1F *sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1","wqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(3,0.9584609);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(4,3.441544);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(5,7.423492);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(6,19.54188);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(7,26.46525);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(8,16.35296);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(9,8.260983);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(10,2.626905);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(11,0.7964574);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(12,0.2865202);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(13,0.1340265);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(14,0.03977045);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(15,0.02652395);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(16,0.008195329);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(17,8.221438e-07);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(18,0.01033545);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(19,1.155626e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(20,1.209184e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(21,1.583139e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(22,1.649297e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(23,1.728576e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2","zqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(3,0.1341415);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(4,0.4205984);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(5,1.061942);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(6,2.697514);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(7,5.337575);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(8,10.2951);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(9,10.2653);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(10,5.657954);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(11,2.719112);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(12,0.8063153);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(13,0.2578729);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(14,0.2039916);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(15,0.1619254);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(16,0.07134591);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(17,0.0435894);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(18,0.04133109);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(19,5.178247e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(20,0.003972835);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(21,7.093889e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(22,7.390336e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(23,7.745577e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(3,0.01689464);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(4,0.01458376);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(5,0.02635794);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(6,0.03458511);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(7,0.04650789);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(8,0.05061319);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(9,0.06840445);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(10,0.09846471);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(11,0.1415365);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(12,0.214428);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(13,0.2101781);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(14,0.1644472);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(15,0.1027888);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(16,0.0441396);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(17,0.02814056);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(18,0.01592979);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(19,0.01576209);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(20,0.009171253);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(21,0.006350105);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(22,0.004857535);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(23,0.001815922);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_allcats_2016_fit_s__111 = new TH1F("iOneWithErrorsLinefail_allcats_2016_fit_s__111","",23,40,201);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetFillColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetLineColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetMarkerColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetMarkerSize(0);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fx3028[23] = {
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fy3028[23] = {
   0,
   0,
   0.9653224,
   4.077129,
   8.501474,
   22.1658,
   31.7164,
   26.73289,
   18.55936,
   8.303148,
   3.790556,
   1.247171,
   0.6466033,
   0.3858439,
   0.3965839,
   -0.1076996,
   0.09036389,
   0.08585865,
   0.006689861,
   0.007966082,
   0.1425765,
   0.1276941,
   -0.1637075};
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_felx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fely3028[23] = {
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fehx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fehy3028[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_allcats_2016_fit_s_fx3028,Graph_from_iRatiofail_allcats_2016_fit_s_fy3028,Graph_from_iRatiofail_allcats_2016_fit_s_felx3028,Graph_from_iRatiofail_allcats_2016_fit_s_fehx3028,Graph_from_iRatiofail_allcats_2016_fit_s_fely3028,Graph_from_iRatiofail_allcats_2016_fit_s_fehy3028);
   grae->SetName("Graph_from_iRatiofail_allcats_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028 = new TH1F("Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetMinimum(-4.551718);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetMaximum(36.10441);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetDirectory(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetStats(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_allcats_2016_fit_s_copy__112 = new TH1F("iOneWithErrorsfail_allcats_2016_fit_s_copy__112","",23,40,201);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMinimum(-5);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMaximum(47.5746);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetEntries(1104);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetFillColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetLineColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMarkerColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMarkerSize(0);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->Draw("sameaxis");
   p22fail_allcats_2016_fit_s->Modified();
   cfail_allcats_2016_fit_s->cd();
   cfail_allcats_2016_fit_s->Modified();
   cfail_allcats_2016_fit_s->cd();
   cfail_allcats_2016_fit_s->SetSelected(cfail_allcats_2016_fit_s);
}
