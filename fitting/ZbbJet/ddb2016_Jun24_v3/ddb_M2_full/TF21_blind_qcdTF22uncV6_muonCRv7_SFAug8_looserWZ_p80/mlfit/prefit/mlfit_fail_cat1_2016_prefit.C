void mlfit_fail_cat1_2016_prefit()
{
//=========Macro generated from canvas: cfail_cat1_2016_prefit/cfail_cat1_2016_prefit
//=========  (Thu Sep 26 13:57:09 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat1_2016_prefit = new TCanvas("cfail_cat1_2016_prefit", "cfail_cat1_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat1_2016_prefit->SetHighLightColor(2);
   cfail_cat1_2016_prefit->Range(0,0,1,1);
   cfail_cat1_2016_prefit->SetFillColor(0);
   cfail_cat1_2016_prefit->SetBorderMode(0);
   cfail_cat1_2016_prefit->SetBorderSize(2);
   cfail_cat1_2016_prefit->SetTickx(1);
   cfail_cat1_2016_prefit->SetTicky(1);
   cfail_cat1_2016_prefit->SetLeftMargin(0.16);
   cfail_cat1_2016_prefit->SetBottomMargin(0.13);
   cfail_cat1_2016_prefit->SetFrameFillStyle(0);
   cfail_cat1_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat1_2016_prefit
   TPad *p12fail_cat1_2016_prefit = new TPad("p12fail_cat1_2016_prefit", "p12fail_cat1_2016_prefit",0,0.3,1,1);
   p12fail_cat1_2016_prefit->Draw();
   p12fail_cat1_2016_prefit->cd();
   p12fail_cat1_2016_prefit->Range(21.27027,-6091.556,182.0811,298486.2);
   p12fail_cat1_2016_prefit->SetFillColor(0);
   p12fail_cat1_2016_prefit->SetBorderMode(0);
   p12fail_cat1_2016_prefit->SetBorderSize(2);
   p12fail_cat1_2016_prefit->SetTickx(1);
   p12fail_cat1_2016_prefit->SetTicky(1);
   p12fail_cat1_2016_prefit->SetLeftMargin(0.16);
   p12fail_cat1_2016_prefit->SetBottomMargin(0.02);
   p12fail_cat1_2016_prefit->SetFrameFillStyle(0);
   p12fail_cat1_2016_prefit->SetFrameBorderMode(0);
   p12fail_cat1_2016_prefit->SetFrameFillStyle(0);
   p12fail_cat1_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat1_2016_prefit__1 = new TH1F("htotfail_cat1_2016_prefit__1","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_prefit__1->SetBinContent(1,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(2,178685.6);
   htotfail_cat1_2016_prefit__1->SetBinContent(3,165525.7);
   htotfail_cat1_2016_prefit__1->SetBinContent(4,153493.7);
   htotfail_cat1_2016_prefit__1->SetBinContent(5,145967.3);
   htotfail_cat1_2016_prefit__1->SetBinContent(6,143498.5);
   htotfail_cat1_2016_prefit__1->SetBinContent(7,140427.9);
   htotfail_cat1_2016_prefit__1->SetBinContent(8,134479.4);
   htotfail_cat1_2016_prefit__1->SetBinContent(9,126900.5);
   htotfail_cat1_2016_prefit__1->SetBinContent(10,119910.2);
   htotfail_cat1_2016_prefit__1->SetBinContent(11,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(12,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(13,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(14,91448.91);
   htotfail_cat1_2016_prefit__1->SetBinContent(15,82223.52);
   htotfail_cat1_2016_prefit__1->SetBinContent(16,72861.07);
   htotfail_cat1_2016_prefit__1->SetBinContent(17,64293.54);
   htotfail_cat1_2016_prefit__1->SetBinContent(18,55079.04);
   htotfail_cat1_2016_prefit__1->SetBinContent(19,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(20,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(21,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(22,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinContent(23,0.0002152667);
   htotfail_cat1_2016_prefit__1->SetBinError(1,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(2,59.006);
   htotfail_cat1_2016_prefit__1->SetBinError(3,123.7818);
   htotfail_cat1_2016_prefit__1->SetBinError(4,248.0083);
   htotfail_cat1_2016_prefit__1->SetBinError(5,510.0279);
   htotfail_cat1_2016_prefit__1->SetBinError(6,1370.227);
   htotfail_cat1_2016_prefit__1->SetBinError(7,1824.609);
   htotfail_cat1_2016_prefit__1->SetBinError(8,1137.91);
   htotfail_cat1_2016_prefit__1->SetBinError(9,821.4249);
   htotfail_cat1_2016_prefit__1->SetBinError(10,365.0645);
   htotfail_cat1_2016_prefit__1->SetBinError(11,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(12,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(13,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(14,168.9822);
   htotfail_cat1_2016_prefit__1->SetBinError(15,155.2243);
   htotfail_cat1_2016_prefit__1->SetBinError(16,114.9277);
   htotfail_cat1_2016_prefit__1->SetBinError(17,90.29526);
   htotfail_cat1_2016_prefit__1->SetBinError(18,68.66663);
   htotfail_cat1_2016_prefit__1->SetBinError(19,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(20,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(21,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(22,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetBinError(23,3.310874e-05);
   htotfail_cat1_2016_prefit__1->SetMinimum(0);
   htotfail_cat1_2016_prefit__1->SetMaximum(268028.5);
   htotfail_cat1_2016_prefit__1->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_prefit__1->SetFillColor(ci);
   htotfail_cat1_2016_prefit__1->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_prefit__1->SetLineColor(ci);
   htotfail_cat1_2016_prefit__1->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_prefit__1->SetMarkerColor(ci);
   htotfail_cat1_2016_prefit__1->SetMarkerSize(0);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_prefit__1->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit__1->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_prefit__1->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit__1->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_prefit__1->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_prefit__1->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_prefit__1->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit__1->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit__1->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_prefit__1->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_prefit__1->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit__1->Draw("");
   
   TH1F *htot_linefail_cat1_2016_prefit__2 = new TH1F("htot_linefail_cat1_2016_prefit__2","wqq in cat1_2016_fail_cat1",23,40,201);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(1,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(2,178685.6);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(3,165525.7);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(4,153493.7);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(5,145967.3);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(6,143498.5);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(7,140427.9);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(8,134479.4);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(9,126900.5);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(10,119910.2);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(11,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(12,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(13,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(14,91448.91);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(15,82223.52);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(16,72861.07);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(17,64293.54);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(18,55079.04);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(19,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(20,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(21,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(22,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinContent(23,0.0002152667);
   htot_linefail_cat1_2016_prefit__2->SetBinError(1,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(2,59.006);
   htot_linefail_cat1_2016_prefit__2->SetBinError(3,123.7818);
   htot_linefail_cat1_2016_prefit__2->SetBinError(4,248.0083);
   htot_linefail_cat1_2016_prefit__2->SetBinError(5,510.0279);
   htot_linefail_cat1_2016_prefit__2->SetBinError(6,1370.227);
   htot_linefail_cat1_2016_prefit__2->SetBinError(7,1824.609);
   htot_linefail_cat1_2016_prefit__2->SetBinError(8,1137.91);
   htot_linefail_cat1_2016_prefit__2->SetBinError(9,821.4249);
   htot_linefail_cat1_2016_prefit__2->SetBinError(10,365.0645);
   htot_linefail_cat1_2016_prefit__2->SetBinError(11,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(12,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(13,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(14,168.9822);
   htot_linefail_cat1_2016_prefit__2->SetBinError(15,155.2243);
   htot_linefail_cat1_2016_prefit__2->SetBinError(16,114.9277);
   htot_linefail_cat1_2016_prefit__2->SetBinError(17,90.29526);
   htot_linefail_cat1_2016_prefit__2->SetBinError(18,68.66663);
   htot_linefail_cat1_2016_prefit__2->SetBinError(19,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(20,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(21,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(22,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetBinError(23,3.310874e-05);
   htot_linefail_cat1_2016_prefit__2->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat1_2016_prefit__2->SetFillColor(ci);
   htot_linefail_cat1_2016_prefit__2->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat1_2016_prefit__2->SetLineColor(ci);
   htot_linefail_cat1_2016_prefit__2->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat1_2016_prefit__2->SetMarkerColor(ci);
   htot_linefail_cat1_2016_prefit__2->SetMarkerSize(0);
   htot_linefail_cat1_2016_prefit__2->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat1_2016_prefit__2->GetXaxis()->SetRange(2,18);
   htot_linefail_cat1_2016_prefit__2->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_prefit__2->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat1_2016_prefit__2->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat1_2016_prefit__2->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_prefit__2->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat1_2016_prefit__2->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_prefit__2->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat1_2016_prefit__2->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat1_2016_prefit__2->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat1_2016_prefit__2->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_prefit__2->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat1_2016_prefit__2->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat1_2016_prefit__2->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat1_2016_prefit__2->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat1_2016_prefit__2->Draw("histsame");
   
   TH1F *qcd__3 = new TH1F("qcd__3","qcd in cat1_2016_fail_cat1",23,40,201);
   qcd__3->SetBinContent(2,178506.7);
   qcd__3->SetBinContent(3,165178.7);
   qcd__3->SetBinContent(4,152415);
   qcd__3->SetBinContent(5,143496.2);
   qcd__3->SetBinContent(6,136361.7);
   qcd__3->SetBinContent(7,130332.5);
   qcd__3->SetBinContent(8,126951.7);
   qcd__3->SetBinContent(9,122453.3);
   qcd__3->SetBinContent(10,117966.6);
   qcd__3->SetBinContent(14,90948.52);
   qcd__3->SetBinContent(15,81746.53);
   qcd__3->SetBinContent(16,72542.8);
   qcd__3->SetBinContent(17,64043.38);
   qcd__3->SetBinContent(18,54889.02);
   qcd__3->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__3->SetLineColor(ci);
   qcd__3->SetLineStyle(2);
   qcd__3->SetLineWidth(2);
   qcd__3->GetXaxis()->SetTitle("x");
   qcd__3->GetXaxis()->SetLabelFont(42);
   qcd__3->GetXaxis()->SetLabelSize(0.035);
   qcd__3->GetXaxis()->SetTitleSize(0.035);
   qcd__3->GetXaxis()->SetTitleFont(42);
   qcd__3->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__3->GetYaxis()->SetLabelFont(42);
   qcd__3->GetYaxis()->SetLabelSize(0.035);
   qcd__3->GetYaxis()->SetTitleSize(0.035);
   qcd__3->GetYaxis()->SetTitleOffset(0);
   qcd__3->GetYaxis()->SetTitleFont(42);
   qcd__3->GetZaxis()->SetLabelFont(42);
   qcd__3->GetZaxis()->SetLabelSize(0.035);
   qcd__3->GetZaxis()->SetTitleSize(0.035);
   qcd__3->GetZaxis()->SetTitleFont(42);
   qcd__3->Draw("hist sames");
   
   TH1F *htotfail_cat1_2016_prefit__4 = new TH1F("htotfail_cat1_2016_prefit__4","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_prefit__4->SetBinContent(1,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(2,178685.6);
   htotfail_cat1_2016_prefit__4->SetBinContent(3,165525.7);
   htotfail_cat1_2016_prefit__4->SetBinContent(4,153493.7);
   htotfail_cat1_2016_prefit__4->SetBinContent(5,145967.3);
   htotfail_cat1_2016_prefit__4->SetBinContent(6,143498.5);
   htotfail_cat1_2016_prefit__4->SetBinContent(7,140427.9);
   htotfail_cat1_2016_prefit__4->SetBinContent(8,134479.4);
   htotfail_cat1_2016_prefit__4->SetBinContent(9,126900.5);
   htotfail_cat1_2016_prefit__4->SetBinContent(10,119910.2);
   htotfail_cat1_2016_prefit__4->SetBinContent(11,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(12,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(13,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(14,91448.91);
   htotfail_cat1_2016_prefit__4->SetBinContent(15,82223.52);
   htotfail_cat1_2016_prefit__4->SetBinContent(16,72861.07);
   htotfail_cat1_2016_prefit__4->SetBinContent(17,64293.54);
   htotfail_cat1_2016_prefit__4->SetBinContent(18,55079.04);
   htotfail_cat1_2016_prefit__4->SetBinContent(19,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(20,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(21,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(22,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinContent(23,0.0002152667);
   htotfail_cat1_2016_prefit__4->SetBinError(1,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(2,59.006);
   htotfail_cat1_2016_prefit__4->SetBinError(3,123.7818);
   htotfail_cat1_2016_prefit__4->SetBinError(4,248.0083);
   htotfail_cat1_2016_prefit__4->SetBinError(5,510.0279);
   htotfail_cat1_2016_prefit__4->SetBinError(6,1370.227);
   htotfail_cat1_2016_prefit__4->SetBinError(7,1824.609);
   htotfail_cat1_2016_prefit__4->SetBinError(8,1137.91);
   htotfail_cat1_2016_prefit__4->SetBinError(9,821.4249);
   htotfail_cat1_2016_prefit__4->SetBinError(10,365.0645);
   htotfail_cat1_2016_prefit__4->SetBinError(11,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(12,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(13,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(14,168.9822);
   htotfail_cat1_2016_prefit__4->SetBinError(15,155.2243);
   htotfail_cat1_2016_prefit__4->SetBinError(16,114.9277);
   htotfail_cat1_2016_prefit__4->SetBinError(17,90.29526);
   htotfail_cat1_2016_prefit__4->SetBinError(18,68.66663);
   htotfail_cat1_2016_prefit__4->SetBinError(19,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(20,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(21,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(22,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetBinError(23,3.310874e-05);
   htotfail_cat1_2016_prefit__4->SetMinimum(0);
   htotfail_cat1_2016_prefit__4->SetMaximum(268028.5);
   htotfail_cat1_2016_prefit__4->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_prefit__4->SetFillColor(ci);
   htotfail_cat1_2016_prefit__4->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_prefit__4->SetLineColor(ci);
   htotfail_cat1_2016_prefit__4->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_prefit__4->SetMarkerColor(ci);
   htotfail_cat1_2016_prefit__4->SetMarkerSize(0);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_prefit__4->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit__4->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_prefit__4->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit__4->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_prefit__4->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_prefit__4->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_prefit__4->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit__4->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit__4->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_prefit__4->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_prefit__4->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit__4->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis1[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_1 = new TH1F("hstackMC_stack_1","hstackMC",23, xAxis1);
   hstackMC_stack_1->SetMinimum(-37.64692);
   hstackMC_stack_1->SetMaximum(10602.75);
   hstackMC_stack_1->SetDirectory(0);
   hstackMC_stack_1->SetStats(0);
   hstackMC_stack_1->SetLineStyle(0);
   hstackMC_stack_1->SetMarkerStyle(20);
   hstackMC_stack_1->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_1->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_1->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_1->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_1->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_1->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_1->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_1->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_1->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_1->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_1->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_1->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_1->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_1->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_1->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_1->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_1);
   
   Double_t xAxis2[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat1_2016_fail_cat1",23, xAxis2);
   tqq_stack_1->SetBinContent(2,149.8368);
   tqq_stack_1->SetBinContent(3,189.0171);
   tqq_stack_1->SetBinContent(4,237.724);
   tqq_stack_1->SetBinContent(5,422.4622);
   tqq_stack_1->SetBinContent(6,804.3325);
   tqq_stack_1->SetBinContent(7,996.932);
   tqq_stack_1->SetBinContent(8,767.7477);
   tqq_stack_1->SetBinContent(9,526.5689);
   tqq_stack_1->SetBinContent(10,459.2148);
   tqq_stack_1->SetBinContent(14,467.9564);
   tqq_stack_1->SetBinContent(15,429.4991);
   tqq_stack_1->SetBinContent(16,318.275);
   tqq_stack_1->SetBinContent(17,250.1656);
   tqq_stack_1->SetBinContent(18,190.0275);
   tqq_stack_1->SetBinError(2,54.0262);
   tqq_stack_1->SetBinError(3,68.15334);
   tqq_stack_1->SetBinError(4,85.71544);
   tqq_stack_1->SetBinError(5,152.3259);
   tqq_stack_1->SetBinError(6,290.0158);
   tqq_stack_1->SetBinError(7,359.4608);
   tqq_stack_1->SetBinError(8,276.8245);
   tqq_stack_1->SetBinError(9,189.8634);
   tqq_stack_1->SetBinError(10,165.5777);
   tqq_stack_1->SetBinError(14,168.7297);
   tqq_stack_1->SetBinError(15,154.8632);
   tqq_stack_1->SetBinError(16,114.7595);
   tqq_stack_1->SetBinError(17,90.20147);
   tqq_stack_1->SetBinError(18,68.51765);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat1_2016_fail_cat1",23,40,201);
   wqq_stack_2->SetBinContent(1,0.0001500386);
   wqq_stack_2->SetBinContent(2,29.08316);
   wqq_stack_2->SetBinContent(3,146.0079);
   wqq_stack_2->SetBinContent(4,743.7712);
   wqq_stack_2->SetBinContent(5,1804.201);
   wqq_stack_2->SetBinContent(6,5768.445);
   wqq_stack_2->SetBinContent(7,7580.344);
   wqq_stack_2->SetBinContent(8,3697.55);
   wqq_stack_2->SetBinContent(9,1227.029);
   wqq_stack_2->SetBinContent(10,422.586);
   wqq_stack_2->SetBinContent(11,0.0001500386);
   wqq_stack_2->SetBinContent(12,0.0001500386);
   wqq_stack_2->SetBinContent(13,0.0001500386);
   wqq_stack_2->SetBinContent(14,0.0001500386);
   wqq_stack_2->SetBinContent(15,15.06528);
   wqq_stack_2->SetBinContent(16,0.0001500386);
   wqq_stack_2->SetBinContent(17,0.0001500386);
   wqq_stack_2->SetBinContent(18,0.0001500386);
   wqq_stack_2->SetBinContent(19,0.0001500386);
   wqq_stack_2->SetBinContent(20,0.0001500386);
   wqq_stack_2->SetBinContent(21,0.0001500386);
   wqq_stack_2->SetBinContent(22,0.0001500386);
   wqq_stack_2->SetBinContent(23,0.0001500386);
   wqq_stack_2->SetBinError(1,3.042072e-05);
   wqq_stack_2->SetBinError(2,20.03766);
   wqq_stack_2->SetBinError(3,102.2246);
   wqq_stack_2->SetBinError(4,230.5213);
   wqq_stack_2->SetBinError(5,481.426);
   wqq_stack_2->SetBinError(6,1326.196);
   wqq_stack_2->SetBinError(7,1758.427);
   wqq_stack_2->SetBinError(8,858.7703);
   wqq_stack_2->SetBinError(9,463.3153);
   wqq_stack_2->SetBinError(10,156.31);
   wqq_stack_2->SetBinError(11,3.042072e-05);
   wqq_stack_2->SetBinError(12,3.042072e-05);
   wqq_stack_2->SetBinError(13,3.042072e-05);
   wqq_stack_2->SetBinError(14,3.204112);
   wqq_stack_2->SetBinError(15,5.26113);
   wqq_stack_2->SetBinError(16,1.326063);
   wqq_stack_2->SetBinError(17,3.042072e-05);
   wqq_stack_2->SetBinError(18,1.87355);
   wqq_stack_2->SetBinError(19,3.042072e-05);
   wqq_stack_2->SetBinError(20,3.042072e-05);
   wqq_stack_2->SetBinError(21,3.042072e-05);
   wqq_stack_2->SetBinError(22,3.042072e-05);
   wqq_stack_2->SetBinError(23,3.042072e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat1_2016_fail_cat1",23,40,201);
   zqq_stack_3->SetBinContent(1,6.522812e-05);
   zqq_stack_3->SetBinContent(2,6.522812e-05);
   zqq_stack_3->SetBinContent(3,11.97876);
   zqq_stack_3->SetBinContent(4,97.15627);
   zqq_stack_3->SetBinContent(5,244.416);
   zqq_stack_3->SetBinContent(6,564.0306);
   zqq_stack_3->SetBinContent(7,1518.128);
   zqq_stack_3->SetBinContent(8,3062.364);
   zqq_stack_3->SetBinContent(9,2693.626);
   zqq_stack_3->SetBinContent(10,1061.744);
   zqq_stack_3->SetBinContent(11,6.522812e-05);
   zqq_stack_3->SetBinContent(12,6.522812e-05);
   zqq_stack_3->SetBinContent(13,6.522812e-05);
   zqq_stack_3->SetBinContent(14,32.42987);
   zqq_stack_3->SetBinContent(15,32.42987);
   zqq_stack_3->SetBinContent(16,6.522812e-05);
   zqq_stack_3->SetBinContent(17,6.522812e-05);
   zqq_stack_3->SetBinContent(18,6.522812e-05);
   zqq_stack_3->SetBinContent(19,6.522812e-05);
   zqq_stack_3->SetBinContent(20,6.522812e-05);
   zqq_stack_3->SetBinContent(21,6.522812e-05);
   zqq_stack_3->SetBinContent(22,6.522812e-05);
   zqq_stack_3->SetBinContent(23,6.522812e-05);
   zqq_stack_3->SetBinError(1,1.306784e-05);
   zqq_stack_3->SetBinError(2,12.70314);
   zqq_stack_3->SetBinError(3,15.07242);
   zqq_stack_3->SetBinError(4,31.95136);
   zqq_stack_3->SetBinError(5,71.79323);
   zqq_stack_3->SetBinError(6,186.0528);
   zqq_stack_3->SetBinError(7,328.5088);
   zqq_stack_3->SetBinError(8,693.34);
   zqq_stack_3->SetBinError(9,651.1756);
   zqq_stack_3->SetBinError(10,285.3477);
   zqq_stack_3->SetBinError(11,1.306784e-05);
   zqq_stack_3->SetBinError(12,1.306784e-05);
   zqq_stack_3->SetBinError(13,1.306784e-05);
   zqq_stack_3->SetBinError(14,8.661664);
   zqq_stack_3->SetBinError(15,9.181461);
   zqq_stack_3->SetBinError(16,6.073742);
   zqq_stack_3->SetBinError(17,4.114299);
   zqq_stack_3->SetBinError(18,4.114299);
   zqq_stack_3->SetBinError(19,1.306784e-05);
   zqq_stack_3->SetBinError(20,1.306784e-05);
   zqq_stack_3->SetBinError(21,1.306784e-05);
   zqq_stack_3->SetBinError(22,1.306784e-05);
   zqq_stack_3->SetBinError(23,1.306784e-05);
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
   
   TH1F *hsigfail_cat1_2016_prefit_stack_4 = new TH1F("hsigfail_cat1_2016_prefit_stack_4","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(1,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(2,1.147011);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(3,1.09956);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(4,0.8634274);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(5,2.098014);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(6,1.697349);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(7,2.452717);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(8,3.303286);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(9,3.970008);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(10,4.671911);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(11,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(12,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(13,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(14,9.596856);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(15,2.398194);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(16,1.560871);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(17,0.8658461);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(18,0.2065695);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(19,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(20,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(21,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(22,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinContent(23,2.515213e-07);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(1,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(2,5.579395);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(3,5.445834);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(4,2.965222);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(5,7.565367);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(6,4.137602);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(7,2.369046);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(8,11.99098);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(9,14.95705);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(10,27.0894);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(11,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(12,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(13,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(14,47.24378);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(15,14.68526);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(16,6.969055);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(17,3.604132);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(18,0.7364524);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(19,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(20,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(21,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(22,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetBinError(23,1.065825e-06);
   hsigfail_cat1_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat1_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat1_2016_prefit_stack_4->SetLineColor(ci);
   hsigfail_cat1_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat1_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat1_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat1_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat1_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat1_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat1_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat1_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat1_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat1_2016_prefit_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3001[23] = {
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
   Double_t data_copy_fy3001[23] = {
   0,
   180728,
   167513,
   155145,
   147739,
   145294,
   142041,
   136126,
   128560,
   121756,
   0,
   0,
   0,
   93039,
   83433,
   74190,
   65325,
   55954,
   0,
   0,
   0,
   0,
   0};
   Double_t data_copy_felx3001[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3001[23] = {
   1.841055,
   426.1312,
   410.2932,
   394.8939,
   385.3775,
   382.1837,
   377.8924,
   369.9615,
   359.5614,
   349.9441,
   1.841055,
   1.841055,
   1.841055,
   306.0307,
   289.8552,
   273.3856,
   256.5944,
   237.5525,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   Double_t data_copy_fehx3001[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3001[23] = {
   0,
   425.13,
   409.292,
   393.8926,
   384.3762,
   381.1823,
   376.891,
   368.9601,
   358.56,
   348.9426,
   0,
   0,
   0,
   305.029,
   288.8534,
   272.3837,
   255.5924,
   236.5504,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3001,data_copy_fy3001,data_copy_felx3001,data_copy_fehx3001,data_copy_fely3001,data_copy_fehy3001);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat1_2016_fail_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3001 = new TH1F("Graph_data_copy3001","tqq in cat1_2016_fail_cat1",100,28.1,212.9);
   Graph_data_copy3001->SetMinimum(0);
   Graph_data_copy3001->SetMaximum(199268.6);
   Graph_data_copy3001->SetDirectory(0);
   Graph_data_copy3001->SetStats(0);
   Graph_data_copy3001->SetLineStyle(0);
   Graph_data_copy3001->SetMarkerStyle(20);
   Graph_data_copy3001->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3001->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3001->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3001->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3001->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3001->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3001->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3001->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3001->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3001->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3001->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3001);
   
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
   entry=leg->AddEntry("htotfail_cat1_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat1_2016_prefit_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat1_2016_prefit_copy__5 = new TH1F("htotfail_cat1_2016_prefit_copy__5","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(1,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(2,178685.6);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(3,165525.7);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(4,153493.7);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(5,145967.3);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(6,143498.5);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(7,140427.9);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(8,134479.4);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(9,126900.5);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(10,119910.2);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(11,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(12,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(13,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(14,91448.91);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(15,82223.52);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(16,72861.07);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(17,64293.54);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(18,55079.04);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(19,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(20,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(21,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(22,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinContent(23,0.0002152667);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(1,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(2,59.006);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(3,123.7818);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(4,248.0083);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(5,510.0279);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(6,1370.227);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(7,1824.609);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(8,1137.91);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(9,821.4249);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(10,365.0645);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(11,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(12,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(13,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(14,168.9822);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(15,155.2243);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(16,114.9277);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(17,90.29526);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(18,68.66663);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(19,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(20,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(21,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(22,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetBinError(23,3.310874e-05);
   htotfail_cat1_2016_prefit_copy__5->SetMaximum(268028.5);
   htotfail_cat1_2016_prefit_copy__5->SetEntries(92);
   htotfail_cat1_2016_prefit_copy__5->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_prefit_copy__5->SetFillColor(ci);
   htotfail_cat1_2016_prefit_copy__5->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat1_2016_prefit_copy__5->SetLineColor(ci);
   htotfail_cat1_2016_prefit_copy__5->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat1_2016_prefit_copy__5->SetMarkerColor(ci);
   htotfail_cat1_2016_prefit_copy__5->SetMarkerSize(0);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetRange(2,18);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetLabelOffset(100);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetTitleOffset(100);
   htotfail_cat1_2016_prefit_copy__5->GetXaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit_copy__5->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat1_2016_prefit_copy__5->GetYaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit_copy__5->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat1_2016_prefit_copy__5->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat1_2016_prefit_copy__5->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat1_2016_prefit_copy__5->GetYaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit_copy__5->GetZaxis()->SetLabelFont(42);
   htotfail_cat1_2016_prefit_copy__5->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat1_2016_prefit_copy__5->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat1_2016_prefit_copy__5->GetZaxis()->SetTitleFont(42);
   htotfail_cat1_2016_prefit_copy__5->Draw("sameaxis");
   p12fail_cat1_2016_prefit->Modified();
   cfail_cat1_2016_prefit->cd();
  
// ------------>Primitives in pad: p22fail_cat1_2016_prefit
   TPad *p22fail_cat1_2016_prefit = new TPad("p22fail_cat1_2016_prefit", "p22fail_cat1_2016_prefit",0,0,1,0.3);
   p22fail_cat1_2016_prefit->Draw();
   p22fail_cat1_2016_prefit->cd();
   p22fail_cat1_2016_prefit->Range(21.27027,-26.9315,182.0811,46.1735);
   p22fail_cat1_2016_prefit->SetFillColor(0);
   p22fail_cat1_2016_prefit->SetBorderMode(0);
   p22fail_cat1_2016_prefit->SetBorderSize(2);
   p22fail_cat1_2016_prefit->SetTickx(1);
   p22fail_cat1_2016_prefit->SetTicky(1);
   p22fail_cat1_2016_prefit->SetLeftMargin(0.16);
   p22fail_cat1_2016_prefit->SetTopMargin(0.05);
   p22fail_cat1_2016_prefit->SetBottomMargin(0.3);
   p22fail_cat1_2016_prefit->SetFrameFillStyle(0);
   p22fail_cat1_2016_prefit->SetFrameBorderMode(0);
   p22fail_cat1_2016_prefit->SetFrameFillStyle(0);
   p22fail_cat1_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat1_2016_prefit__6 = new TH1F("iOneWithErrorsfail_cat1_2016_prefit__6","",23,40,201);
   iOneWithErrorsfail_cat1_2016_prefit__6->SetMinimum(-5);
   iOneWithErrorsfail_cat1_2016_prefit__6->SetMaximum(42.51825);
   iOneWithErrorsfail_cat1_2016_prefit__6->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_prefit__6->SetFillColor(ci);
   iOneWithErrorsfail_cat1_2016_prefit__6->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_prefit__6->SetLineColor(ci);
   iOneWithErrorsfail_cat1_2016_prefit__6->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_prefit__6->SetMarkerColor(ci);
   iOneWithErrorsfail_cat1_2016_prefit__6->SetMarkerSize(0);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetRange(2,18);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat1_2016_prefit__6->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_prefit__6->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_2 = new TH1F("hstack_stack_2","hstack",23,40,201);
   hstack_stack_2->SetMinimum(-1738.315);
   hstack_stack_2->SetMaximum(1867.467);
   hstack_stack_2->SetDirectory(0);
   hstack_stack_2->SetStats(0);
   hstack_stack_2->SetLineStyle(0);
   hstack_stack_2->SetMarkerStyle(20);
   hstack_stack_2->GetXaxis()->SetLabelFont(42);
   hstack_stack_2->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_2->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_2->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_2->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_2->GetXaxis()->SetTitleFont(42);
   hstack_stack_2->GetYaxis()->SetLabelFont(42);
   hstack_stack_2->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_2->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_2->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_2->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_2->GetYaxis()->SetTitleFont(42);
   hstack_stack_2->GetZaxis()->SetLabelFont(42);
   hstack_stack_2->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_2->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_2->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_2);
   
   
   TH1F *sigHistResidualwqqfail_cat1_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqfail_cat1_2016_prefit_stack_1","wqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(2,0.06841005);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(3,0.3567328);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(4,1.888259);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(5,4.693841);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(6,15.13303);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(7,20.11283);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(8,10.02154);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(9,3.422102);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(10,1.211047);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(14,4.918829e-07);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(15,0.05215547);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(16,5.508354e-07);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(17,5.870227e-07);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinContent(18,6.342774e-07);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(1,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(2,20.03766);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(3,102.2246);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(4,230.5213);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(5,481.426);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(6,1326.196);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(7,1758.427);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(8,858.7703);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(9,463.3153);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(10,156.31);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(11,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(12,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(13,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(14,3.204112);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(15,5.26113);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(16,1.326063);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(17,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(18,1.87355);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(19,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(20,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(21,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(22,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetBinError(23,3.042072e-05);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat1_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat1_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat1_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqfail_cat1_2016_prefit_stack_2","zqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(2,1.53431e-07);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(3,0.02926704);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(4,0.2466567);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(5,0.6358769);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(6,1.479687);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(7,4.02803);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(8,8.299986);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(9,7.512345);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(10,3.042747);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(14,0.1063173);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(15,0.112271);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(16,2.394715e-07);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(17,2.552036e-07);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinContent(18,2.757473e-07);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(1,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(2,12.70314);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(3,15.07242);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(4,31.95136);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(5,71.79323);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(6,186.0528);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(7,328.5088);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(8,693.34);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(9,651.1756);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(10,285.3477);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(11,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(12,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(13,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(14,8.661664);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(15,9.181461);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(16,6.073742);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(17,4.114299);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(18,4.114299);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(19,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(20,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(21,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(22,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetBinError(23,1.306784e-05);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat1_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat1_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3","ggH_hbb in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(2,0.002698025);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(3,0.002686492);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(4,0.002192038);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(5,0.00545823);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(6,0.004452853);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(7,0.006507761);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(8,0.008952961);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(9,0.01107209);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(10,0.01338877);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(14,0.03146211);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(15,0.008302462);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(16,0.005730414);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(17,0.003387604);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinContent(18,0.0008732579);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(1,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(2,5.579395);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(3,5.445834);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(4,2.965222);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(5,7.565367);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(6,4.137602);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(7,2.369046);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(8,11.99098);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(9,14.95705);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(10,27.0894);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(11,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(12,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(13,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(14,47.24378);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(15,14.68526);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(16,6.969055);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(17,3.604132);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(18,0.7364524);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(19,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(20,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(21,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(22,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetBinError(23,1.065825e-06);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat1_2016_prefitfail_cat1_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat1_2016_prefit__7 = new TH1F("iOneWithErrorsLinefail_cat1_2016_prefit__7","",23,40,201);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetFillColor(ci);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetLineColor(ci);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetRange(2,18);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat1_2016_prefit__7->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat1_2016_prefit_fx3002[23] = {
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
   Double_t Graph_from_iRatiofail_cat1_2016_prefit_fy3002[23] = {
   0,
   4.861032,
   5.228768,
   6.311228,
   9.913128,
   21.26726,
   28.3455,
   22.72274,
   15.51939,
   9.51632,
   0,
   0,
   0,
   5.301833,
   4.336541,
   4.861009,
   4.01981,
   3.683215,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_iRatiofail_cat1_2016_prefit_felx3002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat1_2016_prefit_fely3002[23] = {
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
   Double_t Graph_from_iRatiofail_cat1_2016_prefit_fehx3002[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat1_2016_prefit_fehy3002[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat1_2016_prefit_fx3002,Graph_from_iRatiofail_cat1_2016_prefit_fy3002,Graph_from_iRatiofail_cat1_2016_prefit_felx3002,Graph_from_iRatiofail_cat1_2016_prefit_fehx3002,Graph_from_iRatiofail_cat1_2016_prefit_fely3002,Graph_from_iRatiofail_cat1_2016_prefit_fehy3002);
   grae->SetName("Graph_from_iRatiofail_cat1_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat1_2016_prefit3002 = new TH1F("Graph_Graph_from_iRatiofail_cat1_2016_prefit3002","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->SetMinimum(0);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->SetMaximum(32.28005);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->SetStats(0);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat1_2016_prefit3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat1_2016_prefit3002);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat1_2016_prefit_copy__8 = new TH1F("iOneWithErrorsfail_cat1_2016_prefit_copy__8","",23,40,201);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetMinimum(-5);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetMaximum(42.51825);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetEntries(184);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetFillColor(ci);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetLineColor(ci);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetMarkerColor(ci);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->SetMarkerSize(0);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetRange(2,18);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat1_2016_prefit_copy__8->Draw("sameaxis");
   p22fail_cat1_2016_prefit->Modified();
   cfail_cat1_2016_prefit->cd();
   cfail_cat1_2016_prefit->Modified();
   cfail_cat1_2016_prefit->cd();
   cfail_cat1_2016_prefit->SetSelected(cfail_cat1_2016_prefit);
}
