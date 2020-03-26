void mlfit_pass_cat1_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_b/cpass_cat1_2016_fit_b
//=========  (Wed Oct  9 22:42:59 2019) by ROOT version 6.12/07
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
   p12pass_cat1_2016_fit_b->Range(21.27027,-90.75114,182.0811,4446.806);
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
   htotpass_cat1_2016_fit_b__9->SetBinContent(1,9.694504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(2,2345.555);
   htotpass_cat1_2016_fit_b__9->SetBinContent(3,2502.959);
   htotpass_cat1_2016_fit_b__9->SetBinContent(4,2512.437);
   htotpass_cat1_2016_fit_b__9->SetBinContent(5,2520.129);
   htotpass_cat1_2016_fit_b__9->SetBinContent(6,2605.22);
   htotpass_cat1_2016_fit_b__9->SetBinContent(7,2662.033);
   htotpass_cat1_2016_fit_b__9->SetBinContent(8,2581.885);
   htotpass_cat1_2016_fit_b__9->SetBinContent(9,2273.253);
   htotpass_cat1_2016_fit_b__9->SetBinContent(10,2031.039);
   htotpass_cat1_2016_fit_b__9->SetBinContent(11,1831.894);
   htotpass_cat1_2016_fit_b__9->SetBinContent(12,1623.877);
   htotpass_cat1_2016_fit_b__9->SetBinContent(13,1404.119);
   htotpass_cat1_2016_fit_b__9->SetBinContent(14,1196.197);
   htotpass_cat1_2016_fit_b__9->SetBinContent(15,986.1286);
   htotpass_cat1_2016_fit_b__9->SetBinContent(16,794.3026);
   htotpass_cat1_2016_fit_b__9->SetBinContent(17,629.7421);
   htotpass_cat1_2016_fit_b__9->SetBinContent(18,477.5921);
   htotpass_cat1_2016_fit_b__9->SetBinContent(19,9.694504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(20,9.694504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(21,9.694504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(22,9.694504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(23,9.694504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(1,9.916268e-07);
   htotpass_cat1_2016_fit_b__9->SetBinError(2,30.45419);
   htotpass_cat1_2016_fit_b__9->SetBinError(3,24.75262);
   htotpass_cat1_2016_fit_b__9->SetBinError(4,25.51165);
   htotpass_cat1_2016_fit_b__9->SetBinError(5,28.51339);
   htotpass_cat1_2016_fit_b__9->SetBinError(6,36.31364);
   htotpass_cat1_2016_fit_b__9->SetBinError(7,47.28934);
   htotpass_cat1_2016_fit_b__9->SetBinError(8,47.61423);
   htotpass_cat1_2016_fit_b__9->SetBinError(9,40.22348);
   htotpass_cat1_2016_fit_b__9->SetBinError(10,29.17656);
   htotpass_cat1_2016_fit_b__9->SetBinError(11,22.90414);
   htotpass_cat1_2016_fit_b__9->SetBinError(12,19.58726);
   htotpass_cat1_2016_fit_b__9->SetBinError(13,16.96112);
   htotpass_cat1_2016_fit_b__9->SetBinError(14,14.57587);
   htotpass_cat1_2016_fit_b__9->SetBinError(15,12.85445);
   htotpass_cat1_2016_fit_b__9->SetBinError(16,11.7244);
   htotpass_cat1_2016_fit_b__9->SetBinError(17,11.08173);
   htotpass_cat1_2016_fit_b__9->SetBinError(18,10.22704);
   htotpass_cat1_2016_fit_b__9->SetBinError(19,9.916268e-07);
   htotpass_cat1_2016_fit_b__9->SetBinError(20,9.916268e-07);
   htotpass_cat1_2016_fit_b__9->SetBinError(21,9.916268e-07);
   htotpass_cat1_2016_fit_b__9->SetBinError(22,9.916268e-07);
   htotpass_cat1_2016_fit_b__9->SetBinError(23,9.916268e-07);
   htotpass_cat1_2016_fit_b__9->SetMinimum(0);
   htotpass_cat1_2016_fit_b__9->SetMaximum(3993.05);
   htotpass_cat1_2016_fit_b__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__9->SetFillColor(ci);
   htotpass_cat1_2016_fit_b__9->SetFillStyle(0);

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
   htotpass_cat1_2016_fit_b__9->Draw("hist");
   
   TH1F *qcd__10 = new TH1F("qcd__10","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__10->SetBinContent(2,2329.497);
   qcd__10->SetBinContent(3,2475.621);
   qcd__10->SetBinContent(4,2462.391);
   qcd__10->SetBinContent(5,2423.145);
   qcd__10->SetBinContent(6,2360.669);
   qcd__10->SetBinContent(7,2258.214);
   qcd__10->SetBinContent(8,2149.547);
   qcd__10->SetBinContent(9,2009.742);
   qcd__10->SetBinContent(10,1872.824);
   qcd__10->SetBinContent(11,1732.688);
   qcd__10->SetBinContent(12,1556.775);
   qcd__10->SetBinContent(13,1350.827);
   qcd__10->SetBinContent(14,1158.664);
   qcd__10->SetBinContent(15,959.1185);
   qcd__10->SetBinContent(16,779.6436);
   qcd__10->SetBinContent(17,617.4277);
   qcd__10->SetBinContent(18,468.5757);
   qcd__10->SetBinError(2,30.37051);
   qcd__10->SetBinError(3,24.48447);
   qcd__10->SetBinError(4,24.6676);
   qcd__10->SetBinError(5,25.69737);
   qcd__10->SetBinError(6,28.80517);
   qcd__10->SetBinError(7,29.06416);
   qcd__10->SetBinError(8,26.70755);
   qcd__10->SetBinError(9,25.52987);
   qcd__10->SetBinError(10,21.32587);
   qcd__10->SetBinError(11,19.35773);
   qcd__10->SetBinError(12,17.72417);
   qcd__10->SetBinError(13,15.40967);
   qcd__10->SetBinError(14,13.67649);
   qcd__10->SetBinError(15,12.32421);
   qcd__10->SetBinError(16,11.55547);
   qcd__10->SetBinError(17,10.9558);
   qcd__10->SetBinError(18,10.15404);
   qcd__10->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__10->SetLineColor(ci);
   qcd__10->SetLineStyle(2);
   qcd__10->SetLineWidth(2);
   qcd__10->GetXaxis()->SetTitle("x");
   qcd__10->GetXaxis()->SetLabelFont(42);
   qcd__10->GetXaxis()->SetLabelSize(0.035);
   qcd__10->GetXaxis()->SetTitleSize(0.035);
   qcd__10->GetXaxis()->SetTitleFont(42);
   qcd__10->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__10->GetYaxis()->SetLabelFont(42);
   qcd__10->GetYaxis()->SetLabelSize(0.035);
   qcd__10->GetYaxis()->SetTitleSize(0.035);
   qcd__10->GetYaxis()->SetTitleOffset(0);
   qcd__10->GetYaxis()->SetTitleFont(42);
   qcd__10->GetZaxis()->SetLabelFont(42);
   qcd__10->GetZaxis()->SetLabelSize(0.035);
   qcd__10->GetZaxis()->SetTitleSize(0.035);
   qcd__10->GetZaxis()->SetTitleFont(42);
   qcd__10->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016_cat1__11 = new TH1D("bkgUncBand_pass_2016_cat1__11","bkgUncBand_pass_2016_cat1",23,40,201);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(1,1.032635e-05);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(2,2349.117);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(3,2499.973);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(4,2506.278);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(5,2511.736);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(6,2598.783);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(7,2665.937);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(8,2588.85);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(9,2266.84);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(10,2021.094);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(11,1817.691);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(12,1609.23);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(13,1389.691);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(14,1184.832);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(15,978.095);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(16,788.8516);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(17,626.0247);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(18,475.3593);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(19,1.032635e-05);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(20,1.032635e-05);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(21,1.032635e-05);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(22,1.032635e-05);
   bkgUncBand_pass_2016_cat1__11->SetBinContent(23,1.032635e-05);
   bkgUncBand_pass_2016_cat1__11->SetBinError(1,1.094831e-06);
   bkgUncBand_pass_2016_cat1__11->SetBinError(2,31.05554);
   bkgUncBand_pass_2016_cat1__11->SetBinError(3,20.9146);
   bkgUncBand_pass_2016_cat1__11->SetBinError(4,22.38454);
   bkgUncBand_pass_2016_cat1__11->SetBinError(5,21.82079);
   bkgUncBand_pass_2016_cat1__11->SetBinError(6,24.46496);
   bkgUncBand_pass_2016_cat1__11->SetBinError(7,25.28149);
   bkgUncBand_pass_2016_cat1__11->SetBinError(8,27.38476);
   bkgUncBand_pass_2016_cat1__11->SetBinError(9,20.2004);
   bkgUncBand_pass_2016_cat1__11->SetBinError(10,15.84104);
   bkgUncBand_pass_2016_cat1__11->SetBinError(11,17.25251);
   bkgUncBand_pass_2016_cat1__11->SetBinError(12,17.03546);
   bkgUncBand_pass_2016_cat1__11->SetBinError(13,16.84785);
   bkgUncBand_pass_2016_cat1__11->SetBinError(14,14.73433);
   bkgUncBand_pass_2016_cat1__11->SetBinError(15,11.86557);
   bkgUncBand_pass_2016_cat1__11->SetBinError(16,12.10225);
   bkgUncBand_pass_2016_cat1__11->SetBinError(17,10.93571);
   bkgUncBand_pass_2016_cat1__11->SetBinError(18,10.79155);
   bkgUncBand_pass_2016_cat1__11->SetBinError(19,1.094831e-06);
   bkgUncBand_pass_2016_cat1__11->SetBinError(20,1.094831e-06);
   bkgUncBand_pass_2016_cat1__11->SetBinError(21,1.094831e-06);
   bkgUncBand_pass_2016_cat1__11->SetBinError(22,1.094831e-06);
   bkgUncBand_pass_2016_cat1__11->SetBinError(23,1.094831e-06);
   bkgUncBand_pass_2016_cat1__11->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016_cat1__11->SetFillColor(ci);
   bkgUncBand_pass_2016_cat1__11->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016_cat1__11->SetLineColor(ci);
   bkgUncBand_pass_2016_cat1__11->SetLineStyle(0);
   bkgUncBand_pass_2016_cat1__11->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016_cat1__11->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat1__11->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat1__11->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat1__11->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat1__11->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016_cat1__11->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat1__11->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat1__11->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat1__11->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016_cat1__11->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat1__11->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat1__11->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat1__11->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat1__11->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat1__11->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis3[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_3 = new TH1F("hstackMC_stack_3","hstackMC",23, xAxis3);
   hstackMC_stack_3->SetMinimum(0);
   hstackMC_stack_3->SetMaximum(453.9549);
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
   tqq_stack_1->SetBinContent(2,13.12922);
   tqq_stack_1->SetBinContent(3,21.2309);
   tqq_stack_1->SetBinContent(4,24.77379);
   tqq_stack_1->SetBinContent(5,32.96648);
   tqq_stack_1->SetBinContent(6,51.6268);
   tqq_stack_1->SetBinContent(7,56.25842);
   tqq_stack_1->SetBinContent(8,55.42851);
   tqq_stack_1->SetBinContent(9,50.27108);
   tqq_stack_1->SetBinContent(10,55.97895);
   tqq_stack_1->SetBinContent(11,57.21357);
   tqq_stack_1->SetBinContent(12,56.75392);
   tqq_stack_1->SetBinContent(13,52.22561);
   tqq_stack_1->SetBinContent(14,37.20677);
   tqq_stack_1->SetBinContent(15,27.01003);
   tqq_stack_1->SetBinContent(16,14.65902);
   tqq_stack_1->SetBinContent(17,12.31442);
   tqq_stack_1->SetBinContent(18,9.016356);
   tqq_stack_1->SetBinError(2,1.776111);
   tqq_stack_1->SetBinError(3,2.872101);
   tqq_stack_1->SetBinError(4,3.351379);
   tqq_stack_1->SetBinError(5,4.459681);
   tqq_stack_1->SetBinError(6,6.984035);
   tqq_stack_1->SetBinError(7,7.610598);
   tqq_stack_1->SetBinError(8,7.498327);
   tqq_stack_1->SetBinError(9,6.800636);
   tqq_stack_1->SetBinError(10,7.572791);
   tqq_stack_1->SetBinError(11,7.739808);
   tqq_stack_1->SetBinError(12,7.67763);
   tqq_stack_1->SetBinError(13,7.065042);
   tqq_stack_1->SetBinError(14,5.033305);
   tqq_stack_1->SetBinError(15,3.653897);
   tqq_stack_1->SetBinError(16,1.983061);
   tqq_stack_1->SetBinError(17,1.665886);
   tqq_stack_1->SetBinError(18,1.219726);
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
   wqq_stack_2->SetBinContent(1,3.484e-06);
   wqq_stack_2->SetBinContent(2,1.403675);
   wqq_stack_2->SetBinContent(3,2.700079);
   wqq_stack_2->SetBinContent(4,16.2113);
   wqq_stack_2->SetBinContent(5,38.89125);
   wqq_stack_2->SetBinContent(6,129.2113);
   wqq_stack_2->SetBinContent(7,151.3538);
   wqq_stack_2->SetBinContent(8,102.9135);
   wqq_stack_2->SetBinContent(9,40.08026);
   wqq_stack_2->SetBinContent(10,6.701564);
   wqq_stack_2->SetBinContent(11,4.100412);
   wqq_stack_2->SetBinContent(12,2.754588);
   wqq_stack_2->SetBinContent(13,1.06607);
   wqq_stack_2->SetBinContent(14,0.32639);
   wqq_stack_2->SetBinContent(15,3.484e-06);
   wqq_stack_2->SetBinContent(16,3.484e-06);
   wqq_stack_2->SetBinContent(17,3.484e-06);
   wqq_stack_2->SetBinContent(18,3.484e-06);
   wqq_stack_2->SetBinContent(19,3.484e-06);
   wqq_stack_2->SetBinContent(20,3.484e-06);
   wqq_stack_2->SetBinContent(21,3.484e-06);
   wqq_stack_2->SetBinContent(22,3.484e-06);
   wqq_stack_2->SetBinContent(23,3.484e-06);
   wqq_stack_2->SetBinError(1,5.075592e-07);
   wqq_stack_2->SetBinError(2,0.3435911);
   wqq_stack_2->SetBinError(3,1.861359);
   wqq_stack_2->SetBinError(4,5.155468);
   wqq_stack_2->SetBinError(5,5.415954);
   wqq_stack_2->SetBinError(6,17.84934);
   wqq_stack_2->SetBinError(7,22.93585);
   wqq_stack_2->SetBinError(8,18.48612);
   wqq_stack_2->SetBinError(9,13.16283);
   wqq_stack_2->SetBinError(10,1.491112);
   wqq_stack_2->SetBinError(11,0.6289794);
   wqq_stack_2->SetBinError(12,0.5441257);
   wqq_stack_2->SetBinError(13,0.5541985);
   wqq_stack_2->SetBinError(14,0.2750547);
   wqq_stack_2->SetBinError(15,5.075592e-07);
   wqq_stack_2->SetBinError(16,5.075592e-07);
   wqq_stack_2->SetBinError(17,5.075592e-07);
   wqq_stack_2->SetBinError(18,5.075592e-07);
   wqq_stack_2->SetBinError(19,5.075592e-07);
   wqq_stack_2->SetBinError(20,5.075592e-07);
   wqq_stack_2->SetBinError(21,5.075592e-07);
   wqq_stack_2->SetBinError(22,5.075592e-07);
   wqq_stack_2->SetBinError(23,5.075592e-07);
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
   zqq_stack_3->SetBinContent(1,6.210505e-06);
   zqq_stack_3->SetBinContent(2,1.525321);
   zqq_stack_3->SetBinContent(3,3.40693);
   zqq_stack_3->SetBinContent(4,9.060368);
   zqq_stack_3->SetBinContent(5,25.12556);
   zqq_stack_3->SetBinContent(6,63.71299);
   zqq_stack_3->SetBinContent(7,196.2075);
   zqq_stack_3->SetBinContent(8,273.9959);
   zqq_stack_3->SetBinContent(9,173.1598);
   zqq_stack_3->SetBinContent(10,95.5352);
   zqq_stack_3->SetBinContent(11,37.8918);
   zqq_stack_3->SetBinContent(12,7.593603);
   zqq_stack_3->SetBinContent(13,6.210505e-06);
   zqq_stack_3->SetBinContent(14,6.210505e-06);
   zqq_stack_3->SetBinContent(15,6.210505e-06);
   zqq_stack_3->SetBinContent(16,6.210505e-06);
   zqq_stack_3->SetBinContent(17,6.210505e-06);
   zqq_stack_3->SetBinContent(18,6.210505e-06);
   zqq_stack_3->SetBinContent(19,6.210505e-06);
   zqq_stack_3->SetBinContent(20,6.210505e-06);
   zqq_stack_3->SetBinContent(21,6.210505e-06);
   zqq_stack_3->SetBinContent(22,6.210505e-06);
   zqq_stack_3->SetBinContent(23,6.210505e-06);
   zqq_stack_3->SetBinError(1,8.518846e-07);
   zqq_stack_3->SetBinError(2,1.347898);
   zqq_stack_3->SetBinError(3,1.220238);
   zqq_stack_3->SetBinError(4,2.131529);
   zqq_stack_3->SetBinError(5,10.17043);
   zqq_stack_3->SetBinError(6,11.02576);
   zqq_stack_3->SetBinError(7,28.41798);
   zqq_stack_3->SetBinError(8,33.99794);
   zqq_stack_3->SetBinError(9,27.32481);
   zqq_stack_3->SetBinError(10,18.35507);
   zqq_stack_3->SetBinError(11,9.464536);
   zqq_stack_3->SetBinError(12,3.20509);
   zqq_stack_3->SetBinError(13,8.518846e-07);
   zqq_stack_3->SetBinError(14,8.518846e-07);
   zqq_stack_3->SetBinError(15,8.518846e-07);
   zqq_stack_3->SetBinError(16,8.518846e-07);
   zqq_stack_3->SetBinError(17,8.518846e-07);
   zqq_stack_3->SetBinError(18,8.518846e-07);
   zqq_stack_3->SetBinError(19,8.518846e-07);
   zqq_stack_3->SetBinError(20,8.518846e-07);
   zqq_stack_3->SetBinError(21,8.518846e-07);
   zqq_stack_3->SetBinError(22,8.518846e-07);
   zqq_stack_3->SetBinError(23,8.518846e-07);
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
   2385,
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
   49.84437,
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
   48.83409,
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
   entry=leg->AddEntry("bkgUncBand_pass_2016_cat1","Total background","lf");

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
   entry=leg->AddEntry("data_copy","Data","pe");
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
   
   TH1F *htotpass_cat1_2016_fit_b_copy__12 = new TH1F("htotpass_cat1_2016_fit_b_copy__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(1,9.694504e-06);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(2,2345.555);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(3,2502.959);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(4,2512.437);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(5,2520.129);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(6,2605.22);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(7,2662.033);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(8,2581.885);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(9,2273.253);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(10,2031.039);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(11,1831.894);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(12,1623.877);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(13,1404.119);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(14,1196.197);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(15,986.1286);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(16,794.3026);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(17,629.7421);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(18,477.5921);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(19,9.694504e-06);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(20,9.694504e-06);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(21,9.694504e-06);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(22,9.694504e-06);
   htotpass_cat1_2016_fit_b_copy__12->SetBinContent(23,9.694504e-06);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(1,9.916268e-07);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(2,30.45419);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(3,24.75262);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(4,25.51165);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(5,28.51339);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(6,36.31364);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(7,47.28934);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(8,47.61423);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(9,40.22348);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(10,29.17656);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(11,22.90414);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(12,19.58726);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(13,16.96112);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(14,14.57587);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(15,12.85445);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(16,11.7244);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(17,11.08173);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(18,10.22704);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(19,9.916268e-07);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(20,9.916268e-07);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(21,9.916268e-07);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(22,9.916268e-07);
   htotpass_cat1_2016_fit_b_copy__12->SetBinError(23,9.916268e-07);
   htotpass_cat1_2016_fit_b_copy__12->SetMaximum(3993.05);
   htotpass_cat1_2016_fit_b_copy__12->SetEntries(92);
   htotpass_cat1_2016_fit_b_copy__12->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b_copy__12->SetFillColor(ci);
   htotpass_cat1_2016_fit_b_copy__12->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b_copy__12->SetLineColor(ci);
   htotpass_cat1_2016_fit_b_copy__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_b_copy__12->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_b_copy__12->SetMarkerSize(0);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_b_copy__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_b_copy__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_b_copy__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_b_copy__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_b_copy__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b_copy__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b_copy__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__12->Draw("sameaxis");
   p12pass_cat1_2016_fit_b->Modified();
   cpass_cat1_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_fit_b
   TPad *p22pass_cat1_2016_fit_b = new TPad("p22pass_cat1_2016_fit_b", "p22pass_cat1_2016_fit_b",0,0,1,0.3);
   p22pass_cat1_2016_fit_b->Draw();
   p22pass_cat1_2016_fit_b->cd();
   p22pass_cat1_2016_fit_b->Range(21.27027,-7.532451,182.0811,4.3928);
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
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_b__13 = new TH1F("iOneWithErrorspass_cat1_2016_fit_b__13","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(1,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(2,0.629429);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(3,0.4131474);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(4,0.444291);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(5,0.4285225);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(6,0.470917);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(7,0.4823228);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(8,0.5334437);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(9,0.4125119);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(10,0.3456106);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(11,0.4001284);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(12,0.4127751);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(13,0.4408995);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(14,0.4243386);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(15,0.3772244);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(16,0.411643);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(17,0.4410648);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(18,0.47105);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(19,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(20,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(21,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(22,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetBinError(23,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetMinimum(-3.954875);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetMaximum(3.796537);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_b__13->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_b__13->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b__13->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__13->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_b__13->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_b__13->Draw("");
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_b__14 = new TH1F("iOneWithErrorspass_cat1_2016_fit_b__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(1,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(2,0.629429);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(3,0.4131474);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(4,0.444291);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(5,0.4285225);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(6,0.470917);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(7,0.4823228);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(8,0.5334437);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(9,0.4125119);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(10,0.3456106);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(11,0.4001284);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(12,0.4127751);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(13,0.4408995);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(14,0.4243386);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(15,0.3772244);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(16,0.411643);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(17,0.4410648);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(18,0.47105);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(19,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(20,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(21,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(22,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetBinError(23,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMinimum(-3.954875);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMaximum(3.796537);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_b__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat1_2016_fit_b__14->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(0);
   hstack_stack_4->SetMaximum(0);
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
   
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_fit_b__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_fit_b__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(1,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(2,0.629429);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(3,0.4131474);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(4,0.444291);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(5,0.4285225);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(6,0.470917);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(7,0.4823228);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(8,0.5334437);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(9,0.4125119);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(10,0.3456106);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(11,0.4001284);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(12,0.4127751);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(13,0.4408995);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(14,0.4243386);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(15,0.3772244);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(16,0.411643);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(17,0.4410648);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(18,0.47105);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(19,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(20,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(21,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(22,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetBinError(23,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   0.7913647,
   0.1768228,
   -0.48993,
   0.4252975,
   0.7964776,
   0.6229395,
   0.04079784,
   1.531025,
   0.5170577,
   -0.3730071,
   0.91254,
   0.4618225,
   -0.736427,
   -0.908931,
   1.36073,
   -1.636584,
   1.042149,
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
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMinimum(-3.153344);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMaximum(3.047786);
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
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(1,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(2,0.629429);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(3,0.4131474);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(4,0.444291);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(5,0.4285225);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(6,0.470917);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(7,0.4823228);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(8,0.5334437);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(9,0.4125119);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(10,0.3456106);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(11,0.4001284);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(12,0.4127751);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(13,0.4408995);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(14,0.4243386);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(15,0.3772244);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(16,0.411643);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(17,0.4410648);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(18,0.47105);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(19,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(20,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(21,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(22,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetBinError(23,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMinimum(-3.954875);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMaximum(3.796537);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
