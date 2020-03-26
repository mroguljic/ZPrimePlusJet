void mlfit_pass_cat2_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat2_2016_prefit/cpass_cat2_2016_prefit
//=========  (Wed Sep  4 11:54:13 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_prefit = new TCanvas("cpass_cat2_2016_prefit", "cpass_cat2_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_prefit->SetHighLightColor(2);
   cpass_cat2_2016_prefit->Range(0,0,1,1);
   cpass_cat2_2016_prefit->SetFillColor(0);
   cpass_cat2_2016_prefit->SetBorderMode(0);
   cpass_cat2_2016_prefit->SetBorderSize(2);
   cpass_cat2_2016_prefit->SetTickx(1);
   cpass_cat2_2016_prefit->SetTicky(1);
   cpass_cat2_2016_prefit->SetLeftMargin(0.16);
   cpass_cat2_2016_prefit->SetBottomMargin(0.13);
   cpass_cat2_2016_prefit->SetFrameFillStyle(0);
   cpass_cat2_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_prefit
   TPad *p12pass_cat2_2016_prefit = new TPad("p12pass_cat2_2016_prefit", "p12pass_cat2_2016_prefit",0,0.3,1,1);
   p12pass_cat2_2016_prefit->Draw();
   p12pass_cat2_2016_prefit->cd();
   p12pass_cat2_2016_prefit->Range(18.24324,-48.34218,197.973,2368.767);
   p12pass_cat2_2016_prefit->SetFillColor(0);
   p12pass_cat2_2016_prefit->SetBorderMode(0);
   p12pass_cat2_2016_prefit->SetBorderSize(2);
   p12pass_cat2_2016_prefit->SetTickx(1);
   p12pass_cat2_2016_prefit->SetTicky(1);
   p12pass_cat2_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat2_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat2_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat2_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_prefit__25 = new TH1F("htotpass_cat2_2016_prefit__25","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_prefit__25->SetBinContent(1,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinContent(2,1143.062);
   htotpass_cat2_2016_prefit__25->SetBinContent(3,1238.2);
   htotpass_cat2_2016_prefit__25->SetBinContent(4,1290.12);
   htotpass_cat2_2016_prefit__25->SetBinContent(5,1313.747);
   htotpass_cat2_2016_prefit__25->SetBinContent(6,1363.692);
   htotpass_cat2_2016_prefit__25->SetBinContent(7,1418.037);
   htotpass_cat2_2016_prefit__25->SetBinContent(8,1383.43);
   htotpass_cat2_2016_prefit__25->SetBinContent(9,1233.951);
   htotpass_cat2_2016_prefit__25->SetBinContent(10,1055.496);
   htotpass_cat2_2016_prefit__25->SetBinContent(11,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinContent(12,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinContent(13,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinContent(14,689.7332);
   htotpass_cat2_2016_prefit__25->SetBinContent(15,592.1177);
   htotpass_cat2_2016_prefit__25->SetBinContent(16,506.5861);
   htotpass_cat2_2016_prefit__25->SetBinContent(17,415.8843);
   htotpass_cat2_2016_prefit__25->SetBinContent(18,336.3597);
   htotpass_cat2_2016_prefit__25->SetBinContent(19,262.2449);
   htotpass_cat2_2016_prefit__25->SetBinContent(20,203.9261);
   htotpass_cat2_2016_prefit__25->SetBinContent(21,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinContent(22,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinContent(23,7.36664e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(1,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(2,32.6924);
   htotpass_cat2_2016_prefit__25->SetBinError(3,22.64917);
   htotpass_cat2_2016_prefit__25->SetBinError(4,19.04827);
   htotpass_cat2_2016_prefit__25->SetBinError(5,22.77981);
   htotpass_cat2_2016_prefit__25->SetBinError(6,36.5702);
   htotpass_cat2_2016_prefit__25->SetBinError(7,47.91212);
   htotpass_cat2_2016_prefit__25->SetBinError(8,73.24135);
   htotpass_cat2_2016_prefit__25->SetBinError(9,48.22679);
   htotpass_cat2_2016_prefit__25->SetBinError(10,33.80688);
   htotpass_cat2_2016_prefit__25->SetBinError(11,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(12,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(13,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(14,17.52768);
   htotpass_cat2_2016_prefit__25->SetBinError(15,13.47576);
   htotpass_cat2_2016_prefit__25->SetBinError(16,11.41906);
   htotpass_cat2_2016_prefit__25->SetBinError(17,9.258349);
   htotpass_cat2_2016_prefit__25->SetBinError(18,9.102739);
   htotpass_cat2_2016_prefit__25->SetBinError(19,7.738256);
   htotpass_cat2_2016_prefit__25->SetBinError(20,8.015727);
   htotpass_cat2_2016_prefit__25->SetBinError(21,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(22,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetBinError(23,1.259815e-06);
   htotpass_cat2_2016_prefit__25->SetMinimum(0);
   htotpass_cat2_2016_prefit__25->SetMaximum(2127.056);
   htotpass_cat2_2016_prefit__25->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__25->SetFillColor(ci);
   htotpass_cat2_2016_prefit__25->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__25->SetLineColor(ci);
   htotpass_cat2_2016_prefit__25->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_prefit__25->SetMarkerColor(ci);
   htotpass_cat2_2016_prefit__25->SetMarkerSize(0);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_prefit__25->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__25->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_prefit__25->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__25->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_prefit__25->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_prefit__25->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_prefit__25->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__25->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__25->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__25->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__25->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__25->Draw("");
   
   TH1F *htot_linepass_cat2_2016_prefit__26 = new TH1F("htot_linepass_cat2_2016_prefit__26","wqq in cat2_2016_pass_cat2",23,40,201);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(1,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(2,1143.062);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(3,1238.2);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(4,1290.12);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(5,1313.747);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(6,1363.692);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(7,1418.037);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(8,1383.43);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(9,1233.951);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(10,1055.496);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(11,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(12,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(13,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(14,689.7332);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(15,592.1177);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(16,506.5861);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(17,415.8843);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(18,336.3597);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(19,262.2449);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(20,203.9261);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(21,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(22,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinContent(23,7.36664e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(1,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(2,32.6924);
   htot_linepass_cat2_2016_prefit__26->SetBinError(3,22.64917);
   htot_linepass_cat2_2016_prefit__26->SetBinError(4,19.04827);
   htot_linepass_cat2_2016_prefit__26->SetBinError(5,22.77981);
   htot_linepass_cat2_2016_prefit__26->SetBinError(6,36.5702);
   htot_linepass_cat2_2016_prefit__26->SetBinError(7,47.91212);
   htot_linepass_cat2_2016_prefit__26->SetBinError(8,73.24135);
   htot_linepass_cat2_2016_prefit__26->SetBinError(9,48.22679);
   htot_linepass_cat2_2016_prefit__26->SetBinError(10,33.80688);
   htot_linepass_cat2_2016_prefit__26->SetBinError(11,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(12,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(13,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(14,17.52768);
   htot_linepass_cat2_2016_prefit__26->SetBinError(15,13.47576);
   htot_linepass_cat2_2016_prefit__26->SetBinError(16,11.41906);
   htot_linepass_cat2_2016_prefit__26->SetBinError(17,9.258349);
   htot_linepass_cat2_2016_prefit__26->SetBinError(18,9.102739);
   htot_linepass_cat2_2016_prefit__26->SetBinError(19,7.738256);
   htot_linepass_cat2_2016_prefit__26->SetBinError(20,8.015727);
   htot_linepass_cat2_2016_prefit__26->SetBinError(21,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(22,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetBinError(23,1.259815e-06);
   htot_linepass_cat2_2016_prefit__26->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_prefit__26->SetFillColor(ci);
   htot_linepass_cat2_2016_prefit__26->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_prefit__26->SetLineColor(ci);
   htot_linepass_cat2_2016_prefit__26->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat2_2016_prefit__26->SetMarkerColor(ci);
   htot_linepass_cat2_2016_prefit__26->SetMarkerSize(0);
   htot_linepass_cat2_2016_prefit__26->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat2_2016_prefit__26->GetXaxis()->SetRange(2,20);
   htot_linepass_cat2_2016_prefit__26->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_prefit__26->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_prefit__26->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_prefit__26->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_prefit__26->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat2_2016_prefit__26->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_prefit__26->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat2_2016_prefit__26->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat2_2016_prefit__26->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat2_2016_prefit__26->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_prefit__26->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_prefit__26->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_prefit__26->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_prefit__26->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_prefit__26->Draw("histsame");
   
   TH1F *qcd__27 = new TH1F("qcd__27","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__27->SetBinContent(2,1133.911);
   qcd__27->SetBinContent(3,1223.727);
   qcd__27->SetBinContent(4,1243.747);
   qcd__27->SetBinContent(5,1226.632);
   qcd__27->SetBinContent(6,1170.066);
   qcd__27->SetBinContent(7,1116.215);
   qcd__27->SetBinContent(8,1071.476);
   qcd__27->SetBinContent(9,1022.699);
   qcd__27->SetBinContent(10,958.0401);
   qcd__27->SetBinContent(14,659.73);
   qcd__27->SetBinContent(15,570.9091);
   qcd__27->SetBinContent(16,490.3837);
   qcd__27->SetBinContent(17,405.9266);
   qcd__27->SetBinContent(18,326.7383);
   qcd__27->SetBinContent(19,260.0452);
   qcd__27->SetBinContent(20,198.4477);
   qcd__27->SetBinError(2,32.43447);
   qcd__27->SetBinError(3,21.30886);
   qcd__27->SetBinError(4,16.00077);
   qcd__27->SetBinError(5,13.89325);
   qcd__27->SetBinError(6,12.89977);
   qcd__27->SetBinError(7,12.40189);
   qcd__27->SetBinError(8,12.05488);
   qcd__27->SetBinError(9,11.60088);
   qcd__27->SetBinError(10,10.907);
   qcd__27->SetBinError(14,8.28669);
   qcd__27->SetBinError(15,7.899297);
   qcd__27->SetBinError(16,7.799241);
   qcd__27->SetBinError(17,7.709788);
   qcd__27->SetBinError(18,7.637328);
   qcd__27->SetBinError(19,7.654955);
   qcd__27->SetBinError(20,7.50324);
   qcd__27->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__27->SetLineColor(ci);
   qcd__27->SetLineStyle(2);
   qcd__27->SetLineWidth(2);
   qcd__27->GetXaxis()->SetTitle("x");
   qcd__27->GetXaxis()->SetLabelFont(42);
   qcd__27->GetXaxis()->SetLabelSize(0.035);
   qcd__27->GetXaxis()->SetTitleSize(0.035);
   qcd__27->GetXaxis()->SetTitleFont(42);
   qcd__27->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__27->GetYaxis()->SetLabelFont(42);
   qcd__27->GetYaxis()->SetLabelSize(0.035);
   qcd__27->GetYaxis()->SetTitleSize(0.035);
   qcd__27->GetYaxis()->SetTitleOffset(0);
   qcd__27->GetYaxis()->SetTitleFont(42);
   qcd__27->GetZaxis()->SetLabelFont(42);
   qcd__27->GetZaxis()->SetLabelSize(0.035);
   qcd__27->GetZaxis()->SetTitleSize(0.035);
   qcd__27->GetZaxis()->SetTitleFont(42);
   qcd__27->Draw("hist sames");
   
   TH1F *htotpass_cat2_2016_prefit__28 = new TH1F("htotpass_cat2_2016_prefit__28","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_prefit__28->SetBinContent(1,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinContent(2,1143.062);
   htotpass_cat2_2016_prefit__28->SetBinContent(3,1238.2);
   htotpass_cat2_2016_prefit__28->SetBinContent(4,1290.12);
   htotpass_cat2_2016_prefit__28->SetBinContent(5,1313.747);
   htotpass_cat2_2016_prefit__28->SetBinContent(6,1363.692);
   htotpass_cat2_2016_prefit__28->SetBinContent(7,1418.037);
   htotpass_cat2_2016_prefit__28->SetBinContent(8,1383.43);
   htotpass_cat2_2016_prefit__28->SetBinContent(9,1233.951);
   htotpass_cat2_2016_prefit__28->SetBinContent(10,1055.496);
   htotpass_cat2_2016_prefit__28->SetBinContent(11,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinContent(12,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinContent(13,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinContent(14,689.7332);
   htotpass_cat2_2016_prefit__28->SetBinContent(15,592.1177);
   htotpass_cat2_2016_prefit__28->SetBinContent(16,506.5861);
   htotpass_cat2_2016_prefit__28->SetBinContent(17,415.8843);
   htotpass_cat2_2016_prefit__28->SetBinContent(18,336.3597);
   htotpass_cat2_2016_prefit__28->SetBinContent(19,262.2449);
   htotpass_cat2_2016_prefit__28->SetBinContent(20,203.9261);
   htotpass_cat2_2016_prefit__28->SetBinContent(21,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinContent(22,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinContent(23,7.36664e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(1,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(2,32.6924);
   htotpass_cat2_2016_prefit__28->SetBinError(3,22.64917);
   htotpass_cat2_2016_prefit__28->SetBinError(4,19.04827);
   htotpass_cat2_2016_prefit__28->SetBinError(5,22.77981);
   htotpass_cat2_2016_prefit__28->SetBinError(6,36.5702);
   htotpass_cat2_2016_prefit__28->SetBinError(7,47.91212);
   htotpass_cat2_2016_prefit__28->SetBinError(8,73.24135);
   htotpass_cat2_2016_prefit__28->SetBinError(9,48.22679);
   htotpass_cat2_2016_prefit__28->SetBinError(10,33.80688);
   htotpass_cat2_2016_prefit__28->SetBinError(11,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(12,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(13,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(14,17.52768);
   htotpass_cat2_2016_prefit__28->SetBinError(15,13.47576);
   htotpass_cat2_2016_prefit__28->SetBinError(16,11.41906);
   htotpass_cat2_2016_prefit__28->SetBinError(17,9.258349);
   htotpass_cat2_2016_prefit__28->SetBinError(18,9.102739);
   htotpass_cat2_2016_prefit__28->SetBinError(19,7.738256);
   htotpass_cat2_2016_prefit__28->SetBinError(20,8.015727);
   htotpass_cat2_2016_prefit__28->SetBinError(21,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(22,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetBinError(23,1.259815e-06);
   htotpass_cat2_2016_prefit__28->SetMinimum(0);
   htotpass_cat2_2016_prefit__28->SetMaximum(2127.056);
   htotpass_cat2_2016_prefit__28->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__28->SetFillColor(ci);
   htotpass_cat2_2016_prefit__28->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__28->SetLineColor(ci);
   htotpass_cat2_2016_prefit__28->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_prefit__28->SetMarkerColor(ci);
   htotpass_cat2_2016_prefit__28->SetMarkerSize(0);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_prefit__28->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__28->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_prefit__28->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__28->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_prefit__28->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_prefit__28->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_prefit__28->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__28->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__28->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__28->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__28->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__28->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis7[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_7 = new TH1F("hstackMC_stack_7","hstackMC",23, xAxis7);
   hstackMC_stack_7->SetMinimum(-96.45846);
   hstackMC_stack_7->SetMaximum(327.7617);
   hstackMC_stack_7->SetDirectory(0);
   hstackMC_stack_7->SetStats(0);
   hstackMC_stack_7->SetLineStyle(0);
   hstackMC_stack_7->SetMarkerStyle(20);
   hstackMC_stack_7->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_7->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_7->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_7->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_7->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_7);
   
   Double_t xAxis8[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat2_2016_pass_cat2",23, xAxis8);
   tqq_stack_1->SetBinContent(2,7.311898);
   tqq_stack_1->SetBinContent(3,11.74802);
   tqq_stack_1->SetBinContent(4,13.98404);
   tqq_stack_1->SetBinContent(5,21.66475);
   tqq_stack_1->SetBinContent(6,31.76628);
   tqq_stack_1->SetBinContent(7,37.98007);
   tqq_stack_1->SetBinContent(8,35.21215);
   tqq_stack_1->SetBinContent(9,27.66987);
   tqq_stack_1->SetBinContent(10,33.50956);
   tqq_stack_1->SetBinContent(14,30.00323);
   tqq_stack_1->SetBinContent(15,21.20855);
   tqq_stack_1->SetBinContent(16,16.20237);
   tqq_stack_1->SetBinContent(17,9.957702);
   tqq_stack_1->SetBinContent(18,9.621358);
   tqq_stack_1->SetBinContent(19,2.19973);
   tqq_stack_1->SetBinContent(20,5.478358);
   tqq_stack_1->SetBinError(2,3.764023);
   tqq_stack_1->SetBinError(3,6.047652);
   tqq_stack_1->SetBinError(4,7.198713);
   tqq_stack_1->SetBinError(5,11.15259);
   tqq_stack_1->SetBinError(6,16.35266);
   tqq_stack_1->SetBinError(7,19.5514);
   tqq_stack_1->SetBinError(8,18.12653);
   tqq_stack_1->SetBinError(9,14.24391);
   tqq_stack_1->SetBinError(10,17.25007);
   tqq_stack_1->SetBinError(14,15.44508);
   tqq_stack_1->SetBinError(15,10.91775);
   tqq_stack_1->SetBinError(16,8.340665);
   tqq_stack_1->SetBinError(17,5.126031);
   tqq_stack_1->SetBinError(18,4.952887);
   tqq_stack_1->SetBinError(19,1.132378);
   tqq_stack_1->SetBinError(20,2.820153);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat2_2016_pass_cat2",23,40,201);
   wqq_stack_2->SetBinContent(1,2.797823e-06);
   wqq_stack_2->SetBinContent(2,1.839592);
   wqq_stack_2->SetBinContent(3,2.725741);
   wqq_stack_2->SetBinContent(4,20.10753);
   wqq_stack_2->SetBinContent(5,34.22224);
   wqq_stack_2->SetBinContent(6,108.9634);
   wqq_stack_2->SetBinContent(7,133.6663);
   wqq_stack_2->SetBinContent(8,71.70438);
   wqq_stack_2->SetBinContent(9,21.13939);
   wqq_stack_2->SetBinContent(10,5.320306);
   wqq_stack_2->SetBinContent(11,2.797823e-06);
   wqq_stack_2->SetBinContent(12,2.797823e-06);
   wqq_stack_2->SetBinContent(13,2.797823e-06);
   wqq_stack_2->SetBinContent(14,2.797823e-06);
   wqq_stack_2->SetBinContent(15,2.797823e-06);
   wqq_stack_2->SetBinContent(16,2.797823e-06);
   wqq_stack_2->SetBinContent(17,2.797823e-06);
   wqq_stack_2->SetBinContent(18,2.797823e-06);
   wqq_stack_2->SetBinContent(19,2.797823e-06);
   wqq_stack_2->SetBinContent(20,2.797823e-06);
   wqq_stack_2->SetBinContent(21,2.797823e-06);
   wqq_stack_2->SetBinContent(22,2.797823e-06);
   wqq_stack_2->SetBinContent(23,2.797823e-06);
   wqq_stack_2->SetBinError(1,4.458635e-07);
   wqq_stack_2->SetBinError(2,0.4314751);
   wqq_stack_2->SetBinError(3,3.877748);
   wqq_stack_2->SetBinError(4,5.50788);
   wqq_stack_2->SetBinError(5,10.42783);
   wqq_stack_2->SetBinError(6,20.9348);
   wqq_stack_2->SetBinError(7,23.38531);
   wqq_stack_2->SetBinError(8,16.09592);
   wqq_stack_2->SetBinError(9,10.74971);
   wqq_stack_2->SetBinError(10,3.363846);
   wqq_stack_2->SetBinError(11,4.458635e-07);
   wqq_stack_2->SetBinError(12,4.458635e-07);
   wqq_stack_2->SetBinError(13,4.458635e-07);
   wqq_stack_2->SetBinError(14,4.458635e-07);
   wqq_stack_2->SetBinError(15,4.458635e-07);
   wqq_stack_2->SetBinError(16,4.458635e-07);
   wqq_stack_2->SetBinError(17,4.458635e-07);
   wqq_stack_2->SetBinError(18,4.458635e-07);
   wqq_stack_2->SetBinError(19,4.458635e-07);
   wqq_stack_2->SetBinError(20,4.458635e-07);
   wqq_stack_2->SetBinError(21,4.458635e-07);
   wqq_stack_2->SetBinError(22,4.458635e-07);
   wqq_stack_2->SetBinError(23,4.458635e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat2_2016_pass_cat2",23,40,201);
   zqq_stack_3->SetBinContent(1,4.568817e-06);
   zqq_stack_3->SetBinContent(2,4.568817e-06);
   zqq_stack_3->SetBinContent(3,4.568817e-06);
   zqq_stack_3->SetBinContent(4,12.28101);
   zqq_stack_3->SetBinContent(5,31.22824);
   zqq_stack_3->SetBinContent(6,52.8965);
   zqq_stack_3->SetBinContent(7,130.1757);
   zqq_stack_3->SetBinContent(8,205.0382);
   zqq_stack_3->SetBinContent(9,162.4422);
   zqq_stack_3->SetBinContent(10,58.62625);
   zqq_stack_3->SetBinContent(11,4.568817e-06);
   zqq_stack_3->SetBinContent(12,4.568817e-06);
   zqq_stack_3->SetBinContent(13,4.568817e-06);
   zqq_stack_3->SetBinContent(14,4.568817e-06);
   zqq_stack_3->SetBinContent(15,4.568817e-06);
   zqq_stack_3->SetBinContent(16,4.568817e-06);
   zqq_stack_3->SetBinContent(17,4.568817e-06);
   zqq_stack_3->SetBinContent(18,4.568817e-06);
   zqq_stack_3->SetBinContent(19,4.568817e-06);
   zqq_stack_3->SetBinContent(20,4.568817e-06);
   zqq_stack_3->SetBinContent(21,4.568817e-06);
   zqq_stack_3->SetBinContent(22,4.568817e-06);
   zqq_stack_3->SetBinContent(23,4.568817e-06);
   zqq_stack_3->SetBinError(1,1.178278e-06);
   zqq_stack_3->SetBinError(2,1.563392);
   zqq_stack_3->SetBinError(3,2.703032);
   zqq_stack_3->SetBinError(4,4.965236);
   zqq_stack_3->SetBinError(5,9.632113);
   zqq_stack_3->SetBinError(6,21.57081);
   zqq_stack_3->SetBinError(7,34.82291);
   zqq_stack_3->SetBinError(8,68.05384);
   zqq_stack_3->SetBinError(9,43.27583);
   zqq_stack_3->SetBinError(10,26.74065);
   zqq_stack_3->SetBinError(11,1.178278e-06);
   zqq_stack_3->SetBinError(12,1.178278e-06);
   zqq_stack_3->SetBinError(13,1.178278e-06);
   zqq_stack_3->SetBinError(14,1.178278e-06);
   zqq_stack_3->SetBinError(15,1.178278e-06);
   zqq_stack_3->SetBinError(16,1.178278e-06);
   zqq_stack_3->SetBinError(17,1.178278e-06);
   zqq_stack_3->SetBinError(18,1.178278e-06);
   zqq_stack_3->SetBinError(19,1.178278e-06);
   zqq_stack_3->SetBinError(20,1.178278e-06);
   zqq_stack_3->SetBinError(21,1.178278e-06);
   zqq_stack_3->SetBinError(22,1.178278e-06);
   zqq_stack_3->SetBinError(23,1.178278e-06);
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
   
   TH1F *hsigpass_cat2_2016_prefit_stack_4 = new TH1F("hsigpass_cat2_2016_prefit_stack_4","hqq125 in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(1,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(2,0.0116422);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(3,0.1670045);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(4,0.0597671);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(5,0.1861342);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(6,0.5024967);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(7,0.5847712);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(8,0.1992326);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(9,1.696406);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(10,4.099107);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(11,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(12,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(13,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(14,4.597333);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(15,1.271443);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(16,0.2468058);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(17,0.1905453);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(18,0.02591683);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(19,0.02961403);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(20,0.02206332);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(21,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(22,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(23,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(1,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(2,0.0385066);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(3,4.258686);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(4,0.9650731);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(5,4.698174);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(6,10.46623);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(7,10.00954);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(8,6.251065);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(9,41.39088);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(10,100.5576);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(11,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(12,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(13,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(14,80.50167);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(15,19.87632);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(16,3.545236);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(17,2.305245);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(18,0.1906603);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(19,0.1188682);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(20,0.07371194);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(21,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(22,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(23,1.980143e-06);
   hsigpass_cat2_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_prefit_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3007[23] = {
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
   Double_t data_copy_fy3007[23] = {
   0,
   1202,
   1215,
   1189,
   1243,
   1333,
   1335,
   1244,
   1127,
   1044,
   0,
   0,
   0,
   697,
   593,
   528,
   424,
   337,
   290,
   198,
   0,
   0,
   0};
   Double_t data_copy_felx3007[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3007[23] = {
   1.841055,
   35.68026,
   35.86719,
   35.49231,
   36.26644,
   37.52021,
   37.54759,
   36.28062,
   34.5815,
   33.32203,
   1.841055,
   1.841055,
   1.841055,
   27.41398,
   25.36583,
   23.99328,
   21.60792,
   19.37615,
   18.04936,
   15.09528,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3007[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3007[23] = {
   0,
   34.6658,
   34.8528,
   34.47777,
   35.25222,
   36.50648,
   36.53386,
   35.2664,
   33.56656,
   32.30651,
   0,
   0,
   0,
   26.39499,
   24.34525,
   22.97147,
   20.58358,
   18.34884,
   17.01993,
   14.05965,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3007,data_copy_fy3007,data_copy_felx3007,data_copy_fehx3007,data_copy_fely3007,data_copy_fehy3007);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat2_2016_pass_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3007 = new TH1F("Graph_data_copy3007","tqq in cat2_2016_pass_cat2",100,28.1,212.9);
   Graph_data_copy3007->SetMinimum(0);
   Graph_data_copy3007->SetMaximum(1508.871);
   Graph_data_copy3007->SetDirectory(0);
   Graph_data_copy3007->SetStats(0);
   Graph_data_copy3007->SetLineStyle(0);
   Graph_data_copy3007->SetMarkerStyle(20);
   Graph_data_copy3007->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3007->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3007->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3007->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3007->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3007);
   
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
   entry=leg->AddEntry("htotpass_cat2_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat2_2016_prefit_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"500 < p_{T} < 550 GeV");
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
   
   TH1F *htotpass_cat2_2016_prefit_copy__29 = new TH1F("htotpass_cat2_2016_prefit_copy__29","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(1,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(2,1143.062);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(3,1238.2);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(4,1290.12);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(5,1313.747);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(6,1363.692);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(7,1418.037);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(8,1383.43);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(9,1233.951);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(10,1055.496);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(11,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(12,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(13,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(14,689.7332);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(15,592.1177);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(16,506.5861);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(17,415.8843);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(18,336.3597);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(19,262.2449);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(20,203.9261);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(21,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(22,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinContent(23,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(1,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(2,32.6924);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(3,22.64917);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(4,19.04827);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(5,22.77981);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(6,36.5702);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(7,47.91212);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(8,73.24135);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(9,48.22679);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(10,33.80688);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(11,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(12,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(13,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(14,17.52768);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(15,13.47576);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(16,11.41906);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(17,9.258349);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(18,9.102739);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(19,7.738256);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(20,8.015727);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(21,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(22,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetBinError(23,1.259815e-06);
   htotpass_cat2_2016_prefit_copy__29->SetMaximum(2127.056);
   htotpass_cat2_2016_prefit_copy__29->SetEntries(92);
   htotpass_cat2_2016_prefit_copy__29->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit_copy__29->SetFillColor(ci);
   htotpass_cat2_2016_prefit_copy__29->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit_copy__29->SetLineColor(ci);
   htotpass_cat2_2016_prefit_copy__29->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_prefit_copy__29->SetMarkerColor(ci);
   htotpass_cat2_2016_prefit_copy__29->SetMarkerSize(0);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_prefit_copy__29->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit_copy__29->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_prefit_copy__29->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit_copy__29->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_prefit_copy__29->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_prefit_copy__29->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_prefit_copy__29->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit_copy__29->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit_copy__29->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit_copy__29->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit_copy__29->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit_copy__29->Draw("sameaxis");
   p12pass_cat2_2016_prefit->Modified();
   cpass_cat2_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_prefit
   TPad *p22pass_cat2_2016_prefit = new TPad("p22pass_cat2_2016_prefit", "p22pass_cat2_2016_prefit",0,0,1,0.3);
   p22pass_cat2_2016_prefit->Draw();
   p22pass_cat2_2016_prefit->cd();
   p22pass_cat2_2016_prefit->Range(18.24324,-10.64139,197.973,8.163254);
   p22pass_cat2_2016_prefit->SetFillColor(0);
   p22pass_cat2_2016_prefit->SetBorderMode(0);
   p22pass_cat2_2016_prefit->SetBorderSize(2);
   p22pass_cat2_2016_prefit->SetTickx(1);
   p22pass_cat2_2016_prefit->SetTicky(1);
   p22pass_cat2_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat2_2016_prefit->SetTopMargin(0.05);
   p22pass_cat2_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat2_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat2_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_prefit__30 = new TH1F("iOneWithErrorspass_cat2_2016_prefit__30","",23,40,201);
   iOneWithErrorspass_cat2_2016_prefit__30->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_prefit__30->SetMaximum(7.223021);
   iOneWithErrorspass_cat2_2016_prefit__30->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit__30->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_prefit__30->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit__30->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_prefit__30->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit__30->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_prefit__30->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_prefit__30->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_prefit__30->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit__30->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit__30->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit__30->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit__30->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit__30->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_8 = new TH1F("hstack_stack_8","hstack",23,40,201);
   hstack_stack_8->SetMinimum(-100.4307);
   hstack_stack_8->SetMaximum(105.7187);
   hstack_stack_8->SetDirectory(0);
   hstack_stack_8->SetStats(0);
   hstack_stack_8->SetLineStyle(0);
   hstack_stack_8->SetMarkerStyle(20);
   hstack_stack_8->GetXaxis()->SetLabelFont(42);
   hstack_stack_8->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_8->GetXaxis()->SetTitleFont(42);
   hstack_stack_8->GetYaxis()->SetLabelFont(42);
   hstack_stack_8->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_8->GetYaxis()->SetTitleFont(42);
   hstack_stack_8->GetZaxis()->SetLabelFont(42);
   hstack_stack_8->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_8);
   
   
   TH1F *sigHistResidualwqqpass_cat2_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat2_2016_prefit_stack_1","wqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(2,0.05306647);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(3,0.07820723);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(4,0.5832028);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(5,0.9707825);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(6,2.984769);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(7,3.658697);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(8,2.033221);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(9,0.6297752);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(10,0.1646822);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(14,1.059982e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(15,1.149227e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(16,1.217956e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(17,1.35925e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(18,1.524795e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(19,1.643851e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(20,1.989965e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(1,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(2,0.4314751);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(3,3.877748);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(4,5.50788);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(5,10.42783);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(6,20.9348);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(7,23.38531);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(8,16.09592);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(9,10.74971);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(10,3.363846);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(11,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(12,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(13,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(14,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(15,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(16,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(17,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(18,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(19,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(20,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(21,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(22,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(23,4.458635e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat2_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat2_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat2_2016_prefit_stack_2","zqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(2,1.317961e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(3,1.310889e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(4,0.3562009);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(5,0.8858515);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(6,1.448962);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(7,3.563153);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(8,5.813982);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(9,4.839405);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(10,1.814688);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(14,1.730941e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(15,1.876677e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(16,1.98891e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(17,2.219642e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(18,2.489976e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(19,2.684393e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(20,3.249594e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(1,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(2,1.563392);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(3,2.703032);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(4,4.965236);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(5,9.632113);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(6,21.57081);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(7,34.82291);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(8,68.05384);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(9,43.27583);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(10,26.74065);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(11,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(12,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(13,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(14,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(15,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(16,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(17,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(18,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(19,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(20,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(21,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(22,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(23,1.178278e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat2_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3","hqq125 in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(2,0.0003358411);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(3,0.004791709);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(4,0.001733497);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(5,0.005280069);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(6,0.01376459);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(7,0.01600628);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(8,0.00564936);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(9,0.05053857);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(10,0.1268818);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(14,0.1741745);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(15,0.05222552);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(16,0.01074402);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(17,0.009257151);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(18,0.00141245);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(19,0.001739962);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(20,0.001569265);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(1,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(2,0.0385066);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(3,4.258686);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(4,0.9650731);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(5,4.698174);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(6,10.46623);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(7,10.00954);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(8,6.251065);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(9,41.39088);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(10,100.5576);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(11,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(12,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(13,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(14,80.50167);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(15,19.87632);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(16,3.545236);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(17,2.305245);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(18,0.1906603);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(19,0.1188682);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(20,0.07371194);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(21,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(22,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(23,1.980143e-06);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_prefit__31 = new TH1F("iOneWithErrorsLinepass_cat2_2016_prefit__31","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__31->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fx3008[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fy3008[23] = {
   0,
   1.703392,
   -0.587463,
   -1.993486,
   -0.1502461,
   3.495928,
   4.815348,
   3.784727,
   2.21595,
   1.574043,
   0,
   0,
   0,
   0.2650759,
   0.03478396,
   0.8924987,
   0.3755901,
   0.03304524,
   1.537733,
   -0.4214959,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_felx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fely3008[23] = {
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
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fehx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fehy3008[23] = {
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
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_prefit_fx3008,Graph_from_iRatiopass_cat2_2016_prefit_fy3008,Graph_from_iRatiopass_cat2_2016_prefit_felx3008,Graph_from_iRatiopass_cat2_2016_prefit_fehx3008,Graph_from_iRatiopass_cat2_2016_prefit_fely3008,Graph_from_iRatiopass_cat2_2016_prefit_fehy3008);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_prefit3008 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_prefit3008","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->SetMinimum(-3.874369);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->SetMaximum(6.696231);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_prefit3008);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_prefit_copy__32 = new TH1F("iOneWithErrorspass_cat2_2016_prefit_copy__32","",23,40,201);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetMaximum(7.223021);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetEntries(184);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__32->Draw("sameaxis");
   p22pass_cat2_2016_prefit->Modified();
   cpass_cat2_2016_prefit->cd();
   cpass_cat2_2016_prefit->Modified();
   cpass_cat2_2016_prefit->cd();
   cpass_cat2_2016_prefit->SetSelected(cpass_cat2_2016_prefit);
}
