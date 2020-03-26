void mlfit_fail_cat2_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat2_2016_fit_b/cfail_cat2_2016_fit_b
//=========  (Wed Sep  4 11:54:17 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat2_2016_fit_b = new TCanvas("cfail_cat2_2016_fit_b", "cfail_cat2_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat2_2016_fit_b->SetHighLightColor(2);
   cfail_cat2_2016_fit_b->Range(0,0,1,1);
   cfail_cat2_2016_fit_b->SetFillColor(0);
   cfail_cat2_2016_fit_b->SetBorderMode(0);
   cfail_cat2_2016_fit_b->SetBorderSize(2);
   cfail_cat2_2016_fit_b->SetTickx(1);
   cfail_cat2_2016_fit_b->SetTicky(1);
   cfail_cat2_2016_fit_b->SetLeftMargin(0.16);
   cfail_cat2_2016_fit_b->SetBottomMargin(0.13);
   cfail_cat2_2016_fit_b->SetFrameFillStyle(0);
   cfail_cat2_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat2_2016_fit_b
   TPad *p12fail_cat2_2016_fit_b = new TPad("p12fail_cat2_2016_fit_b", "p12fail_cat2_2016_fit_b",0,0.3,1,1);
   p12fail_cat2_2016_fit_b->Draw();
   p12fail_cat2_2016_fit_b->cd();
   p12fail_cat2_2016_fit_b->Range(18.24324,-3281.607,197.973,160798.7);
   p12fail_cat2_2016_fit_b->SetFillColor(0);
   p12fail_cat2_2016_fit_b->SetBorderMode(0);
   p12fail_cat2_2016_fit_b->SetBorderSize(2);
   p12fail_cat2_2016_fit_b->SetTickx(1);
   p12fail_cat2_2016_fit_b->SetTicky(1);
   p12fail_cat2_2016_fit_b->SetLeftMargin(0.16);
   p12fail_cat2_2016_fit_b->SetBottomMargin(0.02);
   p12fail_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat2_2016_fit_b->SetFrameBorderMode(0);
   p12fail_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat2_2016_fit_b__17 = new TH1F("htotfail_cat2_2016_fit_b__17","wqq in cat2_2016_fail_cat2",23,40,201);
   htotfail_cat2_2016_fit_b__17->SetBinContent(1,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetBinContent(2,96260.47);
   htotfail_cat2_2016_fit_b__17->SetBinContent(3,87703.64);
   htotfail_cat2_2016_fit_b__17->SetBinContent(4,81087.66);
   htotfail_cat2_2016_fit_b__17->SetBinContent(5,76679.97);
   htotfail_cat2_2016_fit_b__17->SetBinContent(6,73634.96);
   htotfail_cat2_2016_fit_b__17->SetBinContent(7,71423.85);
   htotfail_cat2_2016_fit_b__17->SetBinContent(8,68057.68);
   htotfail_cat2_2016_fit_b__17->SetBinContent(9,64179.62);
   htotfail_cat2_2016_fit_b__17->SetBinContent(10,61115.39);
   htotfail_cat2_2016_fit_b__17->SetBinContent(11,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetBinContent(12,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetBinContent(13,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetBinContent(14,50823.14);
   htotfail_cat2_2016_fit_b__17->SetBinContent(15,47185.22);
   htotfail_cat2_2016_fit_b__17->SetBinContent(16,43899.69);
   htotfail_cat2_2016_fit_b__17->SetBinContent(17,39610.65);
   htotfail_cat2_2016_fit_b__17->SetBinContent(18,35448.14);
   htotfail_cat2_2016_fit_b__17->SetBinContent(19,31560.23);
   htotfail_cat2_2016_fit_b__17->SetBinContent(20,27741.35);
   htotfail_cat2_2016_fit_b__17->SetBinContent(21,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetBinContent(22,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetBinContent(23,0.0001361665);
   htotfail_cat2_2016_fit_b__17->SetMinimum(0);
   htotfail_cat2_2016_fit_b__17->SetMaximum(144390.7);
   htotfail_cat2_2016_fit_b__17->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_b__17->SetFillColor(ci);
   htotfail_cat2_2016_fit_b__17->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_b__17->SetLineColor(ci);
   htotfail_cat2_2016_fit_b__17->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat2_2016_fit_b__17->SetMarkerColor(ci);
   htotfail_cat2_2016_fit_b__17->SetMarkerSize(0);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetRange(2,20);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetLabelOffset(100);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetTitleOffset(100);
   htotfail_cat2_2016_fit_b__17->GetXaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b__17->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat2_2016_fit_b__17->GetYaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b__17->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat2_2016_fit_b__17->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat2_2016_fit_b__17->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat2_2016_fit_b__17->GetYaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b__17->GetZaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b__17->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_b__17->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_b__17->GetZaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b__17->Draw("");
   
   TH1F *htot_linefail_cat2_2016_fit_b__18 = new TH1F("htot_linefail_cat2_2016_fit_b__18","wqq in cat2_2016_fail_cat2",23,40,201);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(1,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(2,96260.47);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(3,87703.64);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(4,81087.66);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(5,76679.97);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(6,73634.96);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(7,71423.85);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(8,68057.68);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(9,64179.62);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(10,61115.39);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(11,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(12,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(13,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(14,50823.14);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(15,47185.22);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(16,43899.69);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(17,39610.65);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(18,35448.14);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(19,31560.23);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(20,27741.35);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(21,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(22,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetBinContent(23,0.0001361665);
   htot_linefail_cat2_2016_fit_b__18->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat2_2016_fit_b__18->SetFillColor(ci);
   htot_linefail_cat2_2016_fit_b__18->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat2_2016_fit_b__18->SetLineColor(ci);
   htot_linefail_cat2_2016_fit_b__18->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat2_2016_fit_b__18->SetMarkerColor(ci);
   htot_linefail_cat2_2016_fit_b__18->SetMarkerSize(0);
   htot_linefail_cat2_2016_fit_b__18->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat2_2016_fit_b__18->GetXaxis()->SetRange(2,20);
   htot_linefail_cat2_2016_fit_b__18->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat2_2016_fit_b__18->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat2_2016_fit_b__18->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat2_2016_fit_b__18->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat2_2016_fit_b__18->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat2_2016_fit_b__18->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat2_2016_fit_b__18->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat2_2016_fit_b__18->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat2_2016_fit_b__18->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat2_2016_fit_b__18->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat2_2016_fit_b__18->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat2_2016_fit_b__18->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat2_2016_fit_b__18->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat2_2016_fit_b__18->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat2_2016_fit_b__18->Draw("histsame");
   
   TH1F *qcd__19 = new TH1F("qcd__19","qcd in cat2_2016_fail_cat2",23,40,201);
   qcd__19->SetBinContent(2,96086.02);
   qcd__19->SetBinContent(3,87309.43);
   qcd__19->SetBinContent(4,80051.31);
   qcd__19->SetBinContent(5,74668.01);
   qcd__19->SetBinContent(6,69017.56);
   qcd__19->SetBinContent(7,65361.41);
   qcd__19->SetBinContent(8,63662.2);
   qcd__19->SetBinContent(9,61437.83);
   qcd__19->SetBinContent(10,59887.77);
   qcd__19->SetBinContent(14,50439.54);
   qcd__19->SetBinContent(15,46848.91);
   qcd__19->SetBinContent(16,43622.3);
   qcd__19->SetBinContent(17,39398.62);
   qcd__19->SetBinContent(18,35261.46);
   qcd__19->SetBinContent(19,31401.62);
   qcd__19->SetBinContent(20,27617.83);
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
   
   TH1F *htotfail_cat2_2016_fit_b__20 = new TH1F("htotfail_cat2_2016_fit_b__20","wqq in cat2_2016_fail_cat2",23,40,201);
   htotfail_cat2_2016_fit_b__20->SetBinContent(1,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetBinContent(2,96260.47);
   htotfail_cat2_2016_fit_b__20->SetBinContent(3,87703.64);
   htotfail_cat2_2016_fit_b__20->SetBinContent(4,81087.66);
   htotfail_cat2_2016_fit_b__20->SetBinContent(5,76679.97);
   htotfail_cat2_2016_fit_b__20->SetBinContent(6,73634.96);
   htotfail_cat2_2016_fit_b__20->SetBinContent(7,71423.85);
   htotfail_cat2_2016_fit_b__20->SetBinContent(8,68057.68);
   htotfail_cat2_2016_fit_b__20->SetBinContent(9,64179.62);
   htotfail_cat2_2016_fit_b__20->SetBinContent(10,61115.39);
   htotfail_cat2_2016_fit_b__20->SetBinContent(11,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetBinContent(12,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetBinContent(13,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetBinContent(14,50823.14);
   htotfail_cat2_2016_fit_b__20->SetBinContent(15,47185.22);
   htotfail_cat2_2016_fit_b__20->SetBinContent(16,43899.69);
   htotfail_cat2_2016_fit_b__20->SetBinContent(17,39610.65);
   htotfail_cat2_2016_fit_b__20->SetBinContent(18,35448.14);
   htotfail_cat2_2016_fit_b__20->SetBinContent(19,31560.23);
   htotfail_cat2_2016_fit_b__20->SetBinContent(20,27741.35);
   htotfail_cat2_2016_fit_b__20->SetBinContent(21,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetBinContent(22,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetBinContent(23,0.0001361665);
   htotfail_cat2_2016_fit_b__20->SetMinimum(0);
   htotfail_cat2_2016_fit_b__20->SetMaximum(144390.7);
   htotfail_cat2_2016_fit_b__20->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_b__20->SetFillColor(ci);
   htotfail_cat2_2016_fit_b__20->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_b__20->SetLineColor(ci);
   htotfail_cat2_2016_fit_b__20->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat2_2016_fit_b__20->SetMarkerColor(ci);
   htotfail_cat2_2016_fit_b__20->SetMarkerSize(0);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetRange(2,20);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetLabelOffset(100);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetTitleOffset(100);
   htotfail_cat2_2016_fit_b__20->GetXaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b__20->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat2_2016_fit_b__20->GetYaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b__20->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat2_2016_fit_b__20->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat2_2016_fit_b__20->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat2_2016_fit_b__20->GetYaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b__20->GetZaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b__20->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_b__20->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_b__20->GetZaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b__20->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis5[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_5 = new TH1F("hstackMC_stack_5","hstackMC",23, xAxis5);
   hstackMC_stack_5->SetMinimum(0);
   hstackMC_stack_5->SetMaximum(6365.557);
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
   tqq_stack_1->SetBinContent(2,119.0341);
   tqq_stack_1->SetBinContent(3,135.2797);
   tqq_stack_1->SetBinContent(4,187.7514);
   tqq_stack_1->SetBinContent(5,302.8244);
   tqq_stack_1->SetBinContent(6,569.5532);
   tqq_stack_1->SetBinContent(7,758.8247);
   tqq_stack_1->SetBinContent(8,526.2988);
   tqq_stack_1->SetBinContent(9,364.2054);
   tqq_stack_1->SetBinContent(10,323.9219);
   tqq_stack_1->SetBinContent(14,348.8208);
   tqq_stack_1->SetBinContent(15,314.6171);
   tqq_stack_1->SetBinContent(16,268.8103);
   tqq_stack_1->SetBinContent(17,205.3876);
   tqq_stack_1->SetBinContent(18,180.0352);
   tqq_stack_1->SetBinContent(19,158.611);
   tqq_stack_1->SetBinContent(20,123.5194);
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
   wqq_stack_2->SetBinContent(1,0.0001044945);
   wqq_stack_2->SetBinContent(2,41.27675);
   wqq_stack_2->SetBinContent(3,236.7065);
   wqq_stack_2->SetBinContent(4,781.3996);
   wqq_stack_2->SetBinContent(5,1558.591);
   wqq_stack_2->SetBinContent(6,3627.641);
   wqq_stack_2->SetBinContent(7,4523.079);
   wqq_stack_2->SetBinContent(8,2543.339);
   wqq_stack_2->SetBinContent(9,1280.185);
   wqq_stack_2->SetBinContent(10,325.0175);
   wqq_stack_2->SetBinContent(11,0.0001044945);
   wqq_stack_2->SetBinContent(12,0.0001044945);
   wqq_stack_2->SetBinContent(13,0.0001044945);
   wqq_stack_2->SetBinContent(14,10.55501);
   wqq_stack_2->SetBinContent(15,0.0001044945);
   wqq_stack_2->SetBinContent(16,0.0001044945);
   wqq_stack_2->SetBinContent(17,0.0001044945);
   wqq_stack_2->SetBinContent(18,0.0001044945);
   wqq_stack_2->SetBinContent(19,0.0001044945);
   wqq_stack_2->SetBinContent(20,0.0001044945);
   wqq_stack_2->SetBinContent(21,0.0001044945);
   wqq_stack_2->SetBinContent(22,0.0001044945);
   wqq_stack_2->SetBinContent(23,0.0001044945);
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
   zqq_stack_3->SetBinContent(1,3.167193e-05);
   zqq_stack_3->SetBinContent(2,14.14403);
   zqq_stack_3->SetBinContent(3,22.22615);
   zqq_stack_3->SetBinContent(4,67.20383);
   zqq_stack_3->SetBinContent(5,150.5428);
   zqq_stack_3->SetBinContent(6,420.2056);
   zqq_stack_3->SetBinContent(7,780.5317);
   zqq_stack_3->SetBinContent(8,1325.849);
   zqq_stack_3->SetBinContent(9,1097.404);
   zqq_stack_3->SetBinContent(10,578.6758);
   zqq_stack_3->SetBinContent(11,3.167193e-05);
   zqq_stack_3->SetBinContent(12,3.167193e-05);
   zqq_stack_3->SetBinContent(13,3.167193e-05);
   zqq_stack_3->SetBinContent(14,24.22441);
   zqq_stack_3->SetBinContent(15,21.69873);
   zqq_stack_3->SetBinContent(16,8.582326);
   zqq_stack_3->SetBinContent(17,6.636402);
   zqq_stack_3->SetBinContent(18,6.636402);
   zqq_stack_3->SetBinContent(19,3.167193e-05);
   zqq_stack_3->SetBinContent(20,3.167193e-05);
   zqq_stack_3->SetBinContent(21,3.167193e-05);
   zqq_stack_3->SetBinContent(22,3.167193e-05);
   zqq_stack_3->SetBinContent(23,3.167193e-05);
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
   
   TH1F *hsigfail_cat2_2016_fit_b_stack_4 = new TH1F("hsigfail_cat2_2016_fit_b_stack_4","hqq125 in cat2_2016_fail_cat2",23,40,201);
   hsigfail_cat2_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat2_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat2_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat2_2016_fit_b_stack_4,"");
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
   96236,
   87728,
   81150,
   76700,
   73616,
   71417,
   68084,
   64199,
   61115,
   0,
   0,
   0,
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
   311.2271,
   297.1967,
   285.8758,
   277.9549,
   272.3298,
   268.2467,
   261.9361,
   254.382,
   248.2212,
   1.841055,
   1.841055,
   1.841055,
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
   310.2255,
   296.195,
   284.874,
   276.953,
   271.3279,
   267.2448,
   260.9341,
   253.38,
   247.2192,
   0,
   0,
   0,
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
   grae->SetTitle("tqq in cat2_2016_fail_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3005 = new TH1F("Graph_data_copy3005","tqq in cat2_2016_fail_cat2",100,28.1,212.9);
   Graph_data_copy3005->SetMinimum(0);
   Graph_data_copy3005->SetMaximum(106201);
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
   entry=leg->AddEntry("htotfail_cat2_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat2_2016_fit_b_copy__21 = new TH1F("htotfail_cat2_2016_fit_b_copy__21","wqq in cat2_2016_fail_cat2",23,40,201);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(1,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(2,96260.47);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(3,87703.64);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(4,81087.66);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(5,76679.97);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(6,73634.96);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(7,71423.85);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(8,68057.68);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(9,64179.62);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(10,61115.39);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(11,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(12,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(13,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(14,50823.14);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(15,47185.22);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(16,43899.69);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(17,39610.65);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(18,35448.14);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(19,31560.23);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(20,27741.35);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(21,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(22,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetBinContent(23,0.0001361665);
   htotfail_cat2_2016_fit_b_copy__21->SetMaximum(144390.7);
   htotfail_cat2_2016_fit_b_copy__21->SetEntries(92);
   htotfail_cat2_2016_fit_b_copy__21->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_b_copy__21->SetFillColor(ci);
   htotfail_cat2_2016_fit_b_copy__21->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat2_2016_fit_b_copy__21->SetLineColor(ci);
   htotfail_cat2_2016_fit_b_copy__21->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat2_2016_fit_b_copy__21->SetMarkerColor(ci);
   htotfail_cat2_2016_fit_b_copy__21->SetMarkerSize(0);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetRange(2,20);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetLabelOffset(100);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetTitleOffset(100);
   htotfail_cat2_2016_fit_b_copy__21->GetXaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b_copy__21->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat2_2016_fit_b_copy__21->GetYaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b_copy__21->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat2_2016_fit_b_copy__21->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat2_2016_fit_b_copy__21->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat2_2016_fit_b_copy__21->GetYaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b_copy__21->GetZaxis()->SetLabelFont(42);
   htotfail_cat2_2016_fit_b_copy__21->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat2_2016_fit_b_copy__21->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat2_2016_fit_b_copy__21->GetZaxis()->SetTitleFont(42);
   htotfail_cat2_2016_fit_b_copy__21->Draw("sameaxis");
   p12fail_cat2_2016_fit_b->Modified();
   cfail_cat2_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_cat2_2016_fit_b
   TPad *p22fail_cat2_2016_fit_b = new TPad("p22fail_cat2_2016_fit_b", "p22fail_cat2_2016_fit_b",0,0,1,0.3);
   p22fail_cat2_2016_fit_b->Draw();
   p22fail_cat2_2016_fit_b->cd();
   p22fail_cat2_2016_fit_b->Range(18.24324,-20.9779,197.973,32.28176);
   p22fail_cat2_2016_fit_b->SetFillColor(0);
   p22fail_cat2_2016_fit_b->SetBorderMode(0);
   p22fail_cat2_2016_fit_b->SetBorderSize(2);
   p22fail_cat2_2016_fit_b->SetTickx(1);
   p22fail_cat2_2016_fit_b->SetTicky(1);
   p22fail_cat2_2016_fit_b->SetLeftMargin(0.16);
   p22fail_cat2_2016_fit_b->SetTopMargin(0.05);
   p22fail_cat2_2016_fit_b->SetBottomMargin(0.3);
   p22fail_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat2_2016_fit_b->SetFrameBorderMode(0);
   p22fail_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat2_2016_fit_b__22 = new TH1F("iOneWithErrorsfail_cat2_2016_fit_b__22","",23,40,201);
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetMinimum(-5);
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetMaximum(29.61877);
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetFillColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetLineColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetMarkerColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_b__22->SetMarkerSize(0);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetRange(2,20);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_b__22->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b__22->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_6 = new TH1F("hstack_stack_6","hstack",23,40,201);
   hstack_stack_6->SetMinimum(0);
   hstack_stack_6->SetMaximum(20.83779);
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
   
   
   TH1F *sigHistResidualwqqfail_cat2_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqfail_cat2_2016_fit_b_stack_1","wqq in cat2_2016_fail_cat2",23,40,201);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(2,0.133054);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(3,0.7991576);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(4,2.742966);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(5,5.627635);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(6,13.36995);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(7,16.92486);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(8,9.747053);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(9,5.052429);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(10,1.314694);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(14,0.04681329);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(15,4.80951e-07);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(16,4.987162e-07);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(17,5.249564e-07);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(18,5.548322e-07);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(19,5.883023e-07);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetBinContent(20,6.270903e-07);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat2_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat2_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqfail_cat2_2016_fit_b_stack_2","zqq in cat2_2016_fail_cat2",23,40,201);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(2,0.04559273);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(3,0.07503892);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(4,0.2359072);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(5,0.5435679);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(6,1.5487);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(7,2.920662);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(8,5.081165);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(9,4.33106);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(10,2.34074);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(14,0.1074395);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(15,0.09987152);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(16,0.04096048);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(17,0.03333975);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(18,0.03523716);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(19,1.783124e-07);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetBinContent(20,1.900689e-07);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat2_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat2_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3","hqq125 in cat2_2016_fail_cat2",23,40,201);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat2_2016_fit_bfail_cat2_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat2_2016_fit_b__23 = new TH1F("iOneWithErrorsLinefail_cat2_2016_fit_b__23","",23,40,201);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetFillColor(ci);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetLineColor(ci);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat2_2016_fit_b__23->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat2_2016_fit_b_fx3006[23] = {
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_b_fy3006[23] = {
   0,
   0.09945511,
   0.9532039,
   3.18648,
   6.221025,
   14.79413,
   19.74585,
   14.87198,
   9.422681,
   3.639112,
   0,
   0,
   0,
   0.2059611,
   0.1808622,
   0.0422484,
   0.08491752,
   0.1452429,
   -0.06884632,
   0.1470463,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat2_2016_fit_b_felx3006[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_b_fely3006[23] = {
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_b_fehx3006[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat2_2016_fit_b_fehy3006[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat2_2016_fit_b_fx3006,Graph_from_iRatiofail_cat2_2016_fit_b_fy3006,Graph_from_iRatiofail_cat2_2016_fit_b_felx3006,Graph_from_iRatiofail_cat2_2016_fit_b_fehx3006,Graph_from_iRatiofail_cat2_2016_fit_b_fely3006,Graph_from_iRatiofail_cat2_2016_fit_b_fehy3006);
   grae->SetName("Graph_from_iRatiofail_cat2_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006 = new TH1F("Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->SetMinimum(-3.250316);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->SetMaximum(22.92732);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->SetStats(0);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat2_2016_fit_b3006);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat2_2016_fit_b_copy__24 = new TH1F("iOneWithErrorsfail_cat2_2016_fit_b_copy__24","",23,40,201);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetMinimum(-5);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetMaximum(29.61877);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetEntries(184);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetFillColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetLineColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetMarkerColor(ci);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->SetMarkerSize(0);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetRange(2,20);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat2_2016_fit_b_copy__24->Draw("sameaxis");
   p22fail_cat2_2016_fit_b->Modified();
   cfail_cat2_2016_fit_b->cd();
   cfail_cat2_2016_fit_b->Modified();
   cfail_cat2_2016_fit_b->cd();
   cfail_cat2_2016_fit_b->SetSelected(cfail_cat2_2016_fit_b);
}
