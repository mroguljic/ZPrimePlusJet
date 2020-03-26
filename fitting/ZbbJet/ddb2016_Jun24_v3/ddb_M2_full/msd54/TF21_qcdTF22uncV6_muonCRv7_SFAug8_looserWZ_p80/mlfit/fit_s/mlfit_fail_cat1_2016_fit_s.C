void mlfit_fail_cat1_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat1_2016_fit_s/cfail_cat1_2016_fit_s
//=========  (Mon Sep 30 17:21:41 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat1_2016_fit_s = new TCanvas("cfail_cat1_2016_fit_s", "cfail_cat1_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat1_2016_fit_s->SetHighLightColor(2);
   cfail_cat1_2016_fit_s->Range(0,0,1,1);
   cfail_cat1_2016_fit_s->SetFillColor(0);
   cfail_cat1_2016_fit_s->SetBorderMode(0);
   cfail_cat1_2016_fit_s->SetBorderSize(2);
   cfail_cat1_2016_fit_s->SetTickx(1);
   cfail_cat1_2016_fit_s->SetTicky(1);
   cfail_cat1_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat1_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat1_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat1_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat1_2016_fit_s
   TPad *p12fail_cat1_2016_fit_s = new TPad("p12fail_cat1_2016_fit_s", "p12fail_cat1_2016_fit_s",0,0.3,1,1);
   p12fail_cat1_2016_fit_s->Draw();
   p12fail_cat1_2016_fit_s->cd();
   p12fail_cat1_2016_fit_s->Range(21.27027,-5712.098,182.0811,279892.8);
   p12fail_cat1_2016_fit_s->SetFillColor(0);
   p12fail_cat1_2016_fit_s->SetBorderMode(0);
   p12fail_cat1_2016_fit_s->SetBorderSize(2);
   p12fail_cat1_2016_fit_s->SetTickx(1);
   p12fail_cat1_2016_fit_s->SetTicky(1);
   p12fail_cat1_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat1_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat1_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat1_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat1_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat1_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat1_2016_fit_s__1 = new TH1F("htotfail_cat1_2016_fit_s__1","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_fit_s__1->SetBinContent(1,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetBinContent(2,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetBinContent(3,167554.9);
   htotfail_cat1_2016_fit_s__1->SetBinContent(4,155137.7);
   htotfail_cat1_2016_fit_s__1->SetBinContent(5,147761.1);
   htotfail_cat1_2016_fit_s__1->SetBinContent(6,145326.6);
   htotfail_cat1_2016_fit_s__1->SetBinContent(7,142055.2);
   htotfail_cat1_2016_fit_s__1->SetBinContent(8,136110.8);
   htotfail_cat1_2016_fit_s__1->SetBinContent(9,128617.3);
   htotfail_cat1_2016_fit_s__1->SetBinContent(10,121755.5);
   htotfail_cat1_2016_fit_s__1->SetBinContent(11,116558.3);
   htotfail_cat1_2016_fit_s__1->SetBinContent(12,109789.2);
   htotfail_cat1_2016_fit_s__1->SetBinContent(13,101082.6);
   htotfail_cat1_2016_fit_s__1->SetBinContent(14,92975.68);
   htotfail_cat1_2016_fit_s__1->SetBinContent(15,83391.73);
   htotfail_cat1_2016_fit_s__1->SetBinContent(16,74231.91);
   htotfail_cat1_2016_fit_s__1->SetBinContent(17,65292.28);
   htotfail_cat1_2016_fit_s__1->SetBinContent(18,55984.28);
   htotfail_cat1_2016_fit_s__1->SetBinContent(19,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetBinContent(20,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetBinContent(21,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetBinContent(22,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetBinContent(23,0.0002067222);
   htotfail_cat1_2016_fit_s__1->SetMinimum(0);
   htotfail_cat1_2016_fit_s__1->SetMaximum(251332.3);
   htotfail_cat1_2016_fit_s__1->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_s__1->SetFillColor(ci);
   htotfail_cat1_2016_fit_s__1->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_s__1->SetLineColor(ci);
   htotfail_cat1_2016_fit_s__1->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_fit_s__1->SetMarkerColor(ci);
   htotfail_cat1_2016_fit_s__1->SetMarkerSize(0);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_fit_s__1->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s__1->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_fit_s__1->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s__1->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_fit_s__1->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_fit_s__1->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_fit_s__1->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s__1->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s__1->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_s__1->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_s__1->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s__1->Draw("");
   
   TH1F *htot_linefail_cat1_2016_fit_s__2 = new TH1F("htot_linefail_cat1_2016_fit_s__2","wqq in cat1_2016_fail_cat1",23,40,201);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(1,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(2,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(3,167554.9);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(4,155137.7);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(5,147761.1);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(6,145326.6);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(7,142055.2);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(8,136110.8);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(9,128617.3);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(10,121755.5);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(11,116558.3);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(12,109789.2);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(13,101082.6);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(14,92975.68);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(15,83391.73);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(16,74231.91);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(17,65292.28);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(18,55984.28);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(19,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(20,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(21,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(22,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetBinContent(23,0.0002067222);
   htot_linefail_cat1_2016_fit_s__2->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat1_2016_fit_s__2->SetFillColor(ci);
   htot_linefail_cat1_2016_fit_s__2->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat1_2016_fit_s__2->SetLineColor(ci);
   htot_linefail_cat1_2016_fit_s__2->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat1_2016_fit_s__2->SetMarkerColor(ci);
   htot_linefail_cat1_2016_fit_s__2->SetMarkerSize(0);
   htot_linefail_cat1_2016_fit_s__2->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat1_2016_fit_s__2->GetXaxis()->SetRange(2,18);
   htot_linefail_cat1_2016_fit_s__2->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_fit_s__2->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat1_2016_fit_s__2->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat1_2016_fit_s__2->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_fit_s__2->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat1_2016_fit_s__2->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_fit_s__2->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat1_2016_fit_s__2->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat1_2016_fit_s__2->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat1_2016_fit_s__2->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_fit_s__2->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_fit_s__2->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat1_2016_fit_s__2->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat1_2016_fit_s__2->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_fit_s__2->Draw("histsame");
   
   TH1F *qcd__3 = new TH1F("qcd__3","qcd in cat1_2016_fail_cat1",23,40,201);
   qcd__3->SetBinContent(3,167177.2);
   qcd__3->SetBinContent(4,154107.8);
   qcd__3->SetBinContent(5,145754.8);
   qcd__3->SetBinContent(6,139575.6);
   qcd__3->SetBinContent(7,133630.1);
   qcd__3->SetBinContent(8,129159.3);
   qcd__3->SetBinContent(9,123829.3);
   qcd__3->SetBinContent(10,119535.3);
   qcd__3->SetBinContent(11,115452.1);
   qcd__3->SetBinContent(12,109229.8);
   qcd__3->SetBinContent(13,100681.5);
   qcd__3->SetBinContent(14,92600.2);
   qcd__3->SetBinContent(15,83046.17);
   qcd__3->SetBinContent(16,73988.82);
   qcd__3->SetBinContent(17,65106.32);
   qcd__3->SetBinContent(18,55839);
   qcd__3->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__3->SetLineColor(ci);
   qcd__3->SetLineStyle(2);
   qcd__3->SetLineWidth(2);
   qcd__3->GetXaxis()->SetTitle("x");
   qcd__3->GetXaxis()->SetLabelFont(42);
   qcd__3->GetXaxis()->SetLabelSize(0.035);
   qcd__3->GetXaxis()->SetTitleSize(0.035);
   qcd__3->GetXaxis()->SetTitleFont(42);
   qcd__3->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__3->GetYaxis()->SetLabelFont(42);
   qcd__3->GetYaxis()->SetLabelSize(0.035);
   qcd__3->GetYaxis()->SetTitleSize(0.035);
   qcd__3->GetYaxis()->SetTitleOffset(0);
   qcd__3->GetYaxis()->SetTitleFont(42);
   qcd__3->GetZaxis()->SetLabelFont(42);
   qcd__3->GetZaxis()->SetLabelSize(0.035);
   qcd__3->GetZaxis()->SetTitleSize(0.035);
   qcd__3->GetZaxis()->SetTitleFont(42);
   qcd__3->Draw("hist sames");
   
   TH1F *htotfail_cat1_2016_fit_s__4 = new TH1F("htotfail_cat1_2016_fit_s__4","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_fit_s__4->SetBinContent(1,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetBinContent(2,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetBinContent(3,167554.9);
   htotfail_cat1_2016_fit_s__4->SetBinContent(4,155137.7);
   htotfail_cat1_2016_fit_s__4->SetBinContent(5,147761.1);
   htotfail_cat1_2016_fit_s__4->SetBinContent(6,145326.6);
   htotfail_cat1_2016_fit_s__4->SetBinContent(7,142055.2);
   htotfail_cat1_2016_fit_s__4->SetBinContent(8,136110.8);
   htotfail_cat1_2016_fit_s__4->SetBinContent(9,128617.3);
   htotfail_cat1_2016_fit_s__4->SetBinContent(10,121755.5);
   htotfail_cat1_2016_fit_s__4->SetBinContent(11,116558.3);
   htotfail_cat1_2016_fit_s__4->SetBinContent(12,109789.2);
   htotfail_cat1_2016_fit_s__4->SetBinContent(13,101082.6);
   htotfail_cat1_2016_fit_s__4->SetBinContent(14,92975.68);
   htotfail_cat1_2016_fit_s__4->SetBinContent(15,83391.73);
   htotfail_cat1_2016_fit_s__4->SetBinContent(16,74231.91);
   htotfail_cat1_2016_fit_s__4->SetBinContent(17,65292.28);
   htotfail_cat1_2016_fit_s__4->SetBinContent(18,55984.28);
   htotfail_cat1_2016_fit_s__4->SetBinContent(19,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetBinContent(20,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetBinContent(21,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetBinContent(22,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetBinContent(23,0.0002067222);
   htotfail_cat1_2016_fit_s__4->SetMinimum(0);
   htotfail_cat1_2016_fit_s__4->SetMaximum(251332.3);
   htotfail_cat1_2016_fit_s__4->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_s__4->SetFillColor(ci);
   htotfail_cat1_2016_fit_s__4->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_s__4->SetLineColor(ci);
   htotfail_cat1_2016_fit_s__4->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_fit_s__4->SetMarkerColor(ci);
   htotfail_cat1_2016_fit_s__4->SetMarkerSize(0);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_fit_s__4->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s__4->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_fit_s__4->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s__4->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_fit_s__4->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_fit_s__4->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_fit_s__4->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s__4->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s__4->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_s__4->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_s__4->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s__4->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis1[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_1 = new TH1F("hstackMC_stack_1","hstackMC",23, xAxis1);
   hstackMC_stack_1->SetMinimum(0);
   hstackMC_stack_1->SetMaximum(8855.344);
   hstackMC_stack_1->SetDirectory(0);
   hstackMC_stack_1->SetStats(0);
   hstackMC_stack_1->SetLineStyle(0);
   hstackMC_stack_1->SetMarkerStyle(20);
   hstackMC_stack_1->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_1->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_1->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_1->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_1->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_1->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_1->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_1->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_1->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_1->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_1->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_1->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_1->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_1->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_1->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_1->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_1);
   
   Double_t xAxis2[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat1_2016_fail_cat1",23, xAxis2);
   tqq_stack_1->SetBinContent(3,136.22);
   tqq_stack_1->SetBinContent(4,171.3219);
   tqq_stack_1->SetBinContent(5,304.4583);
   tqq_stack_1->SetBinContent(6,579.663);
   tqq_stack_1->SetBinContent(7,718.4647);
   tqq_stack_1->SetBinContent(8,553.2972);
   tqq_stack_1->SetBinContent(9,379.4854);
   tqq_stack_1->SetBinContent(10,330.945);
   tqq_stack_1->SetBinContent(11,330.4323);
   tqq_stack_1->SetBinContent(12,343.1498);
   tqq_stack_1->SetBinContent(13,338.9852);
   tqq_stack_1->SetBinContent(14,337.2449);
   tqq_stack_1->SetBinContent(15,309.5296);
   tqq_stack_1->SetBinContent(16,229.373);
   tqq_stack_1->SetBinContent(17,180.2883);
   tqq_stack_1->SetBinContent(18,136.9482);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat1_2016_fail_cat1",23,40,201);
   wqq_stack_2->SetBinContent(1,0.0001417485);
   wqq_stack_2->SetBinContent(2,0.0001417485);
   wqq_stack_2->SetBinContent(3,217.8138);
   wqq_stack_2->SetBinContent(4,760.1069);
   wqq_stack_2->SetBinContent(5,1451.377);
   wqq_stack_2->SetBinContent(6,4551.935);
   wqq_stack_2->SetBinContent(7,6505.45);
   wqq_stack_2->SetBinContent(8,3908.006);
   wqq_stack_2->SetBinContent(9,1913.671);
   wqq_stack_2->SetBinContent(10,643.7494);
   wqq_stack_2->SetBinContent(11,206.2214);
   wqq_stack_2->SetBinContent(12,50.47837);
   wqq_stack_2->SetBinContent(13,23.915);
   wqq_stack_2->SetBinContent(14,3.576875);
   wqq_stack_2->SetBinContent(15,8.511641);
   wqq_stack_2->SetBinContent(16,2.322305);
   wqq_stack_2->SetBinContent(17,0.0001417485);
   wqq_stack_2->SetBinContent(18,2.65017);
   wqq_stack_2->SetBinContent(19,0.0001417485);
   wqq_stack_2->SetBinContent(20,0.0001417485);
   wqq_stack_2->SetBinContent(21,0.0001417485);
   wqq_stack_2->SetBinContent(22,0.0001417485);
   wqq_stack_2->SetBinContent(23,0.0001417485);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat1_2016_fail_cat1",23,40,201);
   zqq_stack_3->SetBinContent(1,6.497371e-05);
   zqq_stack_3->SetBinContent(2,6.497371e-05);
   zqq_stack_3->SetBinContent(3,23.60403);
   zqq_stack_3->SetBinContent(4,98.39862);
   zqq_stack_3->SetBinContent(5,250.4595);
   zqq_stack_3->SetBinContent(6,619.4471);
   zqq_stack_3->SetBinContent(7,1201.188);
   zqq_stack_3->SetBinContent(8,2490.111);
   zqq_stack_3->SetBinContent(9,2494.84);
   zqq_stack_3->SetBinContent(10,1245.539);
   zqq_stack_3->SetBinContent(11,569.5347);
   zqq_stack_3->SetBinContent(12,165.744);
   zqq_stack_3->SetBinContent(13,38.16232);
   zqq_stack_3->SetBinContent(14,34.66481);
   zqq_stack_3->SetBinContent(15,27.51467);
   zqq_stack_3->SetBinContent(16,11.39607);
   zqq_stack_3->SetBinContent(17,5.677072);
   zqq_stack_3->SetBinContent(18,5.677072);
   zqq_stack_3->SetBinContent(19,6.497371e-05);
   zqq_stack_3->SetBinContent(20,6.497371e-05);
   zqq_stack_3->SetBinContent(21,6.497371e-05);
   zqq_stack_3->SetBinContent(22,6.497371e-05);
   zqq_stack_3->SetBinContent(23,6.497371e-05);
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
   
   TH1F *hsigfail_cat1_2016_fit_s_stack_4 = new TH1F("hsigfail_cat1_2016_fit_s_stack_4","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(1,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(2,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(3,3.7932);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(4,2.953017);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(5,7.13332);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(6,6.294624);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(7,8.557906);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(8,10.57841);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(9,12.55628);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(10,17.86345);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(11,27.60601);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(12,43.81186);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(13,41.06327);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(14,33.70165);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(15,18.06244);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(16,6.678929);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(17,3.431222);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(18,1.66149);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(19,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(20,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(21,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(22,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetBinContent(23,1.72023e-06);
   hsigfail_cat1_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat1_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat1_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat1_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat1_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat1_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat1_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat1_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3001[23] = {
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
   Double_t data_copy_fy3001[23] = {
   0,
   0,
   167513,
   155145,
   147739,
   145294,
   142041,
   136126,
   128560,
   121756,
   116610,
   109810,
   101120,
   93039,
   83433,
   74190,
   65325,
   55954,
   0,
   0,
   0,
   0,
   0};
   Double_t data_copy_felx3001[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3001[23] = {
   1.841055,
   1.841055,
   410.2932,
   394.8939,
   385.3775,
   382.1837,
   377.8924,
   369.9615,
   359.5614,
   349.9441,
   342.4905,
   332.3841,
   319.0017,
   306.0307,
   289.8552,
   273.3856,
   256.5944,
   237.5525,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3001[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3001[23] = {
   0,
   0,
   409.292,
   393.8926,
   384.3762,
   381.1823,
   376.891,
   368.9601,
   358.56,
   348.9426,
   341.489,
   331.3826,
   318.0001,
   305.029,
   288.8534,
   272.3837,
   255.5924,
   236.5504,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3001,data_copy_fy3001,data_copy_felx3001,data_copy_fehx3001,data_copy_fely3001,data_copy_fehy3001);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat1_2016_fail_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3001 = new TH1F("Graph_data_copy3001","WH_hbb in cat1_2016_fail_cat1",100,28.1,212.9);
   Graph_data_copy3001->SetMinimum(0);
   Graph_data_copy3001->SetMaximum(184714.7);
   Graph_data_copy3001->SetDirectory(0);
   Graph_data_copy3001->SetStats(0);
   Graph_data_copy3001->SetLineStyle(0);
   Graph_data_copy3001->SetMarkerStyle(20);
   Graph_data_copy3001->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3001->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3001->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3001->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3001->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3001->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3001->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3001->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3001->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3001->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3001->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3001);
   
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
   entry=leg->AddEntry("htotfail_cat1_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat1_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"450 < p_{T} < 500 GeV");
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
   
   TH1F *htotfail_cat1_2016_fit_s_copy__5 = new TH1F("htotfail_cat1_2016_fit_s_copy__5","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(1,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(2,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(3,167554.9);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(4,155137.7);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(5,147761.1);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(6,145326.6);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(7,142055.2);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(8,136110.8);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(9,128617.3);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(10,121755.5);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(11,116558.3);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(12,109789.2);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(13,101082.6);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(14,92975.68);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(15,83391.73);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(16,74231.91);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(17,65292.28);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(18,55984.28);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(19,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(20,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(21,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(22,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetBinContent(23,0.0002067222);
   htotfail_cat1_2016_fit_s_copy__5->SetMaximum(251332.3);
   htotfail_cat1_2016_fit_s_copy__5->SetEntries(92);
   htotfail_cat1_2016_fit_s_copy__5->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_s_copy__5->SetFillColor(ci);
   htotfail_cat1_2016_fit_s_copy__5->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_s_copy__5->SetLineColor(ci);
   htotfail_cat1_2016_fit_s_copy__5->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_fit_s_copy__5->SetMarkerColor(ci);
   htotfail_cat1_2016_fit_s_copy__5->SetMarkerSize(0);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_fit_s_copy__5->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s_copy__5->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_fit_s_copy__5->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s_copy__5->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_fit_s_copy__5->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_fit_s_copy__5->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_fit_s_copy__5->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s_copy__5->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_s_copy__5->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_s_copy__5->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_s_copy__5->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_s_copy__5->Draw("sameaxis");
   p12fail_cat1_2016_fit_s->Modified();
   cfail_cat1_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat1_2016_fit_s
   TPad *p22fail_cat1_2016_fit_s = new TPad("p22fail_cat1_2016_fit_s", "p22fail_cat1_2016_fit_s",0,0,1,0.3);
   p22fail_cat1_2016_fit_s->Draw();
   p22fail_cat1_2016_fit_s->cd();
   p22fail_cat1_2016_fit_s->Range(21.27027,-21.40033,182.0811,33.26744);
   p22fail_cat1_2016_fit_s->SetFillColor(0);
   p22fail_cat1_2016_fit_s->SetBorderMode(0);
   p22fail_cat1_2016_fit_s->SetBorderSize(2);
   p22fail_cat1_2016_fit_s->SetTickx(1);
   p22fail_cat1_2016_fit_s->SetTicky(1);
   p22fail_cat1_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat1_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat1_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat1_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat1_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat1_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat1_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat1_2016_fit_s__6 = new TH1F("iOneWithErrorsfail_cat1_2016_fit_s__6","",23,40,201);
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetMinimum(-5);
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetMaximum(30.53406);
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetFillColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetLineColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetMarkerColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_s__6->SetMarkerSize(0);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetRange(2,18);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_s__6->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s__6->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_2 = new TH1F("hstack_stack_2","hstack",23,40,201);
   hstack_stack_2->SetMinimum(0);
   hstack_stack_2->SetMaximum(21.49416);
   hstack_stack_2->SetDirectory(0);
   hstack_stack_2->SetStats(0);
   hstack_stack_2->SetLineStyle(0);
   hstack_stack_2->SetMarkerStyle(20);
   hstack_stack_2->GetXaxis()->SetLabelFont(42);
   hstack_stack_2->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_2->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_2->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_2->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_2->GetXaxis()->SetTitleFont(42);
   hstack_stack_2->GetYaxis()->SetLabelFont(42);
   hstack_stack_2->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_2->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_2->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_2->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_2->GetYaxis()->SetTitleFont(42);
   hstack_stack_2->GetZaxis()->SetLabelFont(42);
   hstack_stack_2->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_2->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_2->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_2);
   
   
   TH1F *sigHistResidualwqqfail_cat1_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat1_2016_fit_s_stack_1","wqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(3,0.5321721);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(4,1.929731);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(5,3.775928);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(6,11.94162);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(7,17.26083);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(8,10.59195);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(9,5.337101);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(10,1.844857);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(11,0.6038888);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(12,0.1523266);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(13,0.07520437);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(14,0.01172634);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(15,0.02946699);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(16,0.008525859);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(17,5.545879e-07);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetBinContent(18,0.01120341);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat1_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat1_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat1_2016_fit_s_stack_2","zqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(3,0.05767039);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(4,0.2498108);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(5,0.6515999);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(6,1.625068);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(7,3.187098);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(8,6.748999);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(9,6.957943);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(10,3.569468);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(11,1.667798);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(12,0.5001591);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(13,0.1200073);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(14,0.1136443);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(15,0.09525479);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(16,0.0418383);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(17,0.02221142);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetBinContent(18,0.02399942);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat1_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(3,0.009267713);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(4,0.007497011);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(5,0.01855817);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(6,0.01651342);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(7,0.02270658);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(8,0.02867088);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(9,0.03501864);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(10,0.0511931);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(11,0.08084013);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(12,0.1322093);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(13,0.1291297);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(14,0.1104867);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(15,0.06253152);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(16,0.0245203);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(17,0.01342458);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetBinContent(18,0.007023831);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat1_2016_fit_sfail_cat1_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat1_2016_fit_s__7 = new TH1F("iOneWithErrorsLinefail_cat1_2016_fit_s__7","",23,40,201);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetFillColor(ci);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetLineColor(ci);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetRange(2,18);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_s__7->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat1_2016_fit_s_fx3002[23] = {
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
   Double_t Graph_from_iRatiofail_cat1_2016_fit_s_fy3002[23] = {
   0,
   0,
   0.4863518,
   2.192559,
   4.358753,
   13.44584,
   20.35604,
   17.33523,
   12.10155,
   5.400282,
   2.416126,
   0.7130774,
   0.3119351,
   0.3318703,
   0.2666742,
   -0.1035132,
   0.1496312,
   -0.09278876,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat1_2016_fit_s_felx3002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat1_2016_fit_s_fely3002[23] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat1_2016_fit_s_fehx3002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat1_2016_fit_s_fehy3002[23] = {
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
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat1_2016_fit_s_fx3002,Graph_from_iRatiofail_cat1_2016_fit_s_fy3002,Graph_from_iRatiofail_cat1_2016_fit_s_felx3002,Graph_from_iRatiofail_cat1_2016_fit_s_fehx3002,Graph_from_iRatiofail_cat1_2016_fit_s_fely3002,Graph_from_iRatiofail_cat1_2016_fit_s_fehy3002);
   grae->SetName("Graph_from_iRatiofail_cat1_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002 = new TH1F("Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->SetMinimum(-3.349468);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->SetMaximum(23.60199);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->SetStats(0);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat1_2016_fit_s3002);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat1_2016_fit_s_copy__8 = new TH1F("iOneWithErrorsfail_cat1_2016_fit_s_copy__8","",23,40,201);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetMinimum(-5);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetMaximum(30.53406);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetEntries(184);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetFillColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetLineColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetMarkerColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->SetMarkerSize(0);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetRange(2,18);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_s_copy__8->Draw("sameaxis");
   p22fail_cat1_2016_fit_s->Modified();
   cfail_cat1_2016_fit_s->cd();
   cfail_cat1_2016_fit_s->Modified();
   cfail_cat1_2016_fit_s->cd();
   cfail_cat1_2016_fit_s->SetSelected(cfail_cat1_2016_fit_s);
}
