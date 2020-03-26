void mlfit_fail_cat4_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat4_2016_fit_s/cfail_cat4_2016_fit_s
//=========  (Mon Sep 30 17:21:42 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat4_2016_fit_s = new TCanvas("cfail_cat4_2016_fit_s", "cfail_cat4_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat4_2016_fit_s->SetHighLightColor(2);
   cfail_cat4_2016_fit_s->Range(0,0,1,1);
   cfail_cat4_2016_fit_s->SetFillColor(0);
   cfail_cat4_2016_fit_s->SetBorderMode(0);
   cfail_cat4_2016_fit_s->SetBorderSize(2);
   cfail_cat4_2016_fit_s->SetTickx(1);
   cfail_cat4_2016_fit_s->SetTicky(1);
   cfail_cat4_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat4_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat4_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat4_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat4_2016_fit_s
   TPad *p12fail_cat4_2016_fit_s = new TPad("p12fail_cat4_2016_fit_s", "p12fail_cat4_2016_fit_s",0,0.3,1,1);
   p12fail_cat4_2016_fit_s->Draw();
   p12fail_cat4_2016_fit_s->cd();
   p12fail_cat4_2016_fit_s->Range(13.7027,-1159.64,221.8108,56822.38);
   p12fail_cat4_2016_fit_s->SetFillColor(0);
   p12fail_cat4_2016_fit_s->SetBorderMode(0);
   p12fail_cat4_2016_fit_s->SetBorderSize(2);
   p12fail_cat4_2016_fit_s->SetTickx(1);
   p12fail_cat4_2016_fit_s->SetTicky(1);
   p12fail_cat4_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat4_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat4_2016_fit_s__49 = new TH1F("htotfail_cat4_2016_fit_s__49","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_s__49->SetBinContent(1,5.035731e-05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(2,5.035731e-05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(3,34016.12);
   htotfail_cat4_2016_fit_s__49->SetBinContent(4,31608.6);
   htotfail_cat4_2016_fit_s__49->SetBinContent(5,29919.58);
   htotfail_cat4_2016_fit_s__49->SetBinContent(6,28308.72);
   htotfail_cat4_2016_fit_s__49->SetBinContent(7,27300.85);
   htotfail_cat4_2016_fit_s__49->SetBinContent(8,25718.4);
   htotfail_cat4_2016_fit_s__49->SetBinContent(9,23716.72);
   htotfail_cat4_2016_fit_s__49->SetBinContent(10,22632.66);
   htotfail_cat4_2016_fit_s__49->SetBinContent(11,21816.05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(12,21145.98);
   htotfail_cat4_2016_fit_s__49->SetBinContent(13,20558.08);
   htotfail_cat4_2016_fit_s__49->SetBinContent(14,20083.14);
   htotfail_cat4_2016_fit_s__49->SetBinContent(15,19848.31);
   htotfail_cat4_2016_fit_s__49->SetBinContent(16,18784.9);
   htotfail_cat4_2016_fit_s__49->SetBinContent(17,18478.78);
   htotfail_cat4_2016_fit_s__49->SetBinContent(18,17145.83);
   htotfail_cat4_2016_fit_s__49->SetBinContent(19,16188.27);
   htotfail_cat4_2016_fit_s__49->SetBinContent(20,14935.64);
   htotfail_cat4_2016_fit_s__49->SetBinContent(21,13933.78);
   htotfail_cat4_2016_fit_s__49->SetBinContent(22,12914.38);
   htotfail_cat4_2016_fit_s__49->SetBinContent(23,11648.41);
   htotfail_cat4_2016_fit_s__49->SetMinimum(0);
   htotfail_cat4_2016_fit_s__49->SetMaximum(51024.18);
   htotfail_cat4_2016_fit_s__49->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__49->SetFillColor(ci);
   htotfail_cat4_2016_fit_s__49->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__49->SetLineColor(ci);
   htotfail_cat4_2016_fit_s__49->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_s__49->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_s__49->SetMarkerSize(0);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__49->Draw("");
   
   TH1F *htot_linefail_cat4_2016_fit_s__50 = new TH1F("htot_linefail_cat4_2016_fit_s__50","wqq in cat4_2016_fail_cat4",23,40,201);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(1,5.035731e-05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(2,5.035731e-05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(3,34016.12);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(4,31608.6);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(5,29919.58);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(6,28308.72);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(7,27300.85);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(8,25718.4);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(9,23716.72);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(10,22632.66);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(11,21816.05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(12,21145.98);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(13,20558.08);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(14,20083.14);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(15,19848.31);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(16,18784.9);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(17,18478.78);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(18,17145.83);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(19,16188.27);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(20,14935.64);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(21,13933.78);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(22,12914.38);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(23,11648.41);
   htot_linefail_cat4_2016_fit_s__50->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat4_2016_fit_s__50->SetFillColor(ci);
   htot_linefail_cat4_2016_fit_s__50->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat4_2016_fit_s__50->SetLineColor(ci);
   htot_linefail_cat4_2016_fit_s__50->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat4_2016_fit_s__50->SetMarkerColor(ci);
   htot_linefail_cat4_2016_fit_s__50->SetMarkerSize(0);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetRange(2,23);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_s__50->Draw("histsame");
   
   TH1F *qcd__51 = new TH1F("qcd__51","qcd in cat4_2016_fail_cat4",23,40,201);
   qcd__51->SetBinContent(3,33899.23);
   qcd__51->SetBinContent(4,31301.26);
   qcd__51->SetBinContent(5,29229.93);
   qcd__51->SetBinContent(6,26862.65);
   qcd__51->SetBinContent(7,25448.45);
   qcd__51->SetBinContent(8,24220.87);
   qcd__51->SetBinContent(9,22667.17);
   qcd__51->SetBinContent(10,22105.13);
   qcd__51->SetBinContent(11,21524.74);
   qcd__51->SetBinContent(12,20980.62);
   qcd__51->SetBinContent(13,20455.43);
   qcd__51->SetBinContent(14,19970.67);
   qcd__51->SetBinContent(15,19760.2);
   qcd__51->SetBinContent(16,18716.59);
   qcd__51->SetBinContent(17,18424.96);
   qcd__51->SetBinContent(18,17094.77);
   qcd__51->SetBinContent(19,16150.33);
   qcd__51->SetBinContent(20,14897.99);
   qcd__51->SetBinContent(21,13903.71);
   qcd__51->SetBinContent(22,12896.48);
   qcd__51->SetBinContent(23,11635.91);
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
   
   TH1F *htotfail_cat4_2016_fit_s__52 = new TH1F("htotfail_cat4_2016_fit_s__52","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_s__52->SetBinContent(1,5.035731e-05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(2,5.035731e-05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(3,34016.12);
   htotfail_cat4_2016_fit_s__52->SetBinContent(4,31608.6);
   htotfail_cat4_2016_fit_s__52->SetBinContent(5,29919.58);
   htotfail_cat4_2016_fit_s__52->SetBinContent(6,28308.72);
   htotfail_cat4_2016_fit_s__52->SetBinContent(7,27300.85);
   htotfail_cat4_2016_fit_s__52->SetBinContent(8,25718.4);
   htotfail_cat4_2016_fit_s__52->SetBinContent(9,23716.72);
   htotfail_cat4_2016_fit_s__52->SetBinContent(10,22632.66);
   htotfail_cat4_2016_fit_s__52->SetBinContent(11,21816.05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(12,21145.98);
   htotfail_cat4_2016_fit_s__52->SetBinContent(13,20558.08);
   htotfail_cat4_2016_fit_s__52->SetBinContent(14,20083.14);
   htotfail_cat4_2016_fit_s__52->SetBinContent(15,19848.31);
   htotfail_cat4_2016_fit_s__52->SetBinContent(16,18784.9);
   htotfail_cat4_2016_fit_s__52->SetBinContent(17,18478.78);
   htotfail_cat4_2016_fit_s__52->SetBinContent(18,17145.83);
   htotfail_cat4_2016_fit_s__52->SetBinContent(19,16188.27);
   htotfail_cat4_2016_fit_s__52->SetBinContent(20,14935.64);
   htotfail_cat4_2016_fit_s__52->SetBinContent(21,13933.78);
   htotfail_cat4_2016_fit_s__52->SetBinContent(22,12914.38);
   htotfail_cat4_2016_fit_s__52->SetBinContent(23,11648.41);
   htotfail_cat4_2016_fit_s__52->SetMinimum(0);
   htotfail_cat4_2016_fit_s__52->SetMaximum(51024.18);
   htotfail_cat4_2016_fit_s__52->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__52->SetFillColor(ci);
   htotfail_cat4_2016_fit_s__52->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__52->SetLineColor(ci);
   htotfail_cat4_2016_fit_s__52->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_s__52->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_s__52->SetMarkerSize(0);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__52->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis13[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_13 = new TH1F("hstackMC_stack_13","hstackMC",23, xAxis13);
   hstackMC_stack_13->SetMinimum(0);
   hstackMC_stack_13->SetMaximum(1948.496);
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
   tqq_stack_1->SetBinContent(3,33.34718);
   tqq_stack_1->SetBinContent(4,40.68312);
   tqq_stack_1->SetBinContent(5,63.99015);
   tqq_stack_1->SetBinContent(6,120.216);
   tqq_stack_1->SetBinContent(7,141.9972);
   tqq_stack_1->SetBinContent(8,104.9725);
   tqq_stack_1->SetBinContent(9,72.21683);
   tqq_stack_1->SetBinContent(10,67.77242);
   tqq_stack_1->SetBinContent(11,76.78122);
   tqq_stack_1->SetBinContent(12,90.82528);
   tqq_stack_1->SetBinContent(13,76.76721);
   tqq_stack_1->SetBinContent(14,93.45406);
   tqq_stack_1->SetBinContent(15,76.41084);
   tqq_stack_1->SetBinContent(16,65.17287);
   tqq_stack_1->SetBinContent(17,52.81245);
   tqq_stack_1->SetBinContent(18,48.7561);
   tqq_stack_1->SetBinContent(19,37.94148);
   tqq_stack_1->SetBinContent(20,37.6515);
   tqq_stack_1->SetBinContent(21,30.06513);
   tqq_stack_1->SetBinContent(22,17.89655);
   tqq_stack_1->SetBinContent(23,12.49162);
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
   wqq_stack_2->SetBinContent(1,3.481448e-05);
   wqq_stack_2->SetBinContent(2,3.481448e-05);
   wqq_stack_2->SetBinContent(3,73.28526);
   wqq_stack_2->SetBinContent(4,243.1154);
   wqq_stack_2->SetBinContent(5,557.1888);
   wqq_stack_2->SetBinContent(6,1187.914);
   wqq_stack_2->SetBinContent(7,1448.535);
   wqq_stack_2->SetBinContent(8,843.105);
   wqq_stack_2->SetBinContent(9,411.3291);
   wqq_stack_2->SetBinContent(10,132.3436);
   wqq_stack_2->SetBinContent(11,43.89885);
   wqq_stack_2->SetBinContent(12,15.46551);
   wqq_stack_2->SetBinContent(13,6.406559);
   wqq_stack_2->SetBinContent(14,5.342977);
   wqq_stack_2->SetBinContent(15,3.148069);
   wqq_stack_2->SetBinContent(16,1.1327);
   wqq_stack_2->SetBinContent(17,3.481448e-05);
   wqq_stack_2->SetBinContent(18,1.287332);
   wqq_stack_2->SetBinContent(19,3.481448e-05);
   wqq_stack_2->SetBinContent(20,3.481448e-05);
   wqq_stack_2->SetBinContent(21,3.481448e-05);
   wqq_stack_2->SetBinContent(22,3.481448e-05);
   wqq_stack_2->SetBinContent(23,3.481448e-05);
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
   zqq_stack_3->SetBinContent(1,1.554282e-05);
   zqq_stack_3->SetBinContent(2,1.554282e-05);
   zqq_stack_3->SetBinContent(3,10.26288);
   zqq_stack_3->SetBinContent(4,23.54811);
   zqq_stack_3->SetBinContent(5,68.47502);
   zqq_stack_3->SetBinContent(6,137.935);
   zqq_stack_3->SetBinContent(7,261.8717);
   zqq_stack_3->SetBinContent(8,549.4576);
   zqq_stack_3->SetBinContent(9,566.0041);
   zqq_stack_3->SetBinContent(10,327.4138);
   zqq_stack_3->SetBinContent(11,170.6343);
   zqq_stack_3->SetBinContent(12,59.06845);
   zqq_stack_3->SetBinContent(13,19.47445);
   zqq_stack_3->SetBinContent(14,13.67567);
   zqq_stack_3->SetBinContent(15,8.55062);
   zqq_stack_3->SetBinContent(16,2.007735);
   zqq_stack_3->SetBinContent(17,1.011997);
   zqq_stack_3->SetBinContent(18,1.011997);
   zqq_stack_3->SetBinContent(19,1.554282e-05);
   zqq_stack_3->SetBinContent(20,1.554282e-05);
   zqq_stack_3->SetBinContent(21,1.554282e-05);
   zqq_stack_3->SetBinContent(22,1.554282e-05);
   zqq_stack_3->SetBinContent(23,1.554282e-05);
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
   
   TH1F *hsigfail_cat4_2016_fit_s_stack_4 = new TH1F("hsigfail_cat4_2016_fit_s_stack_4","ggH_hbb in cat4_2016_fail_cat4",23,40,201);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(1,5.718666e-07);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(2,5.718666e-07);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(3,1.757886);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(4,1.08955);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(5,1.969352);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(6,1.653734);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(7,3.306956);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(8,2.59194);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(9,5.000551);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(10,7.462039);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(11,10.0659);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(12,12.81694);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(13,12.16047);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(14,8.476869);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(15,6.036012);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(16,3.035206);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(17,2.05431);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(18,1.055208);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(19,0.3413931);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(20,0.2214723);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(21,0.2429145);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(22,0.2391083);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(23,0.1174238);
   hsigfail_cat4_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat4_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat4_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat4_2016_fit_s_stack_4,"");
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
   0,
   34018,
   31620,
   29935,
   28338,
   27316,
   25737,
   23697,
   22621,
   21788,
   21145,
   20573,
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
   1.841055,
   185.4455,
   178.8259,
   174.023,
   169.3446,
   166.2811,
   161.4331,
   154.9438,
   151.4083,
   148.6131,
   146.4187,
   144.4384,
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
   0,
   184.4428,
   177.823,
   173.0201,
   168.3416,
   165.2781,
   160.43,
   153.9405,
   150.4049,
   147.6096,
   145.4152,
   143.4348,
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
   grae->SetTitle("WH_hbb in cat4_2016_fail_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3013 = new TH1F("Graph_data_copy3013","WH_hbb in cat4_2016_fail_cat4",100,28.1,212.9);
   Graph_data_copy3013->SetMinimum(0);
   Graph_data_copy3013->SetMaximum(37622.87);
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
   entry=leg->AddEntry("htotfail_cat4_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat4_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotfail_cat4_2016_fit_s_copy__53 = new TH1F("htotfail_cat4_2016_fit_s_copy__53","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(1,5.035731e-05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(2,5.035731e-05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(3,34016.12);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(4,31608.6);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(5,29919.58);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(6,28308.72);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(7,27300.85);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(8,25718.4);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(9,23716.72);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(10,22632.66);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(11,21816.05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(12,21145.98);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(13,20558.08);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(14,20083.14);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(15,19848.31);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(16,18784.9);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(17,18478.78);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(18,17145.83);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(19,16188.27);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(20,14935.64);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(21,13933.78);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(22,12914.38);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(23,11648.41);
   htotfail_cat4_2016_fit_s_copy__53->SetMaximum(51024.18);
   htotfail_cat4_2016_fit_s_copy__53->SetEntries(92);
   htotfail_cat4_2016_fit_s_copy__53->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s_copy__53->SetFillColor(ci);
   htotfail_cat4_2016_fit_s_copy__53->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s_copy__53->SetLineColor(ci);
   htotfail_cat4_2016_fit_s_copy__53->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_s_copy__53->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_s_copy__53->SetMarkerSize(0);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s_copy__53->Draw("sameaxis");
   p12fail_cat4_2016_fit_s->Modified();
   cfail_cat4_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat4_2016_fit_s
   TPad *p22fail_cat4_2016_fit_s = new TPad("p22fail_cat4_2016_fit_s", "p22fail_cat4_2016_fit_s",0,0,1,0.3);
   p22fail_cat4_2016_fit_s->Draw();
   p22fail_cat4_2016_fit_s->cd();
   p22fail_cat4_2016_fit_s->Range(13.7027,-14.49201,221.8108,17.14802);
   p22fail_cat4_2016_fit_s->SetFillColor(0);
   p22fail_cat4_2016_fit_s->SetBorderMode(0);
   p22fail_cat4_2016_fit_s->SetBorderSize(2);
   p22fail_cat4_2016_fit_s->SetTickx(1);
   p22fail_cat4_2016_fit_s->SetTicky(1);
   p22fail_cat4_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat4_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat4_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat4_2016_fit_s__54 = new TH1F("iOneWithErrorsfail_cat4_2016_fit_s__54","",23,40,201);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMinimum(-5);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMaximum(15.56602);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetFillColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetLineColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMarkerColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMarkerSize(0);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_14 = new TH1F("hstack_stack_14","hstack",23,40,201);
   hstack_stack_14->SetMinimum(0);
   hstack_stack_14->SetMaximum(10.8871);
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
   
   
   TH1F *sigHistResidualwqqfail_cat4_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat4_2016_fit_s_stack_1","wqq in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(3,0.3973333);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(4,1.367176);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(5,3.22037);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(6,7.056566);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(7,8.764228);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(8,5.255283);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(9,2.672);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(10,0.8799149);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(11,0.2973982);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(12,0.1063542);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(13,0.04466529);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(14,0.0377188);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(15,0.02233936);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(16,0.008264913);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(17,2.56374e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(18,0.009833439);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(19,2.736267e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(20,2.847501e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(21,2.950246e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(22,3.063674e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(23,3.226584e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat4_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat4_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat4_2016_fit_s_stack_2","zqq in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(3,0.05564264);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(4,0.1324244);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(5,0.3957633);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(6,0.8193757);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(7,1.584431);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(8,3.424906);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(9,3.676771);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(10,2.176882);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(11,1.155983);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(12,0.4062054);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(13,0.1357721);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(14,0.09654352);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(15,0.060677);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(16,0.01464974);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(17,0.007452351);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(18,0.007730258);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(19,1.221598e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(20,1.271258e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(21,1.317129e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(22,1.367768e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(23,1.440499e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat4_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3","ggH_hbb in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(3,0.009530791);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(4,0.006127157);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(5,0.01138221);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(6,0.009823682);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(7,0.02000843);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(8,0.01615621);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(9,0.03248365);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(10,0.04961299);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(11,0.06819267);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(12,0.08814032);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(13,0.08478041);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(14,0.05984255);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(15,0.04283281);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(16,0.02214684);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(17,0.01512795);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(18,0.008060334);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(19,0.002683201);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(20,0.001811438);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(21,0.002058504);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(22,0.002104153);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(23,0.001088277);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat4_2016_fit_s__55 = new TH1F("iOneWithErrorsLinefail_cat4_2016_fit_s__55","",23,40,201);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetFillColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetLineColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fx3014[23] = {
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fy3014[23] = {
   0,
   0,
   0.4606516,
   1.554923,
   3.683892,
   8.002197,
   10.37734,
   8.741441,
   6.180416,
   2.959532,
   1.254792,
   0.5023587,
   0.2825059,
   0.006133618,
   0.1507053,
   0.001726015,
   -0.2781494,
   -0.04222127,
   -0.002118398,
   0.1002647,
   -0.07439744,
   -0.01211719,
   -0.05936367};
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_felx3014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fely3014[23] = {
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fehx3014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fehy3014[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat4_2016_fit_s_fx3014,Graph_from_iRatiofail_cat4_2016_fit_s_fy3014,Graph_from_iRatiofail_cat4_2016_fit_s_felx3014,Graph_from_iRatiofail_cat4_2016_fit_s_fehx3014,Graph_from_iRatiofail_cat4_2016_fit_s_fely3014,Graph_from_iRatiofail_cat4_2016_fit_s_fehy3014);
   grae->SetName("Graph_from_iRatiofail_cat4_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014 = new TH1F("Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetMinimum(-2.543699);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetMaximum(12.64289);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetStats(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat4_2016_fit_s_copy__56 = new TH1F("iOneWithErrorsfail_cat4_2016_fit_s_copy__56","",23,40,201);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMinimum(-5);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMaximum(15.56602);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetEntries(184);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetFillColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetLineColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMarkerColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMarkerSize(0);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->Draw("sameaxis");
   p22fail_cat4_2016_fit_s->Modified();
   cfail_cat4_2016_fit_s->cd();
   cfail_cat4_2016_fit_s->Modified();
   cfail_cat4_2016_fit_s->cd();
   cfail_cat4_2016_fit_s->SetSelected(cfail_cat4_2016_fit_s);
}
