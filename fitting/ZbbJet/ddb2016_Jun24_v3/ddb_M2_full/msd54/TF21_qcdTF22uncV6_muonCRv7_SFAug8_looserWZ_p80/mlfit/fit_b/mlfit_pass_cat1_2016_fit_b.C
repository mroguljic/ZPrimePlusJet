void mlfit_pass_cat1_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_b/cpass_cat1_2016_fit_b
//=========  (Mon Sep 30 17:21:32 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat1_2016_fit_b = new TCanvas("cpass_cat1_2016_fit_b", "cpass_cat1_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat1_2016_fit_b->SetHighLightColor(2);
   cpass_cat1_2016_fit_b->Range(0,0,1,1);
   cpass_cat1_2016_fit_b->SetFillColor(0);
   cpass_cat1_2016_fit_b->SetBorderMode(0);
   cpass_cat1_2016_fit_b->SetBorderSize(2);
   cpass_cat1_2016_fit_b->SetTickx(1);
   cpass_cat1_2016_fit_b->SetTicky(1);
   cpass_cat1_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat1_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat1_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat1_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat1_2016_fit_b
   TPad *p12pass_cat1_2016_fit_b = new TPad("p12pass_cat1_2016_fit_b", "p12pass_cat1_2016_fit_b",0,0.3,1,1);
   p12pass_cat1_2016_fit_b->Draw();
   p12pass_cat1_2016_fit_b->cd();
   p12pass_cat1_2016_fit_b->Range(21.27027,-91.04015,182.0811,4460.968);
   p12pass_cat1_2016_fit_b->SetFillColor(0);
   p12pass_cat1_2016_fit_b->SetBorderMode(0);
   p12pass_cat1_2016_fit_b->SetBorderSize(2);
   p12pass_cat1_2016_fit_b->SetTickx(1);
   p12pass_cat1_2016_fit_b->SetTicky(1);
   p12pass_cat1_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat1_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat1_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat1_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat1_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat1_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat1_2016_fit_b__9 = new TH1F("htotpass_cat1_2016_fit_b__9","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_b__9->SetBinContent(1,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(2,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(3,2451.791);
   htotpass_cat1_2016_fit_b__9->SetBinContent(4,2493.588);
   htotpass_cat1_2016_fit_b__9->SetBinContent(5,2521.771);
   htotpass_cat1_2016_fit_b__9->SetBinContent(6,2617.536);
   htotpass_cat1_2016_fit_b__9->SetBinContent(7,2670.511);
   htotpass_cat1_2016_fit_b__9->SetBinContent(8,2583.993);
   htotpass_cat1_2016_fit_b__9->SetBinContent(9,2277.552);
   htotpass_cat1_2016_fit_b__9->SetBinContent(10,2041.988);
   htotpass_cat1_2016_fit_b__9->SetBinContent(11,1842.855);
   htotpass_cat1_2016_fit_b__9->SetBinContent(12,1632.153);
   htotpass_cat1_2016_fit_b__9->SetBinContent(13,1408.067);
   htotpass_cat1_2016_fit_b__9->SetBinContent(14,1196.077);
   htotpass_cat1_2016_fit_b__9->SetBinContent(15,982.8488);
   htotpass_cat1_2016_fit_b__9->SetBinContent(16,789.1597);
   htotpass_cat1_2016_fit_b__9->SetBinContent(17,623.5479);
   htotpass_cat1_2016_fit_b__9->SetBinContent(18,471.4616);
   htotpass_cat1_2016_fit_b__9->SetBinContent(19,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(20,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(21,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(22,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(23,9.113734e-06);
   htotpass_cat1_2016_fit_b__9->SetMinimum(0);
   htotpass_cat1_2016_fit_b__9->SetMaximum(4005.767);
   htotpass_cat1_2016_fit_b__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__9->SetFillColor(ci);
   htotpass_cat1_2016_fit_b__9->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__9->SetLineColor(ci);
   htotpass_cat1_2016_fit_b__9->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_b__9->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_b__9->SetMarkerSize(0);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_b__9->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__9->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_b__9->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__9->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_b__9->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_b__9->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_b__9->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__9->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__9->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b__9->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b__9->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__9->Draw("");
   
   TH1F *htot_linepass_cat1_2016_fit_b__10 = new TH1F("htot_linepass_cat1_2016_fit_b__10","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(1,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(2,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(3,2451.791);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(4,2493.588);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(5,2521.771);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(6,2617.536);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(7,2670.511);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(8,2583.993);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(9,2277.552);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(10,2041.988);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(11,1842.855);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(12,1632.153);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(13,1408.067);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(14,1196.077);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(15,982.8488);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(16,789.1597);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(17,623.5479);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(18,471.4616);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(19,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(20,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(21,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(22,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(23,9.113734e-06);
   htot_linepass_cat1_2016_fit_b__10->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_b__10->SetFillColor(ci);
   htot_linepass_cat1_2016_fit_b__10->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_b__10->SetLineColor(ci);
   htot_linepass_cat1_2016_fit_b__10->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat1_2016_fit_b__10->SetMarkerColor(ci);
   htot_linepass_cat1_2016_fit_b__10->SetMarkerSize(0);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetRange(2,18);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_b__10->Draw("histsame");
   
   TH1F *qcd__11 = new TH1F("qcd__11","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__11->SetBinContent(3,2425.346);
   qcd__11->SetBinContent(4,2444.633);
   qcd__11->SetBinContent(5,2427.155);
   qcd__11->SetBinContent(6,2377.513);
   qcd__11->SetBinContent(7,2283.115);
   qcd__11->SetBinContent(8,2178.195);
   qcd__11->SetBinContent(9,2036.476);
   qcd__11->SetBinContent(10,1895.484);
   qcd__11->SetBinContent(11,1749.763);
   qcd__11->SetBinContent(12,1568.03);
   qcd__11->SetBinContent(13,1356.525);
   qcd__11->SetBinContent(14,1159.753);
   qcd__11->SetBinContent(15,956.7197);
   qcd__11->SetBinContent(16,774.9788);
   qcd__11->SetBinContent(17,611.6351);
   qcd__11->SetBinContent(18,462.7393);
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
   
   TH1F *htotpass_cat1_2016_fit_b__12 = new TH1F("htotpass_cat1_2016_fit_b__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_b__12->SetBinContent(1,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(2,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(3,2451.791);
   htotpass_cat1_2016_fit_b__12->SetBinContent(4,2493.588);
   htotpass_cat1_2016_fit_b__12->SetBinContent(5,2521.771);
   htotpass_cat1_2016_fit_b__12->SetBinContent(6,2617.536);
   htotpass_cat1_2016_fit_b__12->SetBinContent(7,2670.511);
   htotpass_cat1_2016_fit_b__12->SetBinContent(8,2583.993);
   htotpass_cat1_2016_fit_b__12->SetBinContent(9,2277.552);
   htotpass_cat1_2016_fit_b__12->SetBinContent(10,2041.988);
   htotpass_cat1_2016_fit_b__12->SetBinContent(11,1842.855);
   htotpass_cat1_2016_fit_b__12->SetBinContent(12,1632.153);
   htotpass_cat1_2016_fit_b__12->SetBinContent(13,1408.067);
   htotpass_cat1_2016_fit_b__12->SetBinContent(14,1196.077);
   htotpass_cat1_2016_fit_b__12->SetBinContent(15,982.8488);
   htotpass_cat1_2016_fit_b__12->SetBinContent(16,789.1597);
   htotpass_cat1_2016_fit_b__12->SetBinContent(17,623.5479);
   htotpass_cat1_2016_fit_b__12->SetBinContent(18,471.4616);
   htotpass_cat1_2016_fit_b__12->SetBinContent(19,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(20,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(21,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(22,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(23,9.113734e-06);
   htotpass_cat1_2016_fit_b__12->SetMinimum(0);
   htotpass_cat1_2016_fit_b__12->SetMaximum(4005.767);
   htotpass_cat1_2016_fit_b__12->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__12->SetFillColor(ci);
   htotpass_cat1_2016_fit_b__12->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__12->SetLineColor(ci);
   htotpass_cat1_2016_fit_b__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_b__12->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_b__12->SetMarkerSize(0);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__12->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis3[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_3 = new TH1F("hstackMC_stack_3","hstackMC",23, xAxis3);
   hstackMC_stack_3->SetMinimum(0);
   hstackMC_stack_3->SetMaximum(426.0882);
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
   tqq_stack_1->SetBinContent(3,20.53842);
   tqq_stack_1->SetBinContent(4,23.96575);
   tqq_stack_1->SetBinContent(5,31.89122);
   tqq_stack_1->SetBinContent(6,49.94292);
   tqq_stack_1->SetBinContent(7,54.42347);
   tqq_stack_1->SetBinContent(8,53.62063);
   tqq_stack_1->SetBinContent(9,48.63141);
   tqq_stack_1->SetBinContent(10,54.15311);
   tqq_stack_1->SetBinContent(11,55.34746);
   tqq_stack_1->SetBinContent(12,54.90281);
   tqq_stack_1->SetBinContent(13,50.52219);
   tqq_stack_1->SetBinContent(14,35.99321);
   tqq_stack_1->SetBinContent(15,26.12906);
   tqq_stack_1->SetBinContent(16,14.18089);
   tqq_stack_1->SetBinContent(17,11.91277);
   tqq_stack_1->SetBinContent(18,8.722273);
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
   wqq_stack_2->SetBinContent(1,3.43208e-06);
   wqq_stack_2->SetBinContent(2,3.43208e-06);
   wqq_stack_2->SetBinContent(3,2.671535);
   wqq_stack_2->SetBinContent(4,16.49403);
   wqq_stack_2->SetBinContent(5,39.17486);
   wqq_stack_2->SetBinContent(6,130.1807);
   wqq_stack_2->SetBinContent(7,149.3855);
   wqq_stack_2->SetBinContent(8,99.98552);
   wqq_stack_2->SetBinContent(9,37.87362);
   wqq_stack_2->SetBinContent(10,6.460892);
   wqq_stack_2->SetBinContent(11,4.046007);
   wqq_stack_2->SetBinContent(12,2.67354);
   wqq_stack_2->SetBinContent(13,1.019768);
   wqq_stack_2->SetBinContent(14,0.3312305);
   wqq_stack_2->SetBinContent(15,3.43208e-06);
   wqq_stack_2->SetBinContent(16,3.43208e-06);
   wqq_stack_2->SetBinContent(17,3.43208e-06);
   wqq_stack_2->SetBinContent(18,3.43208e-06);
   wqq_stack_2->SetBinContent(19,3.43208e-06);
   wqq_stack_2->SetBinContent(20,3.43208e-06);
   wqq_stack_2->SetBinContent(21,3.43208e-06);
   wqq_stack_2->SetBinContent(22,3.43208e-06);
   wqq_stack_2->SetBinContent(23,3.43208e-06);
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
   zqq_stack_3->SetBinContent(1,5.681653e-06);
   zqq_stack_3->SetBinContent(2,5.681653e-06);
   zqq_stack_3->SetBinContent(3,3.234981);
   zqq_stack_3->SetBinContent(4,8.49588);
   zqq_stack_3->SetBinContent(5,23.54933);
   zqq_stack_3->SetBinContent(6,59.89897);
   zqq_stack_3->SetBinContent(7,183.5875);
   zqq_stack_3->SetBinContent(8,252.1921);
   zqq_stack_3->SetBinContent(9,154.5712);
   zqq_stack_3->SetBinContent(10,85.8902);
   zqq_stack_3->SetBinContent(11,33.69801);
   zqq_stack_3->SetBinContent(12,6.546597);
   zqq_stack_3->SetBinContent(13,5.681653e-06);
   zqq_stack_3->SetBinContent(14,5.681653e-06);
   zqq_stack_3->SetBinContent(15,5.681653e-06);
   zqq_stack_3->SetBinContent(16,5.681653e-06);
   zqq_stack_3->SetBinContent(17,5.681653e-06);
   zqq_stack_3->SetBinContent(18,5.681653e-06);
   zqq_stack_3->SetBinContent(19,5.681653e-06);
   zqq_stack_3->SetBinContent(20,5.681653e-06);
   zqq_stack_3->SetBinContent(21,5.681653e-06);
   zqq_stack_3->SetBinContent(22,5.681653e-06);
   zqq_stack_3->SetBinContent(23,5.681653e-06);
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
   
   TH1F *hsigpass_cat1_2016_fit_b_stack_4 = new TH1F("hsigpass_cat1_2016_fit_b_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_cat1_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat1_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat1_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat1_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat1_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat1_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat1_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat1_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat1_2016_fit_b_stack_4,"");
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
   0,
   2512,
   2488,
   2542,
   2647,
   2695,
   2584,
   2349,
   2055,
   1816,
   1662,
   1422,
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
   1.841055,
   51.12761,
   50.88764,
   51.42597,
   52.45662,
   52.92095,
   51.84074,
   49.47443,
   46.34046,
   43.62332,
   41.77671,
   38.71909,
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
   0,
   50.1176,
   49.87758,
   50.41602,
   51.44686,
   51.91129,
   50.83087,
   48.46408,
   45.3294,
   42.61155,
   40.76441,
   37.70579,
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
   grae->SetTitle("WH_hbb in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3003 = new TH1F("Graph_data_copy3003","WH_hbb in cat1_2016_pass_cat1",100,28.1,212.9);
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
   entry=leg->AddEntry("htotpass_cat1_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat1_2016_fit_b_copy__13 = new TH1F("htotpass_cat1_2016_fit_b_copy__13","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(1,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(2,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(3,2451.791);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(4,2493.588);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(5,2521.771);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(6,2617.536);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(7,2670.511);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(8,2583.993);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(9,2277.552);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(10,2041.988);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(11,1842.855);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(12,1632.153);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(13,1408.067);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(14,1196.077);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(15,982.8488);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(16,789.1597);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(17,623.5479);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(18,471.4616);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(19,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(20,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(21,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(22,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(23,9.113734e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetMaximum(4005.767);
   htotpass_cat1_2016_fit_b_copy__13->SetEntries(92);
   htotpass_cat1_2016_fit_b_copy__13->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b_copy__13->SetFillColor(ci);
   htotpass_cat1_2016_fit_b_copy__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b_copy__13->SetLineColor(ci);
   htotpass_cat1_2016_fit_b_copy__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_b_copy__13->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_b_copy__13->SetMarkerSize(0);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__13->Draw("sameaxis");
   p12pass_cat1_2016_fit_b->Modified();
   cpass_cat1_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_fit_b
   TPad *p22pass_cat1_2016_fit_b = new TPad("p22pass_cat1_2016_fit_b", "p22pass_cat1_2016_fit_b",0,0,1,0.3);
   p22pass_cat1_2016_fit_b->Draw();
   p22pass_cat1_2016_fit_b->cd();
   p22pass_cat1_2016_fit_b->Range(21.27027,-12.01095,182.0811,11.35887);
   p22pass_cat1_2016_fit_b->SetFillColor(0);
   p22pass_cat1_2016_fit_b->SetBorderMode(0);
   p22pass_cat1_2016_fit_b->SetBorderSize(2);
   p22pass_cat1_2016_fit_b->SetTickx(1);
   p22pass_cat1_2016_fit_b->SetTicky(1);
   p22pass_cat1_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat1_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat1_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat1_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat1_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat1_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat1_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_b__14 = new TH1F("iOneWithErrorspass_cat1_2016_fit_b__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMaximum(10.19038);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b__14->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_b__14->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__14->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(0);
   hstack_stack_4->SetMaximum(7.274842);
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
   
   
   TH1F *sigHistResidualwqqpass_cat1_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat1_2016_fit_b_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(3,0.05330532);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(4,0.3306904);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(5,0.7770319);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(6,2.530391);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(7,2.877707);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(8,1.967024);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(9,0.7814782);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(10,0.1425321);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(11,0.09495094);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(12,0.06558514);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(13,0.02704538);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(14,0.009680651);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(15,1.109024e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(16,1.187933e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(17,1.413335e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(18,1.53229e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat1_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat1_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat1_2016_fit_b_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(3,0.06454779);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(4,0.1703347);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(5,0.4671001);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(6,1.164288);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(7,3.536561);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(8,4.961397);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(9,3.189396);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(10,1.894801);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(11,0.7908188);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(12,0.1605959);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(13,1.506838e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(14,1.660538e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(15,1.83594e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(16,1.966569e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(17,2.339712e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(18,2.536636e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat1_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_fit_b__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_fit_b__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetLineColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetRange(2,18);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat1_2016_fit_b_fx3004[23] = {
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_b_fy3004[23] = {
   0,
   0,
   1.293156,
   0.3812637,
   1.613068,
   4.185243,
   6.754634,
   6.793587,
   5.333928,
   2.273673,
   0.2496179,
   0.9351357,
   0.3861794,
   -0.7232374,
   -0.8029497,
   1.532681,
   -1.381505,
   1.303903,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat1_2016_fit_b_felx3004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_b_fely3004[23] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat1_2016_fit_b_fehx3004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat1_2016_fit_b_fehy3004[23] = {
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
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_fit_b_fx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fy3004,Graph_from_iRatiopass_cat1_2016_fit_b_felx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fehx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fely3004,Graph_from_iRatiopass_cat1_2016_fit_b_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMinimum(-3.399014);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMaximum(8.811096);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetStats(0);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_b_copy__16 = new TH1F("iOneWithErrorspass_cat1_2016_fit_b_copy__16","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMaximum(10.19038);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->Draw("sameaxis");
   p22pass_cat1_2016_fit_b->Modified();
   cpass_cat1_2016_fit_b->cd();
   cpass_cat1_2016_fit_b->Modified();
   cpass_cat1_2016_fit_b->cd();
   cpass_cat1_2016_fit_b->SetSelected(cpass_cat1_2016_fit_b);
}
