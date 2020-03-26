void mlfit_pass_cat3_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat3_2016_fit_s/cpass_cat3_2016_fit_s
//=========  (Wed Sep  4 11:54:23 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_fit_s = new TCanvas("cpass_cat3_2016_fit_s", "cpass_cat3_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_fit_s->SetHighLightColor(2);
   cpass_cat3_2016_fit_s->Range(0,0,1,1);
   cpass_cat3_2016_fit_s->SetFillColor(0);
   cpass_cat3_2016_fit_s->SetBorderMode(0);
   cpass_cat3_2016_fit_s->SetBorderSize(2);
   cpass_cat3_2016_fit_s->SetTickx(1);
   cpass_cat3_2016_fit_s->SetTicky(1);
   cpass_cat3_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat3_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat3_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat3_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_fit_s
   TPad *p12pass_cat3_2016_fit_s = new TPad("p12pass_cat3_2016_fit_s", "p12pass_cat3_2016_fit_s",0,0.3,1,1);
   p12pass_cat3_2016_fit_s->Draw();
   p12pass_cat3_2016_fit_s->cd();
   p12pass_cat3_2016_fit_s->Range(13.7027,-24.25596,221.8108,1188.542);
   p12pass_cat3_2016_fit_s->SetFillColor(0);
   p12pass_cat3_2016_fit_s->SetBorderMode(0);
   p12pass_cat3_2016_fit_s->SetBorderSize(2);
   p12pass_cat3_2016_fit_s->SetTickx(1);
   p12pass_cat3_2016_fit_s->SetTicky(1);
   p12pass_cat3_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat3_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_fit_s__41 = new TH1F("htotpass_cat3_2016_fit_s__41","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s__41->SetBinContent(1,4.42374e-06);
   htotpass_cat3_2016_fit_s__41->SetBinContent(2,615.4138);
   htotpass_cat3_2016_fit_s__41->SetBinContent(3,635.9018);
   htotpass_cat3_2016_fit_s__41->SetBinContent(4,637.5853);
   htotpass_cat3_2016_fit_s__41->SetBinContent(5,647.223);
   htotpass_cat3_2016_fit_s__41->SetBinContent(6,693.5817);
   htotpass_cat3_2016_fit_s__41->SetBinContent(7,711.5081);
   htotpass_cat3_2016_fit_s__41->SetBinContent(8,671.825);
   htotpass_cat3_2016_fit_s__41->SetBinContent(9,596.0591);
   htotpass_cat3_2016_fit_s__41->SetBinContent(10,523.1952);
   htotpass_cat3_2016_fit_s__41->SetBinContent(11,4.42374e-06);
   htotpass_cat3_2016_fit_s__41->SetBinContent(12,4.42374e-06);
   htotpass_cat3_2016_fit_s__41->SetBinContent(13,4.42374e-06);
   htotpass_cat3_2016_fit_s__41->SetBinContent(14,384.1065);
   htotpass_cat3_2016_fit_s__41->SetBinContent(15,355.0169);
   htotpass_cat3_2016_fit_s__41->SetBinContent(16,314.2948);
   htotpass_cat3_2016_fit_s__41->SetBinContent(17,275.5167);
   htotpass_cat3_2016_fit_s__41->SetBinContent(18,239.862);
   htotpass_cat3_2016_fit_s__41->SetBinContent(19,199.0765);
   htotpass_cat3_2016_fit_s__41->SetBinContent(20,169.0133);
   htotpass_cat3_2016_fit_s__41->SetBinContent(21,134.1786);
   htotpass_cat3_2016_fit_s__41->SetBinContent(22,102.2151);
   htotpass_cat3_2016_fit_s__41->SetBinContent(23,77.97202);
   htotpass_cat3_2016_fit_s__41->SetMinimum(0);
   htotpass_cat3_2016_fit_s__41->SetMaximum(1067.262);
   htotpass_cat3_2016_fit_s__41->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__41->SetFillColor(ci);
   htotpass_cat3_2016_fit_s__41->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__41->SetLineColor(ci);
   htotpass_cat3_2016_fit_s__41->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s__41->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s__41->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__41->Draw("");
   
   TH1F *htot_linepass_cat3_2016_fit_s__42 = new TH1F("htot_linepass_cat3_2016_fit_s__42","wqq in cat3_2016_pass_cat3",23,40,201);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(1,4.42374e-06);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(2,615.4138);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(3,635.9018);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(4,637.5853);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(5,647.223);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(6,693.5817);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(7,711.5081);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(8,671.825);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(9,596.0591);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(10,523.1952);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(11,4.42374e-06);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(12,4.42374e-06);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(13,4.42374e-06);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(14,384.1065);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(15,355.0169);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(16,314.2948);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(17,275.5167);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(18,239.862);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(19,199.0765);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(20,169.0133);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(21,134.1786);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(22,102.2151);
   htot_linepass_cat3_2016_fit_s__42->SetBinContent(23,77.97202);
   htot_linepass_cat3_2016_fit_s__42->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_s__42->SetFillColor(ci);
   htot_linepass_cat3_2016_fit_s__42->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_s__42->SetLineColor(ci);
   htot_linepass_cat3_2016_fit_s__42->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat3_2016_fit_s__42->SetMarkerColor(ci);
   htot_linepass_cat3_2016_fit_s__42->SetMarkerSize(0);
   htot_linepass_cat3_2016_fit_s__42->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat3_2016_fit_s__42->GetXaxis()->SetRange(2,23);
   htot_linepass_cat3_2016_fit_s__42->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_s__42->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_s__42->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_s__42->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_s__42->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat3_2016_fit_s__42->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_s__42->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat3_2016_fit_s__42->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat3_2016_fit_s__42->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat3_2016_fit_s__42->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_s__42->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_s__42->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_s__42->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_s__42->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_s__42->Draw("histsame");
   
   TH1F *qcd__43 = new TH1F("qcd__43","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__43->SetBinContent(2,607.8324);
   qcd__43->SetBinContent(3,623.9227);
   qcd__43->SetBinContent(4,611.3165);
   qcd__43->SetBinContent(5,583.9737);
   qcd__43->SetBinContent(6,553.2841);
   qcd__43->SetBinContent(7,533.5716);
   qcd__43->SetBinContent(8,510.6635);
   qcd__43->SetBinContent(9,482.6505);
   qcd__43->SetBinContent(10,464.9997);
   qcd__43->SetBinContent(14,368.4182);
   qcd__43->SetBinContent(15,343.7094);
   qcd__43->SetBinContent(16,306.575);
   qcd__43->SetBinContent(17,268.5208);
   qcd__43->SetBinContent(18,233.7186);
   qcd__43->SetBinContent(19,196.237);
   qcd__43->SetBinContent(20,166.2882);
   qcd__43->SetBinContent(21,132.3127);
   qcd__43->SetBinContent(22,101.7697);
   qcd__43->SetBinContent(23,77.5266);
   qcd__43->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__43->SetLineColor(ci);
   qcd__43->SetLineStyle(2);
   qcd__43->SetLineWidth(2);
   qcd__43->GetXaxis()->SetTitle("x");
   qcd__43->GetXaxis()->SetLabelFont(42);
   qcd__43->GetXaxis()->SetLabelSize(0.035);
   qcd__43->GetXaxis()->SetTitleSize(0.035);
   qcd__43->GetXaxis()->SetTitleFont(42);
   qcd__43->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__43->GetYaxis()->SetLabelFont(42);
   qcd__43->GetYaxis()->SetLabelSize(0.035);
   qcd__43->GetYaxis()->SetTitleSize(0.035);
   qcd__43->GetYaxis()->SetTitleOffset(0);
   qcd__43->GetYaxis()->SetTitleFont(42);
   qcd__43->GetZaxis()->SetLabelFont(42);
   qcd__43->GetZaxis()->SetLabelSize(0.035);
   qcd__43->GetZaxis()->SetTitleSize(0.035);
   qcd__43->GetZaxis()->SetTitleFont(42);
   qcd__43->Draw("hist sames");
   
   TH1F *htotpass_cat3_2016_fit_s__44 = new TH1F("htotpass_cat3_2016_fit_s__44","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s__44->SetBinContent(1,4.42374e-06);
   htotpass_cat3_2016_fit_s__44->SetBinContent(2,615.4138);
   htotpass_cat3_2016_fit_s__44->SetBinContent(3,635.9018);
   htotpass_cat3_2016_fit_s__44->SetBinContent(4,637.5853);
   htotpass_cat3_2016_fit_s__44->SetBinContent(5,647.223);
   htotpass_cat3_2016_fit_s__44->SetBinContent(6,693.5817);
   htotpass_cat3_2016_fit_s__44->SetBinContent(7,711.5081);
   htotpass_cat3_2016_fit_s__44->SetBinContent(8,671.825);
   htotpass_cat3_2016_fit_s__44->SetBinContent(9,596.0591);
   htotpass_cat3_2016_fit_s__44->SetBinContent(10,523.1952);
   htotpass_cat3_2016_fit_s__44->SetBinContent(11,4.42374e-06);
   htotpass_cat3_2016_fit_s__44->SetBinContent(12,4.42374e-06);
   htotpass_cat3_2016_fit_s__44->SetBinContent(13,4.42374e-06);
   htotpass_cat3_2016_fit_s__44->SetBinContent(14,384.1065);
   htotpass_cat3_2016_fit_s__44->SetBinContent(15,355.0169);
   htotpass_cat3_2016_fit_s__44->SetBinContent(16,314.2948);
   htotpass_cat3_2016_fit_s__44->SetBinContent(17,275.5167);
   htotpass_cat3_2016_fit_s__44->SetBinContent(18,239.862);
   htotpass_cat3_2016_fit_s__44->SetBinContent(19,199.0765);
   htotpass_cat3_2016_fit_s__44->SetBinContent(20,169.0133);
   htotpass_cat3_2016_fit_s__44->SetBinContent(21,134.1786);
   htotpass_cat3_2016_fit_s__44->SetBinContent(22,102.2151);
   htotpass_cat3_2016_fit_s__44->SetBinContent(23,77.97202);
   htotpass_cat3_2016_fit_s__44->SetMinimum(0);
   htotpass_cat3_2016_fit_s__44->SetMaximum(1067.262);
   htotpass_cat3_2016_fit_s__44->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__44->SetFillColor(ci);
   htotpass_cat3_2016_fit_s__44->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__44->SetLineColor(ci);
   htotpass_cat3_2016_fit_s__44->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s__44->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s__44->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s__44->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__44->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s__44->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__44->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s__44->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s__44->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s__44->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__44->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__44->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__44->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__44->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__44->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis11[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_11 = new TH1F("hstackMC_stack_11","hstackMC",23, xAxis11);
   hstackMC_stack_11->SetMinimum(0);
   hstackMC_stack_11->SetMaximum(191.7361);
   hstackMC_stack_11->SetDirectory(0);
   hstackMC_stack_11->SetStats(0);
   hstackMC_stack_11->SetLineStyle(0);
   hstackMC_stack_11->SetMarkerStyle(20);
   hstackMC_stack_11->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_11->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_11->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_11->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_11->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_11->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_11->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_11->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_11->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_11->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_11->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_11->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_11->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_11->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_11->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_11->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_11->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_11);
   
   Double_t xAxis12[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat3_2016_pass_cat3",23, xAxis12);
   tqq_stack_1->SetBinContent(2,4.930271);
   tqq_stack_1->SetBinContent(3,5.626864);
   tqq_stack_1->SetBinContent(4,8.844926);
   tqq_stack_1->SetBinContent(5,9.774652);
   tqq_stack_1->SetBinContent(6,19.33319);
   tqq_stack_1->SetBinContent(7,22.75841);
   tqq_stack_1->SetBinContent(8,18.62968);
   tqq_stack_1->SetBinContent(9,21.28418);
   tqq_stack_1->SetBinContent(10,17.78996);
   tqq_stack_1->SetBinContent(14,14.83147);
   tqq_stack_1->SetBinContent(15,11.30755);
   tqq_stack_1->SetBinContent(16,7.719791);
   tqq_stack_1->SetBinContent(17,6.995884);
   tqq_stack_1->SetBinContent(18,6.143369);
   tqq_stack_1->SetBinContent(19,2.839525);
   tqq_stack_1->SetBinContent(20,2.725112);
   tqq_stack_1->SetBinContent(21,1.86586);
   tqq_stack_1->SetBinContent(22,0.4454173);
   tqq_stack_1->SetBinContent(23,0.4454173);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat3_2016_pass_cat3",23,40,201);
   wqq_stack_2->SetBinContent(1,1.796661e-06);
   wqq_stack_2->SetBinContent(2,1.690014);
   wqq_stack_2->SetBinContent(3,4.455779);
   wqq_stack_2->SetBinContent(4,15.12985);
   wqq_stack_2->SetBinContent(5,34.4268);
   wqq_stack_2->SetBinContent(6,76.02302);
   wqq_stack_2->SetBinContent(7,80.58932);
   wqq_stack_2->SetBinContent(8,24.30051);
   wqq_stack_2->SetBinContent(9,13.92522);
   wqq_stack_2->SetBinContent(10,6.125399);
   wqq_stack_2->SetBinContent(11,1.796661e-06);
   wqq_stack_2->SetBinContent(12,1.796661e-06);
   wqq_stack_2->SetBinContent(13,1.796661e-06);
   wqq_stack_2->SetBinContent(14,1.796661e-06);
   wqq_stack_2->SetBinContent(15,1.796661e-06);
   wqq_stack_2->SetBinContent(16,1.796661e-06);
   wqq_stack_2->SetBinContent(17,1.796661e-06);
   wqq_stack_2->SetBinContent(18,1.796661e-06);
   wqq_stack_2->SetBinContent(19,1.796661e-06);
   wqq_stack_2->SetBinContent(20,1.796661e-06);
   wqq_stack_2->SetBinContent(21,1.796661e-06);
   wqq_stack_2->SetBinContent(22,1.796661e-06);
   wqq_stack_2->SetBinContent(23,1.796661e-06);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat3_2016_pass_cat3",23,40,201);
   zqq_stack_3->SetBinContent(1,2.627079e-06);
   zqq_stack_3->SetBinContent(2,0.9610553);
   zqq_stack_3->SetBinContent(3,1.896418);
   zqq_stack_3->SetBinContent(4,2.294046);
   zqq_stack_3->SetBinContent(5,19.04779);
   zqq_stack_3->SetBinContent(6,44.94137);
   zqq_stack_3->SetBinContent(7,74.58881);
   zqq_stack_3->SetBinContent(8,118.2313);
   zqq_stack_3->SetBinContent(9,78.19926);
   zqq_stack_3->SetBinContent(10,34.28016);
   zqq_stack_3->SetBinContent(11,2.627079e-06);
   zqq_stack_3->SetBinContent(12,2.627079e-06);
   zqq_stack_3->SetBinContent(13,2.627079e-06);
   zqq_stack_3->SetBinContent(14,0.8568081);
   zqq_stack_3->SetBinContent(15,2.627079e-06);
   zqq_stack_3->SetBinContent(16,2.627079e-06);
   zqq_stack_3->SetBinContent(17,2.627079e-06);
   zqq_stack_3->SetBinContent(18,2.627079e-06);
   zqq_stack_3->SetBinContent(19,2.627079e-06);
   zqq_stack_3->SetBinContent(20,2.627079e-06);
   zqq_stack_3->SetBinContent(21,2.627079e-06);
   zqq_stack_3->SetBinContent(22,2.627079e-06);
   zqq_stack_3->SetBinContent(23,2.627079e-06);
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
   
   TH1F *hsigpass_cat3_2016_fit_s_stack_4 = new TH1F("hsigpass_cat3_2016_fit_s_stack_4","hqq125 in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(1,5.840133e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(2,0.03843188);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(3,0.1079703);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(4,0.08896521);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(5,1.315761);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(6,1.864203);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(7,4.669272);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(8,3.814609);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(9,8.864891);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(10,22.22126);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(11,5.840133e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(12,5.840133e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(13,5.840133e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(14,24.33793);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(15,12.06665);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(16,2.778474);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(17,0.5186142);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(18,0.4441009);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(19,0.1213394);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(20,0.04102762);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(21,0.09678336);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(22,0.008095233);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(23,0.03210118);
   hsigpass_cat3_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3011[23] = {
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
   Double_t data_copy_fy3011[23] = {
   0,
   651,
   655,
   614,
   656,
   694,
   738,
   683,
   585,
   536,
   0,
   0,
   0,
   420,
   375,
   338,
   261,
   218,
   191,
   185,
   103,
   96,
   97};
   Double_t data_copy_felx3011[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3011[23] = {
   1.841055,
   26.52834,
   26.60657,
   25.79304,
   26.62609,
   27.35713,
   28.17904,
   27.14761,
   25.2011,
   24.1666,
   1.841055,
   1.841055,
   1.841055,
   21.51064,
   20.38258,
   19.40334,
   17.17651,
   15.78775,
   14.84473,
   14.62631,
   11.182,
   10.83224,
   10.88296};
   Double_t data_copy_fehx3011[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3011[23] = {
   0,
   25.5087,
   25.58699,
   24.77281,
   25.60652,
   26.3381,
   27.16059,
   26.12843,
   24.18038,
   23.14495,
   0,
   0,
   0,
   20.48618,
   19.3567,
   18.37607,
   16.14548,
   14.75381,
   13.80846,
   13.58946,
   10.1326,
   9.781065,
   9.832053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3011,data_copy_fy3011,data_copy_felx3011,data_copy_fehx3011,data_copy_fely3011,data_copy_fehy3011);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat3_2016_pass_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3011 = new TH1F("Graph_data_copy3011","tqq in cat3_2016_pass_cat3",100,28.1,212.9);
   Graph_data_copy3011->SetMinimum(0);
   Graph_data_copy3011->SetMaximum(841.8607);
   Graph_data_copy3011->SetDirectory(0);
   Graph_data_copy3011->SetStats(0);
   Graph_data_copy3011->SetLineStyle(0);
   Graph_data_copy3011->SetMarkerStyle(20);
   Graph_data_copy3011->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3011->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3011->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3011->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3011->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3011->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3011->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3011->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3011->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3011->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3011->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3011);
   
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
   entry=leg->AddEntry("htotpass_cat3_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat3_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat3_2016_fit_s_copy__45 = new TH1F("htotpass_cat3_2016_fit_s_copy__45","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(1,4.42374e-06);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(2,615.4138);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(3,635.9018);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(4,637.5853);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(5,647.223);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(6,693.5817);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(7,711.5081);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(8,671.825);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(9,596.0591);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(10,523.1952);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(11,4.42374e-06);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(12,4.42374e-06);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(13,4.42374e-06);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(14,384.1065);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(15,355.0169);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(16,314.2948);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(17,275.5167);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(18,239.862);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(19,199.0765);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(20,169.0133);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(21,134.1786);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(22,102.2151);
   htotpass_cat3_2016_fit_s_copy__45->SetBinContent(23,77.97202);
   htotpass_cat3_2016_fit_s_copy__45->SetMaximum(1067.262);
   htotpass_cat3_2016_fit_s_copy__45->SetEntries(92);
   htotpass_cat3_2016_fit_s_copy__45->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s_copy__45->SetFillColor(ci);
   htotpass_cat3_2016_fit_s_copy__45->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s_copy__45->SetLineColor(ci);
   htotpass_cat3_2016_fit_s_copy__45->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s_copy__45->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s_copy__45->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s_copy__45->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__45->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s_copy__45->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__45->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s_copy__45->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s_copy__45->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s_copy__45->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__45->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__45->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s_copy__45->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s_copy__45->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__45->Draw("sameaxis");
   p12pass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_fit_s
   TPad *p22pass_cat3_2016_fit_s = new TPad("p22pass_cat3_2016_fit_s", "p22pass_cat3_2016_fit_s",0,0,1,0.3);
   p22pass_cat3_2016_fit_s->Draw();
   p22pass_cat3_2016_fit_s->cd();
   p22pass_cat3_2016_fit_s->Range(13.7027,-11.77099,221.8108,10.79898);
   p22pass_cat3_2016_fit_s->SetFillColor(0);
   p22pass_cat3_2016_fit_s->SetBorderMode(0);
   p22pass_cat3_2016_fit_s->SetBorderSize(2);
   p22pass_cat3_2016_fit_s->SetTickx(1);
   p22pass_cat3_2016_fit_s->SetTicky(1);
   p22pass_cat3_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat3_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat3_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s__46 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s__46","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMaximum(9.670485);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__46->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__46->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_12 = new TH1F("hstack_stack_12","hstack",23,40,201);
   hstack_stack_12->SetMinimum(0);
   hstack_stack_12->SetMaximum(6.179535);
   hstack_stack_12->SetDirectory(0);
   hstack_stack_12->SetStats(0);
   hstack_stack_12->SetLineStyle(0);
   hstack_stack_12->SetMarkerStyle(20);
   hstack_stack_12->GetXaxis()->SetLabelFont(42);
   hstack_stack_12->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_12->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_12->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_12->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_12->GetXaxis()->SetTitleFont(42);
   hstack_stack_12->GetYaxis()->SetLabelFont(42);
   hstack_stack_12->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_12->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_12->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_12->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_12->GetYaxis()->SetTitleFont(42);
   hstack_stack_12->GetZaxis()->SetLabelFont(42);
   hstack_stack_12->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_12->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_12->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_12->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_12);
   
   
   TH1F *sigHistResidualwqqpass_cat3_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat3_2016_fit_s_stack_1","wqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(2,0.06625246);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(3,0.1741424);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(4,0.6107442);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(5,1.344454);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(6,2.886428);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(7,2.967142);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(8,0.930041);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(9,0.5758891);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(10,0.2646538);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(14,8.770114e-08);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(15,9.28186e-08);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(16,9.777178e-08);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(17,1.112795e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(18,1.217761e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(19,1.301131e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(20,1.3221e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(21,1.77315e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(22,1.836877e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(23,1.827351e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat3_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat3_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat3_2016_fit_s_stack_2","zqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(2,0.03767559);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(3,0.07411651);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(4,0.09260338);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(5,0.743865);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(6,1.706325);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(7,2.746215);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(8,4.525004);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(9,3.233996);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(10,1.481108);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(14,0.04182371);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(15,1.357194e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(16,1.429619e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(17,1.627129e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(18,1.780611e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(19,1.902514e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(20,1.933174e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(21,2.5927e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(22,2.685882e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(23,2.671953e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat3_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3","hqq125 in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(2,0.001506618);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(3,0.004219737);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(4,0.003591244);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(5,0.05138385);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(6,0.0707797);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(7,0.1719135);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(8,0.1459945);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(9,0.3666151);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(10,0.9600912);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(14,1.188017);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(15,0.6233839);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(16,0.1512007);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(17,0.03212132);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(18,0.03010077);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(19,0.00878732);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(20,0.003019077);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(21,0.009551682);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(22,0.0008276433);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(23,0.003264952);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_fit_s__47 = new TH1F("iOneWithErrorsLinepass_cat3_2016_fit_s__47","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fx3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fy3012[23] = {
   0,
   1.441375,
   0.9565448,
   -0.2487178,
   2.337994,
   4.436968,
   6.44699,
   5.661891,
   3.216736,
   2.201813,
   0,
   0,
   0,
   1.708471,
   0.9804006,
   1.221709,
   -0.8991197,
   -1.481786,
   -0.5848934,
   1.093009,
   -3.077056,
   -0.6354259,
   1.748419};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_felx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fely3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fehx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fehy3012[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_fit_s_fx3012,Graph_from_iRatiopass_cat3_2016_fit_s_fy3012,Graph_from_iRatiopass_cat3_2016_fit_s_felx3012,Graph_from_iRatiopass_cat3_2016_fit_s_fehx3012,Graph_from_iRatiopass_cat3_2016_fit_s_fely3012,Graph_from_iRatiopass_cat3_2016_fit_s_fehy3012);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetMinimum(-5.229461);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetMaximum(8.599395);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s_copy__48 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s_copy__48","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMaximum(9.670485);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetEntries(184);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->Draw("sameaxis");
   p22pass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
   cpass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
   cpass_cat3_2016_fit_s->SetSelected(cpass_cat3_2016_fit_s);
}
