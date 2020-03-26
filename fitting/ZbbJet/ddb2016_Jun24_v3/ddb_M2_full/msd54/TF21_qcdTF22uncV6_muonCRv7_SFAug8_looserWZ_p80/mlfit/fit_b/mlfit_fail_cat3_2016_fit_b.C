void mlfit_fail_cat3_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat3_2016_fit_b/cfail_cat3_2016_fit_b
//=========  (Mon Sep 30 17:21:32 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat3_2016_fit_b = new TCanvas("cfail_cat3_2016_fit_b", "cfail_cat3_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat3_2016_fit_b->SetHighLightColor(2);
   cfail_cat3_2016_fit_b->Range(0,0,1,1);
   cfail_cat3_2016_fit_b->SetFillColor(0);
   cfail_cat3_2016_fit_b->SetBorderMode(0);
   cfail_cat3_2016_fit_b->SetBorderSize(2);
   cfail_cat3_2016_fit_b->SetTickx(1);
   cfail_cat3_2016_fit_b->SetTicky(1);
   cfail_cat3_2016_fit_b->SetLeftMargin(0.16);
   cfail_cat3_2016_fit_b->SetBottomMargin(0.13);
   cfail_cat3_2016_fit_b->SetFrameFillStyle(0);
   cfail_cat3_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat3_2016_fit_b
   TPad *p12fail_cat3_2016_fit_b = new TPad("p12fail_cat3_2016_fit_b", "p12fail_cat3_2016_fit_b",0,0.3,1,1);
   p12fail_cat3_2016_fit_b->Draw();
   p12fail_cat3_2016_fit_b->cd();
   p12fail_cat3_2016_fit_b->Range(13.7027,-1577.608,221.8108,77302.82);
   p12fail_cat3_2016_fit_b->SetFillColor(0);
   p12fail_cat3_2016_fit_b->SetBorderMode(0);
   p12fail_cat3_2016_fit_b->SetBorderSize(2);
   p12fail_cat3_2016_fit_b->SetTickx(1);
   p12fail_cat3_2016_fit_b->SetTicky(1);
   p12fail_cat3_2016_fit_b->SetLeftMargin(0.16);
   p12fail_cat3_2016_fit_b->SetBottomMargin(0.02);
   p12fail_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat3_2016_fit_b->SetFrameBorderMode(0);
   p12fail_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat3_2016_fit_b__33 = new TH1F("htotfail_cat3_2016_fit_b__33","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_b__33->SetBinContent(1,5.790629e-05);
   htotfail_cat3_2016_fit_b__33->SetBinContent(2,5.790629e-05);
   htotfail_cat3_2016_fit_b__33->SetBinContent(3,46276.52);
   htotfail_cat3_2016_fit_b__33->SetBinContent(4,42762.71);
   htotfail_cat3_2016_fit_b__33->SetBinContent(5,40003);
   htotfail_cat3_2016_fit_b__33->SetBinContent(6,38586.22);
   htotfail_cat3_2016_fit_b__33->SetBinContent(7,37542.03);
   htotfail_cat3_2016_fit_b__33->SetBinContent(8,35355.65);
   htotfail_cat3_2016_fit_b__33->SetBinContent(9,33139.31);
   htotfail_cat3_2016_fit_b__33->SetBinContent(10,31734.32);
   htotfail_cat3_2016_fit_b__33->SetBinContent(11,30541.19);
   htotfail_cat3_2016_fit_b__33->SetBinContent(12,29377.81);
   htotfail_cat3_2016_fit_b__33->SetBinContent(13,28869.4);
   htotfail_cat3_2016_fit_b__33->SetBinContent(14,27764.5);
   htotfail_cat3_2016_fit_b__33->SetBinContent(15,27011.69);
   htotfail_cat3_2016_fit_b__33->SetBinContent(16,25300.44);
   htotfail_cat3_2016_fit_b__33->SetBinContent(17,23475.6);
   htotfail_cat3_2016_fit_b__33->SetBinContent(18,21840.29);
   htotfail_cat3_2016_fit_b__33->SetBinContent(19,19830.34);
   htotfail_cat3_2016_fit_b__33->SetBinContent(20,18409.65);
   htotfail_cat3_2016_fit_b__33->SetBinContent(21,16309.58);
   htotfail_cat3_2016_fit_b__33->SetBinContent(22,14268.15);
   htotfail_cat3_2016_fit_b__33->SetBinContent(23,12722.08);
   htotfail_cat3_2016_fit_b__33->SetMinimum(0);
   htotfail_cat3_2016_fit_b__33->SetMaximum(69414.77);
   htotfail_cat3_2016_fit_b__33->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_b__33->SetFillColor(ci);
   htotfail_cat3_2016_fit_b__33->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_b__33->SetLineColor(ci);
   htotfail_cat3_2016_fit_b__33->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_b__33->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_b__33->SetMarkerSize(0);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_b__33->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b__33->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_b__33->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b__33->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_b__33->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_b__33->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_b__33->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b__33->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b__33->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_b__33->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_b__33->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b__33->Draw("");
   
   TH1F *htot_linefail_cat3_2016_fit_b__34 = new TH1F("htot_linefail_cat3_2016_fit_b__34","wqq in cat3_2016_fail_cat3",23,40,201);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(1,5.790629e-05);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(2,5.790629e-05);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(3,46276.52);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(4,42762.71);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(5,40003);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(6,38586.22);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(7,37542.03);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(8,35355.65);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(9,33139.31);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(10,31734.32);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(11,30541.19);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(12,29377.81);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(13,28869.4);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(14,27764.5);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(15,27011.69);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(16,25300.44);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(17,23475.6);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(18,21840.29);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(19,19830.34);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(20,18409.65);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(21,16309.58);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(22,14268.15);
   htot_linefail_cat3_2016_fit_b__34->SetBinContent(23,12722.08);
   htot_linefail_cat3_2016_fit_b__34->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat3_2016_fit_b__34->SetFillColor(ci);
   htot_linefail_cat3_2016_fit_b__34->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat3_2016_fit_b__34->SetLineColor(ci);
   htot_linefail_cat3_2016_fit_b__34->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat3_2016_fit_b__34->SetMarkerColor(ci);
   htot_linefail_cat3_2016_fit_b__34->SetMarkerSize(0);
   htot_linefail_cat3_2016_fit_b__34->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat3_2016_fit_b__34->GetXaxis()->SetRange(2,23);
   htot_linefail_cat3_2016_fit_b__34->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_b__34->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat3_2016_fit_b__34->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat3_2016_fit_b__34->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_b__34->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat3_2016_fit_b__34->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_b__34->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat3_2016_fit_b__34->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat3_2016_fit_b__34->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat3_2016_fit_b__34->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_b__34->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_b__34->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat3_2016_fit_b__34->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat3_2016_fit_b__34->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_b__34->Draw("histsame");
   
   TH1F *qcd__35 = new TH1F("qcd__35","qcd in cat3_2016_fail_cat3",23,40,201);
   qcd__35->SetBinContent(3,46156.77);
   qcd__35->SetBinContent(4,42465.01);
   qcd__35->SetBinContent(5,39330.8);
   qcd__35->SetBinContent(6,36864.54);
   qcd__35->SetBinContent(7,35192.68);
   qcd__35->SetBinContent(8,33491.1);
   qcd__35->SetBinContent(9,31896.91);
   qcd__35->SetBinContent(10,31133.16);
   qcd__35->SetBinContent(11,30263.76);
   qcd__35->SetBinContent(12,29223.35);
   qcd__35->SetBinContent(13,28731.81);
   qcd__35->SetBinContent(14,27643.37);
   qcd__35->SetBinContent(15,26902.81);
   qcd__35->SetBinContent(16,25213.23);
   qcd__35->SetBinContent(17,23401.97);
   qcd__35->SetBinContent(18,21784.93);
   qcd__35->SetBinContent(19,19782.4);
   qcd__35->SetBinContent(20,18369.8);
   qcd__35->SetBinContent(21,16282.22);
   qcd__35->SetBinContent(22,14249.26);
   qcd__35->SetBinContent(23,12708.76);
   qcd__35->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__35->SetLineColor(ci);
   qcd__35->SetLineStyle(2);
   qcd__35->SetLineWidth(2);
   qcd__35->GetXaxis()->SetTitle("x");
   qcd__35->GetXaxis()->SetLabelFont(42);
   qcd__35->GetXaxis()->SetLabelSize(0.035);
   qcd__35->GetXaxis()->SetTitleSize(0.035);
   qcd__35->GetXaxis()->SetTitleFont(42);
   qcd__35->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__35->GetYaxis()->SetLabelFont(42);
   qcd__35->GetYaxis()->SetLabelSize(0.035);
   qcd__35->GetYaxis()->SetTitleSize(0.035);
   qcd__35->GetYaxis()->SetTitleOffset(0);
   qcd__35->GetYaxis()->SetTitleFont(42);
   qcd__35->GetZaxis()->SetLabelFont(42);
   qcd__35->GetZaxis()->SetLabelSize(0.035);
   qcd__35->GetZaxis()->SetTitleSize(0.035);
   qcd__35->GetZaxis()->SetTitleFont(42);
   qcd__35->Draw("hist sames");
   
   TH1F *htotfail_cat3_2016_fit_b__36 = new TH1F("htotfail_cat3_2016_fit_b__36","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_b__36->SetBinContent(1,5.790629e-05);
   htotfail_cat3_2016_fit_b__36->SetBinContent(2,5.790629e-05);
   htotfail_cat3_2016_fit_b__36->SetBinContent(3,46276.52);
   htotfail_cat3_2016_fit_b__36->SetBinContent(4,42762.71);
   htotfail_cat3_2016_fit_b__36->SetBinContent(5,40003);
   htotfail_cat3_2016_fit_b__36->SetBinContent(6,38586.22);
   htotfail_cat3_2016_fit_b__36->SetBinContent(7,37542.03);
   htotfail_cat3_2016_fit_b__36->SetBinContent(8,35355.65);
   htotfail_cat3_2016_fit_b__36->SetBinContent(9,33139.31);
   htotfail_cat3_2016_fit_b__36->SetBinContent(10,31734.32);
   htotfail_cat3_2016_fit_b__36->SetBinContent(11,30541.19);
   htotfail_cat3_2016_fit_b__36->SetBinContent(12,29377.81);
   htotfail_cat3_2016_fit_b__36->SetBinContent(13,28869.4);
   htotfail_cat3_2016_fit_b__36->SetBinContent(14,27764.5);
   htotfail_cat3_2016_fit_b__36->SetBinContent(15,27011.69);
   htotfail_cat3_2016_fit_b__36->SetBinContent(16,25300.44);
   htotfail_cat3_2016_fit_b__36->SetBinContent(17,23475.6);
   htotfail_cat3_2016_fit_b__36->SetBinContent(18,21840.29);
   htotfail_cat3_2016_fit_b__36->SetBinContent(19,19830.34);
   htotfail_cat3_2016_fit_b__36->SetBinContent(20,18409.65);
   htotfail_cat3_2016_fit_b__36->SetBinContent(21,16309.58);
   htotfail_cat3_2016_fit_b__36->SetBinContent(22,14268.15);
   htotfail_cat3_2016_fit_b__36->SetBinContent(23,12722.08);
   htotfail_cat3_2016_fit_b__36->SetMinimum(0);
   htotfail_cat3_2016_fit_b__36->SetMaximum(69414.77);
   htotfail_cat3_2016_fit_b__36->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_b__36->SetFillColor(ci);
   htotfail_cat3_2016_fit_b__36->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_b__36->SetLineColor(ci);
   htotfail_cat3_2016_fit_b__36->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_b__36->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_b__36->SetMarkerSize(0);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_b__36->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b__36->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_b__36->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b__36->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_b__36->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_b__36->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_b__36->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b__36->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b__36->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_b__36->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_b__36->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b__36->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis9[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_9 = new TH1F("hstackMC_stack_9","hstackMC",23, xAxis9);
   hstackMC_stack_9->SetMinimum(0);
   hstackMC_stack_9->SetMaximum(2466.819);
   hstackMC_stack_9->SetDirectory(0);
   hstackMC_stack_9->SetStats(0);
   hstackMC_stack_9->SetLineStyle(0);
   hstackMC_stack_9->SetMarkerStyle(20);
   hstackMC_stack_9->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_9->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_9->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_9->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_9->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_9);
   
   Double_t xAxis10[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat3_2016_fail_cat3",23, xAxis10);
   tqq_stack_1->SetBinContent(3,43.14328);
   tqq_stack_1->SetBinContent(4,53.17937);
   tqq_stack_1->SetBinContent(5,74.76957);
   tqq_stack_1->SetBinContent(6,170.0051);
   tqq_stack_1->SetBinContent(7,193.834);
   tqq_stack_1->SetBinContent(8,141.4723);
   tqq_stack_1->SetBinContent(9,92.15789);
   tqq_stack_1->SetBinContent(10,90.62621);
   tqq_stack_1->SetBinContent(11,100.2112);
   tqq_stack_1->SetBinContent(12,111.8623);
   tqq_stack_1->SetBinContent(13,120.388);
   tqq_stack_1->SetBinContent(14,110.6528);
   tqq_stack_1->SetBinContent(15,103.0244);
   tqq_stack_1->SetBinContent(16,84.61841);
   tqq_stack_1->SetBinContent(17,69.75116);
   tqq_stack_1->SetBinContent(18,53.38225);
   tqq_stack_1->SetBinContent(19,47.93608);
   tqq_stack_1->SetBinContent(20,38.93289);
   tqq_stack_1->SetBinContent(21,27.35419);
   tqq_stack_1->SetBinContent(22,18.89337);
   tqq_stack_1->SetBinContent(23,13.32674);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat3_2016_fail_cat3",23,40,201);
   wqq_stack_2->SetBinContent(1,4.064245e-05);
   wqq_stack_2->SetBinContent(2,4.064245e-05);
   wqq_stack_2->SetBinContent(3,64.26762);
   wqq_stack_2->SetBinContent(4,219.254);
   wqq_stack_2->SetBinContent(5,547.2747);
   wqq_stack_2->SetBinContent(6,1368.922);
   wqq_stack_2->SetBinContent(7,1759.145);
   wqq_stack_2->SetBinContent(8,1076.483);
   wqq_stack_2->SetBinContent(9,550.7099);
   wqq_stack_2->SetBinContent(10,168.697);
   wqq_stack_2->SetBinContent(11,33.3178);
   wqq_stack_2->SetBinContent(12,11.54576);
   wqq_stack_2->SetBinContent(13,4.535122);
   wqq_stack_2->SetBinContent(14,1.911822);
   wqq_stack_2->SetBinContent(15,4.064245e-05);
   wqq_stack_2->SetBinContent(16,4.064245e-05);
   wqq_stack_2->SetBinContent(17,4.064245e-05);
   wqq_stack_2->SetBinContent(18,4.064245e-05);
   wqq_stack_2->SetBinContent(19,4.064245e-05);
   wqq_stack_2->SetBinContent(20,4.064245e-05);
   wqq_stack_2->SetBinContent(21,4.064245e-05);
   wqq_stack_2->SetBinContent(22,4.064245e-05);
   wqq_stack_2->SetBinContent(23,4.064245e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat3_2016_fail_cat3",23,40,201);
   zqq_stack_3->SetBinContent(1,1.726384e-05);
   zqq_stack_3->SetBinContent(2,1.726384e-05);
   zqq_stack_3->SetBinContent(3,12.33851);
   zqq_stack_3->SetBinContent(4,25.26661);
   zqq_stack_3->SetBinContent(5,50.16117);
   zqq_stack_3->SetBinContent(6,182.7579);
   zqq_stack_3->SetBinContent(7,396.3721);
   zqq_stack_3->SetBinContent(8,646.6008);
   zqq_stack_3->SetBinContent(9,599.5328);
   zqq_stack_3->SetBinContent(10,341.838);
   zqq_stack_3->SetBinContent(11,143.9023);
   zqq_stack_3->SetBinContent(12,31.04488);
   zqq_stack_3->SetBinContent(13,12.66705);
   zqq_stack_3->SetBinContent(14,8.56783);
   zqq_stack_3->SetBinContent(15,5.853441);
   zqq_stack_3->SetBinContent(16,2.589115);
   zqq_stack_3->SetBinContent(17,3.874307);
   zqq_stack_3->SetBinContent(18,1.982305);
   zqq_stack_3->SetBinContent(19,1.726384e-05);
   zqq_stack_3->SetBinContent(20,0.9143354);
   zqq_stack_3->SetBinContent(21,1.726384e-05);
   zqq_stack_3->SetBinContent(22,1.726384e-05);
   zqq_stack_3->SetBinContent(23,1.726384e-05);
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
   
   TH1F *hsigfail_cat3_2016_fit_b_stack_4 = new TH1F("hsigfail_cat3_2016_fit_b_stack_4","ggH_hbb in cat3_2016_fail_cat3",23,40,201);
   hsigfail_cat3_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat3_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat3_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat3_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3009[23] = {
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
   Double_t data_copy_fy3009[23] = {
   0,
   0,
   46247,
   42792,
   40002,
   38588,
   37522,
   35351,
   33170,
   31747,
   30560,
   29399,
   28895,
   27745,
   27004,
   25285,
   23494,
   21863,
   19838,
   18392,
   16338,
   14272,
   12701};
   Double_t data_copy_felx3009[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3009[23] = {
   1.841055,
   1.841055,
   216.0574,
   207.8684,
   201.011,
   197.4443,
   194.7119,
   189.0245,
   183.1321,
   179.1826,
   175.8199,
   172.467,
   170.991,
   167.5739,
   165.3345,
   160.0181,
   154.283,
   148.8669,
   141.8529,
   136.6225,
   128.8256,
   120.4709,
   113.7041};
   Double_t data_copy_fehx3009[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3009[23] = {
   0,
   0,
   215.055,
   206.8659,
   200.0085,
   196.4417,
   193.7093,
   188.0218,
   182.1294,
   178.1798,
   174.817,
   171.4641,
   169.988,
   166.5709,
   164.3315,
   159.015,
   153.2798,
   147.8635,
   140.8493,
   135.6188,
   127.8216,
   119.4667,
   112.6997};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3009,data_copy_fy3009,data_copy_felx3009,data_copy_fehx3009,data_copy_fely3009,data_copy_fehy3009);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat3_2016_fail_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3009 = new TH1F("Graph_data_copy3009","WH_hbb in cat3_2016_fail_cat3",100,28.1,212.9);
   Graph_data_copy3009->SetMinimum(0);
   Graph_data_copy3009->SetMaximum(51108.44);
   Graph_data_copy3009->SetDirectory(0);
   Graph_data_copy3009->SetStats(0);
   Graph_data_copy3009->SetLineStyle(0);
   Graph_data_copy3009->SetMarkerStyle(20);
   Graph_data_copy3009->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3009->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3009->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3009->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3009->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3009);
   
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
   entry=leg->AddEntry("htotfail_cat3_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.77,"550 < p_{T} < 600 GeV");
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
   
   TH1F *htotfail_cat3_2016_fit_b_copy__37 = new TH1F("htotfail_cat3_2016_fit_b_copy__37","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(1,5.790629e-05);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(2,5.790629e-05);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(3,46276.52);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(4,42762.71);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(5,40003);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(6,38586.22);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(7,37542.03);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(8,35355.65);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(9,33139.31);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(10,31734.32);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(11,30541.19);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(12,29377.81);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(13,28869.4);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(14,27764.5);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(15,27011.69);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(16,25300.44);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(17,23475.6);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(18,21840.29);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(19,19830.34);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(20,18409.65);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(21,16309.58);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(22,14268.15);
   htotfail_cat3_2016_fit_b_copy__37->SetBinContent(23,12722.08);
   htotfail_cat3_2016_fit_b_copy__37->SetMaximum(69414.77);
   htotfail_cat3_2016_fit_b_copy__37->SetEntries(92);
   htotfail_cat3_2016_fit_b_copy__37->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_b_copy__37->SetFillColor(ci);
   htotfail_cat3_2016_fit_b_copy__37->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_b_copy__37->SetLineColor(ci);
   htotfail_cat3_2016_fit_b_copy__37->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_b_copy__37->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_b_copy__37->SetMarkerSize(0);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_b_copy__37->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b_copy__37->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_b_copy__37->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b_copy__37->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_b_copy__37->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_b_copy__37->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_b_copy__37->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b_copy__37->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_b_copy__37->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_b_copy__37->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_b_copy__37->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_b_copy__37->Draw("sameaxis");
   p12fail_cat3_2016_fit_b->Modified();
   cfail_cat3_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_cat3_2016_fit_b
   TPad *p22fail_cat3_2016_fit_b = new TPad("p22fail_cat3_2016_fit_b", "p22fail_cat3_2016_fit_b",0,0,1,0.3);
   p22fail_cat3_2016_fit_b->Draw();
   p22fail_cat3_2016_fit_b->cd();
   p22fail_cat3_2016_fit_b->Range(13.7027,-14.90051,221.8108,18.10119);
   p22fail_cat3_2016_fit_b->SetFillColor(0);
   p22fail_cat3_2016_fit_b->SetBorderMode(0);
   p22fail_cat3_2016_fit_b->SetBorderSize(2);
   p22fail_cat3_2016_fit_b->SetTickx(1);
   p22fail_cat3_2016_fit_b->SetTicky(1);
   p22fail_cat3_2016_fit_b->SetLeftMargin(0.16);
   p22fail_cat3_2016_fit_b->SetTopMargin(0.05);
   p22fail_cat3_2016_fit_b->SetBottomMargin(0.3);
   p22fail_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat3_2016_fit_b->SetFrameBorderMode(0);
   p22fail_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat3_2016_fit_b__38 = new TH1F("iOneWithErrorsfail_cat3_2016_fit_b__38","",23,40,201);
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetMinimum(-5);
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetMaximum(16.45111);
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetFillColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetLineColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetMarkerColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_b__38->SetMarkerSize(0);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_b__38->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b__38->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_10 = new TH1F("hstack_stack_10","hstack",23,40,201);
   hstack_stack_10->SetMinimum(0);
   hstack_stack_10->SetMaximum(11.68397);
   hstack_stack_10->SetDirectory(0);
   hstack_stack_10->SetStats(0);
   hstack_stack_10->SetLineStyle(0);
   hstack_stack_10->SetMarkerStyle(20);
   hstack_stack_10->GetXaxis()->SetLabelFont(42);
   hstack_stack_10->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_10->GetXaxis()->SetTitleFont(42);
   hstack_stack_10->GetYaxis()->SetLabelFont(42);
   hstack_stack_10->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_10->GetYaxis()->SetTitleFont(42);
   hstack_stack_10->GetZaxis()->SetLabelFont(42);
   hstack_stack_10->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_10);
   
   
   TH1F *sigHistResidualwqqfail_cat3_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqfail_cat3_2016_fit_b_stack_1","wqq in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(3,0.2988426);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(4,1.059884);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(5,2.736257);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(6,6.968594);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(7,9.081367);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(8,5.725308);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(9,3.02373);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(10,0.9467797);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(11,0.1905867);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(12,0.06733629);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(13,0.02667907);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(14,0.01147753);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(15,2.473199e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(16,2.555888e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(17,2.651521e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(18,2.748646e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(19,2.885527e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(20,2.996815e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(21,3.179622e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(22,3.401991e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetBinContent(23,3.606262e-07);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat3_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat3_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqfail_cat3_2016_fit_b_stack_2","zqq in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(3,0.05737373);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(4,0.12214);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(5,0.2507952);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(6,0.930342);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(7,2.046221);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(8,3.438967);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(9,3.291796);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(10,1.9185);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(11,0.8231595);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(12,0.1810576);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(13,0.0745173);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(14,0.05143654);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(15,0.03561972);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(16,0.01628221);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(17,0.02527605);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(18,0.01340632);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(19,1.225696e-07);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(20,0.006741952);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(21,1.35062e-07);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(22,1.445076e-07);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetBinContent(23,1.531845e-07);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat3_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3","ggH_hbb in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat3_2016_fit_bfail_cat3_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat3_2016_fit_b__39 = new TH1F("iOneWithErrorsLinefail_cat3_2016_fit_b__39","",23,40,201);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetFillColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetLineColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_b__39->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat3_2016_fit_b_fx3010[23] = {
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_b_fy3010[23] = {
   0,
   0,
   0.2179506,
   1.317221,
   2.967169,
   7.867846,
   10.96741,
   9.091043,
   6.448512,
   2.92002,
   1.114955,
   0.3698397,
   0.2503102,
   -0.0541483,
   -0.01114839,
   -0.08080754,
   0.1443674,
   0.1658361,
   0.05402825,
   -0.1234071,
   0.2206229,
   0.03193848,
   -0.1870898};
   Double_t Graph_from_iRatiofail_cat3_2016_fit_b_felx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_b_fely3010[23] = {
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_b_fehx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_b_fehy3010[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat3_2016_fit_b_fx3010,Graph_from_iRatiofail_cat3_2016_fit_b_fy3010,Graph_from_iRatiofail_cat3_2016_fit_b_felx3010,Graph_from_iRatiofail_cat3_2016_fit_b_fehx3010,Graph_from_iRatiofail_cat3_2016_fit_b_fely3010,Graph_from_iRatiofail_cat3_2016_fit_b_fehy3010);
   grae->SetName("Graph_from_iRatiofail_cat3_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010 = new TH1F("Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->SetMinimum(-2.502539);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->SetMaximum(13.28285);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->SetStats(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat3_2016_fit_b3010);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat3_2016_fit_b_copy__40 = new TH1F("iOneWithErrorsfail_cat3_2016_fit_b_copy__40","",23,40,201);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetMinimum(-5);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetMaximum(16.45111);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetEntries(184);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetFillColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetLineColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetMarkerColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->SetMarkerSize(0);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_b_copy__40->Draw("sameaxis");
   p22fail_cat3_2016_fit_b->Modified();
   cfail_cat3_2016_fit_b->cd();
   cfail_cat3_2016_fit_b->Modified();
   cfail_cat3_2016_fit_b->cd();
   cfail_cat3_2016_fit_b->SetSelected(cfail_cat3_2016_fit_b);
}
