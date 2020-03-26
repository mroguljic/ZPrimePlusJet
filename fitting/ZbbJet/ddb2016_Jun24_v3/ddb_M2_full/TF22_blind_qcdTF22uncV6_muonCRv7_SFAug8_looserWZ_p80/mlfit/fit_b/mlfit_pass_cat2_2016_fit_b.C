void mlfit_pass_cat2_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat2_2016_fit_b/cpass_cat2_2016_fit_b
//=========  (Wed Sep  4 11:54:17 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_fit_b = new TCanvas("cpass_cat2_2016_fit_b", "cpass_cat2_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_fit_b->SetHighLightColor(2);
   cpass_cat2_2016_fit_b->Range(0,0,1,1);
   cpass_cat2_2016_fit_b->SetFillColor(0);
   cpass_cat2_2016_fit_b->SetBorderMode(0);
   cpass_cat2_2016_fit_b->SetBorderSize(2);
   cpass_cat2_2016_fit_b->SetTickx(1);
   cpass_cat2_2016_fit_b->SetTicky(1);
   cpass_cat2_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat2_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat2_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat2_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_fit_b
   TPad *p12pass_cat2_2016_fit_b = new TPad("p12pass_cat2_2016_fit_b", "p12pass_cat2_2016_fit_b",0,0.3,1,1);
   p12pass_cat2_2016_fit_b->Draw();
   p12pass_cat2_2016_fit_b->cd();
   p12pass_cat2_2016_fit_b->Range(18.24324,-45.23733,197.973,2216.629);
   p12pass_cat2_2016_fit_b->SetFillColor(0);
   p12pass_cat2_2016_fit_b->SetBorderMode(0);
   p12pass_cat2_2016_fit_b->SetBorderSize(2);
   p12pass_cat2_2016_fit_b->SetTickx(1);
   p12pass_cat2_2016_fit_b->SetTicky(1);
   p12pass_cat2_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat2_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_fit_b__25 = new TH1F("htotpass_cat2_2016_fit_b__25","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b__25->SetBinContent(1,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(2,1177.18);
   htotpass_cat2_2016_fit_b__25->SetBinContent(3,1239.873);
   htotpass_cat2_2016_fit_b__25->SetBinContent(4,1253.7);
   htotpass_cat2_2016_fit_b__25->SetBinContent(5,1264.363);
   htotpass_cat2_2016_fit_b__25->SetBinContent(6,1311.572);
   htotpass_cat2_2016_fit_b__25->SetBinContent(7,1326.962);
   htotpass_cat2_2016_fit_b__25->SetBinContent(8,1275.404);
   htotpass_cat2_2016_fit_b__25->SetBinContent(9,1149.185);
   htotpass_cat2_2016_fit_b__25->SetBinContent(10,1043.498);
   htotpass_cat2_2016_fit_b__25->SetBinContent(11,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(12,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(13,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(14,709.7835);
   htotpass_cat2_2016_fit_b__25->SetBinContent(15,611.886);
   htotpass_cat2_2016_fit_b__25->SetBinContent(16,528.282);
   htotpass_cat2_2016_fit_b__25->SetBinContent(17,434.7329);
   htotpass_cat2_2016_fit_b__25->SetBinContent(18,358.8473);
   htotpass_cat2_2016_fit_b__25->SetBinContent(19,277.6101);
   htotpass_cat2_2016_fit_b__25->SetBinContent(20,223.7269);
   htotpass_cat2_2016_fit_b__25->SetBinContent(21,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(22,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(23,6.37178e-06);
   htotpass_cat2_2016_fit_b__25->SetMinimum(0);
   htotpass_cat2_2016_fit_b__25->SetMaximum(1990.443);
   htotpass_cat2_2016_fit_b__25->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__25->SetFillColor(ci);
   htotpass_cat2_2016_fit_b__25->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__25->SetLineColor(ci);
   htotpass_cat2_2016_fit_b__25->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b__25->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b__25->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__25->Draw("");
   
   TH1F *htot_linepass_cat2_2016_fit_b__26 = new TH1F("htot_linepass_cat2_2016_fit_b__26","wqq in cat2_2016_pass_cat2",23,40,201);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(1,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(2,1177.18);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(3,1239.873);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(4,1253.7);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(5,1264.363);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(6,1311.572);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(7,1326.962);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(8,1275.404);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(9,1149.185);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(10,1043.498);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(11,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(12,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(13,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(14,709.7835);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(15,611.886);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(16,528.282);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(17,434.7329);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(18,358.8473);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(19,277.6101);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(20,223.7269);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(21,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(22,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetBinContent(23,6.37178e-06);
   htot_linepass_cat2_2016_fit_b__26->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_b__26->SetFillColor(ci);
   htot_linepass_cat2_2016_fit_b__26->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_b__26->SetLineColor(ci);
   htot_linepass_cat2_2016_fit_b__26->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat2_2016_fit_b__26->SetMarkerColor(ci);
   htot_linepass_cat2_2016_fit_b__26->SetMarkerSize(0);
   htot_linepass_cat2_2016_fit_b__26->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat2_2016_fit_b__26->GetXaxis()->SetRange(2,20);
   htot_linepass_cat2_2016_fit_b__26->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_b__26->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_b__26->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_b__26->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_b__26->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat2_2016_fit_b__26->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_b__26->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat2_2016_fit_b__26->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat2_2016_fit_b__26->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat2_2016_fit_b__26->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_b__26->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_b__26->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_b__26->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_b__26->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_b__26->Draw("histsame");
   
   TH1F *qcd__27 = new TH1F("qcd__27","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__27->SetBinContent(2,1158.773);
   qcd__27->SetBinContent(3,1205.198);
   qcd__27->SetBinContent(4,1190.18);
   qcd__27->SetBinContent(5,1156.145);
   qcd__27->SetBinContent(6,1089.666);
   qcd__27->SetBinContent(7,1036.947);
   qcd__27->SetBinContent(8,1003.771);
   qcd__27->SetBinContent(9,954.1826);
   qcd__27->SetBinContent(10,909.1192);
   qcd__27->SetBinContent(14,651.7051);
   qcd__27->SetBinContent(15,570.8318);
   qcd__27->SetBinContent(16,496.9185);
   qcd__27->SetBinContent(17,415.4574);
   qcd__27->SetBinContent(18,340.2228);
   qcd__27->SetBinContent(19,273.352);
   qcd__27->SetBinContent(20,213.1222);
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
   
   TH1F *htotpass_cat2_2016_fit_b__28 = new TH1F("htotpass_cat2_2016_fit_b__28","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b__28->SetBinContent(1,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetBinContent(2,1177.18);
   htotpass_cat2_2016_fit_b__28->SetBinContent(3,1239.873);
   htotpass_cat2_2016_fit_b__28->SetBinContent(4,1253.7);
   htotpass_cat2_2016_fit_b__28->SetBinContent(5,1264.363);
   htotpass_cat2_2016_fit_b__28->SetBinContent(6,1311.572);
   htotpass_cat2_2016_fit_b__28->SetBinContent(7,1326.962);
   htotpass_cat2_2016_fit_b__28->SetBinContent(8,1275.404);
   htotpass_cat2_2016_fit_b__28->SetBinContent(9,1149.185);
   htotpass_cat2_2016_fit_b__28->SetBinContent(10,1043.498);
   htotpass_cat2_2016_fit_b__28->SetBinContent(11,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetBinContent(12,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetBinContent(13,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetBinContent(14,709.7835);
   htotpass_cat2_2016_fit_b__28->SetBinContent(15,611.886);
   htotpass_cat2_2016_fit_b__28->SetBinContent(16,528.282);
   htotpass_cat2_2016_fit_b__28->SetBinContent(17,434.7329);
   htotpass_cat2_2016_fit_b__28->SetBinContent(18,358.8473);
   htotpass_cat2_2016_fit_b__28->SetBinContent(19,277.6101);
   htotpass_cat2_2016_fit_b__28->SetBinContent(20,223.7269);
   htotpass_cat2_2016_fit_b__28->SetBinContent(21,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetBinContent(22,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetBinContent(23,6.37178e-06);
   htotpass_cat2_2016_fit_b__28->SetMinimum(0);
   htotpass_cat2_2016_fit_b__28->SetMaximum(1990.443);
   htotpass_cat2_2016_fit_b__28->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__28->SetFillColor(ci);
   htotpass_cat2_2016_fit_b__28->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__28->SetLineColor(ci);
   htotpass_cat2_2016_fit_b__28->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b__28->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b__28->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b__28->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__28->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b__28->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__28->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b__28->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b__28->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b__28->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__28->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__28->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__28->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__28->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__28->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis7[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_7 = new TH1F("hstackMC_stack_7","hstackMC",23, xAxis7);
   hstackMC_stack_7->SetMinimum(0);
   hstackMC_stack_7->SetMaximum(304.5159);
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
   tqq_stack_1->SetBinContent(2,14.15392);
   tqq_stack_1->SetBinContent(3,22.74109);
   tqq_stack_1->SetBinContent(4,27.06945);
   tqq_stack_1->SetBinContent(5,41.93729);
   tqq_stack_1->SetBinContent(6,61.4912);
   tqq_stack_1->SetBinContent(7,73.51948);
   tqq_stack_1->SetBinContent(8,68.16152);
   tqq_stack_1->SetBinContent(9,53.56164);
   tqq_stack_1->SetBinContent(10,64.86575);
   tqq_stack_1->SetBinContent(14,58.0784);
   tqq_stack_1->SetBinContent(15,41.0542);
   tqq_stack_1->SetBinContent(16,31.36355);
   tqq_stack_1->SetBinContent(17,19.27551);
   tqq_stack_1->SetBinContent(18,18.62443);
   tqq_stack_1->SetBinContent(19,4.258102);
   tqq_stack_1->SetBinContent(20,10.60467);
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
   wqq_stack_2->SetBinContent(1,2.974745e-06);
   wqq_stack_2->SetBinContent(2,2.209492);
   wqq_stack_2->SetBinContent(3,8.948139);
   wqq_stack_2->SetBinContent(4,24.09909);
   wqq_stack_2->SetBinContent(5,40.66246);
   wqq_stack_2->SetBinContent(6,106.5957);
   wqq_stack_2->SetBinContent(7,125.8277);
   wqq_stack_2->SetBinContent(8,70.46342);
   wqq_stack_2->SetBinContent(9,35.97882);
   wqq_stack_2->SetBinContent(10,10.17878);
   wqq_stack_2->SetBinContent(11,2.974745e-06);
   wqq_stack_2->SetBinContent(12,2.974745e-06);
   wqq_stack_2->SetBinContent(13,2.974745e-06);
   wqq_stack_2->SetBinContent(14,2.974745e-06);
   wqq_stack_2->SetBinContent(15,2.974745e-06);
   wqq_stack_2->SetBinContent(16,2.974745e-06);
   wqq_stack_2->SetBinContent(17,2.974745e-06);
   wqq_stack_2->SetBinContent(18,2.974745e-06);
   wqq_stack_2->SetBinContent(19,2.974745e-06);
   wqq_stack_2->SetBinContent(20,2.974745e-06);
   wqq_stack_2->SetBinContent(21,2.974745e-06);
   wqq_stack_2->SetBinContent(22,2.974745e-06);
   wqq_stack_2->SetBinContent(23,2.974745e-06);
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
   zqq_stack_3->SetBinContent(1,3.397034e-06);
   zqq_stack_3->SetBinContent(2,2.043679);
   zqq_stack_3->SetBinContent(3,2.985778);
   zqq_stack_3->SetBinContent(4,12.35101);
   zqq_stack_3->SetBinContent(5,25.61904);
   zqq_stack_3->SetBinContent(6,53.81893);
   zqq_stack_3->SetBinContent(7,90.66788);
   zqq_stack_3->SetBinContent(8,133.0081);
   zqq_stack_3->SetBinContent(9,105.4623);
   zqq_stack_3->SetBinContent(10,59.33393);
   zqq_stack_3->SetBinContent(11,3.397034e-06);
   zqq_stack_3->SetBinContent(12,3.397034e-06);
   zqq_stack_3->SetBinContent(13,3.397034e-06);
   zqq_stack_3->SetBinContent(14,3.397034e-06);
   zqq_stack_3->SetBinContent(15,3.397034e-06);
   zqq_stack_3->SetBinContent(16,3.397034e-06);
   zqq_stack_3->SetBinContent(17,3.397034e-06);
   zqq_stack_3->SetBinContent(18,3.397034e-06);
   zqq_stack_3->SetBinContent(19,3.397034e-06);
   zqq_stack_3->SetBinContent(20,3.397034e-06);
   zqq_stack_3->SetBinContent(21,3.397034e-06);
   zqq_stack_3->SetBinContent(22,3.397034e-06);
   zqq_stack_3->SetBinContent(23,3.397034e-06);
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
   
   TH1F *hsigpass_cat2_2016_fit_b_stack_4 = new TH1F("hsigpass_cat2_2016_fit_b_stack_4","hqq125 in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_fit_b_stack_4,"");
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
   1202,
   1215,
   1189,
   1243,
   1333,
   1335,
   1244,
   1127,
   1044,
   0,
   0,
   0,
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
   35.68026,
   35.86719,
   35.49231,
   36.26644,
   37.52021,
   37.54759,
   36.28062,
   34.5815,
   33.32203,
   1.841055,
   1.841055,
   1.841055,
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
   34.6658,
   34.8528,
   34.47777,
   35.25222,
   36.50648,
   36.53386,
   35.2664,
   33.56656,
   32.30651,
   0,
   0,
   0,
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
   grae->SetTitle("tqq in cat2_2016_pass_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3007 = new TH1F("Graph_data_copy3007","tqq in cat2_2016_pass_cat2",100,28.1,212.9);
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
   entry=leg->AddEntry("htotpass_cat2_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat2_2016_fit_b_copy__29 = new TH1F("htotpass_cat2_2016_fit_b_copy__29","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(1,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(2,1177.18);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(3,1239.873);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(4,1253.7);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(5,1264.363);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(6,1311.572);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(7,1326.962);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(8,1275.404);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(9,1149.185);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(10,1043.498);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(11,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(12,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(13,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(14,709.7835);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(15,611.886);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(16,528.282);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(17,434.7329);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(18,358.8473);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(19,277.6101);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(20,223.7269);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(21,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(22,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetBinContent(23,6.37178e-06);
   htotpass_cat2_2016_fit_b_copy__29->SetMaximum(1990.443);
   htotpass_cat2_2016_fit_b_copy__29->SetEntries(92);
   htotpass_cat2_2016_fit_b_copy__29->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b_copy__29->SetFillColor(ci);
   htotpass_cat2_2016_fit_b_copy__29->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b_copy__29->SetLineColor(ci);
   htotpass_cat2_2016_fit_b_copy__29->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b_copy__29->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b_copy__29->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b_copy__29->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__29->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b_copy__29->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__29->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b_copy__29->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b_copy__29->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b_copy__29->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__29->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__29->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b_copy__29->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b_copy__29->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__29->Draw("sameaxis");
   p12pass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_fit_b
   TPad *p22pass_cat2_2016_fit_b = new TPad("p22pass_cat2_2016_fit_b", "p22pass_cat2_2016_fit_b",0,0,1,0.3);
   p22pass_cat2_2016_fit_b->Draw();
   p22pass_cat2_2016_fit_b->cd();
   p22pass_cat2_2016_fit_b->Range(18.24324,-11.44768,197.973,10.04459);
   p22pass_cat2_2016_fit_b->SetFillColor(0);
   p22pass_cat2_2016_fit_b->SetBorderMode(0);
   p22pass_cat2_2016_fit_b->SetBorderSize(2);
   p22pass_cat2_2016_fit_b->SetTickx(1);
   p22pass_cat2_2016_fit_b->SetTicky(1);
   p22pass_cat2_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat2_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat2_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b__30 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b__30","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMaximum(8.969975);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__30->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__30->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_8 = new TH1F("hstack_stack_8","hstack",23,40,201);
   hstack_stack_8->SetMinimum(0);
   hstack_stack_8->SetMaximum(6.222183);
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
   
   
   TH1F *sigHistResidualwqqpass_cat2_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat2_2016_fit_b_stack_1","wqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(2,0.06373695);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(3,0.2567409);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(4,0.6989747);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(5,1.153472);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(6,2.919911);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(7,3.44414);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(8,1.998033);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(9,1.071865);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(10,0.3150691);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(14,1.127011e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(15,1.2219e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(16,1.294974e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(17,1.445203e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(18,1.621217e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(19,1.747801e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetBinContent(20,2.115802e-07);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat2_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat2_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat2_2016_fit_b_stack_2","zqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(2,0.05895377);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(3,0.08566824);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(4,0.3582312);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(5,0.7267355);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(6,1.47423);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(7,2.481749);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(8,3.771523);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(9,3.141886);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(10,1.836594);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(14,1.287e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(15,1.395358e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(16,1.478806e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(17,1.650361e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(18,1.851362e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(19,1.995916e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetBinContent(20,2.416158e-07);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat2_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3","hqq125 in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_fit_b__31 = new TH1F("iOneWithErrorsLinepass_cat2_2016_fit_b__31","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fx3008[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fy3008[23] = {
   0,
   0.8148134,
   -0.3712425,
   -0.8193543,
   1.238558,
   4.846528,
   5.979983,
   4.74267,
   3.448543,
   2.101165,
   0,
   0,
   0,
   -0.4843157,
   -0.7757565,
   -0.01227533,
   -0.5214307,
   -1.190661,
   0.6864449,
   -1.829836,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_felx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fely3008[23] = {
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
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fehx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fehy3008[23] = {
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
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_fit_b_fx3008,Graph_from_iRatiopass_cat2_2016_fit_b_fy3008,Graph_from_iRatiopass_cat2_2016_fit_b_felx3008,Graph_from_iRatiopass_cat2_2016_fit_b_fehx3008,Graph_from_iRatiopass_cat2_2016_fit_b_fely3008,Graph_from_iRatiopass_cat2_2016_fit_b_fehy3008);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetMinimum(-3.810818);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetMaximum(7.960965);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b_copy__32 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b_copy__32","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMaximum(8.969975);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetEntries(184);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->Draw("sameaxis");
   p22pass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
   cpass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
   cpass_cat2_2016_fit_b->SetSelected(cpass_cat2_2016_fit_b);
}
