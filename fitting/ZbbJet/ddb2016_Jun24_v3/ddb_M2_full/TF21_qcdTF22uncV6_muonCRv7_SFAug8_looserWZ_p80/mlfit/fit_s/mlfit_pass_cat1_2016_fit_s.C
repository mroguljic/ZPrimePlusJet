void mlfit_pass_cat1_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_s/cpass_cat1_2016_fit_s
//=========  (Wed Oct  9 22:43:08 2019) by ROOT version 6.12/07
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
   p12pass_cat1_2016_fit_s->Range(21.27027,-90.73463,182.0811,4445.997);
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
   htotpass_cat1_2016_fit_s__9->SetBinContent(1,1.10485e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(2,2365.515);
   htotpass_cat1_2016_fit_s__9->SetBinContent(3,2506.091);
   htotpass_cat1_2016_fit_s__9->SetBinContent(4,2503.061);
   htotpass_cat1_2016_fit_s__9->SetBinContent(5,2504.461);
   htotpass_cat1_2016_fit_s__9->SetBinContent(6,2588.882);
   htotpass_cat1_2016_fit_s__9->SetBinContent(7,2661.549);
   htotpass_cat1_2016_fit_s__9->SetBinContent(8,2586.819);
   htotpass_cat1_2016_fit_s__9->SetBinContent(9,2258.023);
   htotpass_cat1_2016_fit_s__9->SetBinContent(10,2007.464);
   htotpass_cat1_2016_fit_s__9->SetBinContent(11,1800.783);
   htotpass_cat1_2016_fit_s__9->SetBinContent(12,1591.246);
   htotpass_cat1_2016_fit_s__9->SetBinContent(13,1374.957);
   htotpass_cat1_2016_fit_s__9->SetBinContent(14,1173.07);
   htotpass_cat1_2016_fit_s__9->SetBinContent(15,968.7893);
   htotpass_cat1_2016_fit_s__9->SetBinContent(16,782.3111);
   htotpass_cat1_2016_fit_s__9->SetBinContent(17,621.5201);
   htotpass_cat1_2016_fit_s__9->SetBinContent(18,472.5898);
   htotpass_cat1_2016_fit_s__9->SetBinContent(19,1.10485e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(20,1.10485e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(21,1.10485e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(22,1.10485e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(23,1.10485e-05);
   htotpass_cat1_2016_fit_s__9->SetBinError(1,9.877779e-07);
   htotpass_cat1_2016_fit_s__9->SetBinError(2,30.26708);
   htotpass_cat1_2016_fit_s__9->SetBinError(3,23.48004);
   htotpass_cat1_2016_fit_s__9->SetBinError(4,23.6685);
   htotpass_cat1_2016_fit_s__9->SetBinError(5,26.73395);
   htotpass_cat1_2016_fit_s__9->SetBinError(6,35.48234);
   htotpass_cat1_2016_fit_s__9->SetBinError(7,47.07892);
   htotpass_cat1_2016_fit_s__9->SetBinError(8,48.71871);
   htotpass_cat1_2016_fit_s__9->SetBinError(9,40.73871);
   htotpass_cat1_2016_fit_s__9->SetBinError(10,29.14067);
   htotpass_cat1_2016_fit_s__9->SetBinError(11,22.70659);
   htotpass_cat1_2016_fit_s__9->SetBinError(12,19.52043);
   htotpass_cat1_2016_fit_s__9->SetBinError(13,17.64461);
   htotpass_cat1_2016_fit_s__9->SetBinError(14,15.55357);
   htotpass_cat1_2016_fit_s__9->SetBinError(15,13.05696);
   htotpass_cat1_2016_fit_s__9->SetBinError(16,11.5182);
   htotpass_cat1_2016_fit_s__9->SetBinError(17,9.825414);
   htotpass_cat1_2016_fit_s__9->SetBinError(18,8.985563);
   htotpass_cat1_2016_fit_s__9->SetBinError(19,9.877779e-07);
   htotpass_cat1_2016_fit_s__9->SetBinError(20,9.877779e-07);
   htotpass_cat1_2016_fit_s__9->SetBinError(21,9.877779e-07);
   htotpass_cat1_2016_fit_s__9->SetBinError(22,9.877779e-07);
   htotpass_cat1_2016_fit_s__9->SetBinError(23,9.877779e-07);
   htotpass_cat1_2016_fit_s__9->SetMinimum(0);
   htotpass_cat1_2016_fit_s__9->SetMaximum(3992.324);
   htotpass_cat1_2016_fit_s__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__9->SetFillColor(ci);
   htotpass_cat1_2016_fit_s__9->SetFillStyle(0);

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
   htotpass_cat1_2016_fit_s__9->Draw("hist");
   
   TH1F *qcd__10 = new TH1F("qcd__10","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__10->SetBinContent(2,2349.875);
   qcd__10->SetBinContent(3,2478.947);
   qcd__10->SetBinContent(4,2450.447);
   qcd__10->SetBinContent(5,2399.911);
   qcd__10->SetBinContent(6,2325.735);
   qcd__10->SetBinContent(7,2217.104);
   qcd__10->SetBinContent(8,2108.415);
   qcd__10->SetBinContent(9,1969.353);
   qcd__10->SetBinContent(10,1836.541);
   qcd__10->SetBinContent(11,1699.013);
   qcd__10->SetBinContent(12,1527.025);
   qcd__10->SetBinContent(13,1325.909);
   qcd__10->SetBinContent(14,1138.613);
   qcd__10->SetBinContent(15,944.0922);
   qcd__10->SetBinContent(16,768.9073);
   qcd__10->SetBinContent(17,610.2602);
   qcd__10->SetBinContent(18,464.3455);
   qcd__10->SetBinError(2,30.18077);
   qcd__10->SetBinError(3,23.20229);
   qcd__10->SetBinError(4,22.80282);
   qcd__10->SetBinError(5,23.69686);
   qcd__10->SetBinError(6,27.70436);
   qcd__10->SetBinError(7,29.35393);
   qcd__10->SetBinError(8,27.29111);
   qcd__10->SetBinError(9,25.61865);
   qcd__10->SetBinError(10,22.0384);
   qcd__10->SetBinError(11,19.34421);
   qcd__10->SetBinError(12,17.64674);
   qcd__10->SetBinError(13,16.14266);
   qcd__10->SetBinError(14,14.70472);
   qcd__10->SetBinError(15,12.52939);
   qcd__10->SetBinError(16,11.34429);
   qcd__10->SetBinError(17,9.681574);
   qcd__10->SetBinError(18,8.90147);
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
   hstackMC_stack_3->SetMaximum(507.001);
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
   tqq_stack_1->SetBinContent(2,12.00493);
   tqq_stack_1->SetBinContent(3,19.41284);
   tqq_stack_1->SetBinContent(4,22.65234);
   tqq_stack_1->SetBinContent(5,30.14347);
   tqq_stack_1->SetBinContent(6,47.20586);
   tqq_stack_1->SetBinContent(7,51.44086);
   tqq_stack_1->SetBinContent(8,50.68202);
   tqq_stack_1->SetBinContent(9,45.96623);
   tqq_stack_1->SetBinContent(10,51.18532);
   tqq_stack_1->SetBinContent(11,52.31421);
   tqq_stack_1->SetBinContent(12,51.89393);
   tqq_stack_1->SetBinContent(13,47.75339);
   tqq_stack_1->SetBinContent(14,34.02066);
   tqq_stack_1->SetBinContent(15,24.69709);
   tqq_stack_1->SetBinContent(16,13.40372);
   tqq_stack_1->SetBinContent(17,11.2599);
   tqq_stack_1->SetBinContent(18,8.244261);
   tqq_stack_1->SetBinError(2,1.785906);
   tqq_stack_1->SetBinError(3,2.88794);
   tqq_stack_1->SetBinError(4,3.369862);
   tqq_stack_1->SetBinError(5,4.484275);
   tqq_stack_1->SetBinError(6,7.022551);
   tqq_stack_1->SetBinError(7,7.652568);
   tqq_stack_1->SetBinError(8,7.53968);
   tqq_stack_1->SetBinError(9,6.838139);
   tqq_stack_1->SetBinError(10,7.614552);
   tqq_stack_1->SetBinError(11,7.782493);
   tqq_stack_1->SetBinError(12,7.71997);
   tqq_stack_1->SetBinError(13,7.104004);
   tqq_stack_1->SetBinError(14,5.061062);
   tqq_stack_1->SetBinError(15,3.674047);
   tqq_stack_1->SetBinError(16,1.993997);
   tqq_stack_1->SetBinError(17,1.675073);
   tqq_stack_1->SetBinError(18,1.226452);
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
   wqq_stack_2->SetBinContent(1,3.806569e-06);
   wqq_stack_2->SetBinContent(2,1.458449);
   wqq_stack_2->SetBinContent(3,3.464978);
   wqq_stack_2->SetBinContent(4,19.04377);
   wqq_stack_2->SetBinContent(5,42.51382);
   wqq_stack_2->SetBinContent(6,141.2629);
   wqq_stack_2->SetBinContent(7,163.6356);
   wqq_stack_2->SetBinContent(8,110.3247);
   wqq_stack_2->SetBinContent(9,45.45716);
   wqq_stack_2->SetBinContent(10,7.43719);
   wqq_stack_2->SetBinContent(11,4.432233);
   wqq_stack_2->SetBinContent(12,3.034185);
   wqq_stack_2->SetBinContent(13,1.29428);
   wqq_stack_2->SetBinContent(14,0.4363169);
   wqq_stack_2->SetBinContent(15,3.806569e-06);
   wqq_stack_2->SetBinContent(16,3.806569e-06);
   wqq_stack_2->SetBinContent(17,3.806569e-06);
   wqq_stack_2->SetBinContent(18,3.806569e-06);
   wqq_stack_2->SetBinContent(19,3.806569e-06);
   wqq_stack_2->SetBinContent(20,3.806569e-06);
   wqq_stack_2->SetBinContent(21,3.806569e-06);
   wqq_stack_2->SetBinContent(22,3.806569e-06);
   wqq_stack_2->SetBinContent(23,3.806569e-06);
   wqq_stack_2->SetBinError(1,5.022727e-07);
   wqq_stack_2->SetBinError(2,0.3413052);
   wqq_stack_2->SetBinError(3,1.799991);
   wqq_stack_2->SetBinError(4,5.010084);
   wqq_stack_2->SetBinError(5,5.641657);
   wqq_stack_2->SetBinError(6,18.45941);
   wqq_stack_2->SetBinError(7,21.80586);
   wqq_stack_2->SetBinError(8,16.72839);
   wqq_stack_2->SetBinError(9,12.01839);
   wqq_stack_2->SetBinError(10,1.369032);
   wqq_stack_2->SetBinError(11,0.5961024);
   wqq_stack_2->SetBinError(12,0.4948996);
   wqq_stack_2->SetBinError(13,0.5292062);
   wqq_stack_2->SetBinError(14,0.265147);
   wqq_stack_2->SetBinError(15,5.022727e-07);
   wqq_stack_2->SetBinError(16,5.022727e-07);
   wqq_stack_2->SetBinError(17,5.022727e-07);
   wqq_stack_2->SetBinError(18,5.022727e-07);
   wqq_stack_2->SetBinError(19,5.022727e-07);
   wqq_stack_2->SetBinError(20,5.022727e-07);
   wqq_stack_2->SetBinError(21,5.022727e-07);
   wqq_stack_2->SetBinError(22,5.022727e-07);
   wqq_stack_2->SetBinError(23,5.022727e-07);
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
   zqq_stack_3->SetBinContent(1,7.241932e-06);
   zqq_stack_3->SetBinContent(2,2.176198);
   zqq_stack_3->SetBinContent(3,4.265669);
   zqq_stack_3->SetBinContent(4,10.91757);
   zqq_stack_3->SetBinContent(5,31.89346);
   zqq_stack_3->SetBinContent(6,74.67838);
   zqq_stack_3->SetBinContent(7,229.3681);
   zqq_stack_3->SetBinContent(8,317.3978);
   zqq_stack_3->SetBinContent(9,197.2464);
   zqq_stack_3->SetBinContent(10,112.301);
   zqq_stack_3->SetBinContent(11,45.02386);
   zqq_stack_3->SetBinContent(12,9.293355);
   zqq_stack_3->SetBinContent(13,7.241932e-06);
   zqq_stack_3->SetBinContent(14,7.241932e-06);
   zqq_stack_3->SetBinContent(15,7.241932e-06);
   zqq_stack_3->SetBinContent(16,7.241932e-06);
   zqq_stack_3->SetBinContent(17,7.241932e-06);
   zqq_stack_3->SetBinContent(18,7.241932e-06);
   zqq_stack_3->SetBinContent(19,7.241932e-06);
   zqq_stack_3->SetBinContent(20,7.241932e-06);
   zqq_stack_3->SetBinContent(21,7.241932e-06);
   zqq_stack_3->SetBinContent(22,7.241932e-06);
   zqq_stack_3->SetBinContent(23,7.241932e-06);
   zqq_stack_3->SetBinError(1,8.505453e-07);
   zqq_stack_3->SetBinError(2,1.382603);
   zqq_stack_3->SetBinError(3,1.177273);
   zqq_stack_3->SetBinError(4,1.942218);
   zqq_stack_3->SetBinError(5,10.0611);
   zqq_stack_3->SetBinError(6,10.06972);
   zqq_stack_3->SetBinError(7,28.64812);
   zqq_stack_3->SetBinError(8,35.94471);
   zqq_stack_3->SetBinError(9,28.49781);
   zqq_stack_3->SetBinError(10,17.42504);
   zqq_stack_3->SetBinError(11,8.970404);
   zqq_stack_3->SetBinError(12,3.13002);
   zqq_stack_3->SetBinError(13,8.505453e-07);
   zqq_stack_3->SetBinError(14,8.505453e-07);
   zqq_stack_3->SetBinError(15,8.505453e-07);
   zqq_stack_3->SetBinError(16,8.505453e-07);
   zqq_stack_3->SetBinError(17,8.505453e-07);
   zqq_stack_3->SetBinError(18,8.505453e-07);
   zqq_stack_3->SetBinError(19,8.505453e-07);
   zqq_stack_3->SetBinError(20,8.505453e-07);
   zqq_stack_3->SetBinError(21,8.505453e-07);
   zqq_stack_3->SetBinError(22,8.505453e-07);
   zqq_stack_3->SetBinError(23,8.505453e-07);
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
   
   TH1F *hsigpass_cat1_2016_fit_s_stack_4 = new TH1F("hsigpass_cat1_2016_fit_s_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(1,1.470248e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(2,0.1630678);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(3,0.5917807);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(4,0.5702909);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(5,0.8025079);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(6,1.62797);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(7,2.5538);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(8,4.453448);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(9,8.926597);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(10,18.72381);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(11,31.52871);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(12,42.13143);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(13,44.11941);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(14,31.60167);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(15,15.21572);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(16,5.336541);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(17,1.094491);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(18,0.5942029);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(19,1.470248e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(20,1.470248e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(21,1.470248e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(22,1.470248e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(23,1.470248e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(1,4.690057e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(2,0.05214683);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(3,0.2009435);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(4,0.185091);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(5,0.1995166);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(6,0.60193);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(7,0.9176539);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(8,1.498561);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(9,3.176332);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(10,6.632134);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(11,10.3739);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(12,13.33139);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(13,14.34994);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(14,10.47609);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(15,4.72681);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(16,1.785838);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(17,0.2781139);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(18,0.1948959);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(19,4.690057e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(20,4.690057e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(21,4.690057e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(22,4.690057e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(23,4.690057e-07);
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
   
   TH1F *htotpass_cat1_2016_fit_s_copy__12 = new TH1F("htotpass_cat1_2016_fit_s_copy__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(1,1.10485e-05);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(2,2365.515);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(3,2506.091);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(4,2503.061);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(5,2504.461);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(6,2588.882);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(7,2661.549);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(8,2586.819);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(9,2258.023);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(10,2007.464);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(11,1800.783);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(12,1591.246);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(13,1374.957);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(14,1173.07);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(15,968.7893);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(16,782.3111);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(17,621.5201);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(18,472.5898);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(19,1.10485e-05);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(20,1.10485e-05);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(21,1.10485e-05);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(22,1.10485e-05);
   htotpass_cat1_2016_fit_s_copy__12->SetBinContent(23,1.10485e-05);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(1,9.877779e-07);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(2,30.26708);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(3,23.48004);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(4,23.6685);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(5,26.73395);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(6,35.48234);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(7,47.07892);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(8,48.71871);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(9,40.73871);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(10,29.14067);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(11,22.70659);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(12,19.52043);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(13,17.64461);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(14,15.55357);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(15,13.05696);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(16,11.5182);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(17,9.825414);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(18,8.985563);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(19,9.877779e-07);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(20,9.877779e-07);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(21,9.877779e-07);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(22,9.877779e-07);
   htotpass_cat1_2016_fit_s_copy__12->SetBinError(23,9.877779e-07);
   htotpass_cat1_2016_fit_s_copy__12->SetMaximum(3992.324);
   htotpass_cat1_2016_fit_s_copy__12->SetEntries(92);
   htotpass_cat1_2016_fit_s_copy__12->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s_copy__12->SetFillColor(ci);
   htotpass_cat1_2016_fit_s_copy__12->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s_copy__12->SetLineColor(ci);
   htotpass_cat1_2016_fit_s_copy__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_s_copy__12->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_s_copy__12->SetMarkerSize(0);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_s_copy__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_s_copy__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_s_copy__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_s_copy__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_s_copy__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s_copy__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s_copy__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__12->Draw("sameaxis");
   p12pass_cat1_2016_fit_s->Modified();
   cpass_cat1_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_fit_s
   TPad *p22pass_cat1_2016_fit_s = new TPad("p22pass_cat1_2016_fit_s", "p22pass_cat1_2016_fit_s",0,0,1,0.3);
   p22pass_cat1_2016_fit_s->Draw();
   p22pass_cat1_2016_fit_s->cd();
   p22pass_cat1_2016_fit_s->Range(21.27027,-7.003297,182.0811,4.851021);
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
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_s__13 = new TH1F("iOneWithErrorspass_cat1_2016_fit_s__13","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(1,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(2,0.629429);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(3,0.4131474);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(4,0.444291);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(5,0.4285225);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(6,0.470917);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(7,0.4823228);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(8,0.5334437);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(9,0.4125119);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(10,0.3456106);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(11,0.4001284);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(12,0.4127751);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(13,0.4408995);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(14,0.4243386);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(15,0.3772244);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(16,0.411643);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(17,0.4410648);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(18,0.47105);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(19,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(20,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(21,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(22,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetBinError(23,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetMinimum(-3.447002);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetMaximum(4.258305);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_s__13->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_s__13->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s__13->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__13->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_fit_s__13->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_fit_s__13->Draw("");
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_s__14 = new TH1F("iOneWithErrorspass_cat1_2016_fit_s__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(1,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(2,0.629429);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(3,0.4131474);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(4,0.444291);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(5,0.4285225);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(6,0.470917);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(7,0.4823228);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(8,0.5334437);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(9,0.4125119);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(10,0.3456106);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(11,0.4001284);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(12,0.4127751);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(13,0.4408995);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(14,0.4243386);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(15,0.3772244);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(16,0.411643);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(17,0.4410648);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(18,0.47105);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(19,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(20,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(21,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(22,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetBinError(23,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMinimum(-3.447002);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMaximum(4.258305);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_s__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat1_2016_fit_s__14->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(-13.17984);
   hstack_stack_4->SetMaximum(16.29604);
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
   
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(2,0.003339221);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(3,0.01180784);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(4,0.01143381);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(5,0.01591771);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(6,0.03164371);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(7,0.04919546);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(8,0.08761307);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(9,0.18419);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(10,0.4130611);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(11,0.73991);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(12,1.033535);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(13,1.170096);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(14,0.9236006);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(15,0.4916728);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(16,0.1847116);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(17,0.0450713);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinContent(18,0.02652884);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(1,4.690057e-07);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(2,0.05214683);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(3,0.2009435);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(4,0.185091);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(5,0.1995166);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(6,0.60193);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(7,0.9176539);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(8,1.498561);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(9,3.176332);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(10,6.632134);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(11,10.3739);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(12,13.33139);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(13,14.34994);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(14,10.47609);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(15,4.72681);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(16,1.785838);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(17,0.2781139);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(18,0.1948959);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(19,4.690057e-07);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(20,4.690057e-07);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(21,4.690057e-07);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(22,4.690057e-07);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetBinError(23,4.690057e-07);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_fit_s__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_fit_s__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(1,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(2,0.629429);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(3,0.4131474);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(4,0.444291);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(5,0.4285225);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(6,0.470917);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(7,0.4823228);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(8,0.5334437);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(9,0.4125119);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(10,0.3456106);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(11,0.4001284);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(12,0.4127751);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(13,0.4408995);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(14,0.4243386);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(15,0.3772244);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(16,0.411643);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(17,0.4410648);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(18,0.47105);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(19,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(20,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(21,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(22,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetBinError(23,1.189352e-06);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   0.390919,
   0.1155771,
   -0.3019453,
   0.7299488,
   1.107919,
   0.6320923,
   -0.05546504,
   1.83887,
   1.025791,
   0.3488281,
   1.693615,
   1.214988,
   -0.06049692,
   -0.34864,
   1.761667,
   -1.298001,
   1.255735,
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_fit_s_fx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fy3004,Graph_from_iRatiopass_cat1_2016_fit_s_felx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fehx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fely3004,Graph_from_iRatiopass_cat1_2016_fit_s_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMinimum(-2.811688);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMaximum(3.352557);
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
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(1,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(2,0.629429);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(3,0.4131474);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(4,0.444291);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(5,0.4285225);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(6,0.470917);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(7,0.4823228);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(8,0.5334437);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(9,0.4125119);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(10,0.3456106);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(11,0.4001284);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(12,0.4127751);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(13,0.4408995);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(14,0.4243386);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(15,0.3772244);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(16,0.411643);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(17,0.4410648);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(18,0.47105);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(19,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(20,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(21,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(22,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetBinError(23,1.189352e-06);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMinimum(-3.447002);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMaximum(4.258305);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
