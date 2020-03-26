void mlfit_fail_cat2_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat2_2016_fit_s/cfail_cat2_2016_fit_s
//=========  (Mon Sep 30 17:21:41 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat2_2016_fit_s = new TCanvas("cfail_cat2_2016_fit_s", "cfail_cat2_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat2_2016_fit_s->SetHighLightColor(2);
   cfail_cat2_2016_fit_s->Range(0,0,1,1);
   cfail_cat2_2016_fit_s->SetFillColor(0);
   cfail_cat2_2016_fit_s->SetBorderMode(0);
   cfail_cat2_2016_fit_s->SetBorderSize(2);
   cfail_cat2_2016_fit_s->SetTickx(1);
   cfail_cat2_2016_fit_s->SetTicky(1);
   cfail_cat2_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat2_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat2_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat2_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat2_2016_fit_s
   TPad *p12fail_cat2_2016_fit_s = new TPad("p12fail_cat2_2016_fit_s", "p12fail_cat2_2016_fit_s",0,0.3,1,1);
   p12fail_cat2_2016_fit_s->Draw();
   p12fail_cat2_2016_fit_s->cd();
   p12fail_cat2_2016_fit_s->Range(18.24324,-2990.334,197.973,146526.3);
   p12fail_cat2_2016_fit_s->SetFillColor(0);
   p12fail_cat2_2016_fit_s->SetBorderMode(0);
   p12fail_cat2_2016_fit_s->SetBorderSize(2);
   p12fail_cat2_2016_fit_s->SetTickx(1);
   p12fail_cat2_2016_fit_s->SetTicky(1);
   p12fail_cat2_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat2_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat2_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat2_2016_fit_s__17 = new TH1F("htotfail_cat2_2016_fit_s__17","wqq in cat2_2016_fail_cat2",23,40,201);
   htotfail_cat2_2016_fit_s__17->SetBinContent(1,0.0001109631);
   htotfail_cat2_2016_fit_s__17->SetBinContent(2,0.0001109631);
   htotfail_cat2_2016_fit_s__17->SetBinContent(3,87716.45);
   htotfail_cat2_2016_fit_s__17->SetBinContent(4,81084.66);
   htotfail_cat2_2016_fit_s__17->SetBinContent(5,76669.06);
   htotfail_cat2_2016_fit_s__17->SetBinContent(6,73628.92);
   htotfail_cat2_2016_fit_s__17->SetBinContent(7,71412.75);
   htotfail_cat2_2016_fit_s__17->SetBinContent(8,68036.55);
   htotfail_cat2_2016_fit_s__17->SetBinContent(9,64144.19);
   htotfail_cat2_2016_fit_s__17->SetBinContent(10,61087.89);
   htotfail_cat2_2016_fit_s__17->SetBinContent(11,59008.78);
   htotfail_cat2_2016_fit_s__17->SetBinContent(12,56514.54);
   htotfail_cat2_2016_fit_s__17->SetBinContent(13,54440.05);
   htotfail_cat2_2016_fit_s__17->SetBinContent(14,50806.55);
   htotfail_cat2_2016_fit_s__17->SetBinContent(15,47178.04);
   htotfail_cat2_2016_fit_s__17->SetBinContent(16,43902.14);
   htotfail_cat2_2016_fit_s__17->SetBinContent(17,39612.04);
   htotfail_cat2_2016_fit_s__17->SetBinContent(18,35452.47);
   htotfail_cat2_2016_fit_s__17->SetBinContent(19,31558.68);
   htotfail_cat2_2016_fit_s__17->SetBinContent(20,27745.08);
   htotfail_cat2_2016_fit_s__17->SetBinContent(21,0.0001109631);
   htotfail_cat2_2016_fit_s__17->SetBinContent(22,0.0001109631);
   htotfail_cat2_2016_fit_s__17->SetBinContent(23,0.0001109631);
   htotfail_cat2_2016_fit_s__17->SetMinimum(0);
   htotfail_cat2_2016_fit_s__17->SetMaximum(131574.7);
   htotfail_cat2_2016_fit_s__17->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_s__17->SetFillColor(ci);
   htotfail_cat2_2016_fit_s__17->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_s__17->SetLineColor(ci);
   htotfail_cat2_2016_fit_s__17->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat2_2016_fit_s__17->SetMarkerColor(ci);
   htotfail_cat2_2016_fit_s__17->SetMarkerSize(0);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetRange(2,20);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetLabelOffset(100);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetTitleOffset(100);
   htotfail_cat2_2016_fit_s__17->GetXaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s__17->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat2_2016_fit_s__17->GetYaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s__17->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat2_2016_fit_s__17->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat2_2016_fit_s__17->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat2_2016_fit_s__17->GetYaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s__17->GetZaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s__17->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_s__17->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_s__17->GetZaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s__17->Draw("");
   
   TH1F *htot_linefail_cat2_2016_fit_s__18 = new TH1F("htot_linefail_cat2_2016_fit_s__18","wqq in cat2_2016_fail_cat2",23,40,201);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(1,0.0001109631);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(2,0.0001109631);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(3,87716.45);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(4,81084.66);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(5,76669.06);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(6,73628.92);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(7,71412.75);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(8,68036.55);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(9,64144.19);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(10,61087.89);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(11,59008.78);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(12,56514.54);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(13,54440.05);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(14,50806.55);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(15,47178.04);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(16,43902.14);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(17,39612.04);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(18,35452.47);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(19,31558.68);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(20,27745.08);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(21,0.0001109631);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(22,0.0001109631);
   htot_linefail_cat2_2016_fit_s__18->SetBinContent(23,0.0001109631);
   htot_linefail_cat2_2016_fit_s__18->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat2_2016_fit_s__18->SetFillColor(ci);
   htot_linefail_cat2_2016_fit_s__18->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat2_2016_fit_s__18->SetLineColor(ci);
   htot_linefail_cat2_2016_fit_s__18->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat2_2016_fit_s__18->SetMarkerColor(ci);
   htot_linefail_cat2_2016_fit_s__18->SetMarkerSize(0);
   htot_linefail_cat2_2016_fit_s__18->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat2_2016_fit_s__18->GetXaxis()->SetRange(2,20);
   htot_linefail_cat2_2016_fit_s__18->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat2_2016_fit_s__18->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat2_2016_fit_s__18->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat2_2016_fit_s__18->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat2_2016_fit_s__18->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat2_2016_fit_s__18->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat2_2016_fit_s__18->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat2_2016_fit_s__18->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat2_2016_fit_s__18->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat2_2016_fit_s__18->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat2_2016_fit_s__18->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat2_2016_fit_s__18->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat2_2016_fit_s__18->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat2_2016_fit_s__18->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat2_2016_fit_s__18->Draw("histsame");
   
   TH1F *qcd__19 = new TH1F("qcd__19","qcd in cat2_2016_fail_cat2",23,40,201);
   qcd__19->SetBinContent(3,87495.23);
   qcd__19->SetBinContent(4,80460.45);
   qcd__19->SetBinContent(5,75386.8);
   qcd__19->SetBinContent(6,70532.63);
   qcd__19->SetBinContent(7,66988.19);
   qcd__19->SetBinContent(8,64345.82);
   qcd__19->SetBinContent(9,61743.45);
   qcd__19->SetBinContent(10,59977.36);
   qcd__19->SetBinContent(11,58440.64);
   qcd__19->SetBinContent(12,56202.05);
   qcd__19->SetBinContent(13,54202.05);
   qcd__19->SetBinContent(14,50595.48);
   qcd__19->SetBinContent(15,46991.66);
   qcd__19->SetBinContent(16,43753.32);
   qcd__19->SetBinContent(17,39500.95);
   qcd__19->SetBinContent(18,35354.5);
   qcd__19->SetBinContent(19,31476.62);
   qcd__19->SetBinContent(20,27681.18);
   qcd__19->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__19->SetLineColor(ci);
   qcd__19->SetLineStyle(2);
   qcd__19->SetLineWidth(2);
   qcd__19->GetXaxis()->SetTitle("x");
   qcd__19->GetXaxis()->SetLabelFont(42);
   qcd__19->GetXaxis()->SetLabelSize(0.035);
   qcd__19->GetXaxis()->SetTitleSize(0.035);
   qcd__19->GetXaxis()->SetTitleFont(42);
   qcd__19->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__19->GetYaxis()->SetLabelFont(42);
   qcd__19->GetYaxis()->SetLabelSize(0.035);
   qcd__19->GetYaxis()->SetTitleSize(0.035);
   qcd__19->GetYaxis()->SetTitleOffset(0);
   qcd__19->GetYaxis()->SetTitleFont(42);
   qcd__19->GetZaxis()->SetLabelFont(42);
   qcd__19->GetZaxis()->SetLabelSize(0.035);
   qcd__19->GetZaxis()->SetTitleSize(0.035);
   qcd__19->GetZaxis()->SetTitleFont(42);
   qcd__19->Draw("hist sames");
   
   TH1F *htotfail_cat2_2016_fit_s__20 = new TH1F("htotfail_cat2_2016_fit_s__20","wqq in cat2_2016_fail_cat2",23,40,201);
   htotfail_cat2_2016_fit_s__20->SetBinContent(1,0.0001109631);
   htotfail_cat2_2016_fit_s__20->SetBinContent(2,0.0001109631);
   htotfail_cat2_2016_fit_s__20->SetBinContent(3,87716.45);
   htotfail_cat2_2016_fit_s__20->SetBinContent(4,81084.66);
   htotfail_cat2_2016_fit_s__20->SetBinContent(5,76669.06);
   htotfail_cat2_2016_fit_s__20->SetBinContent(6,73628.92);
   htotfail_cat2_2016_fit_s__20->SetBinContent(7,71412.75);
   htotfail_cat2_2016_fit_s__20->SetBinContent(8,68036.55);
   htotfail_cat2_2016_fit_s__20->SetBinContent(9,64144.19);
   htotfail_cat2_2016_fit_s__20->SetBinContent(10,61087.89);
   htotfail_cat2_2016_fit_s__20->SetBinContent(11,59008.78);
   htotfail_cat2_2016_fit_s__20->SetBinContent(12,56514.54);
   htotfail_cat2_2016_fit_s__20->SetBinContent(13,54440.05);
   htotfail_cat2_2016_fit_s__20->SetBinContent(14,50806.55);
   htotfail_cat2_2016_fit_s__20->SetBinContent(15,47178.04);
   htotfail_cat2_2016_fit_s__20->SetBinContent(16,43902.14);
   htotfail_cat2_2016_fit_s__20->SetBinContent(17,39612.04);
   htotfail_cat2_2016_fit_s__20->SetBinContent(18,35452.47);
   htotfail_cat2_2016_fit_s__20->SetBinContent(19,31558.68);
   htotfail_cat2_2016_fit_s__20->SetBinContent(20,27745.08);
   htotfail_cat2_2016_fit_s__20->SetBinContent(21,0.0001109631);
   htotfail_cat2_2016_fit_s__20->SetBinContent(22,0.0001109631);
   htotfail_cat2_2016_fit_s__20->SetBinContent(23,0.0001109631);
   htotfail_cat2_2016_fit_s__20->SetMinimum(0);
   htotfail_cat2_2016_fit_s__20->SetMaximum(131574.7);
   htotfail_cat2_2016_fit_s__20->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_s__20->SetFillColor(ci);
   htotfail_cat2_2016_fit_s__20->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_s__20->SetLineColor(ci);
   htotfail_cat2_2016_fit_s__20->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat2_2016_fit_s__20->SetMarkerColor(ci);
   htotfail_cat2_2016_fit_s__20->SetMarkerSize(0);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetRange(2,20);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetLabelOffset(100);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetTitleOffset(100);
   htotfail_cat2_2016_fit_s__20->GetXaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s__20->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat2_2016_fit_s__20->GetYaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s__20->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat2_2016_fit_s__20->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat2_2016_fit_s__20->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat2_2016_fit_s__20->GetYaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s__20->GetZaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s__20->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_s__20->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_s__20->GetZaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s__20->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis5[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_5 = new TH1F("hstackMC_stack_5","hstackMC",23, xAxis5);
   hstackMC_stack_5->SetMinimum(0);
   hstackMC_stack_5->SetMaximum(4652.882);
   hstackMC_stack_5->SetDirectory(0);
   hstackMC_stack_5->SetStats(0);
   hstackMC_stack_5->SetLineStyle(0);
   hstackMC_stack_5->SetMarkerStyle(20);
   hstackMC_stack_5->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_5->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_5->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_5->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_5->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_5->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_5->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_5->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_5->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_5->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_5->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_5->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_5->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_5->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_5->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_5->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_5->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_5);
   
   Double_t xAxis6[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat2_2016_fail_cat2",23, xAxis6);
   tqq_stack_1->SetBinContent(3,69.98968);
   tqq_stack_1->SetBinContent(4,97.13696);
   tqq_stack_1->SetBinContent(5,156.6723);
   tqq_stack_1->SetBinContent(6,294.6698);
   tqq_stack_1->SetBinContent(7,392.5933);
   tqq_stack_1->SetBinContent(8,272.2913);
   tqq_stack_1->SetBinContent(9,188.429);
   tqq_stack_1->SetBinContent(10,167.5875);
   tqq_stack_1->SetBinContent(11,177.5882);
   tqq_stack_1->SetBinContent(12,184.1103);
   tqq_stack_1->SetBinContent(13,189.8536);
   tqq_stack_1->SetBinContent(14,180.4695);
   tqq_stack_1->SetBinContent(15,162.7735);
   tqq_stack_1->SetBinContent(16,139.0744);
   tqq_stack_1->SetBinContent(17,106.2614);
   tqq_stack_1->SetBinContent(18,93.14484);
   tqq_stack_1->SetBinContent(19,82.06059);
   tqq_stack_1->SetBinContent(20,63.90523);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat2_2016_fail_cat2",23,40,201);
   wqq_stack_2->SetBinContent(1,7.641469e-05);
   wqq_stack_2->SetBinContent(2,7.641469e-05);
   wqq_stack_2->SetBinContent(3,134.9702);
   wqq_stack_2->SetBinContent(4,470.6125);
   wqq_stack_2->SetBinContent(5,995.3113);
   wqq_stack_2->SetBinContent(6,2454.234);
   wqq_stack_2->SetBinContent(7,3326.603);
   wqq_stack_2->SetBinContent(8,2123.51);
   wqq_stack_2->SetBinContent(9,1026.827);
   wqq_stack_2->SetBinContent(10,262.4203);
   wqq_stack_2->SetBinContent(11,65.76122);
   wqq_stack_2->SetBinContent(12,35.61427);
   wqq_stack_2->SetBinContent(13,14.69312);
   wqq_stack_2->SetBinContent(14,5.827429);
   wqq_stack_2->SetBinContent(15,7.641469e-05);
   wqq_stack_2->SetBinContent(16,7.641469e-05);
   wqq_stack_2->SetBinContent(17,7.641469e-05);
   wqq_stack_2->SetBinContent(18,7.641469e-05);
   wqq_stack_2->SetBinContent(19,7.641469e-05);
   wqq_stack_2->SetBinContent(20,7.641469e-05);
   wqq_stack_2->SetBinContent(21,7.641469e-05);
   wqq_stack_2->SetBinContent(22,7.641469e-05);
   wqq_stack_2->SetBinContent(23,7.641469e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat2_2016_fail_cat2",23,40,201);
   zqq_stack_3->SetBinContent(1,3.454841e-05);
   zqq_stack_3->SetBinContent(2,3.454841e-05);
   zqq_stack_3->SetBinContent(3,16.26864);
   zqq_stack_3->SetBinContent(4,56.47206);
   zqq_stack_3->SetBinContent(5,130.2741);
   zqq_stack_3->SetBinContent(6,347.3842);
   zqq_stack_3->SetBinContent(7,705.3638);
   zqq_stack_3->SetBinContent(8,1294.929);
   zqq_stack_3->SetBinContent(9,1185.491);
   zqq_stack_3->SetBinContent(10,680.5245);
   zqq_stack_3->SetBinContent(11,324.7862);
   zqq_stack_3->SetBinContent(12,92.76005);
   zqq_stack_3->SetBinContent(13,33.44727);
   zqq_stack_3->SetBinContent(14,24.77672);
   zqq_stack_3->SetBinContent(15,23.61131);
   zqq_stack_3->SetBinContent(16,9.751191);
   zqq_stack_3->SetBinContent(17,4.824191);
   zqq_stack_3->SetBinContent(18,4.824191);
   zqq_stack_3->SetBinContent(19,3.454841e-05);
   zqq_stack_3->SetBinContent(20,3.454841e-05);
   zqq_stack_3->SetBinContent(21,3.454841e-05);
   zqq_stack_3->SetBinContent(22,3.454841e-05);
   zqq_stack_3->SetBinContent(23,3.454841e-05);
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
   
   TH1F *hsigfail_cat2_2016_fit_s_stack_4 = new TH1F("hsigfail_cat2_2016_fit_s_stack_4","ggH_hbb in cat2_2016_fail_cat2",23,40,201);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(1,9.313839e-07);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(2,9.313839e-07);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(3,2.193141);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(4,1.220902);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(5,3.501259);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(6,6.093489);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(7,6.755948);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(8,5.9993);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(9,8.852746);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(10,10.23963);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(11,13.63226);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(12,20.5539);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(13,19.79445);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(14,15.02983);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(15,9.105763);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(16,3.359275);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(17,2.253233);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(18,1.526262);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(19,1.967114);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(20,0.9763504);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(21,9.313839e-07);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(22,9.313839e-07);
   hsigfail_cat2_2016_fit_s_stack_4->SetBinContent(23,9.313839e-07);
   hsigfail_cat2_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat2_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat2_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat2_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3005[23] = {
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
   Double_t data_copy_fy3005[23] = {
   0,
   0,
   87728,
   81150,
   76700,
   73616,
   71417,
   68084,
   64199,
   61115,
   59067,
   56518,
   54459,
   50835,
   47203,
   43900,
   39621,
   35469,
   31548,
   27766,
   0,
   0,
   0};
   Double_t data_copy_felx3005[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3005[23] = {
   1.841055,
   1.841055,
   297.1967,
   285.8758,
   277.9549,
   272.3298,
   268.2467,
   261.9361,
   254.382,
   248.2212,
   244.0437,
   238.7417,
   234.371,
   226.4726,
   218.2688,
   210.5294,
   200.0563,
   189.338,
   178.6233,
   167.637,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3005[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3005[23] = {
   0,
   0,
   296.195,
   284.874,
   276.953,
   271.3279,
   267.2448,
   260.9341,
   253.38,
   247.2192,
   243.0416,
   237.7396,
   233.3689,
   225.4703,
   217.2664,
   209.527,
   199.0537,
   188.3353,
   177.6205,
   166.6339,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3005,data_copy_fy3005,data_copy_felx3005,data_copy_fehx3005,data_copy_fely3005,data_copy_fehy3005);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat2_2016_fail_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3005 = new TH1F("Graph_data_copy3005","WH_hbb in cat2_2016_fail_cat2",100,28.1,212.9);
   Graph_data_copy3005->SetMinimum(0);
   Graph_data_copy3005->SetMaximum(96826.8);
   Graph_data_copy3005->SetDirectory(0);
   Graph_data_copy3005->SetStats(0);
   Graph_data_copy3005->SetLineStyle(0);
   Graph_data_copy3005->SetMarkerStyle(20);
   Graph_data_copy3005->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3005->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3005->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3005->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3005->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3005->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3005->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3005->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3005->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3005->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3005->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3005);
   
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
   entry=leg->AddEntry("htotfail_cat2_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat2_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat2_2016_fit_s_copy__21 = new TH1F("htotfail_cat2_2016_fit_s_copy__21","wqq in cat2_2016_fail_cat2",23,40,201);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(1,0.0001109631);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(2,0.0001109631);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(3,87716.45);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(4,81084.66);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(5,76669.06);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(6,73628.92);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(7,71412.75);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(8,68036.55);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(9,64144.19);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(10,61087.89);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(11,59008.78);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(12,56514.54);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(13,54440.05);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(14,50806.55);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(15,47178.04);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(16,43902.14);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(17,39612.04);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(18,35452.47);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(19,31558.68);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(20,27745.08);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(21,0.0001109631);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(22,0.0001109631);
   htotfail_cat2_2016_fit_s_copy__21->SetBinContent(23,0.0001109631);
   htotfail_cat2_2016_fit_s_copy__21->SetMaximum(131574.7);
   htotfail_cat2_2016_fit_s_copy__21->SetEntries(92);
   htotfail_cat2_2016_fit_s_copy__21->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_s_copy__21->SetFillColor(ci);
   htotfail_cat2_2016_fit_s_copy__21->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_s_copy__21->SetLineColor(ci);
   htotfail_cat2_2016_fit_s_copy__21->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat2_2016_fit_s_copy__21->SetMarkerColor(ci);
   htotfail_cat2_2016_fit_s_copy__21->SetMarkerSize(0);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetRange(2,20);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetLabelOffset(100);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetTitleOffset(100);
   htotfail_cat2_2016_fit_s_copy__21->GetXaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s_copy__21->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat2_2016_fit_s_copy__21->GetYaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s_copy__21->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat2_2016_fit_s_copy__21->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat2_2016_fit_s_copy__21->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat2_2016_fit_s_copy__21->GetYaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s_copy__21->GetZaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_s_copy__21->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_s_copy__21->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_s_copy__21->GetZaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_s_copy__21->Draw("sameaxis");
   p12fail_cat2_2016_fit_s->Modified();
   cfail_cat2_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat2_2016_fit_s
   TPad *p22fail_cat2_2016_fit_s = new TPad("p22fail_cat2_2016_fit_s", "p22fail_cat2_2016_fit_s",0,0,1,0.3);
   p22fail_cat2_2016_fit_s->Draw();
   p22fail_cat2_2016_fit_s->cd();
   p22fail_cat2_2016_fit_s->Range(18.24324,-17.72462,197.973,24.69077);
   p22fail_cat2_2016_fit_s->SetFillColor(0);
   p22fail_cat2_2016_fit_s->SetBorderMode(0);
   p22fail_cat2_2016_fit_s->SetBorderSize(2);
   p22fail_cat2_2016_fit_s->SetTickx(1);
   p22fail_cat2_2016_fit_s->SetTicky(1);
   p22fail_cat2_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat2_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat2_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat2_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat2_2016_fit_s__22 = new TH1F("iOneWithErrorsfail_cat2_2016_fit_s__22","",23,40,201);
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetMinimum(-5);
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetMaximum(22.57);
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetFillColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetLineColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetMarkerColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_s__22->SetMarkerSize(0);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetRange(2,20);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_s__22->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s__22->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_6 = new TH1F("hstack_stack_6","hstack",23,40,201);
   hstack_stack_6->SetMinimum(0);
   hstack_stack_6->SetMaximum(15.86807);
   hstack_stack_6->SetDirectory(0);
   hstack_stack_6->SetStats(0);
   hstack_stack_6->SetLineStyle(0);
   hstack_stack_6->SetMarkerStyle(20);
   hstack_stack_6->GetXaxis()->SetLabelFont(42);
   hstack_stack_6->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_6->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_6->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_6->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_6->GetXaxis()->SetTitleFont(42);
   hstack_stack_6->GetYaxis()->SetLabelFont(42);
   hstack_stack_6->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_6->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_6->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_6->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_6->GetYaxis()->SetTitleFont(42);
   hstack_stack_6->GetZaxis()->SetLabelFont(42);
   hstack_stack_6->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_6->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_6->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_6->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_6);
   
   
   TH1F *sigHistResidualwqqfail_cat2_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat2_2016_fit_s_stack_1","wqq in cat2_2016_fail_cat2",23,40,201);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(3,0.4556801);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(4,1.652002);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(5,3.593791);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(6,9.045269);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(7,12.44778);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(8,8.138107);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(9,4.052519);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(10,1.061489);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(11,0.2705759);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(12,0.1498037);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(13,0.06296095);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(14,0.02584566);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(15,3.517096e-07);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(16,3.647009e-07);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(17,3.838898e-07);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(18,4.057374e-07);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(19,4.302133e-07);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetBinContent(20,4.585782e-07);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat2_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat2_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat2_2016_fit_s_stack_2","zqq in cat2_2016_fail_cat2",23,40,201);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(3,0.05492543);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(4,0.1982352);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(5,0.4703833);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(6,1.280311);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(7,2.639393);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(8,4.962665);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(9,4.678708);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(10,2.752717);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(11,1.33634);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(12,0.390175);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(13,0.1433236);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(14,0.109889);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(15,0.1086745);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(16,0.04653906);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(17,0.02423562);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(18,0.0256149);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(19,1.945069e-07);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetBinContent(20,2.073312e-07);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat2_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3","ggH_hbb in cat2_2016_fail_cat2",23,40,201);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(3,0.007404381);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(4,0.004285763);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(5,0.01264207);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(6,0.02245802);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(7,0.02528);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(8,0.02299163);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(9,0.03493861);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(10,0.04141925);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(11,0.05609021);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(12,0.08645552);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(13,0.08482043);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(14,0.06665992);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(15,0.04191058);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(16,0.01603266);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(17,0.01131972);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(18,0.00810396);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(19,0.01107481);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetBinContent(20,0.005859253);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat2_2016_fit_sfail_cat2_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat2_2016_fit_s__23 = new TH1F("iOneWithErrorsLinefail_cat2_2016_fit_s__23","",23,40,201);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetFillColor(ci);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetLineColor(ci);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_s__23->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat2_2016_fit_s_fx3006[23] = {
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_s_fy3006[23] = {
   0,
   0,
   0.5477223,
   2.072278,
   4.160831,
   10.24014,
   15.04667,
   13.23179,
   8.912284,
   3.908025,
   1.83889,
   0.5522279,
   0.2862549,
   0.2607414,
   0.2225252,
   0.036144,
   0.06892592,
   0.1127902,
   -0.06011545,
   0.124793,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat2_2016_fit_s_felx3006[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_s_fely3006[23] = {
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
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat2_2016_fit_s_fehx3006[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_s_fehy3006[23] = {
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
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat2_2016_fit_s_fx3006,Graph_from_iRatiofail_cat2_2016_fit_s_fy3006,Graph_from_iRatiofail_cat2_2016_fit_s_felx3006,Graph_from_iRatiofail_cat2_2016_fit_s_fehx3006,Graph_from_iRatiofail_cat2_2016_fit_s_fely3006,Graph_from_iRatiofail_cat2_2016_fit_s_fehy3006);
   grae->SetName("Graph_from_iRatiofail_cat2_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006 = new TH1F("Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->SetMinimum(-2.770794);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->SetMaximum(17.75735);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->SetStats(0);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat2_2016_fit_s3006);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat2_2016_fit_s_copy__24 = new TH1F("iOneWithErrorsfail_cat2_2016_fit_s_copy__24","",23,40,201);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetMinimum(-5);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetMaximum(22.57);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetEntries(184);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetFillColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetLineColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetMarkerColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->SetMarkerSize(0);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetRange(2,20);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_s_copy__24->Draw("sameaxis");
   p22fail_cat2_2016_fit_s->Modified();
   cfail_cat2_2016_fit_s->cd();
   cfail_cat2_2016_fit_s->Modified();
   cfail_cat2_2016_fit_s->cd();
   cfail_cat2_2016_fit_s->SetSelected(cfail_cat2_2016_fit_s);
}
