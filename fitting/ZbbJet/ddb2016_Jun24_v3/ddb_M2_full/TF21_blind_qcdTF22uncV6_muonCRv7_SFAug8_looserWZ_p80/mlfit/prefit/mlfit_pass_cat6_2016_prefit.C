void mlfit_pass_cat6_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat6_2016_prefit/cpass_cat6_2016_prefit
//=========  (Thu Sep 26 13:57:14 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat6_2016_prefit = new TCanvas("cpass_cat6_2016_prefit", "cpass_cat6_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat6_2016_prefit->SetHighLightColor(2);
   cpass_cat6_2016_prefit->Range(0,0,1,1);
   cpass_cat6_2016_prefit->SetFillColor(0);
   cpass_cat6_2016_prefit->SetBorderMode(0);
   cpass_cat6_2016_prefit->SetBorderSize(2);
   cpass_cat6_2016_prefit->SetTickx(1);
   cpass_cat6_2016_prefit->SetTicky(1);
   cpass_cat6_2016_prefit->SetLeftMargin(0.16);
   cpass_cat6_2016_prefit->SetBottomMargin(0.13);
   cpass_cat6_2016_prefit->SetFrameFillStyle(0);
   cpass_cat6_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat6_2016_prefit
   TPad *p12pass_cat6_2016_prefit = new TPad("p12pass_cat6_2016_prefit", "p12pass_cat6_2016_prefit",0,0.3,1,1);
   p12pass_cat6_2016_prefit->Draw();
   p12pass_cat6_2016_prefit->cd();
   p12pass_cat6_2016_prefit->Range(13.7027,-5.966989,221.8108,292.3825);
   p12pass_cat6_2016_prefit->SetFillColor(0);
   p12pass_cat6_2016_prefit->SetBorderMode(0);
   p12pass_cat6_2016_prefit->SetBorderSize(2);
   p12pass_cat6_2016_prefit->SetTickx(1);
   p12pass_cat6_2016_prefit->SetTicky(1);
   p12pass_cat6_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat6_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat6_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat6_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat6_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat6_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat6_2016_prefit__129 = new TH1F("htotpass_cat6_2016_prefit__129","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_prefit__129->SetBinContent(1,1.578107e-06);
   htotpass_cat6_2016_prefit__129->SetBinContent(2,144.9548);
   htotpass_cat6_2016_prefit__129->SetBinContent(3,147.8366);
   htotpass_cat6_2016_prefit__129->SetBinContent(4,142.2724);
   htotpass_cat6_2016_prefit__129->SetBinContent(5,148.4896);
   htotpass_cat6_2016_prefit__129->SetBinContent(6,146.3954);
   htotpass_cat6_2016_prefit__129->SetBinContent(7,175.0317);
   htotpass_cat6_2016_prefit__129->SetBinContent(8,161.4693);
   htotpass_cat6_2016_prefit__129->SetBinContent(9,149.6573);
   htotpass_cat6_2016_prefit__129->SetBinContent(10,104.1787);
   htotpass_cat6_2016_prefit__129->SetBinContent(11,1.578107e-06);
   htotpass_cat6_2016_prefit__129->SetBinContent(12,1.578107e-06);
   htotpass_cat6_2016_prefit__129->SetBinContent(13,1.578107e-06);
   htotpass_cat6_2016_prefit__129->SetBinContent(14,77.01868);
   htotpass_cat6_2016_prefit__129->SetBinContent(15,68.40932);
   htotpass_cat6_2016_prefit__129->SetBinContent(16,66.72517);
   htotpass_cat6_2016_prefit__129->SetBinContent(17,62.09362);
   htotpass_cat6_2016_prefit__129->SetBinContent(18,58.58625);
   htotpass_cat6_2016_prefit__129->SetBinContent(19,57.46617);
   htotpass_cat6_2016_prefit__129->SetBinContent(20,52.24821);
   htotpass_cat6_2016_prefit__129->SetBinContent(21,49.3428);
   htotpass_cat6_2016_prefit__129->SetBinContent(22,46.83395);
   htotpass_cat6_2016_prefit__129->SetBinContent(23,44.39804);
   htotpass_cat6_2016_prefit__129->SetBinError(1,3.626082e-07);
   htotpass_cat6_2016_prefit__129->SetBinError(2,11.40043);
   htotpass_cat6_2016_prefit__129->SetBinError(3,6.840914);
   htotpass_cat6_2016_prefit__129->SetBinError(4,7.338515);
   htotpass_cat6_2016_prefit__129->SetBinError(5,7.312179);
   htotpass_cat6_2016_prefit__129->SetBinError(6,17.02445);
   htotpass_cat6_2016_prefit__129->SetBinError(7,18.52476);
   htotpass_cat6_2016_prefit__129->SetBinError(8,17.27184);
   htotpass_cat6_2016_prefit__129->SetBinError(9,21.42599);
   htotpass_cat6_2016_prefit__129->SetBinError(10,16.26599);
   htotpass_cat6_2016_prefit__129->SetBinError(11,3.626082e-07);
   htotpass_cat6_2016_prefit__129->SetBinError(12,3.626082e-07);
   htotpass_cat6_2016_prefit__129->SetBinError(13,3.626082e-07);
   htotpass_cat6_2016_prefit__129->SetBinError(14,3.905972);
   htotpass_cat6_2016_prefit__129->SetBinError(15,3.559856);
   htotpass_cat6_2016_prefit__129->SetBinError(16,3.451901);
   htotpass_cat6_2016_prefit__129->SetBinError(17,2.24756);
   htotpass_cat6_2016_prefit__129->SetBinError(18,2.143464);
   htotpass_cat6_2016_prefit__129->SetBinError(19,2.37024);
   htotpass_cat6_2016_prefit__129->SetBinError(20,2.397562);
   htotpass_cat6_2016_prefit__129->SetBinError(21,2.479436);
   htotpass_cat6_2016_prefit__129->SetBinError(22,2.783874);
   htotpass_cat6_2016_prefit__129->SetBinError(23,3.115082);
   htotpass_cat6_2016_prefit__129->SetMinimum(0);
   htotpass_cat6_2016_prefit__129->SetMaximum(262.5475);
   htotpass_cat6_2016_prefit__129->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__129->SetFillColor(ci);
   htotpass_cat6_2016_prefit__129->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__129->SetLineColor(ci);
   htotpass_cat6_2016_prefit__129->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_prefit__129->SetMarkerColor(ci);
   htotpass_cat6_2016_prefit__129->SetMarkerSize(0);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_prefit__129->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__129->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_prefit__129->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__129->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_prefit__129->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_prefit__129->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_prefit__129->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__129->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__129->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__129->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__129->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__129->Draw("");
   
   TH1F *htot_linepass_cat6_2016_prefit__130 = new TH1F("htot_linepass_cat6_2016_prefit__130","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(1,1.578107e-06);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(2,144.9548);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(3,147.8366);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(4,142.2724);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(5,148.4896);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(6,146.3954);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(7,175.0317);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(8,161.4693);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(9,149.6573);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(10,104.1787);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(11,1.578107e-06);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(12,1.578107e-06);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(13,1.578107e-06);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(14,77.01868);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(15,68.40932);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(16,66.72517);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(17,62.09362);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(18,58.58625);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(19,57.46617);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(20,52.24821);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(21,49.3428);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(22,46.83395);
   htot_linepass_cat6_2016_prefit__130->SetBinContent(23,44.39804);
   htot_linepass_cat6_2016_prefit__130->SetBinError(1,3.626082e-07);
   htot_linepass_cat6_2016_prefit__130->SetBinError(2,11.40043);
   htot_linepass_cat6_2016_prefit__130->SetBinError(3,6.840914);
   htot_linepass_cat6_2016_prefit__130->SetBinError(4,7.338515);
   htot_linepass_cat6_2016_prefit__130->SetBinError(5,7.312179);
   htot_linepass_cat6_2016_prefit__130->SetBinError(6,17.02445);
   htot_linepass_cat6_2016_prefit__130->SetBinError(7,18.52476);
   htot_linepass_cat6_2016_prefit__130->SetBinError(8,17.27184);
   htot_linepass_cat6_2016_prefit__130->SetBinError(9,21.42599);
   htot_linepass_cat6_2016_prefit__130->SetBinError(10,16.26599);
   htot_linepass_cat6_2016_prefit__130->SetBinError(11,3.626082e-07);
   htot_linepass_cat6_2016_prefit__130->SetBinError(12,3.626082e-07);
   htot_linepass_cat6_2016_prefit__130->SetBinError(13,3.626082e-07);
   htot_linepass_cat6_2016_prefit__130->SetBinError(14,3.905972);
   htot_linepass_cat6_2016_prefit__130->SetBinError(15,3.559856);
   htot_linepass_cat6_2016_prefit__130->SetBinError(16,3.451901);
   htot_linepass_cat6_2016_prefit__130->SetBinError(17,2.24756);
   htot_linepass_cat6_2016_prefit__130->SetBinError(18,2.143464);
   htot_linepass_cat6_2016_prefit__130->SetBinError(19,2.37024);
   htot_linepass_cat6_2016_prefit__130->SetBinError(20,2.397562);
   htot_linepass_cat6_2016_prefit__130->SetBinError(21,2.479436);
   htot_linepass_cat6_2016_prefit__130->SetBinError(22,2.783874);
   htot_linepass_cat6_2016_prefit__130->SetBinError(23,3.115082);
   htot_linepass_cat6_2016_prefit__130->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_prefit__130->SetFillColor(ci);
   htot_linepass_cat6_2016_prefit__130->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_prefit__130->SetLineColor(ci);
   htot_linepass_cat6_2016_prefit__130->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_prefit__130->SetMarkerColor(ci);
   htot_linepass_cat6_2016_prefit__130->SetMarkerSize(0);
   htot_linepass_cat6_2016_prefit__130->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_prefit__130->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_prefit__130->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_prefit__130->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_prefit__130->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_prefit__130->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_prefit__130->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_prefit__130->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_prefit__130->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_prefit__130->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_prefit__130->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_prefit__130->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_prefit__130->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_prefit__130->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_prefit__130->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_prefit__130->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_prefit__130->Draw("histsame");
   
   TH1F *qcd__131 = new TH1F("qcd__131","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__131->SetBinContent(2,144.9548);
   qcd__131->SetBinContent(3,147.4052);
   qcd__131->SetBinContent(4,139.3094);
   qcd__131->SetBinContent(5,129.4309);
   qcd__131->SetBinContent(6,123.1891);
   qcd__131->SetBinContent(7,109.0473);
   qcd__131->SetBinContent(8,100.9236);
   qcd__131->SetBinContent(9,95.16385);
   qcd__131->SetBinContent(10,88.60564);
   qcd__131->SetBinContent(14,68.98287);
   qcd__131->SetBinContent(15,65.12712);
   qcd__131->SetBinContent(16,61.75379);
   qcd__131->SetBinContent(17,60.35635);
   qcd__131->SetBinContent(18,57.31223);
   qcd__131->SetBinContent(19,55.61921);
   qcd__131->SetBinContent(20,50.49894);
   qcd__131->SetBinContent(21,48.87593);
   qcd__131->SetBinContent(22,46.83395);
   qcd__131->SetBinContent(23,43.98076);
   qcd__131->SetBinError(2,11.40043);
   qcd__131->SetBinError(3,6.73931);
   qcd__131->SetBinError(4,4.934892);
   qcd__131->SetBinError(5,4.445794);
   qcd__131->SetBinError(6,4.408214);
   qcd__131->SetBinError(7,4.06899);
   qcd__131->SetBinError(8,3.86702);
   qcd__131->SetBinError(9,3.683625);
   qcd__131->SetBinError(10,3.416002);
   qcd__131->SetBinError(14,2.397544);
   qcd__131->SetBinError(15,2.201982);
   qcd__131->SetBinError(16,2.059866);
   qcd__131->SetBinError(17,2.036944);
   qcd__131->SetBinError(18,2.0271);
   qcd__131->SetBinError(19,2.144316);
   qcd__131->SetBinError(20,2.1985);
   qcd__131->SetBinError(21,2.466259);
   qcd__131->SetBinError(22,2.783874);
   qcd__131->SetBinError(23,3.106714);
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
   
   TH1F *htotpass_cat6_2016_prefit__132 = new TH1F("htotpass_cat6_2016_prefit__132","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_prefit__132->SetBinContent(1,1.578107e-06);
   htotpass_cat6_2016_prefit__132->SetBinContent(2,144.9548);
   htotpass_cat6_2016_prefit__132->SetBinContent(3,147.8366);
   htotpass_cat6_2016_prefit__132->SetBinContent(4,142.2724);
   htotpass_cat6_2016_prefit__132->SetBinContent(5,148.4896);
   htotpass_cat6_2016_prefit__132->SetBinContent(6,146.3954);
   htotpass_cat6_2016_prefit__132->SetBinContent(7,175.0317);
   htotpass_cat6_2016_prefit__132->SetBinContent(8,161.4693);
   htotpass_cat6_2016_prefit__132->SetBinContent(9,149.6573);
   htotpass_cat6_2016_prefit__132->SetBinContent(10,104.1787);
   htotpass_cat6_2016_prefit__132->SetBinContent(11,1.578107e-06);
   htotpass_cat6_2016_prefit__132->SetBinContent(12,1.578107e-06);
   htotpass_cat6_2016_prefit__132->SetBinContent(13,1.578107e-06);
   htotpass_cat6_2016_prefit__132->SetBinContent(14,77.01868);
   htotpass_cat6_2016_prefit__132->SetBinContent(15,68.40932);
   htotpass_cat6_2016_prefit__132->SetBinContent(16,66.72517);
   htotpass_cat6_2016_prefit__132->SetBinContent(17,62.09362);
   htotpass_cat6_2016_prefit__132->SetBinContent(18,58.58625);
   htotpass_cat6_2016_prefit__132->SetBinContent(19,57.46617);
   htotpass_cat6_2016_prefit__132->SetBinContent(20,52.24821);
   htotpass_cat6_2016_prefit__132->SetBinContent(21,49.3428);
   htotpass_cat6_2016_prefit__132->SetBinContent(22,46.83395);
   htotpass_cat6_2016_prefit__132->SetBinContent(23,44.39804);
   htotpass_cat6_2016_prefit__132->SetBinError(1,3.626082e-07);
   htotpass_cat6_2016_prefit__132->SetBinError(2,11.40043);
   htotpass_cat6_2016_prefit__132->SetBinError(3,6.840914);
   htotpass_cat6_2016_prefit__132->SetBinError(4,7.338515);
   htotpass_cat6_2016_prefit__132->SetBinError(5,7.312179);
   htotpass_cat6_2016_prefit__132->SetBinError(6,17.02445);
   htotpass_cat6_2016_prefit__132->SetBinError(7,18.52476);
   htotpass_cat6_2016_prefit__132->SetBinError(8,17.27184);
   htotpass_cat6_2016_prefit__132->SetBinError(9,21.42599);
   htotpass_cat6_2016_prefit__132->SetBinError(10,16.26599);
   htotpass_cat6_2016_prefit__132->SetBinError(11,3.626082e-07);
   htotpass_cat6_2016_prefit__132->SetBinError(12,3.626082e-07);
   htotpass_cat6_2016_prefit__132->SetBinError(13,3.626082e-07);
   htotpass_cat6_2016_prefit__132->SetBinError(14,3.905972);
   htotpass_cat6_2016_prefit__132->SetBinError(15,3.559856);
   htotpass_cat6_2016_prefit__132->SetBinError(16,3.451901);
   htotpass_cat6_2016_prefit__132->SetBinError(17,2.24756);
   htotpass_cat6_2016_prefit__132->SetBinError(18,2.143464);
   htotpass_cat6_2016_prefit__132->SetBinError(19,2.37024);
   htotpass_cat6_2016_prefit__132->SetBinError(20,2.397562);
   htotpass_cat6_2016_prefit__132->SetBinError(21,2.479436);
   htotpass_cat6_2016_prefit__132->SetBinError(22,2.783874);
   htotpass_cat6_2016_prefit__132->SetBinError(23,3.115082);
   htotpass_cat6_2016_prefit__132->SetMinimum(0);
   htotpass_cat6_2016_prefit__132->SetMaximum(262.5475);
   htotpass_cat6_2016_prefit__132->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__132->SetFillColor(ci);
   htotpass_cat6_2016_prefit__132->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__132->SetLineColor(ci);
   htotpass_cat6_2016_prefit__132->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_prefit__132->SetMarkerColor(ci);
   htotpass_cat6_2016_prefit__132->SetMarkerSize(0);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_prefit__132->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__132->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_prefit__132->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__132->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_prefit__132->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_prefit__132->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_prefit__132->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__132->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__132->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__132->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__132->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__132->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis33[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_33 = new TH1F("hstackMC_stack_33","hstackMC",23, xAxis33);
   hstackMC_stack_33->SetMinimum(-55.96908);
   hstackMC_stack_33->SetMaximum(73.22765);
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
   tqq_stack_1->SetBinContent(3,0.4314081);
   tqq_stack_1->SetBinContent(4,0.8347316);
   tqq_stack_1->SetBinContent(5,1.774999);
   tqq_stack_1->SetBinContent(6,3.765924);
   tqq_stack_1->SetBinContent(7,6.640417);
   tqq_stack_1->SetBinContent(8,3.993839);
   tqq_stack_1->SetBinContent(9,2.490199);
   tqq_stack_1->SetBinContent(10,1.259723);
   tqq_stack_1->SetBinContent(14,3.656729);
   tqq_stack_1->SetBinContent(15,3.282192);
   tqq_stack_1->SetBinContent(16,4.971375);
   tqq_stack_1->SetBinContent(17,1.737261);
   tqq_stack_1->SetBinContent(18,1.274017);
   tqq_stack_1->SetBinContent(19,1.846964);
   tqq_stack_1->SetBinContent(20,1.749269);
   tqq_stack_1->SetBinContent(21,0.4668631);
   tqq_stack_1->SetBinContent(23,0.4172813);
   tqq_stack_1->SetBinError(3,0.235895);
   tqq_stack_1->SetBinError(4,0.4564331);
   tqq_stack_1->SetBinError(5,0.9705737);
   tqq_stack_1->SetBinError(6,2.059216);
   tqq_stack_1->SetBinError(7,3.630994);
   tqq_stack_1->SetBinError(8,2.183841);
   tqq_stack_1->SetBinError(9,1.361647);
   tqq_stack_1->SetBinError(10,0.6888194);
   tqq_stack_1->SetBinError(14,1.999508);
   tqq_stack_1->SetBinError(15,1.79471);
   tqq_stack_1->SetBinError(16,2.71836);
   tqq_stack_1->SetBinError(17,0.9499385);
   tqq_stack_1->SetBinError(18,0.6966354);
   tqq_stack_1->SetBinError(19,1.009924);
   tqq_stack_1->SetBinError(20,0.9565045);
   tqq_stack_1->SetBinError(21,0.2552818);
   tqq_stack_1->SetBinError(23,0.2281704);
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
   wqq_stack_2->SetBinContent(1,5.329442e-07);
   wqq_stack_2->SetBinContent(2,5.329442e-07);
   wqq_stack_2->SetBinContent(3,5.329442e-07);
   wqq_stack_2->SetBinContent(4,2.128233);
   wqq_stack_2->SetBinContent(5,12.68624);
   wqq_stack_2->SetBinContent(6,14.76443);
   wqq_stack_2->SetBinContent(7,27.85659);
   wqq_stack_2->SetBinContent(8,16.13734);
   wqq_stack_2->SetBinContent(9,2.562053);
   wqq_stack_2->SetBinContent(10,5.329442e-07);
   wqq_stack_2->SetBinContent(11,5.329442e-07);
   wqq_stack_2->SetBinContent(12,5.329442e-07);
   wqq_stack_2->SetBinContent(13,5.329442e-07);
   wqq_stack_2->SetBinContent(14,5.329442e-07);
   wqq_stack_2->SetBinContent(15,5.329442e-07);
   wqq_stack_2->SetBinContent(16,5.329442e-07);
   wqq_stack_2->SetBinContent(17,5.329442e-07);
   wqq_stack_2->SetBinContent(18,5.329442e-07);
   wqq_stack_2->SetBinContent(19,5.329442e-07);
   wqq_stack_2->SetBinContent(20,5.329442e-07);
   wqq_stack_2->SetBinContent(21,5.329442e-07);
   wqq_stack_2->SetBinContent(22,5.329442e-07);
   wqq_stack_2->SetBinContent(23,5.329442e-07);
   wqq_stack_2->SetBinError(1,1.54154e-07);
   wqq_stack_2->SetBinError(2,1.54154e-07);
   wqq_stack_2->SetBinError(3,1.006043);
   wqq_stack_2->SetBinError(4,4.84376);
   wqq_stack_2->SetBinError(5,5.238333);
   wqq_stack_2->SetBinError(6,8.200556);
   wqq_stack_2->SetBinError(7,9.882326);
   wqq_stack_2->SetBinError(8,8.015588);
   wqq_stack_2->SetBinError(9,5.619933);
   wqq_stack_2->SetBinError(10,1.086548);
   wqq_stack_2->SetBinError(11,1.54154e-07);
   wqq_stack_2->SetBinError(12,1.54154e-07);
   wqq_stack_2->SetBinError(13,1.54154e-07);
   wqq_stack_2->SetBinError(14,1.54154e-07);
   wqq_stack_2->SetBinError(15,1.54154e-07);
   wqq_stack_2->SetBinError(16,1.54154e-07);
   wqq_stack_2->SetBinError(17,1.54154e-07);
   wqq_stack_2->SetBinError(18,1.54154e-07);
   wqq_stack_2->SetBinError(19,1.54154e-07);
   wqq_stack_2->SetBinError(20,1.54154e-07);
   wqq_stack_2->SetBinError(21,1.54154e-07);
   wqq_stack_2->SetBinError(22,1.54154e-07);
   wqq_stack_2->SetBinError(23,1.54154e-07);
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
   zqq_stack_3->SetBinContent(1,1.045163e-06);
   zqq_stack_3->SetBinContent(2,1.045163e-06);
   zqq_stack_3->SetBinContent(3,1.045163e-06);
   zqq_stack_3->SetBinContent(4,1.045163e-06);
   zqq_stack_3->SetBinContent(5,4.59748);
   zqq_stack_3->SetBinContent(6,4.675995);
   zqq_stack_3->SetBinContent(7,31.48735);
   zqq_stack_3->SetBinContent(8,40.41454);
   zqq_stack_3->SetBinContent(9,49.4412);
   zqq_stack_3->SetBinContent(10,14.31338);
   zqq_stack_3->SetBinContent(11,1.045163e-06);
   zqq_stack_3->SetBinContent(12,1.045163e-06);
   zqq_stack_3->SetBinContent(13,1.045163e-06);
   zqq_stack_3->SetBinContent(14,4.379075);
   zqq_stack_3->SetBinContent(15,1.045163e-06);
   zqq_stack_3->SetBinContent(16,1.045163e-06);
   zqq_stack_3->SetBinContent(17,1.045163e-06);
   zqq_stack_3->SetBinContent(18,1.045163e-06);
   zqq_stack_3->SetBinContent(19,1.045163e-06);
   zqq_stack_3->SetBinContent(20,1.045163e-06);
   zqq_stack_3->SetBinContent(21,1.045163e-06);
   zqq_stack_3->SetBinContent(22,1.045163e-06);
   zqq_stack_3->SetBinContent(23,1.045163e-06);
   zqq_stack_3->SetBinError(1,3.282092e-07);
   zqq_stack_3->SetBinError(2,3.282092e-07);
   zqq_stack_3->SetBinError(3,0.5586006);
   zqq_stack_3->SetBinError(4,2.414603);
   zqq_stack_3->SetBinError(5,2.306672);
   zqq_stack_3->SetBinError(6,14.10355);
   zqq_stack_3->SetBinError(7,14.68896);
   zqq_stack_3->SetBinError(8,14.64048);
   zqq_stack_3->SetBinError(9,20.29941);
   zqq_stack_3->SetBinError(10,15.85113);
   zqq_stack_3->SetBinError(11,3.282092e-07);
   zqq_stack_3->SetBinError(12,3.282092e-07);
   zqq_stack_3->SetBinError(13,3.282092e-07);
   zqq_stack_3->SetBinError(14,2.347417);
   zqq_stack_3->SetBinError(15,2.145429);
   zqq_stack_3->SetBinError(16,0.532064);
   zqq_stack_3->SetBinError(17,3.282092e-07);
   zqq_stack_3->SetBinError(18,3.282092e-07);
   zqq_stack_3->SetBinError(19,3.282092e-07);
   zqq_stack_3->SetBinError(20,3.282092e-07);
   zqq_stack_3->SetBinError(21,3.282092e-07);
   zqq_stack_3->SetBinError(22,3.282092e-07);
   zqq_stack_3->SetBinError(23,3.282092e-07);
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
   
   TH1F *hsigpass_cat6_2016_prefit_stack_4 = new TH1F("hsigpass_cat6_2016_prefit_stack_4","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(1,1.838913e-08);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(2,1.838913e-08);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(3,1.838913e-08);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(4,0.001655257);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(5,0.008647145);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(6,0.002961311);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(7,0.05145387);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(8,0.04171314);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(9,0.2017905);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(10,0.2039073);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(11,1.838913e-08);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(12,1.838913e-08);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(13,1.838913e-08);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(14,1.826182);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(15,0.02771077);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(16,0.2252655);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(17,0.003306668);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(18,0.006070317);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(19,0.003212353);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(20,0.00860633);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(21,0.005818612);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(22,0.005734853);
   hsigpass_cat6_2016_prefit_stack_4->SetBinContent(23,0.002982788);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(1,9.606785e-07);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(2,9.606785e-07);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(3,9.606785e-07);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(4,0.008104162);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(5,0.05889631);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(6,0.3740486);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(7,0.3477811);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(8,6.934845);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(9,5.790772);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(10,56.17299);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(11,9.606785e-07);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(12,9.606785e-07);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(13,9.606785e-07);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(14,49.40064);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(15,48.06965);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(16,1.410378);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(17,5.038099);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(18,0.02338375);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(19,0.007047358);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(20,0.0474342);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(21,0.02923866);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(22,0.02882889);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(23,0.01460384);
   hsigpass_cat6_2016_prefit_stack_4->SetEntries(92);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat6_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat6_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat6_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat6_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat6_2016_prefit_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat6_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat6_2016_prefit_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat6_2016_prefit_copy__133 = new TH1F("htotpass_cat6_2016_prefit_copy__133","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(1,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(2,144.9548);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(3,147.8366);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(4,142.2724);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(5,148.4896);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(6,146.3954);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(7,175.0317);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(8,161.4693);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(9,149.6573);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(10,104.1787);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(11,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(12,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(13,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(14,77.01868);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(15,68.40932);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(16,66.72517);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(17,62.09362);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(18,58.58625);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(19,57.46617);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(20,52.24821);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(21,49.3428);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(22,46.83395);
   htotpass_cat6_2016_prefit_copy__133->SetBinContent(23,44.39804);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(1,3.626082e-07);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(2,11.40043);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(3,6.840914);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(4,7.338515);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(5,7.312179);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(6,17.02445);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(7,18.52476);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(8,17.27184);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(9,21.42599);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(10,16.26599);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(11,3.626082e-07);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(12,3.626082e-07);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(13,3.626082e-07);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(14,3.905972);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(15,3.559856);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(16,3.451901);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(17,2.24756);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(18,2.143464);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(19,2.37024);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(20,2.397562);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(21,2.479436);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(22,2.783874);
   htotpass_cat6_2016_prefit_copy__133->SetBinError(23,3.115082);
   htotpass_cat6_2016_prefit_copy__133->SetMaximum(262.5475);
   htotpass_cat6_2016_prefit_copy__133->SetEntries(92);
   htotpass_cat6_2016_prefit_copy__133->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit_copy__133->SetFillColor(ci);
   htotpass_cat6_2016_prefit_copy__133->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit_copy__133->SetLineColor(ci);
   htotpass_cat6_2016_prefit_copy__133->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_prefit_copy__133->SetMarkerColor(ci);
   htotpass_cat6_2016_prefit_copy__133->SetMarkerSize(0);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_prefit_copy__133->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit_copy__133->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_prefit_copy__133->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit_copy__133->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_prefit_copy__133->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_prefit_copy__133->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_prefit_copy__133->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit_copy__133->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit_copy__133->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit_copy__133->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit_copy__133->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit_copy__133->Draw("sameaxis");
   p12pass_cat6_2016_prefit->Modified();
   cpass_cat6_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_prefit
   TPad *p22pass_cat6_2016_prefit = new TPad("p22pass_cat6_2016_prefit", "p22pass_cat6_2016_prefit",0,0,1,0.3);
   p22pass_cat6_2016_prefit->Draw();
   p22pass_cat6_2016_prefit->cd();
   p22pass_cat6_2016_prefit->Range(13.7027,-10.54926,221.8108,7.948279);
   p22pass_cat6_2016_prefit->SetFillColor(0);
   p22pass_cat6_2016_prefit->SetBorderMode(0);
   p22pass_cat6_2016_prefit->SetBorderSize(2);
   p22pass_cat6_2016_prefit->SetTickx(1);
   p22pass_cat6_2016_prefit->SetTicky(1);
   p22pass_cat6_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat6_2016_prefit->SetTopMargin(0.05);
   p22pass_cat6_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat6_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat6_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat6_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat6_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat6_2016_prefit__134 = new TH1F("iOneWithErrorspass_cat6_2016_prefit__134","",23,40,201);
   iOneWithErrorspass_cat6_2016_prefit__134->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_prefit__134->SetMaximum(7.023402);
   iOneWithErrorspass_cat6_2016_prefit__134->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit__134->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_prefit__134->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit__134->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_prefit__134->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit__134->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_prefit__134->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_prefit__134->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_prefit__134->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit__134->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit__134->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit__134->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit__134->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit__134->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_34 = new TH1F("hstack_stack_34","hstack",23,40,201);
   hstack_stack_34->SetMinimum(-56.15487);
   hstack_stack_34->SetMaximum(59.00066);
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
   
   
   TH1F *sigHistResidualwqqpass_cat6_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat6_2016_prefit_stack_1","wqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(2,4.644477e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(3,4.285248e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(4,0.1820458);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(5,1.051103);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(6,1.11713);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(7,2.055441);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(8,1.306028);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(9,0.2160157);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(10,4.735258e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(14,6.126675e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(15,5.970882e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(16,6.209288e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(17,6.576663e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(18,7.639503e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(19,6.167566e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(20,6.679167e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(21,7.639503e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(22,8.159022e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinContent(23,8.357258e-08);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(1,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(2,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(3,1.006043);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(4,4.84376);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(5,5.238333);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(6,8.200556);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(7,9.882326);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(8,8.015588);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(9,5.619933);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(10,1.086548);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(11,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(12,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(13,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(14,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(15,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(16,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(17,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(18,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(19,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(20,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(21,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(22,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(23,1.54154e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat6_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat6_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat6_2016_prefit_stack_2","zqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(2,9.108339e-08);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(3,8.40385e-08);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(4,8.940169e-08);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(5,0.3809189);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(6,0.3538029);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(7,2.323342);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(8,3.270831);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(9,4.168562);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(10,1.271757);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(14,0.5034142);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(15,1.170957e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(16,1.217711e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(17,1.289757e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(18,1.498192e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(19,1.209529e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(20,1.30986e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(21,1.498192e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(22,1.600076e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinContent(23,1.638952e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(1,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(2,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(3,0.5586006);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(4,2.414603);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(5,2.306672);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(6,14.10355);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(7,14.68896);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(8,14.64048);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(9,20.29941);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(10,15.85113);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(11,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(12,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(13,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(14,2.347417);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(15,2.145429);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(16,0.532064);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(17,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(18,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(19,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(20,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(21,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(22,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(23,3.282092e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat6_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(2,1.602567e-09);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(3,1.478616e-09);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(4,0.0001415882);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(5,0.0007164491);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(6,0.0002240636);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(7,0.003796602);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(8,0.00337593);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(9,0.01701367);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(10,0.01811735);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(14,0.2099361);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(15,0.003104598);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(16,0.02624549);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(17,0.0004080511);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(18,0.0008701512);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(19,0.0003717538);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(20,0.001078595);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(21,0.0008340706);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(22,0.000877968);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinContent(23,0.0004677401);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(1,9.606785e-07);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(2,9.606785e-07);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(3,9.606785e-07);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(4,0.008104162);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(5,0.05889631);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(6,0.3740486);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(7,0.3477811);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(8,6.934845);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(9,5.790772);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(10,56.17299);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(11,9.606785e-07);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(12,9.606785e-07);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(13,9.606785e-07);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(14,49.40064);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(15,48.06965);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(16,1.410378);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(17,5.038099);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(18,0.02338375);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(19,0.007047358);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(20,0.0474342);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(21,0.02923866);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(22,0.02882889);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(23,0.01460384);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_prefit__135 = new TH1F("iOneWithErrorsLinepass_cat6_2016_prefit__135","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__135->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fx3034[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fy3034[23] = {
   0,
   -1.12898,
   0.5315301,
   -0.2689471,
   1.128381,
   3.370566,
   4.682268,
   3.589169,
   3.359445,
   3.01925,
   0,
   0,
   0,
   0.3444348,
   1.161185,
   0.7545487,
   0.4262151,
   -1.374144,
   1.807803,
   1.299707,
   -0.04913823,
   -0.5869523,
   -0.532857};
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_felx3034[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fely3034[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fehx3034[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fehy3034[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_prefit_fx3034,Graph_from_iRatiopass_cat6_2016_prefit_fy3034,Graph_from_iRatiopass_cat6_2016_prefit_felx3034,Graph_from_iRatiopass_cat6_2016_prefit_fehx3034,Graph_from_iRatiopass_cat6_2016_prefit_fely3034,Graph_from_iRatiopass_cat6_2016_prefit_fehy3034);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_prefit3034 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_prefit3034","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->SetMinimum(-3.179785);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->SetMaximum(6.487909);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_prefit3034);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_prefit_copy__136 = new TH1F("iOneWithErrorspass_cat6_2016_prefit_copy__136","",23,40,201);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetMaximum(7.023402);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetEntries(184);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__136->Draw("sameaxis");
   p22pass_cat6_2016_prefit->Modified();
   cpass_cat6_2016_prefit->cd();
   cpass_cat6_2016_prefit->Modified();
   cpass_cat6_2016_prefit->cd();
   cpass_cat6_2016_prefit->SetSelected(cpass_cat6_2016_prefit);
}
