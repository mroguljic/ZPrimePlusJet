void mlfit_pass_cat2_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat2_2016_fit_s/cpass_cat2_2016_fit_s
//=========  (Mon Sep 30 17:21:41 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_fit_s = new TCanvas("cpass_cat2_2016_fit_s", "cpass_cat2_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_fit_s->SetHighLightColor(2);
   cpass_cat2_2016_fit_s->Range(0,0,1,1);
   cpass_cat2_2016_fit_s->SetFillColor(0);
   cpass_cat2_2016_fit_s->SetBorderMode(0);
   cpass_cat2_2016_fit_s->SetBorderSize(2);
   cpass_cat2_2016_fit_s->SetTickx(1);
   cpass_cat2_2016_fit_s->SetTicky(1);
   cpass_cat2_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat2_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat2_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat2_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_fit_s
   TPad *p12pass_cat2_2016_fit_s = new TPad("p12pass_cat2_2016_fit_s", "p12pass_cat2_2016_fit_s",0,0.3,1,1);
   p12pass_cat2_2016_fit_s->Draw();
   p12pass_cat2_2016_fit_s->cd();
   p12pass_cat2_2016_fit_s->Range(18.24324,-45.37636,197.973,2223.442);
   p12pass_cat2_2016_fit_s->SetFillColor(0);
   p12pass_cat2_2016_fit_s->SetBorderMode(0);
   p12pass_cat2_2016_fit_s->SetBorderSize(2);
   p12pass_cat2_2016_fit_s->SetTickx(1);
   p12pass_cat2_2016_fit_s->SetTicky(1);
   p12pass_cat2_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat2_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_fit_s__25 = new TH1F("htotpass_cat2_2016_fit_s__25","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s__25->SetBinContent(1,6.188532e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(2,6.188532e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(3,1223.974);
   htotpass_cat2_2016_fit_s__25->SetBinContent(4,1254.514);
   htotpass_cat2_2016_fit_s__25->SetBinContent(5,1270.827);
   htotpass_cat2_2016_fit_s__25->SetBinContent(6,1310.716);
   htotpass_cat2_2016_fit_s__25->SetBinContent(7,1331.04);
   htotpass_cat2_2016_fit_s__25->SetBinContent(8,1289.874);
   htotpass_cat2_2016_fit_s__25->SetBinContent(9,1174.099);
   htotpass_cat2_2016_fit_s__25->SetBinContent(10,1052.266);
   htotpass_cat2_2016_fit_s__25->SetBinContent(11,947.3066);
   htotpass_cat2_2016_fit_s__25->SetBinContent(12,853.7844);
   htotpass_cat2_2016_fit_s__25->SetBinContent(13,787.3906);
   htotpass_cat2_2016_fit_s__25->SetBinContent(14,695.6915);
   htotpass_cat2_2016_fit_s__25->SetBinContent(15,602.7328);
   htotpass_cat2_2016_fit_s__25->SetBinContent(16,520.5593);
   htotpass_cat2_2016_fit_s__25->SetBinContent(17,430.2348);
   htotpass_cat2_2016_fit_s__25->SetBinContent(18,351.9423);
   htotpass_cat2_2016_fit_s__25->SetBinContent(19,277.0636);
   htotpass_cat2_2016_fit_s__25->SetBinContent(20,218.1418);
   htotpass_cat2_2016_fit_s__25->SetBinContent(21,6.188532e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(22,6.188532e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(23,6.188532e-06);
   htotpass_cat2_2016_fit_s__25->SetMinimum(0);
   htotpass_cat2_2016_fit_s__25->SetMaximum(1996.56);
   htotpass_cat2_2016_fit_s__25->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__25->SetFillColor(ci);
   htotpass_cat2_2016_fit_s__25->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__25->SetLineColor(ci);
   htotpass_cat2_2016_fit_s__25->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s__25->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s__25->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__25->Draw("");
   
   TH1F *htot_linepass_cat2_2016_fit_s__26 = new TH1F("htot_linepass_cat2_2016_fit_s__26","wqq in cat2_2016_pass_cat2",23,40,201);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(1,6.188532e-06);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(2,6.188532e-06);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(3,1223.974);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(4,1254.514);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(5,1270.827);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(6,1310.716);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(7,1331.04);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(8,1289.874);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(9,1174.099);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(10,1052.266);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(11,947.3066);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(12,853.7844);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(13,787.3906);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(14,695.6915);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(15,602.7328);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(16,520.5593);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(17,430.2348);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(18,351.9423);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(19,277.0636);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(20,218.1418);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(21,6.188532e-06);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(22,6.188532e-06);
   htot_linepass_cat2_2016_fit_s__26->SetBinContent(23,6.188532e-06);
   htot_linepass_cat2_2016_fit_s__26->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_s__26->SetFillColor(ci);
   htot_linepass_cat2_2016_fit_s__26->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_s__26->SetLineColor(ci);
   htot_linepass_cat2_2016_fit_s__26->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat2_2016_fit_s__26->SetMarkerColor(ci);
   htot_linepass_cat2_2016_fit_s__26->SetMarkerSize(0);
   htot_linepass_cat2_2016_fit_s__26->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat2_2016_fit_s__26->GetXaxis()->SetRange(2,20);
   htot_linepass_cat2_2016_fit_s__26->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_s__26->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_s__26->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_s__26->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_s__26->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat2_2016_fit_s__26->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_s__26->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat2_2016_fit_s__26->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat2_2016_fit_s__26->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat2_2016_fit_s__26->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_s__26->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_s__26->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_s__26->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_s__26->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_s__26->Draw("histsame");
   
   TH1F *qcd__27 = new TH1F("qcd__27","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__27->SetBinContent(3,1206.546);
   qcd__27->SetBinContent(4,1215.066);
   qcd__27->SetBinContent(5,1199.016);
   qcd__27->SetBinContent(6,1152.261);
   qcd__27->SetBinContent(7,1104.451);
   qcd__27->SetBinContent(8,1056.533);
   qcd__27->SetBinContent(9,998.9063);
   qcd__27->SetBinContent(10,947.4176);
   qcd__27->SetBinContent(11,894.0241);
   qcd__27->SetBinContent(12,826.3063);
   qcd__27->SetBinContent(13,760.147);
   qcd__27->SetBinContent(14,671.6753);
   qcd__27->SetBinContent(15,585.7563);
   qcd__27->SetBinContent(16,507.59);
   qcd__27->SetBinContent(17,422.2641);
   qcd__27->SetBinContent(18,344.2409);
   qcd__27->SetBinContent(19,275.3028);
   qcd__27->SetBinContent(20,213.7567);
   qcd__27->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__27->SetLineColor(ci);
   qcd__27->SetLineStyle(2);
   qcd__27->SetLineWidth(2);
   qcd__27->GetXaxis()->SetTitle("x");
   qcd__27->GetXaxis()->SetLabelFont(42);
   qcd__27->GetXaxis()->SetLabelSize(0.035);
   qcd__27->GetXaxis()->SetTitleSize(0.035);
   qcd__27->GetXaxis()->SetTitleFont(42);
   qcd__27->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__27->GetYaxis()->SetLabelFont(42);
   qcd__27->GetYaxis()->SetLabelSize(0.035);
   qcd__27->GetYaxis()->SetTitleSize(0.035);
   qcd__27->GetYaxis()->SetTitleOffset(0);
   qcd__27->GetYaxis()->SetTitleFont(42);
   qcd__27->GetZaxis()->SetLabelFont(42);
   qcd__27->GetZaxis()->SetLabelSize(0.035);
   qcd__27->GetZaxis()->SetTitleSize(0.035);
   qcd__27->GetZaxis()->SetTitleFont(42);
   qcd__27->Draw("hist sames");
   
   TH1F *htotpass_cat2_2016_fit_s__28 = new TH1F("htotpass_cat2_2016_fit_s__28","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s__28->SetBinContent(1,6.188532e-06);
   htotpass_cat2_2016_fit_s__28->SetBinContent(2,6.188532e-06);
   htotpass_cat2_2016_fit_s__28->SetBinContent(3,1223.974);
   htotpass_cat2_2016_fit_s__28->SetBinContent(4,1254.514);
   htotpass_cat2_2016_fit_s__28->SetBinContent(5,1270.827);
   htotpass_cat2_2016_fit_s__28->SetBinContent(6,1310.716);
   htotpass_cat2_2016_fit_s__28->SetBinContent(7,1331.04);
   htotpass_cat2_2016_fit_s__28->SetBinContent(8,1289.874);
   htotpass_cat2_2016_fit_s__28->SetBinContent(9,1174.099);
   htotpass_cat2_2016_fit_s__28->SetBinContent(10,1052.266);
   htotpass_cat2_2016_fit_s__28->SetBinContent(11,947.3066);
   htotpass_cat2_2016_fit_s__28->SetBinContent(12,853.7844);
   htotpass_cat2_2016_fit_s__28->SetBinContent(13,787.3906);
   htotpass_cat2_2016_fit_s__28->SetBinContent(14,695.6915);
   htotpass_cat2_2016_fit_s__28->SetBinContent(15,602.7328);
   htotpass_cat2_2016_fit_s__28->SetBinContent(16,520.5593);
   htotpass_cat2_2016_fit_s__28->SetBinContent(17,430.2348);
   htotpass_cat2_2016_fit_s__28->SetBinContent(18,351.9423);
   htotpass_cat2_2016_fit_s__28->SetBinContent(19,277.0636);
   htotpass_cat2_2016_fit_s__28->SetBinContent(20,218.1418);
   htotpass_cat2_2016_fit_s__28->SetBinContent(21,6.188532e-06);
   htotpass_cat2_2016_fit_s__28->SetBinContent(22,6.188532e-06);
   htotpass_cat2_2016_fit_s__28->SetBinContent(23,6.188532e-06);
   htotpass_cat2_2016_fit_s__28->SetMinimum(0);
   htotpass_cat2_2016_fit_s__28->SetMaximum(1996.56);
   htotpass_cat2_2016_fit_s__28->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__28->SetFillColor(ci);
   htotpass_cat2_2016_fit_s__28->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__28->SetLineColor(ci);
   htotpass_cat2_2016_fit_s__28->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s__28->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s__28->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s__28->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__28->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s__28->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__28->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s__28->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s__28->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s__28->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__28->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__28->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__28->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__28->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__28->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis7[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_7 = new TH1F("hstackMC_stack_7","hstackMC",23, xAxis7);
   hstackMC_stack_7->SetMinimum(0);
   hstackMC_stack_7->SetMaximum(246.6818);
   hstackMC_stack_7->SetDirectory(0);
   hstackMC_stack_7->SetStats(0);
   hstackMC_stack_7->SetLineStyle(0);
   hstackMC_stack_7->SetMarkerStyle(20);
   hstackMC_stack_7->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_7->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_7->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_7->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_7->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_7);
   
   Double_t xAxis8[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat2_2016_pass_cat2",23, xAxis8);
   tqq_stack_1->SetBinContent(3,9.403749);
   tqq_stack_1->SetBinContent(4,11.19358);
   tqq_stack_1->SetBinContent(5,17.34163);
   tqq_stack_1->SetBinContent(6,25.42744);
   tqq_stack_1->SetBinContent(7,30.4013);
   tqq_stack_1->SetBinContent(8,28.18571);
   tqq_stack_1->SetBinContent(9,22.14846);
   tqq_stack_1->SetBinContent(10,26.82286);
   tqq_stack_1->SetBinContent(11,29.7376);
   tqq_stack_1->SetBinContent(12,23.56923);
   tqq_stack_1->SetBinContent(13,26.81073);
   tqq_stack_1->SetBinContent(14,24.0162);
   tqq_stack_1->SetBinContent(15,16.97646);
   tqq_stack_1->SetBinContent(16,12.96925);
   tqq_stack_1->SetBinContent(17,7.970681);
   tqq_stack_1->SetBinContent(18,7.701454);
   tqq_stack_1->SetBinContent(19,1.760782);
   tqq_stack_1->SetBinContent(20,4.385173);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat2_2016_pass_cat2",23,40,201);
   wqq_stack_2->SetBinContent(1,2.56901e-06);
   wqq_stack_2->SetBinContent(2,2.56901e-06);
   wqq_stack_2->SetBinContent(3,5.957608);
   wqq_stack_2->SetBinContent(4,17.95114);
   wqq_stack_2->SetBinContent(5,30.9708);
   wqq_stack_2->SetBinContent(6,84.89927);
   wqq_stack_2->SetBinContent(7,110.0904);
   wqq_stack_2->SetBinContent(8,69.48589);
   wqq_stack_2->SetBinContent(9,33.85299);
   wqq_stack_2->SetBinContent(10,9.558693);
   wqq_stack_2->SetBinContent(11,2.990811);
   wqq_stack_2->SetBinContent(12,0.811026);
   wqq_stack_2->SetBinContent(13,0.4328626);
   wqq_stack_2->SetBinContent(14,2.56901e-06);
   wqq_stack_2->SetBinContent(15,2.56901e-06);
   wqq_stack_2->SetBinContent(16,2.56901e-06);
   wqq_stack_2->SetBinContent(17,2.56901e-06);
   wqq_stack_2->SetBinContent(18,2.56901e-06);
   wqq_stack_2->SetBinContent(19,2.56901e-06);
   wqq_stack_2->SetBinContent(20,2.56901e-06);
   wqq_stack_2->SetBinContent(21,2.56901e-06);
   wqq_stack_2->SetBinContent(22,2.56901e-06);
   wqq_stack_2->SetBinContent(23,2.56901e-06);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat2_2016_pass_cat2",23,40,201);
   zqq_stack_3->SetBinContent(1,3.619522e-06);
   zqq_stack_3->SetBinContent(2,3.619522e-06);
   zqq_stack_3->SetBinContent(3,2.06741);
   zqq_stack_3->SetBinContent(4,10.30341);
   zqq_stack_3->SetBinContent(5,23.49794);
   zqq_stack_3->SetBinContent(6,48.12825);
   zqq_stack_3->SetBinContent(7,86.0973);
   zqq_stack_3->SetBinContent(8,135.6699);
   zqq_stack_3->SetBinContent(9,119.1917);
   zqq_stack_3->SetBinContent(10,68.46667);
   zqq_stack_3->SetBinContent(11,20.55415);
   zqq_stack_3->SetBinContent(12,3.097822);
   zqq_stack_3->SetBinContent(13,3.619522e-06);
   zqq_stack_3->SetBinContent(14,3.619522e-06);
   zqq_stack_3->SetBinContent(15,3.619522e-06);
   zqq_stack_3->SetBinContent(16,3.619522e-06);
   zqq_stack_3->SetBinContent(17,3.619522e-06);
   zqq_stack_3->SetBinContent(18,3.619522e-06);
   zqq_stack_3->SetBinContent(19,3.619522e-06);
   zqq_stack_3->SetBinContent(20,3.619522e-06);
   zqq_stack_3->SetBinContent(21,3.619522e-06);
   zqq_stack_3->SetBinContent(22,3.619522e-06);
   zqq_stack_3->SetBinContent(23,3.619522e-06);
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
   
   TH1F *hsigpass_cat2_2016_fit_s_stack_4 = new TH1F("hsigpass_cat2_2016_fit_s_stack_4","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(1,7.339539e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(2,7.339539e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(3,0.4398405);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(4,0.1601622);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(5,0.6360997);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(6,1.43291);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(7,1.115267);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(8,1.593579);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(9,4.727759);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(10,10.00951);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(11,15.12598);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(12,22.20611);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(13,22.68223);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(14,15.40207);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(15,6.617935);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(16,1.71078);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(17,0.5107064);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(18,0.2659843);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(19,0.1504159);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(20,0.06322591);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(21,7.339539e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(22,7.339539e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(23,7.339539e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3007[23] = {
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
   Double_t data_copy_fy3007[23] = {
   0,
   0,
   1215,
   1189,
   1243,
   1333,
   1335,
   1244,
   1127,
   1044,
   915,
   894,
   811,
   697,
   593,
   528,
   424,
   337,
   290,
   198,
   0,
   0,
   0};
   Double_t data_copy_felx3007[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3007[23] = {
   1.841055,
   1.841055,
   35.86719,
   35.49231,
   36.26644,
   37.52021,
   37.54759,
   36.28062,
   34.5815,
   33.32203,
   31.26066,
   30.91165,
   29.49041,
   27.41398,
   25.36583,
   23.99328,
   21.60792,
   19.37615,
   18.04936,
   15.09528,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3007[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3007[23] = {
   0,
   0,
   34.8528,
   34.47777,
   35.25222,
   36.50648,
   36.53386,
   35.2664,
   33.56656,
   32.30651,
   30.24409,
   29.89488,
   28.4728,
   26.39499,
   24.34525,
   22.97147,
   20.58358,
   18.34884,
   17.01993,
   14.05965,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3007,data_copy_fy3007,data_copy_felx3007,data_copy_fehx3007,data_copy_fely3007,data_copy_fehy3007);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat2_2016_pass_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3007 = new TH1F("Graph_data_copy3007","WH_hbb in cat2_2016_pass_cat2",100,28.1,212.9);
   Graph_data_copy3007->SetMinimum(0);
   Graph_data_copy3007->SetMaximum(1508.871);
   Graph_data_copy3007->SetDirectory(0);
   Graph_data_copy3007->SetStats(0);
   Graph_data_copy3007->SetLineStyle(0);
   Graph_data_copy3007->SetMarkerStyle(20);
   Graph_data_copy3007->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3007->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3007->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3007->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3007->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3007);
   
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
   entry=leg->AddEntry("htotpass_cat2_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat2_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat2_2016_fit_s_copy__29 = new TH1F("htotpass_cat2_2016_fit_s_copy__29","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(1,6.188532e-06);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(2,6.188532e-06);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(3,1223.974);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(4,1254.514);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(5,1270.827);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(6,1310.716);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(7,1331.04);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(8,1289.874);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(9,1174.099);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(10,1052.266);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(11,947.3066);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(12,853.7844);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(13,787.3906);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(14,695.6915);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(15,602.7328);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(16,520.5593);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(17,430.2348);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(18,351.9423);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(19,277.0636);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(20,218.1418);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(21,6.188532e-06);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(22,6.188532e-06);
   htotpass_cat2_2016_fit_s_copy__29->SetBinContent(23,6.188532e-06);
   htotpass_cat2_2016_fit_s_copy__29->SetMaximum(1996.56);
   htotpass_cat2_2016_fit_s_copy__29->SetEntries(92);
   htotpass_cat2_2016_fit_s_copy__29->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s_copy__29->SetFillColor(ci);
   htotpass_cat2_2016_fit_s_copy__29->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s_copy__29->SetLineColor(ci);
   htotpass_cat2_2016_fit_s_copy__29->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s_copy__29->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s_copy__29->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s_copy__29->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__29->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s_copy__29->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__29->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s_copy__29->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s_copy__29->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s_copy__29->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__29->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__29->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s_copy__29->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s_copy__29->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__29->Draw("sameaxis");
   p12pass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_fit_s
   TPad *p22pass_cat2_2016_fit_s = new TPad("p22pass_cat2_2016_fit_s", "p22pass_cat2_2016_fit_s",0,0,1,0.3);
   p22pass_cat2_2016_fit_s->Draw();
   p22pass_cat2_2016_fit_s->cd();
   p22pass_cat2_2016_fit_s->Range(18.24324,-10.99805,197.973,8.995441);
   p22pass_cat2_2016_fit_s->SetFillColor(0);
   p22pass_cat2_2016_fit_s->SetBorderMode(0);
   p22pass_cat2_2016_fit_s->SetBorderSize(2);
   p22pass_cat2_2016_fit_s->SetTickx(1);
   p22pass_cat2_2016_fit_s->SetTicky(1);
   p22pass_cat2_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat2_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat2_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s__30 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s__30","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMaximum(7.995766);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__30->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__30->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_8 = new TH1F("hstack_stack_8","hstack",23,40,201);
   hstack_stack_8->SetMinimum(0);
   hstack_stack_8->SetMaximum(6.155627);
   hstack_stack_8->SetDirectory(0);
   hstack_stack_8->SetStats(0);
   hstack_stack_8->SetLineStyle(0);
   hstack_stack_8->SetMarkerStyle(20);
   hstack_stack_8->GetXaxis()->SetLabelFont(42);
   hstack_stack_8->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_8->GetXaxis()->SetTitleFont(42);
   hstack_stack_8->GetYaxis()->SetLabelFont(42);
   hstack_stack_8->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_8->GetYaxis()->SetTitleFont(42);
   hstack_stack_8->GetZaxis()->SetLabelFont(42);
   hstack_stack_8->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_8);
   
   
   TH1F *sigHistResidualwqqpass_cat2_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat2_2016_fit_s_stack_1","wqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(3,0.1709363);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(4,0.5206583);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(5,0.8785489);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(6,2.325594);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(7,3.013379);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(8,1.970314);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(9,1.008533);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(10,0.2958751);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(11,0.0988891);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(12,0.02712926);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(13,0.01520267);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(14,9.732945e-08);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(15,1.055241e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(16,1.118348e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(17,1.248087e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(18,1.400094e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(19,1.509413e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(20,1.827221e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat2_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat2_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat2_2016_fit_s_stack_2","zqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(3,0.05931832);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(4,0.298842);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(5,0.6665661);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(6,1.318348);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(7,2.356644);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(8,3.847001);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(9,3.550906);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(10,2.119284);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(11,0.6796086);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(12,0.1036238);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(13,1.271221e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(14,1.371291e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(15,1.486747e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(16,1.57566e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(17,1.758451e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(18,1.972616e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(19,2.126638e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(20,2.574403e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat2_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(3,0.01261994);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(4,0.004645376);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(5,0.01804424);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(6,0.03925084);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(7,0.03052694);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(8,0.04518688);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(9,0.1408473);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(10,0.3098294);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(11,0.5001301);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(12,0.7428065);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(13,0.7966281);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(14,0.5835223);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(15,0.2718368);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(16,0.07447415);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(17,0.02481135);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(18,0.01449597);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(19,0.008837634);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(20,0.004496974);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_fit_s__31 = new TH1F("iOneWithErrorsLinepass_cat2_2016_fit_s__31","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fx3008[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fy3008[23] = {
   0,
   0,
   -0.02724558,
   -1.080675,
   0.7346209,
   4.139412,
   5.330511,
   4.390264,
   3.06364,
   2.093496,
   -0.2897002,
   1.427439,
   0.8152562,
   0.04773232,
   -0.3997818,
   0.3101175,
   -0.3029003,
   -0.8143468,
   0.7167269,
   -1.432599,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_felx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fely3008[23] = {
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
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fehx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fehy3008[23] = {
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
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_fit_s_fx3008,Graph_from_iRatiopass_cat2_2016_fit_s_fy3008,Graph_from_iRatiopass_cat2_2016_fit_s_felx3008,Graph_from_iRatiopass_cat2_2016_fit_s_fehx3008,Graph_from_iRatiopass_cat2_2016_fit_s_fely3008,Graph_from_iRatiopass_cat2_2016_fit_s_fehy3008);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetMinimum(-3.30891);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetMaximum(7.206822);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s_copy__32 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s_copy__32","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMaximum(7.995766);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetEntries(184);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->Draw("sameaxis");
   p22pass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
   cpass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
   cpass_cat2_2016_fit_s->SetSelected(cpass_cat2_2016_fit_s);
}
