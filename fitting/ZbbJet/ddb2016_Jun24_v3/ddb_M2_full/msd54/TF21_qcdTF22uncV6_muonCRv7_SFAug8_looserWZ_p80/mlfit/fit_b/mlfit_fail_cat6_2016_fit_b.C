void mlfit_fail_cat6_2016_fit_b()
{
//=========Macro generated from canvas: cfail_cat6_2016_fit_b/cfail_cat6_2016_fit_b
//=========  (Mon Sep 30 17:21:33 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat6_2016_fit_b = new TCanvas("cfail_cat6_2016_fit_b", "cfail_cat6_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat6_2016_fit_b->SetHighLightColor(2);
   cfail_cat6_2016_fit_b->Range(0,0,1,1);
   cfail_cat6_2016_fit_b->SetFillColor(0);
   cfail_cat6_2016_fit_b->SetBorderMode(0);
   cfail_cat6_2016_fit_b->SetBorderSize(2);
   cfail_cat6_2016_fit_b->SetTickx(1);
   cfail_cat6_2016_fit_b->SetTicky(1);
   cfail_cat6_2016_fit_b->SetLeftMargin(0.16);
   cfail_cat6_2016_fit_b->SetBottomMargin(0.13);
   cfail_cat6_2016_fit_b->SetFrameFillStyle(0);
   cfail_cat6_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat6_2016_fit_b
   TPad *p12fail_cat6_2016_fit_b = new TPad("p12fail_cat6_2016_fit_b", "p12fail_cat6_2016_fit_b",0,0.3,1,1);
   p12fail_cat6_2016_fit_b->Draw();
   p12fail_cat6_2016_fit_b->cd();
   p12fail_cat6_2016_fit_b->Range(13.7027,-306.6932,221.8108,15027.97);
   p12fail_cat6_2016_fit_b->SetFillColor(0);
   p12fail_cat6_2016_fit_b->SetBorderMode(0);
   p12fail_cat6_2016_fit_b->SetBorderSize(2);
   p12fail_cat6_2016_fit_b->SetTickx(1);
   p12fail_cat6_2016_fit_b->SetTicky(1);
   p12fail_cat6_2016_fit_b->SetLeftMargin(0.16);
   p12fail_cat6_2016_fit_b->SetBottomMargin(0.02);
   p12fail_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat6_2016_fit_b->SetFrameBorderMode(0);
   p12fail_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12fail_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat6_2016_fit_b__81 = new TH1F("htotfail_cat6_2016_fit_b__81","wqq in cat6_2016_fail_cat6",23,40,201);
   htotfail_cat6_2016_fit_b__81->SetBinContent(1,1.542179e-05);
   htotfail_cat6_2016_fit_b__81->SetBinContent(2,1.542179e-05);
   htotfail_cat6_2016_fit_b__81->SetBinContent(3,8996.334);
   htotfail_cat6_2016_fit_b__81->SetBinContent(4,8393.19);
   htotfail_cat6_2016_fit_b__81->SetBinContent(5,8033.272);
   htotfail_cat6_2016_fit_b__81->SetBinContent(6,7956.761);
   htotfail_cat6_2016_fit_b__81->SetBinContent(7,7472.047);
   htotfail_cat6_2016_fit_b__81->SetBinContent(8,6863.392);
   htotfail_cat6_2016_fit_b__81->SetBinContent(9,6241.444);
   htotfail_cat6_2016_fit_b__81->SetBinContent(10,5868.425);
   htotfail_cat6_2016_fit_b__81->SetBinContent(11,5476.466);
   htotfail_cat6_2016_fit_b__81->SetBinContent(12,5242.265);
   htotfail_cat6_2016_fit_b__81->SetBinContent(13,4963.833);
   htotfail_cat6_2016_fit_b__81->SetBinContent(14,4758.422);
   htotfail_cat6_2016_fit_b__81->SetBinContent(15,4581.582);
   htotfail_cat6_2016_fit_b__81->SetBinContent(16,4405.445);
   htotfail_cat6_2016_fit_b__81->SetBinContent(17,4393.794);
   htotfail_cat6_2016_fit_b__81->SetBinContent(18,4265.194);
   htotfail_cat6_2016_fit_b__81->SetBinContent(19,4221.934);
   htotfail_cat6_2016_fit_b__81->SetBinContent(20,3982.573);
   htotfail_cat6_2016_fit_b__81->SetBinContent(21,3965.295);
   htotfail_cat6_2016_fit_b__81->SetBinContent(22,3893.873);
   htotfail_cat6_2016_fit_b__81->SetBinContent(23,3835.641);
   htotfail_cat6_2016_fit_b__81->SetMinimum(0);
   htotfail_cat6_2016_fit_b__81->SetMaximum(13494.5);
   htotfail_cat6_2016_fit_b__81->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat6_2016_fit_b__81->SetFillColor(ci);
   htotfail_cat6_2016_fit_b__81->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat6_2016_fit_b__81->SetLineColor(ci);
   htotfail_cat6_2016_fit_b__81->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat6_2016_fit_b__81->SetMarkerColor(ci);
   htotfail_cat6_2016_fit_b__81->SetMarkerSize(0);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetRange(2,23);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetLabelOffset(100);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetTitleOffset(100);
   htotfail_cat6_2016_fit_b__81->GetXaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b__81->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat6_2016_fit_b__81->GetYaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b__81->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat6_2016_fit_b__81->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat6_2016_fit_b__81->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat6_2016_fit_b__81->GetYaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b__81->GetZaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b__81->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat6_2016_fit_b__81->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat6_2016_fit_b__81->GetZaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b__81->Draw("");
   
   TH1F *htot_linefail_cat6_2016_fit_b__82 = new TH1F("htot_linefail_cat6_2016_fit_b__82","wqq in cat6_2016_fail_cat6",23,40,201);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(1,1.542179e-05);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(2,1.542179e-05);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(3,8996.334);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(4,8393.19);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(5,8033.272);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(6,7956.761);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(7,7472.047);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(8,6863.392);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(9,6241.444);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(10,5868.425);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(11,5476.466);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(12,5242.265);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(13,4963.833);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(14,4758.422);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(15,4581.582);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(16,4405.445);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(17,4393.794);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(18,4265.194);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(19,4221.934);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(20,3982.573);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(21,3965.295);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(22,3893.873);
   htot_linefail_cat6_2016_fit_b__82->SetBinContent(23,3835.641);
   htot_linefail_cat6_2016_fit_b__82->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat6_2016_fit_b__82->SetFillColor(ci);
   htot_linefail_cat6_2016_fit_b__82->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat6_2016_fit_b__82->SetLineColor(ci);
   htot_linefail_cat6_2016_fit_b__82->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat6_2016_fit_b__82->SetMarkerColor(ci);
   htot_linefail_cat6_2016_fit_b__82->SetMarkerSize(0);
   htot_linefail_cat6_2016_fit_b__82->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat6_2016_fit_b__82->GetXaxis()->SetRange(2,23);
   htot_linefail_cat6_2016_fit_b__82->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat6_2016_fit_b__82->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat6_2016_fit_b__82->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat6_2016_fit_b__82->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat6_2016_fit_b__82->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat6_2016_fit_b__82->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat6_2016_fit_b__82->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat6_2016_fit_b__82->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat6_2016_fit_b__82->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat6_2016_fit_b__82->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat6_2016_fit_b__82->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat6_2016_fit_b__82->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat6_2016_fit_b__82->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat6_2016_fit_b__82->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat6_2016_fit_b__82->Draw("histsame");
   
   TH1F *qcd__83 = new TH1F("qcd__83","qcd in cat6_2016_fail_cat6",23,40,201);
   qcd__83->SetBinContent(3,8946.898);
   qcd__83->SetBinContent(4,8251.431);
   qcd__83->SetBinContent(5,7757.328);
   qcd__83->SetBinContent(6,7451.761);
   qcd__83->SetBinContent(7,6895.196);
   qcd__83->SetBinContent(8,6451.688);
   qcd__83->SetBinContent(9,5997.257);
   qcd__83->SetBinContent(10,5743.851);
   qcd__83->SetBinContent(11,5398.193);
   qcd__83->SetBinContent(12,5188.858);
   qcd__83->SetBinContent(13,4920.294);
   qcd__83->SetBinContent(14,4716.864);
   qcd__83->SetBinContent(15,4549.497);
   qcd__83->SetBinContent(16,4377.248);
   qcd__83->SetBinContent(17,4372.101);
   qcd__83->SetBinContent(18,4249.436);
   qcd__83->SetBinContent(19,4205.363);
   qcd__83->SetBinContent(20,3970.076);
   qcd__83->SetBinContent(21,3954.498);
   qcd__83->SetBinContent(22,3884.926);
   qcd__83->SetBinContent(23,3829.697);
   qcd__83->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__83->SetLineColor(ci);
   qcd__83->SetLineStyle(2);
   qcd__83->SetLineWidth(2);
   qcd__83->GetXaxis()->SetTitle("x");
   qcd__83->GetXaxis()->SetLabelFont(42);
   qcd__83->GetXaxis()->SetLabelSize(0.035);
   qcd__83->GetXaxis()->SetTitleSize(0.035);
   qcd__83->GetXaxis()->SetTitleFont(42);
   qcd__83->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__83->GetYaxis()->SetLabelFont(42);
   qcd__83->GetYaxis()->SetLabelSize(0.035);
   qcd__83->GetYaxis()->SetTitleSize(0.035);
   qcd__83->GetYaxis()->SetTitleOffset(0);
   qcd__83->GetYaxis()->SetTitleFont(42);
   qcd__83->GetZaxis()->SetLabelFont(42);
   qcd__83->GetZaxis()->SetLabelSize(0.035);
   qcd__83->GetZaxis()->SetTitleSize(0.035);
   qcd__83->GetZaxis()->SetTitleFont(42);
   qcd__83->Draw("hist sames");
   
   TH1F *htotfail_cat6_2016_fit_b__84 = new TH1F("htotfail_cat6_2016_fit_b__84","wqq in cat6_2016_fail_cat6",23,40,201);
   htotfail_cat6_2016_fit_b__84->SetBinContent(1,1.542179e-05);
   htotfail_cat6_2016_fit_b__84->SetBinContent(2,1.542179e-05);
   htotfail_cat6_2016_fit_b__84->SetBinContent(3,8996.334);
   htotfail_cat6_2016_fit_b__84->SetBinContent(4,8393.19);
   htotfail_cat6_2016_fit_b__84->SetBinContent(5,8033.272);
   htotfail_cat6_2016_fit_b__84->SetBinContent(6,7956.761);
   htotfail_cat6_2016_fit_b__84->SetBinContent(7,7472.047);
   htotfail_cat6_2016_fit_b__84->SetBinContent(8,6863.392);
   htotfail_cat6_2016_fit_b__84->SetBinContent(9,6241.444);
   htotfail_cat6_2016_fit_b__84->SetBinContent(10,5868.425);
   htotfail_cat6_2016_fit_b__84->SetBinContent(11,5476.466);
   htotfail_cat6_2016_fit_b__84->SetBinContent(12,5242.265);
   htotfail_cat6_2016_fit_b__84->SetBinContent(13,4963.833);
   htotfail_cat6_2016_fit_b__84->SetBinContent(14,4758.422);
   htotfail_cat6_2016_fit_b__84->SetBinContent(15,4581.582);
   htotfail_cat6_2016_fit_b__84->SetBinContent(16,4405.445);
   htotfail_cat6_2016_fit_b__84->SetBinContent(17,4393.794);
   htotfail_cat6_2016_fit_b__84->SetBinContent(18,4265.194);
   htotfail_cat6_2016_fit_b__84->SetBinContent(19,4221.934);
   htotfail_cat6_2016_fit_b__84->SetBinContent(20,3982.573);
   htotfail_cat6_2016_fit_b__84->SetBinContent(21,3965.295);
   htotfail_cat6_2016_fit_b__84->SetBinContent(22,3893.873);
   htotfail_cat6_2016_fit_b__84->SetBinContent(23,3835.641);
   htotfail_cat6_2016_fit_b__84->SetMinimum(0);
   htotfail_cat6_2016_fit_b__84->SetMaximum(13494.5);
   htotfail_cat6_2016_fit_b__84->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat6_2016_fit_b__84->SetFillColor(ci);
   htotfail_cat6_2016_fit_b__84->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat6_2016_fit_b__84->SetLineColor(ci);
   htotfail_cat6_2016_fit_b__84->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat6_2016_fit_b__84->SetMarkerColor(ci);
   htotfail_cat6_2016_fit_b__84->SetMarkerSize(0);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetRange(2,23);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetLabelOffset(100);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetTitleOffset(100);
   htotfail_cat6_2016_fit_b__84->GetXaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b__84->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat6_2016_fit_b__84->GetYaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b__84->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat6_2016_fit_b__84->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat6_2016_fit_b__84->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat6_2016_fit_b__84->GetYaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b__84->GetZaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b__84->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat6_2016_fit_b__84->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat6_2016_fit_b__84->GetZaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b__84->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis21[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_21 = new TH1F("hstackMC_stack_21","hstackMC",23, xAxis21);
   hstackMC_stack_21->SetMinimum(0);
   hstackMC_stack_21->SetMaximum(605.6938);
   hstackMC_stack_21->SetDirectory(0);
   hstackMC_stack_21->SetStats(0);
   hstackMC_stack_21->SetLineStyle(0);
   hstackMC_stack_21->SetMarkerStyle(20);
   hstackMC_stack_21->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_21->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_21->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_21->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_21->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_21->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_21->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_21->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_21->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_21->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_21->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_21->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_21->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_21->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_21->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_21->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_21->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_21);
   
   Double_t xAxis22[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat6_2016_fail_cat6",23, xAxis22);
   tqq_stack_1->SetBinContent(3,11.71749);
   tqq_stack_1->SetBinContent(4,13.46829);
   tqq_stack_1->SetBinContent(5,21.89845);
   tqq_stack_1->SetBinContent(6,45.81918);
   tqq_stack_1->SetBinContent(7,54.23192);
   tqq_stack_1->SetBinContent(8,37.41718);
   tqq_stack_1->SetBinContent(9,22.59961);
   tqq_stack_1->SetBinContent(10,25.09135);
   tqq_stack_1->SetBinContent(11,27.78015);
   tqq_stack_1->SetBinContent(12,29.00581);
   tqq_stack_1->SetBinContent(13,30.16527);
   tqq_stack_1->SetBinContent(14,35.2638);
   tqq_stack_1->SetBinContent(15,27.73293);
   tqq_stack_1->SetBinContent(16,24.592);
   tqq_stack_1->SetBinContent(17,20.00326);
   tqq_stack_1->SetBinContent(18,14.06809);
   tqq_stack_1->SetBinContent(19,16.57103);
   tqq_stack_1->SetBinContent(20,12.49646);
   tqq_stack_1->SetBinContent(21,10.79728);
   tqq_stack_1->SetBinContent(22,8.946815);
   tqq_stack_1->SetBinContent(23,5.943365);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat6_2016_fail_cat6",23,40,201);
   wqq_stack_2->SetBinContent(1,1.092082e-05);
   wqq_stack_2->SetBinContent(2,1.092082e-05);
   wqq_stack_2->SetBinContent(3,33.85472);
   wqq_stack_2->SetBinContent(4,118.8644);
   wqq_stack_2->SetBinContent(5,228.2993);
   wqq_stack_2->SetBinContent(6,395.2634);
   wqq_stack_2->SetBinContent(7,404.3864);
   wqq_stack_2->SetBinContent(8,221.1156);
   wqq_stack_2->SetBinContent(9,96.60094);
   wqq_stack_2->SetBinContent(10,30.6413);
   wqq_stack_2->SetBinContent(11,14.05174);
   wqq_stack_2->SetBinContent(12,11.41296);
   wqq_stack_2->SetBinContent(13,5.62684);
   wqq_stack_2->SetBinContent(14,1.092082e-05);
   wqq_stack_2->SetBinContent(15,1.092082e-05);
   wqq_stack_2->SetBinContent(16,1.092082e-05);
   wqq_stack_2->SetBinContent(17,1.092082e-05);
   wqq_stack_2->SetBinContent(18,1.092082e-05);
   wqq_stack_2->SetBinContent(19,1.092082e-05);
   wqq_stack_2->SetBinContent(20,1.092082e-05);
   wqq_stack_2->SetBinContent(21,1.092082e-05);
   wqq_stack_2->SetBinContent(22,1.092082e-05);
   wqq_stack_2->SetBinContent(23,1.092082e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat6_2016_fail_cat6",23,40,201);
   zqq_stack_3->SetBinContent(1,4.500962e-06);
   zqq_stack_3->SetBinContent(2,4.500962e-06);
   zqq_stack_3->SetBinContent(3,3.863377);
   zqq_stack_3->SetBinContent(4,9.426834);
   zqq_stack_3->SetBinContent(5,25.74659);
   zqq_stack_3->SetBinContent(6,63.9174);
   zqq_stack_3->SetBinContent(7,118.2329);
   zqq_stack_3->SetBinContent(8,153.171);
   zqq_stack_3->SetBinContent(9,124.9871);
   zqq_stack_3->SetBinContent(10,68.842);
   zqq_stack_3->SetBinContent(11,36.44104);
   zqq_stack_3->SetBinContent(12,12.98819);
   zqq_stack_3->SetBinContent(13,7.746063);
   zqq_stack_3->SetBinContent(14,6.293764);
   zqq_stack_3->SetBinContent(15,4.352185);
   zqq_stack_3->SetBinContent(16,3.605231);
   zqq_stack_3->SetBinContent(17,1.690441);
   zqq_stack_3->SetBinContent(18,1.690441);
   zqq_stack_3->SetBinContent(19,4.500962e-06);
   zqq_stack_3->SetBinContent(20,4.500962e-06);
   zqq_stack_3->SetBinContent(21,4.500962e-06);
   zqq_stack_3->SetBinContent(22,4.500962e-06);
   zqq_stack_3->SetBinContent(23,4.500962e-06);
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
   
   TH1F *hsigfail_cat6_2016_fit_b_stack_4 = new TH1F("hsigfail_cat6_2016_fit_b_stack_4","ggH_hbb in cat6_2016_fail_cat6",23,40,201);
   hsigfail_cat6_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat6_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat6_2016_fit_b_stack_4->SetLineColor(ci);
   hsigfail_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat6_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3021[23] = {
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
   Double_t data_copy_fy3021[23] = {
   0,
   0,
   8990,
   8408,
   8040,
   7951,
   7461,
   6870,
   6240,
   5860,
   5492,
   5241,
   4953,
   4765,
   4579,
   4405,
   4396,
   4280,
   4209,
   3975,
   3969,
   3900,
   3841};
   Double_t data_copy_felx3021[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3021[23] = {
   1.841055,
   1.841055,
   95.8212,
   92.70079,
   90.67173,
   90.17407,
   87.38283,
   83.8913,
   79.99962,
   77.55667,
   75.11415,
   73.40094,
   71.38383,
   70.03532,
   68.67472,
   67.37665,
   67.30882,
   66.42824,
   65.88337,
   64.05427,
   64.00668,
   63.45669,
   62.98254};
   Double_t data_copy_fehx3021[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3021[23] = {
   0,
   0,
   94.8159,
   91.69531,
   89.66612,
   89.16843,
   86.37701,
   82.88524,
   78.99326,
   76.55011,
   74.10737,
   72.394,
   70.3767,
   69.02805,
   67.6673,
   66.36909,
   66.30125,
   65.42057,
   64.87563,
   63.04631,
   62.99871,
   62.44865,
   61.97444};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3021,data_copy_fy3021,data_copy_felx3021,data_copy_fehx3021,data_copy_fely3021,data_copy_fehy3021);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat6_2016_fail_cat6");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3021 = new TH1F("Graph_data_copy3021","WH_hbb in cat6_2016_fail_cat6",100,28.1,212.9);
   Graph_data_copy3021->SetMinimum(0);
   Graph_data_copy3021->SetMaximum(9993.482);
   Graph_data_copy3021->SetDirectory(0);
   Graph_data_copy3021->SetStats(0);
   Graph_data_copy3021->SetLineStyle(0);
   Graph_data_copy3021->SetMarkerStyle(20);
   Graph_data_copy3021->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3021->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3021->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3021->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3021->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3021->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3021->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3021->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3021->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3021->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3021->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3021);
   
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
   entry=leg->AddEntry("htotfail_cat6_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat6_2016_fit_b_copy__85 = new TH1F("htotfail_cat6_2016_fit_b_copy__85","wqq in cat6_2016_fail_cat6",23,40,201);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(1,1.542179e-05);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(2,1.542179e-05);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(3,8996.334);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(4,8393.19);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(5,8033.272);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(6,7956.761);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(7,7472.047);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(8,6863.392);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(9,6241.444);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(10,5868.425);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(11,5476.466);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(12,5242.265);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(13,4963.833);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(14,4758.422);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(15,4581.582);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(16,4405.445);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(17,4393.794);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(18,4265.194);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(19,4221.934);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(20,3982.573);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(21,3965.295);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(22,3893.873);
   htotfail_cat6_2016_fit_b_copy__85->SetBinContent(23,3835.641);
   htotfail_cat6_2016_fit_b_copy__85->SetMaximum(13494.5);
   htotfail_cat6_2016_fit_b_copy__85->SetEntries(92);
   htotfail_cat6_2016_fit_b_copy__85->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat6_2016_fit_b_copy__85->SetFillColor(ci);
   htotfail_cat6_2016_fit_b_copy__85->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat6_2016_fit_b_copy__85->SetLineColor(ci);
   htotfail_cat6_2016_fit_b_copy__85->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat6_2016_fit_b_copy__85->SetMarkerColor(ci);
   htotfail_cat6_2016_fit_b_copy__85->SetMarkerSize(0);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetRange(2,23);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetLabelOffset(100);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetTitleOffset(100);
   htotfail_cat6_2016_fit_b_copy__85->GetXaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b_copy__85->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat6_2016_fit_b_copy__85->GetYaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b_copy__85->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat6_2016_fit_b_copy__85->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat6_2016_fit_b_copy__85->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat6_2016_fit_b_copy__85->GetYaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b_copy__85->GetZaxis()->SetLabelFont(42);
   htotfail_cat6_2016_fit_b_copy__85->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat6_2016_fit_b_copy__85->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat6_2016_fit_b_copy__85->GetZaxis()->SetTitleFont(42);
   htotfail_cat6_2016_fit_b_copy__85->Draw("sameaxis");
   p12fail_cat6_2016_fit_b->Modified();
   cfail_cat6_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22fail_cat6_2016_fit_b
   TPad *p22fail_cat6_2016_fit_b = new TPad("p22fail_cat6_2016_fit_b", "p22fail_cat6_2016_fit_b",0,0,1,0.3);
   p22fail_cat6_2016_fit_b->Draw();
   p22fail_cat6_2016_fit_b->cd();
   p22fail_cat6_2016_fit_b->Range(13.7027,-11.36072,221.8108,9.84169);
   p22fail_cat6_2016_fit_b->SetFillColor(0);
   p22fail_cat6_2016_fit_b->SetBorderMode(0);
   p22fail_cat6_2016_fit_b->SetBorderSize(2);
   p22fail_cat6_2016_fit_b->SetTickx(1);
   p22fail_cat6_2016_fit_b->SetTicky(1);
   p22fail_cat6_2016_fit_b->SetLeftMargin(0.16);
   p22fail_cat6_2016_fit_b->SetTopMargin(0.05);
   p22fail_cat6_2016_fit_b->SetBottomMargin(0.3);
   p22fail_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat6_2016_fit_b->SetFrameBorderMode(0);
   p22fail_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22fail_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat6_2016_fit_b__86 = new TH1F("iOneWithErrorsfail_cat6_2016_fit_b__86","",23,40,201);
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetMinimum(-5);
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetMaximum(8.78157);
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetFillColor(ci);
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetLineColor(ci);
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetMarkerColor(ci);
   iOneWithErrorsfail_cat6_2016_fit_b__86->SetMarkerSize(0);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat6_2016_fit_b__86->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b__86->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_22 = new TH1F("hstack_stack_22","hstack",23,40,201);
   hstack_stack_22->SetMinimum(0);
   hstack_stack_22->SetMaximum(6.352967);
   hstack_stack_22->SetDirectory(0);
   hstack_stack_22->SetStats(0);
   hstack_stack_22->SetLineStyle(0);
   hstack_stack_22->SetMarkerStyle(20);
   hstack_stack_22->GetXaxis()->SetLabelFont(42);
   hstack_stack_22->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_22->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_22->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_22->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_22->GetXaxis()->SetTitleFont(42);
   hstack_stack_22->GetYaxis()->SetLabelFont(42);
   hstack_stack_22->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_22->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_22->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_22->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_22->GetYaxis()->SetTitleFont(42);
   hstack_stack_22->GetZaxis()->SetLabelFont(42);
   hstack_stack_22->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_22->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_22->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_22->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_22);
   
   
   TH1F *sigHistResidualwqqfail_cat6_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqfail_cat6_2016_fit_b_stack_1","wqq in cat6_2016_fail_cat6",23,40,201);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(3,0.3570575);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(4,1.296297);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(5,2.546105);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(6,4.432773);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(7,4.681644);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(8,2.667732);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(9,1.222901);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(10,0.4002776);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(11,0.1896133);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(12,0.1576506);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(13,0.07995317);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(14,1.582085e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(15,1.6139e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(16,1.645468e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(17,1.647152e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(18,1.669326e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(19,1.683348e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(20,1.732191e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(21,1.7335e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(22,1.748769e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetBinContent(23,1.76215e-07);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat6_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat6_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqfail_cat6_2016_fit_b_stack_2","zqq in cat6_2016_fail_cat6",23,40,201);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(3,0.04074609);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(4,0.1028061);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(5,0.2871385);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(6,0.7168165);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(7,1.3688);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(8,1.847988);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(9,1.582251);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(10,0.8993064);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(11,0.491733);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(12,0.1794098);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(13,0.1100657);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(14,0.0911769);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(15,0.0643174);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(16,0.05432094);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(17,0.02549637);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(18,0.0258396);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(19,6.937832e-08);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(20,7.139136e-08);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(21,7.144531e-08);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(22,7.207461e-08);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetBinContent(23,7.26261e-08);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat6_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3","ggH_hbb in cat6_2016_fail_cat6",23,40,201);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat6_2016_fit_bfail_cat6_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat6_2016_fit_b__87 = new TH1F("iOneWithErrorsLinefail_cat6_2016_fit_b__87","",23,40,201);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetFillColor(ci);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetLineColor(ci);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat6_2016_fit_b__87->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat6_2016_fit_b_fx3022[23] = {
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
   Double_t Graph_from_iRatiofail_cat6_2016_fit_b_fy3022[23] = {
   0,
   0,
   0.3275245,
   1.543682,
   2.876017,
   5.028274,
   5.85438,
   4.54034,
   2.751807,
   1.174085,
   0.8790137,
   0.3151968,
   0.03558967,
   0.183794,
   0.02577396,
   0.04691008,
   0.0578824,
   0.2483369,
   -0.1993673,
   -0.1201064,
   0.05788581,
   0.09655716,
   0.08509302};
   Double_t Graph_from_iRatiofail_cat6_2016_fit_b_felx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat6_2016_fit_b_fely3022[23] = {
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
   Double_t Graph_from_iRatiofail_cat6_2016_fit_b_fehx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat6_2016_fit_b_fehy3022[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat6_2016_fit_b_fx3022,Graph_from_iRatiofail_cat6_2016_fit_b_fy3022,Graph_from_iRatiofail_cat6_2016_fit_b_felx3022,Graph_from_iRatiofail_cat6_2016_fit_b_fehx3022,Graph_from_iRatiofail_cat6_2016_fit_b_fely3022,Graph_from_iRatiofail_cat6_2016_fit_b_fehy3022);
   grae->SetName("Graph_from_iRatiofail_cat6_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022 = new TH1F("Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->SetMinimum(-2.004742);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->SetMaximum(7.659754);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->SetStats(0);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat6_2016_fit_b3022);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat6_2016_fit_b_copy__88 = new TH1F("iOneWithErrorsfail_cat6_2016_fit_b_copy__88","",23,40,201);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetMinimum(-5);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetMaximum(8.78157);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetEntries(184);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetFillColor(ci);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetLineColor(ci);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetMarkerColor(ci);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->SetMarkerSize(0);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat6_2016_fit_b_copy__88->Draw("sameaxis");
   p22fail_cat6_2016_fit_b->Modified();
   cfail_cat6_2016_fit_b->cd();
   cfail_cat6_2016_fit_b->Modified();
   cfail_cat6_2016_fit_b->cd();
   cfail_cat6_2016_fit_b->SetSelected(cfail_cat6_2016_fit_b);
}
