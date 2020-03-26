void mlfit_pass_cat1_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_b/cpass_cat1_2016_fit_b
//=========  (Wed Sep  4 11:54:17 2019) by ROOT version 6.12/07
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
   p12pass_cat1_2016_fit_b->Range(21.27027,-91.92689,182.0811,4504.418);
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
   htotpass_cat1_2016_fit_b__9->SetBinContent(1,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(2,2354.409);
   htotpass_cat1_2016_fit_b__9->SetBinContent(3,2509.823);
   htotpass_cat1_2016_fit_b__9->SetBinContent(4,2519.682);
   htotpass_cat1_2016_fit_b__9->SetBinContent(5,2544.059);
   htotpass_cat1_2016_fit_b__9->SetBinContent(6,2657.922);
   htotpass_cat1_2016_fit_b__9->SetBinContent(7,2696.522);
   htotpass_cat1_2016_fit_b__9->SetBinContent(8,2576.693);
   htotpass_cat1_2016_fit_b__9->SetBinContent(9,2234.183);
   htotpass_cat1_2016_fit_b__9->SetBinContent(10,2034.759);
   htotpass_cat1_2016_fit_b__9->SetBinContent(11,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(12,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(13,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(14,1201.533);
   htotpass_cat1_2016_fit_b__9->SetBinContent(15,984.9631);
   htotpass_cat1_2016_fit_b__9->SetBinContent(16,784.4432);
   htotpass_cat1_2016_fit_b__9->SetBinContent(17,623.7733);
   htotpass_cat1_2016_fit_b__9->SetBinContent(18,473.9438);
   htotpass_cat1_2016_fit_b__9->SetBinContent(19,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(20,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(21,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(22,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetBinContent(23,1.038529e-05);
   htotpass_cat1_2016_fit_b__9->SetMinimum(0);
   htotpass_cat1_2016_fit_b__9->SetMaximum(4044.783);
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
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(1,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(2,2354.409);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(3,2509.823);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(4,2519.682);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(5,2544.059);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(6,2657.922);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(7,2696.522);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(8,2576.693);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(9,2234.183);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(10,2034.759);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(11,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(12,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(13,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(14,1201.533);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(15,984.9631);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(16,784.4432);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(17,623.7733);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(18,473.9438);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(19,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(20,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(21,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(22,1.038529e-05);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(23,1.038529e-05);
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
   qcd__11->SetBinContent(2,2319.261);
   qcd__11->SetBinContent(3,2448.872);
   qcd__11->SetBinContent(4,2418.294);
   qcd__11->SetBinContent(5,2358.197);
   qcd__11->SetBinContent(6,2254.536);
   qcd__11->SetBinContent(7,2151.513);
   qcd__11->SetBinContent(8,2081.507);
   qcd__11->SetBinContent(9,1950.88);
   qcd__11->SetBinContent(10,1818.634);
   qcd__11->SetBinContent(14,1114.104);
   qcd__11->SetBinContent(15,921.9752);
   qcd__11->SetBinContent(16,750.2581);
   qcd__11->SetBinContent(17,595.0557);
   qcd__11->SetBinContent(18,452.9175);
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
   htotpass_cat1_2016_fit_b__12->SetBinContent(1,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(2,2354.409);
   htotpass_cat1_2016_fit_b__12->SetBinContent(3,2509.823);
   htotpass_cat1_2016_fit_b__12->SetBinContent(4,2519.682);
   htotpass_cat1_2016_fit_b__12->SetBinContent(5,2544.059);
   htotpass_cat1_2016_fit_b__12->SetBinContent(6,2657.922);
   htotpass_cat1_2016_fit_b__12->SetBinContent(7,2696.522);
   htotpass_cat1_2016_fit_b__12->SetBinContent(8,2576.693);
   htotpass_cat1_2016_fit_b__12->SetBinContent(9,2234.183);
   htotpass_cat1_2016_fit_b__12->SetBinContent(10,2034.759);
   htotpass_cat1_2016_fit_b__12->SetBinContent(11,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(12,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(13,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(14,1201.533);
   htotpass_cat1_2016_fit_b__12->SetBinContent(15,984.9631);
   htotpass_cat1_2016_fit_b__12->SetBinContent(16,784.4432);
   htotpass_cat1_2016_fit_b__12->SetBinContent(17,623.7733);
   htotpass_cat1_2016_fit_b__12->SetBinContent(18,473.9438);
   htotpass_cat1_2016_fit_b__12->SetBinContent(19,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(20,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(21,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(22,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetBinContent(23,1.038529e-05);
   htotpass_cat1_2016_fit_b__12->SetMinimum(0);
   htotpass_cat1_2016_fit_b__12->SetMaximum(4044.783);
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
   hstackMC_stack_3->SetMaximum(572.2592);
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
   tqq_stack_1->SetBinContent(2,30.61762);
   tqq_stack_1->SetBinContent(3,49.51093);
   tqq_stack_1->SetBinContent(4,57.77301);
   tqq_stack_1->SetBinContent(5,76.87854);
   tqq_stack_1->SetBinContent(6,120.3948);
   tqq_stack_1->SetBinContent(7,131.1959);
   tqq_stack_1->SetBinContent(8,129.2605);
   tqq_stack_1->SetBinContent(9,117.2332);
   tqq_stack_1->SetBinContent(10,130.5441);
   tqq_stack_1->SetBinContent(14,86.767);
   tqq_stack_1->SetBinContent(15,62.98798);
   tqq_stack_1->SetBinContent(16,34.18515);
   tqq_stack_1->SetBinContent(17,28.7175);
   tqq_stack_1->SetBinContent(18,21.02633);
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
   wqq_stack_2->SetBinContent(1,4.537938e-06);
   wqq_stack_2->SetBinContent(2,1.837937);
   wqq_stack_2->SetBinContent(3,6.301056);
   wqq_stack_2->SetBinContent(4,32.13105);
   wqq_stack_2->SetBinContent(5,71.18785);
   wqq_stack_2->SetBinContent(6,193.8284);
   wqq_stack_2->SetBinContent(7,187.9061);
   wqq_stack_2->SetBinContent(8,106.9735);
   wqq_stack_2->SetBinContent(9,39.80453);
   wqq_stack_2->SetBinContent(10,7.64405);
   wqq_stack_2->SetBinContent(11,4.537938e-06);
   wqq_stack_2->SetBinContent(12,4.537938e-06);
   wqq_stack_2->SetBinContent(13,4.537938e-06);
   wqq_stack_2->SetBinContent(14,0.6623846);
   wqq_stack_2->SetBinContent(15,4.537938e-06);
   wqq_stack_2->SetBinContent(16,4.537938e-06);
   wqq_stack_2->SetBinContent(17,4.537938e-06);
   wqq_stack_2->SetBinContent(18,4.537938e-06);
   wqq_stack_2->SetBinContent(19,4.537938e-06);
   wqq_stack_2->SetBinContent(20,4.537938e-06);
   wqq_stack_2->SetBinContent(21,4.537938e-06);
   wqq_stack_2->SetBinContent(22,4.537938e-06);
   wqq_stack_2->SetBinContent(23,4.537938e-06);
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
   zqq_stack_3->SetBinContent(1,5.847355e-06);
   zqq_stack_3->SetBinContent(2,2.692425);
   zqq_stack_3->SetBinContent(3,5.138681);
   zqq_stack_3->SetBinContent(4,11.48443);
   zqq_stack_3->SetBinContent(5,37.79533);
   zqq_stack_3->SetBinContent(6,89.16334);
   zqq_stack_3->SetBinContent(7,225.9068);
   zqq_stack_3->SetBinContent(8,258.9528);
   zqq_stack_3->SetBinContent(9,126.2656);
   zqq_stack_3->SetBinContent(10,77.93696);
   zqq_stack_3->SetBinContent(11,5.847355e-06);
   zqq_stack_3->SetBinContent(12,5.847355e-06);
   zqq_stack_3->SetBinContent(13,5.847355e-06);
   zqq_stack_3->SetBinContent(14,5.847355e-06);
   zqq_stack_3->SetBinContent(15,5.847355e-06);
   zqq_stack_3->SetBinContent(16,5.847355e-06);
   zqq_stack_3->SetBinContent(17,5.847355e-06);
   zqq_stack_3->SetBinContent(18,5.847355e-06);
   zqq_stack_3->SetBinContent(19,5.847355e-06);
   zqq_stack_3->SetBinContent(20,5.847355e-06);
   zqq_stack_3->SetBinContent(21,5.847355e-06);
   zqq_stack_3->SetBinContent(22,5.847355e-06);
   zqq_stack_3->SetBinContent(23,5.847355e-06);
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
   
   TH1F *hsigpass_cat1_2016_fit_b_stack_4 = new TH1F("hsigpass_cat1_2016_fit_b_stack_4","hqq125 in cat1_2016_pass_cat1",23,40,201);
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
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(1,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(2,2354.409);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(3,2509.823);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(4,2519.682);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(5,2544.059);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(6,2657.922);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(7,2696.522);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(8,2576.693);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(9,2234.183);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(10,2034.759);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(11,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(12,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(13,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(14,1201.533);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(15,984.9631);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(16,784.4432);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(17,623.7733);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(18,473.9438);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(19,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(20,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(21,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(22,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(23,1.038529e-05);
   htotpass_cat1_2016_fit_b_copy__13->SetMaximum(4044.783);
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
   p22pass_cat1_2016_fit_b->Range(21.27027,-12.70125,182.0811,12.96958);
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
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMaximum(11.68604);
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
   hstack_stack_4->SetMaximum(8.370116);
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
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(2,0.03763636);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(3,0.1257254);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(4,0.6441984);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(5,1.412009);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(6,3.767546);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(7,3.619753);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(8,2.104498);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(9,0.8213203);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(10,0.1686334);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(14,0.01935907);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(15,1.466366e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(16,1.570699e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(17,1.868729e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(18,2.026012e-07);
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
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(2,0.05513412);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(3,0.1025325);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(4,0.2302524);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(5,0.749669);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(6,1.733115);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(7,4.351786);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(8,5.0944);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(9,2.605344);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(10,1.719347);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(14,1.708967e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(15,1.889484e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(16,2.023922e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(17,2.407949e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(18,2.610616e-07);
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
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3","hqq125 in cat1_2016_pass_cat1",23,40,201);
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
   0.70462,
   0.2663372,
   0.2344991,
   2.079198,
   5.186559,
   7.79069,
   7.199606,
   5.677422,
   2.283572,
   0,
   0,
   0,
   -0.8730116,
   -0.8712726,
   1.69038,
   -1.390785,
   1.197919,
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_fit_b_fx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fy3004,Graph_from_iRatiopass_cat1_2016_fit_b_felx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fehx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fely3004,Graph_from_iRatiopass_cat1_2016_fit_b_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMinimum(-3.508932);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMaximum(9.908838);
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
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMaximum(11.68604);
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
