void mlfit_pass_cat6_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_b/cpass_cat6_2016_fit_b
//=========  (Thu Sep 26 13:57:23 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat6_2016_fit_b = new TCanvas("cpass_cat6_2016_fit_b", "cpass_cat6_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat6_2016_fit_b->SetHighLightColor(2);
   cpass_cat6_2016_fit_b->Range(0,0,1,1);
   cpass_cat6_2016_fit_b->SetFillColor(0);
   cpass_cat6_2016_fit_b->SetBorderMode(0);
   cpass_cat6_2016_fit_b->SetBorderSize(2);
   cpass_cat6_2016_fit_b->SetTickx(1);
   cpass_cat6_2016_fit_b->SetTicky(1);
   cpass_cat6_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat6_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat6_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat6_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat6_2016_fit_b
   TPad *p12pass_cat6_2016_fit_b = new TPad("p12pass_cat6_2016_fit_b", "p12pass_cat6_2016_fit_b",0,0.3,1,1);
   p12pass_cat6_2016_fit_b->Draw();
   p12pass_cat6_2016_fit_b->cd();
   p12pass_cat6_2016_fit_b->Range(13.7027,-5.912412,221.8108,289.7082);
   p12pass_cat6_2016_fit_b->SetFillColor(0);
   p12pass_cat6_2016_fit_b->SetBorderMode(0);
   p12pass_cat6_2016_fit_b->SetBorderSize(2);
   p12pass_cat6_2016_fit_b->SetTickx(1);
   p12pass_cat6_2016_fit_b->SetTicky(1);
   p12pass_cat6_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat6_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat6_2016_fit_b__129 = new TH1F("htotpass_cat6_2016_fit_b__129","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b__129->SetBinContent(1,1.551414e-06);
   htotpass_cat6_2016_fit_b__129->SetBinContent(2,138.441);
   htotpass_cat6_2016_fit_b__129->SetBinContent(3,145.762);
   htotpass_cat6_2016_fit_b__129->SetBinContent(4,149.2912);
   htotpass_cat6_2016_fit_b__129->SetBinContent(5,150.6734);
   htotpass_cat6_2016_fit_b__129->SetBinContent(6,168.3115);
   htotpass_cat6_2016_fit_b__129->SetBinContent(7,173.4307);
   htotpass_cat6_2016_fit_b__129->SetBinContent(8,164.1308);
   htotpass_cat6_2016_fit_b__129->SetBinContent(9,139.6994);
   htotpass_cat6_2016_fit_b__129->SetBinContent(10,115.0641);
   htotpass_cat6_2016_fit_b__129->SetBinContent(11,1.551414e-06);
   htotpass_cat6_2016_fit_b__129->SetBinContent(12,1.551414e-06);
   htotpass_cat6_2016_fit_b__129->SetBinContent(13,1.551414e-06);
   htotpass_cat6_2016_fit_b__129->SetBinContent(14,80.85388);
   htotpass_cat6_2016_fit_b__129->SetBinContent(15,75.43601);
   htotpass_cat6_2016_fit_b__129->SetBinContent(16,73.38652);
   htotpass_cat6_2016_fit_b__129->SetBinContent(17,65.88166);
   htotpass_cat6_2016_fit_b__129->SetBinContent(18,61.89289);
   htotpass_cat6_2016_fit_b__129->SetBinContent(19,60.61959);
   htotpass_cat6_2016_fit_b__129->SetBinContent(20,55.63233);
   htotpass_cat6_2016_fit_b__129->SetBinContent(21,51.47237);
   htotpass_cat6_2016_fit_b__129->SetBinContent(22,47.90913);
   htotpass_cat6_2016_fit_b__129->SetBinContent(23,45.96196);
   htotpass_cat6_2016_fit_b__129->SetBinError(1,2.948991e-07);
   htotpass_cat6_2016_fit_b__129->SetBinError(2,7.54011);
   htotpass_cat6_2016_fit_b__129->SetBinError(3,6.457159);
   htotpass_cat6_2016_fit_b__129->SetBinError(4,7.132267);
   htotpass_cat6_2016_fit_b__129->SetBinError(5,7.457482);
   htotpass_cat6_2016_fit_b__129->SetBinError(6,12.20359);
   htotpass_cat6_2016_fit_b__129->SetBinError(7,12.68416);
   htotpass_cat6_2016_fit_b__129->SetBinError(8,13.43186);
   htotpass_cat6_2016_fit_b__129->SetBinError(9,10.91877);
   htotpass_cat6_2016_fit_b__129->SetBinError(10,8.072991);
   htotpass_cat6_2016_fit_b__129->SetBinError(11,2.948991e-07);
   htotpass_cat6_2016_fit_b__129->SetBinError(12,2.948991e-07);
   htotpass_cat6_2016_fit_b__129->SetBinError(13,2.948991e-07);
   htotpass_cat6_2016_fit_b__129->SetBinError(14,4.831359);
   htotpass_cat6_2016_fit_b__129->SetBinError(15,4.25704);
   htotpass_cat6_2016_fit_b__129->SetBinError(16,4.56114);
   htotpass_cat6_2016_fit_b__129->SetBinError(17,3.136991);
   htotpass_cat6_2016_fit_b__129->SetBinError(18,2.792924);
   htotpass_cat6_2016_fit_b__129->SetBinError(19,2.767823);
   htotpass_cat6_2016_fit_b__129->SetBinError(20,2.504691);
   htotpass_cat6_2016_fit_b__129->SetBinError(21,2.370198);
   htotpass_cat6_2016_fit_b__129->SetBinError(22,2.319593);
   htotpass_cat6_2016_fit_b__129->SetBinError(23,2.544057);
   htotpass_cat6_2016_fit_b__129->SetMinimum(0);
   htotpass_cat6_2016_fit_b__129->SetMaximum(260.1461);
   htotpass_cat6_2016_fit_b__129->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__129->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__129->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__129->SetLineColor(ci);
   htotpass_cat6_2016_fit_b__129->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b__129->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b__129->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b__129->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__129->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b__129->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__129->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b__129->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b__129->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b__129->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__129->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__129->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__129->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__129->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__129->Draw("");
   
   TH1F *htot_linepass_cat6_2016_fit_b__130 = new TH1F("htot_linepass_cat6_2016_fit_b__130","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(1,1.551414e-06);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(2,138.441);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(3,145.762);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(4,149.2912);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(5,150.6734);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(6,168.3115);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(7,173.4307);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(8,164.1308);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(9,139.6994);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(10,115.0641);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(11,1.551414e-06);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(12,1.551414e-06);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(13,1.551414e-06);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(14,80.85388);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(15,75.43601);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(16,73.38652);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(17,65.88166);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(18,61.89289);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(19,60.61959);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(20,55.63233);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(21,51.47237);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(22,47.90913);
   htot_linepass_cat6_2016_fit_b__130->SetBinContent(23,45.96196);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(1,2.948991e-07);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(2,7.54011);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(3,6.457159);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(4,7.132267);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(5,7.457482);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(6,12.20359);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(7,12.68416);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(8,13.43186);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(9,10.91877);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(10,8.072991);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(11,2.948991e-07);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(12,2.948991e-07);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(13,2.948991e-07);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(14,4.831359);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(15,4.25704);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(16,4.56114);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(17,3.136991);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(18,2.792924);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(19,2.767823);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(20,2.504691);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(21,2.370198);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(22,2.319593);
   htot_linepass_cat6_2016_fit_b__130->SetBinError(23,2.544057);
   htot_linepass_cat6_2016_fit_b__130->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_b__130->SetFillColor(ci);
   htot_linepass_cat6_2016_fit_b__130->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_b__130->SetLineColor(ci);
   htot_linepass_cat6_2016_fit_b__130->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_fit_b__130->SetMarkerColor(ci);
   htot_linepass_cat6_2016_fit_b__130->SetMarkerSize(0);
   htot_linepass_cat6_2016_fit_b__130->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_fit_b__130->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_fit_b__130->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__130->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_b__130->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_b__130->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__130->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_fit_b__130->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__130->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_fit_b__130->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_fit_b__130->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_fit_b__130->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__130->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__130->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_b__130->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_b__130->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__130->Draw("histsame");
   
   TH1F *qcd__131 = new TH1F("qcd__131","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__131->SetBinContent(2,138.441);
   qcd__131->SetBinContent(3,143.31);
   qcd__131->SetBinContent(4,138.4306);
   qcd__131->SetBinContent(5,131.8671);
   qcd__131->SetBinContent(6,125.8434);
   qcd__131->SetBinContent(7,114.9049);
   qcd__131->SetBinContent(8,106.6022);
   qcd__131->SetBinContent(9,98.5053);
   qcd__131->SetBinContent(10,93.38323);
   qcd__131->SetBinContent(14,71.95343);
   qcd__131->SetBinContent(15,68.1619);
   qcd__131->SetBinContent(16,64.27142);
   qcd__131->SetBinContent(17,62.88092);
   qcd__131->SetBinContent(18,59.69231);
   qcd__131->SetBinContent(19,57.42937);
   qcd__131->SetBinContent(20,52.61085);
   qcd__131->SetBinContent(21,50.66597);
   qcd__131->SetBinContent(22,47.90913);
   qcd__131->SetBinContent(23,45.24119);
   qcd__131->SetBinError(2,7.54011);
   qcd__131->SetBinError(3,6.402608);
   qcd__131->SetBinError(4,6.314304);
   qcd__131->SetBinError(5,6.661073);
   qcd__131->SetBinError(6,7.323186);
   qcd__131->SetBinError(7,7.059426);
   qcd__131->SetBinError(8,6.734153);
   qcd__131->SetBinError(9,6.514621);
   qcd__131->SetBinError(10,5.984842);
   qcd__131->SetBinError(14,4.139845);
   qcd__131->SetBinError(15,3.623989);
   qcd__131->SetBinError(16,3.215384);
   qcd__131->SetBinError(17,2.93171);
   qcd__131->SetBinError(18,2.670288);
   qcd__131->SetBinError(19,2.50055);
   qcd__131->SetBinError(20,2.238392);
   qcd__131->SetBinError(21,2.351142);
   qcd__131->SetBinError(22,2.319593);
   qcd__131->SetBinError(23,2.529892);
   qcd__131->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__131->SetLineColor(ci);
   qcd__131->SetLineStyle(2);
   qcd__131->SetLineWidth(2);
   qcd__131->GetXaxis()->SetTitle("x");
   qcd__131->GetXaxis()->SetLabelFont(42);
   qcd__131->GetXaxis()->SetLabelSize(0.035);
   qcd__131->GetXaxis()->SetTitleSize(0.035);
   qcd__131->GetXaxis()->SetTitleFont(42);
   qcd__131->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__131->GetYaxis()->SetLabelFont(42);
   qcd__131->GetYaxis()->SetLabelSize(0.035);
   qcd__131->GetYaxis()->SetTitleSize(0.035);
   qcd__131->GetYaxis()->SetTitleOffset(0);
   qcd__131->GetYaxis()->SetTitleFont(42);
   qcd__131->GetZaxis()->SetLabelFont(42);
   qcd__131->GetZaxis()->SetLabelSize(0.035);
   qcd__131->GetZaxis()->SetTitleSize(0.035);
   qcd__131->GetZaxis()->SetTitleFont(42);
   qcd__131->Draw("hist sames");
   
   TH1F *htotpass_cat6_2016_fit_b__132 = new TH1F("htotpass_cat6_2016_fit_b__132","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b__132->SetBinContent(1,1.551414e-06);
   htotpass_cat6_2016_fit_b__132->SetBinContent(2,138.441);
   htotpass_cat6_2016_fit_b__132->SetBinContent(3,145.762);
   htotpass_cat6_2016_fit_b__132->SetBinContent(4,149.2912);
   htotpass_cat6_2016_fit_b__132->SetBinContent(5,150.6734);
   htotpass_cat6_2016_fit_b__132->SetBinContent(6,168.3115);
   htotpass_cat6_2016_fit_b__132->SetBinContent(7,173.4307);
   htotpass_cat6_2016_fit_b__132->SetBinContent(8,164.1308);
   htotpass_cat6_2016_fit_b__132->SetBinContent(9,139.6994);
   htotpass_cat6_2016_fit_b__132->SetBinContent(10,115.0641);
   htotpass_cat6_2016_fit_b__132->SetBinContent(11,1.551414e-06);
   htotpass_cat6_2016_fit_b__132->SetBinContent(12,1.551414e-06);
   htotpass_cat6_2016_fit_b__132->SetBinContent(13,1.551414e-06);
   htotpass_cat6_2016_fit_b__132->SetBinContent(14,80.85388);
   htotpass_cat6_2016_fit_b__132->SetBinContent(15,75.43601);
   htotpass_cat6_2016_fit_b__132->SetBinContent(16,73.38652);
   htotpass_cat6_2016_fit_b__132->SetBinContent(17,65.88166);
   htotpass_cat6_2016_fit_b__132->SetBinContent(18,61.89289);
   htotpass_cat6_2016_fit_b__132->SetBinContent(19,60.61959);
   htotpass_cat6_2016_fit_b__132->SetBinContent(20,55.63233);
   htotpass_cat6_2016_fit_b__132->SetBinContent(21,51.47237);
   htotpass_cat6_2016_fit_b__132->SetBinContent(22,47.90913);
   htotpass_cat6_2016_fit_b__132->SetBinContent(23,45.96196);
   htotpass_cat6_2016_fit_b__132->SetBinError(1,2.948991e-07);
   htotpass_cat6_2016_fit_b__132->SetBinError(2,7.54011);
   htotpass_cat6_2016_fit_b__132->SetBinError(3,6.457159);
   htotpass_cat6_2016_fit_b__132->SetBinError(4,7.132267);
   htotpass_cat6_2016_fit_b__132->SetBinError(5,7.457482);
   htotpass_cat6_2016_fit_b__132->SetBinError(6,12.20359);
   htotpass_cat6_2016_fit_b__132->SetBinError(7,12.68416);
   htotpass_cat6_2016_fit_b__132->SetBinError(8,13.43186);
   htotpass_cat6_2016_fit_b__132->SetBinError(9,10.91877);
   htotpass_cat6_2016_fit_b__132->SetBinError(10,8.072991);
   htotpass_cat6_2016_fit_b__132->SetBinError(11,2.948991e-07);
   htotpass_cat6_2016_fit_b__132->SetBinError(12,2.948991e-07);
   htotpass_cat6_2016_fit_b__132->SetBinError(13,2.948991e-07);
   htotpass_cat6_2016_fit_b__132->SetBinError(14,4.831359);
   htotpass_cat6_2016_fit_b__132->SetBinError(15,4.25704);
   htotpass_cat6_2016_fit_b__132->SetBinError(16,4.56114);
   htotpass_cat6_2016_fit_b__132->SetBinError(17,3.136991);
   htotpass_cat6_2016_fit_b__132->SetBinError(18,2.792924);
   htotpass_cat6_2016_fit_b__132->SetBinError(19,2.767823);
   htotpass_cat6_2016_fit_b__132->SetBinError(20,2.504691);
   htotpass_cat6_2016_fit_b__132->SetBinError(21,2.370198);
   htotpass_cat6_2016_fit_b__132->SetBinError(22,2.319593);
   htotpass_cat6_2016_fit_b__132->SetBinError(23,2.544057);
   htotpass_cat6_2016_fit_b__132->SetMinimum(0);
   htotpass_cat6_2016_fit_b__132->SetMaximum(260.1461);
   htotpass_cat6_2016_fit_b__132->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__132->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__132->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__132->SetLineColor(ci);
   htotpass_cat6_2016_fit_b__132->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b__132->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b__132->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b__132->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__132->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b__132->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__132->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b__132->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b__132->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b__132->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__132->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__132->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__132->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__132->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__132->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis33[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_33 = new TH1F("hstackMC_stack_33","hstackMC",23, xAxis33);
   hstackMC_stack_33->SetMinimum(0);
   hstackMC_stack_33->SetMaximum(61.4521);
   hstackMC_stack_33->SetDirectory(0);
   hstackMC_stack_33->SetStats(0);
   hstackMC_stack_33->SetLineStyle(0);
   hstackMC_stack_33->SetMarkerStyle(20);
   hstackMC_stack_33->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_33->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_33->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_33->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_33->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_33->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_33->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_33->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_33->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_33->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_33->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_33->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_33->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_33->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_33->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_33->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_33->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_33);
   
   Double_t xAxis34[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat6_2016_pass_cat6",23, xAxis34);
   tqq_stack_1->SetBinContent(3,0.7451628);
   tqq_stack_1->SetBinContent(4,1.441815);
   tqq_stack_1->SetBinContent(5,3.065921);
   tqq_stack_1->SetBinContent(6,6.504807);
   tqq_stack_1->SetBinContent(7,11.46986);
   tqq_stack_1->SetBinContent(8,6.898479);
   tqq_stack_1->SetBinContent(9,4.301272);
   tqq_stack_1->SetBinContent(10,2.175895);
   tqq_stack_1->SetBinContent(14,6.316195);
   tqq_stack_1->SetBinContent(15,5.669265);
   tqq_stack_1->SetBinContent(16,8.586957);
   tqq_stack_1->SetBinContent(17,3.000737);
   tqq_stack_1->SetBinContent(18,2.200584);
   tqq_stack_1->SetBinContent(19,3.190224);
   tqq_stack_1->SetBinContent(20,3.021478);
   tqq_stack_1->SetBinContent(21,0.8064033);
   tqq_stack_1->SetBinContent(23,0.7207617);
   tqq_stack_1->SetBinError(3,0.2771698);
   tqq_stack_1->SetBinError(4,0.536296);
   tqq_stack_1->SetBinError(5,1.140396);
   tqq_stack_1->SetBinError(6,2.41952);
   tqq_stack_1->SetBinError(7,4.266316);
   tqq_stack_1->SetBinError(8,2.565951);
   tqq_stack_1->SetBinError(9,1.599896);
   tqq_stack_1->SetBinError(10,0.8093433);
   tqq_stack_1->SetBinError(14,2.349365);
   tqq_stack_1->SetBinError(15,2.108733);
   tqq_stack_1->SetBinError(16,3.193995);
   tqq_stack_1->SetBinError(17,1.116151);
   tqq_stack_1->SetBinError(18,0.8185266);
   tqq_stack_1->SetBinError(19,1.186632);
   tqq_stack_1->SetBinError(20,1.123866);
   tqq_stack_1->SetBinError(21,0.2999489);
   tqq_stack_1->SetBinError(23,0.2680937);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat6_2016_pass_cat6",23,40,201);
   wqq_stack_2->SetBinContent(1,6.842721e-07);
   wqq_stack_2->SetBinContent(2,6.842721e-07);
   wqq_stack_2->SetBinContent(3,1.152388);
   wqq_stack_2->SetBinContent(4,7.682207);
   wqq_stack_2->SetBinContent(5,13.09652);
   wqq_stack_2->SetBinContent(6,22.12591);
   wqq_stack_2->SetBinContent(7,25.78694);
   wqq_stack_2->SetBinContent(8,18.1304);
   wqq_stack_2->SetBinContent(9,8.573057);
   wqq_stack_2->SetBinContent(10,1.205737);
   wqq_stack_2->SetBinContent(11,6.842721e-07);
   wqq_stack_2->SetBinContent(12,6.842721e-07);
   wqq_stack_2->SetBinContent(13,6.842721e-07);
   wqq_stack_2->SetBinContent(14,6.842721e-07);
   wqq_stack_2->SetBinContent(15,6.842721e-07);
   wqq_stack_2->SetBinContent(16,6.842721e-07);
   wqq_stack_2->SetBinContent(17,6.842721e-07);
   wqq_stack_2->SetBinContent(18,6.842721e-07);
   wqq_stack_2->SetBinContent(19,6.842721e-07);
   wqq_stack_2->SetBinContent(20,6.842721e-07);
   wqq_stack_2->SetBinContent(21,6.842721e-07);
   wqq_stack_2->SetBinContent(22,6.842721e-07);
   wqq_stack_2->SetBinContent(23,6.842721e-07);
   wqq_stack_2->SetBinError(1,1.744471e-07);
   wqq_stack_2->SetBinError(2,1.744471e-07);
   wqq_stack_2->SetBinError(3,0.5779532);
   wqq_stack_2->SetBinError(4,3.091547);
   wqq_stack_2->SetBinError(5,3.034798);
   wqq_stack_2->SetBinError(6,6.363409);
   wqq_stack_2->SetBinError(7,6.623253);
   wqq_stack_2->SetBinError(8,6.161857);
   wqq_stack_2->SetBinError(9,3.926185);
   wqq_stack_2->SetBinError(10,0.6416682);
   wqq_stack_2->SetBinError(11,1.744471e-07);
   wqq_stack_2->SetBinError(12,1.744471e-07);
   wqq_stack_2->SetBinError(13,1.744471e-07);
   wqq_stack_2->SetBinError(14,1.744471e-07);
   wqq_stack_2->SetBinError(15,1.744471e-07);
   wqq_stack_2->SetBinError(16,1.744471e-07);
   wqq_stack_2->SetBinError(17,1.744471e-07);
   wqq_stack_2->SetBinError(18,1.744471e-07);
   wqq_stack_2->SetBinError(19,1.744471e-07);
   wqq_stack_2->SetBinError(20,1.744471e-07);
   wqq_stack_2->SetBinError(21,1.744471e-07);
   wqq_stack_2->SetBinError(22,1.744471e-07);
   wqq_stack_2->SetBinError(23,1.744471e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat6_2016_pass_cat6",23,40,201);
   zqq_stack_3->SetBinContent(1,8.671416e-07);
   zqq_stack_3->SetBinContent(2,8.671416e-07);
   zqq_stack_3->SetBinContent(3,0.5544792);
   zqq_stack_3->SetBinContent(4,1.736629);
   zqq_stack_3->SetBinContent(5,2.643928);
   zqq_stack_3->SetBinContent(6,13.83744);
   zqq_stack_3->SetBinContent(7,21.26902);
   zqq_stack_3->SetBinContent(8,32.49968);
   zqq_stack_3->SetBinContent(9,28.31974);
   zqq_stack_3->SetBinContent(10,18.29922);
   zqq_stack_3->SetBinContent(11,8.671416e-07);
   zqq_stack_3->SetBinContent(12,8.671416e-07);
   zqq_stack_3->SetBinContent(13,8.671416e-07);
   zqq_stack_3->SetBinContent(14,2.58426);
   zqq_stack_3->SetBinContent(15,1.604845);
   zqq_stack_3->SetBinContent(16,0.5281384);
   zqq_stack_3->SetBinContent(17,8.671416e-07);
   zqq_stack_3->SetBinContent(18,8.671416e-07);
   zqq_stack_3->SetBinContent(19,8.671416e-07);
   zqq_stack_3->SetBinContent(20,8.671416e-07);
   zqq_stack_3->SetBinContent(21,8.671416e-07);
   zqq_stack_3->SetBinContent(22,8.671416e-07);
   zqq_stack_3->SetBinContent(23,8.671416e-07);
   zqq_stack_3->SetBinError(1,2.377682e-07);
   zqq_stack_3->SetBinError(2,2.377682e-07);
   zqq_stack_3->SetBinError(3,0.539127);
   zqq_stack_3->SetBinError(4,1.074018);
   zqq_stack_3->SetBinError(5,0.8565296);
   zqq_stack_3->SetBinError(6,6.996528);
   zqq_stack_3->SetBinError(7,6.998827);
   zqq_stack_3->SetBinError(8,9.513859);
   zqq_stack_3->SetBinError(9,7.668415);
   zqq_stack_3->SetBinError(10,5.318652);
   zqq_stack_3->SetBinError(11,2.377682e-07);
   zqq_stack_3->SetBinError(12,2.377682e-07);
   zqq_stack_3->SetBinError(13,2.377682e-07);
   zqq_stack_3->SetBinError(14,0.8271594);
   zqq_stack_3->SetBinError(15,0.7364357);
   zqq_stack_3->SetBinError(16,0.5135155);
   zqq_stack_3->SetBinError(17,2.377682e-07);
   zqq_stack_3->SetBinError(18,2.377682e-07);
   zqq_stack_3->SetBinError(19,2.377682e-07);
   zqq_stack_3->SetBinError(20,2.377682e-07);
   zqq_stack_3->SetBinError(21,2.377682e-07);
   zqq_stack_3->SetBinError(22,2.377682e-07);
   zqq_stack_3->SetBinError(23,2.377682e-07);
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
   
   TH1F *hsigpass_cat6_2016_fit_b_stack_4 = new TH1F("hsigpass_cat6_2016_fit_b_stack_4","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_fit_b_stack_4->SetEntries(92);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat6_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3033[23] = {
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
   Double_t data_copy_fy3033[23] = {
   0,
   132,
   155,
   137,
   146,
   175,
   184,
   153,
   141,
   127,
   0,
   0,
   0,
   76,
   80,
   74,
   66,
   49,
   75,
   64,
   49,
   43,
   41};
   Double_t data_copy_felx3033[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3033[23] = {
   1.841055,
   12.51843,
   13.47698,
   12.73347,
   13.11093,
   14.25428,
   14.58956,
   13.39657,
   12.90271,
   12.29929,
   1.841055,
   1.841055,
   1.841055,
   9.756266,
   9.981777,
   9.641304,
   9.165286,
   8.047802,
   9.698975,
   9.041881,
   8.047802,
   7.608436,
   7.45534};
   Double_t data_copy_fehx3033[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3033[23] = {
   0,
   11.47479,
   12.43672,
   11.69064,
   12.06945,
   13.21639,
   13.55261,
   12.35605,
   11.86049,
   11.25481,
   0,
   0,
   0,
   8.69875,
   8.925719,
   8.583016,
   8.103564,
   6.976163,
   8.641077,
   7.979201,
   6.976163,
   6.531962,
   6.377022};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3033,data_copy_fy3033,data_copy_felx3033,data_copy_fehx3033,data_copy_fely3033,data_copy_fehy3033);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat6_2016_pass_cat6");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3033 = new TH1F("Graph_data_copy3033","tqq in cat6_2016_pass_cat6",100,28.1,212.9);
   Graph_data_copy3033->SetMinimum(0);
   Graph_data_copy3033->SetMaximum(217.492);
   Graph_data_copy3033->SetDirectory(0);
   Graph_data_copy3033->SetStats(0);
   Graph_data_copy3033->SetLineStyle(0);
   Graph_data_copy3033->SetMarkerStyle(20);
   Graph_data_copy3033->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3033->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3033->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3033->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3033->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3033->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3033->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3033->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3033->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3033->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3033->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3033);
   
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
   entry=leg->AddEntry("htotpass_cat6_2016_fit_b","Total background","lf");

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
      tex = new TLatex(0.25,0.77,"800 < p_{T} < 1200 GeV");
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
   
   TH1F *htotpass_cat6_2016_fit_b_copy__133 = new TH1F("htotpass_cat6_2016_fit_b_copy__133","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(1,1.551414e-06);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(2,138.441);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(3,145.762);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(4,149.2912);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(5,150.6734);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(6,168.3115);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(7,173.4307);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(8,164.1308);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(9,139.6994);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(10,115.0641);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(11,1.551414e-06);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(12,1.551414e-06);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(13,1.551414e-06);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(14,80.85388);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(15,75.43601);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(16,73.38652);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(17,65.88166);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(18,61.89289);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(19,60.61959);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(20,55.63233);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(21,51.47237);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(22,47.90913);
   htotpass_cat6_2016_fit_b_copy__133->SetBinContent(23,45.96196);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(1,2.948991e-07);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(2,7.54011);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(3,6.457159);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(4,7.132267);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(5,7.457482);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(6,12.20359);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(7,12.68416);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(8,13.43186);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(9,10.91877);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(10,8.072991);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(11,2.948991e-07);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(12,2.948991e-07);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(13,2.948991e-07);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(14,4.831359);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(15,4.25704);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(16,4.56114);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(17,3.136991);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(18,2.792924);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(19,2.767823);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(20,2.504691);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(21,2.370198);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(22,2.319593);
   htotpass_cat6_2016_fit_b_copy__133->SetBinError(23,2.544057);
   htotpass_cat6_2016_fit_b_copy__133->SetMaximum(260.1461);
   htotpass_cat6_2016_fit_b_copy__133->SetEntries(92);
   htotpass_cat6_2016_fit_b_copy__133->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__133->SetFillColor(ci);
   htotpass_cat6_2016_fit_b_copy__133->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__133->SetLineColor(ci);
   htotpass_cat6_2016_fit_b_copy__133->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b_copy__133->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b_copy__133->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b_copy__133->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__133->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b_copy__133->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__133->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b_copy__133->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b_copy__133->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b_copy__133->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__133->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__133->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__133->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__133->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__133->Draw("sameaxis");
   p12pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_b
   TPad *p22pass_cat6_2016_fit_b = new TPad("p22pass_cat6_2016_fit_b", "p22pass_cat6_2016_fit_b",0,0,1,0.3);
   p22pass_cat6_2016_fit_b->Draw();
   p22pass_cat6_2016_fit_b->cd();
   p22pass_cat6_2016_fit_b->Range(13.7027,-10.04214,221.8108,6.76499);
   p22pass_cat6_2016_fit_b->SetFillColor(0);
   p22pass_cat6_2016_fit_b->SetBorderMode(0);
   p22pass_cat6_2016_fit_b->SetBorderSize(2);
   p22pass_cat6_2016_fit_b->SetTickx(1);
   p22pass_cat6_2016_fit_b->SetTicky(1);
   p22pass_cat6_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat6_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat6_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b__134 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b__134","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b__134->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_b__134->SetMaximum(5.924633);
   iOneWithErrorspass_cat6_2016_fit_b__134->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__134->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__134->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__134->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__134->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__134->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__134->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__134->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__134->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_34 = new TH1F("hstack_stack_34","hstack",23,40,201);
   hstack_stack_34->SetMinimum(-6.883594);
   hstack_stack_34->SetMaximum(12.75133);
   hstack_stack_34->SetDirectory(0);
   hstack_stack_34->SetStats(0);
   hstack_stack_34->SetLineStyle(0);
   hstack_stack_34->SetMarkerStyle(20);
   hstack_stack_34->GetXaxis()->SetLabelFont(42);
   hstack_stack_34->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_34->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_34->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_34->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_34->GetXaxis()->SetTitleFont(42);
   hstack_stack_34->GetYaxis()->SetLabelFont(42);
   hstack_stack_34->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_34->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_34->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_34->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_34->GetYaxis()->SetTitleFont(42);
   hstack_stack_34->GetZaxis()->SetLabelFont(42);
   hstack_stack_34->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_34->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_34->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_34->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_34);
   
   
   TH1F *sigHistResidualwqqpass_cat6_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat6_2016_fit_b_stack_1","wqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(2,5.963263e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(3,0.09266017);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(4,0.6571244);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(5,1.085097);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(6,1.674127);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(7,1.902728);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(8,1.46733);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(9,0.7228246);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(10,0.1071308);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(14,7.866326e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(15,7.666297e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(16,7.972397e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(17,8.444088e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(18,9.808716e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(19,7.918829e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(20,8.575697e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(21,9.808716e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(22,1.047575e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(23,1.073028e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(1,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(2,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(3,0.5779532);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(4,3.091547);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(5,3.034798);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(6,6.363409);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(7,6.623253);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(8,6.161857);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(9,3.926185);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(10,0.6416682);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(11,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(12,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(13,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(14,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(15,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(16,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(17,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(18,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(19,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(20,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(21,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(22,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinError(23,1.744471e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat6_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat6_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat6_2016_fit_b_stack_2","zqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(2,7.556925e-08);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(3,0.04458404);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(4,0.1485487);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(5,0.2190595);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(6,1.046991);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(7,1.569367);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(8,2.630265);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(9,2.387737);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(10,1.625903);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(14,0.2970841);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(15,0.1798001);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(16,0.06153297);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(17,1.070074e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(18,1.243006e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(19,1.003511e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(20,1.086752e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(21,1.243006e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(22,1.327536e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(23,1.359791e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(1,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(2,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(3,0.539127);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(4,1.074018);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(5,0.8565296);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(6,6.996528);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(7,6.998827);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(8,9.513859);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(9,7.668415);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(10,5.318652);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(11,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(12,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(13,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(14,0.8271594);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(15,0.7364357);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(16,0.5135155);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(17,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(18,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(19,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(20,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(21,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(22,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinError(23,2.377682e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat6_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_b__135 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_b__135","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__135->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fx3034[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fy3034[23] = {
   0,
   -0.5613194,
   0.8121146,
   -0.2457013,
   0.8441058,
   2.992212,
   3.949755,
   2.948463,
   2.960109,
   2.556316,
   0,
   0,
   0,
   -0.2609137,
   0.6180093,
   0.118409,
   0.01291171,
   -1.848135,
   1.482673,
   0.9254353,
   -0.3544031,
   -0.7515547,
   -0.7780987};
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_felx3034[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fely3034[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fehx3034[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fehy3034[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_b_fx3034,Graph_from_iRatiopass_cat6_2016_fit_b_fy3034,Graph_from_iRatiopass_cat6_2016_fit_b_felx3034,Graph_from_iRatiopass_cat6_2016_fit_b_fehx3034,Graph_from_iRatiopass_cat6_2016_fit_b_fely3034,Graph_from_iRatiopass_cat6_2016_fit_b_fehy3034);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->SetMinimum(-3.627924);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->SetMaximum(5.729544);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_fit_b3034);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b_copy__136 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b_copy__136","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetMaximum(5.924633);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__136->Draw("sameaxis");
   p22pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
   cpass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
   cpass_cat6_2016_fit_b->SetSelected(cpass_cat6_2016_fit_b);
}
