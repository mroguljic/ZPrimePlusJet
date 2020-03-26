void mlfit_fail_allcats_2016_fit_b()
{
//=========Macro generated from canvas: cfail_allcats_2016_fit_b/cfail_allcats_2016_fit_b
//=========  (Mon Sep 30 17:21:34 2019) by ROOT version 6.12/07
   TCanvas *cfail_allcats_2016_fit_b = new TCanvas("cfail_allcats_2016_fit_b", "cfail_allcats_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_allcats_2016_fit_b->SetHighLightColor(2);
   cfail_allcats_2016_fit_b->Range(0,0,1,1);
   cfail_allcats_2016_fit_b->SetFillColor(0);
   cfail_allcats_2016_fit_b->SetBorderMode(0);
   cfail_allcats_2016_fit_b->SetBorderSize(2);
   cfail_allcats_2016_fit_b->SetTickx(1);
   cfail_allcats_2016_fit_b->SetTicky(1);
   cfail_allcats_2016_fit_b->SetLeftMargin(0.16);
   cfail_allcats_2016_fit_b->SetBottomMargin(0.13);
   cfail_allcats_2016_fit_b->SetFrameFillStyle(0);
   cfail_allcats_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_allcats_2016_fit_b
   TPad *p12fail_allcats_2016_fit_b = new TPad("p12fail_allcats_2016_fit_b", "p12fail_allcats_2016_fit_b",0,0.3,1,1);
   p12fail_allcats_2016_fit_b->Draw();
   p12fail_allcats_2016_fit_b->cd();
   p12fail_allcats_2016_fit_b->Range(13.7027,-12447.39,221.8108,609922.1);
   p12fail_allcats_2016_fit_b->SetFillColor(0);
   p12fail_allcats_2016_fit_b->SetBorderMode(0);
   p12fail_allcats_2016_fit_b->SetBorderSize(2);
   p12fail_allcats_2016_fit_b->SetTickx(1);
   p12fail_allcats_2016_fit_b->SetTicky(1);
   p12fail_allcats_2016_fit_b->SetLeftMargin(0.16);
   p12fail_allcats_2016_fit_b->SetBottomMargin(0.02);
   p12fail_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12fail_allcats_2016_fit_b->SetFrameBorderMode(0);
   p12fail_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12fail_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_allcats_2016_fit_b__105 = new TH1F("htotfail_allcats_2016_fit_b__105","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_b__105->SetBinContent(1,0.0004550005);
   htotfail_allcats_2016_fit_b__105->SetBinContent(2,0.0004550005);
   htotfail_allcats_2016_fit_b__105->SetBinContent(3,365123.4);
   htotfail_allcats_2016_fit_b__105->SetBinContent(4,338286.9);
   htotfail_allcats_2016_fit_b__105->SetBinContent(5,320380.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(6,311011.3);
   htotfail_allcats_2016_fit_b__105->SetBinContent(7,302346.8);
   htotfail_allcats_2016_fit_b__105->SetBinContent(8,287633.9);
   htotfail_allcats_2016_fit_b__105->SetBinContent(9,270071.5);
   htotfail_allcats_2016_fit_b__105->SetBinContent(10,256374.3);
   htotfail_allcats_2016_fit_b__105->SetBinContent(11,246226.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(12,234423.5);
   htotfail_allcats_2016_fit_b__105->SetBinContent(13,221948.5);
   htotfail_allcats_2016_fit_b__105->SetBinContent(14,208098.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(15,193190.8);
   htotfail_allcats_2016_fit_b__105->SetBinContent(16,177821.7);
   htotfail_allcats_2016_fit_b__105->SetBinContent(17,161896.8);
   htotfail_allcats_2016_fit_b__105->SetBinContent(18,145125.8);
   htotfail_allcats_2016_fit_b__105->SetBinContent(19,81950.13);
   htotfail_allcats_2016_fit_b__105->SetBinContent(20,74852.73);
   htotfail_allcats_2016_fit_b__105->SetBinContent(21,43638.7);
   htotfail_allcats_2016_fit_b__105->SetBinContent(22,40211.16);
   htotfail_allcats_2016_fit_b__105->SetBinContent(23,36662.77);
   htotfail_allcats_2016_fit_b__105->SetMinimum(0);
   htotfail_allcats_2016_fit_b__105->SetMaximum(547685.1);
   htotfail_allcats_2016_fit_b__105->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_b__105->SetFillColor(ci);
   htotfail_allcats_2016_fit_b__105->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_b__105->SetLineColor(ci);
   htotfail_allcats_2016_fit_b__105->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_b__105->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_b__105->SetMarkerSize(0);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_b__105->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b__105->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_b__105->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b__105->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_b__105->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_b__105->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_b__105->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b__105->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b__105->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_b__105->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_b__105->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b__105->Draw("");
   
   TH1F *htot_linefail_allcats_2016_fit_b__106 = new TH1F("htot_linefail_allcats_2016_fit_b__106","wqq in cat1_2016_fail_cat1",23,40,201);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(1,0.0004550005);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(2,0.0004550005);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(3,365123.4);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(4,338286.9);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(5,320380.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(6,311011.3);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(7,302346.8);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(8,287633.9);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(9,270071.5);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(10,256374.3);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(11,246226.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(12,234423.5);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(13,221948.5);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(14,208098.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(15,193190.8);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(16,177821.7);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(17,161896.8);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(18,145125.8);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(19,81950.13);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(20,74852.73);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(21,43638.7);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(22,40211.16);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(23,36662.77);
   htot_linefail_allcats_2016_fit_b__106->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_allcats_2016_fit_b__106->SetFillColor(ci);
   htot_linefail_allcats_2016_fit_b__106->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_allcats_2016_fit_b__106->SetLineColor(ci);
   htot_linefail_allcats_2016_fit_b__106->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_allcats_2016_fit_b__106->SetMarkerColor(ci);
   htot_linefail_allcats_2016_fit_b__106->SetMarkerSize(0);
   htot_linefail_allcats_2016_fit_b__106->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_allcats_2016_fit_b__106->GetXaxis()->SetRange(2,23);
   htot_linefail_allcats_2016_fit_b__106->GetXaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_b__106->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_allcats_2016_fit_b__106->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_allcats_2016_fit_b__106->GetXaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_b__106->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_allcats_2016_fit_b__106->GetYaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_b__106->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_allcats_2016_fit_b__106->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_allcats_2016_fit_b__106->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_allcats_2016_fit_b__106->GetYaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_b__106->GetZaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_b__106->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_allcats_2016_fit_b__106->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_allcats_2016_fit_b__106->GetZaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_b__106->Draw("histsame");
   
   TH1F *qcd_fail_sum__107 = new TH1F("qcd_fail_sum__107","qcd in cat1_2016_fail_cat1",23,40,201);
   qcd_fail_sum__107->SetBinContent(3,364210.3);
   qcd_fail_sum__107->SetBinContent(4,335810.6);
   qcd_fail_sum__107->SetBinContent(5,315160);
   qcd_fail_sum__107->SetBinContent(6,297923.7);
   qcd_fail_sum__107->SetBinContent(7,284007.6);
   qcd_fail_sum__107->SetBinContent(8,272770.8);
   qcd_fail_sum__107->SetBinContent(9,260157.5);
   qcd_fail_sum__107->SetBinContent(10,251657.3);
   qcd_fail_sum__107->SetBinContent(11,243831.5);
   qcd_fail_sum__107->SetBinContent(12,233106.4);
   qcd_fail_sum__107->SetBinContent(13,220949.5);
   qcd_fail_sum__107->SetBinContent(14,207174.4);
   qcd_fail_sum__107->SetBinContent(15,192373.6);
   qcd_fail_sum__107->SetBinContent(16,177194.8);
   qcd_fail_sum__107->SetBinContent(17,161415.6);
   qcd_fail_sum__107->SetBinContent(18,144732.6);
   qcd_fail_sum__107->SetBinContent(19,81740.77);
   qcd_fail_sum__107->SetBinContent(20,74667.4);
   qcd_fail_sum__107->SetBinContent(21,43549.45);
   qcd_fail_sum__107->SetBinContent(22,40148.06);
   qcd_fail_sum__107->SetBinContent(23,36621.48);
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
   
   TH1F *htotfail_allcats_2016_fit_b__108 = new TH1F("htotfail_allcats_2016_fit_b__108","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_b__108->SetBinContent(1,0.0004550005);
   htotfail_allcats_2016_fit_b__108->SetBinContent(2,0.0004550005);
   htotfail_allcats_2016_fit_b__108->SetBinContent(3,365123.4);
   htotfail_allcats_2016_fit_b__108->SetBinContent(4,338286.9);
   htotfail_allcats_2016_fit_b__108->SetBinContent(5,320380.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(6,311011.3);
   htotfail_allcats_2016_fit_b__108->SetBinContent(7,302346.8);
   htotfail_allcats_2016_fit_b__108->SetBinContent(8,287633.9);
   htotfail_allcats_2016_fit_b__108->SetBinContent(9,270071.5);
   htotfail_allcats_2016_fit_b__108->SetBinContent(10,256374.3);
   htotfail_allcats_2016_fit_b__108->SetBinContent(11,246226.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(12,234423.5);
   htotfail_allcats_2016_fit_b__108->SetBinContent(13,221948.5);
   htotfail_allcats_2016_fit_b__108->SetBinContent(14,208098.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(15,193190.8);
   htotfail_allcats_2016_fit_b__108->SetBinContent(16,177821.7);
   htotfail_allcats_2016_fit_b__108->SetBinContent(17,161896.8);
   htotfail_allcats_2016_fit_b__108->SetBinContent(18,145125.8);
   htotfail_allcats_2016_fit_b__108->SetBinContent(19,81950.13);
   htotfail_allcats_2016_fit_b__108->SetBinContent(20,74852.73);
   htotfail_allcats_2016_fit_b__108->SetBinContent(21,43638.7);
   htotfail_allcats_2016_fit_b__108->SetBinContent(22,40211.16);
   htotfail_allcats_2016_fit_b__108->SetBinContent(23,36662.77);
   htotfail_allcats_2016_fit_b__108->SetMinimum(0);
   htotfail_allcats_2016_fit_b__108->SetMaximum(547685.1);
   htotfail_allcats_2016_fit_b__108->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_b__108->SetFillColor(ci);
   htotfail_allcats_2016_fit_b__108->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_b__108->SetLineColor(ci);
   htotfail_allcats_2016_fit_b__108->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_b__108->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_b__108->SetMarkerSize(0);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_b__108->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b__108->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_b__108->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b__108->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_b__108->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_b__108->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_b__108->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b__108->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b__108->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_b__108->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_b__108->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b__108->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis27[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_27 = new TH1F("hstackMC_stack_27","hstackMC",23, xAxis27);
   hstackMC_stack_27->SetMinimum(0);
   hstackMC_stack_27->SetMaximum(19256.14);
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
   tqq_fail_sum_stack_1->SetBinContent(3,313.9725);
   tqq_fail_sum_stack_1->SetBinContent(4,408.1703);
   tqq_fail_sum_stack_1->SetBinContent(5,674.9297);
   tqq_fail_sum_stack_1->SetBinContent(6,1305.088);
   tqq_fail_sum_stack_1->SetBinContent(7,1625.371);
   tqq_fail_sum_stack_1->SetBinContent(8,1186.454);
   tqq_fail_sum_stack_1->SetBinContent(9,809.0425);
   tqq_fail_sum_stack_1->SetBinContent(10,737.7025);
   tqq_fail_sum_stack_1->SetBinContent(11,769.9686);
   tqq_fail_sum_stack_1->SetBinContent(12,826.7541);
   tqq_fail_sum_stack_1->SetBinContent(13,829.9705);
   tqq_fail_sum_stack_1->SetBinContent(14,820.9422);
   tqq_fail_sum_stack_1->SetBinContent(15,737.1778);
   tqq_fail_sum_stack_1->SetBinContent(16,596.5908);
   tqq_fail_sum_stack_1->SetBinContent(17,465.8383);
   tqq_fail_sum_stack_1->SetBinContent(18,376.4205);
   tqq_fail_sum_stack_1->SetBinContent(19,209.3667);
   tqq_fail_sum_stack_1->SetBinContent(20,184.4118);
   tqq_fail_sum_stack_1->SetBinContent(21,89.25867);
   tqq_fail_sum_stack_1->SetBinContent(22,63.09796);
   tqq_fail_sum_stack_1->SetBinContent(23,41.2807);
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
   wqq_fail_sum_stack_2->SetBinContent(1,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(2,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(3,526.3636);
   wqq_fail_sum_stack_2->SetBinContent(4,1838.334);
   wqq_fail_sum_stack_2->SetBinContent(5,3986.267);
   wqq_fail_sum_stack_2->SetBinContent(6,10385.47);
   wqq_fail_sum_stack_2->SetBinContent(7,13904.65);
   wqq_fail_sum_stack_2->SetBinContent(8,8369.596);
   wqq_fail_sum_stack_2->SetBinContent(9,3975.655);
   wqq_fail_sum_stack_2->SetBinContent(10,1228.062);
   wqq_fail_sum_stack_2->SetBinContent(11,367.0773);
   wqq_fail_sum_stack_2->SetBinContent(12,128.731);
   wqq_fail_sum_stack_2->SetBinContent(13,54.58083);
   wqq_fail_sum_stack_2->SetBinContent(14,15.28875);
   wqq_fail_sum_stack_2->SetBinContent(15,11.63158);
   wqq_fail_sum_stack_2->SetBinContent(16,3.274336);
   wqq_fail_sum_stack_2->SetBinContent(17,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(18,3.309062);
   wqq_fail_sum_stack_2->SetBinContent(19,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(20,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(21,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(22,0.0003135881);
   wqq_fail_sum_stack_2->SetBinContent(23,0.0003135881);
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
   zqq_fail_sum_stack_3->SetBinContent(1,0.0001414124);
   zqq_fail_sum_stack_3->SetBinContent(2,0.0001414124);
   zqq_fail_sum_stack_3->SetBinContent(3,72.78362);
   zqq_fail_sum_stack_3->SetBinContent(4,229.7601);
   zqq_fail_sum_stack_3->SetBinContent(5,559.0111);
   zqq_fail_sum_stack_3->SetBinContent(6,1397.071);
   zqq_fail_sum_stack_3->SetBinContent(7,2809.157);
   zqq_fail_sum_stack_3->SetBinContent(8,5307.033);
   zqq_fail_sum_stack_3->SetBinContent(9,5129.238);
   zqq_fail_sum_stack_3->SetBinContent(10,2751.297);
   zqq_fail_sum_stack_3->SetBinContent(11,1257.679);
   zqq_fail_sum_stack_3->SetBinContent(12,361.6703);
   zqq_fail_sum_stack_3->SetBinContent(13,114.4834);
   zqq_fail_sum_stack_3->SetBinContent(14,87.57416);
   zqq_fail_sum_stack_3->SetBinContent(15,68.33052);
   zqq_fail_sum_stack_3->SetBinContent(16,27.04249);
   zqq_fail_sum_stack_3->SetBinContent(17,15.30903);
   zqq_fail_sum_stack_3->SetBinContent(18,13.41703);
   zqq_fail_sum_stack_3->SetBinContent(19,0.0001414124);
   zqq_fail_sum_stack_3->SetBinContent(20,0.9144596);
   zqq_fail_sum_stack_3->SetBinContent(21,0.0001414124);
   zqq_fail_sum_stack_3->SetBinContent(22,0.0001414124);
   zqq_fail_sum_stack_3->SetBinContent(23,0.0001414124);
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
   
   TH1F *hsigfail_allcats_2016_fit_b_stack_4 = new TH1F("hsigfail_allcats_2016_fit_b_stack_4","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   hsigfail_allcats_2016_fit_b_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigfail_allcats_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_allcats_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_allcats_2016_fit_b_stack_4,"");
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
   
   TLegend *leg = new TLegend(0.6,0.5,0.75,0.85,NULL,"brNDC");
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
   entry=leg->AddEntry("htotfail_allcats_2016_fit_b","Total background","lf");

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
   
   TH1F *htotfail_allcats_2016_fit_b_copy__109 = new TH1F("htotfail_allcats_2016_fit_b_copy__109","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(1,0.0004550005);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(2,0.0004550005);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(3,365123.4);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(4,338286.9);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(5,320380.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(6,311011.3);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(7,302346.8);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(8,287633.9);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(9,270071.5);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(10,256374.3);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(11,246226.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(12,234423.5);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(13,221948.5);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(14,208098.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(15,193190.8);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(16,177821.7);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(17,161896.8);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(18,145125.8);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(19,81950.13);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(20,74852.73);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(21,43638.7);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(22,40211.16);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(23,36662.77);
   htotfail_allcats_2016_fit_b_copy__109->SetMaximum(547685.1);
   htotfail_allcats_2016_fit_b_copy__109->SetEntries(552);
   htotfail_allcats_2016_fit_b_copy__109->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_b_copy__109->SetFillColor(ci);
   htotfail_allcats_2016_fit_b_copy__109->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_b_copy__109->SetLineColor(ci);
   htotfail_allcats_2016_fit_b_copy__109->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_b_copy__109->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_b_copy__109->SetMarkerSize(0);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_b_copy__109->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b_copy__109->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_b_copy__109->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b_copy__109->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_b_copy__109->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_b_copy__109->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_b_copy__109->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b_copy__109->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_b_copy__109->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_b_copy__109->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_b_copy__109->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_b_copy__109->Draw("sameaxis");
   p12fail_allcats_2016_fit_b->Modified();
   cfail_allcats_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_allcats_2016_fit_b
   TPad *p22fail_allcats_2016_fit_b = new TPad("p22fail_allcats_2016_fit_b", "p22fail_allcats_2016_fit_b",0,0,1,0.3);
   p22fail_allcats_2016_fit_b->Draw();
   p22fail_allcats_2016_fit_b->cd();
   p22fail_allcats_2016_fit_b->Range(13.7027,-28.2678,221.8108,49.29152);
   p22fail_allcats_2016_fit_b->SetFillColor(0);
   p22fail_allcats_2016_fit_b->SetBorderMode(0);
   p22fail_allcats_2016_fit_b->SetBorderSize(2);
   p22fail_allcats_2016_fit_b->SetTickx(1);
   p22fail_allcats_2016_fit_b->SetTicky(1);
   p22fail_allcats_2016_fit_b->SetLeftMargin(0.16);
   p22fail_allcats_2016_fit_b->SetTopMargin(0.05);
   p22fail_allcats_2016_fit_b->SetBottomMargin(0.3);
   p22fail_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22fail_allcats_2016_fit_b->SetFrameBorderMode(0);
   p22fail_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22fail_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_allcats_2016_fit_b__110 = new TH1F("iOneWithErrorsfail_allcats_2016_fit_b__110","",23,40,201);
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetMinimum(-5);
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetMaximum(45.41355);
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetFillColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetLineColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetMarkerColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetMarkerSize(0);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_b__110->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b__110->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_28 = new TH1F("hstack_stack_28","hstack",23,40,201);
   hstack_stack_28->SetMinimum(0);
   hstack_stack_28->SetMaximum(31.91754);
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
   
   
   TH1F *sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1","wqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(3,0.8712141);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(4,3.160024);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(5,7.042143);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(6,18.62266);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(7,25.2886);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(8,15.60433);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(9,7.649857);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(10,2.425476);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(11,0.7396403);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(12,0.2659062);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(13,0.1158569);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(14,0.03351662);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(15,0.0264596);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(16,0.007766434);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(17,7.792898e-07);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(18,0.008685532);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(19,1.09539e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(20,1.146156e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(21,1.500618e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(22,1.563327e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(23,1.638474e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2","zqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(3,0.1204683);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(4,0.3949486);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(5,0.9875495);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(6,2.505151);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(7,5.109056);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(8,9.894464);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(9,9.869553);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(10,5.433931);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(11,2.534153);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(12,0.7470647);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(13,0.2430101);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(14,0.1919837);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(15,0.1554388);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(16,0.06414238);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(17,0.03804408);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(18,0.03521663);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(19,4.939654e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(20,0.003342324);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(21,6.76703e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(22,7.049817e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(23,7.388692e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_allcats_2016_fit_b__111 = new TH1F("iOneWithErrorsLinefail_allcats_2016_fit_b__111","",23,40,201);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetFillColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetLineColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetMarkerColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->SetMarkerSize(0);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_b__111->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_allcats_2016_fit_b_fx3028[23] = {
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_b_fy3028[23] = {
   0,
   0,
   0.8010101,
   3.76873,
   8.06628,
   21.05716,
   30.2757,
   25.52584,
   17.50208,
   7.790003,
   3.405471,
   0.8881772,
   0.3210346,
   0.1590337,
   0.2887406,
   -0.1218569,
   0.09799428,
   0.09154438,
   0.009980403,
   0.007966082,
   0.1395255,
   0.1182575,
   -0.1764228};
   Double_t Graph_from_iRatiofail_allcats_2016_fit_b_felx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_b_fely3028[23] = {
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_b_fehx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_b_fehy3028[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_allcats_2016_fit_b_fx3028,Graph_from_iRatiofail_allcats_2016_fit_b_fy3028,Graph_from_iRatiofail_allcats_2016_fit_b_felx3028,Graph_from_iRatiofail_allcats_2016_fit_b_fehx3028,Graph_from_iRatiofail_allcats_2016_fit_b_fely3028,Graph_from_iRatiofail_allcats_2016_fit_b_fehy3028);
   grae->SetName("Graph_from_iRatiofail_allcats_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028 = new TH1F("Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetMinimum(-4.421635);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetMaximum(34.52092);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetDirectory(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetStats(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_allcats_2016_fit_b_copy__112 = new TH1F("iOneWithErrorsfail_allcats_2016_fit_b_copy__112","",23,40,201);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetMinimum(-5);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetMaximum(45.41355);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetEntries(1104);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetFillColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetLineColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetMarkerColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetMarkerSize(0);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->Draw("sameaxis");
   p22fail_allcats_2016_fit_b->Modified();
   cfail_allcats_2016_fit_b->cd();
   cfail_allcats_2016_fit_b->Modified();
   cfail_allcats_2016_fit_b->cd();
   cfail_allcats_2016_fit_b->SetSelected(cfail_allcats_2016_fit_b);
}
