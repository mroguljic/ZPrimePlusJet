void mlfit_pass_allcats_2016_fit_b()
{
//=========Macro generated from canvas: cpass_allcats_2016_fit_b/cpass_allcats_2016_fit_b
//=========  (Wed Oct  9 22:43:01 2019) by ROOT version 6.12/07
   TCanvas *cpass_allcats_2016_fit_b = new TCanvas("cpass_allcats_2016_fit_b", "cpass_allcats_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_allcats_2016_fit_b->SetHighLightColor(2);
   cpass_allcats_2016_fit_b->Range(0,0,1,1);
   cpass_allcats_2016_fit_b->SetFillColor(0);
   cpass_allcats_2016_fit_b->SetBorderMode(0);
   cpass_allcats_2016_fit_b->SetBorderSize(2);
   cpass_allcats_2016_fit_b->SetTickx(1);
   cpass_allcats_2016_fit_b->SetTicky(1);
   cpass_allcats_2016_fit_b->SetLeftMargin(0.16);
   cpass_allcats_2016_fit_b->SetBottomMargin(0.13);
   cpass_allcats_2016_fit_b->SetFrameFillStyle(0);
   cpass_allcats_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_allcats_2016_fit_b
   TPad *p12pass_allcats_2016_fit_b = new TPad("p12pass_allcats_2016_fit_b", "p12pass_allcats_2016_fit_b",0,0.3,1,1);
   p12pass_allcats_2016_fit_b->Draw();
   p12pass_allcats_2016_fit_b->cd();
   p12pass_allcats_2016_fit_b->Range(13.7027,-196.718,221.8108,9639.182);
   p12pass_allcats_2016_fit_b->SetFillColor(0);
   p12pass_allcats_2016_fit_b->SetBorderMode(0);
   p12pass_allcats_2016_fit_b->SetBorderSize(2);
   p12pass_allcats_2016_fit_b->SetTickx(1);
   p12pass_allcats_2016_fit_b->SetTicky(1);
   p12pass_allcats_2016_fit_b->SetLeftMargin(0.16);
   p12pass_allcats_2016_fit_b->SetBottomMargin(0.02);
   p12pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   p12pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_allcats_2016_fit_b__97 = new TH1F("htotpass_allcats_2016_fit_b__97","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b__97->SetBinContent(1,2.614116e-05);
   htotpass_allcats_2016_fit_b__97->SetBinContent(2,5007.209);
   htotpass_allcats_2016_fit_b__97->SetBinContent(3,5319.593);
   htotpass_allcats_2016_fit_b__97->SetBinContent(4,5385.061);
   htotpass_allcats_2016_fit_b__97->SetBinContent(5,5426.571);
   htotpass_allcats_2016_fit_b__97->SetBinContent(6,5636.174);
   htotpass_allcats_2016_fit_b__97->SetBinContent(7,5770.395);
   htotpass_allcats_2016_fit_b__97->SetBinContent(8,5552.659);
   htotpass_allcats_2016_fit_b__97->SetBinContent(9,4932.809);
   htotpass_allcats_2016_fit_b__97->SetBinContent(10,4395.068);
   htotpass_allcats_2016_fit_b__97->SetBinContent(11,3956.076);
   htotpass_allcats_2016_fit_b__97->SetBinContent(12,3591.308);
   htotpass_allcats_2016_fit_b__97->SetBinContent(13,3237.662);
   htotpass_allcats_2016_fit_b__97->SetBinContent(14,2864.375);
   htotpass_allcats_2016_fit_b__97->SetBinContent(15,2486.137);
   htotpass_allcats_2016_fit_b__97->SetBinContent(16,2130.319);
   htotpass_allcats_2016_fit_b__97->SetBinContent(17,1792.838);
   htotpass_allcats_2016_fit_b__97->SetBinContent(18,1478.657);
   htotpass_allcats_2016_fit_b__97->SetBinContent(19,846.9576);
   htotpass_allcats_2016_fit_b__97->SetBinContent(20,712.1683);
   htotpass_allcats_2016_fit_b__97->SetBinContent(21,417.578);
   htotpass_allcats_2016_fit_b__97->SetBinContent(22,347.6907);
   htotpass_allcats_2016_fit_b__97->SetBinContent(23,284.9307);
   htotpass_allcats_2016_fit_b__97->SetBinError(1,1.296112e-06);
   htotpass_allcats_2016_fit_b__97->SetBinError(2,37.90153);
   htotpass_allcats_2016_fit_b__97->SetBinError(3,30.55031);
   htotpass_allcats_2016_fit_b__97->SetBinError(4,31.8319);
   htotpass_allcats_2016_fit_b__97->SetBinError(5,35.39215);
   htotpass_allcats_2016_fit_b__97->SetBinError(6,48.09858);
   htotpass_allcats_2016_fit_b__97->SetBinError(7,60.57155);
   htotpass_allcats_2016_fit_b__97->SetBinError(8,59.91441);
   htotpass_allcats_2016_fit_b__97->SetBinError(9,50.19786);
   htotpass_allcats_2016_fit_b__97->SetBinError(10,38.94971);
   htotpass_allcats_2016_fit_b__97->SetBinError(11,27.59326);
   htotpass_allcats_2016_fit_b__97->SetBinError(12,23.26326);
   htotpass_allcats_2016_fit_b__97->SetBinError(13,20.47265);
   htotpass_allcats_2016_fit_b__97->SetBinError(14,18.08599);
   htotpass_allcats_2016_fit_b__97->SetBinError(15,15.94333);
   htotpass_allcats_2016_fit_b__97->SetBinError(16,14.65521);
   htotpass_allcats_2016_fit_b__97->SetBinError(17,13.62024);
   htotpass_allcats_2016_fit_b__97->SetBinError(18,12.672);
   htotpass_allcats_2016_fit_b__97->SetBinError(19,7.097972);
   htotpass_allcats_2016_fit_b__97->SetBinError(20,6.586886);
   htotpass_allcats_2016_fit_b__97->SetBinError(21,5.009411);
   htotpass_allcats_2016_fit_b__97->SetBinError(22,4.962049);
   htotpass_allcats_2016_fit_b__97->SetBinError(23,4.997088);
   htotpass_allcats_2016_fit_b__97->SetMinimum(0);
   htotpass_allcats_2016_fit_b__97->SetMaximum(8655.592);
   htotpass_allcats_2016_fit_b__97->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__97->SetFillColor(ci);
   htotpass_allcats_2016_fit_b__97->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b__97->SetLineColor(ci);
   htotpass_allcats_2016_fit_b__97->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b__97->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b__97->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b__97->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b__97->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b__97->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b__97->Draw("hist");
   
   TH1F *qcd_pass_sum__98 = new TH1F("qcd_pass_sum__98","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd_pass_sum__98->SetBinContent(2,4971.825);
   qcd_pass_sum__98->SetBinContent(3,5254.538);
   qcd_pass_sum__98->SetBinContent(4,5239.664);
   qcd_pass_sum__98->SetBinContent(5,5133.651);
   qcd_pass_sum__98->SetBinContent(6,4953.959);
   qcd_pass_sum__98->SetBinContent(7,4739.799);
   qcd_pass_sum__98->SetBinContent(8,4512.736);
   qcd_pass_sum__98->SetBinContent(9,4229.311);
   qcd_pass_sum__98->SetBinContent(10,3987.085);
   qcd_pass_sum__98->SetBinContent(11,3737.052);
   qcd_pass_sum__98->SetBinContent(12,3431.509);
   qcd_pass_sum__98->SetBinContent(13,3104.031);
   qcd_pass_sum__98->SetBinContent(14,2758.613);
   qcd_pass_sum__98->SetBinContent(15,2412.862);
   qcd_pass_sum__98->SetBinContent(16,2077.893);
   qcd_pass_sum__98->SetBinContent(17,1756.736);
   qcd_pass_sum__98->SetBinContent(18,1449.82);
   qcd_pass_sum__98->SetBinContent(19,835.4301);
   qcd_pass_sum__98->SetBinContent(20,698.9286);
   qcd_pass_sum__98->SetBinContent(21,412.0114);
   qcd_pass_sum__98->SetBinContent(22,346.6176);
   qcd_pass_sum__98->SetBinContent(23,284.1943);
   qcd_pass_sum__98->SetBinError(2,37.79393);
   qcd_pass_sum__98->SetBinError(3,30.14955);
   qcd_pass_sum__98->SetBinError(4,30.26769);
   qcd_pass_sum__98->SetBinError(5,31.22305);
   qcd_pass_sum__98->SetBinError(6,34.85083);
   qcd_pass_sum__98->SetBinError(7,35.24412);
   qcd_pass_sum__98->SetBinError(8,32.77403);
   qcd_pass_sum__98->SetBinError(9,31.21602);
   qcd_pass_sum__98->SetBinError(10,25.83204);
   qcd_pass_sum__98->SetBinError(11,23.28115);
   qcd_pass_sum__98->SetBinError(12,20.9718);
   qcd_pass_sum__98->SetBinError(13,18.41822);
   qcd_pass_sum__98->SetBinError(14,16.69106);
   qcd_pass_sum__98->SetBinError(15,15.15723);
   qcd_pass_sum__98->SetBinError(16,14.27893);
   qcd_pass_sum__98->SetBinError(17,13.41559);
   qcd_pass_sum__98->SetBinError(18,12.52767);
   qcd_pass_sum__98->SetBinError(19,7.055461);
   qcd_pass_sum__98->SetBinError(20,6.524045);
   qcd_pass_sum__98->SetBinError(21,4.990551);
   qcd_pass_sum__98->SetBinError(22,4.960763);
   qcd_pass_sum__98->SetBinError(23,4.996508);
   qcd_pass_sum__98->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_pass_sum__98->SetLineColor(ci);
   qcd_pass_sum__98->SetLineStyle(2);
   qcd_pass_sum__98->SetLineWidth(2);
   qcd_pass_sum__98->GetXaxis()->SetTitle("x");
   qcd_pass_sum__98->GetXaxis()->SetLabelFont(42);
   qcd_pass_sum__98->GetXaxis()->SetLabelSize(0.035);
   qcd_pass_sum__98->GetXaxis()->SetTitleSize(0.035);
   qcd_pass_sum__98->GetXaxis()->SetTitleFont(42);
   qcd_pass_sum__98->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_pass_sum__98->GetYaxis()->SetLabelFont(42);
   qcd_pass_sum__98->GetYaxis()->SetLabelSize(0.035);
   qcd_pass_sum__98->GetYaxis()->SetTitleSize(0.035);
   qcd_pass_sum__98->GetYaxis()->SetTitleOffset(0);
   qcd_pass_sum__98->GetYaxis()->SetTitleFont(42);
   qcd_pass_sum__98->GetZaxis()->SetLabelFont(42);
   qcd_pass_sum__98->GetZaxis()->SetLabelSize(0.035);
   qcd_pass_sum__98->GetZaxis()->SetTitleSize(0.035);
   qcd_pass_sum__98->GetZaxis()->SetTitleFont(42);
   qcd_pass_sum__98->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016__99 = new TH1D("bkgUncBand_pass_2016__99","bkgUncBand_pass_2016",23,40,201);
   bkgUncBand_pass_2016__99->SetBinContent(1,2.768839e-05);
   bkgUncBand_pass_2016__99->SetBinContent(2,5020.283);
   bkgUncBand_pass_2016__99->SetBinContent(3,5315.926);
   bkgUncBand_pass_2016__99->SetBinContent(4,5369.054);
   bkgUncBand_pass_2016__99->SetBinContent(5,5403.602);
   bkgUncBand_pass_2016__99->SetBinContent(6,5622.869);
   bkgUncBand_pass_2016__99->SetBinContent(7,5772.541);
   bkgUncBand_pass_2016__99->SetBinContent(8,5561.866);
   bkgUncBand_pass_2016__99->SetBinContent(9,4919.893);
   bkgUncBand_pass_2016__99->SetBinContent(10,4366.827);
   bkgUncBand_pass_2016__99->SetBinContent(11,3918.899);
   bkgUncBand_pass_2016__99->SetBinContent(12,3551.559);
   bkgUncBand_pass_2016__99->SetBinContent(13,3201.209);
   bkgUncBand_pass_2016__99->SetBinContent(14,2834.61);
   bkgUncBand_pass_2016__99->SetBinContent(15,2463.496);
   bkgUncBand_pass_2016__99->SetBinContent(16,2113.356);
   bkgUncBand_pass_2016__99->SetBinContent(17,1779.083);
   bkgUncBand_pass_2016__99->SetBinContent(18,1468.387);
   bkgUncBand_pass_2016__99->SetBinContent(19,842.6675);
   bkgUncBand_pass_2016__99->SetBinContent(20,708.6741);
   bkgUncBand_pass_2016__99->SetBinContent(21,416.8814);
   bkgUncBand_pass_2016__99->SetBinContent(22,348.0772);
   bkgUncBand_pass_2016__99->SetBinContent(23,285.7458);
   bkgUncBand_pass_2016__99->SetBinError(1,2.661827e-06);
   bkgUncBand_pass_2016__99->SetBinError(2,56.08589);
   bkgUncBand_pass_2016__99->SetBinError(3,40.45675);
   bkgUncBand_pass_2016__99->SetBinError(4,36.67375);
   bkgUncBand_pass_2016__99->SetBinError(5,40.56141);
   bkgUncBand_pass_2016__99->SetBinError(6,39.21824);
   bkgUncBand_pass_2016__99->SetBinError(7,47.08361);
   bkgUncBand_pass_2016__99->SetBinError(8,46.15733);
   bkgUncBand_pass_2016__99->SetBinError(9,40.92606);
   bkgUncBand_pass_2016__99->SetBinError(10,39.53919);
   bkgUncBand_pass_2016__99->SetBinError(11,34.04981);
   bkgUncBand_pass_2016__99->SetBinError(12,36.9243);
   bkgUncBand_pass_2016__99->SetBinError(13,32.21236);
   bkgUncBand_pass_2016__99->SetBinError(14,27.73135);
   bkgUncBand_pass_2016__99->SetBinError(15,22.62389);
   bkgUncBand_pass_2016__99->SetBinError(16,18.80772);
   bkgUncBand_pass_2016__99->SetBinError(17,17.09799);
   bkgUncBand_pass_2016__99->SetBinError(18,16.57642);
   bkgUncBand_pass_2016__99->SetBinError(19,11.23222);
   bkgUncBand_pass_2016__99->SetBinError(20,10.48568);
   bkgUncBand_pass_2016__99->SetBinError(21,7.19952);
   bkgUncBand_pass_2016__99->SetBinError(22,7.278525);
   bkgUncBand_pass_2016__99->SetBinError(23,7.469199);
   bkgUncBand_pass_2016__99->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016__99->SetFillColor(ci);
   bkgUncBand_pass_2016__99->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016__99->SetLineColor(ci);
   bkgUncBand_pass_2016__99->SetLineStyle(0);
   bkgUncBand_pass_2016__99->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016__99->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016__99->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016__99->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016__99->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016__99->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016__99->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016__99->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016__99->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016__99->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016__99->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016__99->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016__99->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016__99->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016__99->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016__99->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis25[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_25 = new TH1F("hstackMC_stack_25","hstackMC",23, xAxis25);
   hstackMC_stack_25->SetMinimum(0);
   hstackMC_stack_25->SetMaximum(1091.919);
   hstackMC_stack_25->SetDirectory(0);
   hstackMC_stack_25->SetStats(0);
   hstackMC_stack_25->SetLineStyle(0);
   hstackMC_stack_25->SetMarkerStyle(20);
   hstackMC_stack_25->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_25->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_25->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_25->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_25->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_25->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_25->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_25->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_25->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_25);
   
   Double_t xAxis26[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_pass_sum_stack_1 = new TH1F("tqq_pass_sum_stack_1","tqq in cat1_2016_pass_cat1",23, xAxis26);
   tqq_pass_sum_stack_1->SetBinContent(2,26.80914);
   tqq_pass_sum_stack_1->SetBinContent(3,40.50559);
   tqq_pass_sum_stack_1->SetBinContent(4,50.62708);
   tqq_pass_sum_stack_1->SetBinContent(5,74.18816);
   tqq_pass_sum_stack_1->SetBinContent(6,116.1315);
   tqq_pass_sum_stack_1->SetBinContent(7,134.2354);
   tqq_pass_sum_stack_1->SetBinContent(8,126.4682);
   tqq_pass_sum_stack_1->SetBinContent(9,110.4685);
   tqq_pass_sum_stack_1->SetBinContent(10,123.1374);
   tqq_pass_sum_stack_1->SetBinContent(11,126.3832);
   tqq_pass_sum_stack_1->SetBinContent(12,131.6775);
   tqq_pass_sum_stack_1->SetBinContent(13,125.7302);
   tqq_pass_sum_stack_1->SetBinContent(14,102.3017);
   tqq_pass_sum_stack_1->SetBinContent(15,71.89002);
   tqq_pass_sum_stack_1->SetBinContent(16,51.88235);
   tqq_pass_sum_stack_1->SetBinContent(17,36.10155);
   tqq_pass_sum_stack_1->SetBinContent(18,28.83678);
   tqq_pass_sum_stack_1->SetBinContent(19,11.52751);
   tqq_pass_sum_stack_1->SetBinContent(20,13.23969);
   tqq_pass_sum_stack_1->SetBinContent(21,5.566637);
   tqq_pass_sum_stack_1->SetBinContent(22,1.073107);
   tqq_pass_sum_stack_1->SetBinContent(23,0.736382);
   tqq_pass_sum_stack_1->SetBinError(2,2.100554);
   tqq_pass_sum_stack_1->SetBinError(3,3.296687);
   tqq_pass_sum_stack_1->SetBinError(4,3.926821);
   tqq_pass_sum_stack_1->SetBinError(5,5.461648);
   tqq_pass_sum_stack_1->SetBinError(6,8.50493);
   tqq_pass_sum_stack_1->SetBinError(7,9.531482);
   tqq_pass_sum_stack_1->SetBinError(8,9.166631);
   tqq_pass_sum_stack_1->SetBinError(9,8.133874);
   tqq_pass_sum_stack_1->SetBinError(10,9.111065);
   tqq_pass_sum_stack_1->SetBinError(11,9.425953);
   tqq_pass_sum_stack_1->SetBinError(12,9.296532);
   tqq_pass_sum_stack_1->SetBinError(13,8.852786);
   tqq_pass_sum_stack_1->SetBinError(14,6.892326);
   tqq_pass_sum_stack_1->SetBinError(15,4.900133);
   tqq_pass_sum_stack_1->SetBinError(16,3.261557);
   tqq_pass_sum_stack_1->SetBinError(17,2.352203);
   tqq_pass_sum_stack_1->SetBinError(18,1.907147);
   tqq_pass_sum_stack_1->SetBinError(19,0.7756799);
   tqq_pass_sum_stack_1->SetBinError(20,0.9076883);
   tqq_pass_sum_stack_1->SetBinError(21,0.4342826);
   tqq_pass_sum_stack_1->SetBinError(22,0.1129912);
   tqq_pass_sum_stack_1->SetBinError(23,0.07609453);
   tqq_pass_sum_stack_1->SetEntries(138);

   ci = TColor::GetColor("#660066");
   tqq_pass_sum_stack_1->SetLineColor(ci);
   tqq_pass_sum_stack_1->SetLineStyle(4);
   tqq_pass_sum_stack_1->SetLineWidth(2);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitle("x");
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_pass_sum_stack_1,"");
   
   TH1F *wqq_pass_sum_stack_2 = new TH1F("wqq_pass_sum_stack_2","wqq in cat1_2016_pass_cat1",23,40,201);
   wqq_pass_sum_stack_2->SetBinContent(1,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(2,5.054813);
   wqq_pass_sum_stack_2->SetBinContent(3,16.12225);
   wqq_pass_sum_stack_2->SetBinContent(4,66.97241);
   wqq_pass_sum_stack_2->SetBinContent(5,142.142);
   wqq_pass_sum_stack_2->SetBinContent(6,364.6324);
   wqq_pass_sum_stack_2->SetBinContent(7,457.1772);
   wqq_pass_sum_stack_2->SetBinContent(8,264.7439);
   wqq_pass_sum_stack_2->SetBinContent(9,107.6932);
   wqq_pass_sum_stack_2->SetBinContent(10,25.87648);
   wqq_pass_sum_stack_2->SetBinContent(11,10.54151);
   wqq_pass_sum_stack_2->SetBinContent(12,4.360165);
   wqq_pass_sum_stack_2->SetBinContent(13,1.818629);
   wqq_pass_sum_stack_2->SetBinContent(14,0.3263968);
   wqq_pass_sum_stack_2->SetBinContent(15,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(16,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(17,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(18,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(19,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(20,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(21,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(22,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinContent(23,1.027223e-05);
   wqq_pass_sum_stack_2->SetBinError(1,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(2,0.7134537);
   wqq_pass_sum_stack_2->SetBinError(3,3.136831);
   wqq_pass_sum_stack_2->SetBinError(4,8.147026);
   wqq_pass_sum_stack_2->SetBinError(5,9.694478);
   wqq_pass_sum_stack_2->SetBinError(6,25.20112);
   wqq_pass_sum_stack_2->SetBinError(7,34.28832);
   wqq_pass_sum_stack_2->SetBinError(8,26.79413);
   wqq_pass_sum_stack_2->SetBinError(9,16.06773);
   wqq_pass_sum_stack_2->SetBinError(10,3.269263);
   wqq_pass_sum_stack_2->SetBinError(11,1.047674);
   wqq_pass_sum_stack_2->SetBinError(12,0.726012);
   wqq_pass_sum_stack_2->SetBinError(13,0.7074156);
   wqq_pass_sum_stack_2->SetBinError(14,0.2750547);
   wqq_pass_sum_stack_2->SetBinError(15,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(16,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(17,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(18,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(19,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(20,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(21,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(22,7.231004e-07);
   wqq_pass_sum_stack_2->SetBinError(23,7.231004e-07);
   wqq_pass_sum_stack_2->SetEntries(138);

   ci = TColor::GetColor("#009900");
   wqq_pass_sum_stack_2->SetLineColor(ci);
   wqq_pass_sum_stack_2->SetLineStyle(2);
   wqq_pass_sum_stack_2->SetLineWidth(2);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitle("x");
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_pass_sum_stack_2,"");
   
   TH1F *zqq_pass_sum_stack_3 = new TH1F("zqq_pass_sum_stack_3","zqq in cat1_2016_pass_cat1",23,40,201);
   zqq_pass_sum_stack_3->SetBinContent(1,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(2,3.520083);
   zqq_pass_sum_stack_3->SetBinContent(3,8.426745);
   zqq_pass_sum_stack_3->SetBinContent(4,27.7975);
   zqq_pass_sum_stack_3->SetBinContent(5,76.58977);
   zqq_pass_sum_stack_3->SetBinContent(6,201.4512);
   zqq_pass_sum_stack_3->SetBinContent(7,439.1829);
   zqq_pass_sum_stack_3->SetBinContent(8,648.7111);
   zqq_pass_sum_stack_3->SetBinContent(9,485.3361);
   zqq_pass_sum_stack_3->SetBinContent(10,258.9699);
   zqq_pass_sum_stack_3->SetBinContent(11,82.0991);
   zqq_pass_sum_stack_3->SetBinContent(12,23.76099);
   zqq_pass_sum_stack_3->SetBinContent(13,6.08215);
   zqq_pass_sum_stack_3->SetBinContent(14,3.133686);
   zqq_pass_sum_stack_3->SetBinContent(15,1.384864);
   zqq_pass_sum_stack_3->SetBinContent(16,0.5444151);
   zqq_pass_sum_stack_3->SetBinContent(17,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(18,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(19,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(20,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(21,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(22,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinContent(23,1.586893e-05);
   zqq_pass_sum_stack_3->SetBinError(1,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(2,1.795321);
   zqq_pass_sum_stack_3->SetBinError(3,1.902086);
   zqq_pass_sum_stack_3->SetBinError(4,3.916928);
   zqq_pass_sum_stack_3->SetBinError(5,12.40618);
   zqq_pass_sum_stack_3->SetBinError(6,19.78542);
   zqq_pass_sum_stack_3->SetBinError(7,34.06209);
   zqq_pass_sum_stack_3->SetBinError(8,41.39621);
   zqq_pass_sum_stack_3->SetBinError(9,34.94357);
   zqq_pass_sum_stack_3->SetBinError(10,27.49702);
   zqq_pass_sum_stack_3->SetBinError(11,11.37672);
   zqq_pass_sum_stack_3->SetBinError(12,3.796087);
   zqq_pass_sum_stack_3->SetBinError(13,1.013137);
   zqq_pass_sum_stack_3->SetBinError(14,0.965329);
   zqq_pass_sum_stack_3->SetBinError(15,0.6610266);
   zqq_pass_sum_stack_3->SetBinError(16,0.4997416);
   zqq_pass_sum_stack_3->SetBinError(17,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(18,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(19,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(20,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(21,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(22,1.075655e-06);
   zqq_pass_sum_stack_3->SetBinError(23,1.075655e-06);
   zqq_pass_sum_stack_3->SetEntries(138);

   ci = TColor::GetColor("#cc0000");
   zqq_pass_sum_stack_3->SetLineColor(ci);
   zqq_pass_sum_stack_3->SetLineStyle(3);
   zqq_pass_sum_stack_3->SetLineWidth(2);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitle("x");
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_pass_sum_stack_3,"");
   
   TH1F *hsigpass_allcats_2016_fit_b_stack_4 = new TH1F("hsigpass_allcats_2016_fit_b_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_allcats_2016_fit_b_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_allcats_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_allcats_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_pass_sum_fx3025[23] = {
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
   Double_t data_pass_sum_fy3025[23] = {
   0,
   5134,
   5311,
   5198,
   5385,
   5667,
   5824,
   5504,
   4922,
   4442,
   3910,
   3675,
   3271,
   2903,
   2438,
   2209,
   1760,
   1450,
   839,
   705,
   385,
   321,
   316};
   Double_t data_pass_sum_felx3025[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_fely3025[23] = {
   4.509645,
   73.91226,
   75.13862,
   74.35184,
   75.64148,
   77.54343,
   78.58673,
   76.4549,
   72.41234,
   68.91868,
   64.78956,
   62.89683,
   59.48725,
   56.19799,
   51.70883,
   49.35331,
   44.33875,
   40.46699,
   31.2606,
   28.87569,
   21.81845,
   20.13607,
   20.00045};
   Double_t data_pass_sum_fehx3025[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_fehy3025[23] = {
   0,
   71.63948,
   72.86441,
   72.08479,
   73.37047,
   75.26777,
   76.30363,
   74.17702,
   70.14417,
   66.63471,
   62.51529,
   60.60653,
   57.17634,
   53.86202,
   49.35684,
   46.97965,
   41.92932,
   38.05331,
   28.93721,
   26.52087,
   19.58767,
   17.87942,
   17.73904};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_pass_sum_fx3025,data_pass_sum_fy3025,data_pass_sum_felx3025,data_pass_sum_fehx3025,data_pass_sum_fely3025,data_pass_sum_fehy3025);
   grae->SetName("data_pass_sum");
   grae->SetTitle("WH_hbb in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_pass_sum3025 = new TH1F("Graph_data_pass_sum3025","WH_hbb in cat1_2016_pass_cat1",100,28.1,212.9);
   Graph_data_pass_sum3025->SetMinimum(0);
   Graph_data_pass_sum3025->SetMaximum(6490.785);
   Graph_data_pass_sum3025->SetDirectory(0);
   Graph_data_pass_sum3025->SetStats(0);
   Graph_data_pass_sum3025->SetLineStyle(0);
   Graph_data_pass_sum3025->SetMarkerStyle(20);
   Graph_data_pass_sum3025->GetXaxis()->SetLabelFont(42);
   Graph_data_pass_sum3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum3025->GetXaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum3025->GetXaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_pass_sum3025->GetXaxis()->SetTitleFont(42);
   Graph_data_pass_sum3025->GetYaxis()->SetLabelFont(42);
   Graph_data_pass_sum3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum3025->GetYaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum3025->GetYaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum3025->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_pass_sum3025->GetYaxis()->SetTitleFont(42);
   Graph_data_pass_sum3025->GetZaxis()->SetLabelFont(42);
   Graph_data_pass_sum3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum3025->GetZaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum3025->GetZaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_pass_sum3025);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.5,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_pass_sum_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_pass_sum_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_pass_sum_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd_pass_sum","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("bkgUncBand_pass_2016","Total background","lf");

   ci = TColor::GetColor("#3366cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("data_pass_sum","Data","pe");
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
      tex = new TLatex(0.25,0.77,"450 < p_{T} < 1200 GeV");
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
   
   TH1F *htotpass_allcats_2016_fit_b_copy__100 = new TH1F("htotpass_allcats_2016_fit_b_copy__100","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(1,2.614116e-05);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(2,5007.209);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(3,5319.593);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(4,5385.061);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(5,5426.571);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(6,5636.174);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(7,5770.395);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(8,5552.659);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(9,4932.809);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(10,4395.068);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(11,3956.076);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(12,3591.308);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(13,3237.662);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(14,2864.375);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(15,2486.137);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(16,2130.319);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(17,1792.838);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(18,1478.657);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(19,846.9576);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(20,712.1683);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(21,417.578);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(22,347.6907);
   htotpass_allcats_2016_fit_b_copy__100->SetBinContent(23,284.9307);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(1,1.296112e-06);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(2,37.90153);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(3,30.55031);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(4,31.8319);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(5,35.39215);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(6,48.09858);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(7,60.57155);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(8,59.91441);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(9,50.19786);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(10,38.94971);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(11,27.59326);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(12,23.26326);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(13,20.47265);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(14,18.08599);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(15,15.94333);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(16,14.65521);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(17,13.62024);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(18,12.672);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(19,7.097972);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(20,6.586886);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(21,5.009411);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(22,4.962049);
   htotpass_allcats_2016_fit_b_copy__100->SetBinError(23,4.997088);
   htotpass_allcats_2016_fit_b_copy__100->SetMaximum(8655.592);
   htotpass_allcats_2016_fit_b_copy__100->SetEntries(552);
   htotpass_allcats_2016_fit_b_copy__100->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b_copy__100->SetFillColor(ci);
   htotpass_allcats_2016_fit_b_copy__100->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_b_copy__100->SetLineColor(ci);
   htotpass_allcats_2016_fit_b_copy__100->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_b_copy__100->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_b_copy__100->SetMarkerSize(0);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_b_copy__100->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__100->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_b_copy__100->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__100->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_b_copy__100->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_b_copy__100->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_b_copy__100->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__100->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_b_copy__100->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_b_copy__100->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_b_copy__100->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_b_copy__100->Draw("sameaxis");
   p12pass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_allcats_2016_fit_b
   TPad *p22pass_allcats_2016_fit_b = new TPad("p22pass_allcats_2016_fit_b", "p22pass_allcats_2016_fit_b",0,0,1,0.3);
   p22pass_allcats_2016_fit_b->Draw();
   p22pass_allcats_2016_fit_b->cd();
   p22pass_allcats_2016_fit_b->Range(13.7027,-9.761262,221.8108,4.801276);
   p22pass_allcats_2016_fit_b->SetFillColor(0);
   p22pass_allcats_2016_fit_b->SetBorderMode(0);
   p22pass_allcats_2016_fit_b->SetBorderSize(2);
   p22pass_allcats_2016_fit_b->SetTickx(1);
   p22pass_allcats_2016_fit_b->SetTicky(1);
   p22pass_allcats_2016_fit_b->SetLeftMargin(0.16);
   p22pass_allcats_2016_fit_b->SetTopMargin(0.05);
   p22pass_allcats_2016_fit_b->SetBottomMargin(0.3);
   p22pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   p22pass_allcats_2016_fit_b->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b__101 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b__101","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(1,1.180504e-06);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(2,0.770666);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(3,0.5467016);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(4,0.5008822);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(5,0.5444048);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(6,0.5132901);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(7,0.6079605);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(8,0.6128493);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(9,0.5741731);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(10,0.5833744);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(11,0.5349335);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(12,0.5979481);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(13,0.5522265);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(14,0.5039313);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(15,0.4477068);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(16,0.3904732);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(17,0.3963922);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(18,0.42222);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(19,0.3731771);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(20,0.3785679);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(21,0.3477515);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(22,0.3829241);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetBinError(23,0.3958293);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetMinimum(-5.3925);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetMaximum(4.073149);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetEntries(1104);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_b__101->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_b__101->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__101->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__101->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__101->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__101->Draw("");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b__102 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b__102","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(1,1.180504e-06);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(2,0.770666);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(3,0.5467016);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(4,0.5008822);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(5,0.5444048);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(6,0.5132901);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(7,0.6079605);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(8,0.6128493);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(9,0.5741731);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(10,0.5833744);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(11,0.5349335);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(12,0.5979481);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(13,0.5522265);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(14,0.5039313);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(15,0.4477068);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(16,0.3904732);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(17,0.3963922);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(18,0.42222);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(19,0.3731771);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(20,0.3785679);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(21,0.3477515);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(22,0.3829241);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetBinError(23,0.3958293);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMinimum(-5.3925);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMaximum(4.073149);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetEntries(1104);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_b__102->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_b__102->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b__102->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b__102->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b__102->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_26 = new TH1F("hstack_stack_26","hstack",23,40,201);
   hstack_stack_26->SetMinimum(0);
   hstack_stack_26->SetMaximum(0);
   hstack_stack_26->SetDirectory(0);
   hstack_stack_26->SetStats(0);
   hstack_stack_26->SetLineStyle(0);
   hstack_stack_26->SetMarkerStyle(20);
   hstack_stack_26->GetXaxis()->SetLabelFont(42);
   hstack_stack_26->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_26->GetXaxis()->SetTitleFont(42);
   hstack_stack_26->GetYaxis()->SetLabelFont(42);
   hstack_stack_26->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_26->GetYaxis()->SetTitleFont(42);
   hstack_stack_26->GetZaxis()->SetLabelFont(42);
   hstack_stack_26->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_26->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_26->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_26->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_26);
   
   
   TH1F *sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_allcats_2016_fit_bpass_allcats_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_allcats_2016_fit_b__103 = new TH1F("iOneWithErrorsLinepass_allcats_2016_fit_b__103","",23,40,201);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(1,1.180504e-06);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(2,0.770666);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(3,0.5467016);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(4,0.5008822);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(5,0.5444048);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(6,0.5132901);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(7,0.6079605);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(8,0.6128493);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(9,0.5741731);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(10,0.5833744);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(11,0.5349335);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(12,0.5979481);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(13,0.5522265);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(14,0.5039313);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(15,0.4477068);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(16,0.3904732);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(17,0.3963922);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(18,0.42222);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(19,0.3731771);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(20,0.3785679);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(21,0.3477515);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(22,0.3829241);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetBinError(23,0.3958293);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetEntries(1104);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetFillColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetLineColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetMarkerColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->SetMarkerSize(0);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_b__103->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fx3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fy3026[23] = {
   0,
   1.715433,
   -0.1179216,
   -2.595,
   -0.5665877,
   0.3975343,
   0.6821185,
   -0.6559873,
   -0.1540911,
   0.6809713,
   -0.7370384,
   1.330626,
   0.5604208,
   0.6873065,
   -0.9752796,
   1.594233,
   -0.7831725,
   -0.7530683,
   -0.2749947,
   -0.2702881,
   -1.663191,
   -1.492819,
   1.55343};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_felx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fely3026[23] = {
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
   1,
   1};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fehx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_b_fehy3026[23] = {
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
   1,
   1};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_allcats_2016_fit_b_fx3026,Graph_from_iRatiopass_allcats_2016_fit_b_fy3026,Graph_from_iRatiopass_allcats_2016_fit_b_felx3026,Graph_from_iRatiopass_allcats_2016_fit_b_fehx3026,Graph_from_iRatiopass_allcats_2016_fit_b_fely3026,Graph_from_iRatiopass_allcats_2016_fit_b_fehy3026);
   grae->SetName("Graph_from_iRatiopass_allcats_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026 = new TH1F("Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetMinimum(-4.226044);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetMaximum(3.346476);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetDirectory(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetStats(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_allcats_2016_fit_b3026);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_b_copy__104 = new TH1F("iOneWithErrorspass_allcats_2016_fit_b_copy__104","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(1,1.180504e-06);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(2,0.770666);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(3,0.5467016);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(4,0.5008822);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(5,0.5444048);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(6,0.5132901);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(7,0.6079605);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(8,0.6128493);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(9,0.5741731);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(10,0.5833744);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(11,0.5349335);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(12,0.5979481);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(13,0.5522265);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(14,0.5039313);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(15,0.4477068);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(16,0.3904732);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(17,0.3963922);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(18,0.42222);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(19,0.3731771);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(20,0.3785679);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(21,0.3477515);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(22,0.3829241);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetBinError(23,0.3958293);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMinimum(-5.3925);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMaximum(4.073149);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetEntries(1104);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_b_copy__104->Draw("sameaxis");
   p22pass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
   cpass_allcats_2016_fit_b->Modified();
   cpass_allcats_2016_fit_b->cd();
   cpass_allcats_2016_fit_b->SetSelected(cpass_allcats_2016_fit_b);
}
