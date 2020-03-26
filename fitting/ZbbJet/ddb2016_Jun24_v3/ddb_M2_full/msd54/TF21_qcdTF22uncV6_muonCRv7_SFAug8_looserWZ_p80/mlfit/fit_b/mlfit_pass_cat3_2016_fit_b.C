void mlfit_pass_cat3_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat3_2016_fit_b/cpass_cat3_2016_fit_b
//=========  (Mon Sep 30 17:21:33 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_fit_b = new TCanvas("cpass_cat3_2016_fit_b", "cpass_cat3_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_fit_b->SetHighLightColor(2);
   cpass_cat3_2016_fit_b->Range(0,0,1,1);
   cpass_cat3_2016_fit_b->SetFillColor(0);
   cpass_cat3_2016_fit_b->SetBorderMode(0);
   cpass_cat3_2016_fit_b->SetBorderSize(2);
   cpass_cat3_2016_fit_b->SetTickx(1);
   cpass_cat3_2016_fit_b->SetTicky(1);
   cpass_cat3_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat3_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat3_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat3_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_fit_b
   TPad *p12pass_cat3_2016_fit_b = new TPad("p12pass_cat3_2016_fit_b", "p12pass_cat3_2016_fit_b",0,0.3,1,1);
   p12pass_cat3_2016_fit_b->Draw();
   p12pass_cat3_2016_fit_b->cd();
   p12pass_cat3_2016_fit_b->Range(13.7027,-24.3785,221.8108,1194.546);
   p12pass_cat3_2016_fit_b->SetFillColor(0);
   p12pass_cat3_2016_fit_b->SetBorderMode(0);
   p12pass_cat3_2016_fit_b->SetBorderSize(2);
   p12pass_cat3_2016_fit_b->SetTickx(1);
   p12pass_cat3_2016_fit_b->SetTicky(1);
   p12pass_cat3_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat3_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_fit_b__41 = new TH1F("htotpass_cat3_2016_fit_b__41","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b__41->SetBinContent(1,3.378725e-06);
   htotpass_cat3_2016_fit_b__41->SetBinContent(2,3.378725e-06);
   htotpass_cat3_2016_fit_b__41->SetBinContent(3,625.1539);
   htotpass_cat3_2016_fit_b__41->SetBinContent(4,643.9107);
   htotpass_cat3_2016_fit_b__41->SetBinContent(5,654.9742);
   htotpass_cat3_2016_fit_b__41->SetBinContent(6,696.0872);
   htotpass_cat3_2016_fit_b__41->SetBinContent(7,715.1025);
   htotpass_cat3_2016_fit_b__41->SetBinContent(8,677.8254);
   htotpass_cat3_2016_fit_b__41->SetBinContent(9,620.028);
   htotpass_cat3_2016_fit_b__41->SetBinContent(10,549.6427);
   htotpass_cat3_2016_fit_b__41->SetBinContent(11,499.5255);
   htotpass_cat3_2016_fit_b__41->SetBinContent(12,470.265);
   htotpass_cat3_2016_fit_b__41->SetBinContent(13,440.6406);
   htotpass_cat3_2016_fit_b__41->SetBinContent(14,399.9966);
   htotpass_cat3_2016_fit_b__41->SetBinContent(15,367.1495);
   htotpass_cat3_2016_fit_b__41->SetBinContent(16,322.297);
   htotpass_cat3_2016_fit_b__41->SetBinContent(17,279.6799);
   htotpass_cat3_2016_fit_b__41->SetBinContent(18,241.0658);
   htotpass_cat3_2016_fit_b__41->SetBinContent(19,198.6786);
   htotpass_cat3_2016_fit_b__41->SetBinContent(20,167.0938);
   htotpass_cat3_2016_fit_b__41->SetBinContent(21,131.6369);
   htotpass_cat3_2016_fit_b__41->SetBinContent(22,99.79154);
   htotpass_cat3_2016_fit_b__41->SetBinContent(23,75.77162);
   htotpass_cat3_2016_fit_b__41->SetMinimum(0);
   htotpass_cat3_2016_fit_b__41->SetMaximum(1072.654);
   htotpass_cat3_2016_fit_b__41->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__41->SetFillColor(ci);
   htotpass_cat3_2016_fit_b__41->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__41->SetLineColor(ci);
   htotpass_cat3_2016_fit_b__41->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b__41->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b__41->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__41->Draw("");
   
   TH1F *htot_linepass_cat3_2016_fit_b__42 = new TH1F("htot_linepass_cat3_2016_fit_b__42","wqq in cat3_2016_pass_cat3",23,40,201);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(1,3.378725e-06);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(2,3.378725e-06);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(3,625.1539);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(4,643.9107);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(5,654.9742);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(6,696.0872);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(7,715.1025);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(8,677.8254);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(9,620.028);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(10,549.6427);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(11,499.5255);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(12,470.265);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(13,440.6406);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(14,399.9966);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(15,367.1495);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(16,322.297);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(17,279.6799);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(18,241.0658);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(19,198.6786);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(20,167.0938);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(21,131.6369);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(22,99.79154);
   htot_linepass_cat3_2016_fit_b__42->SetBinContent(23,75.77162);
   htot_linepass_cat3_2016_fit_b__42->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_b__42->SetFillColor(ci);
   htot_linepass_cat3_2016_fit_b__42->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_b__42->SetLineColor(ci);
   htot_linepass_cat3_2016_fit_b__42->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat3_2016_fit_b__42->SetMarkerColor(ci);
   htot_linepass_cat3_2016_fit_b__42->SetMarkerSize(0);
   htot_linepass_cat3_2016_fit_b__42->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat3_2016_fit_b__42->GetXaxis()->SetRange(2,23);
   htot_linepass_cat3_2016_fit_b__42->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_b__42->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_b__42->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_b__42->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_b__42->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat3_2016_fit_b__42->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_b__42->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat3_2016_fit_b__42->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat3_2016_fit_b__42->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat3_2016_fit_b__42->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_b__42->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_b__42->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_b__42->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_b__42->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_b__42->Draw("histsame");
   
   TH1F *qcd__43 = new TH1F("qcd__43","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__43->SetBinContent(3,616.0859);
   qcd__43->SetBinContent(4,626.299);
   qcd__43->SetBinContent(5,615.8609);
   qcd__43->SetBinContent(6,597.4033);
   qcd__43->SetBinContent(7,579.7922);
   qcd__43->SetBinContent(8,553.4827);
   qcd__43->SetBinContent(9,523.189);
   qcd__43->SetBinContent(10,502.3343);
   qcd__43->SetBinContent(11,476.5856);
   qcd__43->SetBinContent(12,445.9208);
   qcd__43->SetBinContent(13,421.8843);
   qcd__43->SetBinContent(14,387.9131);
   qcd__43->SetBinContent(15,358.2444);
   qcd__43->SetBinContent(16,316.2174);
   qcd__43->SetBinContent(17,274.1704);
   qcd__43->SetBinContent(18,236.2276);
   qcd__43->SetBinContent(19,196.4424);
   qcd__43->SetBinContent(20,164.9477);
   qcd__43->SetBinContent(21,130.1674);
   qcd__43->SetBinContent(22,99.44076);
   qcd__43->SetBinContent(23,75.42084);
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
   
   TH1F *htotpass_cat3_2016_fit_b__44 = new TH1F("htotpass_cat3_2016_fit_b__44","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b__44->SetBinContent(1,3.378725e-06);
   htotpass_cat3_2016_fit_b__44->SetBinContent(2,3.378725e-06);
   htotpass_cat3_2016_fit_b__44->SetBinContent(3,625.1539);
   htotpass_cat3_2016_fit_b__44->SetBinContent(4,643.9107);
   htotpass_cat3_2016_fit_b__44->SetBinContent(5,654.9742);
   htotpass_cat3_2016_fit_b__44->SetBinContent(6,696.0872);
   htotpass_cat3_2016_fit_b__44->SetBinContent(7,715.1025);
   htotpass_cat3_2016_fit_b__44->SetBinContent(8,677.8254);
   htotpass_cat3_2016_fit_b__44->SetBinContent(9,620.028);
   htotpass_cat3_2016_fit_b__44->SetBinContent(10,549.6427);
   htotpass_cat3_2016_fit_b__44->SetBinContent(11,499.5255);
   htotpass_cat3_2016_fit_b__44->SetBinContent(12,470.265);
   htotpass_cat3_2016_fit_b__44->SetBinContent(13,440.6406);
   htotpass_cat3_2016_fit_b__44->SetBinContent(14,399.9966);
   htotpass_cat3_2016_fit_b__44->SetBinContent(15,367.1495);
   htotpass_cat3_2016_fit_b__44->SetBinContent(16,322.297);
   htotpass_cat3_2016_fit_b__44->SetBinContent(17,279.6799);
   htotpass_cat3_2016_fit_b__44->SetBinContent(18,241.0658);
   htotpass_cat3_2016_fit_b__44->SetBinContent(19,198.6786);
   htotpass_cat3_2016_fit_b__44->SetBinContent(20,167.0938);
   htotpass_cat3_2016_fit_b__44->SetBinContent(21,131.6369);
   htotpass_cat3_2016_fit_b__44->SetBinContent(22,99.79154);
   htotpass_cat3_2016_fit_b__44->SetBinContent(23,75.77162);
   htotpass_cat3_2016_fit_b__44->SetMinimum(0);
   htotpass_cat3_2016_fit_b__44->SetMaximum(1072.654);
   htotpass_cat3_2016_fit_b__44->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__44->SetFillColor(ci);
   htotpass_cat3_2016_fit_b__44->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__44->SetLineColor(ci);
   htotpass_cat3_2016_fit_b__44->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b__44->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b__44->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b__44->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__44->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b__44->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__44->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b__44->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b__44->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b__44->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__44->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__44->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__44->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__44->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__44->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis11[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_11 = new TH1F("hstackMC_stack_11","hstackMC",23, xAxis11);
   hstackMC_stack_11->SetMinimum(0);
   hstackMC_stack_11->SetMaximum(142.0758);
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
   tqq_stack_1->SetBinContent(3,4.431345);
   tqq_stack_1->SetBinContent(4,6.965677);
   tqq_stack_1->SetBinContent(5,7.697867);
   tqq_stack_1->SetBinContent(6,15.22554);
   tqq_stack_1->SetBinContent(7,17.92301);
   tqq_stack_1->SetBinContent(8,14.6715);
   tqq_stack_1->SetBinContent(9,16.762);
   tqq_stack_1->SetBinContent(10,14.0102);
   tqq_stack_1->SetBinContent(11,16.21472);
   tqq_stack_1->SetBinContent(12,20.71506);
   tqq_stack_1->SetBinContent(13,17.42896);
   tqq_stack_1->SetBinContent(14,11.68028);
   tqq_stack_1->SetBinContent(15,8.905075);
   tqq_stack_1->SetBinContent(16,6.079596);
   tqq_stack_1->SetBinContent(17,5.509494);
   tqq_stack_1->SetBinContent(18,4.83811);
   tqq_stack_1->SetBinContent(19,2.236221);
   tqq_stack_1->SetBinContent(20,2.146118);
   tqq_stack_1->SetBinContent(21,1.469428);
   tqq_stack_1->SetBinContent(22,0.3507811);
   tqq_stack_1->SetBinContent(23,0.3507811);
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
   wqq_stack_2->SetBinContent(1,1.504552e-06);
   wqq_stack_2->SetBinContent(2,1.504552e-06);
   wqq_stack_2->SetBinContent(3,3.049069);
   wqq_stack_2->SetBinContent(4,9.258915);
   wqq_stack_2->SetBinContent(5,22.86266);
   wqq_stack_2->SetBinContent(6,57.53022);
   wqq_stack_2->SetBinContent(7,72.40029);
   wqq_stack_2->SetBinContent(8,28.3344);
   wqq_stack_2->SetBinContent(9,12.81196);
   wqq_stack_2->SetBinContent(10,5.368363);
   wqq_stack_2->SetBinContent(11,2.110706);
   wqq_stack_2->SetBinContent(12,0.7955536);
   wqq_stack_2->SetBinContent(13,0.4139176);
   wqq_stack_2->SetBinContent(14,1.504552e-06);
   wqq_stack_2->SetBinContent(15,1.504552e-06);
   wqq_stack_2->SetBinContent(16,1.504552e-06);
   wqq_stack_2->SetBinContent(17,1.504552e-06);
   wqq_stack_2->SetBinContent(18,1.504552e-06);
   wqq_stack_2->SetBinContent(19,1.504552e-06);
   wqq_stack_2->SetBinContent(20,1.504552e-06);
   wqq_stack_2->SetBinContent(21,1.504552e-06);
   wqq_stack_2->SetBinContent(22,1.504552e-06);
   wqq_stack_2->SetBinContent(23,1.504552e-06);
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
   zqq_stack_3->SetBinContent(1,1.874173e-06);
   zqq_stack_3->SetBinContent(2,1.874173e-06);
   zqq_stack_3->SetBinContent(3,1.587637);
   zqq_stack_3->SetBinContent(4,1.387084);
   zqq_stack_3->SetBinContent(5,8.552775);
   zqq_stack_3->SetBinContent(6,25.92817);
   zqq_stack_3->SetBinContent(7,44.98704);
   zqq_stack_3->SetBinContent(8,81.33681);
   zqq_stack_3->SetBinContent(9,67.26501);
   zqq_stack_3->SetBinContent(10,27.92979);
   zqq_stack_3->SetBinContent(11,4.614424);
   zqq_stack_3->SetBinContent(12,2.833539);
   zqq_stack_3->SetBinContent(13,0.9133919);
   zqq_stack_3->SetBinContent(14,0.4032621);
   zqq_stack_3->SetBinContent(15,1.874173e-06);
   zqq_stack_3->SetBinContent(16,1.874173e-06);
   zqq_stack_3->SetBinContent(17,1.874173e-06);
   zqq_stack_3->SetBinContent(18,1.874173e-06);
   zqq_stack_3->SetBinContent(19,1.874173e-06);
   zqq_stack_3->SetBinContent(20,1.874173e-06);
   zqq_stack_3->SetBinContent(21,1.874173e-06);
   zqq_stack_3->SetBinContent(22,1.874173e-06);
   zqq_stack_3->SetBinContent(23,1.874173e-06);
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
   
   TH1F *hsigpass_cat3_2016_fit_b_stack_4 = new TH1F("hsigpass_cat3_2016_fit_b_stack_4","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_fit_b_stack_4,"");
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
   0,
   655,
   614,
   656,
   694,
   738,
   683,
   585,
   536,
   480,
   448,
   414,
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
   1.841055,
   26.60657,
   25.79304,
   26.62609,
   27.35713,
   28.17904,
   27.14761,
   25.2011,
   24.1666,
   22.92462,
   22.18225,
   21.36384,
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
   0,
   25.58699,
   24.77281,
   25.60652,
   26.3381,
   27.16059,
   26.12843,
   24.18038,
   23.14495,
   21.90174,
   21.15856,
   20.33921,
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
   grae->SetTitle("WH_hbb in cat3_2016_pass_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3011 = new TH1F("Graph_data_copy3011","WH_hbb in cat3_2016_pass_cat3",100,28.1,212.9);
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
   entry=leg->AddEntry("htotpass_cat3_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat3_2016_fit_b_copy__45 = new TH1F("htotpass_cat3_2016_fit_b_copy__45","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(1,3.378725e-06);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(2,3.378725e-06);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(3,625.1539);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(4,643.9107);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(5,654.9742);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(6,696.0872);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(7,715.1025);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(8,677.8254);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(9,620.028);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(10,549.6427);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(11,499.5255);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(12,470.265);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(13,440.6406);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(14,399.9966);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(15,367.1495);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(16,322.297);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(17,279.6799);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(18,241.0658);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(19,198.6786);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(20,167.0938);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(21,131.6369);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(22,99.79154);
   htotpass_cat3_2016_fit_b_copy__45->SetBinContent(23,75.77162);
   htotpass_cat3_2016_fit_b_copy__45->SetMaximum(1072.654);
   htotpass_cat3_2016_fit_b_copy__45->SetEntries(92);
   htotpass_cat3_2016_fit_b_copy__45->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b_copy__45->SetFillColor(ci);
   htotpass_cat3_2016_fit_b_copy__45->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b_copy__45->SetLineColor(ci);
   htotpass_cat3_2016_fit_b_copy__45->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b_copy__45->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b_copy__45->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b_copy__45->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__45->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b_copy__45->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__45->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b_copy__45->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b_copy__45->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b_copy__45->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__45->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__45->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b_copy__45->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b_copy__45->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__45->Draw("sameaxis");
   p12pass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_fit_b
   TPad *p22pass_cat3_2016_fit_b = new TPad("p22pass_cat3_2016_fit_b", "p22pass_cat3_2016_fit_b",0,0,1,0.3);
   p22pass_cat3_2016_fit_b->Draw();
   p22pass_cat3_2016_fit_b->cd();
   p22pass_cat3_2016_fit_b->Range(13.7027,-10.75423,221.8108,8.426547);
   p22pass_cat3_2016_fit_b->SetFillColor(0);
   p22pass_cat3_2016_fit_b->SetBorderMode(0);
   p22pass_cat3_2016_fit_b->SetBorderSize(2);
   p22pass_cat3_2016_fit_b->SetTickx(1);
   p22pass_cat3_2016_fit_b->SetTicky(1);
   p22pass_cat3_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat3_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat3_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b__46 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b__46","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMaximum(7.467508);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__46->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__46->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_12 = new TH1F("hstack_stack_12","hstack",23,40,201);
   hstack_stack_12->SetMinimum(0);
   hstack_stack_12->SetMaximum(4.538072);
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
   
   
   TH1F *sigHistResidualwqqpass_cat3_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat3_2016_fit_b_stack_1","wqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(3,0.1191649);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(4,0.3737531);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(5,0.8928453);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(6,2.184296);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(7,2.665638);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(8,1.084428);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(9,0.5298492);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(10,0.2319453);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(11,0.09637159);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(12,0.0375996);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(13,0.02035073);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(14,7.344231e-08);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(15,7.772775e-08);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(16,8.187563e-08);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(17,9.31872e-08);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(18,1.019772e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(19,1.089587e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(20,1.107147e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(21,1.484863e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(22,1.53823e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(23,1.530252e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat3_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat3_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat3_2016_fit_b_stack_2","zqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(3,0.0620486);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(4,0.05599219);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(5,0.3340077);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(6,0.984436);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(7,1.656335);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(8,3.112962);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(9,2.781801);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(10,1.206734);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(11,0.2106875);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(12,0.1339192);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(13,0.04490794);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(14,0.01968459);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(15,9.682296e-08);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(16,1.019898e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(17,1.160803e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(18,1.270298e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(19,1.357264e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(20,1.379137e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(21,1.849646e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(22,1.916123e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(23,1.906186e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat3_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_fit_b__47 = new TH1F("iOneWithErrorsLinepass_cat3_2016_fit_b__47","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fx3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fy3012[23] = {
   0,
   0,
   1.296025,
   -0.7776554,
   1.2184,
   2.974406,
   4.978339,
   4.230418,
   1.787581,
   0.8133315,
   -0.5844432,
   -0.8807731,
   -1.244555,
   0.9486769,
   0.3851586,
   0.8092955,
   -1.156976,
   -1.563375,
   -0.556083,
   1.224244,
   -2.82621,
   -0.387641,
   1.950607};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_felx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fely3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fehx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fehy3012[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_fit_b_fx3012,Graph_from_iRatiopass_cat3_2016_fit_b_fy3012,Graph_from_iRatiopass_cat3_2016_fit_b_felx3012,Graph_from_iRatiopass_cat3_2016_fit_b_fehx3012,Graph_from_iRatiopass_cat3_2016_fit_b_fely3012,Graph_from_iRatiopass_cat3_2016_fit_b_fehy3012);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetMinimum(-4.806665);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetMaximum(6.958794);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b_copy__48 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b_copy__48","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMaximum(7.467508);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetEntries(184);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->Draw("sameaxis");
   p22pass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
   cpass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
   cpass_cat3_2016_fit_b->SetSelected(cpass_cat3_2016_fit_b);
}
