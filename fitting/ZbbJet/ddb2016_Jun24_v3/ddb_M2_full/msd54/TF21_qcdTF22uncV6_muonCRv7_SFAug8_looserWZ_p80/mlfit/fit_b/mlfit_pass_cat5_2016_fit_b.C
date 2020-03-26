void mlfit_pass_cat5_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_b/cpass_cat5_2016_fit_b
//=========  (Mon Sep 30 17:21:33 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat5_2016_fit_b = new TCanvas("cpass_cat5_2016_fit_b", "cpass_cat5_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat5_2016_fit_b->SetHighLightColor(2);
   cpass_cat5_2016_fit_b->Range(0,0,1,1);
   cpass_cat5_2016_fit_b->SetFillColor(0);
   cpass_cat5_2016_fit_b->SetBorderMode(0);
   cpass_cat5_2016_fit_b->SetBorderSize(2);
   cpass_cat5_2016_fit_b->SetTickx(1);
   cpass_cat5_2016_fit_b->SetTicky(1);
   cpass_cat5_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat5_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat5_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat5_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat5_2016_fit_b
   TPad *p12pass_cat5_2016_fit_b = new TPad("p12pass_cat5_2016_fit_b", "p12pass_cat5_2016_fit_b",0,0.3,1,1);
   p12pass_cat5_2016_fit_b->Draw();
   p12pass_cat5_2016_fit_b->cd();
   p12pass_cat5_2016_fit_b->Range(13.7027,-11.89174,221.8108,582.6952);
   p12pass_cat5_2016_fit_b->SetFillColor(0);
   p12pass_cat5_2016_fit_b->SetBorderMode(0);
   p12pass_cat5_2016_fit_b->SetBorderSize(2);
   p12pass_cat5_2016_fit_b->SetTickx(1);
   p12pass_cat5_2016_fit_b->SetTicky(1);
   p12pass_cat5_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat5_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat5_2016_fit_b__73 = new TH1F("htotpass_cat5_2016_fit_b__73","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b__73->SetBinContent(1,2.27564e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(2,2.27564e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(3,294.3539);
   htotpass_cat5_2016_fit_b__73->SetBinContent(4,307.6283);
   htotpass_cat5_2016_fit_b__73->SetBinContent(5,307.7835);
   htotpass_cat5_2016_fit_b__73->SetBinContent(6,324.1333);
   htotpass_cat5_2016_fit_b__73->SetBinContent(7,348.8243);
   htotpass_cat5_2016_fit_b__73->SetBinContent(8,325.4451);
   htotpass_cat5_2016_fit_b__73->SetBinContent(9,273.7535);
   htotpass_cat5_2016_fit_b__73->SetBinContent(10,242.6537);
   htotpass_cat5_2016_fit_b__73->SetBinContent(11,214.2011);
   htotpass_cat5_2016_fit_b__73->SetBinContent(12,205.317);
   htotpass_cat5_2016_fit_b__73->SetBinContent(13,192.1847);
   htotpass_cat5_2016_fit_b__73->SetBinContent(14,183.0538);
   htotpass_cat5_2016_fit_b__73->SetBinContent(15,169.3596);
   htotpass_cat5_2016_fit_b__73->SetBinContent(16,160.6761);
   htotpass_cat5_2016_fit_b__73->SetBinContent(17,145.6848);
   htotpass_cat5_2016_fit_b__73->SetBinContent(18,134.6113);
   htotpass_cat5_2016_fit_b__73->SetBinContent(19,123.6769);
   htotpass_cat5_2016_fit_b__73->SetBinContent(20,112.5955);
   htotpass_cat5_2016_fit_b__73->SetBinContent(21,101.1908);
   htotpass_cat5_2016_fit_b__73->SetBinContent(22,88.76768);
   htotpass_cat5_2016_fit_b__73->SetBinContent(23,75.13641);
   htotpass_cat5_2016_fit_b__73->SetMinimum(0);
   htotpass_cat5_2016_fit_b__73->SetMaximum(523.2365);
   htotpass_cat5_2016_fit_b__73->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__73->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__73->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__73->SetLineColor(ci);
   htotpass_cat5_2016_fit_b__73->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b__73->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b__73->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__73->Draw("");
   
   TH1F *htot_linepass_cat5_2016_fit_b__74 = new TH1F("htot_linepass_cat5_2016_fit_b__74","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(1,2.27564e-06);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(2,2.27564e-06);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(3,294.3539);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(4,307.6283);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(5,307.7835);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(6,324.1333);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(7,348.8243);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(8,325.4451);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(9,273.7535);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(10,242.6537);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(11,214.2011);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(12,205.317);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(13,192.1847);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(14,183.0538);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(15,169.3596);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(16,160.6761);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(17,145.6848);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(18,134.6113);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(19,123.6769);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(20,112.5955);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(21,101.1908);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(22,88.76768);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(23,75.13641);
   htot_linepass_cat5_2016_fit_b__74->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_b__74->SetFillColor(ci);
   htot_linepass_cat5_2016_fit_b__74->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_b__74->SetLineColor(ci);
   htot_linepass_cat5_2016_fit_b__74->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_fit_b__74->SetMarkerColor(ci);
   htot_linepass_cat5_2016_fit_b__74->SetMarkerSize(0);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__74->Draw("histsame");
   
   TH1F *qcd__75 = new TH1F("qcd__75","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__75->SetBinContent(3,289.3256);
   qcd__75->SetBinContent(4,291.3368);
   qcd__75->SetBinContent(5,279.7296);
   qcd__75->SetBinContent(6,265.0798);
   qcd__75->SetBinContent(7,252.8859);
   qcd__75->SetBinContent(8,242.9221);
   qcd__75->SetBinContent(9,225.2456);
   qcd__75->SetBinContent(10,212.7313);
   qcd__75->SetBinContent(11,203.7485);
   qcd__75->SetBinContent(12,192.5429);
   qcd__75->SetBinContent(13,183.1478);
   qcd__75->SetBinContent(14,173.7124);
   qcd__75->SetBinContent(15,160.9604);
   qcd__75->SetBinContent(16,155.5434);
   qcd__75->SetBinContent(17,141.8034);
   qcd__75->SetBinContent(18,132.432);
   qcd__75->SetBinContent(19,121.8624);
   qcd__75->SetBinContent(20,110.2295);
   qcd__75->SetBinContent(21,99.17945);
   qcd__75->SetBinContent(22,88.76768);
   qcd__75->SetBinContent(23,75.13641);
   qcd__75->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__75->SetLineColor(ci);
   qcd__75->SetLineStyle(2);
   qcd__75->SetLineWidth(2);
   qcd__75->GetXaxis()->SetTitle("x");
   qcd__75->GetXaxis()->SetLabelFont(42);
   qcd__75->GetXaxis()->SetLabelSize(0.035);
   qcd__75->GetXaxis()->SetTitleSize(0.035);
   qcd__75->GetXaxis()->SetTitleFont(42);
   qcd__75->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__75->GetYaxis()->SetLabelFont(42);
   qcd__75->GetYaxis()->SetLabelSize(0.035);
   qcd__75->GetYaxis()->SetTitleSize(0.035);
   qcd__75->GetYaxis()->SetTitleOffset(0);
   qcd__75->GetYaxis()->SetTitleFont(42);
   qcd__75->GetZaxis()->SetLabelFont(42);
   qcd__75->GetZaxis()->SetLabelSize(0.035);
   qcd__75->GetZaxis()->SetTitleSize(0.035);
   qcd__75->GetZaxis()->SetTitleFont(42);
   qcd__75->Draw("hist sames");
   
   TH1F *htotpass_cat5_2016_fit_b__76 = new TH1F("htotpass_cat5_2016_fit_b__76","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b__76->SetBinContent(1,2.27564e-06);
   htotpass_cat5_2016_fit_b__76->SetBinContent(2,2.27564e-06);
   htotpass_cat5_2016_fit_b__76->SetBinContent(3,294.3539);
   htotpass_cat5_2016_fit_b__76->SetBinContent(4,307.6283);
   htotpass_cat5_2016_fit_b__76->SetBinContent(5,307.7835);
   htotpass_cat5_2016_fit_b__76->SetBinContent(6,324.1333);
   htotpass_cat5_2016_fit_b__76->SetBinContent(7,348.8243);
   htotpass_cat5_2016_fit_b__76->SetBinContent(8,325.4451);
   htotpass_cat5_2016_fit_b__76->SetBinContent(9,273.7535);
   htotpass_cat5_2016_fit_b__76->SetBinContent(10,242.6537);
   htotpass_cat5_2016_fit_b__76->SetBinContent(11,214.2011);
   htotpass_cat5_2016_fit_b__76->SetBinContent(12,205.317);
   htotpass_cat5_2016_fit_b__76->SetBinContent(13,192.1847);
   htotpass_cat5_2016_fit_b__76->SetBinContent(14,183.0538);
   htotpass_cat5_2016_fit_b__76->SetBinContent(15,169.3596);
   htotpass_cat5_2016_fit_b__76->SetBinContent(16,160.6761);
   htotpass_cat5_2016_fit_b__76->SetBinContent(17,145.6848);
   htotpass_cat5_2016_fit_b__76->SetBinContent(18,134.6113);
   htotpass_cat5_2016_fit_b__76->SetBinContent(19,123.6769);
   htotpass_cat5_2016_fit_b__76->SetBinContent(20,112.5955);
   htotpass_cat5_2016_fit_b__76->SetBinContent(21,101.1908);
   htotpass_cat5_2016_fit_b__76->SetBinContent(22,88.76768);
   htotpass_cat5_2016_fit_b__76->SetBinContent(23,75.13641);
   htotpass_cat5_2016_fit_b__76->SetMinimum(0);
   htotpass_cat5_2016_fit_b__76->SetMaximum(523.2365);
   htotpass_cat5_2016_fit_b__76->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__76->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__76->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__76->SetLineColor(ci);
   htotpass_cat5_2016_fit_b__76->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b__76->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b__76->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__76->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis19[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_19 = new TH1F("hstackMC_stack_19","hstackMC",23, xAxis19);
   hstackMC_stack_19->SetMinimum(0);
   hstackMC_stack_19->SetMaximum(100.7354);
   hstackMC_stack_19->SetDirectory(0);
   hstackMC_stack_19->SetStats(0);
   hstackMC_stack_19->SetLineStyle(0);
   hstackMC_stack_19->SetMarkerStyle(20);
   hstackMC_stack_19->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_19->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_19->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_19->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_19->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_19->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_19->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_19->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_19->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_19->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_19->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_19->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_19->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_19->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_19->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_19->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_19->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_19);
   
   Double_t xAxis20[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat5_2016_pass_cat5",23, xAxis20);
   tqq_stack_1->SetBinContent(3,1.254354);
   tqq_stack_1->SetBinContent(4,2.837548);
   tqq_stack_1->SetBinContent(5,4.686588);
   tqq_stack_1->SetBinContent(6,4.60928);
   tqq_stack_1->SetBinContent(7,7.597569);
   tqq_stack_1->SetBinContent(8,8.574362);
   tqq_stack_1->SetBinContent(9,5.571182);
   tqq_stack_1->SetBinContent(10,10.93573);
   tqq_stack_1->SetBinContent(11,6.480489);
   tqq_stack_1->SetBinContent(12,10.90714);
   tqq_stack_1->SetBinContent(13,9.03684);
   tqq_stack_1->SetBinContent(14,9.34132);
   tqq_stack_1->SetBinContent(15,8.399232);
   tqq_stack_1->SetBinContent(16,5.132653);
   tqq_stack_1->SetBinContent(17,3.881351);
   tqq_stack_1->SetBinContent(18,2.179325);
   tqq_stack_1->SetBinContent(19,1.814519);
   tqq_stack_1->SetBinContent(20,2.366074);
   tqq_stack_1->SetBinContent(21,2.01139);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat5_2016_pass_cat5",23,40,201);
   wqq_stack_2->SetBinContent(1,1.03721e-06);
   wqq_stack_2->SetBinContent(2,1.03721e-06);
   wqq_stack_2->SetBinContent(3,2.718175);
   wqq_stack_2->SetBinContent(4,9.611458);
   wqq_stack_2->SetBinContent(5,17.5107);
   wqq_stack_2->SetBinContent(6,34.95444);
   wqq_stack_2->SetBinContent(7,50.58373);
   wqq_stack_2->SetBinContent(8,22.51977);
   wqq_stack_2->SetBinContent(9,7.426178);
   wqq_stack_2->SetBinContent(10,1.983887);
   wqq_stack_2->SetBinContent(11,0.8644808);
   wqq_stack_2->SetBinContent(12,1.03721e-06);
   wqq_stack_2->SetBinContent(13,1.03721e-06);
   wqq_stack_2->SetBinContent(14,1.03721e-06);
   wqq_stack_2->SetBinContent(15,1.03721e-06);
   wqq_stack_2->SetBinContent(16,1.03721e-06);
   wqq_stack_2->SetBinContent(17,1.03721e-06);
   wqq_stack_2->SetBinContent(18,1.03721e-06);
   wqq_stack_2->SetBinContent(19,1.03721e-06);
   wqq_stack_2->SetBinContent(20,1.03721e-06);
   wqq_stack_2->SetBinContent(21,1.03721e-06);
   wqq_stack_2->SetBinContent(22,1.03721e-06);
   wqq_stack_2->SetBinContent(23,1.03721e-06);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat5_2016_pass_cat5",23,40,201);
   zqq_stack_3->SetBinContent(1,1.23843e-06);
   zqq_stack_3->SetBinContent(2,1.23843e-06);
   zqq_stack_3->SetBinContent(3,1.055777);
   zqq_stack_3->SetBinContent(4,3.842544);
   zqq_stack_3->SetBinContent(5,5.856575);
   zqq_stack_3->SetBinContent(6,19.48981);
   zqq_stack_3->SetBinContent(7,37.75714);
   zqq_stack_3->SetBinContent(8,51.42889);
   zqq_stack_3->SetBinContent(9,35.51052);
   zqq_stack_3->SetBinContent(10,17.00277);
   zqq_stack_3->SetBinContent(11,3.107662);
   zqq_stack_3->SetBinContent(12,1.866941);
   zqq_stack_3->SetBinContent(13,1.23843e-06);
   zqq_stack_3->SetBinContent(14,1.23843e-06);
   zqq_stack_3->SetBinContent(15,1.23843e-06);
   zqq_stack_3->SetBinContent(16,1.23843e-06);
   zqq_stack_3->SetBinContent(17,1.23843e-06);
   zqq_stack_3->SetBinContent(18,1.23843e-06);
   zqq_stack_3->SetBinContent(19,1.23843e-06);
   zqq_stack_3->SetBinContent(20,1.23843e-06);
   zqq_stack_3->SetBinContent(21,1.23843e-06);
   zqq_stack_3->SetBinContent(22,1.23843e-06);
   zqq_stack_3->SetBinContent(23,1.23843e-06);
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
   
   TH1F *hsigpass_cat5_2016_fit_b_stack_4 = new TH1F("hsigpass_cat5_2016_fit_b_stack_4","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   hsigpass_cat5_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat5_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3019[23] = {
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
   Double_t data_copy_fy3019[23] = {
   0,
   0,
   315,
   307,
   316,
   327,
   346,
   352,
   247,
   261,
   210,
   211,
   197,
   204,
   156,
   176,
   147,
   134,
   104,
   119,
   95,
   73,
   86};
   Double_t data_copy_felx3019[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3019[23] = {
   1.841055,
   1.841055,
   18.76744,
   18.54085,
   18.79556,
   19.102,
   19.61943,
   19.77987,
   16.73782,
   17.17651,
   15.51473,
   15.54914,
   15.05976,
   15.30654,
   13.51699,
   14.29195,
   13.15215,
   12.60492,
   11.23099,
   11.93955,
   10.78125,
   9.583245,
   10.30981};
   Double_t data_copy_fehx3019[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3019[23] = {
   0,
   0,
   17.7392,
   17.51224,
   17.76736,
   18.07428,
   18.59248,
   18.75315,
   15.70592,
   16.14548,
   14.48014,
   14.51463,
   14.02405,
   14.27145,
   12.47686,
   13.25417,
   12.1108,
   11.56162,
   10.18183,
   10.89359,
   9.729809,
   8.524559,
   9.255741};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3019,data_copy_fy3019,data_copy_felx3019,data_copy_fehx3019,data_copy_fely3019,data_copy_fehy3019);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat5_2016_pass_cat5");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3019 = new TH1F("Graph_data_copy3019","WH_hbb in cat5_2016_pass_cat5",100,28.1,212.9);
   Graph_data_copy3019->SetMinimum(0);
   Graph_data_copy3019->SetMaximum(408.0126);
   Graph_data_copy3019->SetDirectory(0);
   Graph_data_copy3019->SetStats(0);
   Graph_data_copy3019->SetLineStyle(0);
   Graph_data_copy3019->SetMarkerStyle(20);
   Graph_data_copy3019->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3019->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3019->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3019->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3019->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3019->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3019->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3019->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3019->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3019->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3019->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3019);
   
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
   entry=leg->AddEntry("htotpass_cat5_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.77,"675 < p_{T} < 800 GeV");
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
   
   TH1F *htotpass_cat5_2016_fit_b_copy__77 = new TH1F("htotpass_cat5_2016_fit_b_copy__77","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(1,2.27564e-06);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(2,2.27564e-06);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(3,294.3539);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(4,307.6283);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(5,307.7835);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(6,324.1333);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(7,348.8243);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(8,325.4451);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(9,273.7535);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(10,242.6537);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(11,214.2011);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(12,205.317);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(13,192.1847);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(14,183.0538);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(15,169.3596);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(16,160.6761);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(17,145.6848);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(18,134.6113);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(19,123.6769);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(20,112.5955);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(21,101.1908);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(22,88.76768);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(23,75.13641);
   htotpass_cat5_2016_fit_b_copy__77->SetMaximum(523.2365);
   htotpass_cat5_2016_fit_b_copy__77->SetEntries(92);
   htotpass_cat5_2016_fit_b_copy__77->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__77->SetFillColor(ci);
   htotpass_cat5_2016_fit_b_copy__77->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__77->SetLineColor(ci);
   htotpass_cat5_2016_fit_b_copy__77->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b_copy__77->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b_copy__77->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__77->Draw("sameaxis");
   p12pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_b
   TPad *p22pass_cat5_2016_fit_b = new TPad("p22pass_cat5_2016_fit_b", "p22pass_cat5_2016_fit_b",0,0,1,0.3);
   p22pass_cat5_2016_fit_b->Draw();
   p22pass_cat5_2016_fit_b->cd();
   p22pass_cat5_2016_fit_b->Range(13.7027,-10.82538,221.8108,8.592553);
   p22pass_cat5_2016_fit_b->SetFillColor(0);
   p22pass_cat5_2016_fit_b->SetBorderMode(0);
   p22pass_cat5_2016_fit_b->SetBorderSize(2);
   p22pass_cat5_2016_fit_b->SetTickx(1);
   p22pass_cat5_2016_fit_b->SetTicky(1);
   p22pass_cat5_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat5_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat5_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b__78 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b__78","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMaximum(7.621656);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_20 = new TH1F("hstack_stack_20","hstack",23,40,201);
   hstack_stack_20->SetMinimum(0);
   hstack_stack_20->SetMaximum(4.989001);
   hstack_stack_20->SetDirectory(0);
   hstack_stack_20->SetStats(0);
   hstack_stack_20->SetLineStyle(0);
   hstack_stack_20->SetMarkerStyle(20);
   hstack_stack_20->GetXaxis()->SetLabelFont(42);
   hstack_stack_20->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_20->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_20->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_20->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_20->GetXaxis()->SetTitleFont(42);
   hstack_stack_20->GetYaxis()->SetLabelFont(42);
   hstack_stack_20->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_20->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_20->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_20->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_20->GetYaxis()->SetTitleFont(42);
   hstack_stack_20->GetZaxis()->SetLabelFont(42);
   hstack_stack_20->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_20->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_20->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_20->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_20);
   
   
   TH1F *sigHistResidualwqqpass_cat5_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat5_2016_fit_b_stack_1","wqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(3,0.1532299);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(4,0.5488421);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(5,0.9855542);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(6,1.933933);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(7,2.720655);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(8,1.200853);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(9,0.4728265);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(10,0.1228756);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(11,0.05970114);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(12,7.14596e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(13,7.395938e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(14,7.267727e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(15,8.313067e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(16,7.825538e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(17,8.564334e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(18,8.971147e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(19,1.018687e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(20,9.521284e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(21,1.066012e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(22,1.216731e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(23,1.120612e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat5_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat5_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat5_2016_fit_b_stack_2","zqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(3,0.05951664);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(4,0.2194204);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(5,0.3296255);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(6,1.078317);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(7,2.030774);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(8,2.742413);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(9,2.260963);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(10,1.053097);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(11,0.2146155);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(12,0.1286248);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(13,8.830764e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(14,8.677679e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(15,9.925818e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(16,9.343706e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(17,1.022583e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(18,1.071157e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(19,1.216314e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(20,1.136843e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(21,1.272821e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(22,1.452779e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(23,1.338013e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat5_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_b__79 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_b__79","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fx3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fy3020[23] = {
   0,
   0,
   1.301192,
   0.6917527,
   1.680385,
   3.000259,
   4.35877,
   5.081104,
   0.9668633,
   2.173488,
   -0.01581398,
   0.4855538,
   0.3197477,
   1.368451,
   -1.070752,
   1.072205,
   0.1000001,
   -0.05287434,
   -1.932548,
   0.5364083,
   -0.6362758,
   -1.849677,
   1.053715};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_felx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fely3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fehx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fehy3020[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_b_fx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fy3020,Graph_from_iRatiopass_cat5_2016_fit_b_felx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fehx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fely3020,Graph_from_iRatiopass_cat5_2016_fit_b_fehy3020);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMinimum(-3.833913);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMaximum(6.982469);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b_copy__80 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b_copy__80","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMaximum(7.621656);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->Draw("sameaxis");
   p22pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
   cpass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
   cpass_cat5_2016_fit_b->SetSelected(cpass_cat5_2016_fit_b);
}
