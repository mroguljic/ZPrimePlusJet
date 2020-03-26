void mlfit_pass_cat1_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat1_2016_prefit/cpass_cat1_2016_prefit
//=========  (Wed Sep  4 11:54:12 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat1_2016_prefit = new TCanvas("cpass_cat1_2016_prefit", "cpass_cat1_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat1_2016_prefit->SetHighLightColor(2);
   cpass_cat1_2016_prefit->Range(0,0,1,1);
   cpass_cat1_2016_prefit->SetFillColor(0);
   cpass_cat1_2016_prefit->SetBorderMode(0);
   cpass_cat1_2016_prefit->SetBorderSize(2);
   cpass_cat1_2016_prefit->SetTickx(1);
   cpass_cat1_2016_prefit->SetTicky(1);
   cpass_cat1_2016_prefit->SetLeftMargin(0.16);
   cpass_cat1_2016_prefit->SetBottomMargin(0.13);
   cpass_cat1_2016_prefit->SetFrameFillStyle(0);
   cpass_cat1_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat1_2016_prefit
   TPad *p12pass_cat1_2016_prefit = new TPad("p12pass_cat1_2016_prefit", "p12pass_cat1_2016_prefit",0,0.3,1,1);
   p12pass_cat1_2016_prefit->Draw();
   p12pass_cat1_2016_prefit->cd();
   p12pass_cat1_2016_prefit->Range(21.27027,-96.81806,182.0811,4744.085);
   p12pass_cat1_2016_prefit->SetFillColor(0);
   p12pass_cat1_2016_prefit->SetBorderMode(0);
   p12pass_cat1_2016_prefit->SetBorderSize(2);
   p12pass_cat1_2016_prefit->SetTickx(1);
   p12pass_cat1_2016_prefit->SetTicky(1);
   p12pass_cat1_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat1_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat1_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat1_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat1_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat1_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat1_2016_prefit__9 = new TH1F("htotpass_cat1_2016_prefit__9","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_prefit__9->SetBinContent(1,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(2,2337.302);
   htotpass_cat1_2016_prefit__9->SetBinContent(3,2537.3);
   htotpass_cat1_2016_prefit__9->SetBinContent(4,2582.004);
   htotpass_cat1_2016_prefit__9->SetBinContent(5,2603.125);
   htotpass_cat1_2016_prefit__9->SetBinContent(6,2744.905);
   htotpass_cat1_2016_prefit__9->SetBinContent(7,2839.996);
   htotpass_cat1_2016_prefit__9->SetBinContent(8,2750.083);
   htotpass_cat1_2016_prefit__9->SetBinContent(9,2338.628);
   htotpass_cat1_2016_prefit__9->SetBinContent(10,2097.395);
   htotpass_cat1_2016_prefit__9->SetBinContent(11,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(12,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(13,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(14,1229.367);
   htotpass_cat1_2016_prefit__9->SetBinContent(15,1013.169);
   htotpass_cat1_2016_prefit__9->SetBinContent(16,810.2809);
   htotpass_cat1_2016_prefit__9->SetBinContent(17,643.2025);
   htotpass_cat1_2016_prefit__9->SetBinContent(18,486.6756);
   htotpass_cat1_2016_prefit__9->SetBinContent(19,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(20,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(21,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(22,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinContent(23,1.102705e-05);
   htotpass_cat1_2016_prefit__9->SetBinError(1,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(2,73.43943);
   htotpass_cat1_2016_prefit__9->SetBinError(3,54.47381);
   htotpass_cat1_2016_prefit__9->SetBinError(4,47.24699);
   htotpass_cat1_2016_prefit__9->SetBinError(5,50.78343);
   htotpass_cat1_2016_prefit__9->SetBinError(6,70.76867);
   htotpass_cat1_2016_prefit__9->SetBinError(7,105.1182);
   htotpass_cat1_2016_prefit__9->SetBinError(8,115.3728);
   htotpass_cat1_2016_prefit__9->SetBinError(9,69.61907);
   htotpass_cat1_2016_prefit__9->SetBinError(10,54.93642);
   htotpass_cat1_2016_prefit__9->SetBinError(11,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(12,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(13,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(14,33.29516);
   htotpass_cat1_2016_prefit__9->SetBinError(15,28.75207);
   htotpass_cat1_2016_prefit__9->SetBinError(16,24.76133);
   htotpass_cat1_2016_prefit__9->SetBinError(17,24.21638);
   htotpass_cat1_2016_prefit__9->SetBinError(18,22.9926);
   htotpass_cat1_2016_prefit__9->SetBinError(19,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(20,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(21,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(22,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetBinError(23,2.002985e-06);
   htotpass_cat1_2016_prefit__9->SetMinimum(0);
   htotpass_cat1_2016_prefit__9->SetMaximum(4259.995);
   htotpass_cat1_2016_prefit__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_prefit__9->SetFillColor(ci);
   htotpass_cat1_2016_prefit__9->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_prefit__9->SetLineColor(ci);
   htotpass_cat1_2016_prefit__9->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_prefit__9->SetMarkerColor(ci);
   htotpass_cat1_2016_prefit__9->SetMarkerSize(0);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_prefit__9->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit__9->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_prefit__9->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit__9->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_prefit__9->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_prefit__9->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_prefit__9->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit__9->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit__9->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_prefit__9->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_prefit__9->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit__9->Draw("");
   
   TH1F *htot_linepass_cat1_2016_prefit__10 = new TH1F("htot_linepass_cat1_2016_prefit__10","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(1,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(2,2337.302);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(3,2537.3);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(4,2582.004);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(5,2603.125);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(6,2744.905);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(7,2839.996);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(8,2750.083);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(9,2338.628);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(10,2097.395);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(11,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(12,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(13,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(14,1229.367);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(15,1013.169);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(16,810.2809);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(17,643.2025);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(18,486.6756);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(19,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(20,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(21,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(22,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinContent(23,1.102705e-05);
   htot_linepass_cat1_2016_prefit__10->SetBinError(1,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(2,73.43943);
   htot_linepass_cat1_2016_prefit__10->SetBinError(3,54.47381);
   htot_linepass_cat1_2016_prefit__10->SetBinError(4,47.24699);
   htot_linepass_cat1_2016_prefit__10->SetBinError(5,50.78343);
   htot_linepass_cat1_2016_prefit__10->SetBinError(6,70.76867);
   htot_linepass_cat1_2016_prefit__10->SetBinError(7,105.1182);
   htot_linepass_cat1_2016_prefit__10->SetBinError(8,115.3728);
   htot_linepass_cat1_2016_prefit__10->SetBinError(9,69.61907);
   htot_linepass_cat1_2016_prefit__10->SetBinError(10,54.93642);
   htot_linepass_cat1_2016_prefit__10->SetBinError(11,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(12,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(13,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(14,33.29516);
   htot_linepass_cat1_2016_prefit__10->SetBinError(15,28.75207);
   htot_linepass_cat1_2016_prefit__10->SetBinError(16,24.76133);
   htot_linepass_cat1_2016_prefit__10->SetBinError(17,24.21638);
   htot_linepass_cat1_2016_prefit__10->SetBinError(18,22.9926);
   htot_linepass_cat1_2016_prefit__10->SetBinError(19,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(20,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(21,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(22,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetBinError(23,2.002985e-06);
   htot_linepass_cat1_2016_prefit__10->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_prefit__10->SetFillColor(ci);
   htot_linepass_cat1_2016_prefit__10->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_prefit__10->SetLineColor(ci);
   htot_linepass_cat1_2016_prefit__10->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat1_2016_prefit__10->SetMarkerColor(ci);
   htot_linepass_cat1_2016_prefit__10->SetMarkerSize(0);
   htot_linepass_cat1_2016_prefit__10->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat1_2016_prefit__10->GetXaxis()->SetRange(2,18);
   htot_linepass_cat1_2016_prefit__10->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_prefit__10->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_prefit__10->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_prefit__10->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_prefit__10->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat1_2016_prefit__10->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_prefit__10->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat1_2016_prefit__10->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat1_2016_prefit__10->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat1_2016_prefit__10->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_prefit__10->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_prefit__10->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_prefit__10->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_prefit__10->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_prefit__10->Draw("histsame");
   
   TH1F *qcd__11 = new TH1F("qcd__11","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__11->SetBinContent(2,2319.902);
   qcd__11->SetBinContent(3,2509.383);
   qcd__11->SetBinContent(4,2526.664);
   qcd__11->SetBinContent(5,2493.226);
   qcd__11->SetBinContent(6,2418.199);
   qcd__11->SetBinContent(7,2314.564);
   qcd__11->SetBinContent(8,2224.951);
   qcd__11->SetBinContent(9,2092.797);
   qcd__11->SetBinContent(10,1945.828);
   qcd__11->SetBinContent(14,1187.195);
   qcd__11->SetBinContent(15,982.5542);
   qcd__11->SetBinContent(16,793.6656);
   qcd__11->SetBinContent(17,629.2446);
   qcd__11->SetBinContent(18,476.4559);
   qcd__11->SetBinError(2,72.93892);
   qcd__11->SetBinError(3,52.67039);
   qcd__11->SetBinError(4,43.83634);
   qcd__11->SetBinError(5,40.62943);
   qcd__11->SetBinError(6,38.82684);
   qcd__11->SetBinError(7,36.97798);
   qcd__11->SetBinError(8,35.29593);
   qcd__11->SetBinError(9,32.879);
   qcd__11->SetBinError(10,30.36022);
   qcd__11->SetBinError(14,23.55741);
   qcd__11->SetBinError(15,23.12969);
   qcd__11->SetBinError(16,22.96092);
   qcd__11->SetBinError(17,22.93032);
   qcd__11->SetBinError(18,22.27453);
   qcd__11->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__11->SetLineColor(ci);
   qcd__11->SetLineStyle(2);
   qcd__11->SetLineWidth(2);
   qcd__11->GetXaxis()->SetTitle("x");
   qcd__11->GetXaxis()->SetLabelFont(42);
   qcd__11->GetXaxis()->SetLabelSize(0.035);
   qcd__11->GetXaxis()->SetTitleSize(0.035);
   qcd__11->GetXaxis()->SetTitleFont(42);
   qcd__11->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__11->GetYaxis()->SetLabelFont(42);
   qcd__11->GetYaxis()->SetLabelSize(0.035);
   qcd__11->GetYaxis()->SetTitleSize(0.035);
   qcd__11->GetYaxis()->SetTitleOffset(0);
   qcd__11->GetYaxis()->SetTitleFont(42);
   qcd__11->GetZaxis()->SetLabelFont(42);
   qcd__11->GetZaxis()->SetLabelSize(0.035);
   qcd__11->GetZaxis()->SetTitleSize(0.035);
   qcd__11->GetZaxis()->SetTitleFont(42);
   qcd__11->Draw("hist sames");
   
   TH1F *htotpass_cat1_2016_prefit__12 = new TH1F("htotpass_cat1_2016_prefit__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_prefit__12->SetBinContent(1,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(2,2337.302);
   htotpass_cat1_2016_prefit__12->SetBinContent(3,2537.3);
   htotpass_cat1_2016_prefit__12->SetBinContent(4,2582.004);
   htotpass_cat1_2016_prefit__12->SetBinContent(5,2603.125);
   htotpass_cat1_2016_prefit__12->SetBinContent(6,2744.905);
   htotpass_cat1_2016_prefit__12->SetBinContent(7,2839.996);
   htotpass_cat1_2016_prefit__12->SetBinContent(8,2750.083);
   htotpass_cat1_2016_prefit__12->SetBinContent(9,2338.628);
   htotpass_cat1_2016_prefit__12->SetBinContent(10,2097.395);
   htotpass_cat1_2016_prefit__12->SetBinContent(11,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(12,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(13,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(14,1229.367);
   htotpass_cat1_2016_prefit__12->SetBinContent(15,1013.169);
   htotpass_cat1_2016_prefit__12->SetBinContent(16,810.2809);
   htotpass_cat1_2016_prefit__12->SetBinContent(17,643.2025);
   htotpass_cat1_2016_prefit__12->SetBinContent(18,486.6756);
   htotpass_cat1_2016_prefit__12->SetBinContent(19,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(20,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(21,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(22,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinContent(23,1.102705e-05);
   htotpass_cat1_2016_prefit__12->SetBinError(1,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(2,73.43943);
   htotpass_cat1_2016_prefit__12->SetBinError(3,54.47381);
   htotpass_cat1_2016_prefit__12->SetBinError(4,47.24699);
   htotpass_cat1_2016_prefit__12->SetBinError(5,50.78343);
   htotpass_cat1_2016_prefit__12->SetBinError(6,70.76867);
   htotpass_cat1_2016_prefit__12->SetBinError(7,105.1182);
   htotpass_cat1_2016_prefit__12->SetBinError(8,115.3728);
   htotpass_cat1_2016_prefit__12->SetBinError(9,69.61907);
   htotpass_cat1_2016_prefit__12->SetBinError(10,54.93642);
   htotpass_cat1_2016_prefit__12->SetBinError(11,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(12,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(13,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(14,33.29516);
   htotpass_cat1_2016_prefit__12->SetBinError(15,28.75207);
   htotpass_cat1_2016_prefit__12->SetBinError(16,24.76133);
   htotpass_cat1_2016_prefit__12->SetBinError(17,24.21638);
   htotpass_cat1_2016_prefit__12->SetBinError(18,22.9926);
   htotpass_cat1_2016_prefit__12->SetBinError(19,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(20,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(21,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(22,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetBinError(23,2.002985e-06);
   htotpass_cat1_2016_prefit__12->SetMinimum(0);
   htotpass_cat1_2016_prefit__12->SetMaximum(4259.995);
   htotpass_cat1_2016_prefit__12->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_prefit__12->SetFillColor(ci);
   htotpass_cat1_2016_prefit__12->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_prefit__12->SetLineColor(ci);
   htotpass_cat1_2016_prefit__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_prefit__12->SetMarkerColor(ci);
   htotpass_cat1_2016_prefit__12->SetMarkerSize(0);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_prefit__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_prefit__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_prefit__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_prefit__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_prefit__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_prefit__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_prefit__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit__12->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis3[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_3 = new TH1F("hstackMC_stack_3","hstackMC",23, xAxis3);
   hstackMC_stack_3->SetMinimum(-72.75091);
   hstackMC_stack_3->SetMaximum(552.9664);
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
   tqq_stack_1->SetBinContent(2,14.88135);
   tqq_stack_1->SetBinContent(3,24.06423);
   tqq_stack_1->SetBinContent(4,28.07993);
   tqq_stack_1->SetBinContent(5,37.36596);
   tqq_stack_1->SetBinContent(6,58.51656);
   tqq_stack_1->SetBinContent(7,63.76628);
   tqq_stack_1->SetBinContent(8,62.82562);
   tqq_stack_1->SetBinContent(9,56.97991);
   tqq_stack_1->SetBinContent(10,63.44951);
   tqq_stack_1->SetBinContent(14,42.17213);
   tqq_stack_1->SetBinContent(15,30.61461);
   tqq_stack_1->SetBinContent(16,16.61531);
   tqq_stack_1->SetBinContent(17,13.95782);
   tqq_stack_1->SetBinContent(18,10.21962);
   tqq_stack_1->SetBinError(2,8.301966);
   tqq_stack_1->SetBinError(3,13.42488);
   tqq_stack_1->SetBinError(4,15.66515);
   tqq_stack_1->SetBinError(5,20.84561);
   tqq_stack_1->SetBinError(6,32.64505);
   tqq_stack_1->SetBinError(7,35.57374);
   tqq_stack_1->SetBinError(8,35.04897);
   tqq_stack_1->SetBinError(9,31.78779);
   tqq_stack_1->SetBinError(10,35.39702);
   tqq_stack_1->SetBinError(14,23.52686);
   tqq_stack_1->SetBinError(15,17.07919);
   tqq_stack_1->SetBinError(16,9.269297);
   tqq_stack_1->SetBinError(17,7.786747);
   tqq_stack_1->SetBinError(18,5.701288);
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
   wqq_stack_2->SetBinContent(1,3.75995e-06);
   wqq_stack_2->SetBinContent(2,2.517884);
   wqq_stack_2->SetBinContent(3,3.75995e-06);
   wqq_stack_2->SetBinContent(4,15.82749);
   wqq_stack_2->SetBinContent(5,51.61112);
   wqq_stack_2->SetBinContent(6,171.7113);
   wqq_stack_2->SetBinContent(7,173.735);
   wqq_stack_2->SetBinContent(8,104.0979);
   wqq_stack_2->SetBinContent(9,12.94413);
   wqq_stack_2->SetBinContent(10,4.690821);
   wqq_stack_2->SetBinContent(11,3.75995e-06);
   wqq_stack_2->SetBinContent(12,3.75995e-06);
   wqq_stack_2->SetBinContent(13,3.75995e-06);
   wqq_stack_2->SetBinContent(14,3.75995e-06);
   wqq_stack_2->SetBinContent(15,3.75995e-06);
   wqq_stack_2->SetBinContent(16,3.75995e-06);
   wqq_stack_2->SetBinContent(17,3.75995e-06);
   wqq_stack_2->SetBinContent(18,3.75995e-06);
   wqq_stack_2->SetBinContent(19,3.75995e-06);
   wqq_stack_2->SetBinContent(20,3.75995e-06);
   wqq_stack_2->SetBinContent(21,3.75995e-06);
   wqq_stack_2->SetBinContent(22,3.75995e-06);
   wqq_stack_2->SetBinContent(23,3.75995e-06);
   wqq_stack_2->SetBinError(1,7.055455e-07);
   wqq_stack_2->SetBinError(2,0.9905596);
   wqq_stack_2->SetBinError(3,3.115672);
   wqq_stack_2->SetBinError(4,7.189659);
   wqq_stack_2->SetBinError(5,15.48199);
   wqq_stack_2->SetBinError(6,36.79077);
   wqq_stack_2->SetBinError(7,35.88493);
   wqq_stack_2->SetBinError(8,27.73144);
   wqq_stack_2->SetBinError(9,18.04027);
   wqq_stack_2->SetBinError(10,1.796436);
   wqq_stack_2->SetBinError(11,7.055455e-07);
   wqq_stack_2->SetBinError(12,7.055455e-07);
   wqq_stack_2->SetBinError(13,7.055455e-07);
   wqq_stack_2->SetBinError(14,0.321494);
   wqq_stack_2->SetBinError(15,7.055455e-07);
   wqq_stack_2->SetBinError(16,7.055455e-07);
   wqq_stack_2->SetBinError(17,7.055455e-07);
   wqq_stack_2->SetBinError(18,7.055455e-07);
   wqq_stack_2->SetBinError(19,7.055455e-07);
   wqq_stack_2->SetBinError(20,7.055455e-07);
   wqq_stack_2->SetBinError(21,7.055455e-07);
   wqq_stack_2->SetBinError(22,7.055455e-07);
   wqq_stack_2->SetBinError(23,7.055455e-07);
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
   zqq_stack_3->SetBinContent(1,7.267101e-06);
   zqq_stack_3->SetBinContent(2,7.267101e-06);
   zqq_stack_3->SetBinContent(3,3.853014);
   zqq_stack_3->SetBinContent(4,11.43188);
   zqq_stack_3->SetBinContent(5,20.92189);
   zqq_stack_3->SetBinContent(6,96.47791);
   zqq_stack_3->SetBinContent(7,287.9306);
   zqq_stack_3->SetBinContent(8,358.2085);
   zqq_stack_3->SetBinContent(9,175.9071);
   zqq_stack_3->SetBinContent(10,83.42646);
   zqq_stack_3->SetBinContent(11,7.267101e-06);
   zqq_stack_3->SetBinContent(12,7.267101e-06);
   zqq_stack_3->SetBinContent(13,7.267101e-06);
   zqq_stack_3->SetBinContent(14,7.267101e-06);
   zqq_stack_3->SetBinContent(15,7.267101e-06);
   zqq_stack_3->SetBinContent(16,7.267101e-06);
   zqq_stack_3->SetBinContent(17,7.267101e-06);
   zqq_stack_3->SetBinContent(18,7.267101e-06);
   zqq_stack_3->SetBinContent(19,7.267101e-06);
   zqq_stack_3->SetBinContent(20,7.267101e-06);
   zqq_stack_3->SetBinContent(21,7.267101e-06);
   zqq_stack_3->SetBinContent(22,7.267101e-06);
   zqq_stack_3->SetBinContent(23,7.267101e-06);
   zqq_stack_3->SetBinError(1,1.874608e-06);
   zqq_stack_3->SetBinError(2,1.833259);
   zqq_stack_3->SetBinError(3,1.8143);
   zqq_stack_3->SetBinError(4,3.683145);
   zqq_stack_3->SetBinError(5,15.93657);
   zqq_stack_3->SetBinError(6,32.88497);
   zqq_stack_3->SetBinError(7,84.4348);
   zqq_stack_3->SetBinError(8,100.3376);
   zqq_stack_3->SetBinError(9,49.29372);
   zqq_stack_3->SetBinError(10,28.98433);
   zqq_stack_3->SetBinError(11,1.874608e-06);
   zqq_stack_3->SetBinError(12,1.874608e-06);
   zqq_stack_3->SetBinError(13,1.874608e-06);
   zqq_stack_3->SetBinError(14,1.874608e-06);
   zqq_stack_3->SetBinError(15,1.874608e-06);
   zqq_stack_3->SetBinError(16,1.874608e-06);
   zqq_stack_3->SetBinError(17,1.874608e-06);
   zqq_stack_3->SetBinError(18,1.874608e-06);
   zqq_stack_3->SetBinError(19,1.874608e-06);
   zqq_stack_3->SetBinError(20,1.874608e-06);
   zqq_stack_3->SetBinError(21,1.874608e-06);
   zqq_stack_3->SetBinError(22,1.874608e-06);
   zqq_stack_3->SetBinError(23,1.874608e-06);
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
   
   TH1F *hsigpass_cat1_2016_prefit_stack_4 = new TH1F("hsigpass_cat1_2016_prefit_stack_4","hqq125 in cat1_2016_pass_cat1",23,40,201);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(1,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(2,0.04289542);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(3,0.1570267);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(4,0.1512542);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(5,0.1972374);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(6,0.1932622);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(7,0.4804037);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(8,1.502715);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(9,2.187097);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(10,5.345769);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(11,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(12,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(13,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(14,6.127529);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(15,2.726743);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(16,0.4747499);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(17,0.1223997);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(18,0.06817544);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(19,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(20,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(21,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(22,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinContent(23,1.384408e-07);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(1,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(2,0.2881278);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(3,2.195237);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(4,1.911513);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(5,2.050879);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(6,2.054214);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(7,7.290583);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(8,15.11501);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(9,26.44536);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(10,78.09668);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(11,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(12,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(13,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(14,71.3271);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(15,22.20285);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(16,3.354663);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(17,0.5290299);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(18,0.1801976);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(19,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(20,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(21,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(22,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetBinError(23,1.60399e-06);
   hsigpass_cat1_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat1_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat1_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat1_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat1_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat1_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat1_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat1_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat1_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat1_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat1_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat1_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat1_2016_prefit_stack_4,"");
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
   0,
   0,
   0,
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
   1.841055,
   1.841055,
   1.841055,
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
   0,
   0,
   0,
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
   grae->SetTitle("tqq in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3003 = new TH1F("Graph_data_copy3003","tqq in cat1_2016_pass_cat1",100,28.1,212.9);
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
   entry=leg->AddEntry("htotpass_cat1_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat1_2016_prefit_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat1_2016_prefit_copy__13 = new TH1F("htotpass_cat1_2016_prefit_copy__13","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(1,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(2,2337.302);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(3,2537.3);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(4,2582.004);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(5,2603.125);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(6,2744.905);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(7,2839.996);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(8,2750.083);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(9,2338.628);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(10,2097.395);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(11,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(12,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(13,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(14,1229.367);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(15,1013.169);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(16,810.2809);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(17,643.2025);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(18,486.6756);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(19,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(20,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(21,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(22,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinContent(23,1.102705e-05);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(1,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(2,73.43943);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(3,54.47381);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(4,47.24699);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(5,50.78343);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(6,70.76867);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(7,105.1182);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(8,115.3728);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(9,69.61907);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(10,54.93642);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(11,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(12,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(13,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(14,33.29516);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(15,28.75207);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(16,24.76133);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(17,24.21638);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(18,22.9926);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(19,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(20,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(21,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(22,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetBinError(23,2.002985e-06);
   htotpass_cat1_2016_prefit_copy__13->SetMaximum(4259.995);
   htotpass_cat1_2016_prefit_copy__13->SetEntries(92);
   htotpass_cat1_2016_prefit_copy__13->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_prefit_copy__13->SetFillColor(ci);
   htotpass_cat1_2016_prefit_copy__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_prefit_copy__13->SetLineColor(ci);
   htotpass_cat1_2016_prefit_copy__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_prefit_copy__13->SetMarkerColor(ci);
   htotpass_cat1_2016_prefit_copy__13->SetMarkerSize(0);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_prefit_copy__13->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit_copy__13->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_prefit_copy__13->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit_copy__13->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_prefit_copy__13->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_prefit_copy__13->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_prefit_copy__13->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit_copy__13->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_prefit_copy__13->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_prefit_copy__13->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_prefit_copy__13->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_prefit_copy__13->Draw("sameaxis");
   p12pass_cat1_2016_prefit->Modified();
   cpass_cat1_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_prefit
   TPad *p22pass_cat1_2016_prefit = new TPad("p22pass_cat1_2016_prefit", "p22pass_cat1_2016_prefit",0,0,1,0.3);
   p22pass_cat1_2016_prefit->Draw();
   p22pass_cat1_2016_prefit->cd();
   p22pass_cat1_2016_prefit->Range(21.27027,-11.45033,182.0811,10.05078);
   p22pass_cat1_2016_prefit->SetFillColor(0);
   p22pass_cat1_2016_prefit->SetBorderMode(0);
   p22pass_cat1_2016_prefit->SetBorderSize(2);
   p22pass_cat1_2016_prefit->SetTickx(1);
   p22pass_cat1_2016_prefit->SetTicky(1);
   p22pass_cat1_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat1_2016_prefit->SetTopMargin(0.05);
   p22pass_cat1_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat1_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat1_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat1_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat1_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat1_2016_prefit__14 = new TH1F("iOneWithErrorspass_cat1_2016_prefit__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_prefit__14->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_prefit__14->SetMaximum(8.975722);
   iOneWithErrorspass_cat1_2016_prefit__14->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_prefit__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_prefit__14->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_prefit__14->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_prefit__14->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_prefit__14->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_prefit__14->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_prefit__14->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_prefit__14->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_prefit__14->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_prefit__14->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_prefit__14->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_prefit__14->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_prefit__14->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(-93.2905);
   hstack_stack_4->SetMaximum(112.7539);
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
   
   
   TH1F *sigHistResidualwqqpass_cat1_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat1_2016_prefit_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(2,0.05155996);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(3,7.502253e-08);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(4,0.3173268);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(5,1.023705);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(6,3.337643);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(7,3.346767);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(8,2.047927);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(9,0.2670872);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(10,0.103483);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(14,1.098895e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(15,1.21497e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(16,1.301417e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(17,1.548352e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinContent(18,1.678671e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(1,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(2,0.9905596);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(3,3.115672);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(4,7.189659);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(5,15.48199);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(6,36.79077);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(7,35.88493);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(8,27.73144);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(9,18.04027);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(10,1.796436);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(11,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(12,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(13,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(14,0.321494);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(15,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(16,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(17,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(18,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(19,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(20,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(21,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(22,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetBinError(23,7.055455e-07);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat1_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat1_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat1_2016_prefit_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(2,1.48812e-07);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(3,0.07687946);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(4,0.2291987);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(5,0.4149849);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(6,1.875292);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(7,5.54659);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(8,7.047066);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(9,3.629639);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(10,1.840449);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(14,2.123906e-07);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(15,2.348253e-07);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(16,2.515334e-07);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(17,2.992602e-07);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinContent(18,3.244477e-07);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(1,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(2,1.833259);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(3,1.8143);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(4,3.683145);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(5,15.93657);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(6,32.88497);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(7,84.4348);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(8,100.3376);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(9,49.29372);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(10,28.98433);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(11,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(12,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(13,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(14,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(15,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(16,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(17,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(18,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(19,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(20,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(21,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(22,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetBinError(23,1.874608e-06);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat1_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3","hqq125 in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(2,0.0008783909);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(3,0.003133165);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(4,0.003032509);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(5,0.003912196);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(6,0.003756541);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(7,0.009254321);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(8,0.02956305);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(9,0.04512821);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(10,0.1179316);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(14,0.1790851);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(15,0.08811054);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(16,0.01643233);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(17,0.005040436);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinContent(18,0.003043767);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(1,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(2,0.2881278);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(3,2.195237);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(4,1.911513);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(5,2.050879);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(6,2.054214);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(7,7.290583);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(8,15.11501);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(9,26.44536);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(10,78.09668);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(11,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(12,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(13,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(14,71.3271);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(15,22.20285);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(16,3.354663);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(17,0.5290299);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(18,0.1801976);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(19,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(20,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(21,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(22,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetBinError(23,1.60399e-06);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_prefitpass_cat1_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_prefit__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_prefit__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetLineColor(ci);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetRange(2,18);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat1_2016_prefit__15->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat1_2016_prefit_fx3004[23] = {
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
   Double_t Graph_from_iRatiopass_cat1_2016_prefit_fy3004[23] = {
   0,
   1.007462,
   -0.427929,
   -1.338159,
   0.2218279,
   3.246186,
   5.983815,
   5.714109,
   4.02679,
   0.9866707,
   0,
   0,
   0,
   -1.705848,
   -1.782696,
   0.8264899,
   -2.190884,
   0.6543115,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat1_2016_prefit_felx3004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat1_2016_prefit_fely3004[23] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat1_2016_prefit_fehx3004[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat1_2016_prefit_fehy3004[23] = {
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
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_prefit_fx3004,Graph_from_iRatiopass_cat1_2016_prefit_fy3004,Graph_from_iRatiopass_cat1_2016_prefit_felx3004,Graph_from_iRatiopass_cat1_2016_prefit_fehx3004,Graph_from_iRatiopass_cat1_2016_prefit_fely3004,Graph_from_iRatiopass_cat1_2016_prefit_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_prefit3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_prefit3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->SetMinimum(-4.208354);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->SetMaximum(8.001285);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->SetStats(0);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat1_2016_prefit3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat1_2016_prefit3004);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat1_2016_prefit_copy__16 = new TH1F("iOneWithErrorspass_cat1_2016_prefit_copy__16","",23,40,201);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetMaximum(8.975722);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetLineColor(ci);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetMarkerColor(ci);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->SetMarkerSize(0);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetRange(2,18);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat1_2016_prefit_copy__16->Draw("sameaxis");
   p22pass_cat1_2016_prefit->Modified();
   cpass_cat1_2016_prefit->cd();
   cpass_cat1_2016_prefit->Modified();
   cpass_cat1_2016_prefit->cd();
   cpass_cat1_2016_prefit->SetSelected(cpass_cat1_2016_prefit);
}
