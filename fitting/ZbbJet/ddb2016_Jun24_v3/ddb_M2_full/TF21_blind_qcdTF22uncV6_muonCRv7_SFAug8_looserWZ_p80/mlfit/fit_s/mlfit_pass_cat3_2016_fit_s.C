void mlfit_pass_cat3_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat3_2016_fit_s/cpass_cat3_2016_fit_s
//=========  (Thu Sep 26 13:57:40 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_fit_s = new TCanvas("cpass_cat3_2016_fit_s", "cpass_cat3_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_fit_s->SetHighLightColor(2);
   cpass_cat3_2016_fit_s->Range(0,0,1,1);
   cpass_cat3_2016_fit_s->SetFillColor(0);
   cpass_cat3_2016_fit_s->SetBorderMode(0);
   cpass_cat3_2016_fit_s->SetBorderSize(2);
   cpass_cat3_2016_fit_s->SetTickx(1);
   cpass_cat3_2016_fit_s->SetTicky(1);
   cpass_cat3_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat3_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat3_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat3_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_fit_s
   TPad *p12pass_cat3_2016_fit_s = new TPad("p12pass_cat3_2016_fit_s", "p12pass_cat3_2016_fit_s",0,0.3,1,1);
   p12pass_cat3_2016_fit_s->Draw();
   p12pass_cat3_2016_fit_s->cd();
   p12pass_cat3_2016_fit_s->Range(13.7027,-24.51389,221.8108,1201.181);
   p12pass_cat3_2016_fit_s->SetFillColor(0);
   p12pass_cat3_2016_fit_s->SetBorderMode(0);
   p12pass_cat3_2016_fit_s->SetBorderSize(2);
   p12pass_cat3_2016_fit_s->SetTickx(1);
   p12pass_cat3_2016_fit_s->SetTicky(1);
   p12pass_cat3_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat3_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_fit_s__57 = new TH1F("htotpass_cat3_2016_fit_s__57","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s__57->SetBinContent(1,4.005737e-06);
   htotpass_cat3_2016_fit_s__57->SetBinContent(2,611.3477);
   htotpass_cat3_2016_fit_s__57->SetBinContent(3,639.7715);
   htotpass_cat3_2016_fit_s__57->SetBinContent(4,645.6);
   htotpass_cat3_2016_fit_s__57->SetBinContent(5,651.1801);
   htotpass_cat3_2016_fit_s__57->SetBinContent(6,697.4189);
   htotpass_cat3_2016_fit_s__57->SetBinContent(7,719.0741);
   htotpass_cat3_2016_fit_s__57->SetBinContent(8,675.274);
   htotpass_cat3_2016_fit_s__57->SetBinContent(9,612.7382);
   htotpass_cat3_2016_fit_s__57->SetBinContent(10,534.6425);
   htotpass_cat3_2016_fit_s__57->SetBinContent(11,4.005737e-06);
   htotpass_cat3_2016_fit_s__57->SetBinContent(12,4.005737e-06);
   htotpass_cat3_2016_fit_s__57->SetBinContent(13,4.005737e-06);
   htotpass_cat3_2016_fit_s__57->SetBinContent(14,390.1941);
   htotpass_cat3_2016_fit_s__57->SetBinContent(15,359.0487);
   htotpass_cat3_2016_fit_s__57->SetBinContent(16,316.1207);
   htotpass_cat3_2016_fit_s__57->SetBinContent(17,276.2337);
   htotpass_cat3_2016_fit_s__57->SetBinContent(18,239.8137);
   htotpass_cat3_2016_fit_s__57->SetBinContent(19,198.0662);
   htotpass_cat3_2016_fit_s__57->SetBinContent(20,168.0593);
   htotpass_cat3_2016_fit_s__57->SetBinContent(21,133.4146);
   htotpass_cat3_2016_fit_s__57->SetBinContent(22,101.6765);
   htotpass_cat3_2016_fit_s__57->SetBinContent(23,78.07284);
   htotpass_cat3_2016_fit_s__57->SetBinError(1,5.627062e-07);
   htotpass_cat3_2016_fit_s__57->SetBinError(2,8.7616);
   htotpass_cat3_2016_fit_s__57->SetBinError(3,7.887319);
   htotpass_cat3_2016_fit_s__57->SetBinError(4,9.393228);
   htotpass_cat3_2016_fit_s__57->SetBinError(5,12.50916);
   htotpass_cat3_2016_fit_s__57->SetBinError(6,19.96544);
   htotpass_cat3_2016_fit_s__57->SetBinError(7,24.91791);
   htotpass_cat3_2016_fit_s__57->SetBinError(8,26.69473);
   htotpass_cat3_2016_fit_s__57->SetBinError(9,21.63886);
   htotpass_cat3_2016_fit_s__57->SetBinError(10,15.60057);
   htotpass_cat3_2016_fit_s__57->SetBinError(11,5.627062e-07);
   htotpass_cat3_2016_fit_s__57->SetBinError(12,5.627062e-07);
   htotpass_cat3_2016_fit_s__57->SetBinError(13,5.627062e-07);
   htotpass_cat3_2016_fit_s__57->SetBinError(14,7.897347);
   htotpass_cat3_2016_fit_s__57->SetBinError(15,6.582603);
   htotpass_cat3_2016_fit_s__57->SetBinError(16,5.44053);
   htotpass_cat3_2016_fit_s__57->SetBinError(17,4.880116);
   htotpass_cat3_2016_fit_s__57->SetBinError(18,4.268551);
   htotpass_cat3_2016_fit_s__57->SetBinError(19,3.576615);
   htotpass_cat3_2016_fit_s__57->SetBinError(20,3.14895);
   htotpass_cat3_2016_fit_s__57->SetBinError(21,2.897482);
   htotpass_cat3_2016_fit_s__57->SetBinError(22,2.556939);
   htotpass_cat3_2016_fit_s__57->SetBinError(23,2.64078);
   htotpass_cat3_2016_fit_s__57->SetMinimum(0);
   htotpass_cat3_2016_fit_s__57->SetMaximum(1078.611);
   htotpass_cat3_2016_fit_s__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__57->SetFillColor(ci);
   htotpass_cat3_2016_fit_s__57->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__57->SetLineColor(ci);
   htotpass_cat3_2016_fit_s__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s__57->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s__57->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__57->Draw("");
   
   TH1F *htot_linepass_cat3_2016_fit_s__58 = new TH1F("htot_linepass_cat3_2016_fit_s__58","wqq in cat3_2016_pass_cat3",23,40,201);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(1,4.005737e-06);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(2,611.3477);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(3,639.7715);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(4,645.6);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(5,651.1801);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(6,697.4189);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(7,719.0741);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(8,675.274);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(9,612.7382);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(10,534.6425);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(11,4.005737e-06);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(12,4.005737e-06);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(13,4.005737e-06);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(14,390.1941);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(15,359.0487);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(16,316.1207);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(17,276.2337);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(18,239.8137);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(19,198.0662);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(20,168.0593);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(21,133.4146);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(22,101.6765);
   htot_linepass_cat3_2016_fit_s__58->SetBinContent(23,78.07284);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(1,5.627062e-07);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(2,8.7616);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(3,7.887319);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(4,9.393228);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(5,12.50916);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(6,19.96544);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(7,24.91791);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(8,26.69473);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(9,21.63886);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(10,15.60057);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(11,5.627062e-07);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(12,5.627062e-07);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(13,5.627062e-07);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(14,7.897347);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(15,6.582603);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(16,5.44053);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(17,4.880116);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(18,4.268551);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(19,3.576615);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(20,3.14895);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(21,2.897482);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(22,2.556939);
   htot_linepass_cat3_2016_fit_s__58->SetBinError(23,2.64078);
   htot_linepass_cat3_2016_fit_s__58->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_s__58->SetFillColor(ci);
   htot_linepass_cat3_2016_fit_s__58->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_s__58->SetLineColor(ci);
   htot_linepass_cat3_2016_fit_s__58->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat3_2016_fit_s__58->SetMarkerColor(ci);
   htot_linepass_cat3_2016_fit_s__58->SetMarkerSize(0);
   htot_linepass_cat3_2016_fit_s__58->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat3_2016_fit_s__58->GetXaxis()->SetRange(2,23);
   htot_linepass_cat3_2016_fit_s__58->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_s__58->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_s__58->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_s__58->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_s__58->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat3_2016_fit_s__58->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_s__58->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat3_2016_fit_s__58->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat3_2016_fit_s__58->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat3_2016_fit_s__58->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_s__58->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_s__58->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_s__58->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_s__58->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_s__58->Draw("histsame");
   
   TH1F *qcd__59 = new TH1F("qcd__59","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__59->SetBinContent(2,603.6818);
   qcd__59->SetBinContent(3,627.1306);
   qcd__59->SetBinContent(4,621.2426);
   qcd__59->SetBinContent(5,597.951);
   qcd__59->SetBinContent(6,569.0162);
   qcd__59->SetBinContent(7,546.3504);
   qcd__59->SetBinContent(8,521.4262);
   qcd__59->SetBinContent(9,494.0335);
   qcd__59->SetBinContent(10,475.2292);
   qcd__59->SetBinContent(14,371.5113);
   qcd__59->SetBinContent(15,345.0978);
   qcd__59->SetBinContent(16,306.5963);
   qcd__59->SetBinContent(17,267.6024);
   qcd__59->SetBinContent(18,232.2343);
   qcd__59->SetBinContent(19,194.5629);
   qcd__59->SetBinContent(20,164.6971);
   qcd__59->SetBinContent(21,131.1125);
   qcd__59->SetBinContent(22,101.1269);
   qcd__59->SetBinContent(23,77.52329);
   qcd__59->SetBinError(2,8.569863);
   qcd__59->SetBinError(3,7.572959);
   qcd__59->SetBinError(4,8.251962);
   qcd__59->SetBinError(5,9.930546);
   qcd__59->SetBinError(6,11.73387);
   qcd__59->SetBinError(7,12.66384);
   qcd__59->SetBinError(8,11.9216);
   qcd__59->SetBinError(9,11.03787);
   qcd__59->SetBinError(10,9.125015);
   qcd__59->SetBinError(14,5.88075);
   qcd__59->SetBinError(15,5.220033);
   qcd__59->SetBinError(16,4.701454);
   qcd__59->SetBinError(17,4.202345);
   qcd__59->SetBinError(18,3.670637);
   qcd__59->SetBinError(19,3.431916);
   qcd__59->SetBinError(20,2.996971);
   qcd__59->SetBinError(21,2.820908);
   qcd__59->SetBinError(22,2.552055);
   qcd__59->SetBinError(23,2.636051);
   qcd__59->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__59->SetLineColor(ci);
   qcd__59->SetLineStyle(2);
   qcd__59->SetLineWidth(2);
   qcd__59->GetXaxis()->SetTitle("x");
   qcd__59->GetXaxis()->SetLabelFont(42);
   qcd__59->GetXaxis()->SetLabelSize(0.035);
   qcd__59->GetXaxis()->SetTitleSize(0.035);
   qcd__59->GetXaxis()->SetTitleFont(42);
   qcd__59->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__59->GetYaxis()->SetLabelFont(42);
   qcd__59->GetYaxis()->SetLabelSize(0.035);
   qcd__59->GetYaxis()->SetTitleSize(0.035);
   qcd__59->GetYaxis()->SetTitleOffset(0);
   qcd__59->GetYaxis()->SetTitleFont(42);
   qcd__59->GetZaxis()->SetLabelFont(42);
   qcd__59->GetZaxis()->SetLabelSize(0.035);
   qcd__59->GetZaxis()->SetTitleSize(0.035);
   qcd__59->GetZaxis()->SetTitleFont(42);
   qcd__59->Draw("hist sames");
   
   TH1F *htotpass_cat3_2016_fit_s__60 = new TH1F("htotpass_cat3_2016_fit_s__60","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s__60->SetBinContent(1,4.005737e-06);
   htotpass_cat3_2016_fit_s__60->SetBinContent(2,611.3477);
   htotpass_cat3_2016_fit_s__60->SetBinContent(3,639.7715);
   htotpass_cat3_2016_fit_s__60->SetBinContent(4,645.6);
   htotpass_cat3_2016_fit_s__60->SetBinContent(5,651.1801);
   htotpass_cat3_2016_fit_s__60->SetBinContent(6,697.4189);
   htotpass_cat3_2016_fit_s__60->SetBinContent(7,719.0741);
   htotpass_cat3_2016_fit_s__60->SetBinContent(8,675.274);
   htotpass_cat3_2016_fit_s__60->SetBinContent(9,612.7382);
   htotpass_cat3_2016_fit_s__60->SetBinContent(10,534.6425);
   htotpass_cat3_2016_fit_s__60->SetBinContent(11,4.005737e-06);
   htotpass_cat3_2016_fit_s__60->SetBinContent(12,4.005737e-06);
   htotpass_cat3_2016_fit_s__60->SetBinContent(13,4.005737e-06);
   htotpass_cat3_2016_fit_s__60->SetBinContent(14,390.1941);
   htotpass_cat3_2016_fit_s__60->SetBinContent(15,359.0487);
   htotpass_cat3_2016_fit_s__60->SetBinContent(16,316.1207);
   htotpass_cat3_2016_fit_s__60->SetBinContent(17,276.2337);
   htotpass_cat3_2016_fit_s__60->SetBinContent(18,239.8137);
   htotpass_cat3_2016_fit_s__60->SetBinContent(19,198.0662);
   htotpass_cat3_2016_fit_s__60->SetBinContent(20,168.0593);
   htotpass_cat3_2016_fit_s__60->SetBinContent(21,133.4146);
   htotpass_cat3_2016_fit_s__60->SetBinContent(22,101.6765);
   htotpass_cat3_2016_fit_s__60->SetBinContent(23,78.07284);
   htotpass_cat3_2016_fit_s__60->SetBinError(1,5.627062e-07);
   htotpass_cat3_2016_fit_s__60->SetBinError(2,8.7616);
   htotpass_cat3_2016_fit_s__60->SetBinError(3,7.887319);
   htotpass_cat3_2016_fit_s__60->SetBinError(4,9.393228);
   htotpass_cat3_2016_fit_s__60->SetBinError(5,12.50916);
   htotpass_cat3_2016_fit_s__60->SetBinError(6,19.96544);
   htotpass_cat3_2016_fit_s__60->SetBinError(7,24.91791);
   htotpass_cat3_2016_fit_s__60->SetBinError(8,26.69473);
   htotpass_cat3_2016_fit_s__60->SetBinError(9,21.63886);
   htotpass_cat3_2016_fit_s__60->SetBinError(10,15.60057);
   htotpass_cat3_2016_fit_s__60->SetBinError(11,5.627062e-07);
   htotpass_cat3_2016_fit_s__60->SetBinError(12,5.627062e-07);
   htotpass_cat3_2016_fit_s__60->SetBinError(13,5.627062e-07);
   htotpass_cat3_2016_fit_s__60->SetBinError(14,7.897347);
   htotpass_cat3_2016_fit_s__60->SetBinError(15,6.582603);
   htotpass_cat3_2016_fit_s__60->SetBinError(16,5.44053);
   htotpass_cat3_2016_fit_s__60->SetBinError(17,4.880116);
   htotpass_cat3_2016_fit_s__60->SetBinError(18,4.268551);
   htotpass_cat3_2016_fit_s__60->SetBinError(19,3.576615);
   htotpass_cat3_2016_fit_s__60->SetBinError(20,3.14895);
   htotpass_cat3_2016_fit_s__60->SetBinError(21,2.897482);
   htotpass_cat3_2016_fit_s__60->SetBinError(22,2.556939);
   htotpass_cat3_2016_fit_s__60->SetBinError(23,2.64078);
   htotpass_cat3_2016_fit_s__60->SetMinimum(0);
   htotpass_cat3_2016_fit_s__60->SetMaximum(1078.611);
   htotpass_cat3_2016_fit_s__60->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__60->SetFillColor(ci);
   htotpass_cat3_2016_fit_s__60->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__60->SetLineColor(ci);
   htotpass_cat3_2016_fit_s__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s__60->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s__60->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__60->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(-58.17446);
   hstackMC_stack_15->SetMaximum(184.223);
   hstackMC_stack_15->SetDirectory(0);
   hstackMC_stack_15->SetStats(0);
   hstackMC_stack_15->SetLineStyle(0);
   hstackMC_stack_15->SetMarkerStyle(20);
   hstackMC_stack_15->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_15->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_15->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_15->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_15->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_15);
   
   Double_t xAxis16[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat3_2016_pass_cat3",23, xAxis16);
   tqq_stack_1->SetBinContent(2,6.082805);
   tqq_stack_1->SetBinContent(3,6.942239);
   tqq_stack_1->SetBinContent(4,10.91258);
   tqq_stack_1->SetBinContent(5,12.05964);
   tqq_stack_1->SetBinContent(6,23.85265);
   tqq_stack_1->SetBinContent(7,28.07857);
   tqq_stack_1->SetBinContent(8,22.98469);
   tqq_stack_1->SetBinContent(9,26.25971);
   tqq_stack_1->SetBinContent(10,21.94867);
   tqq_stack_1->SetBinContent(14,18.29857);
   tqq_stack_1->SetBinContent(15,13.95088);
   tqq_stack_1->SetBinContent(16,9.524423);
   tqq_stack_1->SetBinContent(17,8.63129);
   tqq_stack_1->SetBinContent(18,7.579484);
   tqq_stack_1->SetBinContent(19,3.503312);
   tqq_stack_1->SetBinContent(20,3.362154);
   tqq_stack_1->SetBinContent(21,2.302037);
   tqq_stack_1->SetBinContent(22,0.5495411);
   tqq_stack_1->SetBinContent(23,0.5495411);
   tqq_stack_1->SetBinError(2,1.748523);
   tqq_stack_1->SetBinError(3,1.99557);
   tqq_stack_1->SetBinError(4,3.136857);
   tqq_stack_1->SetBinError(5,3.466585);
   tqq_stack_1->SetBinError(6,6.856524);
   tqq_stack_1->SetBinError(7,8.071283);
   tqq_stack_1->SetBinError(8,6.607026);
   tqq_stack_1->SetBinError(9,7.548443);
   tqq_stack_1->SetBinError(10,6.309219);
   tqq_stack_1->SetBinError(14,5.259988);
   tqq_stack_1->SetBinError(15,4.010227);
   tqq_stack_1->SetBinError(16,2.737827);
   tqq_stack_1->SetBinError(17,2.481094);
   tqq_stack_1->SetBinError(18,2.178749);
   tqq_stack_1->SetBinError(19,1.007039);
   tqq_stack_1->SetBinError(20,0.9664625);
   tqq_stack_1->SetBinError(21,0.6617282);
   tqq_stack_1->SetBinError(22,0.1579675);
   tqq_stack_1->SetBinError(23,0.1579675);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat3_2016_pass_cat3",23,40,201);
   wqq_stack_2->SetBinContent(1,1.874976e-06);
   wqq_stack_2->SetBinContent(2,1.061898);
   wqq_stack_2->SetBinContent(3,3.86044);
   wqq_stack_2->SetBinContent(4,11.75317);
   wqq_stack_2->SetBinContent(5,30.78124);
   wqq_stack_2->SetBinContent(6,73.70813);
   wqq_stack_2->SetBinContent(7,88.9313);
   wqq_stack_2->SetBinContent(8,35.76313);
   wqq_stack_2->SetBinContent(9,15.54689);
   wqq_stack_2->SetBinContent(10,6.44753);
   wqq_stack_2->SetBinContent(11,1.874976e-06);
   wqq_stack_2->SetBinContent(12,1.874976e-06);
   wqq_stack_2->SetBinContent(13,1.874976e-06);
   wqq_stack_2->SetBinContent(14,1.874976e-06);
   wqq_stack_2->SetBinContent(15,1.874976e-06);
   wqq_stack_2->SetBinContent(16,1.874976e-06);
   wqq_stack_2->SetBinContent(17,1.874976e-06);
   wqq_stack_2->SetBinContent(18,1.874976e-06);
   wqq_stack_2->SetBinContent(19,1.874976e-06);
   wqq_stack_2->SetBinContent(20,1.874976e-06);
   wqq_stack_2->SetBinContent(21,1.874976e-06);
   wqq_stack_2->SetBinContent(22,1.874976e-06);
   wqq_stack_2->SetBinContent(23,1.874976e-06);
   wqq_stack_2->SetBinError(1,3.300129e-07);
   wqq_stack_2->SetBinError(2,0.4724059);
   wqq_stack_2->SetBinError(3,0.7877721);
   wqq_stack_2->SetBinError(4,3.162845);
   wqq_stack_2->SetBinError(5,5.59902);
   wqq_stack_2->SetBinError(6,12.45656);
   wqq_stack_2->SetBinError(7,15.82774);
   wqq_stack_2->SetBinError(8,10.68042);
   wqq_stack_2->SetBinError(9,3.218855);
   wqq_stack_2->SetBinError(10,1.798587);
   wqq_stack_2->SetBinError(11,3.300129e-07);
   wqq_stack_2->SetBinError(12,3.300129e-07);
   wqq_stack_2->SetBinError(13,3.300129e-07);
   wqq_stack_2->SetBinError(14,3.300129e-07);
   wqq_stack_2->SetBinError(15,3.300129e-07);
   wqq_stack_2->SetBinError(16,3.300129e-07);
   wqq_stack_2->SetBinError(17,3.300129e-07);
   wqq_stack_2->SetBinError(18,3.300129e-07);
   wqq_stack_2->SetBinError(19,3.300129e-07);
   wqq_stack_2->SetBinError(20,3.300129e-07);
   wqq_stack_2->SetBinError(21,3.300129e-07);
   wqq_stack_2->SetBinError(22,3.300129e-07);
   wqq_stack_2->SetBinError(23,3.300129e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat3_2016_pass_cat3",23,40,201);
   zqq_stack_3->SetBinContent(1,2.130761e-06);
   zqq_stack_3->SetBinContent(2,0.5211927);
   zqq_stack_3->SetBinContent(3,1.838187);
   zqq_stack_3->SetBinContent(4,1.691767);
   zqq_stack_3->SetBinContent(5,10.38821);
   zqq_stack_3->SetBinContent(6,30.84194);
   zqq_stack_3->SetBinContent(7,55.71384);
   zqq_stack_3->SetBinContent(8,95.09995);
   zqq_stack_3->SetBinContent(9,76.89813);
   zqq_stack_3->SetBinContent(10,31.01701);
   zqq_stack_3->SetBinContent(11,2.130761e-06);
   zqq_stack_3->SetBinContent(12,2.130761e-06);
   zqq_stack_3->SetBinContent(13,2.130761e-06);
   zqq_stack_3->SetBinContent(14,0.3842233);
   zqq_stack_3->SetBinContent(15,2.130761e-06);
   zqq_stack_3->SetBinContent(16,2.130761e-06);
   zqq_stack_3->SetBinContent(17,2.130761e-06);
   zqq_stack_3->SetBinContent(18,2.130761e-06);
   zqq_stack_3->SetBinContent(19,2.130761e-06);
   zqq_stack_3->SetBinContent(20,2.130761e-06);
   zqq_stack_3->SetBinContent(21,2.130761e-06);
   zqq_stack_3->SetBinContent(22,2.130761e-06);
   zqq_stack_3->SetBinContent(23,2.130761e-06);
   zqq_stack_3->SetBinError(1,4.557738e-07);
   zqq_stack_3->SetBinError(2,0.2063484);
   zqq_stack_3->SetBinError(3,0.5071633);
   zqq_stack_3->SetBinError(4,0.5425768);
   zqq_stack_3->SetBinError(5,3.80749);
   zqq_stack_3->SetBinError(6,7.665317);
   zqq_stack_3->SetBinError(7,12.03604);
   zqq_stack_3->SetBinError(8,20.3165);
   zqq_stack_3->SetBinError(9,16.70526);
   zqq_stack_3->SetBinError(10,10.81992);
   zqq_stack_3->SetBinError(11,4.557738e-07);
   zqq_stack_3->SetBinError(12,4.557738e-07);
   zqq_stack_3->SetBinError(13,4.557738e-07);
   zqq_stack_3->SetBinError(14,0.3426459);
   zqq_stack_3->SetBinError(15,4.557738e-07);
   zqq_stack_3->SetBinError(16,4.557738e-07);
   zqq_stack_3->SetBinError(17,4.557738e-07);
   zqq_stack_3->SetBinError(18,4.557738e-07);
   zqq_stack_3->SetBinError(19,4.557738e-07);
   zqq_stack_3->SetBinError(20,4.557738e-07);
   zqq_stack_3->SetBinError(21,4.557738e-07);
   zqq_stack_3->SetBinError(22,4.557738e-07);
   zqq_stack_3->SetBinError(23,4.557738e-07);
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
   
   TH1F *hsigpass_cat3_2016_fit_s_stack_4 = new TH1F("hsigpass_cat3_2016_fit_s_stack_4","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(1,3.760414e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(2,0.01906476);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(3,0.05356029);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(4,0.04337734);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(5,0.8001997);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(6,0.9903585);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(7,2.726735);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(8,1.869141);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(9,4.550129);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(10,11.26756);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(11,3.760414e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(12,3.760414e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(13,3.760414e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(14,18.8184);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(15,9.648098);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(16,2.202112);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(17,0.4138183);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(18,0.1711404);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(19,0.0609259);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(20,0.02134414);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(21,0.04615591);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(22,0.002160924);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(23,0.01592433);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(1,1.499691e-06);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(2,0.05121503);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(3,0.1438846);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(4,0.08968037);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(5,3.281494);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(6,3.282876);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(7,11.39654);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(8,6.552064);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(9,16.94887);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(10,46.09001);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(11,1.499691e-06);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(12,1.499691e-06);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(13,1.499691e-06);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(14,76.99286);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(15,40.92128);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(16,8.778005);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(17,1.853413);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(18,0.6011747);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(19,0.1439557);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(20,0.04868347);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(21,0.1206938);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(22,0.004875677);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(23,0.04277851);
   hsigpass_cat3_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3015[23] = {
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
   Double_t data_copy_fy3015[23] = {
   0,
   651,
   655,
   614,
   656,
   694,
   738,
   683,
   585,
   536,
   0,
   0,
   0,
   420,
   375,
   338,
   261,
   218,
   191,
   185,
   103,
   96,
   97};
   Double_t data_copy_felx3015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3015[23] = {
   1.841055,
   26.52834,
   26.60657,
   25.79304,
   26.62609,
   27.35713,
   28.17904,
   27.14761,
   25.2011,
   24.1666,
   1.841055,
   1.841055,
   1.841055,
   21.51064,
   20.38258,
   19.40334,
   17.17651,
   15.78775,
   14.84473,
   14.62631,
   11.182,
   10.83224,
   10.88296};
   Double_t data_copy_fehx3015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3015[23] = {
   0,
   25.5087,
   25.58699,
   24.77281,
   25.60652,
   26.3381,
   27.16059,
   26.12843,
   24.18038,
   23.14495,
   0,
   0,
   0,
   20.48618,
   19.3567,
   18.37607,
   16.14548,
   14.75381,
   13.80846,
   13.58946,
   10.1326,
   9.781065,
   9.832053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3015,data_copy_fy3015,data_copy_felx3015,data_copy_fehx3015,data_copy_fely3015,data_copy_fehy3015);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat3_2016_pass_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3015 = new TH1F("Graph_data_copy3015","tqq in cat3_2016_pass_cat3",100,28.1,212.9);
   Graph_data_copy3015->SetMinimum(0);
   Graph_data_copy3015->SetMaximum(841.8607);
   Graph_data_copy3015->SetDirectory(0);
   Graph_data_copy3015->SetStats(0);
   Graph_data_copy3015->SetLineStyle(0);
   Graph_data_copy3015->SetMarkerStyle(20);
   Graph_data_copy3015->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3015->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3015->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3015->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3015->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3015);
   
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
   entry=leg->AddEntry("htotpass_cat3_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat3_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"550 < p_{T} < 600 GeV");
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
   
   TH1F *htotpass_cat3_2016_fit_s_copy__61 = new TH1F("htotpass_cat3_2016_fit_s_copy__61","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(1,4.005737e-06);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(2,611.3477);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(3,639.7715);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(4,645.6);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(5,651.1801);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(6,697.4189);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(7,719.0741);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(8,675.274);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(9,612.7382);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(10,534.6425);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(11,4.005737e-06);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(12,4.005737e-06);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(13,4.005737e-06);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(14,390.1941);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(15,359.0487);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(16,316.1207);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(17,276.2337);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(18,239.8137);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(19,198.0662);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(20,168.0593);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(21,133.4146);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(22,101.6765);
   htotpass_cat3_2016_fit_s_copy__61->SetBinContent(23,78.07284);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(1,5.627062e-07);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(2,8.7616);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(3,7.887319);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(4,9.393228);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(5,12.50916);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(6,19.96544);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(7,24.91791);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(8,26.69473);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(9,21.63886);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(10,15.60057);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(11,5.627062e-07);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(12,5.627062e-07);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(13,5.627062e-07);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(14,7.897347);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(15,6.582603);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(16,5.44053);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(17,4.880116);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(18,4.268551);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(19,3.576615);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(20,3.14895);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(21,2.897482);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(22,2.556939);
   htotpass_cat3_2016_fit_s_copy__61->SetBinError(23,2.64078);
   htotpass_cat3_2016_fit_s_copy__61->SetMaximum(1078.611);
   htotpass_cat3_2016_fit_s_copy__61->SetEntries(92);
   htotpass_cat3_2016_fit_s_copy__61->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s_copy__61->SetFillColor(ci);
   htotpass_cat3_2016_fit_s_copy__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s_copy__61->SetLineColor(ci);
   htotpass_cat3_2016_fit_s_copy__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s_copy__61->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s_copy__61->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s_copy__61->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__61->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s_copy__61->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__61->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s_copy__61->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s_copy__61->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s_copy__61->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__61->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__61->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s_copy__61->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s_copy__61->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__61->Draw("sameaxis");
   p12pass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_fit_s
   TPad *p22pass_cat3_2016_fit_s = new TPad("p22pass_cat3_2016_fit_s", "p22pass_cat3_2016_fit_s",0,0,1,0.3);
   p22pass_cat3_2016_fit_s->Draw();
   p22pass_cat3_2016_fit_s->cd();
   p22pass_cat3_2016_fit_s->Range(13.7027,-11.32634,221.8108,9.761449);
   p22pass_cat3_2016_fit_s->SetFillColor(0);
   p22pass_cat3_2016_fit_s->SetBorderMode(0);
   p22pass_cat3_2016_fit_s->SetBorderSize(2);
   p22pass_cat3_2016_fit_s->SetTickx(1);
   p22pass_cat3_2016_fit_s->SetTicky(1);
   p22pass_cat3_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat3_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat3_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s__62 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s__62","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s__62->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_s__62->SetMaximum(8.70706);
   iOneWithErrorspass_cat3_2016_fit_s__62->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__62->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__62->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__62->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__62->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__62->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(-76.07427);
   hstack_stack_16->SetMaximum(81.80703);
   hstack_stack_16->SetDirectory(0);
   hstack_stack_16->SetStats(0);
   hstack_stack_16->SetLineStyle(0);
   hstack_stack_16->SetMarkerStyle(20);
   hstack_stack_16->GetXaxis()->SetLabelFont(42);
   hstack_stack_16->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_16->GetXaxis()->SetTitleFont(42);
   hstack_stack_16->GetYaxis()->SetLabelFont(42);
   hstack_stack_16->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_16->GetYaxis()->SetTitleFont(42);
   hstack_stack_16->GetZaxis()->SetLabelFont(42);
   hstack_stack_16->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_16);
   
   
   TH1F *sigHistResidualwqqpass_cat3_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat3_2016_fit_s_stack_1","wqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(2,0.04162885);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(3,0.1508751);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(4,0.4744381);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(5,1.202086);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(6,2.798536);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(7,3.274278);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(8,1.368744);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(9,0.6429548);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(10,0.2785718);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(14,9.152394e-08);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(15,9.686447e-08);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(16,1.020336e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(17,1.161301e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(18,1.270842e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(19,1.357846e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(20,1.379729e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(21,1.850439e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(22,1.916945e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinContent(23,1.907003e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(1,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(2,0.4724059);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(3,0.7877721);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(4,3.162845);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(5,5.59902);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(6,12.45656);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(7,15.82774);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(8,10.68042);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(9,3.218855);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(10,1.798587);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(11,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(12,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(13,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(14,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(15,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(16,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(17,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(18,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(19,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(20,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(21,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(22,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetBinError(23,3.300129e-07);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat3_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat3_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat3_2016_fit_s_stack_2","zqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(2,0.02043196);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(3,0.0718407);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(4,0.0682913);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(5,0.405686);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(6,1.171001);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(7,2.051275);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(8,3.639711);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(9,3.180187);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(10,1.34012);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(14,0.01875524);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(15,1.100788e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(16,1.15953e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(17,1.319726e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(18,1.444211e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(19,1.543084e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(20,1.567952e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(21,2.102877e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(22,2.178455e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinContent(23,2.167158e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(1,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(2,0.2063484);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(3,0.5071633);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(4,0.5425768);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(5,3.80749);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(6,7.665317);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(7,12.03604);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(8,20.3165);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(9,16.70526);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(10,10.81992);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(11,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(12,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(13,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(14,0.3426459);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(15,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(16,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(17,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(18,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(19,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(20,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(21,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(22,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetBinError(23,4.557738e-07);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat3_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(2,0.0007473828);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(3,0.002093263);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(4,0.001751006);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(5,0.03124984);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(6,0.03760175);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(7,0.1003931);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(8,0.07153667);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(9,0.1881744);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(10,0.4868258);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(14,0.9185899);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(15,0.4984373);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(16,0.1198359);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(17,0.02563059);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(18,0.01159975);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(19,0.004412215);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(20,0.00157064);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(21,0.00455519);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(22,0.0002209293);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinContent(23,0.001619634);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(1,1.499691e-06);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(2,0.05121503);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(3,0.1438846);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(4,0.08968037);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(5,3.281494);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(6,3.282876);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(7,11.39654);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(8,6.552064);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(9,16.94887);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(10,46.09001);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(11,1.499691e-06);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(12,1.499691e-06);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(13,1.499691e-06);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(14,76.99286);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(15,40.92128);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(16,8.778005);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(17,1.853413);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(18,0.6011747);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(19,0.1439557);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(20,0.04868347);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(21,0.1206938);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(22,0.004875677);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetBinError(23,0.04277851);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_fit_s__63 = new TH1F("iOneWithErrorsLinepass_cat3_2016_fit_s__63","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fy3016[23] = {
   0,
   1.554391,
   0.7865397,
   -0.7328661,
   1.72723,
   3.6967,
   5.804707,
   5.10502,
   2.567617,
   1.606436,
   0,
   0,
   0,
   1.403497,
   0.782596,
   1.127604,
   -0.9435291,
   -1.478516,
   -0.5117281,
   1.158235,
   -3.001657,
   -0.5803512,
   1.739156};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_fit_s_fx3016,Graph_from_iRatiopass_cat3_2016_fit_s_fy3016,Graph_from_iRatiopass_cat3_2016_fit_s_felx3016,Graph_from_iRatiopass_cat3_2016_fit_s_fehx3016,Graph_from_iRatiopass_cat3_2016_fit_s_fely3016,Graph_from_iRatiopass_cat3_2016_fit_s_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->SetMinimum(-5.082293);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->SetMaximum(7.885343);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_fit_s3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s_copy__64 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s_copy__64","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetMaximum(8.70706);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetEntries(184);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__64->Draw("sameaxis");
   p22pass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
   cpass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
   cpass_cat3_2016_fit_s->SetSelected(cpass_cat3_2016_fit_s);
}
