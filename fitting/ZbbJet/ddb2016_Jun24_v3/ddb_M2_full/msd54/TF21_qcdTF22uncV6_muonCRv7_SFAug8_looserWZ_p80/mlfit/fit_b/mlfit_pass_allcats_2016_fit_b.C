void mlfit_pass_allcats_2016_fit_b()
{
//=========Macro generated from canvas: cpass_allcats_2016_fit_b/cpass_allcats_2016_fit_b
//=========  (Mon Sep 30 17:21:34 2019) by ROOT version 6.12/07
   TCanvas *cpass_allcats_2016_fit_b = new TCanvas("cpass_allcats_2016_fit_b", "cpass_allcats_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_allcats_2016_fit_b->SetHighLightColor(2);
   cpass_allcats_2016_fit_b->Range(0,0,1,1);
   cpass_allcats_2016_fit_b->SetFillColor(0);
   cpass_allcats_2016_fit_b->SetBorderMode(0);
   cpass_allcats_2016_fit_b->SetBorderSize(2);
   cpass_allcats_2016_fit_b->SetTickx(1);
   cpass_allcats_2016_fit_b->SetTicky(1);
   cpass_allcats_2016_fit_b->SetLeftMargin(0.16);
   cpass_allcats_2016_fit_b->SetBottomMargin(0.13);
   cpass_allcats_2016_fit_b->SetFrameFillStyle(0);
   cpass_allcats_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_allcats_2016_fit_b
   TPad *p12pass_allcats_2016_fit_b = new TPad("p12pass_allcats_2016_fit_b", "p12pass_allcats_2016_fit_b",0,0.3,1,1);
   p12pass_allcats_2016_fit_b->Draw();
   p12pass_allcats_2016_fit_b->cd();
   p12pass_allcats_2016_fit_b->Range(13.7027,-197.1582,221.8108,9660.751);
   p12pass_allcats_2016_fit_b->SetFillColor(0);
   p12pass_allcats_2016_fit_b->SetBorderMode(0);
   p12pass_allcats_2016_fit_b->SetBorderSize(2);
   p12pass_allcats_2016_fit_b->SetTickx(1);
   p12pass_allcats_2016_fit_b->SetTicky(1);
   p12pass_allcats_2016_fit_b->SetLeftMargin(0.16);
   p12pass_allcats_2016_fit_b->SetBottomMargin(0.02);
   p12pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   p12pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_allcats_2016_fit_b__97 = new TH1F("htotpass_allcats_2016_fit_b__97","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b__97->SetBinContent(1,2.485246e-05);
   htotpass_allcats_2016_fit_b__97->SetBinContent(2,2.485246e-05);
   htotpass_allcats_2016_fit_b__97->SetBinContent(3,5195.63);
   htotpass_allcats_2016_fit_b__97->SetBinContent(4,5329.156);
   htotpass_allcats_2016_fit_b__97->SetBinContent(5,5415.56);
   htotpass_allcats_2016_fit_b__97->SetBinContent(6,5648.971);
   htotpass_allcats_2016_fit_b__97->SetBinContent(7,5783.307);
   htotpass_allcats_2016_fit_b__97->SetBinContent(8,5549.839);
   htotpass_allcats_2016_fit_b__97->SetBinContent(9,4934.662);
   htotpass_allcats_2016_fit_b__97->SetBinContent(10,4411.536);
   htotpass_allcats_2016_fit_b__97->SetBinContent(11,3982.52);
   htotpass_allcats_2016_fit_b__97->SetBinContent(12,3613.657);
   htotpass_allcats_2016_fit_b__97->SetBinContent(13,3252.601);
   htotpass_allcats_2016_fit_b__97->SetBinContent(14,2871.401);
   htotpass_allcats_2016_fit_b__97->SetBinContent(15,2486.599);
   htotpass_allcats_2016_fit_b__97->SetBinContent(16,2125.633);
   htotpass_allcats_2016_fit_b__97->SetBinContent(17,1784.56);
   htotpass_allcats_2016_fit_b__97->SetBinContent(18,1468.359);
   htotpass_allcats_2016_fit_b__97->SetBinContent(19,841.6523);
   htotpass_allcats_2016_fit_b__97->SetBinContent(20,706.0847);
   htotpass_allcats_2016_fit_b__97->SetBinContent(21,414.4455);
   htotpass_allcats_2016_fit_b__97->SetBinContent(22,344.6044);
   htotpass_allcats_2016_fit_b__97->SetBinContent(23,282.0094);
   htotpass_allcats_2016_fit_b__97->SetMinimum(0);
   htotpass_allcats_2016_fit_b__97->SetMaximum(8674.96);
   htotpass_allcats_2016_fit_b__97->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__97->SetFillColor(ci);
   htotpass_allcats_2016_fit_b__97->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__97->SetLineColor(ci);
   htotpass_allcats_2016_fit_b__97->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b__97->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b__97->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__97->Draw("");
   
   TH1F *htot_linepass_allcats_2016_fit_b__98 = new TH1F("htot_linepass_allcats_2016_fit_b__98","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(1,2.485246e-05);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(2,2.485246e-05);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(3,5195.63);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(4,5329.156);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(5,5415.56);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(6,5648.971);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(7,5783.307);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(8,5549.839);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(9,4934.662);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(10,4411.536);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(11,3982.52);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(12,3613.657);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(13,3252.601);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(14,2871.401);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(15,2486.599);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(16,2125.633);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(17,1784.56);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(18,1468.359);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(19,841.6523);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(20,706.0847);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(21,414.4455);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(22,344.6044);
   htot_linepass_allcats_2016_fit_b__98->SetBinContent(23,282.0094);
   htot_linepass_allcats_2016_fit_b__98->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_b__98->SetFillColor(ci);
   htot_linepass_allcats_2016_fit_b__98->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_b__98->SetLineColor(ci);
   htot_linepass_allcats_2016_fit_b__98->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_allcats_2016_fit_b__98->SetMarkerColor(ci);
   htot_linepass_allcats_2016_fit_b__98->SetMarkerSize(0);
   htot_linepass_allcats_2016_fit_b__98->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_allcats_2016_fit_b__98->GetXaxis()->SetRange(2,23);
   htot_linepass_allcats_2016_fit_b__98->GetXaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_b__98->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_b__98->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_b__98->GetXaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_b__98->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_allcats_2016_fit_b__98->GetYaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_b__98->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_allcats_2016_fit_b__98->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_allcats_2016_fit_b__98->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_allcats_2016_fit_b__98->GetYaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_b__98->GetZaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_b__98->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_b__98->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_b__98->GetZaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_b__98->Draw("histsame");
   
   TH1F *qcd_pass_sum__99 = new TH1F("qcd_pass_sum__99","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd_pass_sum__99->SetBinContent(3,5132.099);
   qcd_pass_sum__99->SetBinContent(4,5185.445);
   qcd_pass_sum__99->SetBinContent(5,5126.957);
   qcd_pass_sum__99->SetBinContent(6,4977.059);
   qcd_pass_sum__99->SetBinContent(7,4782.798);
   qcd_pass_sum__99->SetBinContent(8,4567.245);
   qcd_pass_sum__99->SetBinContent(9,4283);
   qcd_pass_sum__99->SetBinContent(10,4035.373);
   qcd_pass_sum__99->SetBinContent(11,3776.425);
   qcd_pass_sum__99->SetBinContent(12,3461.068);
   qcd_pass_sum__99->SetBinContent(13,3123.806);
   qcd_pass_sum__99->SetBinContent(14,2769.309);
   qcd_pass_sum__99->SetBinContent(15,2415.913);
   qcd_pass_sum__99->SetBinContent(16,2074.978);
   qcd_pass_sum__99->SetBinContent(17,1749.671);
   qcd_pass_sum__99->SetBinContent(18,1440.493);
   qcd_pass_sum__99->SetBinContent(19,830.5172);
   qcd_pass_sum__99->SetBinContent(20,693.2954);
   qcd_pass_sum__99->SetBinContent(21,409.0677);
   qcd_pass_sum__99->SetBinContent(22,343.5681);
   qcd_pass_sum__99->SetBinContent(23,281.2983);
   qcd_pass_sum__99->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_pass_sum__99->SetLineColor(ci);
   qcd_pass_sum__99->SetLineStyle(2);
   qcd_pass_sum__99->SetLineWidth(2);
   qcd_pass_sum__99->GetXaxis()->SetTitle("x");
   qcd_pass_sum__99->GetXaxis()->SetLabelFont(42);
   qcd_pass_sum__99->GetXaxis()->SetLabelSize(0.035);
   qcd_pass_sum__99->GetXaxis()->SetTitleSize(0.035);
   qcd_pass_sum__99->GetXaxis()->SetTitleFont(42);
   qcd_pass_sum__99->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_pass_sum__99->GetYaxis()->SetLabelFont(42);
   qcd_pass_sum__99->GetYaxis()->SetLabelSize(0.035);
   qcd_pass_sum__99->GetYaxis()->SetTitleSize(0.035);
   qcd_pass_sum__99->GetYaxis()->SetTitleOffset(0);
   qcd_pass_sum__99->GetYaxis()->SetTitleFont(42);
   qcd_pass_sum__99->GetZaxis()->SetLabelFont(42);
   qcd_pass_sum__99->GetZaxis()->SetLabelSize(0.035);
   qcd_pass_sum__99->GetZaxis()->SetTitleSize(0.035);
   qcd_pass_sum__99->GetZaxis()->SetTitleFont(42);
   qcd_pass_sum__99->Draw("hist sames");
   
   TH1F *htotpass_allcats_2016_fit_b__100 = new TH1F("htotpass_allcats_2016_fit_b__100","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b__100->SetBinContent(1,2.485246e-05);
   htotpass_allcats_2016_fit_b__100->SetBinContent(2,2.485246e-05);
   htotpass_allcats_2016_fit_b__100->SetBinContent(3,5195.63);
   htotpass_allcats_2016_fit_b__100->SetBinContent(4,5329.156);
   htotpass_allcats_2016_fit_b__100->SetBinContent(5,5415.56);
   htotpass_allcats_2016_fit_b__100->SetBinContent(6,5648.971);
   htotpass_allcats_2016_fit_b__100->SetBinContent(7,5783.307);
   htotpass_allcats_2016_fit_b__100->SetBinContent(8,5549.839);
   htotpass_allcats_2016_fit_b__100->SetBinContent(9,4934.662);
   htotpass_allcats_2016_fit_b__100->SetBinContent(10,4411.536);
   htotpass_allcats_2016_fit_b__100->SetBinContent(11,3982.52);
   htotpass_allcats_2016_fit_b__100->SetBinContent(12,3613.657);
   htotpass_allcats_2016_fit_b__100->SetBinContent(13,3252.601);
   htotpass_allcats_2016_fit_b__100->SetBinContent(14,2871.401);
   htotpass_allcats_2016_fit_b__100->SetBinContent(15,2486.599);
   htotpass_allcats_2016_fit_b__100->SetBinContent(16,2125.633);
   htotpass_allcats_2016_fit_b__100->SetBinContent(17,1784.56);
   htotpass_allcats_2016_fit_b__100->SetBinContent(18,1468.359);
   htotpass_allcats_2016_fit_b__100->SetBinContent(19,841.6523);
   htotpass_allcats_2016_fit_b__100->SetBinContent(20,706.0847);
   htotpass_allcats_2016_fit_b__100->SetBinContent(21,414.4455);
   htotpass_allcats_2016_fit_b__100->SetBinContent(22,344.6044);
   htotpass_allcats_2016_fit_b__100->SetBinContent(23,282.0094);
   htotpass_allcats_2016_fit_b__100->SetMinimum(0);
   htotpass_allcats_2016_fit_b__100->SetMaximum(8674.96);
   htotpass_allcats_2016_fit_b__100->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__100->SetFillColor(ci);
   htotpass_allcats_2016_fit_b__100->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__100->SetLineColor(ci);
   htotpass_allcats_2016_fit_b__100->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b__100->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b__100->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b__100->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__100->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b__100->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__100->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b__100->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b__100->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b__100->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__100->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__100->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__100->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__100->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__100->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis25[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_25 = new TH1F("hstackMC_stack_25","hstackMC",23, xAxis25);
   hstackMC_stack_25->SetMinimum(0);
   hstackMC_stack_25->SetMaximum(1050.533);
   hstackMC_stack_25->SetDirectory(0);
   hstackMC_stack_25->SetStats(0);
   hstackMC_stack_25->SetLineStyle(0);
   hstackMC_stack_25->SetMarkerStyle(20);
   hstackMC_stack_25->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_25->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_25->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_25->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_25->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_25);
   
   Double_t xAxis26[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_pass_sum_stack_1 = new TH1F("tqq_pass_sum_stack_1","tqq in cat1_2016_pass_cat1",23, xAxis26);
   tqq_pass_sum_stack_1->SetBinContent(3,39.15446);
   tqq_pass_sum_stack_1->SetBinContent(4,48.93575);
   tqq_pass_sum_stack_1->SetBinContent(5,71.70743);
   tqq_pass_sum_stack_1->SetBinContent(6,112.244);
   tqq_pass_sum_stack_1->SetBinContent(7,129.7384);
   tqq_pass_sum_stack_1->SetBinContent(8,122.2375);
   tqq_pass_sum_stack_1->SetBinContent(9,106.7714);
   tqq_pass_sum_stack_1->SetBinContent(10,119.0231);
   tqq_pass_sum_stack_1->SetBinContent(11,122.155);
   tqq_pass_sum_stack_1->SetBinContent(12,127.269);
   tqq_pass_sum_stack_1->SetBinContent(13,121.5186);
   tqq_pass_sum_stack_1->SetBinContent(14,98.87086);
   tqq_pass_sum_stack_1->SetBinContent(15,69.48097);
   tqq_pass_sum_stack_1->SetBinContent(16,50.13668);
   tqq_pass_sum_stack_1->SetBinContent(17,34.88908);
   tqq_pass_sum_stack_1->SetBinContent(18,27.86602);
   tqq_pass_sum_stack_1->SetBinContent(19,11.1351);
   tqq_pass_sum_stack_1->SetBinContent(20,12.78927);
   tqq_pass_sum_stack_1->SetBinContent(21,5.377741);
   tqq_pass_sum_stack_1->SetBinContent(22,1.036364);
   tqq_pass_sum_stack_1->SetBinContent(23,0.7110746);
   tqq_pass_sum_stack_1->SetEntries(138);

   ci = TColor::GetColor("#660066");
   tqq_pass_sum_stack_1->SetLineColor(ci);
   tqq_pass_sum_stack_1->SetLineStyle(4);
   tqq_pass_sum_stack_1->SetLineWidth(2);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitle("x");
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_pass_sum_stack_1,"");
   
   TH1F *wqq_pass_sum_stack_2 = new TH1F("wqq_pass_sum_stack_2","wqq in cat1_2016_pass_cat1",23,40,201);
   wqq_pass_sum_stack_2->SetBinContent(1,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(2,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(3,16.3043);
   wqq_pass_sum_stack_2->SetBinContent(4,68.37001);
   wqq_pass_sum_stack_2->SetBinContent(5,144.1564);
   wqq_pass_sum_stack_2->SetBinContent(6,368.6685);
   wqq_pass_sum_stack_2->SetBinContent(7,456.4432);
   wqq_pass_sum_stack_2->SetBinContent(8,255.0618);
   wqq_pass_sum_stack_2->SetBinContent(9,103.2172);
   wqq_pass_sum_stack_2->SetBinContent(10,25.03154);
   wqq_pass_sum_stack_2->SetBinContent(11,10.32062);
   wqq_pass_sum_stack_2->SetBinContent(12,4.185836);
   wqq_pass_sum_stack_2->SetBinContent(13,1.795011);
   wqq_pass_sum_stack_2->SetBinContent(14,0.3312373);
   wqq_pass_sum_stack_2->SetBinContent(15,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(16,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(17,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(18,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(19,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(20,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(21,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(22,1.01772e-05);
   wqq_pass_sum_stack_2->SetBinContent(23,1.01772e-05);
   wqq_pass_sum_stack_2->SetEntries(138);

   ci = TColor::GetColor("#009900");
   wqq_pass_sum_stack_2->SetLineColor(ci);
   wqq_pass_sum_stack_2->SetLineStyle(2);
   wqq_pass_sum_stack_2->SetLineWidth(2);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitle("x");
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_pass_sum_stack_2,"");
   
   TH1F *zqq_pass_sum_stack_3 = new TH1F("zqq_pass_sum_stack_3","zqq in cat1_2016_pass_cat1",23,40,201);
   zqq_pass_sum_stack_3->SetBinContent(1,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(2,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(3,8.072517);
   zqq_pass_sum_stack_3->SetBinContent(4,26.40459);
   zqq_pass_sum_stack_3->SetBinContent(5,72.73869);
   zqq_pass_sum_stack_3->SetBinContent(6,190.9996);
   zqq_pass_sum_stack_3->SetBinContent(7,414.3265);
   zqq_pass_sum_stack_3->SetBinContent(8,605.2945);
   zqq_pass_sum_stack_3->SetBinContent(9,441.6737);
   zqq_pass_sum_stack_3->SetBinContent(10,232.1078);
   zqq_pass_sum_stack_3->SetBinContent(11,73.61961);
   zqq_pass_sum_stack_3->SetBinContent(12,21.13398);
   zqq_pass_sum_stack_3->SetBinContent(13,5.481833);
   zqq_pass_sum_stack_3->SetBinContent(14,2.889819);
   zqq_pass_sum_stack_3->SetBinContent(15,1.204924);
   zqq_pass_sum_stack_3->SetBinContent(16,0.5180407);
   zqq_pass_sum_stack_3->SetBinContent(17,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(18,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(19,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(20,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(21,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(22,1.467526e-05);
   zqq_pass_sum_stack_3->SetBinContent(23,1.467526e-05);
   zqq_pass_sum_stack_3->SetEntries(138);

   ci = TColor::GetColor("#cc0000");
   zqq_pass_sum_stack_3->SetLineColor(ci);
   zqq_pass_sum_stack_3->SetLineStyle(3);
   zqq_pass_sum_stack_3->SetLineWidth(2);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitle("x");
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_pass_sum_stack_3,"");
   
   TH1F *hsigpass_allcats_2016_fit_b_stack_4 = new TH1F("hsigpass_allcats_2016_fit_b_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_allcats_2016_fit_b_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_allcats_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_pass_sum_copy_fx3025[23] = {
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
   Double_t data_pass_sum_copy_fy3025[23] = {
   0,
   0,
   5311,
   5198,
   5385,
   5667,
   5824,
   5504,
   4922,
   4442,
   3910,
   3675,
   3271,
   2903,
   2438,
   2209,
   1760,
   1450,
   839,
   705,
   385,
   321,
   316};
   Double_t data_pass_sum_copy_felx3025[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_copy_fely3025[23] = {
   1.841055,
   1.841055,
   73.88278,
   73.10336,
   74.38871,
   76.28556,
   77.32118,
   75.19507,
   71.16326,
   67.6548,
   63.5367,
   61.62861,
   58.19974,
   54.88687,
   50.38395,
   48.00813,
   42.96123,
   39.08847,
   29.97766,
   27.56499,
   20.63886,
   18.9355,
   18.79556};
   Double_t data_pass_sum_copy_fehx3025[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_copy_fehy3025[23] = {
   0,
   0,
   72.87589,
   72.09639,
   73.38187,
   75.27888,
   76.31459,
   74.1883,
   70.1561,
   66.64726,
   62.52867,
   60.62033,
   57.19097,
   53.87755,
   49.37379,
   46.99746,
   41.94927,
   38.0753,
   28.96035,
   26.54611,
   19.61331,
   17.90752,
   17.76736};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_pass_sum_copy_fx3025,data_pass_sum_copy_fy3025,data_pass_sum_copy_felx3025,data_pass_sum_copy_fehx3025,data_pass_sum_copy_fely3025,data_pass_sum_copy_fehy3025);
   grae->SetName("data_pass_sum_copy");
   grae->SetTitle("WH_hbb in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_pass_sum_copy3025 = new TH1F("Graph_data_pass_sum_copy3025","WH_hbb in cat1_2016_pass_cat1",100,28.1,212.9);
   Graph_data_pass_sum_copy3025->SetMinimum(0);
   Graph_data_pass_sum_copy3025->SetMaximum(6490.53);
   Graph_data_pass_sum_copy3025->SetDirectory(0);
   Graph_data_pass_sum_copy3025->SetStats(0);
   Graph_data_pass_sum_copy3025->SetLineStyle(0);
   Graph_data_pass_sum_copy3025->SetMarkerStyle(20);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_pass_sum_copy3025->GetXaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_pass_sum_copy3025->GetYaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_pass_sum_copy3025);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.5,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_pass_sum_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_pass_sum_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_pass_sum_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd_pass_sum","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("htotpass_allcats_2016_fit_b","Total background","lf");

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
   entry=leg->AddEntry("data_pass_sum","Data","pe");
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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_allcats_2016_fit_b_copy__101 = new TH1F("htotpass_allcats_2016_fit_b_copy__101","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(1,2.485246e-05);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(2,2.485246e-05);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(3,5195.63);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(4,5329.156);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(5,5415.56);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(6,5648.971);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(7,5783.307);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(8,5549.839);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(9,4934.662);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(10,4411.536);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(11,3982.52);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(12,3613.657);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(13,3252.601);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(14,2871.401);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(15,2486.599);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(16,2125.633);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(17,1784.56);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(18,1468.359);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(19,841.6523);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(20,706.0847);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(21,414.4455);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(22,344.6044);
   htotpass_allcats_2016_fit_b_copy__101->SetBinContent(23,282.0094);
   htotpass_allcats_2016_fit_b_copy__101->SetMaximum(8674.96);
   htotpass_allcats_2016_fit_b_copy__101->SetEntries(552);
   htotpass_allcats_2016_fit_b_copy__101->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b_copy__101->SetFillColor(ci);
   htotpass_allcats_2016_fit_b_copy__101->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b_copy__101->SetLineColor(ci);
   htotpass_allcats_2016_fit_b_copy__101->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b_copy__101->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b_copy__101->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b_copy__101->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__101->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b_copy__101->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__101->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b_copy__101->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b_copy__101->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b_copy__101->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__101->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__101->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b_copy__101->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b_copy__101->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__101->Draw("sameaxis");
   p12pass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_allcats_2016_fit_b
   TPad *p22pass_allcats_2016_fit_b = new TPad("p22pass_allcats_2016_fit_b", "p22pass_allcats_2016_fit_b",0,0,1,0.3);
   p22pass_allcats_2016_fit_b->Draw();
   p22pass_allcats_2016_fit_b->cd();
   p22pass_allcats_2016_fit_b->Range(13.7027,-15.46863,221.8108,19.4268);
   p22pass_allcats_2016_fit_b->SetFillColor(0);
   p22pass_allcats_2016_fit_b->SetBorderMode(0);
   p22pass_allcats_2016_fit_b->SetBorderSize(2);
   p22pass_allcats_2016_fit_b->SetTickx(1);
   p22pass_allcats_2016_fit_b->SetTicky(1);
   p22pass_allcats_2016_fit_b->SetLeftMargin(0.16);
   p22pass_allcats_2016_fit_b->SetTopMargin(0.05);
   p22pass_allcats_2016_fit_b->SetBottomMargin(0.3);
   p22pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   p22pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b__102 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b__102","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMaximum(17.68203);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__102->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__102->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_26 = new TH1F("hstack_stack_26","hstack",23,40,201);
   hstack_stack_26->SetMinimum(0);
   hstack_stack_26->SetMaximum(12.17677);
   hstack_stack_26->SetDirectory(0);
   hstack_stack_26->SetStats(0);
   hstack_stack_26->SetLineStyle(0);
   hstack_stack_26->SetMarkerStyle(20);
   hstack_stack_26->GetXaxis()->SetLabelFont(42);
   hstack_stack_26->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_26->GetXaxis()->SetTitleFont(42);
   hstack_stack_26->GetYaxis()->SetLabelFont(42);
   hstack_stack_26->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_26->GetYaxis()->SetTitleFont(42);
   hstack_stack_26->GetZaxis()->SetLabelFont(42);
   hstack_stack_26->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_26);
   
   
   TH1F *sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(3,0.223727);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(4,0.9483139);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(5,1.964469);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(6,4.89737);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(7,5.981074);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(8,3.438032);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(9,1.471251);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(10,0.3755825);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(11,0.1650542);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(12,0.06905004);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(13,0.03138626);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(14,0.006147964);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(15,2.061256e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(16,2.165479e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(17,2.426073e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(18,2.672914e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(19,3.514184e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(20,3.833782e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(21,5.188924e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(22,5.683199e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetBinContent(23,5.728032e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_pass_sumpass_allcats_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(3,0.1107708);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(4,0.3662401);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(5,0.9912353);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(6,2.537227);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(7,5.429191);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(8,8.158895);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(9,6.295585);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(10,3.482631);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(11,1.177374);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(12,0.3486286);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(13,0.09585137);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(14,0.05363678);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(15,0.02440411);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(16,0.01102274);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(17,3.498335e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(18,3.854274e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(19,5.067364e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(20,5.528216e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(21,7.482296e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(22,8.195028e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetBinContent(23,8.259676e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_pass_sumpass_allcats_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_allcats_2016_fit_b__103 = new TH1F("iOneWithErrorsLinepass_allcats_2016_fit_b__103","",23,40,201);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetFillColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetLineColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetMarkerColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetMarkerSize(0);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fx3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fy3026[23] = {
   0,
   0,
   1.89147,
   -0.5046141,
   2.504889,
   7.57282,
   11.78802,
   10.83206,
   7.478979,
   4.251051,
   0.1797413,
   1.406211,
   0.4411624,
   0.6343971,
   -0.9599079,
   1.747319,
   -0.5854617,
   -0.4821764,
   -0.09158324,
   -0.04085931,
   -1.501301,
   -1.318129,
   1.808441};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_felx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fely3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fehx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fehy3026[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_allcats_2016_fit_b_fx3026,Graph_from_iRatiopass_allcats_2016_fit_b_fy3026,Graph_from_iRatiopass_allcats_2016_fit_b_felx3026,Graph_from_iRatiopass_allcats_2016_fit_b_fehx3026,Graph_from_iRatiopass_allcats_2016_fit_b_fely3026,Graph_from_iRatiopass_allcats_2016_fit_b_fehy3026);
   grae->SetName("Graph_from_iRatiopass_allcats_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026 = new TH1F("Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetMinimum(-4.030233);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetMaximum(14.31695);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetDirectory(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetStats(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b_copy__104 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b_copy__104","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMaximum(17.68203);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetEntries(1104);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->Draw("sameaxis");
   p22pass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
   cpass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
   cpass_allcats_2016_fit_b->SetSelected(cpass_allcats_2016_fit_b);
}
