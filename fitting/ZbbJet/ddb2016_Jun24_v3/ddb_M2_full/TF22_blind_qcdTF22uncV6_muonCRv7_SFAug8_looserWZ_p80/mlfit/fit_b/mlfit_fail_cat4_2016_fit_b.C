void mlfit_fail_cat4_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat4_2016_fit_b/cfail_cat4_2016_fit_b
//=========  (Wed Sep  4 11:54:18 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat4_2016_fit_b = new TCanvas("cfail_cat4_2016_fit_b", "cfail_cat4_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat4_2016_fit_b->SetHighLightColor(2);
   cfail_cat4_2016_fit_b->Range(0,0,1,1);
   cfail_cat4_2016_fit_b->SetFillColor(0);
   cfail_cat4_2016_fit_b->SetBorderMode(0);
   cfail_cat4_2016_fit_b->SetBorderSize(2);
   cfail_cat4_2016_fit_b->SetTickx(1);
   cfail_cat4_2016_fit_b->SetTicky(1);
   cfail_cat4_2016_fit_b->SetLeftMargin(0.16);
   cfail_cat4_2016_fit_b->SetBottomMargin(0.13);
   cfail_cat4_2016_fit_b->SetFrameFillStyle(0);
   cfail_cat4_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat4_2016_fit_b
   TPad *p12fail_cat4_2016_fit_b = new TPad("p12fail_cat4_2016_fit_b", "p12fail_cat4_2016_fit_b",0,0.3,1,1);
   p12fail_cat4_2016_fit_b->Draw();
   p12fail_cat4_2016_fit_b->cd();
   p12fail_cat4_2016_fit_b->Range(13.7027,-1276.222,221.8108,62534.9);
   p12fail_cat4_2016_fit_b->SetFillColor(0);
   p12fail_cat4_2016_fit_b->SetBorderMode(0);
   p12fail_cat4_2016_fit_b->SetBorderSize(2);
   p12fail_cat4_2016_fit_b->SetTickx(1);
   p12fail_cat4_2016_fit_b->SetTicky(1);
   p12fail_cat4_2016_fit_b->SetLeftMargin(0.16);
   p12fail_cat4_2016_fit_b->SetBottomMargin(0.02);
   p12fail_cat4_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat4_2016_fit_b->SetFrameBorderMode(0);
   p12fail_cat4_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat4_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat4_2016_fit_b__49 = new TH1F("htotfail_cat4_2016_fit_b__49","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_b__49->SetBinContent(1,5.6712e-05);
   htotfail_cat4_2016_fit_b__49->SetBinContent(2,37435.86);
   htotfail_cat4_2016_fit_b__49->SetBinContent(3,34006.46);
   htotfail_cat4_2016_fit_b__49->SetBinContent(4,31609.92);
   htotfail_cat4_2016_fit_b__49->SetBinContent(5,29922.28);
   htotfail_cat4_2016_fit_b__49->SetBinContent(6,28309.94);
   htotfail_cat4_2016_fit_b__49->SetBinContent(7,27305.17);
   htotfail_cat4_2016_fit_b__49->SetBinContent(8,25724.87);
   htotfail_cat4_2016_fit_b__49->SetBinContent(9,23725.1);
   htotfail_cat4_2016_fit_b__49->SetBinContent(10,22643.4);
   htotfail_cat4_2016_fit_b__49->SetBinContent(11,5.6712e-05);
   htotfail_cat4_2016_fit_b__49->SetBinContent(12,5.6712e-05);
   htotfail_cat4_2016_fit_b__49->SetBinContent(13,5.6712e-05);
   htotfail_cat4_2016_fit_b__49->SetBinContent(14,20088.62);
   htotfail_cat4_2016_fit_b__49->SetBinContent(15,19861.45);
   htotfail_cat4_2016_fit_b__49->SetBinContent(16,18786.09);
   htotfail_cat4_2016_fit_b__49->SetBinContent(17,18479.75);
   htotfail_cat4_2016_fit_b__49->SetBinContent(18,17146.04);
   htotfail_cat4_2016_fit_b__49->SetBinContent(19,16184.95);
   htotfail_cat4_2016_fit_b__49->SetBinContent(20,14934.13);
   htotfail_cat4_2016_fit_b__49->SetBinContent(21,13932.18);
   htotfail_cat4_2016_fit_b__49->SetBinContent(22,12913.94);
   htotfail_cat4_2016_fit_b__49->SetBinContent(23,11649.02);
   htotfail_cat4_2016_fit_b__49->SetMinimum(0);
   htotfail_cat4_2016_fit_b__49->SetMaximum(56153.78);
   htotfail_cat4_2016_fit_b__49->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_b__49->SetFillColor(ci);
   htotfail_cat4_2016_fit_b__49->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_b__49->SetLineColor(ci);
   htotfail_cat4_2016_fit_b__49->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_b__49->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_b__49->SetMarkerSize(0);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_b__49->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b__49->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_b__49->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b__49->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_b__49->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_b__49->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_b__49->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b__49->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b__49->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_b__49->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_b__49->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b__49->Draw("");
   
   TH1F *htot_linefail_cat4_2016_fit_b__50 = new TH1F("htot_linefail_cat4_2016_fit_b__50","wqq in cat4_2016_fail_cat4",23,40,201);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(1,5.6712e-05);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(2,37435.86);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(3,34006.46);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(4,31609.92);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(5,29922.28);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(6,28309.94);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(7,27305.17);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(8,25724.87);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(9,23725.1);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(10,22643.4);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(11,5.6712e-05);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(12,5.6712e-05);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(13,5.6712e-05);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(14,20088.62);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(15,19861.45);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(16,18786.09);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(17,18479.75);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(18,17146.04);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(19,16184.95);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(20,14934.13);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(21,13932.18);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(22,12913.94);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(23,11649.02);
   htot_linefail_cat4_2016_fit_b__50->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat4_2016_fit_b__50->SetFillColor(ci);
   htot_linefail_cat4_2016_fit_b__50->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat4_2016_fit_b__50->SetLineColor(ci);
   htot_linefail_cat4_2016_fit_b__50->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat4_2016_fit_b__50->SetMarkerColor(ci);
   htot_linefail_cat4_2016_fit_b__50->SetMarkerSize(0);
   htot_linefail_cat4_2016_fit_b__50->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat4_2016_fit_b__50->GetXaxis()->SetRange(2,23);
   htot_linefail_cat4_2016_fit_b__50->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_b__50->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat4_2016_fit_b__50->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat4_2016_fit_b__50->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_b__50->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat4_2016_fit_b__50->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_b__50->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat4_2016_fit_b__50->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat4_2016_fit_b__50->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat4_2016_fit_b__50->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_b__50->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_b__50->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat4_2016_fit_b__50->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat4_2016_fit_b__50->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_b__50->Draw("histsame");
   
   TH1F *qcd__51 = new TH1F("qcd__51","qcd in cat4_2016_fail_cat4",23,40,201);
   qcd__51->SetBinContent(2,37328.79);
   qcd__51->SetBinContent(3,33837.57);
   qcd__51->SetBinContent(4,31197.8);
   qcd__51->SetBinContent(5,29092);
   qcd__51->SetBinContent(6,26492.59);
   qcd__51->SetBinContent(7,24931.84);
   qcd__51->SetBinContent(8,23905.59);
   qcd__51->SetBinContent(9,22455.83);
   qcd__51->SetBinContent(10,21996.92);
   qcd__51->SetBinContent(14,19874.06);
   qcd__51->SetBinContent(15,19691.12);
   qcd__51->SetBinContent(16,18648.43);
   qcd__51->SetBinContent(17,18370.06);
   qcd__51->SetBinContent(18,17042.52);
   qcd__51->SetBinContent(19,16107.07);
   qcd__51->SetBinContent(20,14856.85);
   qcd__51->SetBinContent(21,13870.47);
   qcd__51->SetBinContent(22,12877.2);
   qcd__51->SetBinContent(23,11623.38);
   qcd__51->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__51->SetLineColor(ci);
   qcd__51->SetLineStyle(2);
   qcd__51->SetLineWidth(2);
   qcd__51->GetXaxis()->SetTitle("x");
   qcd__51->GetXaxis()->SetLabelFont(42);
   qcd__51->GetXaxis()->SetLabelSize(0.035);
   qcd__51->GetXaxis()->SetTitleSize(0.035);
   qcd__51->GetXaxis()->SetTitleFont(42);
   qcd__51->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__51->GetYaxis()->SetLabelFont(42);
   qcd__51->GetYaxis()->SetLabelSize(0.035);
   qcd__51->GetYaxis()->SetTitleSize(0.035);
   qcd__51->GetYaxis()->SetTitleOffset(0);
   qcd__51->GetYaxis()->SetTitleFont(42);
   qcd__51->GetZaxis()->SetLabelFont(42);
   qcd__51->GetZaxis()->SetLabelSize(0.035);
   qcd__51->GetZaxis()->SetTitleSize(0.035);
   qcd__51->GetZaxis()->SetTitleFont(42);
   qcd__51->Draw("hist sames");
   
   TH1F *htotfail_cat4_2016_fit_b__52 = new TH1F("htotfail_cat4_2016_fit_b__52","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_b__52->SetBinContent(1,5.6712e-05);
   htotfail_cat4_2016_fit_b__52->SetBinContent(2,37435.86);
   htotfail_cat4_2016_fit_b__52->SetBinContent(3,34006.46);
   htotfail_cat4_2016_fit_b__52->SetBinContent(4,31609.92);
   htotfail_cat4_2016_fit_b__52->SetBinContent(5,29922.28);
   htotfail_cat4_2016_fit_b__52->SetBinContent(6,28309.94);
   htotfail_cat4_2016_fit_b__52->SetBinContent(7,27305.17);
   htotfail_cat4_2016_fit_b__52->SetBinContent(8,25724.87);
   htotfail_cat4_2016_fit_b__52->SetBinContent(9,23725.1);
   htotfail_cat4_2016_fit_b__52->SetBinContent(10,22643.4);
   htotfail_cat4_2016_fit_b__52->SetBinContent(11,5.6712e-05);
   htotfail_cat4_2016_fit_b__52->SetBinContent(12,5.6712e-05);
   htotfail_cat4_2016_fit_b__52->SetBinContent(13,5.6712e-05);
   htotfail_cat4_2016_fit_b__52->SetBinContent(14,20088.62);
   htotfail_cat4_2016_fit_b__52->SetBinContent(15,19861.45);
   htotfail_cat4_2016_fit_b__52->SetBinContent(16,18786.09);
   htotfail_cat4_2016_fit_b__52->SetBinContent(17,18479.75);
   htotfail_cat4_2016_fit_b__52->SetBinContent(18,17146.04);
   htotfail_cat4_2016_fit_b__52->SetBinContent(19,16184.95);
   htotfail_cat4_2016_fit_b__52->SetBinContent(20,14934.13);
   htotfail_cat4_2016_fit_b__52->SetBinContent(21,13932.18);
   htotfail_cat4_2016_fit_b__52->SetBinContent(22,12913.94);
   htotfail_cat4_2016_fit_b__52->SetBinContent(23,11649.02);
   htotfail_cat4_2016_fit_b__52->SetMinimum(0);
   htotfail_cat4_2016_fit_b__52->SetMaximum(56153.78);
   htotfail_cat4_2016_fit_b__52->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_b__52->SetFillColor(ci);
   htotfail_cat4_2016_fit_b__52->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_b__52->SetLineColor(ci);
   htotfail_cat4_2016_fit_b__52->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_b__52->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_b__52->SetMarkerSize(0);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_b__52->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b__52->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_b__52->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b__52->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_b__52->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_b__52->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_b__52->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b__52->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b__52->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_b__52->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_b__52->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b__52->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis13[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_13 = new TH1F("hstackMC_stack_13","hstackMC",23, xAxis13);
   hstackMC_stack_13->SetMinimum(0);
   hstackMC_stack_13->SetMaximum(2491.996);
   hstackMC_stack_13->SetDirectory(0);
   hstackMC_stack_13->SetStats(0);
   hstackMC_stack_13->SetLineStyle(0);
   hstackMC_stack_13->SetMarkerStyle(20);
   hstackMC_stack_13->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_13->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_13->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_13->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_13->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_13->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_13->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_13->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_13->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_13->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_13->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_13->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_13->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_13->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_13->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_13->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_13->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_13);
   
   Double_t xAxis14[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat4_2016_fail_cat4",23, xAxis14);
   tqq_stack_1->SetBinContent(2,62.83158);
   tqq_stack_1->SetBinContent(3,68.44928);
   tqq_stack_1->SetBinContent(4,83.50723);
   tqq_stack_1->SetBinContent(5,131.3479);
   tqq_stack_1->SetBinContent(6,246.7586);
   tqq_stack_1->SetBinContent(7,291.4671);
   tqq_stack_1->SetBinContent(8,215.4692);
   tqq_stack_1->SetBinContent(9,148.2341);
   tqq_stack_1->SetBinContent(10,139.1114);
   tqq_stack_1->SetBinContent(14,191.8262);
   tqq_stack_1->SetBinContent(15,156.8429);
   tqq_stack_1->SetBinContent(16,133.7755);
   tqq_stack_1->SetBinContent(17,108.4042);
   tqq_stack_1->SetBinContent(18,100.078);
   tqq_stack_1->SetBinContent(19,77.87968);
   tqq_stack_1->SetBinContent(20,77.28446);
   tqq_stack_1->SetBinContent(21,61.71247);
   tqq_stack_1->SetBinContent(22,36.73494);
   tqq_stack_1->SetBinContent(23,25.64062);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat4_2016_fail_cat4",23,40,201);
   wqq_stack_2->SetBinContent(1,4.402387e-05);
   wqq_stack_2->SetBinContent(2,37.14981);
   wqq_stack_2->SetBinContent(3,91.01982);
   wqq_stack_2->SetBinContent(4,307.5168);
   wqq_stack_2->SetBinContent(5,636.6888);
   wqq_stack_2->SetBinContent(6,1447.128);
   wqq_stack_2->SetBinContent(7,1874.539);
   wqq_stack_2->SetBinContent(8,1113.156);
   wqq_stack_2->SetBinContent(9,580.4785);
   wqq_stack_2->SetBinContent(10,185.947);
   wqq_stack_2->SetBinContent(11,4.402387e-05);
   wqq_stack_2->SetBinContent(12,4.402387e-05);
   wqq_stack_2->SetBinContent(13,4.402387e-05);
   wqq_stack_2->SetBinContent(14,8.028855);
   wqq_stack_2->SetBinContent(15,3.778501);
   wqq_stack_2->SetBinContent(16,1.537665);
   wqq_stack_2->SetBinContent(17,4.402387e-05);
   wqq_stack_2->SetBinContent(18,2.155075);
   wqq_stack_2->SetBinContent(19,4.402387e-05);
   wqq_stack_2->SetBinContent(20,4.402387e-05);
   wqq_stack_2->SetBinContent(21,4.402387e-05);
   wqq_stack_2->SetBinContent(22,4.402387e-05);
   wqq_stack_2->SetBinContent(23,4.402387e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat4_2016_fail_cat4",23,40,201);
   zqq_stack_3->SetBinContent(1,1.268813e-05);
   zqq_stack_3->SetBinContent(2,7.088017);
   zqq_stack_3->SetBinContent(3,9.412367);
   zqq_stack_3->SetBinContent(4,21.09898);
   zqq_stack_3->SetBinContent(5,62.24137);
   zqq_stack_3->SetBinContent(6,123.4673);
   zqq_stack_3->SetBinContent(7,207.323);
   zqq_stack_3->SetBinContent(8,490.6461);
   zqq_stack_3->SetBinContent(9,540.5523);
   zqq_stack_3->SetBinContent(10,321.419);
   zqq_stack_3->SetBinContent(11,1.268813e-05);
   zqq_stack_3->SetBinContent(12,1.268813e-05);
   zqq_stack_3->SetBinContent(13,1.268813e-05);
   zqq_stack_3->SetBinContent(14,14.70976);
   zqq_stack_3->SetBinContent(15,9.706924);
   zqq_stack_3->SetBinContent(16,2.353132);
   zqq_stack_3->SetBinContent(17,1.285741);
   zqq_stack_3->SetBinContent(18,1.285741);
   zqq_stack_3->SetBinContent(19,1.268813e-05);
   zqq_stack_3->SetBinContent(20,1.268813e-05);
   zqq_stack_3->SetBinContent(21,1.268813e-05);
   zqq_stack_3->SetBinContent(22,1.268813e-05);
   zqq_stack_3->SetBinContent(23,1.268813e-05);
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
   
   TH1F *hsigfail_cat4_2016_fit_b_stack_4 = new TH1F("hsigfail_cat4_2016_fit_b_stack_4","hqq125 in cat4_2016_fail_cat4",23,40,201);
   hsigfail_cat4_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat4_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat4_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat4_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat4_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat4_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat4_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3013[23] = {
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
   Double_t data_copy_fy3013[23] = {
   0,
   37423,
   34018,
   31620,
   29935,
   28338,
   27316,
   25737,
   23697,
   22621,
   0,
   0,
   0,
   20065,
   19858,
   18782,
   18440,
   17138,
   16188,
   14948,
   13925,
   12913,
   11642};
   Double_t data_copy_felx3013[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3013[23] = {
   1.841055,
   194.4562,
   185.4455,
   178.8259,
   174.023,
   169.3446,
   166.2811,
   161.4331,
   154.9438,
   151.4083,
   1.841055,
   1.841055,
   1.841055,
   142.6564,
   141.9239,
   138.0529,
   136.7994,
   131.9176,
   128.2375,
   123.2674,
   119.0096,
   114.6408,
   108.9035};
   Double_t data_copy_fehx3013[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3013[23] = {
   0,
   193.4536,
   184.4428,
   177.823,
   173.0201,
   168.3416,
   165.2781,
   160.43,
   153.9405,
   150.4049,
   0,
   0,
   0,
   141.6529,
   140.9203,
   137.0492,
   135.7957,
   130.9137,
   127.2335,
   122.2633,
   118.0054,
   113.6364,
   107.8989};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3013,data_copy_fy3013,data_copy_felx3013,data_copy_fehx3013,data_copy_fely3013,data_copy_fehy3013);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat4_2016_fail_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3013 = new TH1F("Graph_data_copy3013","tqq in cat4_2016_fail_cat4",100,28.1,212.9);
   Graph_data_copy3013->SetMinimum(0);
   Graph_data_copy3013->SetMaximum(41378.28);
   Graph_data_copy3013->SetDirectory(0);
   Graph_data_copy3013->SetStats(0);
   Graph_data_copy3013->SetLineStyle(0);
   Graph_data_copy3013->SetMarkerStyle(20);
   Graph_data_copy3013->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3013->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3013->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3013->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3013->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3013->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3013->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3013->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3013->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3013->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3013->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3013);
   
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
   entry=leg->AddEntry("htotfail_cat4_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.77,"600 < p_{T} < 675 GeV");
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
   
   TH1F *htotfail_cat4_2016_fit_b_copy__53 = new TH1F("htotfail_cat4_2016_fit_b_copy__53","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(1,5.6712e-05);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(2,37435.86);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(3,34006.46);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(4,31609.92);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(5,29922.28);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(6,28309.94);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(7,27305.17);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(8,25724.87);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(9,23725.1);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(10,22643.4);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(11,5.6712e-05);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(12,5.6712e-05);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(13,5.6712e-05);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(14,20088.62);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(15,19861.45);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(16,18786.09);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(17,18479.75);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(18,17146.04);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(19,16184.95);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(20,14934.13);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(21,13932.18);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(22,12913.94);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(23,11649.02);
   htotfail_cat4_2016_fit_b_copy__53->SetMaximum(56153.78);
   htotfail_cat4_2016_fit_b_copy__53->SetEntries(92);
   htotfail_cat4_2016_fit_b_copy__53->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_b_copy__53->SetFillColor(ci);
   htotfail_cat4_2016_fit_b_copy__53->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_b_copy__53->SetLineColor(ci);
   htotfail_cat4_2016_fit_b_copy__53->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_b_copy__53->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_b_copy__53->SetMarkerSize(0);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_b_copy__53->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b_copy__53->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_b_copy__53->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b_copy__53->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_b_copy__53->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_b_copy__53->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_b_copy__53->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b_copy__53->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_b_copy__53->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_b_copy__53->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_b_copy__53->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_b_copy__53->Draw("sameaxis");
   p12fail_cat4_2016_fit_b->Modified();
   cfail_cat4_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_cat4_2016_fit_b
   TPad *p22fail_cat4_2016_fit_b = new TPad("p22fail_cat4_2016_fit_b", "p22fail_cat4_2016_fit_b",0,0,1,0.3);
   p22fail_cat4_2016_fit_b->Draw();
   p22fail_cat4_2016_fit_b->cd();
   p22fail_cat4_2016_fit_b->Range(13.7027,-16.02057,221.8108,20.71467);
   p22fail_cat4_2016_fit_b->SetFillColor(0);
   p22fail_cat4_2016_fit_b->SetBorderMode(0);
   p22fail_cat4_2016_fit_b->SetBorderSize(2);
   p22fail_cat4_2016_fit_b->SetTickx(1);
   p22fail_cat4_2016_fit_b->SetTicky(1);
   p22fail_cat4_2016_fit_b->SetLeftMargin(0.16);
   p22fail_cat4_2016_fit_b->SetTopMargin(0.05);
   p22fail_cat4_2016_fit_b->SetBottomMargin(0.3);
   p22fail_cat4_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat4_2016_fit_b->SetFrameBorderMode(0);
   p22fail_cat4_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat4_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat4_2016_fit_b__54 = new TH1F("iOneWithErrorsfail_cat4_2016_fit_b__54","",23,40,201);
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetMinimum(-5);
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetMaximum(18.87791);
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetFillColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetLineColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetMarkerColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetMarkerSize(0);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_b__54->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b__54->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_14 = new TH1F("hstack_stack_14","hstack",23,40,201);
   hstack_stack_14->SetMinimum(0);
   hstack_stack_14->SetMaximum(13.22592);
   hstack_stack_14->SetDirectory(0);
   hstack_stack_14->SetStats(0);
   hstack_stack_14->SetLineStyle(0);
   hstack_stack_14->SetMarkerStyle(20);
   hstack_stack_14->GetXaxis()->SetLabelFont(42);
   hstack_stack_14->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_14->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_14->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_14->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_14->GetXaxis()->SetTitleFont(42);
   hstack_stack_14->GetYaxis()->SetLabelFont(42);
   hstack_stack_14->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_14->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_14->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_14->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_14->GetYaxis()->SetTitleFont(42);
   hstack_stack_14->GetZaxis()->SetLabelFont(42);
   hstack_stack_14->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_14->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_14->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_14->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_14);
   
   
   TH1F *sigHistResidualwqqfail_cat4_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqfail_cat4_2016_fit_b_stack_1","wqq in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(2,0.1920348);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(3,0.4934854);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(4,1.729341);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(5,3.679854);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(6,8.596378);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(7,11.34173);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(8,6.938581);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(9,3.770797);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(10,1.236309);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(14,0.0566798);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(15,0.02681304);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(16,0.0112198);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(17,3.24192e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(18,0.01646179);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(19,3.460084e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(20,3.600743e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(21,3.730667e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(22,3.8741e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(23,4.080104e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat4_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat4_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqfail_cat4_2016_fit_b_stack_2","zqq in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(2,0.03663937);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(3,0.05103137);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(4,0.1186516);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(5,0.3597349);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(6,0.7334331);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(7,1.254389);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(8,3.058319);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(9,3.511436);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(10,2.137024);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(14,0.1038437);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(15,0.06888238);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(16,0.01716998);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(17,0.009468205);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(18,0.009821285);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(19,9.972316e-08);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(20,1.037771e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(21,1.075216e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(22,1.116555e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(23,1.175928e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat4_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3","hqq125 in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat4_2016_fit_b__55 = new TH1F("iOneWithErrorsLinefail_cat4_2016_fit_b__55","",23,40,201);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetFillColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetLineColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_b__55->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat4_2016_fit_b_fx3014[23] = {
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_b_fy3014[23] = {
   0,
   0.1613876,
   0.6038246,
   1.893973,
   4.089392,
   9.440232,
   12.58527,
   10.00995,
   7.053729,
   3.20304,
   0,
   0,
   0,
   -0.006246013,
   0.07070803,
   -0.001482132,
   -0.2832265,
   -0.03511974,
   0.02379771,
   0.1124968,
   -0.06084204,
   -0.008232812,
   -0.06509277};
   Double_t Graph_from_iRatiofail_cat4_2016_fit_b_felx3014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_b_fely3014[23] = {
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
   1,
   1,
   1};
   Double_t Graph_from_iRatiofail_cat4_2016_fit_b_fehx3014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_b_fehy3014[23] = {
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
   1,
   1,
   1};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat4_2016_fit_b_fx3014,Graph_from_iRatiofail_cat4_2016_fit_b_fy3014,Graph_from_iRatiofail_cat4_2016_fit_b_felx3014,Graph_from_iRatiofail_cat4_2016_fit_b_fehx3014,Graph_from_iRatiofail_cat4_2016_fit_b_fely3014,Graph_from_iRatiofail_cat4_2016_fit_b_fehy3014);
   grae->SetName("Graph_from_iRatiofail_cat4_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014 = new TH1F("Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetMinimum(-2.770076);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetMaximum(15.07212);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetStats(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat4_2016_fit_b_copy__56 = new TH1F("iOneWithErrorsfail_cat4_2016_fit_b_copy__56","",23,40,201);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetMinimum(-5);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetMaximum(18.87791);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetEntries(184);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetFillColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetLineColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetMarkerColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetMarkerSize(0);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->Draw("sameaxis");
   p22fail_cat4_2016_fit_b->Modified();
   cfail_cat4_2016_fit_b->cd();
   cfail_cat4_2016_fit_b->Modified();
   cfail_cat4_2016_fit_b->cd();
   cfail_cat4_2016_fit_b->SetSelected(cfail_cat4_2016_fit_b);
}
