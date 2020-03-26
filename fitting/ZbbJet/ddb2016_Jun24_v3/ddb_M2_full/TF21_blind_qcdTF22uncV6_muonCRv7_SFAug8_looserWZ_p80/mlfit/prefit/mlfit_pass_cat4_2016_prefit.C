void mlfit_pass_cat4_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat4_2016_prefit/cpass_cat4_2016_prefit
//=========  (Thu Sep 26 13:57:13 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_prefit = new TCanvas("cpass_cat4_2016_prefit", "cpass_cat4_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_prefit->SetHighLightColor(2);
   cpass_cat4_2016_prefit->Range(0,0,1,1);
   cpass_cat4_2016_prefit->SetFillColor(0);
   cpass_cat4_2016_prefit->SetBorderMode(0);
   cpass_cat4_2016_prefit->SetBorderSize(2);
   cpass_cat4_2016_prefit->SetTickx(1);
   cpass_cat4_2016_prefit->SetTicky(1);
   cpass_cat4_2016_prefit->SetLeftMargin(0.16);
   cpass_cat4_2016_prefit->SetBottomMargin(0.13);
   cpass_cat4_2016_prefit->SetFrameFillStyle(0);
   cpass_cat4_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_prefit
   TPad *p12pass_cat4_2016_prefit = new TPad("p12pass_cat4_2016_prefit", "p12pass_cat4_2016_prefit",0,0.3,1,1);
   p12pass_cat4_2016_prefit->Draw();
   p12pass_cat4_2016_prefit->cd();
   p12pass_cat4_2016_prefit->Range(13.7027,-19.53321,221.8108,957.1271);
   p12pass_cat4_2016_prefit->SetFillColor(0);
   p12pass_cat4_2016_prefit->SetBorderMode(0);
   p12pass_cat4_2016_prefit->SetBorderSize(2);
   p12pass_cat4_2016_prefit->SetTickx(1);
   p12pass_cat4_2016_prefit->SetTicky(1);
   p12pass_cat4_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat4_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat4_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat4_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_prefit__81 = new TH1F("htotpass_cat4_2016_prefit__81","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_prefit__81->SetBinContent(1,4.046803e-06);
   htotpass_cat4_2016_prefit__81->SetBinContent(2,449.8675);
   htotpass_cat4_2016_prefit__81->SetBinContent(3,463.2796);
   htotpass_cat4_2016_prefit__81->SetBinContent(4,467.0431);
   htotpass_cat4_2016_prefit__81->SetBinContent(5,495.2473);
   htotpass_cat4_2016_prefit__81->SetBinContent(6,530.798);
   htotpass_cat4_2016_prefit__81->SetBinContent(7,572.9741);
   htotpass_cat4_2016_prefit__81->SetBinContent(8,531.2951);
   htotpass_cat4_2016_prefit__81->SetBinContent(9,449.2497);
   htotpass_cat4_2016_prefit__81->SetBinContent(10,372.7867);
   htotpass_cat4_2016_prefit__81->SetBinContent(11,4.046803e-06);
   htotpass_cat4_2016_prefit__81->SetBinContent(12,4.046803e-06);
   htotpass_cat4_2016_prefit__81->SetBinContent(13,4.046803e-06);
   htotpass_cat4_2016_prefit__81->SetBinContent(14,292.1521);
   htotpass_cat4_2016_prefit__81->SetBinContent(15,269.3306);
   htotpass_cat4_2016_prefit__81->SetBinContent(16,244.4553);
   htotpass_cat4_2016_prefit__81->SetBinContent(17,227.4333);
   htotpass_cat4_2016_prefit__81->SetBinContent(18,197.1437);
   htotpass_cat4_2016_prefit__81->SetBinContent(19,175.2223);
   htotpass_cat4_2016_prefit__81->SetBinContent(20,150.2514);
   htotpass_cat4_2016_prefit__81->SetBinContent(21,127.1798);
   htotpass_cat4_2016_prefit__81->SetBinContent(22,105.8564);
   htotpass_cat4_2016_prefit__81->SetBinContent(23,84.33663);
   htotpass_cat4_2016_prefit__81->SetBinError(1,7.289565e-07);
   htotpass_cat4_2016_prefit__81->SetBinError(2,14.91686);
   htotpass_cat4_2016_prefit__81->SetBinError(3,10.10344);
   htotpass_cat4_2016_prefit__81->SetBinError(4,11.30336);
   htotpass_cat4_2016_prefit__81->SetBinError(5,16.32493);
   htotpass_cat4_2016_prefit__81->SetBinError(6,25.04358);
   htotpass_cat4_2016_prefit__81->SetBinError(7,34.74598);
   htotpass_cat4_2016_prefit__81->SetBinError(8,38.62774);
   htotpass_cat4_2016_prefit__81->SetBinError(9,28.25784);
   htotpass_cat4_2016_prefit__81->SetBinError(10,19.01514);
   htotpass_cat4_2016_prefit__81->SetBinError(11,7.289565e-07);
   htotpass_cat4_2016_prefit__81->SetBinError(12,7.289565e-07);
   htotpass_cat4_2016_prefit__81->SetBinError(13,7.289565e-07);
   htotpass_cat4_2016_prefit__81->SetBinError(14,11.70573);
   htotpass_cat4_2016_prefit__81->SetBinError(15,6.110127);
   htotpass_cat4_2016_prefit__81->SetBinError(16,6.816572);
   htotpass_cat4_2016_prefit__81->SetBinError(17,5.080012);
   htotpass_cat4_2016_prefit__81->SetBinError(18,4.617117);
   htotpass_cat4_2016_prefit__81->SetBinError(19,5.021873);
   htotpass_cat4_2016_prefit__81->SetBinError(20,4.532066);
   htotpass_cat4_2016_prefit__81->SetBinError(21,4.525378);
   htotpass_cat4_2016_prefit__81->SetBinError(22,4.601877);
   htotpass_cat4_2016_prefit__81->SetBinError(23,4.680597);
   htotpass_cat4_2016_prefit__81->SetMinimum(0);
   htotpass_cat4_2016_prefit__81->SetMaximum(859.4611);
   htotpass_cat4_2016_prefit__81->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__81->SetFillColor(ci);
   htotpass_cat4_2016_prefit__81->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__81->SetLineColor(ci);
   htotpass_cat4_2016_prefit__81->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_prefit__81->SetMarkerColor(ci);
   htotpass_cat4_2016_prefit__81->SetMarkerSize(0);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_prefit__81->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__81->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_prefit__81->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__81->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_prefit__81->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_prefit__81->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_prefit__81->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__81->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__81->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__81->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__81->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__81->Draw("");
   
   TH1F *htot_linepass_cat4_2016_prefit__82 = new TH1F("htot_linepass_cat4_2016_prefit__82","wqq in cat4_2016_pass_cat4",23,40,201);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(1,4.046803e-06);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(2,449.8675);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(3,463.2796);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(4,467.0431);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(5,495.2473);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(6,530.798);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(7,572.9741);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(8,531.2951);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(9,449.2497);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(10,372.7867);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(11,4.046803e-06);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(12,4.046803e-06);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(13,4.046803e-06);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(14,292.1521);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(15,269.3306);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(16,244.4553);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(17,227.4333);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(18,197.1437);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(19,175.2223);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(20,150.2514);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(21,127.1798);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(22,105.8564);
   htot_linepass_cat4_2016_prefit__82->SetBinContent(23,84.33663);
   htot_linepass_cat4_2016_prefit__82->SetBinError(1,7.289565e-07);
   htot_linepass_cat4_2016_prefit__82->SetBinError(2,14.91686);
   htot_linepass_cat4_2016_prefit__82->SetBinError(3,10.10344);
   htot_linepass_cat4_2016_prefit__82->SetBinError(4,11.30336);
   htot_linepass_cat4_2016_prefit__82->SetBinError(5,16.32493);
   htot_linepass_cat4_2016_prefit__82->SetBinError(6,25.04358);
   htot_linepass_cat4_2016_prefit__82->SetBinError(7,34.74598);
   htot_linepass_cat4_2016_prefit__82->SetBinError(8,38.62774);
   htot_linepass_cat4_2016_prefit__82->SetBinError(9,28.25784);
   htot_linepass_cat4_2016_prefit__82->SetBinError(10,19.01514);
   htot_linepass_cat4_2016_prefit__82->SetBinError(11,7.289565e-07);
   htot_linepass_cat4_2016_prefit__82->SetBinError(12,7.289565e-07);
   htot_linepass_cat4_2016_prefit__82->SetBinError(13,7.289565e-07);
   htot_linepass_cat4_2016_prefit__82->SetBinError(14,11.70573);
   htot_linepass_cat4_2016_prefit__82->SetBinError(15,6.110127);
   htot_linepass_cat4_2016_prefit__82->SetBinError(16,6.816572);
   htot_linepass_cat4_2016_prefit__82->SetBinError(17,5.080012);
   htot_linepass_cat4_2016_prefit__82->SetBinError(18,4.617117);
   htot_linepass_cat4_2016_prefit__82->SetBinError(19,5.021873);
   htot_linepass_cat4_2016_prefit__82->SetBinError(20,4.532066);
   htot_linepass_cat4_2016_prefit__82->SetBinError(21,4.525378);
   htot_linepass_cat4_2016_prefit__82->SetBinError(22,4.601877);
   htot_linepass_cat4_2016_prefit__82->SetBinError(23,4.680597);
   htot_linepass_cat4_2016_prefit__82->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_prefit__82->SetFillColor(ci);
   htot_linepass_cat4_2016_prefit__82->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_prefit__82->SetLineColor(ci);
   htot_linepass_cat4_2016_prefit__82->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat4_2016_prefit__82->SetMarkerColor(ci);
   htot_linepass_cat4_2016_prefit__82->SetMarkerSize(0);
   htot_linepass_cat4_2016_prefit__82->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat4_2016_prefit__82->GetXaxis()->SetRange(2,23);
   htot_linepass_cat4_2016_prefit__82->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_prefit__82->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_prefit__82->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_prefit__82->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_prefit__82->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat4_2016_prefit__82->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_prefit__82->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat4_2016_prefit__82->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat4_2016_prefit__82->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat4_2016_prefit__82->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_prefit__82->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_prefit__82->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_prefit__82->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_prefit__82->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_prefit__82->Draw("histsame");
   
   TH1F *qcd__83 = new TH1F("qcd__83","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__83->SetBinContent(2,444.0103);
   qcd__83->SetBinContent(3,460.3052);
   qcd__83->SetBinContent(4,458.5539);
   qcd__83->SetBinContent(5,443.9837);
   qcd__83->SetBinContent(6,411.4296);
   qcd__83->SetBinContent(7,390.8952);
   qcd__83->SetBinContent(8,374.9568);
   qcd__83->SetBinContent(9,351.9471);
   qcd__83->SetBinContent(10,335.3443);
   qcd__83->SetBinContent(14,276.9184);
   qcd__83->SetBinContent(15,263.335);
   qcd__83->SetBinContent(16,236.7439);
   qcd__83->SetBinContent(17,223.2511);
   qcd__83->SetBinContent(18,193.8529);
   qcd__83->SetBinContent(19,171.0488);
   qcd__83->SetBinContent(20,147.8148);
   qcd__83->SetBinContent(21,125.4583);
   qcd__83->SetBinContent(22,105.0663);
   qcd__83->SetBinContent(23,84.33662);
   qcd__83->SetBinError(2,14.6862);
   qcd__83->SetBinError(3,9.721753);
   qcd__83->SetBinError(4,7.840697);
   qcd__83->SetBinError(5,7.192474);
   qcd__83->SetBinError(6,6.713348);
   qcd__83->SetBinError(7,6.504382);
   qcd__83->SetBinError(8,6.337229);
   qcd__83->SetBinError(9,5.994119);
   qcd__83->SetBinError(10,5.710645);
   qcd__83->SetBinError(14,4.581774);
   qcd__83->SetBinError(15,4.40352);
   qcd__83->SetBinError(16,4.096913);
   qcd__83->SetBinError(17,4.132372);
   qcd__83->SetBinError(18,3.989074);
   qcd__83->SetBinError(19,4.065143);
   qcd__83->SetBinError(20,4.19242);
   qcd__83->SetBinError(21,4.358886);
   qcd__83->SetBinError(22,4.567901);
   qcd__83->SetBinError(23,4.680597);
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
   
   TH1F *htotpass_cat4_2016_prefit__84 = new TH1F("htotpass_cat4_2016_prefit__84","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_prefit__84->SetBinContent(1,4.046803e-06);
   htotpass_cat4_2016_prefit__84->SetBinContent(2,449.8675);
   htotpass_cat4_2016_prefit__84->SetBinContent(3,463.2796);
   htotpass_cat4_2016_prefit__84->SetBinContent(4,467.0431);
   htotpass_cat4_2016_prefit__84->SetBinContent(5,495.2473);
   htotpass_cat4_2016_prefit__84->SetBinContent(6,530.798);
   htotpass_cat4_2016_prefit__84->SetBinContent(7,572.9741);
   htotpass_cat4_2016_prefit__84->SetBinContent(8,531.2951);
   htotpass_cat4_2016_prefit__84->SetBinContent(9,449.2497);
   htotpass_cat4_2016_prefit__84->SetBinContent(10,372.7867);
   htotpass_cat4_2016_prefit__84->SetBinContent(11,4.046803e-06);
   htotpass_cat4_2016_prefit__84->SetBinContent(12,4.046803e-06);
   htotpass_cat4_2016_prefit__84->SetBinContent(13,4.046803e-06);
   htotpass_cat4_2016_prefit__84->SetBinContent(14,292.1521);
   htotpass_cat4_2016_prefit__84->SetBinContent(15,269.3306);
   htotpass_cat4_2016_prefit__84->SetBinContent(16,244.4553);
   htotpass_cat4_2016_prefit__84->SetBinContent(17,227.4333);
   htotpass_cat4_2016_prefit__84->SetBinContent(18,197.1437);
   htotpass_cat4_2016_prefit__84->SetBinContent(19,175.2223);
   htotpass_cat4_2016_prefit__84->SetBinContent(20,150.2514);
   htotpass_cat4_2016_prefit__84->SetBinContent(21,127.1798);
   htotpass_cat4_2016_prefit__84->SetBinContent(22,105.8564);
   htotpass_cat4_2016_prefit__84->SetBinContent(23,84.33663);
   htotpass_cat4_2016_prefit__84->SetBinError(1,7.289565e-07);
   htotpass_cat4_2016_prefit__84->SetBinError(2,14.91686);
   htotpass_cat4_2016_prefit__84->SetBinError(3,10.10344);
   htotpass_cat4_2016_prefit__84->SetBinError(4,11.30336);
   htotpass_cat4_2016_prefit__84->SetBinError(5,16.32493);
   htotpass_cat4_2016_prefit__84->SetBinError(6,25.04358);
   htotpass_cat4_2016_prefit__84->SetBinError(7,34.74598);
   htotpass_cat4_2016_prefit__84->SetBinError(8,38.62774);
   htotpass_cat4_2016_prefit__84->SetBinError(9,28.25784);
   htotpass_cat4_2016_prefit__84->SetBinError(10,19.01514);
   htotpass_cat4_2016_prefit__84->SetBinError(11,7.289565e-07);
   htotpass_cat4_2016_prefit__84->SetBinError(12,7.289565e-07);
   htotpass_cat4_2016_prefit__84->SetBinError(13,7.289565e-07);
   htotpass_cat4_2016_prefit__84->SetBinError(14,11.70573);
   htotpass_cat4_2016_prefit__84->SetBinError(15,6.110127);
   htotpass_cat4_2016_prefit__84->SetBinError(16,6.816572);
   htotpass_cat4_2016_prefit__84->SetBinError(17,5.080012);
   htotpass_cat4_2016_prefit__84->SetBinError(18,4.617117);
   htotpass_cat4_2016_prefit__84->SetBinError(19,5.021873);
   htotpass_cat4_2016_prefit__84->SetBinError(20,4.532066);
   htotpass_cat4_2016_prefit__84->SetBinError(21,4.525378);
   htotpass_cat4_2016_prefit__84->SetBinError(22,4.601877);
   htotpass_cat4_2016_prefit__84->SetBinError(23,4.680597);
   htotpass_cat4_2016_prefit__84->SetMinimum(0);
   htotpass_cat4_2016_prefit__84->SetMaximum(859.4611);
   htotpass_cat4_2016_prefit__84->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__84->SetFillColor(ci);
   htotpass_cat4_2016_prefit__84->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__84->SetLineColor(ci);
   htotpass_cat4_2016_prefit__84->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_prefit__84->SetMarkerColor(ci);
   htotpass_cat4_2016_prefit__84->SetMarkerSize(0);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_prefit__84->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__84->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_prefit__84->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__84->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_prefit__84->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_prefit__84->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_prefit__84->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__84->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__84->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__84->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__84->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__84->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis21[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_21 = new TH1F("hstackMC_stack_21","hstackMC",23, xAxis21);
   hstackMC_stack_21->SetMinimum(-59.93633);
   hstackMC_stack_21->SetMaximum(191.2087);
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
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat4_2016_pass_cat4",23, xAxis22);
   tqq_stack_1->SetBinContent(2,3.191241);
   tqq_stack_1->SetBinContent(3,2.974454);
   tqq_stack_1->SetBinContent(4,2.962127);
   tqq_stack_1->SetBinContent(5,8.643989);
   tqq_stack_1->SetBinContent(6,14.10292);
   tqq_stack_1->SetBinContent(7,13.60646);
   tqq_stack_1->SetBinContent(8,13.85129);
   tqq_stack_1->SetBinContent(9,11.70682);
   tqq_stack_1->SetBinContent(10,11.96094);
   tqq_stack_1->SetBinContent(14,15.23375);
   tqq_stack_1->SetBinContent(15,5.995676);
   tqq_stack_1->SetBinContent(16,7.711408);
   tqq_stack_1->SetBinContent(17,4.182178);
   tqq_stack_1->SetBinContent(18,3.29075);
   tqq_stack_1->SetBinContent(19,4.173498);
   tqq_stack_1->SetBinContent(20,2.436562);
   tqq_stack_1->SetBinContent(21,1.721481);
   tqq_stack_1->SetBinContent(22,0.7900673);
   tqq_stack_1->SetBinError(2,2.254576);
   tqq_stack_1->SetBinError(3,2.101419);
   tqq_stack_1->SetBinError(4,2.092709);
   tqq_stack_1->SetBinError(5,6.106881);
   tqq_stack_1->SetBinError(6,9.963554);
   tqq_stack_1->SetBinError(7,9.612812);
   tqq_stack_1->SetBinError(8,9.785783);
   tqq_stack_1->SetBinError(9,8.270735);
   tqq_stack_1->SetBinError(10,8.450269);
   tqq_stack_1->SetBinError(14,10.76247);
   tqq_stack_1->SetBinError(15,4.235878);
   tqq_stack_1->SetBinError(16,5.448024);
   tqq_stack_1->SetBinError(17,2.954662);
   tqq_stack_1->SetBinError(18,2.324878);
   tqq_stack_1->SetBinError(19,2.948529);
   tqq_stack_1->SetBinError(20,1.721403);
   tqq_stack_1->SetBinError(21,1.216207);
   tqq_stack_1->SetBinError(22,0.5581737);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat4_2016_pass_cat4",23,40,201);
   wqq_stack_2->SetBinContent(1,1.661525e-06);
   wqq_stack_2->SetBinContent(2,2.66601);
   wqq_stack_2->SetBinContent(3,1.661525e-06);
   wqq_stack_2->SetBinContent(4,5.527049);
   wqq_stack_2->SetBinContent(5,33.77459);
   wqq_stack_2->SetBinContent(6,66.36655);
   wqq_stack_2->SetBinContent(7,95.7905);
   wqq_stack_2->SetBinContent(8,27.44625);
   wqq_stack_2->SetBinContent(9,3.822264);
   wqq_stack_2->SetBinContent(10,1.967568);
   wqq_stack_2->SetBinContent(11,1.661525e-06);
   wqq_stack_2->SetBinContent(12,1.661525e-06);
   wqq_stack_2->SetBinContent(13,1.661525e-06);
   wqq_stack_2->SetBinContent(14,1.661525e-06);
   wqq_stack_2->SetBinContent(15,1.661525e-06);
   wqq_stack_2->SetBinContent(16,1.661525e-06);
   wqq_stack_2->SetBinContent(17,1.661525e-06);
   wqq_stack_2->SetBinContent(18,1.661525e-06);
   wqq_stack_2->SetBinContent(19,1.661525e-06);
   wqq_stack_2->SetBinContent(20,1.661525e-06);
   wqq_stack_2->SetBinContent(21,1.661525e-06);
   wqq_stack_2->SetBinContent(22,1.661525e-06);
   wqq_stack_2->SetBinContent(23,1.661525e-06);
   wqq_stack_2->SetBinError(1,2.861851e-07);
   wqq_stack_2->SetBinError(2,1.32106);
   wqq_stack_2->SetBinError(3,1.775107);
   wqq_stack_2->SetBinError(4,7.412931);
   wqq_stack_2->SetBinError(5,9.868742);
   wqq_stack_2->SetBinError(6,15.55456);
   wqq_stack_2->SetBinError(7,22.4935);
   wqq_stack_2->SetBinError(8,12.41398);
   wqq_stack_2->SetBinError(9,5.914855);
   wqq_stack_2->SetBinError(10,0.6676942);
   wqq_stack_2->SetBinError(11,2.861851e-07);
   wqq_stack_2->SetBinError(12,2.861851e-07);
   wqq_stack_2->SetBinError(13,2.861851e-07);
   wqq_stack_2->SetBinError(14,2.861851e-07);
   wqq_stack_2->SetBinError(15,2.861851e-07);
   wqq_stack_2->SetBinError(16,2.861851e-07);
   wqq_stack_2->SetBinError(17,2.861851e-07);
   wqq_stack_2->SetBinError(18,2.861851e-07);
   wqq_stack_2->SetBinError(19,2.861851e-07);
   wqq_stack_2->SetBinError(20,2.861851e-07);
   wqq_stack_2->SetBinError(21,2.861851e-07);
   wqq_stack_2->SetBinError(22,2.861851e-07);
   wqq_stack_2->SetBinError(23,2.861851e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat4_2016_pass_cat4",23,40,201);
   zqq_stack_3->SetBinContent(1,2.385278e-06);
   zqq_stack_3->SetBinContent(2,2.385278e-06);
   zqq_stack_3->SetBinContent(3,2.385278e-06);
   zqq_stack_3->SetBinContent(4,2.385278e-06);
   zqq_stack_3->SetBinContent(5,8.844934);
   zqq_stack_3->SetBinContent(6,38.89893);
   zqq_stack_3->SetBinContent(7,72.68194);
   zqq_stack_3->SetBinContent(8,115.0408);
   zqq_stack_3->SetBinContent(9,81.77354);
   zqq_stack_3->SetBinContent(10,23.51383);
   zqq_stack_3->SetBinContent(11,2.385278e-06);
   zqq_stack_3->SetBinContent(12,2.385278e-06);
   zqq_stack_3->SetBinContent(13,2.385278e-06);
   zqq_stack_3->SetBinContent(14,2.385278e-06);
   zqq_stack_3->SetBinContent(15,2.385278e-06);
   zqq_stack_3->SetBinContent(16,2.385278e-06);
   zqq_stack_3->SetBinContent(17,2.385278e-06);
   zqq_stack_3->SetBinContent(18,2.385278e-06);
   zqq_stack_3->SetBinContent(19,2.385278e-06);
   zqq_stack_3->SetBinContent(20,2.385278e-06);
   zqq_stack_3->SetBinContent(21,2.385278e-06);
   zqq_stack_3->SetBinContent(22,2.385278e-06);
   zqq_stack_3->SetBinContent(23,2.385278e-06);
   zqq_stack_3->SetBinError(1,6.704295e-07);
   zqq_stack_3->SetBinError(2,6.704295e-07);
   zqq_stack_3->SetBinError(3,6.704295e-07);
   zqq_stack_3->SetBinError(4,2.637908);
   zqq_stack_3->SetBinError(5,8.949054);
   zqq_stack_3->SetBinError(6,15.5208);
   zqq_stack_3->SetBinError(7,23.80362);
   zqq_stack_3->SetBinError(8,34.67093);
   zqq_stack_3->SetBinError(9,25.67461);
   zqq_stack_3->SetBinError(10,16.03469);
   zqq_stack_3->SetBinError(11,6.704295e-07);
   zqq_stack_3->SetBinError(12,6.704295e-07);
   zqq_stack_3->SetBinError(13,6.704295e-07);
   zqq_stack_3->SetBinError(14,0.448019);
   zqq_stack_3->SetBinError(15,6.704295e-07);
   zqq_stack_3->SetBinError(16,6.704295e-07);
   zqq_stack_3->SetBinError(17,6.704295e-07);
   zqq_stack_3->SetBinError(18,6.704295e-07);
   zqq_stack_3->SetBinError(19,6.704295e-07);
   zqq_stack_3->SetBinError(20,6.704295e-07);
   zqq_stack_3->SetBinError(21,6.704295e-07);
   zqq_stack_3->SetBinError(22,6.704295e-07);
   zqq_stack_3->SetBinError(23,6.704295e-07);
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
   
   TH1F *hsigpass_cat4_2016_prefit_stack_4 = new TH1F("hsigpass_cat4_2016_prefit_stack_4","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(1,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(2,0.2060963);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(3,0.009211014);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(4,0.1730856);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(5,0.02287545);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(6,0.05126379);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(7,0.02465427);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(8,0.2469853);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(9,0.6319354);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(10,1.423695);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(11,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(12,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(13,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(14,3.595814);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(15,1.845189);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(16,0.1781673);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(17,0.02283169);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(18,0.02679342);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(19,0.01324434);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(20,0.003520045);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(21,0.01193407);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(22,0.003215015);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(23,0.006075388);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(1,1.14459e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(2,5.281028);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(3,0.01972966);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(4,4.435159);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(5,0.3865519);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(6,0.9447777);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(7,1.942224);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(8,6.528437);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(9,17.64753);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(10,36.28778);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(11,1.14459e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(12,1.14459e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(13,1.14459e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(14,63.53214);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(15,26.84726);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(16,8.828873);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(17,0.7154571);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(18,0.05115382);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(19,0.03910055);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(20,0.008462913);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(21,0.02546451);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(22,0.006860004);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(23,0.0129634);
   hsigpass_cat4_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_prefit_stack_4,"");
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
   476,
   459,
   463,
   482,
   491,
   526,
   488,
   473,
   419,
   0,
   0,
   0,
   335,
   276,
   258,
   272,
   210,
   179,
   139,
   138,
   109,
   92};
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
   22.8332,
   22.44034,
   22.53342,
   22.97018,
   23.17407,
   23.94975,
   23.10632,
   22.76439,
   21.48625,
   1.841055,
   1.841055,
   1.841055,
   19.32164,
   17.6337,
   17.08351,
   17.51302,
   15.51473,
   14.40433,
   12.8184,
   12.77601,
   11.4725,
   10.62667};
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
   21.81023,
   21.41694,
   21.51013,
   21.94735,
   22.15145,
   22.92789,
   22.08363,
   21.74134,
   20.46176,
   0,
   0,
   0,
   18.29426,
   16.60353,
   16.05231,
   16.48263,
   14.48014,
   13.36686,
   11.77587,
   11.73334,
   10.42448,
   9.574395};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3021,data_copy_fy3021,data_copy_felx3021,data_copy_fehx3021,data_copy_fely3021,data_copy_fehy3021);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat4_2016_pass_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3021 = new TH1F("Graph_data_copy3021","tqq in cat4_2016_pass_cat4",100,28.1,212.9);
   Graph_data_copy3021->SetMinimum(0);
   Graph_data_copy3021->SetMaximum(604.0048);
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
   entry=leg->AddEntry("htotpass_cat4_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat4_2016_prefit_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"600 < p_{T} < 675 GeV");
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
   
   TH1F *htotpass_cat4_2016_prefit_copy__85 = new TH1F("htotpass_cat4_2016_prefit_copy__85","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(1,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(2,449.8675);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(3,463.2796);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(4,467.0431);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(5,495.2473);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(6,530.798);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(7,572.9741);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(8,531.2951);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(9,449.2497);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(10,372.7867);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(11,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(12,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(13,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(14,292.1521);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(15,269.3306);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(16,244.4553);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(17,227.4333);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(18,197.1437);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(19,175.2223);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(20,150.2514);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(21,127.1798);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(22,105.8564);
   htotpass_cat4_2016_prefit_copy__85->SetBinContent(23,84.33663);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(1,7.289565e-07);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(2,14.91686);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(3,10.10344);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(4,11.30336);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(5,16.32493);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(6,25.04358);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(7,34.74598);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(8,38.62774);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(9,28.25784);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(10,19.01514);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(11,7.289565e-07);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(12,7.289565e-07);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(13,7.289565e-07);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(14,11.70573);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(15,6.110127);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(16,6.816572);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(17,5.080012);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(18,4.617117);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(19,5.021873);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(20,4.532066);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(21,4.525378);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(22,4.601877);
   htotpass_cat4_2016_prefit_copy__85->SetBinError(23,4.680597);
   htotpass_cat4_2016_prefit_copy__85->SetMaximum(859.4611);
   htotpass_cat4_2016_prefit_copy__85->SetEntries(92);
   htotpass_cat4_2016_prefit_copy__85->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit_copy__85->SetFillColor(ci);
   htotpass_cat4_2016_prefit_copy__85->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit_copy__85->SetLineColor(ci);
   htotpass_cat4_2016_prefit_copy__85->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_prefit_copy__85->SetMarkerColor(ci);
   htotpass_cat4_2016_prefit_copy__85->SetMarkerSize(0);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_prefit_copy__85->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit_copy__85->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_prefit_copy__85->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit_copy__85->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_prefit_copy__85->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_prefit_copy__85->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_prefit_copy__85->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit_copy__85->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit_copy__85->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit_copy__85->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit_copy__85->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit_copy__85->Draw("sameaxis");
   p12pass_cat4_2016_prefit->Modified();
   cpass_cat4_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_prefit
   TPad *p22pass_cat4_2016_prefit = new TPad("p22pass_cat4_2016_prefit", "p22pass_cat4_2016_prefit",0,0,1,0.3);
   p22pass_cat4_2016_prefit->Draw();
   p22pass_cat4_2016_prefit->cd();
   p22pass_cat4_2016_prefit->Range(13.7027,-10.81981,221.8108,8.579548);
   p22pass_cat4_2016_prefit->SetFillColor(0);
   p22pass_cat4_2016_prefit->SetBorderMode(0);
   p22pass_cat4_2016_prefit->SetBorderSize(2);
   p22pass_cat4_2016_prefit->SetTickx(1);
   p22pass_cat4_2016_prefit->SetTicky(1);
   p22pass_cat4_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat4_2016_prefit->SetTopMargin(0.05);
   p22pass_cat4_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat4_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat4_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_prefit__86 = new TH1F("iOneWithErrorspass_cat4_2016_prefit__86","",23,40,201);
   iOneWithErrorspass_cat4_2016_prefit__86->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_prefit__86->SetMaximum(7.609581);
   iOneWithErrorspass_cat4_2016_prefit__86->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit__86->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_prefit__86->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit__86->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_prefit__86->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit__86->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_prefit__86->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_prefit__86->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_prefit__86->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit__86->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit__86->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit__86->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit__86->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit__86->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_22 = new TH1F("hstack_stack_22","hstack",23,40,201);
   hstack_stack_22->SetMinimum(-63.33558);
   hstack_stack_22->SetMaximum(66.91513);
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
   
   
   TH1F *sigHistResidualwqqpass_cat4_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat4_2016_prefit_stack_1","wqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(2,0.1222367);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(3,7.757996e-08);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(4,0.256951);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(5,1.538891);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(6,2.996036);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(7,4.177903);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(8,1.242832);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(9,0.1758063);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(10,0.0961583);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(14,9.082223e-08);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(15,1.000706e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(16,1.03507e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(17,1.008046e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(18,1.147451e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(19,1.243018e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(20,1.410957e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(21,1.416072e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(22,1.593868e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(23,1.735384e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(1,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(2,1.32106);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(3,1.775107);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(4,7.412931);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(5,9.868742);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(6,15.55456);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(7,22.4935);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(8,12.41398);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(9,5.914855);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(10,0.6676942);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(11,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(12,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(13,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(14,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(15,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(16,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(17,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(18,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(19,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(20,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(21,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(22,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(23,2.861851e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat4_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat4_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat4_2016_prefit_stack_2","zqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(2,1.093651e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(3,1.113734e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(4,1.108909e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(5,0.4030069);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(6,1.756045);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(7,3.170023);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(8,5.209327);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(9,3.7612);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(10,1.14916);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(14,1.30384e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(15,1.436609e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(16,1.485941e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(17,1.447146e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(18,1.647276e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(19,1.784471e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(20,2.025563e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(21,2.032907e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(22,2.28815e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(23,2.491309e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(1,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(2,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(3,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(4,2.637908);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(5,8.949054);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(6,15.5208);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(7,23.80362);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(8,34.67093);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(9,25.67461);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(10,16.03469);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(11,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(12,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(13,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(14,0.448019);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(15,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(16,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(17,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(18,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(19,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(20,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(21,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(22,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(23,6.704295e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat4_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(2,0.009449527);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(3,0.0004300808);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(4,0.008046703);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(5,0.001042287);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(6,0.002314241);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(7,0.001075296);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(8,0.01118409);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(9,0.02906607);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(10,0.06957835);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(14,0.1965542);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(15,0.1111323);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(16,0.01109917);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(17,0.001385197);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(18,0.001850356);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(19,0.0009908335);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(20,0.0002989201);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(21,0.001017108);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(22,0.00030841);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(23,0.0006345454);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(1,1.14459e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(2,5.281028);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(3,0.01972966);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(4,4.435159);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(5,0.3865519);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(6,0.9447777);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(7,1.942224);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(8,6.528437);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(9,17.64753);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(10,36.28778);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(11,1.14459e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(12,1.14459e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(13,1.14459e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(14,63.53214);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(15,26.84726);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(16,8.828873);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(17,0.7154571);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(18,0.05115382);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(19,0.03910055);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(20,0.008462913);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(21,0.02546451);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(22,0.006860004);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(23,0.0129634);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_prefit__87 = new TH1F("iOneWithErrorsLinepass_cat4_2016_prefit__87","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__87->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fx3022[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fy3022[23] = {
   0,
   1.261255,
   -0.1998246,
   0.06585677,
   1.278713,
   2.825032,
   5.073054,
   4.29285,
   4.803384,
   3.336775,
   0,
   0,
   0,
   2.217612,
   0.3782173,
   0.7928545,
   2.544774,
   0.8286528,
   0.2622642,
   -0.9554597,
   0.8469141,
   0.2740157,
   0.7211457};
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_felx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fely3022[23] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fehx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fehy3022[23] = {
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
   1,
   1,
   1,
   1,
   1};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_prefit_fx3022,Graph_from_iRatiopass_cat4_2016_prefit_fy3022,Graph_from_iRatiopass_cat4_2016_prefit_felx3022,Graph_from_iRatiopass_cat4_2016_prefit_fehx3022,Graph_from_iRatiopass_cat4_2016_prefit_fely3022,Graph_from_iRatiopass_cat4_2016_prefit_fehy3022);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_prefit3022 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_prefit3022","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->SetMinimum(-2.758311);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->SetMaximum(6.875905);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_prefit3022);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_prefit_copy__88 = new TH1F("iOneWithErrorspass_cat4_2016_prefit_copy__88","",23,40,201);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetMaximum(7.609581);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetEntries(184);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__88->Draw("sameaxis");
   p22pass_cat4_2016_prefit->Modified();
   cpass_cat4_2016_prefit->cd();
   cpass_cat4_2016_prefit->Modified();
   cpass_cat4_2016_prefit->cd();
   cpass_cat4_2016_prefit->SetSelected(cpass_cat4_2016_prefit);
}
