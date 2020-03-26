void mlfit_pass_cat3_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat3_2016_fit_b/cpass_cat3_2016_fit_b
//=========  (Thu Sep 26 13:57:21 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_fit_b = new TCanvas("cpass_cat3_2016_fit_b", "cpass_cat3_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_fit_b->SetHighLightColor(2);
   cpass_cat3_2016_fit_b->Range(0,0,1,1);
   cpass_cat3_2016_fit_b->SetFillColor(0);
   cpass_cat3_2016_fit_b->SetBorderMode(0);
   cpass_cat3_2016_fit_b->SetBorderSize(2);
   cpass_cat3_2016_fit_b->SetTickx(1);
   cpass_cat3_2016_fit_b->SetTicky(1);
   cpass_cat3_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat3_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat3_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat3_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_fit_b
   TPad *p12pass_cat3_2016_fit_b = new TPad("p12pass_cat3_2016_fit_b", "p12pass_cat3_2016_fit_b",0,0.3,1,1);
   p12pass_cat3_2016_fit_b->Draw();
   p12pass_cat3_2016_fit_b->cd();
   p12pass_cat3_2016_fit_b->Range(13.7027,-24.7727,221.8108,1213.862);
   p12pass_cat3_2016_fit_b->SetFillColor(0);
   p12pass_cat3_2016_fit_b->SetBorderMode(0);
   p12pass_cat3_2016_fit_b->SetBorderSize(2);
   p12pass_cat3_2016_fit_b->SetTickx(1);
   p12pass_cat3_2016_fit_b->SetTicky(1);
   p12pass_cat3_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat3_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_fit_b__57 = new TH1F("htotpass_cat3_2016_fit_b__57","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b__57->SetBinContent(1,3.823326e-06);
   htotpass_cat3_2016_fit_b__57->SetBinContent(2,610.5871);
   htotpass_cat3_2016_fit_b__57->SetBinContent(3,641.5523);
   htotpass_cat3_2016_fit_b__57->SetBinContent(4,650.9022);
   htotpass_cat3_2016_fit_b__57->SetBinContent(5,653.9094);
   htotpass_cat3_2016_fit_b__57->SetBinContent(6,702.3375);
   htotpass_cat3_2016_fit_b__57->SetBinContent(7,726.666);
   htotpass_cat3_2016_fit_b__57->SetBinContent(8,676.9249);
   htotpass_cat3_2016_fit_b__57->SetBinContent(9,621.7668);
   htotpass_cat3_2016_fit_b__57->SetBinContent(10,548.4602);
   htotpass_cat3_2016_fit_b__57->SetBinContent(11,3.823326e-06);
   htotpass_cat3_2016_fit_b__57->SetBinContent(12,3.823326e-06);
   htotpass_cat3_2016_fit_b__57->SetBinContent(13,3.823326e-06);
   htotpass_cat3_2016_fit_b__57->SetBinContent(14,398.938);
   htotpass_cat3_2016_fit_b__57->SetBinContent(15,365.445);
   htotpass_cat3_2016_fit_b__57->SetBinContent(16,320.2093);
   htotpass_cat3_2016_fit_b__57->SetBinContent(17,279.6446);
   htotpass_cat3_2016_fit_b__57->SetBinContent(18,242.5428);
   htotpass_cat3_2016_fit_b__57->SetBinContent(19,198.9295);
   htotpass_cat3_2016_fit_b__57->SetBinContent(20,168.7336);
   htotpass_cat3_2016_fit_b__57->SetBinContent(21,133.6274);
   htotpass_cat3_2016_fit_b__57->SetBinContent(22,101.181);
   htotpass_cat3_2016_fit_b__57->SetBinContent(23,77.61595);
   htotpass_cat3_2016_fit_b__57->SetBinError(1,5.587511e-07);
   htotpass_cat3_2016_fit_b__57->SetBinError(2,9.842598);
   htotpass_cat3_2016_fit_b__57->SetBinError(3,9.741767);
   htotpass_cat3_2016_fit_b__57->SetBinError(4,12.99298);
   htotpass_cat3_2016_fit_b__57->SetBinError(5,15.98977);
   htotpass_cat3_2016_fit_b__57->SetBinError(6,25.48823);
   htotpass_cat3_2016_fit_b__57->SetBinError(7,32.21808);
   htotpass_cat3_2016_fit_b__57->SetBinError(8,32.02296);
   htotpass_cat3_2016_fit_b__57->SetBinError(9,27.42365);
   htotpass_cat3_2016_fit_b__57->SetBinError(10,22.43944);
   htotpass_cat3_2016_fit_b__57->SetBinError(11,5.587511e-07);
   htotpass_cat3_2016_fit_b__57->SetBinError(12,5.587511e-07);
   htotpass_cat3_2016_fit_b__57->SetBinError(13,5.587511e-07);
   htotpass_cat3_2016_fit_b__57->SetBinError(14,13.80822);
   htotpass_cat3_2016_fit_b__57->SetBinError(15,11.35725);
   htotpass_cat3_2016_fit_b__57->SetBinError(16,8.432492);
   htotpass_cat3_2016_fit_b__57->SetBinError(17,7.518451);
   htotpass_cat3_2016_fit_b__57->SetBinError(18,6.484103);
   htotpass_cat3_2016_fit_b__57->SetBinError(19,4.784977);
   htotpass_cat3_2016_fit_b__57->SetBinError(20,4.168086);
   htotpass_cat3_2016_fit_b__57->SetBinError(21,3.573128);
   htotpass_cat3_2016_fit_b__57->SetBinError(22,3.011527);
   htotpass_cat3_2016_fit_b__57->SetBinError(23,2.830538);
   htotpass_cat3_2016_fit_b__57->SetMinimum(0);
   htotpass_cat3_2016_fit_b__57->SetMaximum(1089.999);
   htotpass_cat3_2016_fit_b__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__57->SetFillColor(ci);
   htotpass_cat3_2016_fit_b__57->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__57->SetLineColor(ci);
   htotpass_cat3_2016_fit_b__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b__57->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b__57->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__57->Draw("");
   
   TH1F *htot_linepass_cat3_2016_fit_b__58 = new TH1F("htot_linepass_cat3_2016_fit_b__58","wqq in cat3_2016_pass_cat3",23,40,201);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(1,3.823326e-06);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(2,610.5871);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(3,641.5523);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(4,650.9022);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(5,653.9094);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(6,702.3375);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(7,726.666);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(8,676.9249);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(9,621.7668);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(10,548.4602);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(11,3.823326e-06);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(12,3.823326e-06);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(13,3.823326e-06);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(14,398.938);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(15,365.445);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(16,320.2093);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(17,279.6446);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(18,242.5428);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(19,198.9295);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(20,168.7336);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(21,133.6274);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(22,101.181);
   htot_linepass_cat3_2016_fit_b__58->SetBinContent(23,77.61595);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(1,5.587511e-07);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(2,9.842598);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(3,9.741767);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(4,12.99298);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(5,15.98977);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(6,25.48823);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(7,32.21808);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(8,32.02296);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(9,27.42365);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(10,22.43944);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(11,5.587511e-07);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(12,5.587511e-07);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(13,5.587511e-07);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(14,13.80822);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(15,11.35725);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(16,8.432492);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(17,7.518451);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(18,6.484103);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(19,4.784977);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(20,4.168086);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(21,3.573128);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(22,3.011527);
   htot_linepass_cat3_2016_fit_b__58->SetBinError(23,2.830538);
   htot_linepass_cat3_2016_fit_b__58->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_b__58->SetFillColor(ci);
   htot_linepass_cat3_2016_fit_b__58->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_fit_b__58->SetLineColor(ci);
   htot_linepass_cat3_2016_fit_b__58->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat3_2016_fit_b__58->SetMarkerColor(ci);
   htot_linepass_cat3_2016_fit_b__58->SetMarkerSize(0);
   htot_linepass_cat3_2016_fit_b__58->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat3_2016_fit_b__58->GetXaxis()->SetRange(2,23);
   htot_linepass_cat3_2016_fit_b__58->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_b__58->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_b__58->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_b__58->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_b__58->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat3_2016_fit_b__58->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_b__58->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat3_2016_fit_b__58->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat3_2016_fit_b__58->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat3_2016_fit_b__58->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_b__58->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_fit_b__58->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_fit_b__58->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_fit_b__58->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_fit_b__58->Draw("histsame");
   
   TH1F *qcd__59 = new TH1F("qcd__59","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__59->SetBinContent(2,600.7183);
   qcd__59->SetBinContent(3,626.4976);
   qcd__59->SetBinContent(4,622.3932);
   qcd__59->SetBinContent(5,600.9588);
   qcd__59->SetBinContent(6,571.46);
   qcd__59->SetBinContent(7,546.6286);
   qcd__59->SetBinContent(8,521.4642);
   qcd__59->SetBinContent(9,494.8955);
   qcd__59->SetBinContent(10,476.891);
   qcd__59->SetBinContent(14,372.6451);
   qcd__59->SetBinContent(15,345.6846);
   qcd__59->SetBinContent(16,306.7186);
   qcd__59->SetBinContent(17,267.419);
   qcd__59->SetBinContent(18,231.807);
   qcd__59->SetBinContent(19,193.9673);
   qcd__59->SetBinContent(20,163.9714);
   qcd__59->SetBinContent(21,130.3668);
   qcd__59->SetBinContent(22,100.4026);
   qcd__59->SetBinContent(23,76.83756);
   qcd__59->SetBinError(2,9.171342);
   qcd__59->SetBinError(3,8.82417);
   qcd__59->SetBinError(4,10.62199);
   qcd__59->SetBinError(5,12.82908);
   qcd__59->SetBinError(6,16.25598);
   qcd__59->SetBinError(7,18.15409);
   qcd__59->SetBinError(8,18.25248);
   qcd__59->SetBinError(9,16.25567);
   qcd__59->SetBinError(10,14.26764);
   qcd__59->SetBinError(14,8.889521);
   qcd__59->SetBinError(15,8.010192);
   qcd__59->SetBinError(16,6.394753);
   qcd__59->SetBinError(17,5.631507);
   qcd__59->SetBinError(18,4.786371);
   qcd__59->SetBinError(19,4.336843);
   qcd__59->SetBinError(20,3.688892);
   qcd__59->SetBinError(21,3.316956);
   qcd__59->SetBinError(22,2.994781);
   qcd__59->SetBinError(23,2.812714);
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
   
   TH1F *htotpass_cat3_2016_fit_b__60 = new TH1F("htotpass_cat3_2016_fit_b__60","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b__60->SetBinContent(1,3.823326e-06);
   htotpass_cat3_2016_fit_b__60->SetBinContent(2,610.5871);
   htotpass_cat3_2016_fit_b__60->SetBinContent(3,641.5523);
   htotpass_cat3_2016_fit_b__60->SetBinContent(4,650.9022);
   htotpass_cat3_2016_fit_b__60->SetBinContent(5,653.9094);
   htotpass_cat3_2016_fit_b__60->SetBinContent(6,702.3375);
   htotpass_cat3_2016_fit_b__60->SetBinContent(7,726.666);
   htotpass_cat3_2016_fit_b__60->SetBinContent(8,676.9249);
   htotpass_cat3_2016_fit_b__60->SetBinContent(9,621.7668);
   htotpass_cat3_2016_fit_b__60->SetBinContent(10,548.4602);
   htotpass_cat3_2016_fit_b__60->SetBinContent(11,3.823326e-06);
   htotpass_cat3_2016_fit_b__60->SetBinContent(12,3.823326e-06);
   htotpass_cat3_2016_fit_b__60->SetBinContent(13,3.823326e-06);
   htotpass_cat3_2016_fit_b__60->SetBinContent(14,398.938);
   htotpass_cat3_2016_fit_b__60->SetBinContent(15,365.445);
   htotpass_cat3_2016_fit_b__60->SetBinContent(16,320.2093);
   htotpass_cat3_2016_fit_b__60->SetBinContent(17,279.6446);
   htotpass_cat3_2016_fit_b__60->SetBinContent(18,242.5428);
   htotpass_cat3_2016_fit_b__60->SetBinContent(19,198.9295);
   htotpass_cat3_2016_fit_b__60->SetBinContent(20,168.7336);
   htotpass_cat3_2016_fit_b__60->SetBinContent(21,133.6274);
   htotpass_cat3_2016_fit_b__60->SetBinContent(22,101.181);
   htotpass_cat3_2016_fit_b__60->SetBinContent(23,77.61595);
   htotpass_cat3_2016_fit_b__60->SetBinError(1,5.587511e-07);
   htotpass_cat3_2016_fit_b__60->SetBinError(2,9.842598);
   htotpass_cat3_2016_fit_b__60->SetBinError(3,9.741767);
   htotpass_cat3_2016_fit_b__60->SetBinError(4,12.99298);
   htotpass_cat3_2016_fit_b__60->SetBinError(5,15.98977);
   htotpass_cat3_2016_fit_b__60->SetBinError(6,25.48823);
   htotpass_cat3_2016_fit_b__60->SetBinError(7,32.21808);
   htotpass_cat3_2016_fit_b__60->SetBinError(8,32.02296);
   htotpass_cat3_2016_fit_b__60->SetBinError(9,27.42365);
   htotpass_cat3_2016_fit_b__60->SetBinError(10,22.43944);
   htotpass_cat3_2016_fit_b__60->SetBinError(11,5.587511e-07);
   htotpass_cat3_2016_fit_b__60->SetBinError(12,5.587511e-07);
   htotpass_cat3_2016_fit_b__60->SetBinError(13,5.587511e-07);
   htotpass_cat3_2016_fit_b__60->SetBinError(14,13.80822);
   htotpass_cat3_2016_fit_b__60->SetBinError(15,11.35725);
   htotpass_cat3_2016_fit_b__60->SetBinError(16,8.432492);
   htotpass_cat3_2016_fit_b__60->SetBinError(17,7.518451);
   htotpass_cat3_2016_fit_b__60->SetBinError(18,6.484103);
   htotpass_cat3_2016_fit_b__60->SetBinError(19,4.784977);
   htotpass_cat3_2016_fit_b__60->SetBinError(20,4.168086);
   htotpass_cat3_2016_fit_b__60->SetBinError(21,3.573128);
   htotpass_cat3_2016_fit_b__60->SetBinError(22,3.011527);
   htotpass_cat3_2016_fit_b__60->SetBinError(23,2.830538);
   htotpass_cat3_2016_fit_b__60->SetMinimum(0);
   htotpass_cat3_2016_fit_b__60->SetMaximum(1089.999);
   htotpass_cat3_2016_fit_b__60->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__60->SetFillColor(ci);
   htotpass_cat3_2016_fit_b__60->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__60->SetLineColor(ci);
   htotpass_cat3_2016_fit_b__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b__60->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b__60->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__60->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(0);
   hstackMC_stack_15->SetMaximum(189.0392);
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
   tqq_stack_1->SetBinContent(2,8.615848);
   tqq_stack_1->SetBinContent(3,9.833173);
   tqq_stack_1->SetBinContent(4,15.45687);
   tqq_stack_1->SetBinContent(5,17.0816);
   tqq_stack_1->SetBinContent(6,33.78553);
   tqq_stack_1->SetBinContent(7,39.77124);
   tqq_stack_1->SetBinContent(8,32.55613);
   tqq_stack_1->SetBinContent(9,37.19496);
   tqq_stack_1->SetBinContent(10,31.08868);
   tqq_stack_1->SetBinContent(14,25.91859);
   tqq_stack_1->SetBinContent(15,19.7604);
   tqq_stack_1->SetBinContent(16,13.49065);
   tqq_stack_1->SetBinContent(17,12.22559);
   tqq_stack_1->SetBinContent(18,10.73579);
   tqq_stack_1->SetBinContent(19,4.962184);
   tqq_stack_1->SetBinContent(20,4.762244);
   tqq_stack_1->SetBinContent(21,3.260667);
   tqq_stack_1->SetBinContent(22,0.7783847);
   tqq_stack_1->SetBinContent(23,0.7783847);
   tqq_stack_1->SetBinError(2,3.510506);
   tqq_stack_1->SetBinError(3,4.006503);
   tqq_stack_1->SetBinError(4,6.297863);
   tqq_stack_1->SetBinError(5,6.959856);
   tqq_stack_1->SetBinError(6,13.76583);
   tqq_stack_1->SetBinError(7,16.2047);
   tqq_stack_1->SetBinError(8,13.26492);
   tqq_stack_1->SetBinError(9,15.15499);
   tqq_stack_1->SetBinError(10,12.66701);
   tqq_stack_1->SetBinError(14,10.56047);
   tqq_stack_1->SetBinError(15,8.051328);
   tqq_stack_1->SetBinError(16,5.496732);
   tqq_stack_1->SetBinError(17,4.981289);
   tqq_stack_1->SetBinError(18,4.37427);
   tqq_stack_1->SetBinError(19,2.02183);
   tqq_stack_1->SetBinError(20,1.940365);
   tqq_stack_1->SetBinError(21,1.328551);
   tqq_stack_1->SetBinError(22,0.317151);
   tqq_stack_1->SetBinError(23,0.317151);
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
   wqq_stack_2->SetBinContent(1,1.988317e-06);
   wqq_stack_2->SetBinContent(2,0.9872607);
   wqq_stack_2->SetBinContent(3,3.739223);
   wqq_stack_2->SetBinContent(4,11.51459);
   wqq_stack_2->SetBinContent(5,28.22599);
   wqq_stack_2->SetBinContent(6,73.14296);
   wqq_stack_2->SetBinContent(7,96.94008);
   wqq_stack_2->SetBinContent(8,43.78943);
   wqq_stack_2->SetBinContent(9,17.91179);
   wqq_stack_2->SetBinContent(10,7.793903);
   wqq_stack_2->SetBinContent(11,1.988317e-06);
   wqq_stack_2->SetBinContent(12,1.988317e-06);
   wqq_stack_2->SetBinContent(13,1.988317e-06);
   wqq_stack_2->SetBinContent(14,1.988317e-06);
   wqq_stack_2->SetBinContent(15,1.988317e-06);
   wqq_stack_2->SetBinContent(16,1.988317e-06);
   wqq_stack_2->SetBinContent(17,1.988317e-06);
   wqq_stack_2->SetBinContent(18,1.988317e-06);
   wqq_stack_2->SetBinContent(19,1.988317e-06);
   wqq_stack_2->SetBinContent(20,1.988317e-06);
   wqq_stack_2->SetBinContent(21,1.988317e-06);
   wqq_stack_2->SetBinContent(22,1.988317e-06);
   wqq_stack_2->SetBinContent(23,1.988317e-06);
   wqq_stack_2->SetBinError(1,3.733419e-07);
   wqq_stack_2->SetBinError(2,0.6308889);
   wqq_stack_2->SetBinError(3,0.8114464);
   wqq_stack_2->SetBinError(4,3.996449);
   wqq_stack_2->SetBinError(5,5.439487);
   wqq_stack_2->SetBinError(6,12.32089);
   wqq_stack_2->SetBinError(7,17.80513);
   wqq_stack_2->SetBinError(8,13.39747);
   wqq_stack_2->SetBinError(9,4.230902);
   wqq_stack_2->SetBinError(10,2.667095);
   wqq_stack_2->SetBinError(11,3.733419e-07);
   wqq_stack_2->SetBinError(12,3.733419e-07);
   wqq_stack_2->SetBinError(13,3.733419e-07);
   wqq_stack_2->SetBinError(14,3.733419e-07);
   wqq_stack_2->SetBinError(15,3.733419e-07);
   wqq_stack_2->SetBinError(16,3.733419e-07);
   wqq_stack_2->SetBinError(17,3.733419e-07);
   wqq_stack_2->SetBinError(18,3.733419e-07);
   wqq_stack_2->SetBinError(19,3.733419e-07);
   wqq_stack_2->SetBinError(20,3.733419e-07);
   wqq_stack_2->SetBinError(21,3.733419e-07);
   wqq_stack_2->SetBinError(22,3.733419e-07);
   wqq_stack_2->SetBinError(23,3.733419e-07);
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
   zqq_stack_3->SetBinContent(1,1.83501e-06);
   zqq_stack_3->SetBinContent(2,0.2656924);
   zqq_stack_3->SetBinContent(3,1.48231);
   zqq_stack_3->SetBinContent(4,1.537606);
   zqq_stack_3->SetBinContent(5,7.642951);
   zqq_stack_3->SetBinContent(6,23.949);
   zqq_stack_3->SetBinContent(7,43.32603);
   zqq_stack_3->SetBinContent(8,79.11515);
   zqq_stack_3->SetBinContent(9,71.76455);
   zqq_stack_3->SetBinContent(10,32.68659);
   zqq_stack_3->SetBinContent(11,1.83501e-06);
   zqq_stack_3->SetBinContent(12,1.83501e-06);
   zqq_stack_3->SetBinContent(13,1.83501e-06);
   zqq_stack_3->SetBinContent(14,0.374362);
   zqq_stack_3->SetBinContent(15,1.83501e-06);
   zqq_stack_3->SetBinContent(16,1.83501e-06);
   zqq_stack_3->SetBinContent(17,1.83501e-06);
   zqq_stack_3->SetBinContent(18,1.83501e-06);
   zqq_stack_3->SetBinContent(19,1.83501e-06);
   zqq_stack_3->SetBinContent(20,1.83501e-06);
   zqq_stack_3->SetBinContent(21,1.83501e-06);
   zqq_stack_3->SetBinContent(22,1.83501e-06);
   zqq_stack_3->SetBinContent(23,1.83501e-06);
   zqq_stack_3->SetBinError(1,4.157145e-07);
   zqq_stack_3->SetBinError(2,0.2038362);
   zqq_stack_3->SetBinError(3,0.5705642);
   zqq_stack_3->SetBinError(4,0.5966847);
   zqq_stack_3->SetBinError(5,3.613836);
   zqq_stack_3->SetBinError(6,6.640071);
   zqq_stack_3->SetBinError(7,11.34983);
   zqq_stack_3->SetBinError(8,18.35393);
   zqq_stack_3->SetBinError(9,15.49953);
   zqq_stack_3->SetBinError(10,11.50638);
   zqq_stack_3->SetBinError(11,4.157145e-07);
   zqq_stack_3->SetBinError(12,4.157145e-07);
   zqq_stack_3->SetBinError(13,4.157145e-07);
   zqq_stack_3->SetBinError(14,0.346268);
   zqq_stack_3->SetBinError(15,4.157145e-07);
   zqq_stack_3->SetBinError(16,4.157145e-07);
   zqq_stack_3->SetBinError(17,4.157145e-07);
   zqq_stack_3->SetBinError(18,4.157145e-07);
   zqq_stack_3->SetBinError(19,4.157145e-07);
   zqq_stack_3->SetBinError(20,4.157145e-07);
   zqq_stack_3->SetBinError(21,4.157145e-07);
   zqq_stack_3->SetBinError(22,4.157145e-07);
   zqq_stack_3->SetBinError(23,4.157145e-07);
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
   
   TH1F *hsigpass_cat3_2016_fit_b_stack_4 = new TH1F("hsigpass_cat3_2016_fit_b_stack_4","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_fit_b_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat3_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat3_2016_fit_b_copy__61 = new TH1F("htotpass_cat3_2016_fit_b_copy__61","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(1,3.823326e-06);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(2,610.5871);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(3,641.5523);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(4,650.9022);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(5,653.9094);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(6,702.3375);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(7,726.666);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(8,676.9249);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(9,621.7668);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(10,548.4602);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(11,3.823326e-06);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(12,3.823326e-06);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(13,3.823326e-06);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(14,398.938);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(15,365.445);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(16,320.2093);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(17,279.6446);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(18,242.5428);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(19,198.9295);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(20,168.7336);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(21,133.6274);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(22,101.181);
   htotpass_cat3_2016_fit_b_copy__61->SetBinContent(23,77.61595);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(1,5.587511e-07);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(2,9.842598);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(3,9.741767);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(4,12.99298);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(5,15.98977);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(6,25.48823);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(7,32.21808);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(8,32.02296);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(9,27.42365);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(10,22.43944);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(11,5.587511e-07);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(12,5.587511e-07);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(13,5.587511e-07);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(14,13.80822);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(15,11.35725);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(16,8.432492);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(17,7.518451);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(18,6.484103);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(19,4.784977);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(20,4.168086);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(21,3.573128);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(22,3.011527);
   htotpass_cat3_2016_fit_b_copy__61->SetBinError(23,2.830538);
   htotpass_cat3_2016_fit_b_copy__61->SetMaximum(1089.999);
   htotpass_cat3_2016_fit_b_copy__61->SetEntries(92);
   htotpass_cat3_2016_fit_b_copy__61->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b_copy__61->SetFillColor(ci);
   htotpass_cat3_2016_fit_b_copy__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b_copy__61->SetLineColor(ci);
   htotpass_cat3_2016_fit_b_copy__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b_copy__61->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b_copy__61->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b_copy__61->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__61->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b_copy__61->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__61->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b_copy__61->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b_copy__61->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b_copy__61->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__61->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__61->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b_copy__61->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b_copy__61->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__61->Draw("sameaxis");
   p12pass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_fit_b
   TPad *p22pass_cat3_2016_fit_b = new TPad("p22pass_cat3_2016_fit_b", "p22pass_cat3_2016_fit_b",0,0,1,0.3);
   p22pass_cat3_2016_fit_b->Draw();
   p22pass_cat3_2016_fit_b->cd();
   p22pass_cat3_2016_fit_b->Range(13.7027,-11.03223,221.8108,9.075209);
   p22pass_cat3_2016_fit_b->SetFillColor(0);
   p22pass_cat3_2016_fit_b->SetBorderMode(0);
   p22pass_cat3_2016_fit_b->SetBorderSize(2);
   p22pass_cat3_2016_fit_b->SetTickx(1);
   p22pass_cat3_2016_fit_b->SetTicky(1);
   p22pass_cat3_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat3_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat3_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b__62 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b__62","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b__62->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_b__62->SetMaximum(8.069837);
   iOneWithErrorspass_cat3_2016_fit_b__62->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__62->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__62->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__62->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__62->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__62->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(-15.326);
   hstack_stack_16->SetMaximum(22.45096);
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
   
   
   TH1F *sigHistResidualwqqpass_cat3_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat3_2016_fit_b_stack_1","wqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(2,0.03870291);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(3,0.1461377);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(4,0.4648075);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(5,1.102297);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(6,2.777078);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(7,3.569145);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(8,1.67593);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(9,0.7407573);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(10,0.3367432);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(14,9.705648e-08);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(15,1.027198e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(16,1.082014e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(17,1.2315e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(18,1.347664e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(19,1.439926e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(20,1.463132e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(21,1.962297e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(22,2.032822e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinContent(23,2.02228e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(1,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(2,0.6308889);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(3,0.8114464);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(4,3.996449);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(5,5.439487);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(6,12.32089);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(7,17.80513);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(8,13.39747);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(9,4.230902);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(10,2.667095);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(11,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(12,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(13,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(14,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(15,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(16,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(17,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(18,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(19,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(20,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(21,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(22,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetBinError(23,3.733419e-07);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat3_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat3_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat3_2016_fit_b_stack_2","zqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(2,0.01041576);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(3,0.05793217);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(4,0.0620683);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(5,0.2984767);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(6,0.9092911);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(7,1.59518);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(8,3.027933);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(9,2.967883);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(10,1.412256);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(14,0.01827388);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(15,9.479973e-08);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(16,9.985864e-08);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(17,1.136547e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(18,1.243753e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(19,1.328902e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(20,1.350319e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(21,1.810996e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(22,1.876084e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinContent(23,1.866354e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(1,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(2,0.2038362);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(3,0.5705642);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(4,0.5966847);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(5,3.613836);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(6,6.640071);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(7,11.34983);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(8,18.35393);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(9,15.49953);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(10,11.50638);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(11,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(12,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(13,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(14,0.346268);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(15,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(16,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(17,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(18,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(19,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(20,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(21,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(22,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetBinError(23,4.157145e-07);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat3_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_fit_b__63 = new TH1F("iOneWithErrorsLinepass_cat3_2016_fit_b__63","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fy3016[23] = {
   0,
   1.570616,
   0.7016759,
   -0.9627506,
   1.425654,
   3.24429,
   5.379891,
   4.75105,
   2.099493,
   1.159464,
   0,
   0,
   0,
   0.996546,
   0.4687808,
   0.9168893,
   -1.154787,
   -1.663487,
   -0.5742486,
   1.112133,
   -3.022662,
   -0.5296985,
   1.781138};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_fit_b_fx3016,Graph_from_iRatiopass_cat3_2016_fit_b_fy3016,Graph_from_iRatiopass_cat3_2016_fit_b_felx3016,Graph_from_iRatiopass_cat3_2016_fit_b_fehx3016,Graph_from_iRatiopass_cat3_2016_fit_b_fely3016,Graph_from_iRatiopass_cat3_2016_fit_b_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->SetMinimum(-5.062918);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->SetMaximum(7.420147);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_fit_b3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b_copy__64 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b_copy__64","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetMaximum(8.069837);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetEntries(184);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__64->Draw("sameaxis");
   p22pass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
   cpass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
   cpass_cat3_2016_fit_b->SetSelected(cpass_cat3_2016_fit_b);
}
