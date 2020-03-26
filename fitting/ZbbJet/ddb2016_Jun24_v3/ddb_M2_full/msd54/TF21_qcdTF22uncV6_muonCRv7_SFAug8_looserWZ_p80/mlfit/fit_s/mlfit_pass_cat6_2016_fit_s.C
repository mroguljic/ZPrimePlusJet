void mlfit_pass_cat6_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_s/cpass_cat6_2016_fit_s
//=========  (Mon Sep 30 17:21:43 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat6_2016_fit_s = new TCanvas("cpass_cat6_2016_fit_s", "cpass_cat6_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat6_2016_fit_s->SetHighLightColor(2);
   cpass_cat6_2016_fit_s->Range(0,0,1,1);
   cpass_cat6_2016_fit_s->SetFillColor(0);
   cpass_cat6_2016_fit_s->SetBorderMode(0);
   cpass_cat6_2016_fit_s->SetBorderSize(2);
   cpass_cat6_2016_fit_s->SetTickx(1);
   cpass_cat6_2016_fit_s->SetTicky(1);
   cpass_cat6_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat6_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat6_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat6_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat6_2016_fit_s
   TPad *p12pass_cat6_2016_fit_s = new TPad("p12pass_cat6_2016_fit_s", "p12pass_cat6_2016_fit_s",0,0.3,1,1);
   p12pass_cat6_2016_fit_s->Draw();
   p12pass_cat6_2016_fit_s->cd();
   p12pass_cat6_2016_fit_s->Range(13.7027,-5.767412,221.8108,282.6032);
   p12pass_cat6_2016_fit_s->SetFillColor(0);
   p12pass_cat6_2016_fit_s->SetBorderMode(0);
   p12pass_cat6_2016_fit_s->SetBorderSize(2);
   p12pass_cat6_2016_fit_s->SetTickx(1);
   p12pass_cat6_2016_fit_s->SetTicky(1);
   p12pass_cat6_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat6_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat6_2016_fit_s__89 = new TH1F("htotpass_cat6_2016_fit_s__89","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s__89->SetBinContent(1,1.521694e-06);
   htotpass_cat6_2016_fit_s__89->SetBinContent(2,1.521694e-06);
   htotpass_cat6_2016_fit_s__89->SetBinContent(3,149.8285);
   htotpass_cat6_2016_fit_s__89->SetBinContent(4,152.2674);
   htotpass_cat6_2016_fit_s__89->SetBinContent(5,151.2592);
   htotpass_cat6_2016_fit_s__89->SetBinContent(6,167.8832);
   htotpass_cat6_2016_fit_s__89->SetBinContent(7,169.1774);
   htotpass_cat6_2016_fit_s__89->SetBinContent(8,161.2);
   htotpass_cat6_2016_fit_s__89->SetBinContent(9,137.573);
   htotpass_cat6_2016_fit_s__89->SetBinContent(10,114.7414);
   htotpass_cat6_2016_fit_s__89->SetBinContent(11,100.5058);
   htotpass_cat6_2016_fit_s__89->SetBinContent(12,94.22674);
   htotpass_cat6_2016_fit_s__89->SetBinContent(13,86.17068);
   htotpass_cat6_2016_fit_s__89->SetBinContent(14,79.95351);
   htotpass_cat6_2016_fit_s__89->SetBinContent(15,74.72425);
   htotpass_cat6_2016_fit_s__89->SetBinContent(16,71.21825);
   htotpass_cat6_2016_fit_s__89->SetBinContent(17,66.25921);
   htotpass_cat6_2016_fit_s__89->SetBinContent(18,62.42778);
   htotpass_cat6_2016_fit_s__89->SetBinContent(19,60.53575);
   htotpass_cat6_2016_fit_s__89->SetBinContent(20,55.40417);
   htotpass_cat6_2016_fit_s__89->SetBinContent(21,52.26152);
   htotpass_cat6_2016_fit_s__89->SetBinContent(22,48.99588);
   htotpass_cat6_2016_fit_s__89->SetBinContent(23,46.56806);
   htotpass_cat6_2016_fit_s__89->SetMinimum(0);
   htotpass_cat6_2016_fit_s__89->SetMaximum(253.7661);
   htotpass_cat6_2016_fit_s__89->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__89->SetFillColor(ci);
   htotpass_cat6_2016_fit_s__89->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__89->SetLineColor(ci);
   htotpass_cat6_2016_fit_s__89->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s__89->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s__89->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__89->Draw("");
   
   TH1F *htot_linepass_cat6_2016_fit_s__90 = new TH1F("htot_linepass_cat6_2016_fit_s__90","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(1,1.521694e-06);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(2,1.521694e-06);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(3,149.8285);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(4,152.2674);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(5,151.2592);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(6,167.8832);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(7,169.1774);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(8,161.2);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(9,137.573);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(10,114.7414);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(11,100.5058);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(12,94.22674);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(13,86.17068);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(14,79.95351);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(15,74.72425);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(16,71.21825);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(17,66.25921);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(18,62.42778);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(19,60.53575);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(20,55.40417);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(21,52.26152);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(22,48.99588);
   htot_linepass_cat6_2016_fit_s__90->SetBinContent(23,46.56806);
   htot_linepass_cat6_2016_fit_s__90->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_s__90->SetFillColor(ci);
   htot_linepass_cat6_2016_fit_s__90->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_s__90->SetLineColor(ci);
   htot_linepass_cat6_2016_fit_s__90->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_fit_s__90->SetMarkerColor(ci);
   htot_linepass_cat6_2016_fit_s__90->SetMarkerSize(0);
   htot_linepass_cat6_2016_fit_s__90->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_fit_s__90->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_fit_s__90->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_s__90->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_s__90->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_s__90->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_s__90->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_fit_s__90->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_s__90->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_fit_s__90->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_fit_s__90->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_fit_s__90->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_s__90->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_s__90->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_s__90->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_s__90->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_s__90->Draw("histsame");
   
   TH1F *qcd__91 = new TH1F("qcd__91","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__91->SetBinContent(3,147.7566);
   qcd__91->SetBinContent(4,142.7713);
   qcd__91->SetBinContent(5,136.5866);
   qcd__91->SetBinContent(6,131.2828);
   qcd__91->SetBinContent(7,120.8488);
   qcd__91->SetBinContent(8,112.0235);
   qcd__91->SetBinContent(9,102.8625);
   qcd__91->SetBinContent(10,97.2);
   qcd__91->SetBinContent(11,90.01458);
   qcd__91->SetBinContent(12,85.06693);
   qcd__91->SetBinContent(13,79.24213);
   qcd__91->SetBinContent(14,74.65083);
   qcd__91->SetBinContent(15,70.56516);
   qcd__91->SetBinContent(16,66.46117);
   qcd__91->SetBinContent(17,64.82915);
   qcd__91->SetBinContent(18,61.37905);
   qcd__91->SetBinContent(19,59.01539);
   qcd__91->SetBinContent(20,53.96423);
   qcd__91->SetBinContent(21,51.87721);
   qcd__91->SetBinContent(22,48.99588);
   qcd__91->SetBinContent(23,46.22457);
   qcd__91->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__91->SetLineColor(ci);
   qcd__91->SetLineStyle(2);
   qcd__91->SetLineWidth(2);
   qcd__91->GetXaxis()->SetTitle("x");
   qcd__91->GetXaxis()->SetLabelFont(42);
   qcd__91->GetXaxis()->SetLabelSize(0.035);
   qcd__91->GetXaxis()->SetTitleSize(0.035);
   qcd__91->GetXaxis()->SetTitleFont(42);
   qcd__91->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__91->GetYaxis()->SetLabelFont(42);
   qcd__91->GetYaxis()->SetLabelSize(0.035);
   qcd__91->GetYaxis()->SetTitleSize(0.035);
   qcd__91->GetYaxis()->SetTitleOffset(0);
   qcd__91->GetYaxis()->SetTitleFont(42);
   qcd__91->GetZaxis()->SetLabelFont(42);
   qcd__91->GetZaxis()->SetLabelSize(0.035);
   qcd__91->GetZaxis()->SetTitleSize(0.035);
   qcd__91->GetZaxis()->SetTitleFont(42);
   qcd__91->Draw("hist sames");
   
   TH1F *htotpass_cat6_2016_fit_s__92 = new TH1F("htotpass_cat6_2016_fit_s__92","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s__92->SetBinContent(1,1.521694e-06);
   htotpass_cat6_2016_fit_s__92->SetBinContent(2,1.521694e-06);
   htotpass_cat6_2016_fit_s__92->SetBinContent(3,149.8285);
   htotpass_cat6_2016_fit_s__92->SetBinContent(4,152.2674);
   htotpass_cat6_2016_fit_s__92->SetBinContent(5,151.2592);
   htotpass_cat6_2016_fit_s__92->SetBinContent(6,167.8832);
   htotpass_cat6_2016_fit_s__92->SetBinContent(7,169.1774);
   htotpass_cat6_2016_fit_s__92->SetBinContent(8,161.2);
   htotpass_cat6_2016_fit_s__92->SetBinContent(9,137.573);
   htotpass_cat6_2016_fit_s__92->SetBinContent(10,114.7414);
   htotpass_cat6_2016_fit_s__92->SetBinContent(11,100.5058);
   htotpass_cat6_2016_fit_s__92->SetBinContent(12,94.22674);
   htotpass_cat6_2016_fit_s__92->SetBinContent(13,86.17068);
   htotpass_cat6_2016_fit_s__92->SetBinContent(14,79.95351);
   htotpass_cat6_2016_fit_s__92->SetBinContent(15,74.72425);
   htotpass_cat6_2016_fit_s__92->SetBinContent(16,71.21825);
   htotpass_cat6_2016_fit_s__92->SetBinContent(17,66.25921);
   htotpass_cat6_2016_fit_s__92->SetBinContent(18,62.42778);
   htotpass_cat6_2016_fit_s__92->SetBinContent(19,60.53575);
   htotpass_cat6_2016_fit_s__92->SetBinContent(20,55.40417);
   htotpass_cat6_2016_fit_s__92->SetBinContent(21,52.26152);
   htotpass_cat6_2016_fit_s__92->SetBinContent(22,48.99588);
   htotpass_cat6_2016_fit_s__92->SetBinContent(23,46.56806);
   htotpass_cat6_2016_fit_s__92->SetMinimum(0);
   htotpass_cat6_2016_fit_s__92->SetMaximum(253.7661);
   htotpass_cat6_2016_fit_s__92->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__92->SetFillColor(ci);
   htotpass_cat6_2016_fit_s__92->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__92->SetLineColor(ci);
   htotpass_cat6_2016_fit_s__92->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s__92->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s__92->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s__92->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__92->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s__92->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__92->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s__92->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s__92->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s__92->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__92->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__92->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__92->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__92->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__92->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis23[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_23 = new TH1F("hstackMC_stack_23","hstackMC",23, xAxis23);
   hstackMC_stack_23->SetMinimum(0);
   hstackMC_stack_23->SetMaximum(52.09072);
   hstackMC_stack_23->SetDirectory(0);
   hstackMC_stack_23->SetStats(0);
   hstackMC_stack_23->SetLineStyle(0);
   hstackMC_stack_23->SetMarkerStyle(20);
   hstackMC_stack_23->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_23->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_23->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_23->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_23->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_23->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_23->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_23->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_23->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_23->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_23->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_23->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_23->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_23->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_23->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_23->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_23->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_23);
   
   Double_t xAxis24[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat6_2016_pass_cat6",23, xAxis24);
   tqq_stack_1->SetBinContent(3,0.3551202);
   tqq_stack_1->SetBinContent(4,0.6871221);
   tqq_stack_1->SetBinContent(5,1.461118);
   tqq_stack_1->SetBinContent(6,3.099978);
   tqq_stack_1->SetBinContent(7,5.466161);
   tqq_stack_1->SetBinContent(8,3.28759);
   tqq_stack_1->SetBinContent(9,2.049846);
   tqq_stack_1->SetBinContent(10,1.03696);
   tqq_stack_1->SetBinContent(11,2.464962);
   tqq_stack_1->SetBinContent(12,3.463025);
   tqq_stack_1->SetBinContent(13,2.835649);
   tqq_stack_1->SetBinContent(14,3.010092);
   tqq_stack_1->SetBinContent(15,2.701787);
   tqq_stack_1->SetBinContent(16,4.092264);
   tqq_stack_1->SetBinContent(17,1.430053);
   tqq_stack_1->SetBinContent(18,1.048727);
   tqq_stack_1->SetBinContent(19,1.520357);
   tqq_stack_1->SetBinContent(20,1.439938);
   tqq_stack_1->SetBinContent(21,0.3843055);
   tqq_stack_1->SetBinContent(23,0.3434915);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat6_2016_pass_cat6",23,40,201);
   wqq_stack_2->SetBinContent(1,5.010339e-07);
   wqq_stack_2->SetBinContent(2,5.010339e-07);
   wqq_stack_2->SetBinContent(3,1.018803);
   wqq_stack_2->SetBinContent(4,6.597479);
   wqq_stack_2->SetBinContent(5,10.19014);
   wqq_stack_2->SetBinContent(6,16.83677);
   wqq_stack_2->SetBinContent(7,18.74508);
   wqq_stack_2->SetBinContent(8,11.67676);
   wqq_stack_2->SetBinContent(9,5.705629);
   wqq_stack_2->SetBinContent(10,0.8056156);
   wqq_stack_2->SetBinContent(11,5.010339e-07);
   wqq_stack_2->SetBinContent(12,5.010339e-07);
   wqq_stack_2->SetBinContent(13,5.010339e-07);
   wqq_stack_2->SetBinContent(14,5.010339e-07);
   wqq_stack_2->SetBinContent(15,5.010339e-07);
   wqq_stack_2->SetBinContent(16,5.010339e-07);
   wqq_stack_2->SetBinContent(17,5.010339e-07);
   wqq_stack_2->SetBinContent(18,5.010339e-07);
   wqq_stack_2->SetBinContent(19,5.010339e-07);
   wqq_stack_2->SetBinContent(20,5.010339e-07);
   wqq_stack_2->SetBinContent(21,5.010339e-07);
   wqq_stack_2->SetBinContent(22,5.010339e-07);
   wqq_stack_2->SetBinContent(23,5.010339e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat6_2016_pass_cat6",23,40,201);
   zqq_stack_3->SetBinContent(1,1.02066e-06);
   zqq_stack_3->SetBinContent(2,1.02066e-06);
   zqq_stack_3->SetBinContent(3,0.6979715);
   zqq_stack_3->SetBinContent(4,2.211532);
   zqq_stack_3->SetBinContent(5,3.021334);
   zqq_stack_3->SetBinContent(6,16.6636);
   zqq_stack_3->SetBinContent(7,24.11737);
   zqq_stack_3->SetBinContent(8,34.21217);
   zqq_stack_3->SetBinContent(9,26.95507);
   zqq_stack_3->SetBinContent(10,15.6988);
   zqq_stack_3->SetBinContent(11,8.026282);
   zqq_stack_3->SetBinContent(12,5.696788);
   zqq_stack_3->SetBinContent(13,4.092909);
   zqq_stack_3->SetBinContent(14,2.29258);
   zqq_stack_3->SetBinContent(15,1.457298);
   zqq_stack_3->SetBinContent(16,0.6648141);
   zqq_stack_3->SetBinContent(17,1.02066e-06);
   zqq_stack_3->SetBinContent(18,1.02066e-06);
   zqq_stack_3->SetBinContent(19,1.02066e-06);
   zqq_stack_3->SetBinContent(20,1.02066e-06);
   zqq_stack_3->SetBinContent(21,1.02066e-06);
   zqq_stack_3->SetBinContent(22,1.02066e-06);
   zqq_stack_3->SetBinContent(23,1.02066e-06);
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
   
   TH1F *hsigpass_cat6_2016_fit_s_stack_4 = new TH1F("hsigpass_cat6_2016_fit_s_stack_4","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(1,1.647812e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(2,1.647812e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(3,1.647812e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(4,0.004401417);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(5,0.03819188);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(6,0.0729387);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(7,0.1418152);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(8,0.4336895);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(9,0.3826813);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(10,2.796141);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(11,3.816499);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(12,5.252913);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(13,5.205887);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(14,2.501437);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(15,2.507221);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(16,0.05470382);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(17,0.2572892);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(18,0.01196109);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(19,0.002035432);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(20,0.02658977);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(21,0.0170021);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(22,0.01677938);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(23,0.0079313);
   hsigpass_cat6_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat6_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3023[23] = {
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
   Double_t data_copy_fy3023[23] = {
   0,
   0,
   155,
   137,
   146,
   175,
   184,
   153,
   141,
   127,
   87,
   99,
   101,
   76,
   80,
   74,
   66,
   49,
   75,
   64,
   49,
   43,
   41};
   Double_t data_copy_felx3023[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3023[23] = {
   1.841055,
   1.841055,
   13.47698,
   12.73347,
   13.11093,
   14.25428,
   14.58956,
   13.39657,
   12.90271,
   12.29929,
   10.36336,
   10.98363,
   11.0833,
   9.756266,
   9.981777,
   9.641304,
   9.165286,
   8.047802,
   9.698975,
   9.041881,
   8.047802,
   7.608436,
   7.45534};
   Double_t data_copy_fehx3023[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3023[23] = {
   0,
   0,
   12.43672,
   11.69064,
   12.06945,
   13.21639,
   13.55261,
   12.35605,
   11.86049,
   11.25481,
   9.309608,
   9.933246,
   10.03342,
   8.69875,
   8.925719,
   8.583016,
   8.103564,
   6.976163,
   8.641077,
   7.979201,
   6.976163,
   6.531962,
   6.377022};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3023,data_copy_fy3023,data_copy_felx3023,data_copy_fehx3023,data_copy_fely3023,data_copy_fehy3023);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat6_2016_pass_cat6");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3023 = new TH1F("Graph_data_copy3023","WH_hbb in cat6_2016_pass_cat6",100,28.1,212.9);
   Graph_data_copy3023->SetMinimum(0);
   Graph_data_copy3023->SetMaximum(217.492);
   Graph_data_copy3023->SetDirectory(0);
   Graph_data_copy3023->SetStats(0);
   Graph_data_copy3023->SetLineStyle(0);
   Graph_data_copy3023->SetMarkerStyle(20);
   Graph_data_copy3023->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3023->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3023->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3023->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3023->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3023->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3023->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3023->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3023->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3023->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3023->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3023);
   
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
   entry=leg->AddEntry("htotpass_cat6_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat6_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"800 < p_{T} < 1200 GeV");
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
   
   TH1F *htotpass_cat6_2016_fit_s_copy__93 = new TH1F("htotpass_cat6_2016_fit_s_copy__93","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(1,1.521694e-06);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(2,1.521694e-06);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(3,149.8285);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(4,152.2674);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(5,151.2592);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(6,167.8832);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(7,169.1774);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(8,161.2);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(9,137.573);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(10,114.7414);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(11,100.5058);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(12,94.22674);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(13,86.17068);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(14,79.95351);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(15,74.72425);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(16,71.21825);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(17,66.25921);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(18,62.42778);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(19,60.53575);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(20,55.40417);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(21,52.26152);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(22,48.99588);
   htotpass_cat6_2016_fit_s_copy__93->SetBinContent(23,46.56806);
   htotpass_cat6_2016_fit_s_copy__93->SetMaximum(253.7661);
   htotpass_cat6_2016_fit_s_copy__93->SetEntries(92);
   htotpass_cat6_2016_fit_s_copy__93->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s_copy__93->SetFillColor(ci);
   htotpass_cat6_2016_fit_s_copy__93->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s_copy__93->SetLineColor(ci);
   htotpass_cat6_2016_fit_s_copy__93->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s_copy__93->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s_copy__93->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s_copy__93->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__93->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s_copy__93->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__93->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s_copy__93->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s_copy__93->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s_copy__93->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__93->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__93->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s_copy__93->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s_copy__93->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__93->Draw("sameaxis");
   p12pass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_s
   TPad *p22pass_cat6_2016_fit_s = new TPad("p22pass_cat6_2016_fit_s", "p22pass_cat6_2016_fit_s",0,0,1,0.3);
   p22pass_cat6_2016_fit_s->Draw();
   p22pass_cat6_2016_fit_s->cd();
   p22pass_cat6_2016_fit_s->Range(13.7027,-10.04498,221.8108,6.771613);
   p22pass_cat6_2016_fit_s->SetFillColor(0);
   p22pass_cat6_2016_fit_s->SetBorderMode(0);
   p22pass_cat6_2016_fit_s->SetBorderSize(2);
   p22pass_cat6_2016_fit_s->SetTickx(1);
   p22pass_cat6_2016_fit_s->SetTicky(1);
   p22pass_cat6_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat6_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat6_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s__94 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s__94","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMaximum(5.930784);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__94->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__94->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_24 = new TH1F("hstack_stack_24","hstack",23,40,201);
   hstack_stack_24->SetMinimum(0);
   hstack_stack_24->SetMaximum(3.936433);
   hstack_stack_24->SetDirectory(0);
   hstack_stack_24->SetStats(0);
   hstack_stack_24->SetLineStyle(0);
   hstack_stack_24->SetMarkerStyle(20);
   hstack_stack_24->GetXaxis()->SetLabelFont(42);
   hstack_stack_24->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_24->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_24->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_24->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_24->GetXaxis()->SetTitleFont(42);
   hstack_stack_24->GetYaxis()->SetLabelFont(42);
   hstack_stack_24->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_24->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_24->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_24->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_24->GetYaxis()->SetTitleFont(42);
   hstack_stack_24->GetZaxis()->SetLabelFont(42);
   hstack_stack_24->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_24->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_24->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_24->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_24);
   
   
   TH1F *sigHistResidualwqqpass_cat6_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat6_2016_fit_s_stack_1","wqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(3,0.08191893);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(4,0.5643384);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(5,0.8442919);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(6,1.273931);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(7,1.383134);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(8,0.9450238);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(9,0.4810616);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(10,0.07157969);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(11,5.381901e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(12,5.04401e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(13,4.993651e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(14,5.759837e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(15,5.613373e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(16,5.837504e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(17,6.182883e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(18,7.182084e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(19,5.798281e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(20,6.279249e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(21,7.182084e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(22,7.670496e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(23,7.856863e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat6_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat6_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat6_2016_fit_s_stack_2","zqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(3,0.05612184);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(4,0.1891712);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(5,0.2503291);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(6,1.260829);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(7,1.779537);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(8,2.768861);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(9,2.272677);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(10,1.394853);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(11,0.8621504);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(12,0.5735072);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(13,0.4079278);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(14,0.2635528);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(15,0.1632695);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(16,0.07745693);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(17,1.259519e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(18,1.463067e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(19,1.181172e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(20,1.27915e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(21,1.463067e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(22,1.562562e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(23,1.600527e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat6_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(3,1.324957e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(4,0.0003764905);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(5,0.003164344);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(6,0.005518808);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(7,0.01046405);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(8,0.03509938);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(9,0.03226521);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(10,0.2484397);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(11,0.4099527);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(12,0.5288215);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(13,0.5188549);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(14,0.2875628);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(15,0.2808985);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(16,0.006373497);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(17,0.03175012);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(18,0.001714565);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(19,0.0002355531);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(20,0.003332385);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(21,0.00243717);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(22,0.002568812);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(23,0.001243731);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_s__95 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_s__95","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fx3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fy3024[23] = {
   0,
   0,
   0.5111152,
   -0.5524409,
   0.6065384,
   2.849473,
   3.953856,
   2.813325,
   2.796905,
   2.338593,
   -0.5885904,
   0.9532406,
   1.707273,
   -0.1909386,
   0.674534,
   0.3574798,
   -0.031987,
   -1.924808,
   1.491318,
   0.9506687,
   -0.4675229,
   -0.9179289,
   -0.873144};
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_felx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fely3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fehx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fehy3024[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_s_fx3024,Graph_from_iRatiopass_cat6_2016_fit_s_fy3024,Graph_from_iRatiopass_cat6_2016_fit_s_felx3024,Graph_from_iRatiopass_cat6_2016_fit_s_fehx3024,Graph_from_iRatiopass_cat6_2016_fit_s_fely3024,Graph_from_iRatiopass_cat6_2016_fit_s_fehy3024);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetMinimum(-3.712674);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetMaximum(5.741722);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s_copy__96 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s_copy__96","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMaximum(5.930784);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->Draw("sameaxis");
   p22pass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
   cpass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
   cpass_cat6_2016_fit_s->SetSelected(cpass_cat6_2016_fit_s);
}
