void mlfit_fail_cat1_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat1_2016_fit_b/cfail_cat1_2016_fit_b
//=========  (Wed Sep  4 11:54:17 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat1_2016_fit_b = new TCanvas("cfail_cat1_2016_fit_b", "cfail_cat1_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat1_2016_fit_b->SetHighLightColor(2);
   cfail_cat1_2016_fit_b->Range(0,0,1,1);
   cfail_cat1_2016_fit_b->SetFillColor(0);
   cfail_cat1_2016_fit_b->SetBorderMode(0);
   cfail_cat1_2016_fit_b->SetBorderSize(2);
   cfail_cat1_2016_fit_b->SetTickx(1);
   cfail_cat1_2016_fit_b->SetTicky(1);
   cfail_cat1_2016_fit_b->SetLeftMargin(0.16);
   cfail_cat1_2016_fit_b->SetBottomMargin(0.13);
   cfail_cat1_2016_fit_b->SetFrameFillStyle(0);
   cfail_cat1_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat1_2016_fit_b
   TPad *p12fail_cat1_2016_fit_b = new TPad("p12fail_cat1_2016_fit_b", "p12fail_cat1_2016_fit_b",0,0.3,1,1);
   p12fail_cat1_2016_fit_b->Draw();
   p12fail_cat1_2016_fit_b->cd();
   p12fail_cat1_2016_fit_b->Range(21.27027,-6162.209,182.0811,301948.2);
   p12fail_cat1_2016_fit_b->SetFillColor(0);
   p12fail_cat1_2016_fit_b->SetBorderMode(0);
   p12fail_cat1_2016_fit_b->SetBorderSize(2);
   p12fail_cat1_2016_fit_b->SetTickx(1);
   p12fail_cat1_2016_fit_b->SetTicky(1);
   p12fail_cat1_2016_fit_b->SetLeftMargin(0.16);
   p12fail_cat1_2016_fit_b->SetBottomMargin(0.02);
   p12fail_cat1_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat1_2016_fit_b->SetFrameBorderMode(0);
   p12fail_cat1_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat1_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat1_2016_fit_b__1 = new TH1F("htotfail_cat1_2016_fit_b__1","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_fit_b__1->SetBinContent(1,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(2,180758.1);
   htotfail_cat1_2016_fit_b__1->SetBinContent(3,167515);
   htotfail_cat1_2016_fit_b__1->SetBinContent(4,155114);
   htotfail_cat1_2016_fit_b__1->SetBinContent(5,147736.9);
   htotfail_cat1_2016_fit_b__1->SetBinContent(6,145284);
   htotfail_cat1_2016_fit_b__1->SetBinContent(7,142039.6);
   htotfail_cat1_2016_fit_b__1->SetBinContent(8,136132.5);
   htotfail_cat1_2016_fit_b__1->SetBinContent(9,128664.1);
   htotfail_cat1_2016_fit_b__1->SetBinContent(10,121774.2);
   htotfail_cat1_2016_fit_b__1->SetBinContent(11,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(12,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(13,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(14,93010.34);
   htotfail_cat1_2016_fit_b__1->SetBinContent(15,83407.49);
   htotfail_cat1_2016_fit_b__1->SetBinContent(16,74238.52);
   htotfail_cat1_2016_fit_b__1->SetBinContent(17,65292.51);
   htotfail_cat1_2016_fit_b__1->SetBinContent(18,55980.84);
   htotfail_cat1_2016_fit_b__1->SetBinContent(19,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(20,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(21,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(22,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetBinContent(23,0.0002528214);
   htotfail_cat1_2016_fit_b__1->SetMinimum(0);
   htotfail_cat1_2016_fit_b__1->SetMaximum(271137.2);
   htotfail_cat1_2016_fit_b__1->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_b__1->SetFillColor(ci);
   htotfail_cat1_2016_fit_b__1->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_b__1->SetLineColor(ci);
   htotfail_cat1_2016_fit_b__1->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_fit_b__1->SetMarkerColor(ci);
   htotfail_cat1_2016_fit_b__1->SetMarkerSize(0);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_fit_b__1->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b__1->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_fit_b__1->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b__1->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_fit_b__1->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_fit_b__1->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_fit_b__1->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b__1->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b__1->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_b__1->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_b__1->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b__1->Draw("");
   
   TH1F *htot_linefail_cat1_2016_fit_b__2 = new TH1F("htot_linefail_cat1_2016_fit_b__2","wqq in cat1_2016_fail_cat1",23,40,201);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(1,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(2,180758.1);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(3,167515);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(4,155114);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(5,147736.9);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(6,145284);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(7,142039.6);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(8,136132.5);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(9,128664.1);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(10,121774.2);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(11,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(12,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(13,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(14,93010.34);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(15,83407.49);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(16,74238.52);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(17,65292.51);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(18,55980.84);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(19,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(20,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(21,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(22,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetBinContent(23,0.0002528214);
   htot_linefail_cat1_2016_fit_b__2->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat1_2016_fit_b__2->SetFillColor(ci);
   htot_linefail_cat1_2016_fit_b__2->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat1_2016_fit_b__2->SetLineColor(ci);
   htot_linefail_cat1_2016_fit_b__2->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat1_2016_fit_b__2->SetMarkerColor(ci);
   htot_linefail_cat1_2016_fit_b__2->SetMarkerSize(0);
   htot_linefail_cat1_2016_fit_b__2->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat1_2016_fit_b__2->GetXaxis()->SetRange(2,18);
   htot_linefail_cat1_2016_fit_b__2->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_fit_b__2->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat1_2016_fit_b__2->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat1_2016_fit_b__2->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_fit_b__2->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat1_2016_fit_b__2->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_fit_b__2->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat1_2016_fit_b__2->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat1_2016_fit_b__2->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat1_2016_fit_b__2->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_fit_b__2->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_fit_b__2->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat1_2016_fit_b__2->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat1_2016_fit_b__2->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_fit_b__2->Draw("histsame");
   
   TH1F *qcd__3 = new TH1F("qcd__3","qcd in cat1_2016_fail_cat1",23,40,201);
   qcd__3->SetBinContent(2,180442);
   qcd__3->SetBinContent(3,166774.7);
   qcd__3->SetBinContent(4,153275.8);
   qcd__3->SetBinContent(5,144170.3);
   qcd__3->SetBinContent(6,136100.9);
   qcd__3->SetBinContent(7,130417.2);
   qcd__3->SetBinContent(8,128338.1);
   qcd__3->SetBinContent(9,123649.7);
   qcd__3->SetBinContent(10,119590.9);
   qcd__3->SetBinContent(14,92323.95);
   qcd__3->SetBinContent(15,82784.69);
   qcd__3->SetBinContent(16,73794.71);
   qcd__3->SetBinContent(17,64942.01);
   qcd__3->SetBinContent(18,55707.93);
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
   
   TH1F *htotfail_cat1_2016_fit_b__4 = new TH1F("htotfail_cat1_2016_fit_b__4","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_fit_b__4->SetBinContent(1,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(2,180758.1);
   htotfail_cat1_2016_fit_b__4->SetBinContent(3,167515);
   htotfail_cat1_2016_fit_b__4->SetBinContent(4,155114);
   htotfail_cat1_2016_fit_b__4->SetBinContent(5,147736.9);
   htotfail_cat1_2016_fit_b__4->SetBinContent(6,145284);
   htotfail_cat1_2016_fit_b__4->SetBinContent(7,142039.6);
   htotfail_cat1_2016_fit_b__4->SetBinContent(8,136132.5);
   htotfail_cat1_2016_fit_b__4->SetBinContent(9,128664.1);
   htotfail_cat1_2016_fit_b__4->SetBinContent(10,121774.2);
   htotfail_cat1_2016_fit_b__4->SetBinContent(11,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(12,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(13,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(14,93010.34);
   htotfail_cat1_2016_fit_b__4->SetBinContent(15,83407.49);
   htotfail_cat1_2016_fit_b__4->SetBinContent(16,74238.52);
   htotfail_cat1_2016_fit_b__4->SetBinContent(17,65292.51);
   htotfail_cat1_2016_fit_b__4->SetBinContent(18,55980.84);
   htotfail_cat1_2016_fit_b__4->SetBinContent(19,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(20,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(21,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(22,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetBinContent(23,0.0002528214);
   htotfail_cat1_2016_fit_b__4->SetMinimum(0);
   htotfail_cat1_2016_fit_b__4->SetMaximum(271137.2);
   htotfail_cat1_2016_fit_b__4->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_b__4->SetFillColor(ci);
   htotfail_cat1_2016_fit_b__4->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_b__4->SetLineColor(ci);
   htotfail_cat1_2016_fit_b__4->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_fit_b__4->SetMarkerColor(ci);
   htotfail_cat1_2016_fit_b__4->SetMarkerSize(0);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_fit_b__4->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b__4->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_fit_b__4->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b__4->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_fit_b__4->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_fit_b__4->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_fit_b__4->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b__4->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b__4->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_b__4->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_b__4->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b__4->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis1[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_1 = new TH1F("hstackMC_stack_1","hstackMC",23, xAxis1);
   hstackMC_stack_1->SetMinimum(0);
   hstackMC_stack_1->SetMaximum(12203.52);
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
   tqq_stack_1->SetBinContent(2,205.5287);
   tqq_stack_1->SetBinContent(3,259.2718);
   tqq_stack_1->SetBinContent(4,326.0822);
   tqq_stack_1->SetBinContent(5,579.4847);
   tqq_stack_1->SetBinContent(6,1103.29);
   tqq_stack_1->SetBinContent(7,1367.476);
   tqq_stack_1->SetBinContent(8,1053.107);
   tqq_stack_1->SetBinContent(9,722.2863);
   tqq_stack_1->SetBinContent(10,629.8977);
   tqq_stack_1->SetBinContent(14,641.8885);
   tqq_stack_1->SetBinContent(15,589.1371);
   tqq_stack_1->SetBinContent(16,436.5728);
   tqq_stack_1->SetBinContent(17,343.1482);
   tqq_stack_1->SetBinContent(18,260.6577);
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
   wqq_stack_2->SetBinContent(1,0.0001959501);
   wqq_stack_2->SetBinContent(2,87.57423);
   wqq_stack_2->SetBinContent(3,444.4417);
   wqq_stack_2->SetBinContent(4,1385.524);
   wqq_stack_2->SetBinContent(5,2684.818);
   wqq_stack_2->SetBinContent(6,7314.512);
   wqq_stack_2->SetBinContent(7,8864.668);
   wqq_stack_2->SetBinContent(8,4236.886);
   wqq_stack_2->SetBinContent(9,2207.272);
   wqq_stack_2->SetBinContent(10,742.0555);
   wqq_stack_2->SetBinContent(11,0.0001959501);
   wqq_stack_2->SetBinContent(12,0.0001959501);
   wqq_stack_2->SetBinContent(13,0.0001959501);
   wqq_stack_2->SetBinContent(14,8.3838);
   wqq_stack_2->SetBinContent(15,11.89977);
   wqq_stack_2->SetBinContent(16,0.0001959501);
   wqq_stack_2->SetBinContent(17,0.0001959501);
   wqq_stack_2->SetBinContent(18,4.904817);
   wqq_stack_2->SetBinContent(19,0.0001959501);
   wqq_stack_2->SetBinContent(20,0.0001959501);
   wqq_stack_2->SetBinContent(21,0.0001959501);
   wqq_stack_2->SetBinContent(22,0.0001959501);
   wqq_stack_2->SetBinContent(23,0.0001959501);
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
   zqq_stack_3->SetBinContent(1,5.687128e-05);
   zqq_stack_3->SetBinContent(2,23.04751);
   zqq_stack_3->SetBinContent(3,36.54909);
   zqq_stack_3->SetBinContent(4,126.5847);
   zqq_stack_3->SetBinContent(5,302.3352);
   zqq_stack_3->SetBinContent(6,765.263);
   zqq_stack_3->SetBinContent(7,1390.259);
   zqq_stack_3->SetBinContent(8,2504.414);
   zqq_stack_3->SetBinContent(9,2084.824);
   zqq_stack_3->SetBinContent(10,811.3773);
   zqq_stack_3->SetBinContent(11,5.687128e-05);
   zqq_stack_3->SetBinContent(12,5.687128e-05);
   zqq_stack_3->SetBinContent(13,5.687128e-05);
   zqq_stack_3->SetBinContent(14,36.10813);
   zqq_stack_3->SetBinContent(15,21.76784);
   zqq_stack_3->SetBinContent(16,7.238987);
   zqq_stack_3->SetBinContent(17,7.350214);
   zqq_stack_3->SetBinContent(18,7.350214);
   zqq_stack_3->SetBinContent(19,5.687128e-05);
   zqq_stack_3->SetBinContent(20,5.687128e-05);
   zqq_stack_3->SetBinContent(21,5.687128e-05);
   zqq_stack_3->SetBinContent(22,5.687128e-05);
   zqq_stack_3->SetBinContent(23,5.687128e-05);
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
   
   TH1F *hsigfail_cat1_2016_fit_b_stack_4 = new TH1F("hsigfail_cat1_2016_fit_b_stack_4","hqq125 in cat1_2016_fail_cat1",23,40,201);
   hsigfail_cat1_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat1_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat1_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_cat1_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat1_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat1_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat1_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat1_2016_fit_b_stack_4,"");
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
   180728,
   167513,
   155145,
   147739,
   145294,
   142041,
   136126,
   128560,
   121756,
   0,
   0,
   0,
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
   426.1312,
   410.2932,
   394.8939,
   385.3775,
   382.1837,
   377.8924,
   369.9615,
   359.5614,
   349.9441,
   1.841055,
   1.841055,
   1.841055,
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
   425.13,
   409.292,
   393.8926,
   384.3762,
   381.1823,
   376.891,
   368.9601,
   358.56,
   348.9426,
   0,
   0,
   0,
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
   grae->SetTitle("tqq in cat1_2016_fail_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3001 = new TH1F("Graph_data_copy3001","tqq in cat1_2016_fail_cat1",100,28.1,212.9);
   Graph_data_copy3001->SetMinimum(0);
   Graph_data_copy3001->SetMaximum(199268.6);
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
   entry=leg->AddEntry("htotfail_cat1_2016_fit_b","Total background","lf");

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
   
   TH1F *htotfail_cat1_2016_fit_b_copy__5 = new TH1F("htotfail_cat1_2016_fit_b_copy__5","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(1,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(2,180758.1);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(3,167515);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(4,155114);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(5,147736.9);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(6,145284);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(7,142039.6);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(8,136132.5);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(9,128664.1);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(10,121774.2);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(11,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(12,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(13,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(14,93010.34);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(15,83407.49);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(16,74238.52);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(17,65292.51);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(18,55980.84);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(19,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(20,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(21,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(22,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetBinContent(23,0.0002528214);
   htotfail_cat1_2016_fit_b_copy__5->SetMaximum(271137.2);
   htotfail_cat1_2016_fit_b_copy__5->SetEntries(92);
   htotfail_cat1_2016_fit_b_copy__5->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_b_copy__5->SetFillColor(ci);
   htotfail_cat1_2016_fit_b_copy__5->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_fit_b_copy__5->SetLineColor(ci);
   htotfail_cat1_2016_fit_b_copy__5->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_fit_b_copy__5->SetMarkerColor(ci);
   htotfail_cat1_2016_fit_b_copy__5->SetMarkerSize(0);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_fit_b_copy__5->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b_copy__5->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_fit_b_copy__5->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b_copy__5->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_fit_b_copy__5->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_fit_b_copy__5->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_fit_b_copy__5->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b_copy__5->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_fit_b_copy__5->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_fit_b_copy__5->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_fit_b_copy__5->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_fit_b_copy__5->Draw("sameaxis");
   p12fail_cat1_2016_fit_b->Modified();
   cfail_cat1_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_cat1_2016_fit_b
   TPad *p22fail_cat1_2016_fit_b = new TPad("p22fail_cat1_2016_fit_b", "p22fail_cat1_2016_fit_b",0,0,1,0.3);
   p22fail_cat1_2016_fit_b->Draw();
   p22fail_cat1_2016_fit_b->cd();
   p22fail_cat1_2016_fit_b->Range(21.27027,-26.09759,182.0811,44.2277);
   p22fail_cat1_2016_fit_b->SetFillColor(0);
   p22fail_cat1_2016_fit_b->SetBorderMode(0);
   p22fail_cat1_2016_fit_b->SetBorderSize(2);
   p22fail_cat1_2016_fit_b->SetTickx(1);
   p22fail_cat1_2016_fit_b->SetTicky(1);
   p22fail_cat1_2016_fit_b->SetLeftMargin(0.16);
   p22fail_cat1_2016_fit_b->SetTopMargin(0.05);
   p22fail_cat1_2016_fit_b->SetBottomMargin(0.3);
   p22fail_cat1_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat1_2016_fit_b->SetFrameBorderMode(0);
   p22fail_cat1_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat1_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat1_2016_fit_b__6 = new TH1F("iOneWithErrorsfail_cat1_2016_fit_b__6","",23,40,201);
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetMinimum(-5);
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetMaximum(40.71143);
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetFillColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetLineColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetMarkerColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_b__6->SetMarkerSize(0);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetRange(2,18);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_b__6->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b__6->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_2 = new TH1F("hstack_stack_2","hstack",23,40,201);
   hstack_stack_2->SetMinimum(0);
   hstack_stack_2->SetMaximum(28.56973);
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
   
   
   TH1F *sigHistResidualwqqfail_cat1_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqfail_cat1_2016_fit_b_stack_1","wqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(2,0.205994);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(3,1.085879);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(4,3.517517);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(5,6.984869);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(6,19.18901);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(7,23.52051);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(8,11.48332);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(9,6.155936);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(10,2.126583);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(14,0.02748525);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(15,0.04119657);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(16,7.193901e-07);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(17,7.666508e-07);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetBinContent(18,0.02073477);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat1_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat1_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqfail_cat1_2016_fit_b_stack_2","zqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(2,0.05421286);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(3,0.08929833);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(4,0.3213686);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(5,0.7865607);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(6,2.007604);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(7,3.688755);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(8,6.787764);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(9,5.814435);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(10,2.325246);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(14,0.1183761);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(15,0.07535948);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(16,0.02657643);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(17,0.02875755);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetBinContent(18,0.03107251);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat1_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3","hqq125 in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat1_2016_fit_bfail_cat1_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat1_2016_fit_b__7 = new TH1F("iOneWithErrorsLinefail_cat1_2016_fit_b__7","",23,40,201);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetFillColor(ci);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetLineColor(ci);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetRange(2,18);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_fit_b__7->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat1_2016_fit_b_fx3002[23] = {
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
   Double_t Graph_from_iRatiofail_cat1_2016_fit_b_fy3002[23] = {
   0,
   0.188909,
   1.167572,
   3.907774,
   7.756639,
   21.16734,
   27.14095,
   18.20405,
   11.64752,
   4.38704,
   0,
   0,
   0,
   0.2390487,
   0.2041429,
   -0.1515555,
   0.1552791,
   -0.0616445,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat1_2016_fit_b_felx3002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat1_2016_fit_b_fely3002[23] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat1_2016_fit_b_fehx3002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat1_2016_fit_b_fehy3002[23] = {
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
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat1_2016_fit_b_fx3002,Graph_from_iRatiofail_cat1_2016_fit_b_fy3002,Graph_from_iRatiofail_cat1_2016_fit_b_felx3002,Graph_from_iRatiofail_cat1_2016_fit_b_fehx3002,Graph_from_iRatiofail_cat1_2016_fit_b_fely3002,Graph_from_iRatiofail_cat1_2016_fit_b_fehy3002);
   grae->SetName("Graph_from_iRatiofail_cat1_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002 = new TH1F("Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->SetMinimum(-4.080807);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->SetMaximum(31.07021);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->SetStats(0);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat1_2016_fit_b3002);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat1_2016_fit_b_copy__8 = new TH1F("iOneWithErrorsfail_cat1_2016_fit_b_copy__8","",23,40,201);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetMinimum(-5);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetMaximum(40.71143);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetEntries(184);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetFillColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetLineColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetMarkerColor(ci);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->SetMarkerSize(0);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetRange(2,18);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_fit_b_copy__8->Draw("sameaxis");
   p22fail_cat1_2016_fit_b->Modified();
   cfail_cat1_2016_fit_b->cd();
   cfail_cat1_2016_fit_b->Modified();
   cfail_cat1_2016_fit_b->cd();
   cfail_cat1_2016_fit_b->SetSelected(cfail_cat1_2016_fit_b);
}
