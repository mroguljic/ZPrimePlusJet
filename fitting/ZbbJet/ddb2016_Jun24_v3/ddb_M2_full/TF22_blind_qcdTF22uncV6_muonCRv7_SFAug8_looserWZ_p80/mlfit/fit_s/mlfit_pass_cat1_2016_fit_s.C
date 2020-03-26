void mlfit_pass_cat1_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_s/cpass_cat1_2016_fit_s
//=========  (Wed Sep  4 11:54:22 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat1_2016_fit_s = new TCanvas("cpass_cat1_2016_fit_s", "cpass_cat1_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat1_2016_fit_s->SetHighLightColor(2);
   cpass_cat1_2016_fit_s->Range(0,0,1,1);
   cpass_cat1_2016_fit_s->SetFillColor(0);
   cpass_cat1_2016_fit_s->SetBorderMode(0);
   cpass_cat1_2016_fit_s->SetBorderSize(2);
   cpass_cat1_2016_fit_s->SetTickx(1);
   cpass_cat1_2016_fit_s->SetTicky(1);
   cpass_cat1_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat1_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat1_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat1_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat1_2016_fit_s
   TPad *p12pass_cat1_2016_fit_s = new TPad("p12pass_cat1_2016_fit_s", "p12pass_cat1_2016_fit_s",0,0.3,1,1);
   p12pass_cat1_2016_fit_s->Draw();
   p12pass_cat1_2016_fit_s->cd();
   p12pass_cat1_2016_fit_s->Range(21.27027,-92.3194,182.0811,4523.65);
   p12pass_cat1_2016_fit_s->SetFillColor(0);
   p12pass_cat1_2016_fit_s->SetBorderMode(0);
   p12pass_cat1_2016_fit_s->SetBorderSize(2);
   p12pass_cat1_2016_fit_s->SetTickx(1);
   p12pass_cat1_2016_fit_s->SetTicky(1);
   p12pass_cat1_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat1_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat1_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat1_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat1_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat1_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat1_2016_fit_s__9 = new TH1F("htotpass_cat1_2016_fit_s__9","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_s__9->SetBinContent(1,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(2,2364.085);
   htotpass_cat1_2016_fit_s__9->SetBinContent(3,2504.61);
   htotpass_cat1_2016_fit_s__9->SetBinContent(4,2506.535);
   htotpass_cat1_2016_fit_s__9->SetBinContent(5,2536.489);
   htotpass_cat1_2016_fit_s__9->SetBinContent(6,2645.57);
   htotpass_cat1_2016_fit_s__9->SetBinContent(7,2708.036);
   htotpass_cat1_2016_fit_s__9->SetBinContent(8,2558.209);
   htotpass_cat1_2016_fit_s__9->SetBinContent(9,2208.405);
   htotpass_cat1_2016_fit_s__9->SetBinContent(10,1993.782);
   htotpass_cat1_2016_fit_s__9->SetBinContent(11,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(12,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(13,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(14,1171.675);
   htotpass_cat1_2016_fit_s__9->SetBinContent(15,967.077);
   htotpass_cat1_2016_fit_s__9->SetBinContent(16,779.6867);
   htotpass_cat1_2016_fit_s__9->SetBinContent(17,620.5775);
   htotpass_cat1_2016_fit_s__9->SetBinContent(18,473.0275);
   htotpass_cat1_2016_fit_s__9->SetBinContent(19,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(20,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(21,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(22,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(23,1.138622e-05);
   htotpass_cat1_2016_fit_s__9->SetMinimum(0);
   htotpass_cat1_2016_fit_s__9->SetMaximum(4062.053);
   htotpass_cat1_2016_fit_s__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__9->SetFillColor(ci);
   htotpass_cat1_2016_fit_s__9->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__9->SetLineColor(ci);
   htotpass_cat1_2016_fit_s__9->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_s__9->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_s__9->SetMarkerSize(0);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_s__9->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__9->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_s__9->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__9->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_s__9->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_s__9->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_s__9->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__9->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__9->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s__9->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s__9->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__9->Draw("");
   
   TH1F *htot_linepass_cat1_2016_fit_s__10 = new TH1F("htot_linepass_cat1_2016_fit_s__10","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(1,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(2,2364.085);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(3,2504.61);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(4,2506.535);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(5,2536.489);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(6,2645.57);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(7,2708.036);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(8,2558.209);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(9,2208.405);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(10,1993.782);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(11,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(12,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(13,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(14,1171.675);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(15,967.077);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(16,779.6867);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(17,620.5775);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(18,473.0275);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(19,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(20,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(21,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(22,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(23,1.138622e-05);
   htot_linepass_cat1_2016_fit_s__10->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_s__10->SetFillColor(ci);
   htot_linepass_cat1_2016_fit_s__10->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_s__10->SetLineColor(ci);
   htot_linepass_cat1_2016_fit_s__10->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat1_2016_fit_s__10->SetMarkerColor(ci);
   htot_linepass_cat1_2016_fit_s__10->SetMarkerSize(0);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetRange(2,18);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_s__10->Draw("histsame");
   
   TH1F *qcd__11 = new TH1F("qcd__11","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__11->SetBinContent(2,2343.337);
   qcd__11->SetBinContent(3,2464.778);
   qcd__11->SetBinContent(4,2429.787);
   qcd__11->SetBinContent(5,2365.015);
   qcd__11->SetBinContent(6,2279.99);
   qcd__11->SetBinContent(7,2190.975);
   qcd__11->SetBinContent(8,2103.152);
   qcd__11->SetBinContent(9,1965.207);
   qcd__11->SetBinContent(10,1828.678);
   qcd__11->SetBinContent(14,1127.003);
   qcd__11->SetBinContent(15,935.056);
   qcd__11->SetBinContent(16,762.3081);
   qcd__11->SetBinContent(17,605.9785);
   qcd__11->SetBinContent(18,462.3384);
   qcd__11->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__11->SetLineColor(ci);
   qcd__11->SetLineStyle(2);
   qcd__11->SetLineWidth(2);
   qcd__11->GetXaxis()->SetTitle("x");
   qcd__11->GetXaxis()->SetLabelFont(42);
   qcd__11->GetXaxis()->SetLabelSize(0.035);
   qcd__11->GetXaxis()->SetTitleSize(0.035);
   qcd__11->GetXaxis()->SetTitleFont(42);
   qcd__11->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__11->GetYaxis()->SetLabelFont(42);
   qcd__11->GetYaxis()->SetLabelSize(0.035);
   qcd__11->GetYaxis()->SetTitleSize(0.035);
   qcd__11->GetYaxis()->SetTitleOffset(0);
   qcd__11->GetYaxis()->SetTitleFont(42);
   qcd__11->GetZaxis()->SetLabelFont(42);
   qcd__11->GetZaxis()->SetLabelSize(0.035);
   qcd__11->GetZaxis()->SetTitleSize(0.035);
   qcd__11->GetZaxis()->SetTitleFont(42);
   qcd__11->Draw("hist sames");
   
   TH1F *htotpass_cat1_2016_fit_s__12 = new TH1F("htotpass_cat1_2016_fit_s__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_s__12->SetBinContent(1,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(2,2364.085);
   htotpass_cat1_2016_fit_s__12->SetBinContent(3,2504.61);
   htotpass_cat1_2016_fit_s__12->SetBinContent(4,2506.535);
   htotpass_cat1_2016_fit_s__12->SetBinContent(5,2536.489);
   htotpass_cat1_2016_fit_s__12->SetBinContent(6,2645.57);
   htotpass_cat1_2016_fit_s__12->SetBinContent(7,2708.036);
   htotpass_cat1_2016_fit_s__12->SetBinContent(8,2558.209);
   htotpass_cat1_2016_fit_s__12->SetBinContent(9,2208.405);
   htotpass_cat1_2016_fit_s__12->SetBinContent(10,1993.782);
   htotpass_cat1_2016_fit_s__12->SetBinContent(11,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(12,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(13,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(14,1171.675);
   htotpass_cat1_2016_fit_s__12->SetBinContent(15,967.077);
   htotpass_cat1_2016_fit_s__12->SetBinContent(16,779.6867);
   htotpass_cat1_2016_fit_s__12->SetBinContent(17,620.5775);
   htotpass_cat1_2016_fit_s__12->SetBinContent(18,473.0275);
   htotpass_cat1_2016_fit_s__12->SetBinContent(19,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(20,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(21,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(22,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(23,1.138622e-05);
   htotpass_cat1_2016_fit_s__12->SetMinimum(0);
   htotpass_cat1_2016_fit_s__12->SetMaximum(4062.053);
   htotpass_cat1_2016_fit_s__12->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__12->SetFillColor(ci);
   htotpass_cat1_2016_fit_s__12->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__12->SetLineColor(ci);
   htotpass_cat1_2016_fit_s__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_s__12->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_s__12->SetMarkerSize(0);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__12->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis3[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_3 = new TH1F("hstackMC_stack_3","hstackMC",23, xAxis3);
   hstackMC_stack_3->SetMinimum(0);
   hstackMC_stack_3->SetMaximum(549.9953);
   hstackMC_stack_3->SetDirectory(0);
   hstackMC_stack_3->SetStats(0);
   hstackMC_stack_3->SetLineStyle(0);
   hstackMC_stack_3->SetMarkerStyle(20);
   hstackMC_stack_3->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_3->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_3->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_3->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_3->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_3->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_3->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_3->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_3->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_3->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_3->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_3->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_3->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_3->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_3->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_3->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_3);
   
   Double_t xAxis4[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat1_2016_pass_cat1",23, xAxis4);
   tqq_stack_1->SetBinContent(2,15.56497);
   tqq_stack_1->SetBinContent(3,25.16969);
   tqq_stack_1->SetBinContent(4,29.36986);
   tqq_stack_1->SetBinContent(5,39.08247);
   tqq_stack_1->SetBinContent(6,61.20469);
   tqq_stack_1->SetBinContent(7,66.69557);
   tqq_stack_1->SetBinContent(8,65.7117);
   tqq_stack_1->SetBinContent(9,59.59745);
   tqq_stack_1->SetBinContent(10,66.36425);
   tqq_stack_1->SetBinContent(14,44.10943);
   tqq_stack_1->SetBinContent(15,32.02098);
   tqq_stack_1->SetBinContent(16,17.37858);
   tqq_stack_1->SetBinContent(17,14.59901);
   tqq_stack_1->SetBinContent(18,10.68908);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat1_2016_pass_cat1",23,40,201);
   wqq_stack_2->SetBinContent(1,3.905854e-06);
   wqq_stack_2->SetBinContent(2,1.295798);
   wqq_stack_2->SetBinContent(3,7.186884);
   wqq_stack_2->SetBinContent(4,31.58079);
   wqq_stack_2->SetBinContent(5,74.90336);
   wqq_stack_2->SetBinContent(6,166.7587);
   wqq_stack_2->SetBinContent(7,153.8578);
   wqq_stack_2->SetBinContent(8,81.93714);
   wqq_stack_2->SetBinContent(9,33.31437);
   wqq_stack_2->SetBinContent(10,6.581738);
   wqq_stack_2->SetBinContent(11,3.905854e-06);
   wqq_stack_2->SetBinContent(12,3.905854e-06);
   wqq_stack_2->SetBinContent(13,3.905854e-06);
   wqq_stack_2->SetBinContent(14,0.5624983);
   wqq_stack_2->SetBinContent(15,3.905854e-06);
   wqq_stack_2->SetBinContent(16,3.905854e-06);
   wqq_stack_2->SetBinContent(17,3.905854e-06);
   wqq_stack_2->SetBinContent(18,3.905854e-06);
   wqq_stack_2->SetBinContent(19,3.905854e-06);
   wqq_stack_2->SetBinContent(20,3.905854e-06);
   wqq_stack_2->SetBinContent(21,3.905854e-06);
   wqq_stack_2->SetBinContent(22,3.905854e-06);
   wqq_stack_2->SetBinContent(23,3.905854e-06);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat1_2016_pass_cat1",23,40,201);
   zqq_stack_3->SetBinContent(1,7.480368e-06);
   zqq_stack_3->SetBinContent(2,3.887292);
   zqq_stack_3->SetBinContent(3,7.475616);
   zqq_stack_3->SetBinContent(4,15.79727);
   zqq_stack_3->SetBinContent(5,57.48863);
   zqq_stack_3->SetBinContent(6,137.6158);
   zqq_stack_3->SetBinContent(7,296.507);
   zqq_stack_3->SetBinContent(8,307.4081);
   zqq_stack_3->SetBinContent(9,150.2864);
   zqq_stack_3->SetBinContent(10,92.15793);
   zqq_stack_3->SetBinContent(11,7.480368e-06);
   zqq_stack_3->SetBinContent(12,7.480368e-06);
   zqq_stack_3->SetBinContent(13,7.480368e-06);
   zqq_stack_3->SetBinContent(14,7.480368e-06);
   zqq_stack_3->SetBinContent(15,7.480368e-06);
   zqq_stack_3->SetBinContent(16,7.480368e-06);
   zqq_stack_3->SetBinContent(17,7.480368e-06);
   zqq_stack_3->SetBinContent(18,7.480368e-06);
   zqq_stack_3->SetBinContent(19,7.480368e-06);
   zqq_stack_3->SetBinContent(20,7.480368e-06);
   zqq_stack_3->SetBinContent(21,7.480368e-06);
   zqq_stack_3->SetBinContent(22,7.480368e-06);
   zqq_stack_3->SetBinContent(23,7.480368e-06);
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
   
   TH1F *hsigpass_cat1_2016_fit_s_stack_4 = new TH1F("hsigpass_cat1_2016_fit_s_stack_4","hqq125 in cat1_2016_pass_cat1",23,40,201);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(1,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(2,0.227303);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(3,0.9428974);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(4,0.8799626);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(5,1.279085);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(6,2.720667);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(7,6.744692);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(8,11.0774);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(9,22.22383);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(10,47.02601);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(11,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(12,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(13,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(14,35.46333);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(15,15.36095);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(16,4.266422);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(17,0.9270818);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(18,0.7574111);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(19,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(20,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(21,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(22,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(23,1.049279e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat1_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat1_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat1_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat1_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat1_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat1_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat1_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat1_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3003[23] = {
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
   Double_t data_copy_fy3003[23] = {
   0,
   2385,
   2512,
   2488,
   2542,
   2647,
   2695,
   2584,
   2349,
   2055,
   0,
   0,
   0,
   1171,
   958,
   835,
   590,
   502,
   0,
   0,
   0,
   0,
   0};
   Double_t data_copy_felx3003[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3003[23] = {
   1.841055,
   49.84437,
   51.12761,
   50.88764,
   51.42597,
   52.45662,
   52.92095,
   51.84074,
   49.47443,
   46.34046,
   1.841055,
   1.841055,
   1.841055,
   35.23038,
   31.96304,
   29.90855,
   25.30419,
   23.42075,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3003[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3003[23] = {
   0,
   48.83409,
   50.1176,
   49.87758,
   50.41602,
   51.44686,
   51.91129,
   50.83087,
   48.46408,
   45.3294,
   0,
   0,
   0,
   34.21573,
   30.94684,
   28.8912,
   24.28355,
   22.39837,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3003,data_copy_fy3003,data_copy_felx3003,data_copy_fehx3003,data_copy_fely3003,data_copy_fehy3003);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3003 = new TH1F("Graph_data_copy3003","tqq in cat1_2016_pass_cat1",100,28.1,212.9);
   Graph_data_copy3003->SetMinimum(0);
   Graph_data_copy3003->SetMaximum(3021.787);
   Graph_data_copy3003->SetDirectory(0);
   Graph_data_copy3003->SetStats(0);
   Graph_data_copy3003->SetLineStyle(0);
   Graph_data_copy3003->SetMarkerStyle(20);
   Graph_data_copy3003->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3003->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3003->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3003->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3003->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3003->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3003->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3003->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3003->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3003->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3003->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3003);
   
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
   entry=leg->AddEntry("htotpass_cat1_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat1_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat1_2016_fit_s_copy__13 = new TH1F("htotpass_cat1_2016_fit_s_copy__13","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(1,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(2,2364.085);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(3,2504.61);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(4,2506.535);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(5,2536.489);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(6,2645.57);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(7,2708.036);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(8,2558.209);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(9,2208.405);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(10,1993.782);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(11,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(12,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(13,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(14,1171.675);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(15,967.077);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(16,779.6867);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(17,620.5775);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(18,473.0275);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(19,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(20,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(21,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(22,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(23,1.138622e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetMaximum(4062.053);
   htotpass_cat1_2016_fit_s_copy__13->SetEntries(92);
   htotpass_cat1_2016_fit_s_copy__13->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s_copy__13->SetFillColor(ci);
   htotpass_cat1_2016_fit_s_copy__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s_copy__13->SetLineColor(ci);
   htotpass_cat1_2016_fit_s_copy__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_s_copy__13->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_s_copy__13->SetMarkerSize(0);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__13->Draw("sameaxis");
   p12pass_cat1_2016_fit_s->Modified();
   cpass_cat1_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_fit_s
   TPad *p22pass_cat1_2016_fit_s = new TPad("p22pass_cat1_2016_fit_s", "p22pass_cat1_2016_fit_s",0,0,1,0.3);
   p22pass_cat1_2016_fit_s->Draw();
   p22pass_cat1_2016_fit_s->cd();
   p22pass_cat1_2016_fit_s->Range(21.27027,-13.0288,182.0811,13.73386);
   p22pass_cat1_2016_fit_s->SetFillColor(0);
   p22pass_cat1_2016_fit_s->SetBorderMode(0);
   p22pass_cat1_2016_fit_s->SetBorderSize(2);
   p22pass_cat1_2016_fit_s->SetTickx(1);
   p22pass_cat1_2016_fit_s->SetTicky(1);
   p22pass_cat1_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat1_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat1_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat1_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat1_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat1_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat1_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_s__14 = new TH1F("iOneWithErrorspass_cat1_2016_fit_s__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMaximum(12.39573);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s__14->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_s__14->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__14->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(0);
   hstack_stack_4->SetMaximum(9.245868);
   hstack_stack_4->SetDirectory(0);
   hstack_stack_4->SetStats(0);
   hstack_stack_4->SetLineStyle(0);
   hstack_stack_4->SetMarkerStyle(20);
   hstack_stack_4->GetXaxis()->SetLabelFont(42);
   hstack_stack_4->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_4->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_4->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_4->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_4->GetXaxis()->SetTitleFont(42);
   hstack_stack_4->GetYaxis()->SetLabelFont(42);
   hstack_stack_4->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_4->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_4->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_4->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_4->GetYaxis()->SetTitleFont(42);
   hstack_stack_4->GetZaxis()->SetLabelFont(42);
   hstack_stack_4->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_4->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_4->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_4->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_4);
   
   
   TH1F *sigHistResidualwqqpass_cat1_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat1_2016_fit_s_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(2,0.0265347);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(3,0.1434004);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(4,0.6331661);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(5,1.485705);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(6,3.241378);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(7,2.96386);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(8,1.611956);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(9,0.6874033);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(10,0.145198);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(14,0.01643976);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(15,1.262117e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(16,1.351918e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(17,1.608436e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(18,1.743811e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat1_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat1_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat1_2016_fit_s_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(2,0.07960202);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(3,0.1491615);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(4,0.3167208);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(5,1.140285);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(6,2.674911);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(7,5.711802);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(8,6.047666);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(9,3.100986);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(10,2.033072);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(14,2.186237e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(15,2.417167e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(16,2.589151e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(17,3.080426e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(18,3.339692e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat1_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3","hqq125 in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(2,0.004654596);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(3,0.0188137);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(4,0.01764245);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(5,0.02537061);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(6,0.05288305);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(7,0.1299273);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(8,0.2179266);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(9,0.4585629);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(10,1.037428);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(14,1.036463);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(15,0.4963657);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(16,0.147672);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(17,0.03817735);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(18,0.03381545);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_fit_s__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_fit_s__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetLineColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetRange(2,18);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat1_2016_fit_s_fx3004[23] = {
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_s_fy3004[23] = {
   0,
   0.5235927,
   0.4313273,
   0.5668077,
   2.681579,
   5.829673,
   8.263818,
   8.007915,
   6.552797,
   3.451795,
   0,
   0,
   0,
   -0.003275118,
   -0.2933083,
   1.849414,
   -1.259186,
   1.237046,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat1_2016_fit_s_felx3004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_s_fely3004[23] = {
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_s_fehx3004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_s_fehy3004[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_fit_s_fx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fy3004,Graph_from_iRatiopass_cat1_2016_fit_s_felx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fehx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fely3004,Graph_from_iRatiopass_cat1_2016_fit_s_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMinimum(-3.411487);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMaximum(10.41612);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetStats(0);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_s_copy__16 = new TH1F("iOneWithErrorspass_cat1_2016_fit_s_copy__16","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMaximum(12.39573);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->Draw("sameaxis");
   p22pass_cat1_2016_fit_s->Modified();
   cpass_cat1_2016_fit_s->cd();
   cpass_cat1_2016_fit_s->Modified();
   cpass_cat1_2016_fit_s->cd();
   cpass_cat1_2016_fit_s->SetSelected(cpass_cat1_2016_fit_s);
}
