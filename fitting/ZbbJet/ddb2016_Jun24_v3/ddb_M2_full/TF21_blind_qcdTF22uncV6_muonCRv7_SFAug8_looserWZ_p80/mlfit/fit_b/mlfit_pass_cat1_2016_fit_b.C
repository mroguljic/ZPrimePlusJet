void mlfit_pass_cat1_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat1_2016_fit_b/cpass_cat1_2016_fit_b
//=========  (Thu Sep 26 13:57:19 2019) by ROOT version 6.12/07
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
   p12pass_cat1_2016_fit_b->Range(21.27027,-90.57462,182.0811,4438.156);
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
   htotpass_cat1_2016_fit_b__9->SetBinContent(1,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(2,2359.279);
   htotpass_cat1_2016_fit_b__9->SetBinContent(3,2510.291);
   htotpass_cat1_2016_fit_b__9->SetBinContent(4,2511.57);
   htotpass_cat1_2016_fit_b__9->SetBinContent(5,2517.845);
   htotpass_cat1_2016_fit_b__9->SetBinContent(6,2614.844);
   htotpass_cat1_2016_fit_b__9->SetBinContent(7,2656.855);
   htotpass_cat1_2016_fit_b__9->SetBinContent(8,2576.446);
   htotpass_cat1_2016_fit_b__9->SetBinContent(9,2275.144);
   htotpass_cat1_2016_fit_b__9->SetBinContent(10,2032.652);
   htotpass_cat1_2016_fit_b__9->SetBinContent(11,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(12,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(13,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(14,1198.606);
   htotpass_cat1_2016_fit_b__9->SetBinContent(15,984.2489);
   htotpass_cat1_2016_fit_b__9->SetBinContent(16,786.1329);
   htotpass_cat1_2016_fit_b__9->SetBinContent(17,624.252);
   htotpass_cat1_2016_fit_b__9->SetBinContent(18,473.3799);
   htotpass_cat1_2016_fit_b__9->SetBinContent(19,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(20,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(21,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(22,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinContent(23,9.980289e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(1,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(2,31.47089);
   htotpass_cat1_2016_fit_b__9->SetBinError(3,30.68901);
   htotpass_cat1_2016_fit_b__9->SetBinError(4,38.51712);
   htotpass_cat1_2016_fit_b__9->SetBinError(5,49.01885);
   htotpass_cat1_2016_fit_b__9->SetBinError(6,70.97647);
   htotpass_cat1_2016_fit_b__9->SetBinError(7,90.91109);
   htotpass_cat1_2016_fit_b__9->SetBinError(8,94.28113);
   htotpass_cat1_2016_fit_b__9->SetBinError(9,76.96868);
   htotpass_cat1_2016_fit_b__9->SetBinError(10,63.59089);
   htotpass_cat1_2016_fit_b__9->SetBinError(11,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(12,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(13,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(14,35.57428);
   htotpass_cat1_2016_fit_b__9->SetBinError(15,27.86365);
   htotpass_cat1_2016_fit_b__9->SetBinError(16,19.72881);
   htotpass_cat1_2016_fit_b__9->SetBinError(17,16.79897);
   htotpass_cat1_2016_fit_b__9->SetBinError(18,13.73917);
   htotpass_cat1_2016_fit_b__9->SetBinError(19,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(20,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(21,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(22,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetBinError(23,1.436504e-06);
   htotpass_cat1_2016_fit_b__9->SetMinimum(0);
   htotpass_cat1_2016_fit_b__9->SetMaximum(3985.283);
   htotpass_cat1_2016_fit_b__9->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__9->SetFillColor(ci);
   htotpass_cat1_2016_fit_b__9->SetFillStyle(3001);

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
   htotpass_cat1_2016_fit_b__9->Draw("");
   
   TH1F *htot_linepass_cat1_2016_fit_b__10 = new TH1F("htot_linepass_cat1_2016_fit_b__10","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(1,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(2,2359.279);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(3,2510.291);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(4,2511.57);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(5,2517.845);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(6,2614.844);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(7,2656.855);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(8,2576.446);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(9,2275.144);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(10,2032.652);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(11,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(12,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(13,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(14,1198.606);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(15,984.2489);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(16,786.1329);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(17,624.252);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(18,473.3799);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(19,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(20,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(21,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(22,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinContent(23,9.980289e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(1,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(2,31.47089);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(3,30.68901);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(4,38.51712);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(5,49.01885);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(6,70.97647);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(7,90.91109);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(8,94.28113);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(9,76.96868);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(10,63.59089);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(11,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(12,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(13,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(14,35.57428);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(15,27.86365);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(16,19.72881);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(17,16.79897);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(18,13.73917);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(19,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(20,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(21,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(22,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetBinError(23,1.436504e-06);
   htot_linepass_cat1_2016_fit_b__10->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_b__10->SetFillColor(ci);
   htot_linepass_cat1_2016_fit_b__10->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat1_2016_fit_b__10->SetLineColor(ci);
   htot_linepass_cat1_2016_fit_b__10->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat1_2016_fit_b__10->SetMarkerColor(ci);
   htot_linepass_cat1_2016_fit_b__10->SetMarkerSize(0);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetRange(2,18);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat1_2016_fit_b__10->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat1_2016_fit_b__10->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat1_2016_fit_b__10->Draw("histsame");
   
   TH1F *qcd__11 = new TH1F("qcd__11","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd__11->SetBinContent(2,2330.344);
   qcd__11->SetBinContent(3,2462.073);
   qcd__11->SetBinContent(4,2434.586);
   qcd__11->SetBinContent(5,2380.815);
   qcd__11->SetBinContent(6,2292.848);
   qcd__11->SetBinContent(7,2172.203);
   qcd__11->SetBinContent(8,2075.561);
   qcd__11->SetBinContent(9,1949.943);
   qcd__11->SetBinContent(10,1820.391);
   qcd__11->SetBinContent(14,1125.074);
   qcd__11->SetBinContent(15,931.1635);
   qcd__11->SetBinContent(16,757.3221);
   qcd__11->SetBinContent(17,600.0493);
   qcd__11->SetBinContent(18,455.6592);
   qcd__11->SetBinError(2,30.02379);
   qcd__11->SetBinError(3,26.56058);
   qcd__11->SetBinError(4,33.46643);
   qcd__11->SetBinError(5,41.24405);
   qcd__11->SetBinError(6,53.87642);
   qcd__11->SetBinError(7,62.10358);
   qcd__11->SetBinError(8,58.65535);
   qcd__11->SetBinError(9,51.85187);
   qcd__11->SetBinError(10,43.7567);
   qcd__11->SetBinError(14,23.78341);
   qcd__11->SetBinError(15,20.18979);
   qcd__11->SetBinError(16,16.75139);
   qcd__11->SetBinError(17,14.33718);
   qcd__11->SetBinError(18,12.1521);
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
   
   TH1F *htotpass_cat1_2016_fit_b__12 = new TH1F("htotpass_cat1_2016_fit_b__12","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_b__12->SetBinContent(1,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(2,2359.279);
   htotpass_cat1_2016_fit_b__12->SetBinContent(3,2510.291);
   htotpass_cat1_2016_fit_b__12->SetBinContent(4,2511.57);
   htotpass_cat1_2016_fit_b__12->SetBinContent(5,2517.845);
   htotpass_cat1_2016_fit_b__12->SetBinContent(6,2614.844);
   htotpass_cat1_2016_fit_b__12->SetBinContent(7,2656.855);
   htotpass_cat1_2016_fit_b__12->SetBinContent(8,2576.446);
   htotpass_cat1_2016_fit_b__12->SetBinContent(9,2275.144);
   htotpass_cat1_2016_fit_b__12->SetBinContent(10,2032.652);
   htotpass_cat1_2016_fit_b__12->SetBinContent(11,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(12,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(13,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(14,1198.606);
   htotpass_cat1_2016_fit_b__12->SetBinContent(15,984.2489);
   htotpass_cat1_2016_fit_b__12->SetBinContent(16,786.1329);
   htotpass_cat1_2016_fit_b__12->SetBinContent(17,624.252);
   htotpass_cat1_2016_fit_b__12->SetBinContent(18,473.3799);
   htotpass_cat1_2016_fit_b__12->SetBinContent(19,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(20,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(21,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(22,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinContent(23,9.980289e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(1,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(2,31.47089);
   htotpass_cat1_2016_fit_b__12->SetBinError(3,30.68901);
   htotpass_cat1_2016_fit_b__12->SetBinError(4,38.51712);
   htotpass_cat1_2016_fit_b__12->SetBinError(5,49.01885);
   htotpass_cat1_2016_fit_b__12->SetBinError(6,70.97647);
   htotpass_cat1_2016_fit_b__12->SetBinError(7,90.91109);
   htotpass_cat1_2016_fit_b__12->SetBinError(8,94.28113);
   htotpass_cat1_2016_fit_b__12->SetBinError(9,76.96868);
   htotpass_cat1_2016_fit_b__12->SetBinError(10,63.59089);
   htotpass_cat1_2016_fit_b__12->SetBinError(11,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(12,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(13,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(14,35.57428);
   htotpass_cat1_2016_fit_b__12->SetBinError(15,27.86365);
   htotpass_cat1_2016_fit_b__12->SetBinError(16,19.72881);
   htotpass_cat1_2016_fit_b__12->SetBinError(17,16.79897);
   htotpass_cat1_2016_fit_b__12->SetBinError(18,13.73917);
   htotpass_cat1_2016_fit_b__12->SetBinError(19,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(20,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(21,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(22,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetBinError(23,1.436504e-06);
   htotpass_cat1_2016_fit_b__12->SetMinimum(0);
   htotpass_cat1_2016_fit_b__12->SetMaximum(3985.283);
   htotpass_cat1_2016_fit_b__12->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__12->SetFillColor(ci);
   htotpass_cat1_2016_fit_b__12->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b__12->SetLineColor(ci);
   htotpass_cat1_2016_fit_b__12->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_b__12->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_b__12->SetMarkerSize(0);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_b__12->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_b__12->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b__12->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b__12->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis3[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_3 = new TH1F("hstackMC_stack_3","hstackMC",23, xAxis3);
   hstackMC_stack_3->SetMinimum(0);
   hstackMC_stack_3->SetMaximum(525.9295);
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
   tqq_stack_1->SetBinContent(2,25.8041);
   tqq_stack_1->SetBinContent(3,41.72711);
   tqq_stack_1->SetBinContent(4,48.69028);
   tqq_stack_1->SetBinContent(5,64.79215);
   tqq_stack_1->SetBinContent(6,101.4671);
   tqq_stack_1->SetBinContent(7,110.57);
   tqq_stack_1->SetBinContent(8,108.9389);
   tqq_stack_1->SetBinContent(9,98.80253);
   tqq_stack_1->SetBinContent(10,110.0207);
   tqq_stack_1->SetBinContent(14,73.12601);
   tqq_stack_1->SetBinContent(15,53.08539);
   tqq_stack_1->SetBinContent(16,28.81076);
   tqq_stack_1->SetBinContent(17,24.2027);
   tqq_stack_1->SetBinContent(18,17.7207);
   tqq_stack_1->SetBinError(2,9.334327);
   tqq_stack_1->SetBinError(3,15.09429);
   tqq_stack_1->SetBinError(4,17.61313);
   tqq_stack_1->SetBinError(5,23.43779);
   tqq_stack_1->SetBinError(6,36.7045);
   tqq_stack_1->SetBinError(7,39.99738);
   tqq_stack_1->SetBinError(8,39.40736);
   tqq_stack_1->SetBinError(9,35.74064);
   tqq_stack_1->SetBinError(10,39.79868);
   tqq_stack_1->SetBinError(14,26.45246);
   tqq_stack_1->SetBinError(15,19.20301);
   tqq_stack_1->SetBinError(16,10.42195);
   tqq_stack_1->SetBinError(17,8.75504);
   tqq_stack_1->SetBinError(18,6.410252);
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
   wqq_stack_2->SetBinContent(1,4.504816e-06);
   wqq_stack_2->SetBinContent(2,1.753356);
   wqq_stack_2->SetBinContent(3,3.512385);
   wqq_stack_2->SetBinContent(4,20.20711);
   wqq_stack_2->SetBinContent(5,49.49735);
   wqq_stack_2->SetBinContent(6,164.3894);
   wqq_stack_2->SetBinContent(7,199.3332);
   wqq_stack_2->SetBinContent(8,139.0061);
   wqq_stack_2->SetBinContent(9,56.29475);
   wqq_stack_2->SetBinContent(10,9.145693);
   wqq_stack_2->SetBinContent(11,4.504816e-06);
   wqq_stack_2->SetBinContent(12,4.504816e-06);
   wqq_stack_2->SetBinContent(13,4.504816e-06);
   wqq_stack_2->SetBinContent(14,0.4058124);
   wqq_stack_2->SetBinContent(15,4.504816e-06);
   wqq_stack_2->SetBinContent(16,4.504816e-06);
   wqq_stack_2->SetBinContent(17,4.504816e-06);
   wqq_stack_2->SetBinContent(18,4.504816e-06);
   wqq_stack_2->SetBinContent(19,4.504816e-06);
   wqq_stack_2->SetBinContent(20,4.504816e-06);
   wqq_stack_2->SetBinContent(21,4.504816e-06);
   wqq_stack_2->SetBinContent(22,4.504816e-06);
   wqq_stack_2->SetBinContent(23,4.504816e-06);
   wqq_stack_2->SetBinError(1,7.293855e-07);
   wqq_stack_2->SetBinError(2,0.479675);
   wqq_stack_2->SetBinError(3,2.668634);
   wqq_stack_2->SetBinError(4,6.927099);
   wqq_stack_2->SetBinError(5,7.316923);
   wqq_stack_2->SetBinError(6,24.17016);
   wqq_stack_2->SetBinError(7,32.0255);
   wqq_stack_2->SetBinError(8,25.50639);
   wqq_stack_2->SetBinError(9,20.28791);
   wqq_stack_2->SetBinError(10,2.283086);
   wqq_stack_2->SetBinError(11,7.293855e-07);
   wqq_stack_2->SetBinError(12,7.293855e-07);
   wqq_stack_2->SetBinError(13,7.293855e-07);
   wqq_stack_2->SetBinError(14,0.381853);
   wqq_stack_2->SetBinError(15,7.293855e-07);
   wqq_stack_2->SetBinError(16,7.293855e-07);
   wqq_stack_2->SetBinError(17,7.293855e-07);
   wqq_stack_2->SetBinError(18,7.293855e-07);
   wqq_stack_2->SetBinError(19,7.293855e-07);
   wqq_stack_2->SetBinError(20,7.293855e-07);
   wqq_stack_2->SetBinError(21,7.293855e-07);
   wqq_stack_2->SetBinError(22,7.293855e-07);
   wqq_stack_2->SetBinError(23,7.293855e-07);
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
   zqq_stack_3->SetBinContent(1,5.475472e-06);
   zqq_stack_3->SetBinContent(2,1.377829);
   zqq_stack_3->SetBinContent(3,2.978622);
   zqq_stack_3->SetBinContent(4,8.086698);
   zqq_stack_3->SetBinContent(5,22.74003);
   zqq_stack_3->SetBinContent(6,56.1396);
   zqq_stack_3->SetBinContent(7,174.7487);
   zqq_stack_3->SetBinContent(8,252.9403);
   zqq_stack_3->SetBinContent(9,170.1036);
   zqq_stack_3->SetBinContent(10,93.09488);
   zqq_stack_3->SetBinContent(11,5.475472e-06);
   zqq_stack_3->SetBinContent(12,5.475472e-06);
   zqq_stack_3->SetBinContent(13,5.475472e-06);
   zqq_stack_3->SetBinContent(14,5.475472e-06);
   zqq_stack_3->SetBinContent(15,5.475472e-06);
   zqq_stack_3->SetBinContent(16,5.475472e-06);
   zqq_stack_3->SetBinContent(17,5.475472e-06);
   zqq_stack_3->SetBinContent(18,5.475472e-06);
   zqq_stack_3->SetBinContent(19,5.475472e-06);
   zqq_stack_3->SetBinContent(20,5.475472e-06);
   zqq_stack_3->SetBinContent(21,5.475472e-06);
   zqq_stack_3->SetBinContent(22,5.475472e-06);
   zqq_stack_3->SetBinContent(23,5.475472e-06);
   zqq_stack_3->SetBinError(1,1.237554e-06);
   zqq_stack_3->SetBinError(2,1.276427);
   zqq_stack_3->SetBinError(3,1.179903);
   zqq_stack_3->SetBinError(4,2.315034);
   zqq_stack_3->SetBinError(5,9.945307);
   zqq_stack_3->SetBinError(6,14.26792);
   zqq_stack_3->SetBinError(7,42.22023);
   zqq_stack_3->SetBinError(8,56.96459);
   zqq_stack_3->SetBinError(9,39.32643);
   zqq_stack_3->SetBinError(10,23.23802);
   zqq_stack_3->SetBinError(11,1.237554e-06);
   zqq_stack_3->SetBinError(12,1.237554e-06);
   zqq_stack_3->SetBinError(13,1.237554e-06);
   zqq_stack_3->SetBinError(14,1.237554e-06);
   zqq_stack_3->SetBinError(15,1.237554e-06);
   zqq_stack_3->SetBinError(16,1.237554e-06);
   zqq_stack_3->SetBinError(17,1.237554e-06);
   zqq_stack_3->SetBinError(18,1.237554e-06);
   zqq_stack_3->SetBinError(19,1.237554e-06);
   zqq_stack_3->SetBinError(20,1.237554e-06);
   zqq_stack_3->SetBinError(21,1.237554e-06);
   zqq_stack_3->SetBinError(22,1.237554e-06);
   zqq_stack_3->SetBinError(23,1.237554e-06);
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
   entry=leg->AddEntry("htotpass_cat1_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat1_2016_fit_b_copy__13 = new TH1F("htotpass_cat1_2016_fit_b_copy__13","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(1,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(2,2359.279);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(3,2510.291);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(4,2511.57);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(5,2517.845);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(6,2614.844);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(7,2656.855);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(8,2576.446);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(9,2275.144);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(10,2032.652);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(11,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(12,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(13,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(14,1198.606);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(15,984.2489);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(16,786.1329);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(17,624.252);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(18,473.3799);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(19,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(20,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(21,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(22,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinContent(23,9.980289e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(1,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(2,31.47089);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(3,30.68901);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(4,38.51712);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(5,49.01885);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(6,70.97647);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(7,90.91109);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(8,94.28113);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(9,76.96868);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(10,63.59089);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(11,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(12,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(13,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(14,35.57428);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(15,27.86365);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(16,19.72881);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(17,16.79897);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(18,13.73917);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(19,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(20,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(21,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(22,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetBinError(23,1.436504e-06);
   htotpass_cat1_2016_fit_b_copy__13->SetMaximum(3985.283);
   htotpass_cat1_2016_fit_b_copy__13->SetEntries(92);
   htotpass_cat1_2016_fit_b_copy__13->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b_copy__13->SetFillColor(ci);
   htotpass_cat1_2016_fit_b_copy__13->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat1_2016_fit_b_copy__13->SetLineColor(ci);
   htotpass_cat1_2016_fit_b_copy__13->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat1_2016_fit_b_copy__13->SetMarkerColor(ci);
   htotpass_cat1_2016_fit_b_copy__13->SetMarkerSize(0);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetRange(2,18);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetLabelOffset(100);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitleOffset(100);
   htotpass_cat1_2016_fit_b_copy__13->GetXaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat1_2016_fit_b_copy__13->GetYaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetLabelFont(42);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat1_2016_fit_b_copy__13->GetZaxis()->SetTitleFont(42);
   htotpass_cat1_2016_fit_b_copy__13->Draw("sameaxis");
   p12pass_cat1_2016_fit_b->Modified();
   cpass_cat1_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat1_2016_fit_b
   TPad *p22pass_cat1_2016_fit_b = new TPad("p22pass_cat1_2016_fit_b", "p22pass_cat1_2016_fit_b",0,0,1,0.3);
   p22pass_cat1_2016_fit_b->Draw();
   p22pass_cat1_2016_fit_b->cd();
   p22pass_cat1_2016_fit_b->Range(21.27027,-12.70041,182.0811,12.96762);
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
   
   TH1F *iOneWithErrorspass_cat1_2016_fit_b__14 = new TH1F("iOneWithErrorspass_cat1_2016_fit_b__14","",23,40,201);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetMaximum(11.68422);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b__14->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b__14->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
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
   iOneWithErrorspass_cat1_2016_fit_b__14->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat1_2016_fit_b__14->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_4 = new TH1F("hstack_stack_4","hstack",23,40,201);
   hstack_stack_4->SetMinimum(-51.98848);
   hstack_stack_4->SetMaximum(65.03774);
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
   
   
   TH1F *sigHistResidualwqqpass_cat1_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat1_2016_fit_b_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(2,0.03590435);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(3,0.07008287);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(4,0.4051341);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(5,0.9817782);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(6,3.195324);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(7,3.839882);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(8,2.734678);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(9,1.161577);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(10,0.2017607);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(14,0.0118604);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(15,1.455663e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(16,1.559235e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(17,1.855089e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinContent(18,2.011225e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(1,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(2,0.479675);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(3,2.668634);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(4,6.927099);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(5,7.316923);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(6,24.17016);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(7,32.0255);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(8,25.50639);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(9,20.28791);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(10,2.283086);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(11,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(12,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(13,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(14,0.381853);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(15,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(16,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(17,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(18,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(19,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(20,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(21,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(22,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetBinError(23,7.293855e-07);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat1_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat1_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat1_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat1_2016_fit_b_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(2,0.0282145);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(3,0.05943266);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(4,0.1621309);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(5,0.4510478);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(6,1.091215);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(7,3.366296);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(8,4.976115);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(9,3.509891);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(10,2.053742);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(14,1.600279e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(15,1.769316e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(16,1.895204e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(17,2.254807e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinContent(18,2.444585e-07);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(1,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(2,1.276427);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(3,1.179903);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(4,2.315034);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(5,9.945307);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(6,14.26792);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(7,42.22023);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(8,56.96459);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(9,39.32643);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(10,23.23802);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(11,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(12,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(13,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(14,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(15,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(16,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(17,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(18,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(19,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(20,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(21,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(22,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetBinError(23,1.237554e-06);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat1_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat1_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat1_2016_fit_bpass_cat1_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat1_2016_fit_b__15 = new TH1F("iOneWithErrorsLinepass_cat1_2016_fit_b__15","",23,40,201);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetFillColor(ci);
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
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
   iOneWithErrorsLinepass_cat1_2016_fit_b__15->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
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
   0.5788428,
   0.1603868,
   0.09282476,
   1.874395,
   4.817034,
   7.789477,
   7.706304,
   6.068875,
   2.688547,
   0,
   0,
   0,
   -0.7949653,
   -0.8481933,
   1.633887,
   -1.4105,
   1.221996,
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat1_2016_fit_b_fx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fy3004,Graph_from_iRatiopass_cat1_2016_fit_b_felx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fehx3004,Graph_from_iRatiopass_cat1_2016_fit_b_fely3004,Graph_from_iRatiopass_cat1_2016_fit_b_fehy3004);
   grae->SetName("Graph_from_iRatiopass_cat1_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004 = new TH1F("Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMinimum(-3.530498);
   Graph_Graph_from_iRatiopass_cat1_2016_fit_b3004->SetMaximum(9.909475);
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
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMinimum(-5);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetMaximum(11.68422);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetEntries(184);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetFillColor(ci);
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
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
   iOneWithErrorspass_cat1_2016_fit_b_copy__16->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
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
