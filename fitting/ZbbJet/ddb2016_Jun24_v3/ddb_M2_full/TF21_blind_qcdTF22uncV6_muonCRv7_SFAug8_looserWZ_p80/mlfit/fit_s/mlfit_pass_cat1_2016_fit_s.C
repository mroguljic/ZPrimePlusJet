void mlfit_pass_cat1_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_s/cpass_cat1_2016_fit_s
//=========  (Thu Sep 26 13:57:34 2019) by ROOT version 6.12/07
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
   p12pass_cat1_2016_fit_s->Range(21.27027,-90.8282,182.0811,4450.582);
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
   htotpass_cat1_2016_fit_s__9->SetBinContent(1,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(2,2369.307);
   htotpass_cat1_2016_fit_s__9->SetBinContent(3,2511.625);
   htotpass_cat1_2016_fit_s__9->SetBinContent(4,2507.885);
   htotpass_cat1_2016_fit_s__9->SetBinContent(5,2508.848);
   htotpass_cat1_2016_fit_s__9->SetBinContent(6,2606.347);
   htotpass_cat1_2016_fit_s__9->SetBinContent(7,2664.294);
   htotpass_cat1_2016_fit_s__9->SetBinContent(8,2584.615);
   htotpass_cat1_2016_fit_s__9->SetBinContent(9,2254.234);
   htotpass_cat1_2016_fit_s__9->SetBinContent(10,2010.418);
   htotpass_cat1_2016_fit_s__9->SetBinContent(11,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(12,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(13,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(14,1180.956);
   htotpass_cat1_2016_fit_s__9->SetBinContent(15,972.6091);
   htotpass_cat1_2016_fit_s__9->SetBinContent(16,781.1395);
   htotpass_cat1_2016_fit_s__9->SetBinContent(17,620.3563);
   htotpass_cat1_2016_fit_s__9->SetBinContent(18,470.963);
   htotpass_cat1_2016_fit_s__9->SetBinContent(19,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(20,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(21,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(22,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinContent(23,1.049261e-05);
   htotpass_cat1_2016_fit_s__9->SetBinError(1,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(2,29.5354);
   htotpass_cat1_2016_fit_s__9->SetBinError(3,26.04617);
   htotpass_cat1_2016_fit_s__9->SetBinError(4,28.36336);
   htotpass_cat1_2016_fit_s__9->SetBinError(5,33.95375);
   htotpass_cat1_2016_fit_s__9->SetBinError(6,48.346);
   htotpass_cat1_2016_fit_s__9->SetBinError(7,68.98893);
   htotpass_cat1_2016_fit_s__9->SetBinError(8,76.3652);
   htotpass_cat1_2016_fit_s__9->SetBinError(9,58.17967);
   htotpass_cat1_2016_fit_s__9->SetBinError(10,43.06584);
   htotpass_cat1_2016_fit_s__9->SetBinError(11,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(12,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(13,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(14,23.00347);
   htotpass_cat1_2016_fit_s__9->SetBinError(15,18.66268);
   htotpass_cat1_2016_fit_s__9->SetBinError(16,14.60203);
   htotpass_cat1_2016_fit_s__9->SetBinError(17,12.61384);
   htotpass_cat1_2016_fit_s__9->SetBinError(18,11.00005);
   htotpass_cat1_2016_fit_s__9->SetBinError(19,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(20,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(21,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(22,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetBinError(23,1.440048e-06);
   htotpass_cat1_2016_fit_s__9->SetMinimum(0);
   htotpass_cat1_2016_fit_s__9->SetMaximum(3996.441);
   htotpass_cat1_2016_fit_s__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__9->SetFillColor(ci);
   htotpass_cat1_2016_fit_s__9->SetFillStyle(3001);

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
   htotpass_cat1_2016_fit_s__9->Draw("");
   
   TH1F *htot_linepass_cat1_2016_fit_s__10 = new TH1F("htot_linepass_cat1_2016_fit_s__10","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(1,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(2,2369.307);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(3,2511.625);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(4,2507.885);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(5,2508.848);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(6,2606.347);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(7,2664.294);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(8,2584.615);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(9,2254.234);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(10,2010.418);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(11,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(12,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(13,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(14,1180.956);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(15,972.6091);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(16,781.1395);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(17,620.3563);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(18,470.963);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(19,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(20,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(21,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(22,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinContent(23,1.049261e-05);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(1,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(2,29.5354);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(3,26.04617);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(4,28.36336);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(5,33.95375);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(6,48.346);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(7,68.98893);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(8,76.3652);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(9,58.17967);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(10,43.06584);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(11,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(12,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(13,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(14,23.00347);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(15,18.66268);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(16,14.60203);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(17,12.61384);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(18,11.00005);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(19,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(20,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(21,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(22,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetBinError(23,1.440048e-06);
   htot_linepass_cat1_2016_fit_s__10->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_s__10->SetFillColor(ci);
   htot_linepass_cat1_2016_fit_s__10->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_s__10->SetLineColor(ci);
   htot_linepass_cat1_2016_fit_s__10->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat1_2016_fit_s__10->SetMarkerColor(ci);
   htot_linepass_cat1_2016_fit_s__10->SetMarkerSize(0);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetRange(2,18);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat1_2016_fit_s__10->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_s__10->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_s__10->Draw("histsame");
   
   TH1F *qcd__11 = new TH1F("qcd__11","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__11->SetBinContent(2,2347.223);
   qcd__11->SetBinContent(3,2474.877);
   qcd__11->SetBinContent(4,2443.355);
   qcd__11->SetBinContent(5,2387.041);
   qcd__11->SetBinContent(6,2299.774);
   qcd__11->SetBinContent(7,2183.338);
   qcd__11->SetBinContent(8,2085.642);
   qcd__11->SetBinContent(9,1956.078);
   qcd__11->SetBinContent(10,1823.719);
   qcd__11->SetBinContent(14,1127.34);
   qcd__11->SetBinContent(15,933.9296);
   qcd__11->SetBinContent(16,760.1472);
   qcd__11->SetBinContent(17,602.7216);
   qcd__11->SetBinContent(18,458.0512);
   qcd__11->SetBinError(2,29.08023);
   qcd__11->SetBinError(3,24.65041);
   qcd__11->SetBinError(4,25.99449);
   qcd__11->SetBinError(5,28.86973);
   qcd__11->SetBinError(6,33.62849);
   qcd__11->SetBinError(7,36.82546);
   qcd__11->SetBinError(8,37.04585);
   qcd__11->SetBinError(9,35.94276);
   qcd__11->SetBinError(10,29.54356);
   qcd__11->SetBinError(14,18.12813);
   qcd__11->SetBinError(15,15.57754);
   qcd__11->SetBinError(16,13.4946);
   qcd__11->SetBinError(17,11.71116);
   qcd__11->SetBinError(18,10.45131);
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
   
   TH1F *htotpass_cat1_2016_fit_s__12 = new TH1F("htotpass_cat1_2016_fit_s__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_s__12->SetBinContent(1,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(2,2369.307);
   htotpass_cat1_2016_fit_s__12->SetBinContent(3,2511.625);
   htotpass_cat1_2016_fit_s__12->SetBinContent(4,2507.885);
   htotpass_cat1_2016_fit_s__12->SetBinContent(5,2508.848);
   htotpass_cat1_2016_fit_s__12->SetBinContent(6,2606.347);
   htotpass_cat1_2016_fit_s__12->SetBinContent(7,2664.294);
   htotpass_cat1_2016_fit_s__12->SetBinContent(8,2584.615);
   htotpass_cat1_2016_fit_s__12->SetBinContent(9,2254.234);
   htotpass_cat1_2016_fit_s__12->SetBinContent(10,2010.418);
   htotpass_cat1_2016_fit_s__12->SetBinContent(11,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(12,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(13,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(14,1180.956);
   htotpass_cat1_2016_fit_s__12->SetBinContent(15,972.6091);
   htotpass_cat1_2016_fit_s__12->SetBinContent(16,781.1395);
   htotpass_cat1_2016_fit_s__12->SetBinContent(17,620.3563);
   htotpass_cat1_2016_fit_s__12->SetBinContent(18,470.963);
   htotpass_cat1_2016_fit_s__12->SetBinContent(19,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(20,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(21,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(22,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinContent(23,1.049261e-05);
   htotpass_cat1_2016_fit_s__12->SetBinError(1,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(2,29.5354);
   htotpass_cat1_2016_fit_s__12->SetBinError(3,26.04617);
   htotpass_cat1_2016_fit_s__12->SetBinError(4,28.36336);
   htotpass_cat1_2016_fit_s__12->SetBinError(5,33.95375);
   htotpass_cat1_2016_fit_s__12->SetBinError(6,48.346);
   htotpass_cat1_2016_fit_s__12->SetBinError(7,68.98893);
   htotpass_cat1_2016_fit_s__12->SetBinError(8,76.3652);
   htotpass_cat1_2016_fit_s__12->SetBinError(9,58.17967);
   htotpass_cat1_2016_fit_s__12->SetBinError(10,43.06584);
   htotpass_cat1_2016_fit_s__12->SetBinError(11,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(12,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(13,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(14,23.00347);
   htotpass_cat1_2016_fit_s__12->SetBinError(15,18.66268);
   htotpass_cat1_2016_fit_s__12->SetBinError(16,14.60203);
   htotpass_cat1_2016_fit_s__12->SetBinError(17,12.61384);
   htotpass_cat1_2016_fit_s__12->SetBinError(18,11.00005);
   htotpass_cat1_2016_fit_s__12->SetBinError(19,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(20,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(21,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(22,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetBinError(23,1.440048e-06);
   htotpass_cat1_2016_fit_s__12->SetMinimum(0);
   htotpass_cat1_2016_fit_s__12->SetMaximum(3996.441);
   htotpass_cat1_2016_fit_s__12->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__12->SetFillColor(ci);
   htotpass_cat1_2016_fit_s__12->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s__12->SetLineColor(ci);
   htotpass_cat1_2016_fit_s__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_s__12->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_s__12->SetMarkerSize(0);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_s__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_s__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s__12->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis3[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_3 = new TH1F("hstackMC_stack_3","hstackMC",23, xAxis3);
   hstackMC_stack_3->SetMinimum(-56.64348);
   hstackMC_stack_3->SetMaximum(528.6206);
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
   tqq_stack_1->SetBinContent(2,18.80154);
   tqq_stack_1->SetBinContent(3,30.40347);
   tqq_stack_1->SetBinContent(4,35.47702);
   tqq_stack_1->SetBinContent(5,47.20926);
   tqq_stack_1->SetBinContent(6,73.93157);
   tqq_stack_1->SetBinContent(7,80.56422);
   tqq_stack_1->SetBinContent(8,79.37576);
   tqq_stack_1->SetBinContent(9,71.99012);
   tqq_stack_1->SetBinContent(10,80.164);
   tqq_stack_1->SetBinContent(14,53.28153);
   tqq_stack_1->SetBinContent(15,38.67941);
   tqq_stack_1->SetBinContent(16,20.99228);
   tqq_stack_1->SetBinContent(17,17.63473);
   tqq_stack_1->SetBinContent(18,12.91177);
   tqq_stack_1->SetBinError(2,4.995967);
   tqq_stack_1->SetBinError(3,8.078844);
   tqq_stack_1->SetBinError(4,9.426991);
   tqq_stack_1->SetBinError(5,12.5445);
   tqq_stack_1->SetBinError(6,19.64518);
   tqq_stack_1->SetBinError(7,21.40761);
   tqq_stack_1->SetBinError(8,21.09182);
   tqq_stack_1->SetBinError(9,19.12929);
   tqq_stack_1->SetBinError(10,21.30126);
   tqq_stack_1->SetBinError(14,14.15803);
   tqq_stack_1->SetBinError(15,10.27794);
   tqq_stack_1->SetBinError(16,5.57809);
   tqq_stack_1->SetBinError(17,4.685919);
   tqq_stack_1->SetBinError(18,3.430929);
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
   wqq_stack_2->SetBinContent(1,4.200351e-06);
   wqq_stack_2->SetBinContent(2,1.883213);
   wqq_stack_2->SetBinContent(3,2.782152);
   wqq_stack_2->SetBinContent(4,19.40809);
   wqq_stack_2->SetBinContent(5,49.06743);
   wqq_stack_2->SetBinContent(6,163.0567);
   wqq_stack_2->SetBinContent(7,186.8385);
   wqq_stack_2->SetBinContent(8,124.9105);
   wqq_stack_2->SetBinContent(9,43.99395);
   wqq_stack_2->SetBinContent(10,7.775053);
   wqq_stack_2->SetBinContent(11,4.200351e-06);
   wqq_stack_2->SetBinContent(12,4.200351e-06);
   wqq_stack_2->SetBinContent(13,4.200351e-06);
   wqq_stack_2->SetBinContent(14,0.3344486);
   wqq_stack_2->SetBinContent(15,4.200351e-06);
   wqq_stack_2->SetBinContent(16,4.200351e-06);
   wqq_stack_2->SetBinContent(17,4.200351e-06);
   wqq_stack_2->SetBinContent(18,4.200351e-06);
   wqq_stack_2->SetBinContent(19,4.200351e-06);
   wqq_stack_2->SetBinContent(20,4.200351e-06);
   wqq_stack_2->SetBinContent(21,4.200351e-06);
   wqq_stack_2->SetBinContent(22,4.200351e-06);
   wqq_stack_2->SetBinContent(23,4.200351e-06);
   wqq_stack_2->SetBinError(1,6.389369e-07);
   wqq_stack_2->SetBinError(2,0.3907598);
   wqq_stack_2->SetBinError(3,1.945976);
   wqq_stack_2->SetBinError(4,5.773246);
   wqq_stack_2->SetBinError(5,7.329721);
   wqq_stack_2->SetBinError(6,23.93166);
   wqq_stack_2->SetBinError(7,28.87876);
   wqq_stack_2->SetBinError(8,21.89241);
   wqq_stack_2->SetBinError(9,13.35908);
   wqq_stack_2->SetBinError(10,1.626195);
   wqq_stack_2->SetBinError(11,6.389369e-07);
   wqq_stack_2->SetBinError(12,6.389369e-07);
   wqq_stack_2->SetBinError(13,6.389369e-07);
   wqq_stack_2->SetBinError(14,0.2845316);
   wqq_stack_2->SetBinError(15,6.389369e-07);
   wqq_stack_2->SetBinError(16,6.389369e-07);
   wqq_stack_2->SetBinError(17,6.389369e-07);
   wqq_stack_2->SetBinError(18,6.389369e-07);
   wqq_stack_2->SetBinError(19,6.389369e-07);
   wqq_stack_2->SetBinError(20,6.389369e-07);
   wqq_stack_2->SetBinError(21,6.389369e-07);
   wqq_stack_2->SetBinError(22,6.389369e-07);
   wqq_stack_2->SetBinError(23,6.389369e-07);
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
   zqq_stack_3->SetBinContent(1,6.292256e-06);
   zqq_stack_3->SetBinContent(2,1.399509);
   zqq_stack_3->SetBinContent(3,3.562475);
   zqq_stack_3->SetBinContent(4,9.644492);
   zqq_stack_3->SetBinContent(5,25.53101);
   zqq_stack_3->SetBinContent(6,69.58548);
   zqq_stack_3->SetBinContent(7,213.5531);
   zqq_stack_3->SetBinContent(8,294.6861);
   zqq_stack_3->SetBinContent(9,182.172);
   zqq_stack_3->SetBinContent(10,98.75967);
   zqq_stack_3->SetBinContent(11,6.292256e-06);
   zqq_stack_3->SetBinContent(12,6.292256e-06);
   zqq_stack_3->SetBinContent(13,6.292256e-06);
   zqq_stack_3->SetBinContent(14,6.292256e-06);
   zqq_stack_3->SetBinContent(15,6.292256e-06);
   zqq_stack_3->SetBinContent(16,6.292256e-06);
   zqq_stack_3->SetBinContent(17,6.292256e-06);
   zqq_stack_3->SetBinContent(18,6.292256e-06);
   zqq_stack_3->SetBinContent(19,6.292256e-06);
   zqq_stack_3->SetBinContent(20,6.292256e-06);
   zqq_stack_3->SetBinContent(21,6.292256e-06);
   zqq_stack_3->SetBinContent(22,6.292256e-06);
   zqq_stack_3->SetBinContent(23,6.292256e-06);
   zqq_stack_3->SetBinError(1,1.290542e-06);
   zqq_stack_3->SetBinError(2,1.252032);
   zqq_stack_3->SetBinError(3,1.30588);
   zqq_stack_3->SetBinError(4,2.562852);
   zqq_stack_3->SetBinError(5,10.40704);
   zqq_stack_3->SetBinError(6,15.74176);
   zqq_stack_3->SetBinError(7,45.94659);
   zqq_stack_3->SetBinError(8,59.45676);
   zqq_stack_3->SetBinError(9,39.35222);
   zqq_stack_3->SetBinError(10,22.92283);
   zqq_stack_3->SetBinError(11,1.290542e-06);
   zqq_stack_3->SetBinError(12,1.290542e-06);
   zqq_stack_3->SetBinError(13,1.290542e-06);
   zqq_stack_3->SetBinError(14,1.290542e-06);
   zqq_stack_3->SetBinError(15,1.290542e-06);
   zqq_stack_3->SetBinError(16,1.290542e-06);
   zqq_stack_3->SetBinError(17,1.290542e-06);
   zqq_stack_3->SetBinError(18,1.290542e-06);
   zqq_stack_3->SetBinError(19,1.290542e-06);
   zqq_stack_3->SetBinError(20,1.290542e-06);
   zqq_stack_3->SetBinError(21,1.290542e-06);
   zqq_stack_3->SetBinError(22,1.290542e-06);
   zqq_stack_3->SetBinError(23,1.290542e-06);
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
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(1,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(2,0.1170816);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(3,0.5132609);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(4,0.4707097);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(5,0.6842814);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(6,1.098787);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(7,1.901544);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(8,4.475779);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(9,7.881418);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(10,17.77484);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(11,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(12,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(13,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(14,28.19937);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(15,13.10725);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(16,3.961507);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(17,0.7360857);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(18,0.29724);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(19,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(20,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(21,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(22,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinContent(23,5.68534e-07);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(1,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(2,0.3019988);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(3,1.737912);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(4,1.518978);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(5,1.636377);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(6,2.502475);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(7,5.381176);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(8,12.60984);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(9,24.46986);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(10,54.98983);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(11,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(12,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(13,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(14,84.84285);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(15,38.32088);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(16,11.34741);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(17,1.530264);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(18,0.5379536);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(19,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(20,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(21,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(22,1.675615e-06);
   hsigpass_cat1_2016_fit_s_stack_4->SetBinError(23,1.675615e-06);
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
   entry=leg->AddEntry("htotpass_cat1_2016_fit_s","Total background","lf");

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
   
   TH1F *htotpass_cat1_2016_fit_s_copy__13 = new TH1F("htotpass_cat1_2016_fit_s_copy__13","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(1,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(2,2369.307);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(3,2511.625);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(4,2507.885);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(5,2508.848);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(6,2606.347);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(7,2664.294);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(8,2584.615);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(9,2254.234);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(10,2010.418);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(11,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(12,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(13,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(14,1180.956);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(15,972.6091);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(16,781.1395);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(17,620.3563);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(18,470.963);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(19,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(20,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(21,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(22,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinContent(23,1.049261e-05);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(1,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(2,29.5354);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(3,26.04617);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(4,28.36336);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(5,33.95375);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(6,48.346);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(7,68.98893);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(8,76.3652);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(9,58.17967);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(10,43.06584);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(11,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(12,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(13,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(14,23.00347);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(15,18.66268);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(16,14.60203);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(17,12.61384);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(18,11.00005);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(19,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(20,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(21,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(22,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetBinError(23,1.440048e-06);
   htotpass_cat1_2016_fit_s_copy__13->SetMaximum(3996.441);
   htotpass_cat1_2016_fit_s_copy__13->SetEntries(92);
   htotpass_cat1_2016_fit_s_copy__13->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s_copy__13->SetFillColor(ci);
   htotpass_cat1_2016_fit_s_copy__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_s_copy__13->SetLineColor(ci);
   htotpass_cat1_2016_fit_s_copy__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_s_copy__13->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_s_copy__13->SetMarkerSize(0);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_s_copy__13->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_s_copy__13->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_s_copy__13->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_s_copy__13->Draw("sameaxis");
   p12pass_cat1_2016_fit_s->Modified();
   cpass_cat1_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_fit_s
   TPad *p22pass_cat1_2016_fit_s = new TPad("p22pass_cat1_2016_fit_s", "p22pass_cat1_2016_fit_s",0,0,1,0.3);
   p22pass_cat1_2016_fit_s->Draw();
   p22pass_cat1_2016_fit_s->cd();
   p22pass_cat1_2016_fit_s->Range(21.27027,-12.94728,182.0811,13.54365);
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
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_s__14 = new TH1F("iOneWithErrorspass_cat1_2016_fit_s__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetMaximum(12.2191);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s__14->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
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
   iOneWithErrorspass_cat1_2016_fit_s__14->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat1_2016_fit_s__14->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(-84.01869);
   hstack_stack_4->SetMaximum(89.95036);
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
   
   
   TH1F *sigHistResidualwqqpass_cat1_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat1_2016_fit_s_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(2,0.0385635);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(3,0.05551248);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(4,0.3891146);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(5,0.9732507);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(6,3.16942);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(7,3.599189);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(8,2.457376);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(9,0.907764);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(10,0.1715234);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(14,0.009774704);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(15,1.35728e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(16,1.453851e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(17,1.72971e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinContent(18,1.875293e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(1,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(2,0.3907598);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(3,1.945976);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(4,5.773246);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(5,7.329721);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(6,23.93166);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(7,28.87876);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(8,21.89241);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(9,13.35908);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(10,1.626195);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(11,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(12,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(13,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(14,0.2845316);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(15,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(16,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(17,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(18,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(19,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(20,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(21,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(22,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetBinError(23,6.389369e-07);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat1_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat1_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat1_2016_fit_s_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(2,0.02865845);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(3,0.07108232);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(4,0.1933633);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(5,0.5064066);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(6,1.35257);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(7,4.113809);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(8,5.797384);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(9,3.758907);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(10,2.178711);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(14,1.838995e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(15,2.033247e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(16,2.177914e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(17,2.59116e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinContent(18,2.809247e-07);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(1,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(2,1.252032);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(3,1.30588);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(4,2.562852);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(5,10.40704);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(6,15.74176);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(7,45.94659);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(8,59.45676);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(9,39.35222);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(10,22.92283);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(11,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(12,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(13,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(14,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(15,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(16,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(17,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(18,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(19,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(20,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(21,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(22,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetBinError(23,1.290542e-06);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat1_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(2,0.002397539);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(3,0.01024113);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(4,0.0094373);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(5,0.0135727);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(6,0.0213577);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(7,0.03663065);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(8,0.08805238);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(9,0.1626239);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(10,0.3921261);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(14,0.8241638);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(15,0.4235409);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(16,0.1371181);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(17,0.03031211);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinContent(18,0.01327061);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(1,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(2,0.3019988);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(3,1.737912);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(4,1.518978);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(5,1.636377);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(6,2.502475);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(7,5.381176);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(8,12.60984);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(9,24.46986);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(10,54.98983);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(11,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(12,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(13,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(14,84.84285);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(15,38.32088);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(16,11.34741);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(17,1.530264);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(18,0.5379536);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(19,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(20,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(21,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(22,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetBinError(23,1.675615e-06);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_fit_spass_cat1_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_fit_s__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_fit_s__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
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
   iOneWithErrorsLinepass_cat1_2016_fit_s__15->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
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
   0.3807016,
   0.1314257,
   0.1801514,
   2.095245,
   5.209918,
   8.146068,
   8.082103,
   6.486818,
   3.261015,
   0,
   0,
   0,
   -0.2812071,
   -0.4720679,
   1.800843,
   -1.250075,
   1.325192,
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_fit_s_fx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fy3004,Graph_from_iRatiopass_cat1_2016_fit_s_felx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fehx3004,Graph_from_iRatiopass_cat1_2016_fit_s_fely3004,Graph_from_iRatiopass_cat1_2016_fit_s_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMinimum(-3.389689);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_s3004->SetMaximum(10.28568);
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
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetMaximum(12.2191);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
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
   iOneWithErrorspass_cat1_2016_fit_s_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
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
