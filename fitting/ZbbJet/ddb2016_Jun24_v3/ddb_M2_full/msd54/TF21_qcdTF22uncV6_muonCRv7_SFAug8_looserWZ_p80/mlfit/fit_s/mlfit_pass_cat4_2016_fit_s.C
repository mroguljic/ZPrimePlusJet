void mlfit_pass_cat4_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat4_2016_fit_s/cpass_cat4_2016_fit_s
//=========  (Mon Sep 30 17:21:42 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_fit_s = new TCanvas("cpass_cat4_2016_fit_s", "cpass_cat4_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_fit_s->SetHighLightColor(2);
   cpass_cat4_2016_fit_s->Range(0,0,1,1);
   cpass_cat4_2016_fit_s->SetFillColor(0);
   cpass_cat4_2016_fit_s->SetBorderMode(0);
   cpass_cat4_2016_fit_s->SetBorderSize(2);
   cpass_cat4_2016_fit_s->SetTickx(1);
   cpass_cat4_2016_fit_s->SetTicky(1);
   cpass_cat4_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat4_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat4_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat4_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_fit_s
   TPad *p12pass_cat4_2016_fit_s = new TPad("p12pass_cat4_2016_fit_s", "p12pass_cat4_2016_fit_s",0,0.3,1,1);
   p12pass_cat4_2016_fit_s->Draw();
   p12pass_cat4_2016_fit_s->cd();
   p12pass_cat4_2016_fit_s->Range(13.7027,-18.41284,221.8108,902.2292);
   p12pass_cat4_2016_fit_s->SetFillColor(0);
   p12pass_cat4_2016_fit_s->SetBorderMode(0);
   p12pass_cat4_2016_fit_s->SetBorderSize(2);
   p12pass_cat4_2016_fit_s->SetTickx(1);
   p12pass_cat4_2016_fit_s->SetTicky(1);
   p12pass_cat4_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat4_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_fit_s__57 = new TH1F("htotpass_cat4_2016_fit_s__57","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s__57->SetBinContent(1,3.445606e-06);
   htotpass_cat4_2016_fit_s__57->SetBinContent(2,3.445606e-06);
   htotpass_cat4_2016_fit_s__57->SetBinContent(3,459.0755);
   htotpass_cat4_2016_fit_s__57->SetBinContent(4,473.0593);
   htotpass_cat4_2016_fit_s__57->SetBinContent(5,496.2549);
   htotpass_cat4_2016_fit_s__57->SetBinContent(6,522.7915);
   htotpass_cat4_2016_fit_s__57->SetBinContent(7,540.11);
   htotpass_cat4_2016_fit_s__57->SetBinContent(8,506.6559);
   htotpass_cat4_2016_fit_s__57->SetBinContent(9,441.7577);
   htotpass_cat4_2016_fit_s__57->SetBinContent(10,392.7596);
   htotpass_cat4_2016_fit_s__57->SetBinContent(11,352.1745);
   htotpass_cat4_2016_fit_s__57->SetBinContent(12,331.2689);
   htotpass_cat4_2016_fit_s__57->SetBinContent(13,313.846);
   htotpass_cat4_2016_fit_s__57->SetBinContent(14,296.1373);
   htotpass_cat4_2016_fit_s__57->SetBinContent(15,273.8514);
   htotpass_cat4_2016_fit_s__57->SetBinContent(16,249.4438);
   htotpass_cat4_2016_fit_s__57->SetBinContent(17,230.3571);
   htotpass_cat4_2016_fit_s__57->SetBinContent(18,200.9084);
   htotpass_cat4_2016_fit_s__57->SetBinContent(19,178.2898);
   htotpass_cat4_2016_fit_s__57->SetBinContent(20,151.2171);
   htotpass_cat4_2016_fit_s__57->SetBinContent(21,128.8155);
   htotpass_cat4_2016_fit_s__57->SetBinContent(22,107.3132);
   htotpass_cat4_2016_fit_s__57->SetBinContent(23,85.41553);
   htotpass_cat4_2016_fit_s__57->SetMinimum(0);
   htotpass_cat4_2016_fit_s__57->SetMaximum(810.165);
   htotpass_cat4_2016_fit_s__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__57->SetFillColor(ci);
   htotpass_cat4_2016_fit_s__57->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__57->SetLineColor(ci);
   htotpass_cat4_2016_fit_s__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s__57->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s__57->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__57->Draw("");
   
   TH1F *htot_linepass_cat4_2016_fit_s__58 = new TH1F("htot_linepass_cat4_2016_fit_s__58","wqq in cat4_2016_pass_cat4",23,40,201);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(1,3.445606e-06);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(2,3.445606e-06);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(3,459.0755);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(4,473.0593);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(5,496.2549);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(6,522.7915);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(7,540.11);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(8,506.6559);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(9,441.7577);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(10,392.7596);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(11,352.1745);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(12,331.2689);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(13,313.846);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(14,296.1373);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(15,273.8514);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(16,249.4438);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(17,230.3571);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(18,200.9084);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(19,178.2898);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(20,151.2171);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(21,128.8155);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(22,107.3132);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(23,85.41553);
   htot_linepass_cat4_2016_fit_s__58->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_s__58->SetFillColor(ci);
   htot_linepass_cat4_2016_fit_s__58->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_s__58->SetLineColor(ci);
   htot_linepass_cat4_2016_fit_s__58->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat4_2016_fit_s__58->SetMarkerColor(ci);
   htot_linepass_cat4_2016_fit_s__58->SetMarkerSize(0);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetRange(2,23);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__58->Draw("histsame");
   
   TH1F *qcd__59 = new TH1F("qcd__59","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__59->SetBinContent(3,454.6883);
   qcd__59->SetBinContent(4,456.4781);
   qcd__59->SetBinContent(5,447.9153);
   qcd__59->SetBinContent(6,423.4837);
   qcd__59->SetBinContent(7,406.8275);
   qcd__59->SetBinContent(8,388.5009);
   qcd__59->SetBinContent(9,361.7599);
   qcd__59->SetBinContent(10,348.574);
   qcd__59->SetBinContent(11,333.2958);
   qcd__59->SetBinContent(12,317.1833);
   qcd__59->SetBinContent(13,300.2613);
   qcd__59->SetBinContent(14,283.0637);
   qcd__59->SetBinContent(15,268.9156);
   qcd__59->SetBinContent(16,243.0957);
   qcd__59->SetBinContent(17,226.9142);
   qcd__59->SetBinContent(18,198.1994);
   qcd__59->SetBinContent(19,174.8541);
   qcd__59->SetBinContent(20,149.2113);
   qcd__59->SetBinContent(21,127.3983);
   qcd__59->SetBinContent(22,106.6628);
   qcd__59->SetBinContent(23,85.41553);
   qcd__59->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__59->SetLineColor(ci);
   qcd__59->SetLineStyle(2);
   qcd__59->SetLineWidth(2);
   qcd__59->GetXaxis()->SetTitle("x");
   qcd__59->GetXaxis()->SetLabelFont(42);
   qcd__59->GetXaxis()->SetLabelSize(0.035);
   qcd__59->GetXaxis()->SetTitleSize(0.035);
   qcd__59->GetXaxis()->SetTitleFont(42);
   qcd__59->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__59->GetYaxis()->SetLabelFont(42);
   qcd__59->GetYaxis()->SetLabelSize(0.035);
   qcd__59->GetYaxis()->SetTitleSize(0.035);
   qcd__59->GetYaxis()->SetTitleOffset(0);
   qcd__59->GetYaxis()->SetTitleFont(42);
   qcd__59->GetZaxis()->SetLabelFont(42);
   qcd__59->GetZaxis()->SetLabelSize(0.035);
   qcd__59->GetZaxis()->SetTitleSize(0.035);
   qcd__59->GetZaxis()->SetTitleFont(42);
   qcd__59->Draw("hist sames");
   
   TH1F *htotpass_cat4_2016_fit_s__60 = new TH1F("htotpass_cat4_2016_fit_s__60","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s__60->SetBinContent(1,3.445606e-06);
   htotpass_cat4_2016_fit_s__60->SetBinContent(2,3.445606e-06);
   htotpass_cat4_2016_fit_s__60->SetBinContent(3,459.0755);
   htotpass_cat4_2016_fit_s__60->SetBinContent(4,473.0593);
   htotpass_cat4_2016_fit_s__60->SetBinContent(5,496.2549);
   htotpass_cat4_2016_fit_s__60->SetBinContent(6,522.7915);
   htotpass_cat4_2016_fit_s__60->SetBinContent(7,540.11);
   htotpass_cat4_2016_fit_s__60->SetBinContent(8,506.6559);
   htotpass_cat4_2016_fit_s__60->SetBinContent(9,441.7577);
   htotpass_cat4_2016_fit_s__60->SetBinContent(10,392.7596);
   htotpass_cat4_2016_fit_s__60->SetBinContent(11,352.1745);
   htotpass_cat4_2016_fit_s__60->SetBinContent(12,331.2689);
   htotpass_cat4_2016_fit_s__60->SetBinContent(13,313.846);
   htotpass_cat4_2016_fit_s__60->SetBinContent(14,296.1373);
   htotpass_cat4_2016_fit_s__60->SetBinContent(15,273.8514);
   htotpass_cat4_2016_fit_s__60->SetBinContent(16,249.4438);
   htotpass_cat4_2016_fit_s__60->SetBinContent(17,230.3571);
   htotpass_cat4_2016_fit_s__60->SetBinContent(18,200.9084);
   htotpass_cat4_2016_fit_s__60->SetBinContent(19,178.2898);
   htotpass_cat4_2016_fit_s__60->SetBinContent(20,151.2171);
   htotpass_cat4_2016_fit_s__60->SetBinContent(21,128.8155);
   htotpass_cat4_2016_fit_s__60->SetBinContent(22,107.3132);
   htotpass_cat4_2016_fit_s__60->SetBinContent(23,85.41553);
   htotpass_cat4_2016_fit_s__60->SetMinimum(0);
   htotpass_cat4_2016_fit_s__60->SetMaximum(810.165);
   htotpass_cat4_2016_fit_s__60->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__60->SetFillColor(ci);
   htotpass_cat4_2016_fit_s__60->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__60->SetLineColor(ci);
   htotpass_cat4_2016_fit_s__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s__60->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s__60->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__60->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(0);
   hstackMC_stack_15->SetMaximum(140.2834);
   hstackMC_stack_15->SetDirectory(0);
   hstackMC_stack_15->SetStats(0);
   hstackMC_stack_15->SetLineStyle(0);
   hstackMC_stack_15->SetMarkerStyle(20);
   hstackMC_stack_15->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_15->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_15->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_15->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_15->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_15);
   
   Double_t xAxis16[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat4_2016_pass_cat4",23, xAxis16);
   tqq_stack_1->SetBinContent(3,2.448617);
   tqq_stack_1->SetBinContent(4,2.438469);
   tqq_stack_1->SetBinContent(5,7.115867);
   tqq_stack_1->SetBinContent(6,11.60974);
   tqq_stack_1->SetBinContent(7,11.20105);
   tqq_stack_1->SetBinContent(8,11.4026);
   tqq_stack_1->SetBinContent(9,9.637235);
   tqq_stack_1->SetBinContent(10,9.846434);
   tqq_stack_1->SetBinContent(11,9.465104);
   tqq_stack_1->SetBinContent(12,11.48487);
   tqq_stack_1->SetBinContent(13,12.43889);
   tqq_stack_1->SetBinContent(14,12.54066);
   tqq_stack_1->SetBinContent(15,4.935734);
   tqq_stack_1->SetBinContent(16,6.348152);
   tqq_stack_1->SetBinContent(17,3.442834);
   tqq_stack_1->SetBinContent(18,2.708997);
   tqq_stack_1->SetBinContent(19,3.435688);
   tqq_stack_1->SetBinContent(20,2.005816);
   tqq_stack_1->SetBinContent(21,1.41715);
   tqq_stack_1->SetBinContent(22,0.6503958);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat4_2016_pass_cat4",23,40,201);
   wqq_stack_2->SetBinContent(1,1.40631e-06);
   wqq_stack_2->SetBinContent(2,1.40631e-06);
   wqq_stack_2->SetBinContent(3,1.938531);
   wqq_stack_2->SetBinContent(4,11.73808);
   wqq_stack_2->SetBinContent(5,27.58074);
   wqq_stack_2->SetBinContent(6,53.07591);
   wqq_stack_2->SetBinContent(7,65.27684);
   wqq_stack_2->SetBinContent(8,28.87206);
   wqq_stack_2->SetBinContent(9,9.924293);
   wqq_stack_2->SetBinContent(10,1.908037);
   wqq_stack_2->SetBinContent(11,0.5869996);
   wqq_stack_2->SetBinContent(12,1.40631e-06);
   wqq_stack_2->SetBinContent(13,1.40631e-06);
   wqq_stack_2->SetBinContent(14,1.40631e-06);
   wqq_stack_2->SetBinContent(15,1.40631e-06);
   wqq_stack_2->SetBinContent(16,1.40631e-06);
   wqq_stack_2->SetBinContent(17,1.40631e-06);
   wqq_stack_2->SetBinContent(18,1.40631e-06);
   wqq_stack_2->SetBinContent(19,1.40631e-06);
   wqq_stack_2->SetBinContent(20,1.40631e-06);
   wqq_stack_2->SetBinContent(21,1.40631e-06);
   wqq_stack_2->SetBinContent(22,1.40631e-06);
   wqq_stack_2->SetBinContent(23,1.40631e-06);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat4_2016_pass_cat4",23,40,201);
   zqq_stack_3->SetBinContent(1,2.039295e-06);
   zqq_stack_3->SetBinContent(2,2.039295e-06);
   zqq_stack_3->SetBinContent(3,2.039295e-06);
   zqq_stack_3->SetBinContent(4,2.404597);
   zqq_stack_3->SetBinContent(5,13.64294);
   zqq_stack_3->SetBinContent(6,34.62213);
   zqq_stack_3->SetBinContent(7,56.80464);
   zqq_stack_3->SetBinContent(8,77.88025);
   zqq_stack_3->SetBinContent(9,60.4362);
   zqq_stack_3->SetBinContent(10,32.43114);
   zqq_stack_3->SetBinContent(11,8.82654);
   zqq_stack_3->SetBinContent(12,2.600671);
   zqq_stack_3->SetBinContent(13,1.145837);
   zqq_stack_3->SetBinContent(14,0.5329441);
   zqq_stack_3->SetBinContent(15,2.039295e-06);
   zqq_stack_3->SetBinContent(16,2.039295e-06);
   zqq_stack_3->SetBinContent(17,2.039295e-06);
   zqq_stack_3->SetBinContent(18,2.039295e-06);
   zqq_stack_3->SetBinContent(19,2.039295e-06);
   zqq_stack_3->SetBinContent(20,2.039295e-06);
   zqq_stack_3->SetBinContent(21,2.039295e-06);
   zqq_stack_3->SetBinContent(22,2.039295e-06);
   zqq_stack_3->SetBinContent(23,2.039295e-06);
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
   
   TH1F *hsigpass_cat4_2016_fit_s_stack_4 = new TH1F("hsigpass_cat4_2016_fit_s_stack_4","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(1,4.707215e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(2,4.707215e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(3,0.02533254);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(4,0.4832859);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(5,0.06224726);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(6,0.2479965);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(7,0.3207311);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(8,0.9305069);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(9,2.302923);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(10,4.91813);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(11,9.064941);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(12,14.79929);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(13,15.13982);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(14,10.22238);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(15,5.903176);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(16,2.397969);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(17,0.2344673);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(18,0.07316677);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(19,0.04861131);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(20,0.01370663);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(21,0.03219292);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(22,0.008672934);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(23,0.0163889);
   hsigpass_cat4_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3015[23] = {
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
   Double_t data_copy_fy3015[23] = {
   0,
   0,
   459,
   463,
   482,
   491,
   526,
   488,
   473,
   419,
   402,
   361,
   326,
   335,
   276,
   258,
   272,
   210,
   179,
   139,
   138,
   109,
   92};
   Double_t data_copy_felx3015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3015[23] = {
   1.841055,
   1.841055,
   22.44034,
   22.53342,
   22.97018,
   23.17407,
   23.94975,
   23.10632,
   22.76439,
   21.48625,
   21.06703,
   20.01799,
   19.07435,
   19.32164,
   17.6337,
   17.08351,
   17.51302,
   15.51473,
   14.40433,
   12.8184,
   12.77601,
   11.4725,
   10.62667};
   Double_t data_copy_fehx3015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3015[23] = {
   0,
   0,
   21.41694,
   21.51013,
   21.94735,
   22.15145,
   22.92789,
   22.08363,
   21.74134,
   20.46176,
   20.04203,
   18.9916,
   18.04659,
   18.29426,
   16.60353,
   16.05231,
   16.48263,
   14.48014,
   13.36686,
   11.77587,
   11.73334,
   10.42448,
   9.574395};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3015,data_copy_fy3015,data_copy_felx3015,data_copy_fehx3015,data_copy_fely3015,data_copy_fehy3015);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat4_2016_pass_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3015 = new TH1F("Graph_data_copy3015","WH_hbb in cat4_2016_pass_cat4",100,28.1,212.9);
   Graph_data_copy3015->SetMinimum(0);
   Graph_data_copy3015->SetMaximum(604.0048);
   Graph_data_copy3015->SetDirectory(0);
   Graph_data_copy3015->SetStats(0);
   Graph_data_copy3015->SetLineStyle(0);
   Graph_data_copy3015->SetMarkerStyle(20);
   Graph_data_copy3015->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3015->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3015->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3015->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3015->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3015);
   
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
   entry=leg->AddEntry("htotpass_cat4_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat4_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat4_2016_fit_s_copy__61 = new TH1F("htotpass_cat4_2016_fit_s_copy__61","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(1,3.445606e-06);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(2,3.445606e-06);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(3,459.0755);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(4,473.0593);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(5,496.2549);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(6,522.7915);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(7,540.11);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(8,506.6559);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(9,441.7577);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(10,392.7596);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(11,352.1745);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(12,331.2689);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(13,313.846);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(14,296.1373);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(15,273.8514);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(16,249.4438);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(17,230.3571);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(18,200.9084);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(19,178.2898);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(20,151.2171);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(21,128.8155);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(22,107.3132);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(23,85.41553);
   htotpass_cat4_2016_fit_s_copy__61->SetMaximum(810.165);
   htotpass_cat4_2016_fit_s_copy__61->SetEntries(92);
   htotpass_cat4_2016_fit_s_copy__61->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s_copy__61->SetFillColor(ci);
   htotpass_cat4_2016_fit_s_copy__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s_copy__61->SetLineColor(ci);
   htotpass_cat4_2016_fit_s_copy__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s_copy__61->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s_copy__61->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__61->Draw("sameaxis");
   p12pass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_fit_s
   TPad *p22pass_cat4_2016_fit_s = new TPad("p22pass_cat4_2016_fit_s", "p22pass_cat4_2016_fit_s",0,0,1,0.3);
   p22pass_cat4_2016_fit_s->Draw();
   p22pass_cat4_2016_fit_s->cd();
   p22pass_cat4_2016_fit_s->Range(13.7027,-10.42879,221.8108,7.667174);
   p22pass_cat4_2016_fit_s->SetFillColor(0);
   p22pass_cat4_2016_fit_s->SetBorderMode(0);
   p22pass_cat4_2016_fit_s->SetBorderSize(2);
   p22pass_cat4_2016_fit_s->SetTickx(1);
   p22pass_cat4_2016_fit_s->SetTicky(1);
   p22pass_cat4_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat4_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat4_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_s__62 = new TH1F("iOneWithErrorspass_cat4_2016_fit_s__62","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMaximum(6.762376);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__62->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__62->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(0);
   hstack_stack_16->SetMaximum(5.605501);
   hstack_stack_16->SetDirectory(0);
   hstack_stack_16->SetStats(0);
   hstack_stack_16->SetLineStyle(0);
   hstack_stack_16->SetMarkerStyle(20);
   hstack_stack_16->GetXaxis()->SetLabelFont(42);
   hstack_stack_16->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_16->GetXaxis()->SetTitleFont(42);
   hstack_stack_16->GetYaxis()->SetLabelFont(42);
   hstack_stack_16->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_16->GetYaxis()->SetTitleFont(42);
   hstack_stack_16->GetZaxis()->SetLabelFont(42);
   hstack_stack_16->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_16);
   
   
   TH1F *sigHistResidualwqqpass_cat4_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat4_2016_fit_s_stack_1","wqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(3,0.0905139);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(4,0.5457004);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(5,1.256677);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(6,2.396047);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(7,2.847049);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(8,1.307397);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(9,0.456471);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(10,0.09324892);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(11,0.02928844);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(12,7.404905e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(13,7.792664e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(14,7.687168e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(15,8.469947e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(16,8.760799e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(17,8.532074e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(18,9.711995e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(19,1.052087e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(20,1.19423e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(21,1.19856e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(22,1.349046e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(23,1.468824e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat4_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat4_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat4_2016_fit_s_stack_2","zqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(3,9.521879e-08);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(4,0.1117891);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(5,0.6216212);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(6,1.562974);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(7,2.477534);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(8,3.526606);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(9,2.779782);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(10,1.584964);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(11,0.4404016);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(12,0.1369379);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(13,0.06349325);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(14,0.02913177);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(15,1.22823e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(16,1.270406e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(17,1.237239e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(18,1.408339e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(19,1.525635e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(20,1.731757e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(21,1.738035e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(22,1.956255e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(23,2.129947e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat4_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(3,0.001182827);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(4,0.02246783);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(5,0.002836208);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(6,0.0111955);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(7,0.01398869);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(8,0.0421356);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(9,0.1059237);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(10,0.2403571);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(11,0.4522966);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(12,0.7792542);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(13,0.8389297);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(14,0.5587752);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(15,0.3555373);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(16,0.1493847);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(17,0.01422511);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(18,0.005052906);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(19,0.003636703);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(20,0.001163958);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(21,0.002743714);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(22,0.0008319774);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(23,0.001711743);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_fit_s__63 = new TH1F("iOneWithErrorsLinepass_cat4_2016_fit_s__63","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fy3016[23] = {
   0,
   0,
   0.08302316,
   0.1812155,
   1.174079,
   2.41246,
   4.508251,
   3.812657,
   4.463235,
   2.819456,
   2.811932,
   1.615137,
   0.6972643,
   2.038938,
   0.1218474,
   0.5008436,
   2.377825,
   0.5860009,
   0.04930285,
   -1.037466,
   0.7188907,
   0.1470263,
   0.6196172};
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_fit_s_fx3016,Graph_from_iRatiopass_cat4_2016_fit_s_fy3016,Graph_from_iRatiopass_cat4_2016_fit_s_felx3016,Graph_from_iRatiopass_cat4_2016_fit_s_fehx3016,Graph_from_iRatiopass_cat4_2016_fit_s_fely3016,Graph_from_iRatiopass_cat4_2016_fit_s_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetMinimum(-2.792038);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetMaximum(6.262822);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_s_copy__64 = new TH1F("iOneWithErrorspass_cat4_2016_fit_s_copy__64","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMaximum(6.762376);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetEntries(184);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->Draw("sameaxis");
   p22pass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
   cpass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
   cpass_cat4_2016_fit_s->SetSelected(cpass_cat4_2016_fit_s);
}
