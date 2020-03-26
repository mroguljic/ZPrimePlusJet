void mlfit_pass_allcats_2016_fit_s()
{
//=========Macro generated from canvas: cpass_allcats_2016_fit_s/cpass_allcats_2016_fit_s
//=========  (Mon Sep 30 17:21:43 2019) by ROOT version 6.12/07
   TCanvas *cpass_allcats_2016_fit_s = new TCanvas("cpass_allcats_2016_fit_s", "cpass_allcats_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_allcats_2016_fit_s->SetHighLightColor(2);
   cpass_allcats_2016_fit_s->Range(0,0,1,1);
   cpass_allcats_2016_fit_s->SetFillColor(0);
   cpass_allcats_2016_fit_s->SetBorderMode(0);
   cpass_allcats_2016_fit_s->SetBorderSize(2);
   cpass_allcats_2016_fit_s->SetTickx(1);
   cpass_allcats_2016_fit_s->SetTicky(1);
   cpass_allcats_2016_fit_s->SetLeftMargin(0.16);
   cpass_allcats_2016_fit_s->SetBottomMargin(0.13);
   cpass_allcats_2016_fit_s->SetFrameFillStyle(0);
   cpass_allcats_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_allcats_2016_fit_s
   TPad *p12pass_allcats_2016_fit_s = new TPad("p12pass_allcats_2016_fit_s", "p12pass_allcats_2016_fit_s",0,0.3,1,1);
   p12pass_allcats_2016_fit_s->Draw();
   p12pass_allcats_2016_fit_s->cd();
   p12pass_allcats_2016_fit_s->Range(13.7027,-196.7506,221.8108,9640.781);
   p12pass_allcats_2016_fit_s->SetFillColor(0);
   p12pass_allcats_2016_fit_s->SetBorderMode(0);
   p12pass_allcats_2016_fit_s->SetBorderSize(2);
   p12pass_allcats_2016_fit_s->SetTickx(1);
   p12pass_allcats_2016_fit_s->SetTicky(1);
   p12pass_allcats_2016_fit_s->SetLeftMargin(0.16);
   p12pass_allcats_2016_fit_s->SetBottomMargin(0.02);
   p12pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   p12pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_allcats_2016_fit_s__97 = new TH1F("htotpass_allcats_2016_fit_s__97","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s__97->SetBinContent(1,2.758655e-05);
   htotpass_allcats_2016_fit_s__97->SetBinContent(2,2.758655e-05);
   htotpass_allcats_2016_fit_s__97->SetBinContent(3,5222.361);
   htotpass_allcats_2016_fit_s__97->SetBinContent(4,5320.714);
   htotpass_allcats_2016_fit_s__97->SetBinContent(5,5385.778);
   htotpass_allcats_2016_fit_s__97->SetBinContent(6,5623.332);
   htotpass_allcats_2016_fit_s__97->SetBinContent(7,5771.352);
   htotpass_allcats_2016_fit_s__97->SetBinContent(8,5545.823);
   htotpass_allcats_2016_fit_s__97->SetBinContent(9,4907.077);
   htotpass_allcats_2016_fit_s__97->SetBinContent(10,4364.933);
   htotpass_allcats_2016_fit_s__97->SetBinContent(11,3916.057);
   htotpass_allcats_2016_fit_s__97->SetBinContent(12,3546.919);
   htotpass_allcats_2016_fit_s__97->SetBinContent(13,3192.762);
   htotpass_allcats_2016_fit_s__97->SetBinContent(14,2822.486);
   htotpass_allcats_2016_fit_s__97->SetBinContent(15,2449.036);
   htotpass_allcats_2016_fit_s__97->SetBinContent(16,2098.118);
   htotpass_allcats_2016_fit_s__97->SetBinContent(17,1765.33);
   htotpass_allcats_2016_fit_s__97->SetBinContent(18,1455.914);
   htotpass_allcats_2016_fit_s__97->SetBinContent(19,835.7992);
   htotpass_allcats_2016_fit_s__97->SetBinContent(20,703.1703);
   htotpass_allcats_2016_fit_s__97->SetBinContent(21,413.6474);
   htotpass_allcats_2016_fit_s__97->SetBinContent(22,345.5215);
   htotpass_allcats_2016_fit_s__97->SetBinContent(23,284.0814);
   htotpass_allcats_2016_fit_s__97->SetMinimum(0);
   htotpass_allcats_2016_fit_s__97->SetMaximum(8657.028);
   htotpass_allcats_2016_fit_s__97->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__97->SetFillColor(ci);
   htotpass_allcats_2016_fit_s__97->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__97->SetLineColor(ci);
   htotpass_allcats_2016_fit_s__97->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s__97->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s__97->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__97->Draw("");
   
   TH1F *htot_linepass_allcats_2016_fit_s__98 = new TH1F("htot_linepass_allcats_2016_fit_s__98","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(1,2.758655e-05);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(2,2.758655e-05);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(3,5222.361);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(4,5320.714);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(5,5385.778);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(6,5623.332);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(7,5771.352);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(8,5545.823);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(9,4907.077);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(10,4364.933);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(11,3916.057);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(12,3546.919);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(13,3192.762);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(14,2822.486);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(15,2449.036);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(16,2098.118);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(17,1765.33);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(18,1455.914);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(19,835.7992);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(20,703.1703);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(21,413.6474);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(22,345.5215);
   htot_linepass_allcats_2016_fit_s__98->SetBinContent(23,284.0814);
   htot_linepass_allcats_2016_fit_s__98->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_s__98->SetFillColor(ci);
   htot_linepass_allcats_2016_fit_s__98->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_s__98->SetLineColor(ci);
   htot_linepass_allcats_2016_fit_s__98->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_allcats_2016_fit_s__98->SetMarkerColor(ci);
   htot_linepass_allcats_2016_fit_s__98->SetMarkerSize(0);
   htot_linepass_allcats_2016_fit_s__98->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_allcats_2016_fit_s__98->GetXaxis()->SetRange(2,23);
   htot_linepass_allcats_2016_fit_s__98->GetXaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_s__98->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_s__98->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_s__98->GetXaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_s__98->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_allcats_2016_fit_s__98->GetYaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_s__98->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_allcats_2016_fit_s__98->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_allcats_2016_fit_s__98->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_allcats_2016_fit_s__98->GetYaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_s__98->GetZaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_s__98->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_s__98->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_s__98->GetZaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_s__98->Draw("histsame");
   
   TH1F *qcd_pass_sum__99 = new TH1F("qcd_pass_sum__99","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd_pass_sum__99->SetBinContent(3,5157.222);
   qcd_pass_sum__99->SetBinContent(4,5167.762);
   qcd_pass_sum__99->SetBinContent(5,5078.57);
   qcd_pass_sum__99->SetBinContent(6,4903.482);
   qcd_pass_sum__99->SetBinContent(7,4695.415);
   qcd_pass_sum__99->SetBinContent(8,4477.529);
   qcd_pass_sum__99->SetBinContent(9,4195.925);
   qcd_pass_sum__99->SetBinContent(10,3956.334);
   qcd_pass_sum__99->SetBinContent(11,3704.278);
   qcd_pass_sum__99->SetBinContent(12,3397.308);
   qcd_pass_sum__99->SetBinContent(13,3069.507);
   qcd_pass_sum__99->SetBinContent(14,2725.343);
   qcd_pass_sum__99->SetBinContent(15,2381.955);
   qcd_pass_sum__99->SetBinContent(16,2050.068);
   qcd_pass_sum__99->SetBinContent(17,1732.37);
   qcd_pass_sum__99->SetBinContent(18,1429.59);
   qcd_pass_sum__99->SetBinContent(19,825.2599);
   qcd_pass_sum__99->SetBinContent(20,691.0827);
   qcd_pass_sum__99->SetBinContent(21,408.5629);
   qcd_pass_sum__99->SetBinContent(22,344.5394);
   qcd_pass_sum__99->SetBinContent(23,283.4063);
   qcd_pass_sum__99->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_pass_sum__99->SetLineColor(ci);
   qcd_pass_sum__99->SetLineStyle(2);
   qcd_pass_sum__99->SetLineWidth(2);
   qcd_pass_sum__99->GetXaxis()->SetTitle("x");
   qcd_pass_sum__99->GetXaxis()->SetLabelFont(42);
   qcd_pass_sum__99->GetXaxis()->SetLabelSize(0.035);
   qcd_pass_sum__99->GetXaxis()->SetTitleSize(0.035);
   qcd_pass_sum__99->GetXaxis()->SetTitleFont(42);
   qcd_pass_sum__99->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_pass_sum__99->GetYaxis()->SetLabelFont(42);
   qcd_pass_sum__99->GetYaxis()->SetLabelSize(0.035);
   qcd_pass_sum__99->GetYaxis()->SetTitleSize(0.035);
   qcd_pass_sum__99->GetYaxis()->SetTitleOffset(0);
   qcd_pass_sum__99->GetYaxis()->SetTitleFont(42);
   qcd_pass_sum__99->GetZaxis()->SetLabelFont(42);
   qcd_pass_sum__99->GetZaxis()->SetLabelSize(0.035);
   qcd_pass_sum__99->GetZaxis()->SetTitleSize(0.035);
   qcd_pass_sum__99->GetZaxis()->SetTitleFont(42);
   qcd_pass_sum__99->Draw("hist sames");
   
   TH1F *htotpass_allcats_2016_fit_s__100 = new TH1F("htotpass_allcats_2016_fit_s__100","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s__100->SetBinContent(1,2.758655e-05);
   htotpass_allcats_2016_fit_s__100->SetBinContent(2,2.758655e-05);
   htotpass_allcats_2016_fit_s__100->SetBinContent(3,5222.361);
   htotpass_allcats_2016_fit_s__100->SetBinContent(4,5320.714);
   htotpass_allcats_2016_fit_s__100->SetBinContent(5,5385.778);
   htotpass_allcats_2016_fit_s__100->SetBinContent(6,5623.332);
   htotpass_allcats_2016_fit_s__100->SetBinContent(7,5771.352);
   htotpass_allcats_2016_fit_s__100->SetBinContent(8,5545.823);
   htotpass_allcats_2016_fit_s__100->SetBinContent(9,4907.077);
   htotpass_allcats_2016_fit_s__100->SetBinContent(10,4364.933);
   htotpass_allcats_2016_fit_s__100->SetBinContent(11,3916.057);
   htotpass_allcats_2016_fit_s__100->SetBinContent(12,3546.919);
   htotpass_allcats_2016_fit_s__100->SetBinContent(13,3192.762);
   htotpass_allcats_2016_fit_s__100->SetBinContent(14,2822.486);
   htotpass_allcats_2016_fit_s__100->SetBinContent(15,2449.036);
   htotpass_allcats_2016_fit_s__100->SetBinContent(16,2098.118);
   htotpass_allcats_2016_fit_s__100->SetBinContent(17,1765.33);
   htotpass_allcats_2016_fit_s__100->SetBinContent(18,1455.914);
   htotpass_allcats_2016_fit_s__100->SetBinContent(19,835.7992);
   htotpass_allcats_2016_fit_s__100->SetBinContent(20,703.1703);
   htotpass_allcats_2016_fit_s__100->SetBinContent(21,413.6474);
   htotpass_allcats_2016_fit_s__100->SetBinContent(22,345.5215);
   htotpass_allcats_2016_fit_s__100->SetBinContent(23,284.0814);
   htotpass_allcats_2016_fit_s__100->SetMinimum(0);
   htotpass_allcats_2016_fit_s__100->SetMaximum(8657.028);
   htotpass_allcats_2016_fit_s__100->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__100->SetFillColor(ci);
   htotpass_allcats_2016_fit_s__100->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__100->SetLineColor(ci);
   htotpass_allcats_2016_fit_s__100->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s__100->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s__100->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s__100->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__100->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s__100->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__100->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s__100->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s__100->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s__100->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__100->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__100->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__100->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__100->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__100->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis25[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_25 = new TH1F("hstackMC_stack_25","hstackMC",23, xAxis25);
   hstackMC_stack_25->SetMinimum(0);
   hstackMC_stack_25->SetMaximum(1135.564);
   hstackMC_stack_25->SetDirectory(0);
   hstackMC_stack_25->SetStats(0);
   hstackMC_stack_25->SetLineStyle(0);
   hstackMC_stack_25->SetMarkerStyle(20);
   hstackMC_stack_25->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_25->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_25->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_25->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_25->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_25);
   
   Double_t xAxis26[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_pass_sum_stack_1 = new TH1F("tqq_pass_sum_stack_1","tqq in cat1_2016_pass_cat1",23, xAxis26);
   tqq_pass_sum_stack_1->SetBinContent(3,36.97914);
   tqq_pass_sum_stack_1->SetBinContent(4,46.21488);
   tqq_pass_sum_stack_1->SetBinContent(5,67.73429);
   tqq_pass_sum_stack_1->SetBinContent(6,106.0485);
   tqq_pass_sum_stack_1->SetBinContent(7,122.5761);
   tqq_pass_sum_stack_1->SetBinContent(8,115.4711);
   tqq_pass_sum_stack_1->SetBinContent(9,100.8661);
   tqq_pass_sum_stack_1->SetBinContent(10,112.4028);
   tqq_pass_sum_stack_1->SetBinContent(11,115.3814);
   tqq_pass_sum_stack_1->SetBinContent(12,120.2331);
   tqq_pass_sum_stack_1->SetBinContent(13,114.7957);
   tqq_pass_sum_stack_1->SetBinContent(14,93.40501);
   tqq_pass_sum_stack_1->SetBinContent(15,65.6234);
   tqq_pass_sum_stack_1->SetBinContent(16,47.38554);
   tqq_pass_sum_stack_1->SetBinContent(17,32.95974);
   tqq_pass_sum_stack_1->SetBinContent(18,26.32418);
   tqq_pass_sum_stack_1->SetBinContent(19,10.53927);
   tqq_pass_sum_stack_1->SetBinContent(20,12.08753);
   tqq_pass_sum_stack_1->SetBinContent(21,5.084417);
   tqq_pass_sum_stack_1->SetBinContent(22,0.9819918);
   tqq_pass_sum_stack_1->SetBinContent(23,0.6750875);
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
   wqq_pass_sum_stack_2->SetBinContent(1,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(2,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(3,18.62407);
   wqq_pass_sum_stack_2->SetBinContent(4,75.85777);
   wqq_pass_sum_stack_2->SetBinContent(5,154.4092);
   wqq_pass_sum_stack_2->SetBinContent(6,394.049);
   wqq_pass_sum_stack_2->SetBinContent(7,485.5684);
   wqq_pass_sum_stack_2->SetBinContent(8,271.7296);
   wqq_pass_sum_stack_2->SetBinContent(9,114.3452);
   wqq_pass_sum_stack_2->SetBinContent(10,27.53011);
   wqq_pass_sum_stack_2->SetBinContent(11,11.17439);
   wqq_pass_sum_stack_2->SetBinContent(12,4.646191);
   wqq_pass_sum_stack_2->SetBinContent(13,2.13268);
   wqq_pass_sum_stack_2->SetBinContent(14,0.4014092);
   wqq_pass_sum_stack_2->SetBinContent(15,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(16,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(17,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(18,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(19,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(20,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(21,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(22,1.092328e-05);
   wqq_pass_sum_stack_2->SetBinContent(23,1.092328e-05);
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
   zqq_pass_sum_stack_3->SetBinContent(1,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(2,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(3,9.536348);
   zqq_pass_sum_stack_3->SetBinContent(4,30.8798);
   zqq_pass_sum_stack_3->SetBinContent(5,85.06518);
   zqq_pass_sum_stack_3->SetBinContent(6,219.7523);
   zqq_pass_sum_stack_3->SetBinContent(7,467.793);
   zqq_pass_sum_stack_3->SetBinContent(8,681.0932);
   zqq_pass_sum_stack_3->SetBinContent(9,495.9406);
   zqq_pass_sum_stack_3->SetBinContent(10,268.6661);
   zqq_pass_sum_stack_3->SetBinContent(11,85.2234);
   zqq_pass_sum_stack_3->SetBinContent(12,24.73152);
   zqq_pass_sum_stack_3->SetBinContent(13,6.326735);
   zqq_pass_sum_stack_3->SetBinContent(14,3.337453);
   zqq_pass_sum_stack_3->SetBinContent(15,1.457313);
   zqq_pass_sum_stack_3->SetBinContent(16,0.6648297);
   zqq_pass_sum_stack_3->SetBinContent(17,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(18,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(19,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(20,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(21,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(22,1.666327e-05);
   zqq_pass_sum_stack_3->SetBinContent(23,1.666327e-05);
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
   
   TH1F *hsigpass_allcats_2016_fit_s_stack_4 = new TH1F("hsigpass_allcats_2016_fit_s_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(1,3.285892e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(2,3.285892e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(3,1.446917);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(4,1.101846);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(5,2.026061);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(6,4.019512);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(7,5.552523);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(8,8.513264);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(9,18.20743);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(10,39.4383);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(11,68.97096);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(12,98.97587);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(13,100.7921);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(14,68.68474);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(15,37.32609);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(16,10.5957);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(17,2.160961);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(18,0.9585179);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(19,0.2859314);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(20,0.1654757);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(21,0.1131145);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(22,0.03698982);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(23,0.04872247);
   hsigpass_allcats_2016_fit_s_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_allcats_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_pass_sum_copy_fx3025[23] = {
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
   Double_t data_pass_sum_copy_fy3025[23] = {
   0,
   0,
   5311,
   5198,
   5385,
   5667,
   5824,
   5504,
   4922,
   4442,
   3910,
   3675,
   3271,
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
   Double_t data_pass_sum_copy_felx3025[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_copy_fely3025[23] = {
   1.841055,
   1.841055,
   73.88278,
   73.10336,
   74.38871,
   76.28556,
   77.32118,
   75.19507,
   71.16326,
   67.6548,
   63.5367,
   61.62861,
   58.19974,
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
   Double_t data_pass_sum_copy_fehx3025[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_copy_fehy3025[23] = {
   0,
   0,
   72.87589,
   72.09639,
   73.38187,
   75.27888,
   76.31459,
   74.1883,
   70.1561,
   66.64726,
   62.52867,
   60.62033,
   57.19097,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_pass_sum_copy_fx3025,data_pass_sum_copy_fy3025,data_pass_sum_copy_felx3025,data_pass_sum_copy_fehx3025,data_pass_sum_copy_fely3025,data_pass_sum_copy_fehy3025);
   grae->SetName("data_pass_sum_copy");
   grae->SetTitle("WH_hbb in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_pass_sum_copy3025 = new TH1F("Graph_data_pass_sum_copy3025","WH_hbb in cat1_2016_pass_cat1",100,28.1,212.9);
   Graph_data_pass_sum_copy3025->SetMinimum(0);
   Graph_data_pass_sum_copy3025->SetMaximum(6490.53);
   Graph_data_pass_sum_copy3025->SetDirectory(0);
   Graph_data_pass_sum_copy3025->SetStats(0);
   Graph_data_pass_sum_copy3025->SetLineStyle(0);
   Graph_data_pass_sum_copy3025->SetMarkerStyle(20);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_pass_sum_copy3025);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.55,0.75,0.85,NULL,"brNDC");
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
   entry=leg->AddEntry("htotpass_allcats_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_allcats_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_allcats_2016_fit_s_copy__101 = new TH1F("htotpass_allcats_2016_fit_s_copy__101","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(1,2.758655e-05);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(2,2.758655e-05);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(3,5222.361);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(4,5320.714);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(5,5385.778);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(6,5623.332);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(7,5771.352);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(8,5545.823);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(9,4907.077);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(10,4364.933);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(11,3916.057);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(12,3546.919);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(13,3192.762);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(14,2822.486);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(15,2449.036);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(16,2098.118);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(17,1765.33);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(18,1455.914);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(19,835.7992);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(20,703.1703);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(21,413.6474);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(22,345.5215);
   htotpass_allcats_2016_fit_s_copy__101->SetBinContent(23,284.0814);
   htotpass_allcats_2016_fit_s_copy__101->SetMaximum(8657.028);
   htotpass_allcats_2016_fit_s_copy__101->SetEntries(552);
   htotpass_allcats_2016_fit_s_copy__101->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s_copy__101->SetFillColor(ci);
   htotpass_allcats_2016_fit_s_copy__101->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s_copy__101->SetLineColor(ci);
   htotpass_allcats_2016_fit_s_copy__101->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s_copy__101->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s_copy__101->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s_copy__101->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__101->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s_copy__101->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__101->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s_copy__101->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s_copy__101->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s_copy__101->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__101->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__101->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s_copy__101->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s_copy__101->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__101->Draw("sameaxis");
   p12pass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_allcats_2016_fit_s
   TPad *p22pass_allcats_2016_fit_s = new TPad("p22pass_allcats_2016_fit_s", "p22pass_allcats_2016_fit_s",0,0,1,0.3);
   p22pass_allcats_2016_fit_s->Draw();
   p22pass_allcats_2016_fit_s->cd();
   p22pass_allcats_2016_fit_s->Range(13.7027,-16.31516,221.8108,21.40204);
   p22pass_allcats_2016_fit_s->SetFillColor(0);
   p22pass_allcats_2016_fit_s->SetBorderMode(0);
   p22pass_allcats_2016_fit_s->SetBorderSize(2);
   p22pass_allcats_2016_fit_s->SetTickx(1);
   p22pass_allcats_2016_fit_s->SetTicky(1);
   p22pass_allcats_2016_fit_s->SetLeftMargin(0.16);
   p22pass_allcats_2016_fit_s->SetTopMargin(0.05);
   p22pass_allcats_2016_fit_s->SetBottomMargin(0.3);
   p22pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   p22pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s__102 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s__102","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMaximum(19.51618);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__102->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__102->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_26 = new TH1F("hstack_stack_26","hstack",23,40,201);
   hstack_stack_26->SetMinimum(0);
   hstack_stack_26->SetMaximum(13.60596);
   hstack_stack_26->SetDirectory(0);
   hstack_stack_26->SetStats(0);
   hstack_stack_26->SetLineStyle(0);
   hstack_stack_26->SetMarkerStyle(20);
   hstack_stack_26->GetXaxis()->SetLabelFont(42);
   hstack_stack_26->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_26->GetXaxis()->SetTitleFont(42);
   hstack_stack_26->GetYaxis()->SetLabelFont(42);
   hstack_stack_26->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_26->GetYaxis()->SetTitleFont(42);
   hstack_stack_26->GetZaxis()->SetLabelFont(42);
   hstack_stack_26->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_26);
   
   
   TH1F *sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(3,0.2555587);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(4,1.052171);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(5,2.104187);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(6,5.234522);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(7,6.36272);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(8,3.662701);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(9,1.629868);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(10,0.4130719);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(11,0.1787083);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(12,0.07664411);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(13,0.03729051);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(14,0.007450397);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(15,2.212363e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(16,2.324227e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(17,2.603925e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(18,2.868861e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(19,3.771804e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(20,4.114831e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(21,5.569316e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(22,6.099825e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(23,6.147945e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(3,0.1308574);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(4,0.4283127);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(5,1.159212);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(6,2.919176);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(7,6.129797);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(8,9.180602);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(9,7.069101);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(10,4.031165);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(11,1.362949);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(12,0.407974);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(13,0.1106247);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(14,0.06194514);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(15,0.02951593);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(16,0.01414608);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(17,3.972244e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(18,4.3764e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(19,5.753824e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(20,6.277106e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(21,8.495899e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(22,9.305182e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(23,9.378588e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(3,0.01985454);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(4,0.01528295);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(5,0.02760983);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(6,0.05339495);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(7,0.07275834);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(8,0.1147521);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(9,0.2595274);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(10,0.5917468);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(11,1.103029);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(12,1.632717);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(13,1.762379);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(14,1.27483);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(15,0.75599);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(16,0.2254526);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(17,0.05151366);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(18,0.02517427);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(19,0.009873202);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(20,0.006233521);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(21,0.00576723);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(22,0.002065602);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(23,0.002742246);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_allcats_2016_fit_s__103 = new TH1F("iOneWithErrorsLinepass_allcats_2016_fit_s__103","",23,40,201);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetFillColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetLineColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetMarkerColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetMarkerSize(0);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fx3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fy3026[23] = {
   0,
   0,
   1.580873,
   -0.2216,
   3.208764,
   8.618528,
   13.01079,
   12.11516,
   8.785552,
   5.517176,
   1.421865,
   2.554962,
   1.48965,
   1.53502,
   -0.194002,
   2.323495,
   -0.1270572,
   -0.1553255,
   0.1067751,
   0.06638032,
   -1.460607,
   -1.369337,
   1.698201};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_felx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fely3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fehx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fehy3026[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_allcats_2016_fit_s_fx3026,Graph_from_iRatiopass_allcats_2016_fit_s_fy3026,Graph_from_iRatiopass_allcats_2016_fit_s_felx3026,Graph_from_iRatiopass_allcats_2016_fit_s_fehx3026,Graph_from_iRatiopass_allcats_2016_fit_s_fely3026,Graph_from_iRatiopass_allcats_2016_fit_s_fehy3026);
   grae->SetName("Graph_from_iRatiopass_allcats_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026 = new TH1F("Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetMinimum(-4.107746);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetMaximum(15.65793);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetDirectory(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetStats(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s_copy__104 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s_copy__104","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMaximum(19.51618);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetEntries(1104);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->Draw("sameaxis");
   p22pass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
   cpass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
   cpass_allcats_2016_fit_s->SetSelected(cpass_allcats_2016_fit_s);
}
