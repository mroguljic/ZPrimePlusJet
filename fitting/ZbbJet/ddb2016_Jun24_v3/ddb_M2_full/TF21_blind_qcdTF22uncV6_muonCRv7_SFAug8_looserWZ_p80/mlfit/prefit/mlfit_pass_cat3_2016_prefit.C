void mlfit_pass_cat3_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat3_2016_prefit/cpass_cat3_2016_prefit
//=========  (Thu Sep 26 13:57:12 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_prefit = new TCanvas("cpass_cat3_2016_prefit", "cpass_cat3_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_prefit->SetHighLightColor(2);
   cpass_cat3_2016_prefit->Range(0,0,1,1);
   cpass_cat3_2016_prefit->SetFillColor(0);
   cpass_cat3_2016_prefit->SetBorderMode(0);
   cpass_cat3_2016_prefit->SetBorderSize(2);
   cpass_cat3_2016_prefit->SetTickx(1);
   cpass_cat3_2016_prefit->SetTicky(1);
   cpass_cat3_2016_prefit->SetLeftMargin(0.16);
   cpass_cat3_2016_prefit->SetBottomMargin(0.13);
   cpass_cat3_2016_prefit->SetFrameFillStyle(0);
   cpass_cat3_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_prefit
   TPad *p12pass_cat3_2016_prefit = new TPad("p12pass_cat3_2016_prefit", "p12pass_cat3_2016_prefit",0,0.3,1,1);
   p12pass_cat3_2016_prefit->Draw();
   p12pass_cat3_2016_prefit->cd();
   p12pass_cat3_2016_prefit->Range(13.7027,-24.65372,221.8108,1208.032);
   p12pass_cat3_2016_prefit->SetFillColor(0);
   p12pass_cat3_2016_prefit->SetBorderMode(0);
   p12pass_cat3_2016_prefit->SetBorderSize(2);
   p12pass_cat3_2016_prefit->SetTickx(1);
   p12pass_cat3_2016_prefit->SetTicky(1);
   p12pass_cat3_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat3_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat3_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat3_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_prefit__57 = new TH1F("htotpass_cat3_2016_prefit__57","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_prefit__57->SetBinContent(1,4.257061e-06);
   htotpass_cat3_2016_prefit__57->SetBinContent(2,601.424);
   htotpass_cat3_2016_prefit__57->SetBinContent(3,640.4138);
   htotpass_cat3_2016_prefit__57->SetBinContent(4,638.0262);
   htotpass_cat3_2016_prefit__57->SetBinContent(5,640.6811);
   htotpass_cat3_2016_prefit__57->SetBinContent(6,700.3884);
   htotpass_cat3_2016_prefit__57->SetBinContent(7,723.1757);
   htotpass_cat3_2016_prefit__57->SetBinContent(8,703.6049);
   htotpass_cat3_2016_prefit__57->SetBinContent(9,636.0799);
   htotpass_cat3_2016_prefit__57->SetBinContent(10,507.0621);
   htotpass_cat3_2016_prefit__57->SetBinContent(11,4.257061e-06);
   htotpass_cat3_2016_prefit__57->SetBinContent(12,4.257061e-06);
   htotpass_cat3_2016_prefit__57->SetBinContent(13,4.257061e-06);
   htotpass_cat3_2016_prefit__57->SetBinContent(14,387.0721);
   htotpass_cat3_2016_prefit__57->SetBinContent(15,354.9685);
   htotpass_cat3_2016_prefit__57->SetBinContent(16,313.3969);
   htotpass_cat3_2016_prefit__57->SetBinContent(17,274.5942);
   htotpass_cat3_2016_prefit__57->SetBinContent(18,237.5272);
   htotpass_cat3_2016_prefit__57->SetBinContent(19,196.0472);
   htotpass_cat3_2016_prefit__57->SetBinContent(20,164.8459);
   htotpass_cat3_2016_prefit__57->SetBinContent(21,131.5979);
   htotpass_cat3_2016_prefit__57->SetBinContent(22,99.41525);
   htotpass_cat3_2016_prefit__57->SetBinContent(23,75.248);
   htotpass_cat3_2016_prefit__57->SetBinError(1,7.882776e-07);
   htotpass_cat3_2016_prefit__57->SetBinError(2,16.67459);
   htotpass_cat3_2016_prefit__57->SetBinError(3,11.65453);
   htotpass_cat3_2016_prefit__57->SetBinError(4,11.17244);
   htotpass_cat3_2016_prefit__57->SetBinError(5,15.63497);
   htotpass_cat3_2016_prefit__57->SetBinError(6,25.52982);
   htotpass_cat3_2016_prefit__57->SetBinError(7,36.50829);
   htotpass_cat3_2016_prefit__57->SetBinError(8,46.21728);
   htotpass_cat3_2016_prefit__57->SetBinError(9,37.03723);
   htotpass_cat3_2016_prefit__57->SetBinError(10,25.18504);
   htotpass_cat3_2016_prefit__57->SetBinError(11,7.882776e-07);
   htotpass_cat3_2016_prefit__57->SetBinError(12,7.882776e-07);
   htotpass_cat3_2016_prefit__57->SetBinError(13,7.882776e-07);
   htotpass_cat3_2016_prefit__57->SetBinError(14,9.806306);
   htotpass_cat3_2016_prefit__57->SetBinError(15,8.04703);
   htotpass_cat3_2016_prefit__57->SetBinError(16,6.43709);
   htotpass_cat3_2016_prefit__57->SetBinError(17,6.173853);
   htotpass_cat3_2016_prefit__57->SetBinError(18,5.963213);
   htotpass_cat3_2016_prefit__57->SetBinError(19,5.148959);
   htotpass_cat3_2016_prefit__57->SetBinError(20,5.328753);
   htotpass_cat3_2016_prefit__57->SetBinError(21,5.267101);
   htotpass_cat3_2016_prefit__57->SetBinError(22,5.077525);
   htotpass_cat3_2016_prefit__57->SetBinError(23,5.074248);
   htotpass_cat3_2016_prefit__57->SetMinimum(0);
   htotpass_cat3_2016_prefit__57->SetMaximum(1084.763);
   htotpass_cat3_2016_prefit__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__57->SetFillColor(ci);
   htotpass_cat3_2016_prefit__57->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__57->SetLineColor(ci);
   htotpass_cat3_2016_prefit__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_prefit__57->SetMarkerColor(ci);
   htotpass_cat3_2016_prefit__57->SetMarkerSize(0);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_prefit__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_prefit__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_prefit__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_prefit__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_prefit__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__57->Draw("");
   
   TH1F *htot_linepass_cat3_2016_prefit__58 = new TH1F("htot_linepass_cat3_2016_prefit__58","wqq in cat3_2016_pass_cat3",23,40,201);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(1,4.257061e-06);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(2,601.424);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(3,640.4138);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(4,638.0262);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(5,640.6811);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(6,700.3884);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(7,723.1757);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(8,703.6049);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(9,636.0799);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(10,507.0621);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(11,4.257061e-06);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(12,4.257061e-06);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(13,4.257061e-06);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(14,387.0721);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(15,354.9685);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(16,313.3969);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(17,274.5942);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(18,237.5272);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(19,196.0472);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(20,164.8459);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(21,131.5979);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(22,99.41525);
   htot_linepass_cat3_2016_prefit__58->SetBinContent(23,75.248);
   htot_linepass_cat3_2016_prefit__58->SetBinError(1,7.882776e-07);
   htot_linepass_cat3_2016_prefit__58->SetBinError(2,16.67459);
   htot_linepass_cat3_2016_prefit__58->SetBinError(3,11.65453);
   htot_linepass_cat3_2016_prefit__58->SetBinError(4,11.17244);
   htot_linepass_cat3_2016_prefit__58->SetBinError(5,15.63497);
   htot_linepass_cat3_2016_prefit__58->SetBinError(6,25.52982);
   htot_linepass_cat3_2016_prefit__58->SetBinError(7,36.50829);
   htot_linepass_cat3_2016_prefit__58->SetBinError(8,46.21728);
   htot_linepass_cat3_2016_prefit__58->SetBinError(9,37.03723);
   htot_linepass_cat3_2016_prefit__58->SetBinError(10,25.18504);
   htot_linepass_cat3_2016_prefit__58->SetBinError(11,7.882776e-07);
   htot_linepass_cat3_2016_prefit__58->SetBinError(12,7.882776e-07);
   htot_linepass_cat3_2016_prefit__58->SetBinError(13,7.882776e-07);
   htot_linepass_cat3_2016_prefit__58->SetBinError(14,9.806306);
   htot_linepass_cat3_2016_prefit__58->SetBinError(15,8.04703);
   htot_linepass_cat3_2016_prefit__58->SetBinError(16,6.43709);
   htot_linepass_cat3_2016_prefit__58->SetBinError(17,6.173853);
   htot_linepass_cat3_2016_prefit__58->SetBinError(18,5.963213);
   htot_linepass_cat3_2016_prefit__58->SetBinError(19,5.148959);
   htot_linepass_cat3_2016_prefit__58->SetBinError(20,5.328753);
   htot_linepass_cat3_2016_prefit__58->SetBinError(21,5.267101);
   htot_linepass_cat3_2016_prefit__58->SetBinError(22,5.077525);
   htot_linepass_cat3_2016_prefit__58->SetBinError(23,5.074248);
   htot_linepass_cat3_2016_prefit__58->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_prefit__58->SetFillColor(ci);
   htot_linepass_cat3_2016_prefit__58->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_prefit__58->SetLineColor(ci);
   htot_linepass_cat3_2016_prefit__58->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat3_2016_prefit__58->SetMarkerColor(ci);
   htot_linepass_cat3_2016_prefit__58->SetMarkerSize(0);
   htot_linepass_cat3_2016_prefit__58->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat3_2016_prefit__58->GetXaxis()->SetRange(2,23);
   htot_linepass_cat3_2016_prefit__58->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_prefit__58->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_prefit__58->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_prefit__58->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_prefit__58->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat3_2016_prefit__58->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_prefit__58->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat3_2016_prefit__58->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat3_2016_prefit__58->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat3_2016_prefit__58->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_prefit__58->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_prefit__58->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_prefit__58->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_prefit__58->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_prefit__58->Draw("histsame");
   
   TH1F *qcd__59 = new TH1F("qcd__59","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__59->SetBinContent(2,596.8401);
   qcd__59->SetBinContent(3,627.2316);
   qcd__59->SetBinContent(4,624.1072);
   qcd__59->SetBinContent(5,601.6513);
   qcd__59->SetBinContent(6,570.6396);
   qcd__59->SetBinContent(7,543.294);
   qcd__59->SetBinContent(8,522.2505);
   qcd__59->SetBinContent(9,498.2933);
   qcd__59->SetBinContent(10,478.4883);
   qcd__59->SetBinContent(14,373.2829);
   qcd__59->SetBinContent(15,344.4557);
   qcd__59->SetBinContent(16,306.2196);
   qcd__59->SetBinContent(17,268.0899);
   qcd__59->SetBinContent(18,231.8156);
   qcd__59->SetBinContent(19,193.4072);
   qcd__59->SetBinContent(20,162.3123);
   qcd__59->SetBinContent(21,129.8632);
   qcd__59->SetBinContent(22,99.00114);
   qcd__59->SetBinContent(23,74.83389);
   qcd__59->SetBinError(2,16.39011);
   qcd__59->SetBinError(3,10.95027);
   qcd__59->SetBinError(4,8.58493);
   qcd__59->SetBinError(5,7.597276);
   qcd__59->SetBinError(6,7.094074);
   qcd__59->SetBinError(7,6.785895);
   qcd__59->SetBinError(8,6.559716);
   qcd__59->SetBinError(9,6.265325);
   qcd__59->SetBinError(10,5.995912);
   qcd__59->SetBinError(14,4.843874);
   qcd__59->SetBinError(15,4.754818);
   qcd__59->SetBinError(16,4.66818);
   qcd__59->SetBinError(17,4.688677);
   qcd__59->SetBinError(18,4.808269);
   qcd__59->SetBinError(19,4.884058);
   qcd__59->SetBinError(20,5.09389);
   qcd__59->SetBinError(21,5.157012);
   qcd__59->SetBinError(22,5.071081);
   qcd__59->SetBinError(23,5.0678);
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
   
   TH1F *htotpass_cat3_2016_prefit__60 = new TH1F("htotpass_cat3_2016_prefit__60","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_prefit__60->SetBinContent(1,4.257061e-06);
   htotpass_cat3_2016_prefit__60->SetBinContent(2,601.424);
   htotpass_cat3_2016_prefit__60->SetBinContent(3,640.4138);
   htotpass_cat3_2016_prefit__60->SetBinContent(4,638.0262);
   htotpass_cat3_2016_prefit__60->SetBinContent(5,640.6811);
   htotpass_cat3_2016_prefit__60->SetBinContent(6,700.3884);
   htotpass_cat3_2016_prefit__60->SetBinContent(7,723.1757);
   htotpass_cat3_2016_prefit__60->SetBinContent(8,703.6049);
   htotpass_cat3_2016_prefit__60->SetBinContent(9,636.0799);
   htotpass_cat3_2016_prefit__60->SetBinContent(10,507.0621);
   htotpass_cat3_2016_prefit__60->SetBinContent(11,4.257061e-06);
   htotpass_cat3_2016_prefit__60->SetBinContent(12,4.257061e-06);
   htotpass_cat3_2016_prefit__60->SetBinContent(13,4.257061e-06);
   htotpass_cat3_2016_prefit__60->SetBinContent(14,387.0721);
   htotpass_cat3_2016_prefit__60->SetBinContent(15,354.9685);
   htotpass_cat3_2016_prefit__60->SetBinContent(16,313.3969);
   htotpass_cat3_2016_prefit__60->SetBinContent(17,274.5942);
   htotpass_cat3_2016_prefit__60->SetBinContent(18,237.5272);
   htotpass_cat3_2016_prefit__60->SetBinContent(19,196.0472);
   htotpass_cat3_2016_prefit__60->SetBinContent(20,164.8459);
   htotpass_cat3_2016_prefit__60->SetBinContent(21,131.5979);
   htotpass_cat3_2016_prefit__60->SetBinContent(22,99.41525);
   htotpass_cat3_2016_prefit__60->SetBinContent(23,75.248);
   htotpass_cat3_2016_prefit__60->SetBinError(1,7.882776e-07);
   htotpass_cat3_2016_prefit__60->SetBinError(2,16.67459);
   htotpass_cat3_2016_prefit__60->SetBinError(3,11.65453);
   htotpass_cat3_2016_prefit__60->SetBinError(4,11.17244);
   htotpass_cat3_2016_prefit__60->SetBinError(5,15.63497);
   htotpass_cat3_2016_prefit__60->SetBinError(6,25.52982);
   htotpass_cat3_2016_prefit__60->SetBinError(7,36.50829);
   htotpass_cat3_2016_prefit__60->SetBinError(8,46.21728);
   htotpass_cat3_2016_prefit__60->SetBinError(9,37.03723);
   htotpass_cat3_2016_prefit__60->SetBinError(10,25.18504);
   htotpass_cat3_2016_prefit__60->SetBinError(11,7.882776e-07);
   htotpass_cat3_2016_prefit__60->SetBinError(12,7.882776e-07);
   htotpass_cat3_2016_prefit__60->SetBinError(13,7.882776e-07);
   htotpass_cat3_2016_prefit__60->SetBinError(14,9.806306);
   htotpass_cat3_2016_prefit__60->SetBinError(15,8.04703);
   htotpass_cat3_2016_prefit__60->SetBinError(16,6.43709);
   htotpass_cat3_2016_prefit__60->SetBinError(17,6.173853);
   htotpass_cat3_2016_prefit__60->SetBinError(18,5.963213);
   htotpass_cat3_2016_prefit__60->SetBinError(19,5.148959);
   htotpass_cat3_2016_prefit__60->SetBinError(20,5.328753);
   htotpass_cat3_2016_prefit__60->SetBinError(21,5.267101);
   htotpass_cat3_2016_prefit__60->SetBinError(22,5.077525);
   htotpass_cat3_2016_prefit__60->SetBinError(23,5.074248);
   htotpass_cat3_2016_prefit__60->SetMinimum(0);
   htotpass_cat3_2016_prefit__60->SetMaximum(1084.763);
   htotpass_cat3_2016_prefit__60->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__60->SetFillColor(ci);
   htotpass_cat3_2016_prefit__60->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__60->SetLineColor(ci);
   htotpass_cat3_2016_prefit__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_prefit__60->SetMarkerColor(ci);
   htotpass_cat3_2016_prefit__60->SetMarkerSize(0);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_prefit__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_prefit__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_prefit__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_prefit__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_prefit__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__60->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(-23.90558);
   hstackMC_stack_15->SetMaximum(194.6778);
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
   tqq_stack_1->SetBinContent(2,4.58378);
   tqq_stack_1->SetBinContent(3,5.231419);
   tqq_stack_1->SetBinContent(4,8.223321);
   tqq_stack_1->SetBinContent(5,9.087708);
   tqq_stack_1->SetBinContent(6,17.97449);
   tqq_stack_1->SetBinContent(7,21.15899);
   tqq_stack_1->SetBinContent(8,17.32043);
   tqq_stack_1->SetBinContent(9,19.78836);
   tqq_stack_1->SetBinContent(10,16.53972);
   tqq_stack_1->SetBinContent(14,13.78914);
   tqq_stack_1->SetBinContent(15,10.51287);
   tqq_stack_1->SetBinContent(16,7.177259);
   tqq_stack_1->SetBinContent(17,6.504226);
   tqq_stack_1->SetBinContent(18,5.711624);
   tqq_stack_1->SetBinContent(19,2.639968);
   tqq_stack_1->SetBinContent(20,2.533597);
   tqq_stack_1->SetBinContent(21,1.734731);
   tqq_stack_1->SetBinContent(22,0.4141142);
   tqq_stack_1->SetBinContent(23,0.4141142);
   tqq_stack_1->SetBinError(2,2.830626);
   tqq_stack_1->SetBinError(3,3.230563);
   tqq_stack_1->SetBinError(4,5.078156);
   tqq_stack_1->SetBinError(5,5.611942);
   tqq_stack_1->SetBinError(6,11.0998);
   tqq_stack_1->SetBinError(7,13.06634);
   tqq_stack_1->SetBinError(8,10.6959);
   tqq_stack_1->SetBinError(9,12.21993);
   tqq_stack_1->SetBinError(10,10.21379);
   tqq_stack_1->SetBinError(14,8.515221);
   tqq_stack_1->SetBinError(15,6.492026);
   tqq_stack_1->SetBinError(16,4.43218);
   tqq_stack_1->SetBinError(17,4.016561);
   tqq_stack_1->SetBinError(18,3.527105);
   tqq_stack_1->SetBinError(19,1.630262);
   tqq_stack_1->SetBinError(20,1.564575);
   tqq_stack_1->SetBinError(21,1.07125);
   tqq_stack_1->SetBinError(22,0.2557283);
   tqq_stack_1->SetBinError(23,0.2557283);
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
   wqq_stack_2->SetBinContent(1,1.666617e-06);
   wqq_stack_2->SetBinContent(2,1.666617e-06);
   wqq_stack_2->SetBinContent(3,3.510665);
   wqq_stack_2->SetBinContent(4,5.695725);
   wqq_stack_2->SetBinContent(5,25.2469);
   wqq_stack_2->SetBinContent(6,72.30769);
   wqq_stack_2->SetBinContent(7,94.33781);
   wqq_stack_2->SetBinContent(8,21.49481);
   wqq_stack_2->SetBinContent(9,12.72604);
   wqq_stack_2->SetBinContent(10,2.768538);
   wqq_stack_2->SetBinContent(11,1.666617e-06);
   wqq_stack_2->SetBinContent(12,1.666617e-06);
   wqq_stack_2->SetBinContent(13,1.666617e-06);
   wqq_stack_2->SetBinContent(14,1.666617e-06);
   wqq_stack_2->SetBinContent(15,1.666617e-06);
   wqq_stack_2->SetBinContent(16,1.666617e-06);
   wqq_stack_2->SetBinContent(17,1.666617e-06);
   wqq_stack_2->SetBinContent(18,1.666617e-06);
   wqq_stack_2->SetBinContent(19,1.666617e-06);
   wqq_stack_2->SetBinContent(20,1.666617e-06);
   wqq_stack_2->SetBinContent(21,1.666617e-06);
   wqq_stack_2->SetBinContent(22,1.666617e-06);
   wqq_stack_2->SetBinContent(23,1.666617e-06);
   wqq_stack_2->SetBinError(1,3.757004e-07);
   wqq_stack_2->SetBinError(2,0.844309);
   wqq_stack_2->SetBinError(3,1.040972);
   wqq_stack_2->SetBinError(4,4.782146);
   wqq_stack_2->SetBinError(5,8.989935);
   wqq_stack_2->SetBinError(6,17.75126);
   wqq_stack_2->SetBinError(7,23.71948);
   wqq_stack_2->SetBinError(8,11.8709);
   wqq_stack_2->SetBinError(9,3.653476);
   wqq_stack_2->SetBinError(10,2.360559);
   wqq_stack_2->SetBinError(11,3.757004e-07);
   wqq_stack_2->SetBinError(12,3.757004e-07);
   wqq_stack_2->SetBinError(13,3.757004e-07);
   wqq_stack_2->SetBinError(14,3.757004e-07);
   wqq_stack_2->SetBinError(15,3.757004e-07);
   wqq_stack_2->SetBinError(16,3.757004e-07);
   wqq_stack_2->SetBinError(17,3.757004e-07);
   wqq_stack_2->SetBinError(18,3.757004e-07);
   wqq_stack_2->SetBinError(19,3.757004e-07);
   wqq_stack_2->SetBinError(20,3.757004e-07);
   wqq_stack_2->SetBinError(21,3.757004e-07);
   wqq_stack_2->SetBinError(22,3.757004e-07);
   wqq_stack_2->SetBinError(23,3.757004e-07);
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
   zqq_stack_3->SetBinContent(1,2.590444e-06);
   zqq_stack_3->SetBinContent(2,2.590444e-06);
   zqq_stack_3->SetBinContent(3,4.440021);
   zqq_stack_3->SetBinContent(4,2.590444e-06);
   zqq_stack_3->SetBinContent(5,4.695195);
   zqq_stack_3->SetBinContent(6,39.46658);
   zqq_stack_3->SetBinContent(7,64.38483);
   zqq_stack_3->SetBinContent(8,142.5392);
   zqq_stack_3->SetBinContent(9,105.2722);
   zqq_stack_3->SetBinContent(10,9.265484);
   zqq_stack_3->SetBinContent(11,2.590444e-06);
   zqq_stack_3->SetBinContent(12,2.590444e-06);
   zqq_stack_3->SetBinContent(13,2.590444e-06);
   zqq_stack_3->SetBinContent(14,2.590444e-06);
   zqq_stack_3->SetBinContent(15,2.590444e-06);
   zqq_stack_3->SetBinContent(16,2.590444e-06);
   zqq_stack_3->SetBinContent(17,2.590444e-06);
   zqq_stack_3->SetBinContent(18,2.590444e-06);
   zqq_stack_3->SetBinContent(19,2.590444e-06);
   zqq_stack_3->SetBinContent(20,2.590444e-06);
   zqq_stack_3->SetBinContent(21,2.590444e-06);
   zqq_stack_3->SetBinContent(22,2.590444e-06);
   zqq_stack_3->SetBinContent(23,2.590444e-06);
   zqq_stack_3->SetBinError(1,6.929868e-07);
   zqq_stack_3->SetBinError(2,0.8253265);
   zqq_stack_3->SetBinError(3,2.09747);
   zqq_stack_3->SetBinError(4,1.570284);
   zqq_stack_3->SetBinError(5,8.626749);
   zqq_stack_3->SetBinError(6,12.77236);
   zqq_stack_3->SetBinError(7,23.52582);
   zqq_stack_3->SetBinError(8,42.86824);
   zqq_stack_3->SetBinError(9,34.20274);
   zqq_stack_3->SetBinError(10,22.10072);
   zqq_stack_3->SetBinError(11,6.929868e-07);
   zqq_stack_3->SetBinError(12,6.929868e-07);
   zqq_stack_3->SetBinError(13,6.929868e-07);
   zqq_stack_3->SetBinError(14,0.4376531);
   zqq_stack_3->SetBinError(15,6.929868e-07);
   zqq_stack_3->SetBinError(16,6.929868e-07);
   zqq_stack_3->SetBinError(17,6.929868e-07);
   zqq_stack_3->SetBinError(18,6.929868e-07);
   zqq_stack_3->SetBinError(19,6.929868e-07);
   zqq_stack_3->SetBinError(20,6.929868e-07);
   zqq_stack_3->SetBinError(21,6.929868e-07);
   zqq_stack_3->SetBinError(22,6.929868e-07);
   zqq_stack_3->SetBinError(23,6.929868e-07);
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
   
   TH1F *hsigpass_cat3_2016_prefit_stack_4 = new TH1F("hsigpass_cat3_2016_prefit_stack_4","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(1,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(2,0.007289121);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(3,0.02047808);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(4,0.01733828);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(5,0.1899052);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(6,0.2083735);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(7,0.4735312);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(8,0.4657216);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(9,0.7934976);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(10,1.810448);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(11,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(12,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(13,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(14,5.054578);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(15,1.134251);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(16,0.3251308);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(17,0.01373303);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(18,0.02083634);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(19,0.02515118);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(20,0.00573285);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(21,0.01682105);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(22,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(23,0.006088414);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(1,5.133177e-07);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(2,0.02151233);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(3,0.06043722);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(4,0.03742122);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(5,1.305588);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(6,1.181006);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(7,5.072137);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(8,2.337686);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(9,6.155949);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(10,17.57937);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(11,5.133177e-07);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(12,5.133177e-07);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(13,5.133177e-07);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(14,28.96016);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(15,10.95157);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(16,2.361931);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(17,0.4074359);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(18,0.1330754);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(19,0.05798121);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(20,0.01870218);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(21,0.05006063);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(22,0.001394848);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(23,0.01796866);
   hsigpass_cat3_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_prefit_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat3_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat3_2016_prefit_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat3_2016_prefit_copy__61 = new TH1F("htotpass_cat3_2016_prefit_copy__61","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(1,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(2,601.424);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(3,640.4138);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(4,638.0262);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(5,640.6811);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(6,700.3884);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(7,723.1757);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(8,703.6049);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(9,636.0799);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(10,507.0621);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(11,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(12,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(13,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(14,387.0721);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(15,354.9685);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(16,313.3969);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(17,274.5942);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(18,237.5272);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(19,196.0472);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(20,164.8459);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(21,131.5979);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(22,99.41525);
   htotpass_cat3_2016_prefit_copy__61->SetBinContent(23,75.248);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(1,7.882776e-07);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(2,16.67459);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(3,11.65453);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(4,11.17244);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(5,15.63497);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(6,25.52982);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(7,36.50829);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(8,46.21728);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(9,37.03723);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(10,25.18504);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(11,7.882776e-07);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(12,7.882776e-07);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(13,7.882776e-07);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(14,9.806306);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(15,8.04703);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(16,6.43709);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(17,6.173853);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(18,5.963213);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(19,5.148959);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(20,5.328753);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(21,5.267101);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(22,5.077525);
   htotpass_cat3_2016_prefit_copy__61->SetBinError(23,5.074248);
   htotpass_cat3_2016_prefit_copy__61->SetMaximum(1084.763);
   htotpass_cat3_2016_prefit_copy__61->SetEntries(92);
   htotpass_cat3_2016_prefit_copy__61->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit_copy__61->SetFillColor(ci);
   htotpass_cat3_2016_prefit_copy__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit_copy__61->SetLineColor(ci);
   htotpass_cat3_2016_prefit_copy__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_prefit_copy__61->SetMarkerColor(ci);
   htotpass_cat3_2016_prefit_copy__61->SetMarkerSize(0);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_prefit_copy__61->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit_copy__61->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_prefit_copy__61->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit_copy__61->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_prefit_copy__61->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_prefit_copy__61->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_prefit_copy__61->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit_copy__61->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit_copy__61->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit_copy__61->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit_copy__61->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit_copy__61->Draw("sameaxis");
   p12pass_cat3_2016_prefit->Modified();
   cpass_cat3_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_prefit
   TPad *p22pass_cat3_2016_prefit = new TPad("p22pass_cat3_2016_prefit", "p22pass_cat3_2016_prefit",0,0,1,0.3);
   p22pass_cat3_2016_prefit->Draw();
   p22pass_cat3_2016_prefit->cd();
   p22pass_cat3_2016_prefit->Range(13.7027,-11.57143,221.8108,10.33333);
   p22pass_cat3_2016_prefit->SetFillColor(0);
   p22pass_cat3_2016_prefit->SetBorderMode(0);
   p22pass_cat3_2016_prefit->SetBorderSize(2);
   p22pass_cat3_2016_prefit->SetTickx(1);
   p22pass_cat3_2016_prefit->SetTicky(1);
   p22pass_cat3_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat3_2016_prefit->SetTopMargin(0.05);
   p22pass_cat3_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat3_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat3_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_prefit__62 = new TH1F("iOneWithErrorspass_cat3_2016_prefit__62","",23,40,201);
   iOneWithErrorspass_cat3_2016_prefit__62->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_prefit__62->SetMaximum(9.23809);
   iOneWithErrorspass_cat3_2016_prefit__62->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit__62->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_prefit__62->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit__62->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_prefit__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_prefit__62->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_prefit__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_prefit__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit__62->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(-37.41292);
   hstack_stack_16->SetMaximum(50.73975);
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
   
   
   TH1F *sigHistResidualwqqpass_cat3_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat3_2016_prefit_stack_1","wqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(2,6.533525e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(3,0.1372051);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(4,0.2299184);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(5,0.9859559);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(6,2.745365);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(7,3.473335);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(8,0.8226596);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(9,0.5262961);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(10,0.1196174);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(14,8.135324e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(15,8.610029e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(16,9.069495e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(17,1.03225e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(18,1.129618e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(19,1.206954e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(20,1.226405e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(21,1.644807e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(22,1.703922e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(23,1.695086e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(1,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(2,0.844309);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(3,1.040972);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(4,4.782146);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(5,8.989935);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(6,17.75126);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(7,23.71948);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(8,11.8709);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(9,3.653476);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(10,2.360559);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(11,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(12,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(13,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(14,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(15,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(16,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(17,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(18,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(19,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(20,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(21,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(22,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(23,3.757004e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat3_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat3_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat3_2016_prefit_stack_2","zqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(2,1.015514e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(3,0.1735265);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(4,1.045681e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(5,0.1833593);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(6,1.49846);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(7,2.370525);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(8,5.455327);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(9,4.353622);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(10,0.4003242);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(14,1.264484e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(15,1.338268e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(16,1.409683e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(17,1.604439e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(18,1.755781e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(19,1.875983e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(20,1.906216e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(21,2.556545e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(22,2.648428e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(23,2.634693e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(1,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(2,0.8253265);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(3,2.09747);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(4,1.570284);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(5,8.626749);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(6,12.77236);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(7,23.52582);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(8,42.86824);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(9,34.20274);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(10,22.10072);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(11,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(12,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(13,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(14,0.4376531);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(15,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(16,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(17,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(18,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(19,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(20,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(21,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(22,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(23,6.929868e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat3_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(2,0.0002857504);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(3,0.0008003321);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(4,0.0006998916);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(5,0.007416284);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(6,0.007911487);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(7,0.0174345);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(8,0.01782432);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(9,0.03281576);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(10,0.07822215);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(14,0.2467311);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(15,0.05859732);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(16,0.01769316);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(17,0.0008505803);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(18,0.001412269);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(19,0.001821433);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(20,0.0004218601);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(21,0.001660092);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(22,7.578145e-09);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(23,0.0006192413);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(1,5.133177e-07);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(2,0.02151233);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(3,0.06043722);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(4,0.03742122);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(5,1.305588);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(6,1.181006);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(7,5.072137);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(8,2.337686);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(9,6.155949);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(10,17.57937);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(11,5.133177e-07);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(12,5.133177e-07);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(13,5.133177e-07);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(14,28.96016);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(15,10.95157);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(16,2.361931);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(17,0.4074359);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(18,0.1330754);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(19,0.05798121);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(20,0.01870218);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(21,0.05006063);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(22,0.001394848);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(23,0.01796866);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_prefit__63 = new TH1F("iOneWithErrorsLinepass_cat3_2016_prefit__63","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fy3016[23] = {
   0,
   1.868796,
   0.8470436,
   -0.7399446,
   1.699873,
   3.852227,
   6.158727,
   5.283301,
   2.655373,
   1.695395,
   0,
   0,
   0,
   1.530774,
   0.9827738,
   1.267987,
   -0.8419783,
   -1.323537,
   -0.3655147,
   1.377936,
   -2.822366,
   -0.3491698,
   1.998721};
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_prefit_fx3016,Graph_from_iRatiopass_cat3_2016_prefit_fy3016,Graph_from_iRatiopass_cat3_2016_prefit_felx3016,Graph_from_iRatiopass_cat3_2016_prefit_fehx3016,Graph_from_iRatiopass_cat3_2016_prefit_fely3016,Graph_from_iRatiopass_cat3_2016_prefit_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_prefit3016 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_prefit3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->SetMinimum(-4.920475);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->SetMaximum(8.256836);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_prefit3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_prefit_copy__64 = new TH1F("iOneWithErrorspass_cat3_2016_prefit_copy__64","",23,40,201);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetMaximum(9.23809);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetEntries(184);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__64->Draw("sameaxis");
   p22pass_cat3_2016_prefit->Modified();
   cpass_cat3_2016_prefit->cd();
   cpass_cat3_2016_prefit->Modified();
   cpass_cat3_2016_prefit->cd();
   cpass_cat3_2016_prefit->SetSelected(cpass_cat3_2016_prefit);
}
