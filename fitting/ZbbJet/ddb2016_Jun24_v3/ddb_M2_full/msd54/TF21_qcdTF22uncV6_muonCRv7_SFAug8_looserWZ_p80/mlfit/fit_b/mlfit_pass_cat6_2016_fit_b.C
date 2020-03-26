void mlfit_pass_cat6_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_b/cpass_cat6_2016_fit_b
//=========  (Mon Sep 30 17:21:33 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat6_2016_fit_b = new TCanvas("cpass_cat6_2016_fit_b", "cpass_cat6_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat6_2016_fit_b->SetHighLightColor(2);
   cpass_cat6_2016_fit_b->Range(0,0,1,1);
   cpass_cat6_2016_fit_b->SetFillColor(0);
   cpass_cat6_2016_fit_b->SetBorderMode(0);
   cpass_cat6_2016_fit_b->SetBorderSize(2);
   cpass_cat6_2016_fit_b->SetTickx(1);
   cpass_cat6_2016_fit_b->SetTicky(1);
   cpass_cat6_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat6_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat6_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat6_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat6_2016_fit_b
   TPad *p12pass_cat6_2016_fit_b = new TPad("p12pass_cat6_2016_fit_b", "p12pass_cat6_2016_fit_b",0,0.3,1,1);
   p12pass_cat6_2016_fit_b->Draw();
   p12pass_cat6_2016_fit_b->cd();
   p12pass_cat6_2016_fit_b->Range(13.7027,-5.800303,221.8108,284.2149);
   p12pass_cat6_2016_fit_b->SetFillColor(0);
   p12pass_cat6_2016_fit_b->SetBorderMode(0);
   p12pass_cat6_2016_fit_b->SetBorderSize(2);
   p12pass_cat6_2016_fit_b->SetTickx(1);
   p12pass_cat6_2016_fit_b->SetTicky(1);
   p12pass_cat6_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat6_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat6_2016_fit_b__89 = new TH1F("htotpass_cat6_2016_fit_b__89","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b__89->SetBinContent(1,1.361155e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(2,1.361155e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(3,148.6213);
   htotpass_cat6_2016_fit_b__89->SetBinContent(4,152.3754);
   htotpass_cat6_2016_fit_b__89->SetBinContent(5,153.0867);
   htotpass_cat6_2016_fit_b__89->SetBinContent(6,168.2378);
   htotpass_cat6_2016_fit_b__89->SetBinContent(7,170.1422);
   htotpass_cat6_2016_fit_b__89->SetBinContent(8,161.4926);
   htotpass_cat6_2016_fit_b__89->SetBinContent(9,139.1);
   htotpass_cat6_2016_fit_b__89->SetBinContent(10,117.43);
   htotpass_cat6_2016_fit_b__89->SetBinContent(11,103.8486);
   htotpass_cat6_2016_fit_b__89->SetBinContent(12,97.6176);
   htotpass_cat6_2016_fit_b__89->SetBinContent(13,89.39499);
   htotpass_cat6_2016_fit_b__89->SetBinContent(14,82.95602);
   htotpass_cat6_2016_fit_b__89->SetBinContent(15,77.28962);
   htotpass_cat6_2016_fit_b__89->SetBinContent(16,73.51511);
   htotpass_cat6_2016_fit_b__89->SetBinContent(17,68.22922);
   htotpass_cat6_2016_fit_b__89->SetBinContent(18,63.99075);
   htotpass_cat6_2016_fit_b__89->SetBinContent(19,61.75951);
   htotpass_cat6_2016_fit_b__89->SetBinContent(20,56.22696);
   htotpass_cat6_2016_fit_b__89->SetBinContent(21,52.70399);
   htotpass_cat6_2016_fit_b__89->SetBinContent(22,49.09081);
   htotpass_cat6_2016_fit_b__89->SetBinContent(23,46.3678);
   htotpass_cat6_2016_fit_b__89->SetMinimum(0);
   htotpass_cat6_2016_fit_b__89->SetMaximum(255.2133);
   htotpass_cat6_2016_fit_b__89->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__89->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__89->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__89->SetLineColor(ci);
   htotpass_cat6_2016_fit_b__89->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b__89->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b__89->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__89->Draw("");
   
   TH1F *htot_linepass_cat6_2016_fit_b__90 = new TH1F("htot_linepass_cat6_2016_fit_b__90","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(1,1.361155e-06);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(2,1.361155e-06);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(3,148.6213);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(4,152.3754);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(5,153.0867);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(6,168.2378);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(7,170.1422);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(8,161.4926);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(9,139.1);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(10,117.43);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(11,103.8486);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(12,97.6176);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(13,89.39499);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(14,82.95602);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(15,77.28962);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(16,73.51511);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(17,68.22922);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(18,63.99075);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(19,61.75951);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(20,56.22696);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(21,52.70399);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(22,49.09081);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(23,46.3678);
   htot_linepass_cat6_2016_fit_b__90->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_b__90->SetFillColor(ci);
   htot_linepass_cat6_2016_fit_b__90->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_b__90->SetLineColor(ci);
   htot_linepass_cat6_2016_fit_b__90->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_fit_b__90->SetMarkerColor(ci);
   htot_linepass_cat6_2016_fit_b__90->SetMarkerSize(0);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__90->Draw("histsame");
   
   TH1F *qcd__91 = new TH1F("qcd__91","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__91->SetBinContent(3,146.8201);
   qcd__91->SetBinContent(4,143.9947);
   qcd__91->SetBinContent(5,139.385);
   qcd__91->SetBinContent(6,135.4508);
   qcd__91->SetBinContent(7,125.486);
   qcd__91->SetBinContent(8,116.8034);
   qcd__91->SetBinContent(9,107.5517);
   qcd__91->SetBinContent(10,101.7236);
   qcd__91->SetBinContent(11,94.1834);
   qcd__91->SetBinContent(12,89.00092);
   qcd__91->SetBinContent(13,82.80308);
   qcd__91->SetBinContent(14,77.72614);
   qcd__91->SetBinContent(15,73.25076);
   qcd__91->SetBinContent(16,68.70465);
   qcd__91->SetBinContent(17,66.72921);
   qcd__91->SetBinContent(18,62.89072);
   qcd__91->SetBinContent(19,60.16479);
   qcd__91->SetBinContent(20,54.71659);
   qcd__91->SetBinContent(21,52.30088);
   qcd__91->SetBinContent(22,49.09081);
   qcd__91->SetBinContent(23,46.0075);
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
   
   TH1F *htotpass_cat6_2016_fit_b__92 = new TH1F("htotpass_cat6_2016_fit_b__92","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b__92->SetBinContent(1,1.361155e-06);
   htotpass_cat6_2016_fit_b__92->SetBinContent(2,1.361155e-06);
   htotpass_cat6_2016_fit_b__92->SetBinContent(3,148.6213);
   htotpass_cat6_2016_fit_b__92->SetBinContent(4,152.3754);
   htotpass_cat6_2016_fit_b__92->SetBinContent(5,153.0867);
   htotpass_cat6_2016_fit_b__92->SetBinContent(6,168.2378);
   htotpass_cat6_2016_fit_b__92->SetBinContent(7,170.1422);
   htotpass_cat6_2016_fit_b__92->SetBinContent(8,161.4926);
   htotpass_cat6_2016_fit_b__92->SetBinContent(9,139.1);
   htotpass_cat6_2016_fit_b__92->SetBinContent(10,117.43);
   htotpass_cat6_2016_fit_b__92->SetBinContent(11,103.8486);
   htotpass_cat6_2016_fit_b__92->SetBinContent(12,97.6176);
   htotpass_cat6_2016_fit_b__92->SetBinContent(13,89.39499);
   htotpass_cat6_2016_fit_b__92->SetBinContent(14,82.95602);
   htotpass_cat6_2016_fit_b__92->SetBinContent(15,77.28962);
   htotpass_cat6_2016_fit_b__92->SetBinContent(16,73.51511);
   htotpass_cat6_2016_fit_b__92->SetBinContent(17,68.22922);
   htotpass_cat6_2016_fit_b__92->SetBinContent(18,63.99075);
   htotpass_cat6_2016_fit_b__92->SetBinContent(19,61.75951);
   htotpass_cat6_2016_fit_b__92->SetBinContent(20,56.22696);
   htotpass_cat6_2016_fit_b__92->SetBinContent(21,52.70399);
   htotpass_cat6_2016_fit_b__92->SetBinContent(22,49.09081);
   htotpass_cat6_2016_fit_b__92->SetBinContent(23,46.3678);
   htotpass_cat6_2016_fit_b__92->SetMinimum(0);
   htotpass_cat6_2016_fit_b__92->SetMaximum(255.2133);
   htotpass_cat6_2016_fit_b__92->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__92->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__92->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__92->SetLineColor(ci);
   htotpass_cat6_2016_fit_b__92->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b__92->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b__92->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__92->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis23[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_23 = new TH1F("hstackMC_stack_23","hstackMC",23, xAxis23);
   hstackMC_stack_23->SetMinimum(0);
   hstackMC_stack_23->SetMaximum(46.92365);
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
   tqq_stack_1->SetBinContent(3,0.3724911);
   tqq_stack_1->SetBinContent(4,0.720733);
   tqq_stack_1->SetBinContent(5,1.532589);
   tqq_stack_1->SetBinContent(6,3.251616);
   tqq_stack_1->SetBinContent(7,5.733541);
   tqq_stack_1->SetBinContent(8,3.448404);
   tqq_stack_1->SetBinContent(9,2.150115);
   tqq_stack_1->SetBinContent(10,1.087684);
   tqq_stack_1->SetBinContent(11,2.585537);
   tqq_stack_1->SetBinContent(12,3.632421);
   tqq_stack_1->SetBinContent(13,2.974356);
   tqq_stack_1->SetBinContent(14,3.157332);
   tqq_stack_1->SetBinContent(15,2.833946);
   tqq_stack_1->SetBinContent(16,4.292439);
   tqq_stack_1->SetBinContent(17,1.500005);
   tqq_stack_1->SetBinContent(18,1.100026);
   tqq_stack_1->SetBinContent(19,1.594726);
   tqq_stack_1->SetBinContent(20,1.510373);
   tqq_stack_1->SetBinContent(21,0.4031039);
   tqq_stack_1->SetBinContent(23,0.3602935);
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
   wqq_stack_2->SetBinContent(1,4.637091e-07);
   wqq_stack_2->SetBinContent(2,4.637091e-07);
   wqq_stack_2->SetBinContent(3,0.8849177);
   wqq_stack_2->SetBinContent(4,5.8321);
   wqq_stack_2->SetBinContent(5,9.49138);
   wqq_stack_2->SetBinContent(6,15.54093);
   wqq_stack_2->SetBinContent(7,17.64941);
   wqq_stack_2->SetBinContent(8,11.04982);
   wqq_stack_2->SetBinContent(9,5.093423);
   wqq_stack_2->SetBinContent(10,0.7021688);
   wqq_stack_2->SetBinContent(11,4.637091e-07);
   wqq_stack_2->SetBinContent(12,4.637091e-07);
   wqq_stack_2->SetBinContent(13,4.637091e-07);
   wqq_stack_2->SetBinContent(14,4.637091e-07);
   wqq_stack_2->SetBinContent(15,4.637091e-07);
   wqq_stack_2->SetBinContent(16,4.637091e-07);
   wqq_stack_2->SetBinContent(17,4.637091e-07);
   wqq_stack_2->SetBinContent(18,4.637091e-07);
   wqq_stack_2->SetBinContent(19,4.637091e-07);
   wqq_stack_2->SetBinContent(20,4.637091e-07);
   wqq_stack_2->SetBinContent(21,4.637091e-07);
   wqq_stack_2->SetBinContent(22,4.637091e-07);
   wqq_stack_2->SetBinContent(23,4.637091e-07);
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
   zqq_stack_3->SetBinContent(1,8.974459e-07);
   zqq_stack_3->SetBinContent(2,8.974459e-07);
   zqq_stack_3->SetBinContent(3,0.5438634);
   zqq_stack_3->SetBinContent(4,1.827831);
   zqq_stack_3->SetBinContent(5,2.677787);
   zqq_stack_3->SetBinContent(6,13.99442);
   zqq_stack_3->SetBinContent(7,21.27324);
   zqq_stack_3->SetBinContent(8,30.19096);
   zqq_stack_3->SetBinContent(9,24.30484);
   zqq_stack_3->SetBinContent(10,13.91659);
   zqq_stack_3->SetBinContent(11,7.079707);
   zqq_stack_3->SetBinContent(12,4.984258);
   zqq_stack_3->SetBinContent(13,3.617557);
   zqq_stack_3->SetBinContent(14,2.07256);
   zqq_stack_3->SetBinContent(15,1.20491);
   zqq_stack_3->SetBinContent(16,0.5180269);
   zqq_stack_3->SetBinContent(17,8.974459e-07);
   zqq_stack_3->SetBinContent(18,8.974459e-07);
   zqq_stack_3->SetBinContent(19,8.974459e-07);
   zqq_stack_3->SetBinContent(20,8.974459e-07);
   zqq_stack_3->SetBinContent(21,8.974459e-07);
   zqq_stack_3->SetBinContent(22,8.974459e-07);
   zqq_stack_3->SetBinContent(23,8.974459e-07);
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
   
   TH1F *hsigpass_cat6_2016_fit_b_stack_4 = new TH1F("hsigpass_cat6_2016_fit_b_stack_4","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat6_2016_fit_b_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat6_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat6_2016_fit_b_copy__93 = new TH1F("htotpass_cat6_2016_fit_b_copy__93","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(1,1.361155e-06);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(2,1.361155e-06);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(3,148.6213);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(4,152.3754);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(5,153.0867);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(6,168.2378);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(7,170.1422);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(8,161.4926);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(9,139.1);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(10,117.43);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(11,103.8486);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(12,97.6176);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(13,89.39499);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(14,82.95602);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(15,77.28962);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(16,73.51511);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(17,68.22922);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(18,63.99075);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(19,61.75951);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(20,56.22696);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(21,52.70399);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(22,49.09081);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(23,46.3678);
   htotpass_cat6_2016_fit_b_copy__93->SetMaximum(255.2133);
   htotpass_cat6_2016_fit_b_copy__93->SetEntries(92);
   htotpass_cat6_2016_fit_b_copy__93->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__93->SetFillColor(ci);
   htotpass_cat6_2016_fit_b_copy__93->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__93->SetLineColor(ci);
   htotpass_cat6_2016_fit_b_copy__93->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b_copy__93->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b_copy__93->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__93->Draw("sameaxis");
   p12pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_b
   TPad *p22pass_cat6_2016_fit_b = new TPad("p22pass_cat6_2016_fit_b", "p22pass_cat6_2016_fit_b",0,0,1,0.3);
   p22pass_cat6_2016_fit_b->Draw();
   p22pass_cat6_2016_fit_b->cd();
   p22pass_cat6_2016_fit_b->Range(13.7027,-9.812243,221.8108,6.228565);
   p22pass_cat6_2016_fit_b->SetFillColor(0);
   p22pass_cat6_2016_fit_b->SetBorderMode(0);
   p22pass_cat6_2016_fit_b->SetBorderSize(2);
   p22pass_cat6_2016_fit_b->SetTickx(1);
   p22pass_cat6_2016_fit_b->SetTicky(1);
   p22pass_cat6_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat6_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat6_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b__94 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b__94","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMaximum(5.426525);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_24 = new TH1F("hstack_stack_24","hstack",23,40,201);
   hstack_stack_24->SetMinimum(0);
   hstack_stack_24->SetMaximum(3.504586);
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
   
   
   TH1F *sigHistResidualwqqpass_cat6_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat6_2016_fit_b_stack_1","wqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(3,0.07115364);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(4,0.498869);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(5,0.7863972);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(6,1.175884);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(7,1.302288);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(8,0.8942848);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(9,0.4294444);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(10,0.06238834);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(11,4.980974e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(12,4.668253e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(13,4.621646e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(14,5.330755e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(15,5.195202e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(16,5.402636e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(17,5.722286e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(18,6.64705e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(19,5.366335e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(20,5.811473e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(21,6.64705e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(22,7.099079e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(23,7.271562e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat6_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat6_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat6_2016_fit_b_stack_2","zqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(3,0.04373046);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(4,0.1563499);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(5,0.2218649);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(6,1.058869);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(7,1.569678);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(8,2.443416);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(9,2.049227);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(10,1.236502);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(11,0.7604732);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(12,0.5017753);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(13,0.3605509);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(14,0.2382595);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(15,0.134993);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(16,0.06035488);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(17,1.107471e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(18,1.286446e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(19,1.038581e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(20,1.124732e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(21,1.286446e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(22,1.37393e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(23,1.407312e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat6_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_b__95 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_b__95","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fx3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fy3024[23] = {
   0,
   0,
   0.5793162,
   -0.6599683,
   0.3876469,
   2.546434,
   3.617683,
   2.444518,
   2.425709,
   1.966675,
   -1.049339,
   0.579649,
   1.373468,
   -0.5613989,
   0.3922439,
   0.1040219,
   -0.275091,
   -2.148852,
   1.365143,
   0.8596708,
   -0.530949,
   -0.9324625,
   -0.8417405};
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_felx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fely3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fehx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fehy3024[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_b_fx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fy3024,Graph_from_iRatiopass_cat6_2016_fit_b_felx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fehx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fely3024,Graph_from_iRatiopass_cat6_2016_fit_b_fehy3024);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMinimum(-3.925506);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMaximum(5.394337);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b_copy__96 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b_copy__96","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMaximum(5.426525);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->Draw("sameaxis");
   p22pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
   cpass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
   cpass_cat6_2016_fit_b->SetSelected(cpass_cat6_2016_fit_b);
}
