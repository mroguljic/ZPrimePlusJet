void mlfit_fail_cat4_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat4_2016_fit_b/cfail_cat4_2016_fit_b
//=========  (Mon Sep 30 17:21:33 2019) by ROOT version 6.12/07
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
   p12fail_cat4_2016_fit_b->Range(13.7027,-1159.76,221.8108,56828.25);
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
   htotfail_cat4_2016_fit_b__49->SetBinContent(1,4.762038e-05);
   htotfail_cat4_2016_fit_b__49->SetBinContent(2,4.762038e-05);
   htotfail_cat4_2016_fit_b__49->SetBinContent(3,34019.63);
   htotfail_cat4_2016_fit_b__49->SetBinContent(4,31608.54);
   htotfail_cat4_2016_fit_b__49->SetBinContent(5,29918.65);
   htotfail_cat4_2016_fit_b__49->SetBinContent(6,28308.65);
   htotfail_cat4_2016_fit_b__49->SetBinContent(7,27303.55);
   htotfail_cat4_2016_fit_b__49->SetBinContent(8,25720.71);
   htotfail_cat4_2016_fit_b__49->SetBinContent(9,23721.54);
   htotfail_cat4_2016_fit_b__49->SetBinContent(10,22640.24);
   htotfail_cat4_2016_fit_b__49->SetBinContent(11,21828.26);
   htotfail_cat4_2016_fit_b__49->SetBinContent(12,21165.62);
   htotfail_cat4_2016_fit_b__49->SetBinContent(13,20577.43);
   htotfail_cat4_2016_fit_b__49->SetBinContent(14,20095.98);
   htotfail_cat4_2016_fit_b__49->SetBinContent(15,19854.87);
   htotfail_cat4_2016_fit_b__49->SetBinContent(16,18786.21);
   htotfail_cat4_2016_fit_b__49->SetBinContent(17,18477.96);
   htotfail_cat4_2016_fit_b__49->SetBinContent(18,17144.81);
   htotfail_cat4_2016_fit_b__49->SetBinContent(19,16187.26);
   htotfail_cat4_2016_fit_b__49->SetBinContent(20,14935.22);
   htotfail_cat4_2016_fit_b__49->SetBinContent(21,13933.95);
   htotfail_cat4_2016_fit_b__49->SetBinContent(22,12914.97);
   htotfail_cat4_2016_fit_b__49->SetBinContent(23,11649.21);
   htotfail_cat4_2016_fit_b__49->SetMinimum(0);
   htotfail_cat4_2016_fit_b__49->SetMaximum(51029.45);
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
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(1,4.762038e-05);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(2,4.762038e-05);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(3,34019.63);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(4,31608.54);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(5,29918.65);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(6,28308.65);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(7,27303.55);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(8,25720.71);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(9,23721.54);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(10,22640.24);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(11,21828.26);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(12,21165.62);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(13,20577.43);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(14,20095.98);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(15,19854.87);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(16,18786.21);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(17,18477.96);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(18,17144.81);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(19,16187.26);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(20,14935.22);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(21,13933.95);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(22,12914.97);
   htot_linefail_cat4_2016_fit_b__50->SetBinContent(23,11649.21);
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
   qcd__51->SetBinContent(3,33908.13);
   qcd__51->SetBinContent(4,31326.35);
   qcd__51->SetBinContent(5,29267.13);
   qcd__51->SetBinContent(6,26932.96);
   qcd__51->SetBinContent(7,25533.86);
   qcd__51->SetBinContent(8,24286.61);
   qcd__51->SetBinContent(9,22726.37);
   qcd__51->SetBinContent(10,22134.96);
   qcd__51->SetBinContent(11,21551.28);
   qcd__51->SetBinContent(12,21005.1);
   qcd__51->SetBinContent(13,20475.37);
   qcd__51->SetBinContent(14,19984.79);
   qcd__51->SetBinContent(15,19767.04);
   qcd__51->SetBinContent(16,18717.74);
   qcd__51->SetBinContent(17,18423.94);
   qcd__51->SetBinContent(18,17093.8);
   qcd__51->SetBinContent(19,16149.07);
   qcd__51->SetBinContent(20,14897.32);
   qcd__51->SetBinContent(21,13903.68);
   qcd__51->SetBinContent(22,12896.96);
   qcd__51->SetBinContent(23,11636.64);
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
   htotfail_cat4_2016_fit_b__52->SetBinContent(1,4.762038e-05);
   htotfail_cat4_2016_fit_b__52->SetBinContent(2,4.762038e-05);
   htotfail_cat4_2016_fit_b__52->SetBinContent(3,34019.63);
   htotfail_cat4_2016_fit_b__52->SetBinContent(4,31608.54);
   htotfail_cat4_2016_fit_b__52->SetBinContent(5,29918.65);
   htotfail_cat4_2016_fit_b__52->SetBinContent(6,28308.65);
   htotfail_cat4_2016_fit_b__52->SetBinContent(7,27303.55);
   htotfail_cat4_2016_fit_b__52->SetBinContent(8,25720.71);
   htotfail_cat4_2016_fit_b__52->SetBinContent(9,23721.54);
   htotfail_cat4_2016_fit_b__52->SetBinContent(10,22640.24);
   htotfail_cat4_2016_fit_b__52->SetBinContent(11,21828.26);
   htotfail_cat4_2016_fit_b__52->SetBinContent(12,21165.62);
   htotfail_cat4_2016_fit_b__52->SetBinContent(13,20577.43);
   htotfail_cat4_2016_fit_b__52->SetBinContent(14,20095.98);
   htotfail_cat4_2016_fit_b__52->SetBinContent(15,19854.87);
   htotfail_cat4_2016_fit_b__52->SetBinContent(16,18786.21);
   htotfail_cat4_2016_fit_b__52->SetBinContent(17,18477.96);
   htotfail_cat4_2016_fit_b__52->SetBinContent(18,17144.81);
   htotfail_cat4_2016_fit_b__52->SetBinContent(19,16187.26);
   htotfail_cat4_2016_fit_b__52->SetBinContent(20,14935.22);
   htotfail_cat4_2016_fit_b__52->SetBinContent(21,13933.95);
   htotfail_cat4_2016_fit_b__52->SetBinContent(22,12914.97);
   htotfail_cat4_2016_fit_b__52->SetBinContent(23,11649.21);
   htotfail_cat4_2016_fit_b__52->SetMinimum(0);
   htotfail_cat4_2016_fit_b__52->SetMaximum(51029.45);
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
   hstackMC_stack_13->SetMaximum(1858.18);
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
   tqq_stack_1->SetBinContent(3,33.56938);
   tqq_stack_1->SetBinContent(4,40.9542);
   tqq_stack_1->SetBinContent(5,64.41654);
   tqq_stack_1->SetBinContent(6,121.0171);
   tqq_stack_1->SetBinContent(7,142.9434);
   tqq_stack_1->SetBinContent(8,105.6719);
   tqq_stack_1->SetBinContent(9,72.69804);
   tqq_stack_1->SetBinContent(10,68.22401);
   tqq_stack_1->SetBinContent(11,77.29284);
   tqq_stack_1->SetBinContent(12,91.43048);
   tqq_stack_1->SetBinContent(13,77.27874);
   tqq_stack_1->SetBinContent(14,94.07677);
   tqq_stack_1->SetBinContent(15,76.91999);
   tqq_stack_1->SetBinContent(16,65.60714);
   tqq_stack_1->SetBinContent(17,53.16436);
   tqq_stack_1->SetBinContent(18,49.08097);
   tqq_stack_1->SetBinContent(19,38.1943);
   tqq_stack_1->SetBinContent(20,37.90239);
   tqq_stack_1->SetBinContent(21,30.26547);
   tqq_stack_1->SetBinContent(22,18.0158);
   tqq_stack_1->SetBinContent(23,12.57485);
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
   wqq_stack_2->SetBinContent(1,3.281692e-05);
   wqq_stack_2->SetBinContent(2,3.281692e-05);
   wqq_stack_2->SetBinContent(3,68.55283);
   wqq_stack_2->SetBinContent(4,219.1903);
   wqq_stack_2->SetBinContent(5,524.1943);
   wqq_stack_2->SetBinContent(6,1124.499);
   wqq_stack_2->SetBinContent(7,1378.816);
   wqq_stack_2->SetBinContent(8,801.5815);
   wqq_stack_2->SetBinContent(9,378.273);
   wqq_stack_2->SetBinContent(10,122.6852);
   wqq_stack_2->SetBinContent(11,39.72998);
   wqq_stack_2->SetBinContent(12,14.99598);
   wqq_stack_2->SetBinContent(13,5.757514);
   wqq_stack_2->SetBinContent(14,4.538669);
   wqq_stack_2->SetBinContent(15,3.175347);
   wqq_stack_2->SetBinContent(16,1.067017);
   wqq_stack_2->SetBinContent(17,3.281692e-05);
   wqq_stack_2->SetBinContent(18,1.075359);
   wqq_stack_2->SetBinContent(19,3.281692e-05);
   wqq_stack_2->SetBinContent(20,3.281692e-05);
   wqq_stack_2->SetBinContent(21,3.281692e-05);
   wqq_stack_2->SetBinContent(22,3.281692e-05);
   wqq_stack_2->SetBinContent(23,3.281692e-05);
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
   zqq_stack_3->SetBinContent(1,1.480346e-05);
   zqq_stack_3->SetBinContent(2,1.480346e-05);
   zqq_stack_3->SetBinContent(3,9.380063);
   zqq_stack_3->SetBinContent(4,22.0516);
   zqq_stack_3->SetBinContent(5,62.90594);
   zqq_stack_3->SetBinContent(6,130.178);
   zqq_stack_3->SetBinContent(7,247.9364);
   zqq_stack_3->SetBinContent(8,526.8524);
   zqq_stack_3->SetBinContent(9,544.1995);
   zqq_stack_3->SetBinContent(10,314.3705);
   zqq_stack_3->SetBinContent(11,159.9593);
   zqq_stack_3->SetBinContent(12,54.10047);
   zqq_stack_3->SetBinContent(13,19.02034);
   zqq_stack_3->SetBinContent(14,12.58233);
   zqq_stack_3->SetBinContent(15,7.733376);
   zqq_stack_3->SetBinContent(16,1.801913);
   zqq_stack_3->SetBinContent(17,0.8541563);
   zqq_stack_3->SetBinContent(18,0.8541563);
   zqq_stack_3->SetBinContent(19,1.480346e-05);
   zqq_stack_3->SetBinContent(20,1.480346e-05);
   zqq_stack_3->SetBinContent(21,1.480346e-05);
   zqq_stack_3->SetBinContent(22,1.480346e-05);
   zqq_stack_3->SetBinContent(23,1.480346e-05);
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
   
   TH1F *hsigfail_cat4_2016_fit_b_stack_4 = new TH1F("hsigfail_cat4_2016_fit_b_stack_4","ggH_hbb in cat4_2016_fail_cat4",23,40,201);
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
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(1,4.762038e-05);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(2,4.762038e-05);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(3,34019.63);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(4,31608.54);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(5,29918.65);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(6,28308.65);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(7,27303.55);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(8,25720.71);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(9,23721.54);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(10,22640.24);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(11,21828.26);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(12,21165.62);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(13,20577.43);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(14,20095.98);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(15,19854.87);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(16,18786.21);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(17,18477.96);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(18,17144.81);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(19,16187.26);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(20,14935.22);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(21,13933.95);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(22,12914.97);
   htotfail_cat4_2016_fit_b_copy__53->SetBinContent(23,11649.21);
   htotfail_cat4_2016_fit_b_copy__53->SetMaximum(51029.45);
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
   p22fail_cat4_2016_fit_b->Range(13.7027,-14.13246,221.8108,16.30907);
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
   iOneWithErrorsfail_cat4_2016_fit_b__54->SetMaximum(14.787);
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
   hstack_stack_14->SetMaximum(10.33464);
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
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(3,0.3716753);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(4,1.232631);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(5,3.029672);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(6,6.679862);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(7,8.342399);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(8,4.996457);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(9,2.457267);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(10,0.8156992);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(11,0.2691557);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(12,0.1031253);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(13,0.04014027);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(14,0.03204078);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(15,0.02253293);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(16,0.007785648);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(17,2.41664e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(18,0.008214252);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(19,2.579267e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(20,2.684119e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(21,2.780968e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(22,2.887889e-07);
   sigHistResidualwqqfail_cat4_2016_fit_b_stack_1->SetBinContent(23,3.041451e-07);
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
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(3,0.05085622);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(4,0.1240087);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(5,0.3635758);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(6,0.7732965);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(7,1.500117);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(8,3.284002);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(9,3.535128);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(10,2.090161);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(11,1.083664);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(12,0.3720413);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(13,0.1326061);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(14,0.08882514);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(15,0.05487766);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(16,0.01314793);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(17,0.006290011);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(18,0.006524573);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(19,1.163488e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(20,1.210785e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(21,1.254474e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(22,1.302705e-07);
   sigHistResidualzqqfail_cat4_2016_fit_b_stack_2->SetBinContent(23,1.371975e-07);
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
   
   TH1F *sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat4_2016_fit_bfail_cat4_2016_fit_b_stack_3","ggH_hbb in cat4_2016_fail_cat4",23,40,201);
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
   0,
   0.4114458,
   1.413102,
   3.467674,
   7.582335,
   9.857998,
   8.329893,
   5.795233,
   2.759522,
   1.072757,
   0.3310685,
   0.1409014,
   -0.09786799,
   0.09891968,
   -0.009819126,
   -0.2732161,
   -0.0372681,
   0.005734296,
   0.1036476,
   -0.07583738,
   -0.01735078,
   -0.06684861};
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat4_2016_fit_b_fx3014,Graph_from_iRatiofail_cat4_2016_fit_b_fy3014,Graph_from_iRatiofail_cat4_2016_fit_b_felx3014,Graph_from_iRatiofail_cat4_2016_fit_b_fehx3014,Graph_from_iRatiofail_cat4_2016_fit_b_fely3014,Graph_from_iRatiofail_cat4_2016_fit_b_fehy3014);
   grae->SetName("Graph_from_iRatiofail_cat4_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014 = new TH1F("Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetMinimum(-2.486337);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_b3014->SetMaximum(12.07112);
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
   iOneWithErrorsfail_cat4_2016_fit_b_copy__56->SetMaximum(14.787);
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
