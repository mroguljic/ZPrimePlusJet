void mlfit_pass_allcats_2016_fit_s()
{
//=========Macro generated from canvas: cpass_allcats_2016_fit_s/cpass_allcats_2016_fit_s
//=========  (Wed Oct  9 22:43:09 2019) by ROOT version 6.12/07
   TCanvas *cpass_allcats_2016_fit_s = new TCanvas("cpass_allcats_2016_fit_s", "cpass_allcats_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_allcats_2016_fit_s->SetHighLightColor(2);
   cpass_allcats_2016_fit_s->Range(0,0,1,1);
   cpass_allcats_2016_fit_s->SetFillColor(0);
   cpass_allcats_2016_fit_s->SetBorderMode(0);
   cpass_allcats_2016_fit_s->SetBorderSize(2);
   cpass_allcats_2016_fit_s->SetTickx(1);
   cpass_allcats_2016_fit_s->SetTicky(1);
   cpass_allcats_2016_fit_s->SetLeftMargin(0.16);
   cpass_allcats_2016_fit_s->SetBottomMargin(0.13);
   cpass_allcats_2016_fit_s->SetFrameFillStyle(0);
   cpass_allcats_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_allcats_2016_fit_s
   TPad *p12pass_allcats_2016_fit_s = new TPad("p12pass_allcats_2016_fit_s", "p12pass_allcats_2016_fit_s",0,0.3,1,1);
   p12pass_allcats_2016_fit_s->Draw();
   p12pass_allcats_2016_fit_s->cd();
   p12pass_allcats_2016_fit_s->Range(13.7027,-196.3106,221.8108,9619.22);
   p12pass_allcats_2016_fit_s->SetFillColor(0);
   p12pass_allcats_2016_fit_s->SetBorderMode(0);
   p12pass_allcats_2016_fit_s->SetBorderSize(2);
   p12pass_allcats_2016_fit_s->SetTickx(1);
   p12pass_allcats_2016_fit_s->SetTicky(1);
   p12pass_allcats_2016_fit_s->SetLeftMargin(0.16);
   p12pass_allcats_2016_fit_s->SetBottomMargin(0.02);
   p12pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   p12pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_allcats_2016_fit_s__97 = new TH1F("htotpass_allcats_2016_fit_s__97","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s__97->SetBinContent(1,2.977735e-05);
   htotpass_allcats_2016_fit_s__97->SetBinContent(2,5049.499);
   htotpass_allcats_2016_fit_s__97->SetBinContent(3,5316.938);
   htotpass_allcats_2016_fit_s__97->SetBinContent(4,5353.617);
   htotpass_allcats_2016_fit_s__97->SetBinContent(5,5379.208);
   htotpass_allcats_2016_fit_s__97->SetBinContent(6,5604.12);
   htotpass_allcats_2016_fit_s__97->SetBinContent(7,5758.444);
   htotpass_allcats_2016_fit_s__97->SetBinContent(8,5548.301);
   htotpass_allcats_2016_fit_s__97->SetBinContent(9,4893.114);
   htotpass_allcats_2016_fit_s__97->SetBinContent(10,4334.947);
   htotpass_allcats_2016_fit_s__97->SetBinContent(11,3869.361);
   htotpass_allcats_2016_fit_s__97->SetBinContent(12,3502.796);
   htotpass_allcats_2016_fit_s__97->SetBinContent(13,3156.814);
   htotpass_allcats_2016_fit_s__97->SetBinContent(14,2796.762);
   htotpass_allcats_2016_fit_s__97->SetBinContent(15,2432.802);
   htotpass_allcats_2016_fit_s__97->SetBinContent(16,2089.832);
   htotpass_allcats_2016_fit_s__97->SetBinContent(17,1763.126);
   htotpass_allcats_2016_fit_s__97->SetBinContent(18,1458.051);
   htotpass_allcats_2016_fit_s__97->SetBinContent(19,836.8588);
   htotpass_allcats_2016_fit_s__97->SetBinContent(20,706.0176);
   htotpass_allcats_2016_fit_s__97->SetBinContent(21,415.1089);
   htotpass_allcats_2016_fit_s__97->SetBinContent(22,347.6471);
   htotpass_allcats_2016_fit_s__97->SetBinContent(23,286.5758);
   htotpass_allcats_2016_fit_s__97->SetBinError(1,1.314327e-06);
   htotpass_allcats_2016_fit_s__97->SetBinError(2,37.50165);
   htotpass_allcats_2016_fit_s__97->SetBinError(3,29.1435);
   htotpass_allcats_2016_fit_s__97->SetBinError(4,30.00359);
   htotpass_allcats_2016_fit_s__97->SetBinError(5,34.32363);
   htotpass_allcats_2016_fit_s__97->SetBinError(6,48.37785);
   htotpass_allcats_2016_fit_s__97->SetBinError(7,61.69833);
   htotpass_allcats_2016_fit_s__97->SetBinError(8,61.6037);
   htotpass_allcats_2016_fit_s__97->SetBinError(9,50.58901);
   htotpass_allcats_2016_fit_s__97->SetBinError(10,39.04743);
   htotpass_allcats_2016_fit_s__97->SetBinError(11,28.19706);
   htotpass_allcats_2016_fit_s__97->SetBinError(12,24.19768);
   htotpass_allcats_2016_fit_s__97->SetBinError(13,21.94424);
   htotpass_allcats_2016_fit_s__97->SetBinError(14,19.61998);
   htotpass_allcats_2016_fit_s__97->SetBinError(15,16.72311);
   htotpass_allcats_2016_fit_s__97->SetBinError(16,14.72624);
   htotpass_allcats_2016_fit_s__97->SetBinError(17,12.84999);
   htotpass_allcats_2016_fit_s__97->SetBinError(18,11.70706);
   htotpass_allcats_2016_fit_s__97->SetBinError(19,6.697433);
   htotpass_allcats_2016_fit_s__97->SetBinError(20,6.325638);
   htotpass_allcats_2016_fit_s__97->SetBinError(21,4.777272);
   htotpass_allcats_2016_fit_s__97->SetBinError(22,4.914924);
   htotpass_allcats_2016_fit_s__97->SetBinError(23,4.85998);
   htotpass_allcats_2016_fit_s__97->SetMinimum(0);
   htotpass_allcats_2016_fit_s__97->SetMaximum(8637.667);
   htotpass_allcats_2016_fit_s__97->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__97->SetFillColor(ci);
   htotpass_allcats_2016_fit_s__97->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__97->SetLineColor(ci);
   htotpass_allcats_2016_fit_s__97->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s__97->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s__97->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s__97->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s__97->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__97->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__97->Draw("hist");
   
   TH1F *qcd_pass_sum__98 = new TH1F("qcd_pass_sum__98","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd_pass_sum__98->SetBinContent(2,5014.491);
   qcd_pass_sum__98->SetBinContent(3,5249.519);
   qcd_pass_sum__98->SetBinContent(4,5194.053);
   qcd_pass_sum__98->SetBinContent(5,5059.015);
   qcd_pass_sum__98->SetBinContent(6,4852.87);
   qcd_pass_sum__98->SetBinContent(7,4626.97);
   qcd_pass_sum__98->SetBinContent(8,4401.508);
   qcd_pass_sum__98->SetBinContent(9,4121.257);
   qcd_pass_sum__98->SetBinContent(10,3888.674);
   qcd_pass_sum__98->SetBinContent(11,3645.54);
   qcd_pass_sum__98->SetBinContent(12,3349.225);
   qcd_pass_sum__98->SetBinContent(13,3032.425);
   qcd_pass_sum__98->SetBinContent(14,2699.108);
   qcd_pass_sum__98->SetBinContent(15,2365.392);
   qcd_pass_sum__98->SetBinContent(16,2041.604);
   qcd_pass_sum__98->SetBinContent(17,1730.127);
   qcd_pass_sum__98->SetBinContent(18,1431.695);
   qcd_pass_sum__98->SetBinContent(19,826.2998);
   qcd_pass_sum__98->SetBinContent(20,693.9114);
   qcd_pass_sum__98->SetBinContent(21,410.0155);
   qcd_pass_sum__98->SetBinContent(22,346.663);
   qcd_pass_sum__98->SetBinContent(23,285.8986);
   qcd_pass_sum__98->SetBinError(2,37.38924);
   qcd_pass_sum__98->SetBinError(3,28.72998);
   qcd_pass_sum__98->SetBinError(4,28.38843);
   qcd_pass_sum__98->SetBinError(5,29.90905);
   qcd_pass_sum__98->SetBinError(6,34.61122);
   qcd_pass_sum__98->SetBinError(7,36.53612);
   qcd_pass_sum__98->SetBinError(8,33.93185);
   qcd_pass_sum__98->SetBinError(9,31.35046);
   qcd_pass_sum__98->SetBinError(10,27.29865);
   qcd_pass_sum__98->SetBinError(11,24.2825);
   qcd_pass_sum__98->SetBinError(12,22.01367);
   qcd_pass_sum__98->SetBinError(13,20.0448);
   qcd_pass_sum__98->SetBinError(14,18.35137);
   qcd_pass_sum__98->SetBinError(15,15.98234);
   qcd_pass_sum__98->SetBinError(16,14.35397);
   qcd_pass_sum__98->SetBinError(17,12.63448);
   qcd_pass_sum__98->SetBinError(18,11.55192);
   qcd_pass_sum__98->SetBinError(19,6.652621);
   qcd_pass_sum__98->SetBinError(20,6.261944);
   qcd_pass_sum__98->SetBinError(21,4.758552);
   qcd_pass_sum__98->SetBinError(22,4.913629);
   qcd_pass_sum__98->SetBinError(23,4.859332);
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
   hstackMC_stack_25->SetMaximum(1216.912);
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
   tqq_pass_sum_stack_1->SetBinContent(2,24.50354);
   tqq_pass_sum_stack_1->SetBinContent(3,37.01418);
   tqq_pass_sum_stack_1->SetBinContent(4,46.26148);
   tqq_pass_sum_stack_1->SetBinContent(5,67.80377);
   tqq_pass_sum_stack_1->SetBinContent(6,106.166);
   tqq_pass_sum_stack_1->SetBinContent(7,122.7155);
   tqq_pass_sum_stack_1->SetBinContent(8,115.5939);
   tqq_pass_sum_stack_1->SetBinContent(9,100.9778);
   tqq_pass_sum_stack_1->SetBinContent(10,112.5141);
   tqq_pass_sum_stack_1->SetBinContent(11,115.5021);
   tqq_pass_sum_stack_1->SetBinContent(12,120.371);
   tqq_pass_sum_stack_1->SetBinContent(13,114.9234);
   tqq_pass_sum_stack_1->SetBinContent(14,93.50974);
   tqq_pass_sum_stack_1->SetBinContent(15,65.69525);
   tqq_pass_sum_stack_1->SetBinContent(16,47.44661);
   tqq_pass_sum_stack_1->SetBinContent(17,32.99923);
   tqq_pass_sum_stack_1->SetBinContent(18,26.35622);
   tqq_pass_sum_stack_1->SetBinContent(19,10.55901);
   tqq_pass_sum_stack_1->SetBinContent(20,12.10613);
   tqq_pass_sum_stack_1->SetBinContent(21,5.093444);
   tqq_pass_sum_stack_1->SetBinContent(22,0.9840886);
   tqq_pass_sum_stack_1->SetBinContent(23,0.6771716);
   tqq_pass_sum_stack_1->SetBinError(2,2.103888);
   tqq_pass_sum_stack_1->SetBinError(3,3.300557);
   tqq_pass_sum_stack_1->SetBinError(4,3.930546);
   tqq_pass_sum_stack_1->SetBinError(5,5.45643);
   tqq_pass_sum_stack_1->SetBinError(6,8.510428);
   tqq_pass_sum_stack_1->SetBinError(7,9.531331);
   tqq_pass_sum_stack_1->SetBinError(8,9.161331);
   tqq_pass_sum_stack_1->SetBinError(9,8.145376);
   tqq_pass_sum_stack_1->SetBinError(10,9.100509);
   tqq_pass_sum_stack_1->SetBinError(11,9.42501);
   tqq_pass_sum_stack_1->SetBinError(12,9.303843);
   tqq_pass_sum_stack_1->SetBinError(13,8.847687);
   tqq_pass_sum_stack_1->SetBinError(14,6.865985);
   tqq_pass_sum_stack_1->SetBinError(15,4.87786);
   tqq_pass_sum_stack_1->SetBinError(16,3.246989);
   tqq_pass_sum_stack_1->SetBinError(17,2.343541);
   tqq_pass_sum_stack_1->SetBinError(18,1.899562);
   tqq_pass_sum_stack_1->SetBinError(19,0.773461);
   tqq_pass_sum_stack_1->SetBinError(20,0.8954078);
   tqq_pass_sum_stack_1->SetBinError(21,0.4225009);
   tqq_pass_sum_stack_1->SetBinError(22,0.1128212);
   tqq_pass_sum_stack_1->SetBinError(23,0.07937486);
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
   wqq_pass_sum_stack_2->SetBinContent(1,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(2,5.516499);
   wqq_pass_sum_stack_2->SetBinContent(3,19.70201);
   wqq_pass_sum_stack_2->SetBinContent(4,78.68665);
   wqq_pass_sum_stack_2->SetBinContent(5,157.191);
   wqq_pass_sum_stack_2->SetBinContent(6,400.8827);
   wqq_pass_sum_stack_2->SetBinContent(7,493.4695);
   wqq_pass_sum_stack_2->SetBinContent(8,280.6439);
   wqq_pass_sum_stack_2->SetBinContent(9,120.8878);
   wqq_pass_sum_stack_2->SetBinContent(10,28.86089);
   wqq_pass_sum_stack_2->SetBinContent(11,11.56552);
   wqq_pass_sum_stack_2->SetBinContent(12,4.91499);
   wqq_pass_sum_stack_2->SetBinContent(13,2.308239);
   wqq_pass_sum_stack_2->SetBinContent(14,0.4363244);
   wqq_pass_sum_stack_2->SetBinContent(15,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(16,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(17,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(18,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(19,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(20,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(21,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(22,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinContent(23,1.123546e-05);
   wqq_pass_sum_stack_2->SetBinError(1,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(2,0.7246506);
   wqq_pass_sum_stack_2->SetBinError(3,3.05108);
   wqq_pass_sum_stack_2->SetBinError(4,8.019863);
   wqq_pass_sum_stack_2->SetBinError(5,10.20837);
   wqq_pass_sum_stack_2->SetBinError(6,26.28094);
   wqq_pass_sum_stack_2->SetBinError(7,34.16081);
   wqq_pass_sum_stack_2->SetBinError(8,24.64721);
   wqq_pass_sum_stack_2->SetBinError(9,14.8765);
   wqq_pass_sum_stack_2->SetBinError(10,3.113739);
   wqq_pass_sum_stack_2->SetBinError(11,0.9933728);
   wqq_pass_sum_stack_2->SetBinError(12,0.6797189);
   wqq_pass_sum_stack_2->SetBinError(13,0.68777);
   wqq_pass_sum_stack_2->SetBinError(14,0.265147);
   wqq_pass_sum_stack_2->SetBinError(15,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(16,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(17,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(18,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(19,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(20,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(21,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(22,7.388922e-07);
   wqq_pass_sum_stack_2->SetBinError(23,7.388922e-07);
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
   zqq_pass_sum_stack_3->SetBinContent(1,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(2,4.988212);
   zqq_pass_sum_stack_3->SetBinContent(3,10.70397);
   zqq_pass_sum_stack_3->SetBinContent(4,34.61566);
   zqq_pass_sum_stack_3->SetBinContent(5,95.19917);
   zqq_pass_sum_stack_3->SetBinContent(6,244.2014);
   zqq_pass_sum_stack_3->SetBinContent(7,515.2893);
   zqq_pass_sum_stack_3->SetBinContent(8,750.5552);
   zqq_pass_sum_stack_3->SetBinContent(9,549.9919);
   zqq_pass_sum_stack_3->SetBinContent(10,304.8982);
   zqq_pass_sum_stack_3->SetBinContent(11,96.7532);
   zqq_pass_sum_stack_3->SetBinContent(12,28.28434);
   zqq_pass_sum_stack_3->SetBinContent(13,7.157679);
   zqq_pass_sum_stack_3->SetBinContent(14,3.70837);
   zqq_pass_sum_stack_3->SetBinContent(15,1.714341);
   zqq_pass_sum_stack_3->SetBinContent(16,0.7808731);
   zqq_pass_sum_stack_3->SetBinContent(17,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(18,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(19,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(20,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(21,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(22,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinContent(23,1.854189e-05);
   zqq_pass_sum_stack_3->SetBinError(1,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(2,1.861862);
   zqq_pass_sum_stack_3->SetBinError(3,1.9312);
   zqq_pass_sum_stack_3->SetBinError(4,3.81379);
   zqq_pass_sum_stack_3->SetBinError(5,12.23015);
   zqq_pass_sum_stack_3->SetBinError(6,19.4773);
   zqq_pass_sum_stack_3->SetBinError(7,34.84235);
   zqq_pass_sum_stack_3->SetBinError(8,44.18405);
   zqq_pass_sum_stack_3->SetBinError(9,35.89902);
   zqq_pass_sum_stack_3->SetBinError(10,26.21014);
   zqq_pass_sum_stack_3->SetBinError(11,10.75252);
   zqq_pass_sum_stack_3->SetBinError(12,3.728603);
   zqq_pass_sum_stack_3->SetBinError(13,1.000563);
   zqq_pass_sum_stack_3->SetBinError(14,0.9791744);
   zqq_pass_sum_stack_3->SetBinError(15,0.6586158);
   zqq_pass_sum_stack_3->SetBinError(16,0.5316144);
   zqq_pass_sum_stack_3->SetBinError(17,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(18,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(19,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(20,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(21,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(22,1.086966e-06);
   zqq_pass_sum_stack_3->SetBinError(23,1.086966e-06);
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
   
   TH1F *hsigpass_allcats_2016_fit_s_stack_4 = new TH1F("hsigpass_allcats_2016_fit_s_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(1,4.693562e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(2,1.094224);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(3,2.065809);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(4,1.574688);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(5,2.900674);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(6,5.818984);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(7,7.984393);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(8,12.17031);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(9,26.05042);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(10,56.32739);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(11,97.81747);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(12,139.3892);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(13,143.3263);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(14,98.2869);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(15,54.54741);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(16,15.68073);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(17,3.173877);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(18,1.408198);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(19,0.4135888);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(20,0.2375482);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(21,0.1616243);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(22,0.05312914);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(23,0.06945736);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(1,6.928435e-07);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(2,0.3531673);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(3,0.4301005);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(4,0.354573);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(5,0.4776207);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(6,0.9253795);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(7,1.341831);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(8,1.993155);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(9,4.536069);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(10,9.455773);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(11,15.51851);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(12,21.03063);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(13,21.37522);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(14,15.16685);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(15,8.023178);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(16,2.632416);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(17,0.4519764);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(18,0.2687916);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(19,0.09757836);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(20,0.05096516);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(21,0.03906791);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(22,0.0141234);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(23,0.01642186);
   hsigpass_allcats_2016_fit_s_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_allcats_2016_fit_s_stack_4,"");
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
   
   TLegend *leg = new TLegend(0.6,0.55,0.75,0.85,NULL,"brNDC");
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
   entry=leg->AddEntry("hsigpass_allcats_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_allcats_2016_fit_s_copy__100 = new TH1F("htotpass_allcats_2016_fit_s_copy__100","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(1,2.977735e-05);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(2,5049.499);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(3,5316.938);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(4,5353.617);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(5,5379.208);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(6,5604.12);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(7,5758.444);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(8,5548.301);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(9,4893.114);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(10,4334.947);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(11,3869.361);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(12,3502.796);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(13,3156.814);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(14,2796.762);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(15,2432.802);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(16,2089.832);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(17,1763.126);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(18,1458.051);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(19,836.8588);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(20,706.0176);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(21,415.1089);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(22,347.6471);
   htotpass_allcats_2016_fit_s_copy__100->SetBinContent(23,286.5758);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(1,1.314327e-06);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(2,37.50165);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(3,29.1435);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(4,30.00359);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(5,34.32363);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(6,48.37785);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(7,61.69833);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(8,61.6037);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(9,50.58901);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(10,39.04743);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(11,28.19706);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(12,24.19768);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(13,21.94424);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(14,19.61998);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(15,16.72311);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(16,14.72624);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(17,12.84999);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(18,11.70706);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(19,6.697433);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(20,6.325638);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(21,4.777272);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(22,4.914924);
   htotpass_allcats_2016_fit_s_copy__100->SetBinError(23,4.85998);
   htotpass_allcats_2016_fit_s_copy__100->SetMaximum(8637.667);
   htotpass_allcats_2016_fit_s_copy__100->SetEntries(552);
   htotpass_allcats_2016_fit_s_copy__100->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s_copy__100->SetFillColor(ci);
   htotpass_allcats_2016_fit_s_copy__100->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s_copy__100->SetLineColor(ci);
   htotpass_allcats_2016_fit_s_copy__100->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s_copy__100->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s_copy__100->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s_copy__100->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__100->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s_copy__100->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__100->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s_copy__100->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s_copy__100->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s_copy__100->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__100->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__100->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s_copy__100->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s_copy__100->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__100->Draw("sameaxis");
   p12pass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_allcats_2016_fit_s
   TPad *p22pass_allcats_2016_fit_s = new TPad("p22pass_allcats_2016_fit_s", "p22pass_allcats_2016_fit_s",0,0,1,0.3);
   p22pass_allcats_2016_fit_s->Draw();
   p22pass_allcats_2016_fit_s->cd();
   p22pass_allcats_2016_fit_s->Range(13.7027,-9.512843,221.8108,6.402595);
   p22pass_allcats_2016_fit_s->SetFillColor(0);
   p22pass_allcats_2016_fit_s->SetBorderMode(0);
   p22pass_allcats_2016_fit_s->SetBorderSize(2);
   p22pass_allcats_2016_fit_s->SetTickx(1);
   p22pass_allcats_2016_fit_s->SetTicky(1);
   p22pass_allcats_2016_fit_s->SetLeftMargin(0.16);
   p22pass_allcats_2016_fit_s->SetTopMargin(0.05);
   p22pass_allcats_2016_fit_s->SetBottomMargin(0.3);
   p22pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   p22pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s__101 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s__101","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(1,1.180504e-06);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(2,0.770666);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(3,0.5467016);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(4,0.5008822);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(5,0.5444048);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(6,0.5132901);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(7,0.6079605);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(8,0.6128493);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(9,0.5741731);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(10,0.5833744);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(11,0.5349335);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(12,0.5979481);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(13,0.5522265);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(14,0.5039313);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(15,0.4477068);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(16,0.3904732);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(17,0.3963922);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(18,0.42222);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(19,0.3731771);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(20,0.3785679);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(21,0.3477515);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(22,0.3829241);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetBinError(23,0.3958293);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetMinimum(-4.738211);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetMaximum(5.606823);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetEntries(1104);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_s__101->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_s__101->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__101->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__101->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__101->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__101->Draw("");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s__102 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s__102","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(1,1.180504e-06);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(2,0.770666);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(3,0.5467016);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(4,0.5008822);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(5,0.5444048);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(6,0.5132901);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(7,0.6079605);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(8,0.6128493);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(9,0.5741731);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(10,0.5833744);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(11,0.5349335);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(12,0.5979481);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(13,0.5522265);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(14,0.5039313);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(15,0.4477068);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(16,0.3904732);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(17,0.3963922);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(18,0.42222);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(19,0.3731771);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(20,0.3785679);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(21,0.3477515);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(22,0.3829241);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetBinError(23,0.3958293);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMinimum(-4.738211);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMaximum(5.606823);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetEntries(1104);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_s__102->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_s__102->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__102->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__102->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__102->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_26 = new TH1F("hstack_stack_26","hstack",23,40,201);
   hstack_stack_26->SetMinimum(-18.86848);
   hstack_stack_26->SetMaximum(25.07606);
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
   
   
   TH1F *sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1 = new TH1F("sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(2,0.01527404);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(3,0.02835141);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(4,0.02184495);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(5,0.03953463);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(6,0.07731044);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(7,0.1046397);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(8,0.1640712);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(9,0.3713839);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(10,0.8453161);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(11,1.564697);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(12,2.299904);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(13,2.506741);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(14,1.82479);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(15,1.105164);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(16,0.3337772);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(17,0.07569589);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(18,0.03700592);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(19,0.01429263);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(20,0.008957029);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(21,0.008251329);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(22,0.002971524);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinContent(23,0.003915509);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(1,6.928435e-07);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(2,0.3531673);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(3,0.4301005);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(4,0.354573);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(5,0.4776207);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(6,0.9253795);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(7,1.341831);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(8,1.993155);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(9,4.536069);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(10,9.455773);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(11,15.51851);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(12,21.03063);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(13,21.37522);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(14,15.16685);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(15,8.023178);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(16,2.632416);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(17,0.4519764);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(18,0.2687916);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(19,0.09757836);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(20,0.05096516);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(21,0.03906791);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(22,0.0141234);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetBinError(23,0.01642186);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_allcats_2016_fit_s__103 = new TH1F("iOneWithErrorsLinepass_allcats_2016_fit_s__103","",23,40,201);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(1,1.180504e-06);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(2,0.770666);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(3,0.5467016);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(4,0.5008822);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(5,0.5444048);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(6,0.5132901);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(7,0.6079605);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(8,0.6128493);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(9,0.5741731);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(10,0.5833744);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(11,0.5349335);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(12,0.5979481);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(13,0.5522265);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(14,0.5039313);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(15,0.4477068);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(16,0.3904732);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(17,0.3963922);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(18,0.42222);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(19,0.3731771);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(20,0.3785679);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(21,0.3477515);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(22,0.3829241);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetBinError(23,0.3958293);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetEntries(1104);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetFillColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetLineColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetMarkerColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->SetMarkerSize(0);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__103->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fx3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fy3026[23] = {
   0,
   1.143261,
   -0.08150707,
   -2.158808,
   0.07656518,
   0.8108989,
   0.8341885,
   -0.5972305,
   0.3989064,
   1.55332,
   0.6272486,
   2.737882,
   1.919496,
   1.890424,
   0.1005291,
   2.414594,
   -0.07455347,
   -0.2115659,
   0.06849435,
   -0.03836896,
   -1.537138,
   -1.490378,
   1.471178};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_felx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fely3026[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fehx3026[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fehy3026[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_allcats_2016_fit_s_fx3026,Graph_from_iRatiopass_allcats_2016_fit_s_fy3026,Graph_from_iRatiopass_allcats_2016_fit_s_felx3026,Graph_from_iRatiopass_allcats_2016_fit_s_fehx3026,Graph_from_iRatiopass_allcats_2016_fit_s_fely3026,Graph_from_iRatiopass_allcats_2016_fit_s_fehy3026);
   grae->SetName("Graph_from_iRatiopass_allcats_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026 = new TH1F("Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetMinimum(-3.848476);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetMaximum(4.427551);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetDirectory(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetStats(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_allcats_2016_fit_s3026);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s_copy__104 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s_copy__104","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(1,1.180504e-06);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(2,0.770666);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(3,0.5467016);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(4,0.5008822);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(5,0.5444048);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(6,0.5132901);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(7,0.6079605);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(8,0.6128493);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(9,0.5741731);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(10,0.5833744);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(11,0.5349335);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(12,0.5979481);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(13,0.5522265);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(14,0.5039313);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(15,0.4477068);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(16,0.3904732);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(17,0.3963922);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(18,0.42222);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(19,0.3731771);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(20,0.3785679);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(21,0.3477515);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(22,0.3829241);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetBinError(23,0.3958293);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMinimum(-4.738211);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMaximum(5.606823);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetEntries(1104);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__104->Draw("sameaxis");
   p22pass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
   cpass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
   cpass_allcats_2016_fit_s->SetSelected(cpass_allcats_2016_fit_s);
}
