void mlfit_pass_cat2_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat2_2016_fit_s/cpass_cat2_2016_fit_s
//=========  (Thu Sep 26 13:57:39 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_fit_s = new TCanvas("cpass_cat2_2016_fit_s", "cpass_cat2_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_fit_s->SetHighLightColor(2);
   cpass_cat2_2016_fit_s->Range(0,0,1,1);
   cpass_cat2_2016_fit_s->SetFillColor(0);
   cpass_cat2_2016_fit_s->SetBorderMode(0);
   cpass_cat2_2016_fit_s->SetBorderSize(2);
   cpass_cat2_2016_fit_s->SetTickx(1);
   cpass_cat2_2016_fit_s->SetTicky(1);
   cpass_cat2_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat2_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat2_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat2_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_fit_s
   TPad *p12pass_cat2_2016_fit_s = new TPad("p12pass_cat2_2016_fit_s", "p12pass_cat2_2016_fit_s",0,0.3,1,1);
   p12pass_cat2_2016_fit_s->Draw();
   p12pass_cat2_2016_fit_s->cd();
   p12pass_cat2_2016_fit_s->Range(18.24324,-45.18603,197.973,2214.116);
   p12pass_cat2_2016_fit_s->SetFillColor(0);
   p12pass_cat2_2016_fit_s->SetBorderMode(0);
   p12pass_cat2_2016_fit_s->SetBorderSize(2);
   p12pass_cat2_2016_fit_s->SetTickx(1);
   p12pass_cat2_2016_fit_s->SetTicky(1);
   p12pass_cat2_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat2_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_fit_s__33 = new TH1F("htotpass_cat2_2016_fit_s__33","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s__33->SetBinContent(1,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinContent(2,1183.441);
   htotpass_cat2_2016_fit_s__33->SetBinContent(3,1245.942);
   htotpass_cat2_2016_fit_s__33->SetBinContent(4,1260.412);
   htotpass_cat2_2016_fit_s__33->SetBinContent(5,1268.153);
   htotpass_cat2_2016_fit_s__33->SetBinContent(6,1304.191);
   htotpass_cat2_2016_fit_s__33->SetBinContent(7,1325.457);
   htotpass_cat2_2016_fit_s__33->SetBinContent(8,1283.363);
   htotpass_cat2_2016_fit_s__33->SetBinContent(9,1163.135);
   htotpass_cat2_2016_fit_s__33->SetBinContent(10,1040.448);
   htotpass_cat2_2016_fit_s__33->SetBinContent(11,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinContent(12,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinContent(13,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinContent(14,695.0619);
   htotpass_cat2_2016_fit_s__33->SetBinContent(15,602.0262);
   htotpass_cat2_2016_fit_s__33->SetBinContent(16,520.8408);
   htotpass_cat2_2016_fit_s__33->SetBinContent(17,430.6441);
   htotpass_cat2_2016_fit_s__33->SetBinContent(18,354.2275);
   htotpass_cat2_2016_fit_s__33->SetBinContent(19,277.701);
   htotpass_cat2_2016_fit_s__33->SetBinContent(20,221.0829);
   htotpass_cat2_2016_fit_s__33->SetBinContent(21,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinContent(22,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinContent(23,6.365017e-06);
   htotpass_cat2_2016_fit_s__33->SetBinError(1,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetBinError(2,14.76709);
   htotpass_cat2_2016_fit_s__33->SetBinError(3,13.28329);
   htotpass_cat2_2016_fit_s__33->SetBinError(4,14.97852);
   htotpass_cat2_2016_fit_s__33->SetBinError(5,17.81793);
   htotpass_cat2_2016_fit_s__33->SetBinError(6,27.43683);
   htotpass_cat2_2016_fit_s__33->SetBinError(7,34.41861);
   htotpass_cat2_2016_fit_s__33->SetBinError(8,38.35634);
   htotpass_cat2_2016_fit_s__33->SetBinError(9,32.7535);
   htotpass_cat2_2016_fit_s__33->SetBinError(10,24.65363);
   htotpass_cat2_2016_fit_s__33->SetBinError(11,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetBinError(12,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetBinError(13,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetBinError(14,12.90192);
   htotpass_cat2_2016_fit_s__33->SetBinError(15,10.26133);
   htotpass_cat2_2016_fit_s__33->SetBinError(16,8.585169);
   htotpass_cat2_2016_fit_s__33->SetBinError(17,6.394079);
   htotpass_cat2_2016_fit_s__33->SetBinError(18,5.770121);
   htotpass_cat2_2016_fit_s__33->SetBinError(19,4.311302);
   htotpass_cat2_2016_fit_s__33->SetBinError(20,4.353342);
   htotpass_cat2_2016_fit_s__33->SetBinError(21,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetBinError(22,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetBinError(23,8.264663e-07);
   htotpass_cat2_2016_fit_s__33->SetMinimum(0);
   htotpass_cat2_2016_fit_s__33->SetMaximum(1988.186);
   htotpass_cat2_2016_fit_s__33->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__33->SetFillColor(ci);
   htotpass_cat2_2016_fit_s__33->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__33->SetLineColor(ci);
   htotpass_cat2_2016_fit_s__33->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s__33->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s__33->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s__33->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__33->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s__33->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__33->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s__33->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s__33->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s__33->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__33->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__33->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__33->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__33->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__33->Draw("");
   
   TH1F *htot_linepass_cat2_2016_fit_s__34 = new TH1F("htot_linepass_cat2_2016_fit_s__34","wqq in cat2_2016_pass_cat2",23,40,201);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(1,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(2,1183.441);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(3,1245.942);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(4,1260.412);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(5,1268.153);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(6,1304.191);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(7,1325.457);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(8,1283.363);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(9,1163.135);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(10,1040.448);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(11,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(12,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(13,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(14,695.0619);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(15,602.0262);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(16,520.8408);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(17,430.6441);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(18,354.2275);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(19,277.701);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(20,221.0829);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(21,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(22,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinContent(23,6.365017e-06);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(1,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(2,14.76709);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(3,13.28329);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(4,14.97852);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(5,17.81793);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(6,27.43683);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(7,34.41861);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(8,38.35634);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(9,32.7535);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(10,24.65363);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(11,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(12,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(13,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(14,12.90192);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(15,10.26133);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(16,8.585169);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(17,6.394079);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(18,5.770121);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(19,4.311302);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(20,4.353342);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(21,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(22,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetBinError(23,8.264663e-07);
   htot_linepass_cat2_2016_fit_s__34->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_s__34->SetFillColor(ci);
   htot_linepass_cat2_2016_fit_s__34->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_fit_s__34->SetLineColor(ci);
   htot_linepass_cat2_2016_fit_s__34->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat2_2016_fit_s__34->SetMarkerColor(ci);
   htot_linepass_cat2_2016_fit_s__34->SetMarkerSize(0);
   htot_linepass_cat2_2016_fit_s__34->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat2_2016_fit_s__34->GetXaxis()->SetRange(2,20);
   htot_linepass_cat2_2016_fit_s__34->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_s__34->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_s__34->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_s__34->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_s__34->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat2_2016_fit_s__34->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_s__34->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat2_2016_fit_s__34->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat2_2016_fit_s__34->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat2_2016_fit_s__34->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_s__34->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_fit_s__34->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_fit_s__34->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_fit_s__34->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_fit_s__34->Draw("histsame");
   
   TH1F *qcd__35 = new TH1F("qcd__35","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__35->SetBinContent(2,1171.275);
   qcd__35->SetBinContent(3,1223.845);
   qcd__35->SetBinContent(4,1213.76);
   qcd__35->SetBinContent(5,1182.27);
   qcd__35->SetBinContent(6,1122.543);
   qcd__35->SetBinContent(7,1067.369);
   qcd__35->SetBinContent(8,1022.829);
   qcd__35->SetBinContent(9,970.6422);
   qcd__35->SetBinContent(10,921.748);
   qcd__35->SetBinContent(14,658.5206);
   qcd__35->SetBinContent(15,576.196);
   qcd__35->SetBinContent(16,501.1078);
   qcd__35->SetBinContent(17,418.5164);
   qcd__35->SetBinContent(18,342.5096);
   qcd__35->SetBinContent(19,275.0219);
   qcd__35->SetBinContent(20,214.4107);
   qcd__35->SetBinError(2,14.54845);
   qcd__35->SetBinError(3,12.56162);
   qcd__35->SetBinError(4,13.55951);
   qcd__35->SetBinError(5,14.60682);
   qcd__35->SetBinError(6,18.09594);
   qcd__35->SetBinError(7,19.60681);
   qcd__35->SetBinError(8,19.63582);
   qcd__35->SetBinError(9,18.63001);
   qcd__35->SetBinError(10,14.93261);
   qcd__35->SetBinError(14,8.858734);
   qcd__35->SetBinError(15,7.831506);
   qcd__35->SetBinError(16,6.931628);
   qcd__35->SetBinError(17,5.585073);
   qcd__35->SetBinError(18,4.924095);
   qcd__35->SetBinError(19,4.256101);
   qcd__35->SetBinError(20,4.002281);
   qcd__35->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__35->SetLineColor(ci);
   qcd__35->SetLineStyle(2);
   qcd__35->SetLineWidth(2);
   qcd__35->GetXaxis()->SetTitle("x");
   qcd__35->GetXaxis()->SetLabelFont(42);
   qcd__35->GetXaxis()->SetLabelSize(0.035);
   qcd__35->GetXaxis()->SetTitleSize(0.035);
   qcd__35->GetXaxis()->SetTitleFont(42);
   qcd__35->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__35->GetYaxis()->SetLabelFont(42);
   qcd__35->GetYaxis()->SetLabelSize(0.035);
   qcd__35->GetYaxis()->SetTitleSize(0.035);
   qcd__35->GetYaxis()->SetTitleOffset(0);
   qcd__35->GetYaxis()->SetTitleFont(42);
   qcd__35->GetZaxis()->SetLabelFont(42);
   qcd__35->GetZaxis()->SetLabelSize(0.035);
   qcd__35->GetZaxis()->SetTitleSize(0.035);
   qcd__35->GetZaxis()->SetTitleFont(42);
   qcd__35->Draw("hist sames");
   
   TH1F *htotpass_cat2_2016_fit_s__36 = new TH1F("htotpass_cat2_2016_fit_s__36","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s__36->SetBinContent(1,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinContent(2,1183.441);
   htotpass_cat2_2016_fit_s__36->SetBinContent(3,1245.942);
   htotpass_cat2_2016_fit_s__36->SetBinContent(4,1260.412);
   htotpass_cat2_2016_fit_s__36->SetBinContent(5,1268.153);
   htotpass_cat2_2016_fit_s__36->SetBinContent(6,1304.191);
   htotpass_cat2_2016_fit_s__36->SetBinContent(7,1325.457);
   htotpass_cat2_2016_fit_s__36->SetBinContent(8,1283.363);
   htotpass_cat2_2016_fit_s__36->SetBinContent(9,1163.135);
   htotpass_cat2_2016_fit_s__36->SetBinContent(10,1040.448);
   htotpass_cat2_2016_fit_s__36->SetBinContent(11,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinContent(12,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinContent(13,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinContent(14,695.0619);
   htotpass_cat2_2016_fit_s__36->SetBinContent(15,602.0262);
   htotpass_cat2_2016_fit_s__36->SetBinContent(16,520.8408);
   htotpass_cat2_2016_fit_s__36->SetBinContent(17,430.6441);
   htotpass_cat2_2016_fit_s__36->SetBinContent(18,354.2275);
   htotpass_cat2_2016_fit_s__36->SetBinContent(19,277.701);
   htotpass_cat2_2016_fit_s__36->SetBinContent(20,221.0829);
   htotpass_cat2_2016_fit_s__36->SetBinContent(21,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinContent(22,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinContent(23,6.365017e-06);
   htotpass_cat2_2016_fit_s__36->SetBinError(1,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetBinError(2,14.76709);
   htotpass_cat2_2016_fit_s__36->SetBinError(3,13.28329);
   htotpass_cat2_2016_fit_s__36->SetBinError(4,14.97852);
   htotpass_cat2_2016_fit_s__36->SetBinError(5,17.81793);
   htotpass_cat2_2016_fit_s__36->SetBinError(6,27.43683);
   htotpass_cat2_2016_fit_s__36->SetBinError(7,34.41861);
   htotpass_cat2_2016_fit_s__36->SetBinError(8,38.35634);
   htotpass_cat2_2016_fit_s__36->SetBinError(9,32.7535);
   htotpass_cat2_2016_fit_s__36->SetBinError(10,24.65363);
   htotpass_cat2_2016_fit_s__36->SetBinError(11,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetBinError(12,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetBinError(13,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetBinError(14,12.90192);
   htotpass_cat2_2016_fit_s__36->SetBinError(15,10.26133);
   htotpass_cat2_2016_fit_s__36->SetBinError(16,8.585169);
   htotpass_cat2_2016_fit_s__36->SetBinError(17,6.394079);
   htotpass_cat2_2016_fit_s__36->SetBinError(18,5.770121);
   htotpass_cat2_2016_fit_s__36->SetBinError(19,4.311302);
   htotpass_cat2_2016_fit_s__36->SetBinError(20,4.353342);
   htotpass_cat2_2016_fit_s__36->SetBinError(21,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetBinError(22,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetBinError(23,8.264663e-07);
   htotpass_cat2_2016_fit_s__36->SetMinimum(0);
   htotpass_cat2_2016_fit_s__36->SetMaximum(1988.186);
   htotpass_cat2_2016_fit_s__36->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__36->SetFillColor(ci);
   htotpass_cat2_2016_fit_s__36->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__36->SetLineColor(ci);
   htotpass_cat2_2016_fit_s__36->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s__36->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s__36->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s__36->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__36->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s__36->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__36->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s__36->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s__36->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s__36->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__36->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__36->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__36->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__36->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__36->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis9[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_9 = new TH1F("hstackMC_stack_9","hstackMC",23, xAxis9);
   hstackMC_stack_9->SetMinimum(-68.40012);
   hstackMC_stack_9->SetMaximum(275.7682);
   hstackMC_stack_9->SetDirectory(0);
   hstackMC_stack_9->SetStats(0);
   hstackMC_stack_9->SetLineStyle(0);
   hstackMC_stack_9->SetMarkerStyle(20);
   hstackMC_stack_9->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_9->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_9->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_9->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_9->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_9->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_9->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_9->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_9->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_9);
   
   Double_t xAxis10[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat2_2016_pass_cat2",23, xAxis10);
   tqq_stack_1->SetBinContent(2,8.905253);
   tqq_stack_1->SetBinContent(3,14.30806);
   tqq_stack_1->SetBinContent(4,17.03135);
   tqq_stack_1->SetBinContent(5,26.38578);
   tqq_stack_1->SetBinContent(6,38.68855);
   tqq_stack_1->SetBinContent(7,46.25641);
   tqq_stack_1->SetBinContent(8,42.88533);
   tqq_stack_1->SetBinContent(9,33.69949);
   tqq_stack_1->SetBinContent(10,40.81173);
   tqq_stack_1->SetBinContent(14,36.54132);
   tqq_stack_1->SetBinContent(15,25.83016);
   tqq_stack_1->SetBinContent(16,19.73307);
   tqq_stack_1->SetBinContent(17,12.12761);
   tqq_stack_1->SetBinContent(18,11.71797);
   tqq_stack_1->SetBinContent(19,2.679079);
   tqq_stack_1->SetBinContent(20,6.672163);
   tqq_stack_1->SetBinError(2,2.285915);
   tqq_stack_1->SetBinError(3,3.672777);
   tqq_stack_1->SetBinError(4,4.371824);
   tqq_stack_1->SetBinError(5,6.773041);
   tqq_stack_1->SetBinError(6,9.931074);
   tqq_stack_1->SetBinError(7,11.87369);
   tqq_stack_1->SetBinError(8,11.00836);
   tqq_stack_1->SetBinError(9,8.650419);
   tqq_stack_1->SetBinError(10,10.47608);
   tqq_stack_1->SetBinError(14,9.379893);
   tqq_stack_1->SetBinError(15,6.630417);
   tqq_stack_1->SetBinError(16,5.065339);
   tqq_stack_1->SetBinError(17,3.11307);
   tqq_stack_1->SetBinError(18,3.00792);
   tqq_stack_1->SetBinError(19,0.6877004);
   tqq_stack_1->SetBinError(20,1.712696);
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
   wqq_stack_2->SetBinContent(1,2.787975e-06);
   wqq_stack_2->SetBinContent(2,2.0867);
   wqq_stack_2->SetBinContent(3,5.928943);
   wqq_stack_2->SetBinContent(4,19.35604);
   wqq_stack_2->SetBinContent(5,35.47133);
   wqq_stack_2->SetBinContent(6,94.47534);
   wqq_stack_2->SetBinContent(7,120.9096);
   wqq_stack_2->SetBinContent(8,76.0005);
   wqq_stack_2->SetBinContent(9,34.40004);
   wqq_stack_2->SetBinContent(10,9.653747);
   wqq_stack_2->SetBinContent(11,2.787975e-06);
   wqq_stack_2->SetBinContent(12,2.787975e-06);
   wqq_stack_2->SetBinContent(13,2.787975e-06);
   wqq_stack_2->SetBinContent(14,2.787975e-06);
   wqq_stack_2->SetBinContent(15,2.787975e-06);
   wqq_stack_2->SetBinContent(16,2.787975e-06);
   wqq_stack_2->SetBinContent(17,2.787975e-06);
   wqq_stack_2->SetBinContent(18,2.787975e-06);
   wqq_stack_2->SetBinContent(19,2.787975e-06);
   wqq_stack_2->SetBinContent(20,2.787975e-06);
   wqq_stack_2->SetBinContent(21,2.787975e-06);
   wqq_stack_2->SetBinContent(22,2.787975e-06);
   wqq_stack_2->SetBinContent(23,2.787975e-06);
   wqq_stack_2->SetBinError(1,4.068918e-07);
   wqq_stack_2->SetBinError(2,0.3295493);
   wqq_stack_2->SetBinError(3,2.000448);
   wqq_stack_2->SetBinError(4,3.460752);
   wqq_stack_2->SetBinError(5,5.109012);
   wqq_stack_2->SetBinError(6,13.3369);
   wqq_stack_2->SetBinError(7,17.43384);
   wqq_stack_2->SetBinError(8,13.51494);
   wqq_stack_2->SetBinError(9,7.832417);
   wqq_stack_2->SetBinError(10,2.326995);
   wqq_stack_2->SetBinError(11,4.068918e-07);
   wqq_stack_2->SetBinError(12,4.068918e-07);
   wqq_stack_2->SetBinError(13,4.068918e-07);
   wqq_stack_2->SetBinError(14,4.068918e-07);
   wqq_stack_2->SetBinError(15,4.068918e-07);
   wqq_stack_2->SetBinError(16,4.068918e-07);
   wqq_stack_2->SetBinError(17,4.068918e-07);
   wqq_stack_2->SetBinError(18,4.068918e-07);
   wqq_stack_2->SetBinError(19,4.068918e-07);
   wqq_stack_2->SetBinError(20,4.068918e-07);
   wqq_stack_2->SetBinError(21,4.068918e-07);
   wqq_stack_2->SetBinError(22,4.068918e-07);
   wqq_stack_2->SetBinError(23,4.068918e-07);
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
   zqq_stack_3->SetBinContent(1,3.577042e-06);
   zqq_stack_3->SetBinContent(2,1.173894);
   zqq_stack_3->SetBinContent(3,1.859334);
   zqq_stack_3->SetBinContent(4,10.2646);
   zqq_stack_3->SetBinContent(5,24.02541);
   zqq_stack_3->SetBinContent(6,48.48448);
   zqq_stack_3->SetBinContent(7,90.92251);
   zqq_stack_3->SetBinContent(8,141.6478);
   zqq_stack_3->SetBinContent(9,124.3933);
   zqq_stack_3->SetBinContent(10,68.2347);
   zqq_stack_3->SetBinContent(11,3.577042e-06);
   zqq_stack_3->SetBinContent(12,3.577042e-06);
   zqq_stack_3->SetBinContent(13,3.577042e-06);
   zqq_stack_3->SetBinContent(14,3.577042e-06);
   zqq_stack_3->SetBinContent(15,3.577042e-06);
   zqq_stack_3->SetBinContent(16,3.577042e-06);
   zqq_stack_3->SetBinContent(17,3.577042e-06);
   zqq_stack_3->SetBinContent(18,3.577042e-06);
   zqq_stack_3->SetBinContent(19,3.577042e-06);
   zqq_stack_3->SetBinContent(20,3.577042e-06);
   zqq_stack_3->SetBinContent(21,3.577042e-06);
   zqq_stack_3->SetBinContent(22,3.577042e-06);
   zqq_stack_3->SetBinContent(23,3.577042e-06);
   zqq_stack_3->SetBinError(1,7.193647e-07);
   zqq_stack_3->SetBinError(2,1.037077);
   zqq_stack_3->SetBinError(3,1.077206);
   zqq_stack_3->SetBinError(4,3.06697);
   zqq_stack_3->SetBinError(5,5.669499);
   zqq_stack_3->SetBinError(6,12.19907);
   zqq_stack_3->SetBinError(7,18.84916);
   zqq_stack_3->SetBinError(8,27.96079);
   zqq_stack_3->SetBinError(9,24.2804);
   zqq_stack_3->SetBinError(10,16.42119);
   zqq_stack_3->SetBinError(11,7.193647e-07);
   zqq_stack_3->SetBinError(12,7.193647e-07);
   zqq_stack_3->SetBinError(13,7.193647e-07);
   zqq_stack_3->SetBinError(14,7.193647e-07);
   zqq_stack_3->SetBinError(15,7.193647e-07);
   zqq_stack_3->SetBinError(16,7.193647e-07);
   zqq_stack_3->SetBinError(17,7.193647e-07);
   zqq_stack_3->SetBinError(18,7.193647e-07);
   zqq_stack_3->SetBinError(19,7.193647e-07);
   zqq_stack_3->SetBinError(20,7.193647e-07);
   zqq_stack_3->SetBinError(21,7.193647e-07);
   zqq_stack_3->SetBinError(22,7.193647e-07);
   zqq_stack_3->SetBinError(23,7.193647e-07);
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
   
   TH1F *hsigpass_cat2_2016_fit_s_stack_4 = new TH1F("hsigpass_cat2_2016_fit_s_stack_4","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(1,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(2,0.02612042);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(3,0.6780037);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(4,0.2291216);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(5,0.8818347);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(6,2.064583);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(7,1.834921);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(8,2.102716);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(9,7.628661);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(10,16.87984);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(11,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(12,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(13,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(14,23.37348);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(15,9.008239);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(16,2.203037);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(17,0.7097853);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(18,0.2772793);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(19,0.1257693);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(20,0.05172141);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(21,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(22,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(23,4.765258e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(1,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(2,0.06394587);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(3,2.89533);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(4,0.8517285);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(5,3.857276);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(6,7.150705);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(7,6.947268);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(8,7.702137);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(9,29.83921);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(10,66.75097);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(11,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(12,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(13,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(14,91.7736);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(15,33.79887);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(16,7.944919);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(17,2.469236);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(18,0.9295911);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(19,0.3340102);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(20,0.1269137);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(21,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(22,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(23,1.828552e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3009[23] = {
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
   Double_t data_copy_fy3009[23] = {
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
   Double_t data_copy_felx3009[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3009[23] = {
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
   Double_t data_copy_fehx3009[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3009[23] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3009,data_copy_fy3009,data_copy_felx3009,data_copy_fehx3009,data_copy_fely3009,data_copy_fehy3009);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat2_2016_pass_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3009 = new TH1F("Graph_data_copy3009","tqq in cat2_2016_pass_cat2",100,28.1,212.9);
   Graph_data_copy3009->SetMinimum(0);
   Graph_data_copy3009->SetMaximum(1508.871);
   Graph_data_copy3009->SetDirectory(0);
   Graph_data_copy3009->SetStats(0);
   Graph_data_copy3009->SetLineStyle(0);
   Graph_data_copy3009->SetMarkerStyle(20);
   Graph_data_copy3009->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3009->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3009->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3009->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3009->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3009->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3009->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3009);
   
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
   entry=leg->AddEntry("htotpass_cat2_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat2_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat2_2016_fit_s_copy__37 = new TH1F("htotpass_cat2_2016_fit_s_copy__37","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(1,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(2,1183.441);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(3,1245.942);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(4,1260.412);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(5,1268.153);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(6,1304.191);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(7,1325.457);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(8,1283.363);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(9,1163.135);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(10,1040.448);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(11,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(12,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(13,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(14,695.0619);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(15,602.0262);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(16,520.8408);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(17,430.6441);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(18,354.2275);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(19,277.701);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(20,221.0829);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(21,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(22,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinContent(23,6.365017e-06);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(1,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(2,14.76709);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(3,13.28329);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(4,14.97852);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(5,17.81793);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(6,27.43683);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(7,34.41861);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(8,38.35634);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(9,32.7535);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(10,24.65363);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(11,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(12,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(13,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(14,12.90192);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(15,10.26133);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(16,8.585169);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(17,6.394079);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(18,5.770121);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(19,4.311302);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(20,4.353342);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(21,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(22,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetBinError(23,8.264663e-07);
   htotpass_cat2_2016_fit_s_copy__37->SetMaximum(1988.186);
   htotpass_cat2_2016_fit_s_copy__37->SetEntries(92);
   htotpass_cat2_2016_fit_s_copy__37->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s_copy__37->SetFillColor(ci);
   htotpass_cat2_2016_fit_s_copy__37->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s_copy__37->SetLineColor(ci);
   htotpass_cat2_2016_fit_s_copy__37->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s_copy__37->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s_copy__37->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s_copy__37->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__37->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s_copy__37->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__37->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s_copy__37->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s_copy__37->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s_copy__37->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__37->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__37->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s_copy__37->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s_copy__37->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__37->Draw("sameaxis");
   p12pass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_fit_s
   TPad *p22pass_cat2_2016_fit_s = new TPad("p22pass_cat2_2016_fit_s", "p22pass_cat2_2016_fit_s",0,0,1,0.3);
   p22pass_cat2_2016_fit_s->Draw();
   p22pass_cat2_2016_fit_s->cd();
   p22pass_cat2_2016_fit_s->Range(18.24324,-11.38944,197.973,9.908683);
   p22pass_cat2_2016_fit_s->SetFillColor(0);
   p22pass_cat2_2016_fit_s->SetBorderMode(0);
   p22pass_cat2_2016_fit_s->SetBorderSize(2);
   p22pass_cat2_2016_fit_s->SetTickx(1);
   p22pass_cat2_2016_fit_s->SetTicky(1);
   p22pass_cat2_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat2_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat2_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s__38 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s__38","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s__38->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_s__38->SetMaximum(8.843777);
   iOneWithErrorspass_cat2_2016_fit_s__38->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__38->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__38->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__38->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__38->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__38->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__38->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__38->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__38->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_10 = new TH1F("hstack_stack_10","hstack",23,40,201);
   hstack_stack_10->SetMinimum(-90.88807);
   hstack_stack_10->SetMaximum(97.29208);
   hstack_stack_10->SetDirectory(0);
   hstack_stack_10->SetStats(0);
   hstack_stack_10->SetLineStyle(0);
   hstack_stack_10->SetMarkerStyle(20);
   hstack_stack_10->GetXaxis()->SetLabelFont(42);
   hstack_stack_10->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_10->GetXaxis()->SetTitleFont(42);
   hstack_stack_10->GetYaxis()->SetLabelFont(42);
   hstack_stack_10->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_10->GetYaxis()->SetTitleFont(42);
   hstack_stack_10->GetZaxis()->SetLabelFont(42);
   hstack_stack_10->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_10->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_10->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_10->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_10);
   
   
   TH1F *sigHistResidualwqqpass_cat2_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat2_2016_fit_s_stack_1","wqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(2,0.06019477);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(3,0.1701138);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(4,0.5614064);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(5,1.006215);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(6,2.587906);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(7,3.30952);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(8,2.15504);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(9,1.024831);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(10,0.2988174);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(14,1.056252e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(15,1.145183e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(16,1.213669e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(17,1.354466e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(18,1.519428e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(19,1.638065e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinContent(20,1.982961e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(1,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(2,0.3295493);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(3,2.000448);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(4,3.460752);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(5,5.109012);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(6,13.3369);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(7,17.43384);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(8,13.51494);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(9,7.832417);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(10,2.326995);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(11,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(12,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(13,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(14,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(15,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(16,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(17,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(18,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(19,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(20,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(21,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(22,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetBinError(23,4.068918e-07);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat2_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat2_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat2_2016_fit_s_stack_2","zqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(2,0.03386318);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(3,0.0533482);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(4,0.2977166);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(5,0.6815289);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(6,1.328106);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(7,2.488719);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(8,4.016508);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(9,3.705868);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(10,2.112103);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(14,1.355197e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(15,1.469298e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(16,1.557167e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(17,1.737813e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(18,1.949465e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(19,2.101679e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinContent(20,2.544189e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(1,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(2,1.037077);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(3,1.077206);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(4,3.06697);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(5,5.669499);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(6,12.19907);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(7,18.84916);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(8,27.96079);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(9,24.2804);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(10,16.42119);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(11,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(12,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(13,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(14,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(15,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(16,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(17,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(18,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(19,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(20,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(21,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(22,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetBinError(23,7.193647e-07);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat2_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(2,0.0007534927);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(3,0.01945335);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(4,0.006645488);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(5,0.02501501);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(6,0.05655387);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(7,0.05022522);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(8,0.05962376);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(9,0.2272696);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(10,0.5224904);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(14,0.885527);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(15,0.3700204);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(16,0.09590319);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(17,0.03448308);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(18,0.01511155);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(19,0.007389531);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinContent(20,0.003678711);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(1,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(2,0.06394587);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(3,2.89533);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(4,0.8517285);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(5,3.857276);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(6,7.150705);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(7,6.947268);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(8,7.702137);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(9,29.83921);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(10,66.75097);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(11,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(12,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(13,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(14,91.7736);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(15,33.79887);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(16,7.944919);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(17,2.469236);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(18,0.9295911);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(19,0.3340102);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(20,0.1269137);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(21,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(22,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetBinError(23,1.828552e-06);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_fit_s__39 = new TH1F("iOneWithErrorsLinepass_cat2_2016_fit_s__39","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__39->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fx3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fy3010[23] = {
   0,
   0.6115309,
   -0.6643208,
   -1.212125,
   0.9469976,
   4.578024,
   5.895852,
   4.914063,
   3.546935,
   2.444038,
   0,
   0,
   0,
   0.07069788,
   -0.3707575,
   0.2983827,
   -0.3227851,
   -0.9388897,
   0.6814098,
   -1.641782,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_felx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fely3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fehx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fehy3010[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_fit_s_fx3010,Graph_from_iRatiopass_cat2_2016_fit_s_fy3010,Graph_from_iRatiopass_cat2_2016_fit_s_felx3010,Graph_from_iRatiopass_cat2_2016_fit_s_fehx3010,Graph_from_iRatiopass_cat2_2016_fit_s_fely3010,Graph_from_iRatiopass_cat2_2016_fit_s_fehy3010);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->SetMinimum(-3.595545);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->SetMaximum(7.849615);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_fit_s3010);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s_copy__40 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s_copy__40","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetMaximum(8.843777);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetEntries(184);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__40->Draw("sameaxis");
   p22pass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
   cpass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
   cpass_cat2_2016_fit_s->SetSelected(cpass_cat2_2016_fit_s);
}
