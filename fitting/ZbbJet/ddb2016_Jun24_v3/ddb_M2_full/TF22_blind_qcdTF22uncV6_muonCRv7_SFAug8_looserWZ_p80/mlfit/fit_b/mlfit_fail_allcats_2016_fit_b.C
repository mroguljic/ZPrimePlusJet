void mlfit_fail_allcats_2016_fit_b()
{
//=========Macro generated from canvas: cfail_allcats_2016_fit_b/cfail_allcats_2016_fit_b
//=========  (Wed Sep  4 11:54:19 2019) by ROOT version 6.12/07
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
   p12fail_allcats_2016_fit_b->Range(13.7027,-13537.57,221.8108,663341.1);
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
   htotfail_allcats_2016_fit_b__105->SetBinContent(1,0.0005790539);
   htotfail_allcats_2016_fit_b__105->SetBinContent(2,397102.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(3,365009.8);
   htotfail_allcats_2016_fit_b__105->SetBinContent(4,338268);
   htotfail_allcats_2016_fit_b__105->SetBinContent(5,320386.4);
   htotfail_allcats_2016_fit_b__105->SetBinContent(6,310985.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(7,302325.5);
   htotfail_allcats_2016_fit_b__105->SetBinContent(8,287657.9);
   htotfail_allcats_2016_fit_b__105->SetBinContent(9,270142.7);
   htotfail_allcats_2016_fit_b__105->SetBinContent(10,256394.9);
   htotfail_allcats_2016_fit_b__105->SetBinContent(11,0.0005790539);
   htotfail_allcats_2016_fit_b__105->SetBinContent(12,0.0005790539);
   htotfail_allcats_2016_fit_b__105->SetBinContent(13,0.0005790539);
   htotfail_allcats_2016_fit_b__105->SetBinContent(14,208080.4);
   htotfail_allcats_2016_fit_b__105->SetBinContent(15,193194.9);
   htotfail_allcats_2016_fit_b__105->SetBinContent(16,177823.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(17,161901);
   htotfail_allcats_2016_fit_b__105->SetBinContent(18,145122.2);
   htotfail_allcats_2016_fit_b__105->SetBinContent(19,81949.38);
   htotfail_allcats_2016_fit_b__105->SetBinContent(20,74843.1);
   htotfail_allcats_2016_fit_b__105->SetBinContent(21,43635.05);
   htotfail_allcats_2016_fit_b__105->SetBinContent(22,40211.68);
   htotfail_allcats_2016_fit_b__105->SetBinContent(23,36662.34);
   htotfail_allcats_2016_fit_b__105->SetMinimum(0);
   htotfail_allcats_2016_fit_b__105->SetMaximum(595653.2);
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
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(1,0.0005790539);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(2,397102.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(3,365009.8);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(4,338268);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(5,320386.4);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(6,310985.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(7,302325.5);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(8,287657.9);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(9,270142.7);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(10,256394.9);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(11,0.0005790539);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(12,0.0005790539);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(13,0.0005790539);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(14,208080.4);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(15,193194.9);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(16,177823.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(17,161901);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(18,145122.2);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(19,81949.38);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(20,74843.1);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(21,43635.05);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(22,40211.68);
   htot_linefail_allcats_2016_fit_b__106->SetBinContent(23,36662.34);
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
   qcd_fail_sum__107->SetBinContent(2,396303.2);
   qcd_fail_sum__107->SetBinContent(3,363346.7);
   qcd_fail_sum__107->SetBinContent(4,334076.5);
   qcd_fail_sum__107->SetBinContent(5,312185.4);
   qcd_fail_sum__107->SetBinContent(6,291020.7);
   qcd_fail_sum__107->SetBinContent(7,276367.8);
   qcd_fail_sum__107->SetBinContent(8,269217.7);
   qcd_fail_sum__107->SetBinContent(9,258195.7);
   qcd_fail_sum__107->SetBinContent(10,250897);
   qcd_fail_sum__107->SetBinContent(14,206354.7);
   qcd_fail_sum__107->SetBinContent(15,191676.6);
   qcd_fail_sum__107->SetBinContent(16,176629.3);
   qcd_fail_sum__107->SetBinContent(17,160970.1);
   qcd_fail_sum__107->SetBinContent(18,144360.1);
   qcd_fail_sum__107->SetBinContent(19,81532.1);
   qcd_fail_sum__107->SetBinContent(20,74472.87);
   qcd_fail_sum__107->SetBinContent(21,43452.65);
   qcd_fail_sum__107->SetBinContent(22,40082.79);
   qcd_fail_sum__107->SetBinContent(23,36578.02);
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
   htotfail_allcats_2016_fit_b__108->SetBinContent(1,0.0005790539);
   htotfail_allcats_2016_fit_b__108->SetBinContent(2,397102.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(3,365009.8);
   htotfail_allcats_2016_fit_b__108->SetBinContent(4,338268);
   htotfail_allcats_2016_fit_b__108->SetBinContent(5,320386.4);
   htotfail_allcats_2016_fit_b__108->SetBinContent(6,310985.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(7,302325.5);
   htotfail_allcats_2016_fit_b__108->SetBinContent(8,287657.9);
   htotfail_allcats_2016_fit_b__108->SetBinContent(9,270142.7);
   htotfail_allcats_2016_fit_b__108->SetBinContent(10,256394.9);
   htotfail_allcats_2016_fit_b__108->SetBinContent(11,0.0005790539);
   htotfail_allcats_2016_fit_b__108->SetBinContent(12,0.0005790539);
   htotfail_allcats_2016_fit_b__108->SetBinContent(13,0.0005790539);
   htotfail_allcats_2016_fit_b__108->SetBinContent(14,208080.4);
   htotfail_allcats_2016_fit_b__108->SetBinContent(15,193194.9);
   htotfail_allcats_2016_fit_b__108->SetBinContent(16,177823.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(17,161901);
   htotfail_allcats_2016_fit_b__108->SetBinContent(18,145122.2);
   htotfail_allcats_2016_fit_b__108->SetBinContent(19,81949.38);
   htotfail_allcats_2016_fit_b__108->SetBinContent(20,74843.1);
   htotfail_allcats_2016_fit_b__108->SetBinContent(21,43635.05);
   htotfail_allcats_2016_fit_b__108->SetBinContent(22,40211.68);
   htotfail_allcats_2016_fit_b__108->SetBinContent(23,36662.34);
   htotfail_allcats_2016_fit_b__108->SetMinimum(0);
   htotfail_allcats_2016_fit_b__108->SetMaximum(595653.2);
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
   hstackMC_stack_27->SetMaximum(27255.65);
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
   tqq_fail_sum_stack_1->SetBinContent(2,527.6604);
   tqq_fail_sum_stack_1->SetBinContent(3,610.4512);
   tqq_fail_sum_stack_1->SetBinContent(4,793.8605);
   tqq_fail_sum_stack_1->SetBinContent(5,1309.493);
   tqq_fail_sum_stack_1->SetBinContent(6,2534.95);
   tqq_fail_sum_stack_1->SetBinContent(7,3154.178);
   tqq_fail_sum_stack_1->SetBinContent(8,2299.548);
   tqq_fail_sum_stack_1->SetBinContent(9,1567.434);
   tqq_fail_sum_stack_1->SetBinContent(10,1432.166);
   tqq_fail_sum_stack_1->SetBinContent(14,1599.347);
   tqq_fail_sum_stack_1->SetBinContent(15,1435.31);
   tqq_fail_sum_stack_1->SetBinContent(16,1164.038);
   tqq_fail_sum_stack_1->SetBinContent(17,909.0031);
   tqq_fail_sum_stack_1->SetBinContent(18,735.0389);
   tqq_fail_sum_stack_1->SetBinContent(19,417.2711);
   tqq_fail_sum_stack_1->SetBinContent(20,368.7447);
   tqq_fail_sum_stack_1->SetBinContent(21,182.401);
   tqq_fail_sum_stack_1->SetBinContent(22,128.8941);
   tqq_fail_sum_stack_1->SetBinContent(23,84.32117);
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
   wqq_fail_sum_stack_2->SetBinContent(1,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(2,207.8571);
   wqq_fail_sum_stack_2->SetBinContent(3,956.1011);
   wqq_fail_sum_stack_2->SetBinContent(4,3124.568);
   wqq_fail_sum_stack_2->SetBinContent(5,6237.971);
   wqq_fail_sum_stack_2->SetBinContent(6,15742.89);
   wqq_fail_sum_stack_2->SetBinContent(7,19756.83);
   wqq_fail_sum_stack_2->SetBinContent(8,10690.87);
   wqq_fail_sum_stack_2->SetBinContent(9,5521.031);
   wqq_fail_sum_stack_2->SetBinContent(10,1677.619);
   wqq_fail_sum_stack_2->SetBinContent(11,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(12,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(13,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(14,33.05452);
   wqq_fail_sum_stack_2->SetBinContent(15,15.67848);
   wqq_fail_sum_stack_2->SetBinContent(16,1.538068);
   wqq_fail_sum_stack_2->SetBinContent(17,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(18,7.0601);
   wqq_fail_sum_stack_2->SetBinContent(19,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(20,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(21,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(22,0.000447811);
   wqq_fail_sum_stack_2->SetBinContent(23,0.000447811);
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
   zqq_fail_sum_stack_3->SetBinContent(1,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(2,63.43253);
   zqq_fail_sum_stack_3->SetBinContent(3,96.6023);
   zqq_fail_sum_stack_3->SetBinContent(4,273.1464);
   zqq_fail_sum_stack_3->SetBinContent(5,653.591);
   zqq_fail_sum_stack_3->SetBinContent(6,1686.698);
   zqq_fail_sum_stack_3->SetBinContent(7,3046.756);
   zqq_fail_sum_stack_3->SetBinContent(8,5449.743);
   zqq_fail_sum_stack_3->SetBinContent(9,4858.555);
   zqq_fail_sum_stack_3->SetBinContent(10,2388.146);
   zqq_fail_sum_stack_3->SetBinContent(11,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(12,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(13,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(14,93.29131);
   zqq_fail_sum_stack_3->SetBinContent(15,67.26842);
   zqq_fail_sum_stack_3->SetBinContent(16,28.32594);
   zqq_fail_sum_stack_3->SetBinContent(17,21.89638);
   zqq_fail_sum_stack_3->SetBinContent(18,20.04719);
   zqq_fail_sum_stack_3->SetBinContent(19,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(20,1.486476);
   zqq_fail_sum_stack_3->SetBinContent(21,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(22,0.0001312429);
   zqq_fail_sum_stack_3->SetBinContent(23,0.0001312429);
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
   
   TH1F *hsigfail_allcats_2016_fit_b_stack_4 = new TH1F("hsigfail_allcats_2016_fit_b_stack_4","hqq125 in cat1_2016_fail_cat1",23,40,201);
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
   397011,
   365009,
   338415,
   320409,
   310993,
   302310,
   287674,
   270080,
   256347,
   0,
   0,
   0,
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
   631.1023,
   605.1734,
   582.7477,
   567.0597,
   558.6802,
   550.8398,
   537.3648,
   520.7042,
   507.3189,
   1.841055,
   1.841055,
   1.841055,
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
   630.1015,
   604.1726,
   581.7468,
   566.0588,
   557.6793,
   549.8389,
   536.3638,
   519.7032,
   506.3179,
   0,
   0,
   0,
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
   grae->SetTitle("tqq in cat1_2016_fail_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_fail_sum_copy3027 = new TH1F("Graph_data_fail_sum_copy3027","tqq in cat1_2016_fail_cat1",100,28.1,212.9);
   Graph_data_fail_sum_copy3027->SetMinimum(0);
   Graph_data_fail_sum_copy3027->SetMaximum(437405.4);
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
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(1,0.0005790539);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(2,397102.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(3,365009.8);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(4,338268);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(5,320386.4);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(6,310985.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(7,302325.5);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(8,287657.9);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(9,270142.7);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(10,256394.9);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(11,0.0005790539);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(12,0.0005790539);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(13,0.0005790539);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(14,208080.4);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(15,193194.9);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(16,177823.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(17,161901);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(18,145122.2);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(19,81949.38);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(20,74843.1);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(21,43635.05);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(22,40211.68);
   htotfail_allcats_2016_fit_b_copy__109->SetBinContent(23,36662.34);
   htotfail_allcats_2016_fit_b_copy__109->SetMaximum(595653.2);
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
   p22fail_allcats_2016_fit_b->Range(13.7027,-35.9482,221.8108,67.21246);
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
   iOneWithErrorsfail_allcats_2016_fit_b__110->SetMaximum(62.05442);
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
   hstack_stack_28->SetMaximum(43.54687);
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
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(2,0.3298788);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(3,1.582497);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(4,5.371011);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(5,11.02001);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(6,28.22928);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(7,35.93203);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(8,19.93213);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(9,10.62343);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(10,3.313371);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(14,0.07246346);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(15,0.03566552);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(16,0.003648161);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(17,1.112844e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(18,0.01853115);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(19,1.564242e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(20,1.636737e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(21,2.142917e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(22,2.232468e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_b_stack_1->SetBinContent(23,2.339779e-06);
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
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(2,0.1006703);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(3,0.1598919);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(4,0.4695279);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(5,1.154634);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(6,3.024495);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(7,5.54118);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(8,10.16053);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(9,9.348712);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(10,4.716693);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(14,0.204517);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(15,0.1530227);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(16,0.0671866);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(17,0.05441413);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(18,0.0526193);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(19,4.584425e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(20,0.005433028);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(21,6.280387e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(22,6.542838e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_b_stack_2->SetBinContent(23,6.857343e-07);
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
   
   TH1F *sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_allcats_2016_fit_bfail_allcats_2016_fit_b_stack_3","hqq125 in cat1_2016_fail_cat1",23,40,201);
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
   0.2854133,
   1.738138,
   6.08266,
   12.19294,
   31.21173,
   41.36962,
   30.06658,
   19.81331,
   7.91976,
   0,
   0,
   0,
   0.249334,
   0.2860809,
   -0.1264525,
   0.1038817,
   0.1280312,
   0.01261828,
   0.04512216,
   0.1569197,
   0.115661,
   -0.1742186};
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_allcats_2016_fit_b_fx3028,Graph_from_iRatiofail_allcats_2016_fit_b_fy3028,Graph_from_iRatiofail_allcats_2016_fit_b_felx3028,Graph_from_iRatiofail_allcats_2016_fit_b_fehx3028,Graph_from_iRatiofail_allcats_2016_fit_b_fely3028,Graph_from_iRatiofail_allcats_2016_fit_b_fehy3028);
   grae->SetName("Graph_from_iRatiofail_allcats_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028 = new TH1F("Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetMinimum(-5.528602);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_b3028->SetMaximum(46.724);
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
   iOneWithErrorsfail_allcats_2016_fit_b_copy__112->SetMaximum(62.05442);
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
