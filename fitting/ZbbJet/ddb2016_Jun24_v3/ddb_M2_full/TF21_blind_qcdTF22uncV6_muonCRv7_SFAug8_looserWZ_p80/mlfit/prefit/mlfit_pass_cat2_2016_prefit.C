void mlfit_pass_cat2_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat2_2016_prefit/cpass_cat2_2016_prefit
//=========  (Thu Sep 26 13:57:11 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_prefit = new TCanvas("cpass_cat2_2016_prefit", "cpass_cat2_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_prefit->SetHighLightColor(2);
   cpass_cat2_2016_prefit->Range(0,0,1,1);
   cpass_cat2_2016_prefit->SetFillColor(0);
   cpass_cat2_2016_prefit->SetBorderMode(0);
   cpass_cat2_2016_prefit->SetBorderSize(2);
   cpass_cat2_2016_prefit->SetTickx(1);
   cpass_cat2_2016_prefit->SetTicky(1);
   cpass_cat2_2016_prefit->SetLeftMargin(0.16);
   cpass_cat2_2016_prefit->SetBottomMargin(0.13);
   cpass_cat2_2016_prefit->SetFrameFillStyle(0);
   cpass_cat2_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_prefit
   TPad *p12pass_cat2_2016_prefit = new TPad("p12pass_cat2_2016_prefit", "p12pass_cat2_2016_prefit",0,0.3,1,1);
   p12pass_cat2_2016_prefit->Draw();
   p12pass_cat2_2016_prefit->cd();
   p12pass_cat2_2016_prefit->Range(18.24324,-46.40226,197.973,2273.711);
   p12pass_cat2_2016_prefit->SetFillColor(0);
   p12pass_cat2_2016_prefit->SetBorderMode(0);
   p12pass_cat2_2016_prefit->SetBorderSize(2);
   p12pass_cat2_2016_prefit->SetTickx(1);
   p12pass_cat2_2016_prefit->SetTicky(1);
   p12pass_cat2_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat2_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat2_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat2_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_prefit__33 = new TH1F("htotpass_cat2_2016_prefit__33","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_prefit__33->SetBinContent(1,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinContent(2,1174.134);
   htotpass_cat2_2016_prefit__33->SetBinContent(3,1232.149);
   htotpass_cat2_2016_prefit__33->SetBinContent(4,1257.205);
   htotpass_cat2_2016_prefit__33->SetBinContent(5,1264.577);
   htotpass_cat2_2016_prefit__33->SetBinContent(6,1307.771);
   htotpass_cat2_2016_prefit__33->SetBinContent(7,1361.133);
   htotpass_cat2_2016_prefit__33->SetBinContent(8,1329.161);
   htotpass_cat2_2016_prefit__33->SetBinContent(9,1185.326);
   htotpass_cat2_2016_prefit__33->SetBinContent(10,1015.038);
   htotpass_cat2_2016_prefit__33->SetBinContent(11,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinContent(12,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinContent(13,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinContent(14,685.6512);
   htotpass_cat2_2016_prefit__33->SetBinContent(15,595.1393);
   htotpass_cat2_2016_prefit__33->SetBinContent(16,515.1321);
   htotpass_cat2_2016_prefit__33->SetBinContent(17,428.1035);
   htotpass_cat2_2016_prefit__33->SetBinContent(18,350.482);
   htotpass_cat2_2016_prefit__33->SetBinContent(19,276.9914);
   htotpass_cat2_2016_prefit__33->SetBinContent(20,217.9153);
   htotpass_cat2_2016_prefit__33->SetBinContent(21,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinContent(22,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinContent(23,7.36664e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(1,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(2,33.55341);
   htotpass_cat2_2016_prefit__33->SetBinError(3,22.42333);
   htotpass_cat2_2016_prefit__33->SetBinError(4,18.3505);
   htotpass_cat2_2016_prefit__33->SetBinError(5,22.03346);
   htotpass_cat2_2016_prefit__33->SetBinError(6,34.81528);
   htotpass_cat2_2016_prefit__33->SetBinError(7,47.01645);
   htotpass_cat2_2016_prefit__33->SetBinError(8,63.46424);
   htotpass_cat2_2016_prefit__33->SetBinError(9,46.02169);
   htotpass_cat2_2016_prefit__33->SetBinError(10,30.79374);
   htotpass_cat2_2016_prefit__33->SetBinError(11,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(12,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(13,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(14,17.12645);
   htotpass_cat2_2016_prefit__33->SetBinError(15,13.25647);
   htotpass_cat2_2016_prefit__33->SetBinError(16,11.34574);
   htotpass_cat2_2016_prefit__33->SetBinError(17,9.376097);
   htotpass_cat2_2016_prefit__33->SetBinError(18,9.30958);
   htotpass_cat2_2016_prefit__33->SetBinError(19,8.163628);
   htotpass_cat2_2016_prefit__33->SetBinError(20,8.487267);
   htotpass_cat2_2016_prefit__33->SetBinError(21,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(22,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetBinError(23,1.18956e-06);
   htotpass_cat2_2016_prefit__33->SetMinimum(0);
   htotpass_cat2_2016_prefit__33->SetMaximum(2041.7);
   htotpass_cat2_2016_prefit__33->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__33->SetFillColor(ci);
   htotpass_cat2_2016_prefit__33->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__33->SetLineColor(ci);
   htotpass_cat2_2016_prefit__33->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_prefit__33->SetMarkerColor(ci);
   htotpass_cat2_2016_prefit__33->SetMarkerSize(0);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_prefit__33->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__33->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_prefit__33->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__33->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_prefit__33->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_prefit__33->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_prefit__33->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__33->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__33->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__33->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__33->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__33->Draw("");
   
   TH1F *htot_linepass_cat2_2016_prefit__34 = new TH1F("htot_linepass_cat2_2016_prefit__34","wqq in cat2_2016_pass_cat2",23,40,201);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(1,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(2,1174.134);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(3,1232.149);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(4,1257.205);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(5,1264.577);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(6,1307.771);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(7,1361.133);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(8,1329.161);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(9,1185.326);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(10,1015.038);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(11,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(12,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(13,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(14,685.6512);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(15,595.1393);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(16,515.1321);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(17,428.1035);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(18,350.482);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(19,276.9914);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(20,217.9153);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(21,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(22,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinContent(23,7.36664e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(1,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(2,33.55341);
   htot_linepass_cat2_2016_prefit__34->SetBinError(3,22.42333);
   htot_linepass_cat2_2016_prefit__34->SetBinError(4,18.3505);
   htot_linepass_cat2_2016_prefit__34->SetBinError(5,22.03346);
   htot_linepass_cat2_2016_prefit__34->SetBinError(6,34.81528);
   htot_linepass_cat2_2016_prefit__34->SetBinError(7,47.01645);
   htot_linepass_cat2_2016_prefit__34->SetBinError(8,63.46424);
   htot_linepass_cat2_2016_prefit__34->SetBinError(9,46.02169);
   htot_linepass_cat2_2016_prefit__34->SetBinError(10,30.79374);
   htot_linepass_cat2_2016_prefit__34->SetBinError(11,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(12,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(13,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(14,17.12645);
   htot_linepass_cat2_2016_prefit__34->SetBinError(15,13.25647);
   htot_linepass_cat2_2016_prefit__34->SetBinError(16,11.34574);
   htot_linepass_cat2_2016_prefit__34->SetBinError(17,9.376097);
   htot_linepass_cat2_2016_prefit__34->SetBinError(18,9.30958);
   htot_linepass_cat2_2016_prefit__34->SetBinError(19,8.163628);
   htot_linepass_cat2_2016_prefit__34->SetBinError(20,8.487267);
   htot_linepass_cat2_2016_prefit__34->SetBinError(21,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(22,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetBinError(23,1.18956e-06);
   htot_linepass_cat2_2016_prefit__34->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_prefit__34->SetFillColor(ci);
   htot_linepass_cat2_2016_prefit__34->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat2_2016_prefit__34->SetLineColor(ci);
   htot_linepass_cat2_2016_prefit__34->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat2_2016_prefit__34->SetMarkerColor(ci);
   htot_linepass_cat2_2016_prefit__34->SetMarkerSize(0);
   htot_linepass_cat2_2016_prefit__34->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat2_2016_prefit__34->GetXaxis()->SetRange(2,20);
   htot_linepass_cat2_2016_prefit__34->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_prefit__34->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_prefit__34->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_prefit__34->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_prefit__34->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat2_2016_prefit__34->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_prefit__34->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat2_2016_prefit__34->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat2_2016_prefit__34->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat2_2016_prefit__34->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_prefit__34->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat2_2016_prefit__34->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat2_2016_prefit__34->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat2_2016_prefit__34->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat2_2016_prefit__34->Draw("histsame");
   
   TH1F *qcd__35 = new TH1F("qcd__35","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__35->SetBinContent(2,1164.983);
   qcd__35->SetBinContent(3,1217.675);
   qcd__35->SetBinContent(4,1210.833);
   qcd__35->SetBinContent(5,1177.462);
   qcd__35->SetBinContent(6,1114.145);
   qcd__35->SetBinContent(7,1059.311);
   qcd__35->SetBinContent(8,1017.206);
   qcd__35->SetBinContent(9,974.0742);
   qcd__35->SetBinContent(10,917.5821);
   qcd__35->SetBinContent(14,655.6479);
   qcd__35->SetBinContent(15,573.9308);
   qcd__35->SetBinContent(16,498.9297);
   qcd__35->SetBinContent(17,418.1458);
   qcd__35->SetBinContent(18,340.8606);
   qcd__35->SetBinContent(19,274.7917);
   qcd__35->SetBinContent(20,212.437);
   qcd__35->SetBinError(2,33.32327);
   qcd__35->SetBinError(3,21.20346);
   qcd__35->SetBinError(4,15.57732);
   qcd__35->SetBinError(5,13.33634);
   qcd__35->SetBinError(6,12.28325);
   qcd__35->SetBinError(7,11.76964);
   qcd__35->SetBinError(8,11.4443);
   qcd__35->SetBinError(9,11.04931);
   qcd__35->SetBinError(10,10.44639);
   qcd__35->SetBinError(14,8.235416);
   qcd__35->SetBinError(15,7.941099);
   qcd__35->SetBinError(16,7.935167);
   qcd__35->SetBinError(17,7.941867);
   qcd__35->SetBinError(18,7.967429);
   qcd__35->SetBinError(19,8.08905);
   qcd__35->SetBinError(20,8.032171);
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
   
   TH1F *htotpass_cat2_2016_prefit__36 = new TH1F("htotpass_cat2_2016_prefit__36","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_prefit__36->SetBinContent(1,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinContent(2,1174.134);
   htotpass_cat2_2016_prefit__36->SetBinContent(3,1232.149);
   htotpass_cat2_2016_prefit__36->SetBinContent(4,1257.205);
   htotpass_cat2_2016_prefit__36->SetBinContent(5,1264.577);
   htotpass_cat2_2016_prefit__36->SetBinContent(6,1307.771);
   htotpass_cat2_2016_prefit__36->SetBinContent(7,1361.133);
   htotpass_cat2_2016_prefit__36->SetBinContent(8,1329.161);
   htotpass_cat2_2016_prefit__36->SetBinContent(9,1185.326);
   htotpass_cat2_2016_prefit__36->SetBinContent(10,1015.038);
   htotpass_cat2_2016_prefit__36->SetBinContent(11,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinContent(12,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinContent(13,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinContent(14,685.6512);
   htotpass_cat2_2016_prefit__36->SetBinContent(15,595.1393);
   htotpass_cat2_2016_prefit__36->SetBinContent(16,515.1321);
   htotpass_cat2_2016_prefit__36->SetBinContent(17,428.1035);
   htotpass_cat2_2016_prefit__36->SetBinContent(18,350.482);
   htotpass_cat2_2016_prefit__36->SetBinContent(19,276.9914);
   htotpass_cat2_2016_prefit__36->SetBinContent(20,217.9153);
   htotpass_cat2_2016_prefit__36->SetBinContent(21,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinContent(22,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinContent(23,7.36664e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(1,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(2,33.55341);
   htotpass_cat2_2016_prefit__36->SetBinError(3,22.42333);
   htotpass_cat2_2016_prefit__36->SetBinError(4,18.3505);
   htotpass_cat2_2016_prefit__36->SetBinError(5,22.03346);
   htotpass_cat2_2016_prefit__36->SetBinError(6,34.81528);
   htotpass_cat2_2016_prefit__36->SetBinError(7,47.01645);
   htotpass_cat2_2016_prefit__36->SetBinError(8,63.46424);
   htotpass_cat2_2016_prefit__36->SetBinError(9,46.02169);
   htotpass_cat2_2016_prefit__36->SetBinError(10,30.79374);
   htotpass_cat2_2016_prefit__36->SetBinError(11,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(12,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(13,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(14,17.12645);
   htotpass_cat2_2016_prefit__36->SetBinError(15,13.25647);
   htotpass_cat2_2016_prefit__36->SetBinError(16,11.34574);
   htotpass_cat2_2016_prefit__36->SetBinError(17,9.376097);
   htotpass_cat2_2016_prefit__36->SetBinError(18,9.30958);
   htotpass_cat2_2016_prefit__36->SetBinError(19,8.163628);
   htotpass_cat2_2016_prefit__36->SetBinError(20,8.487267);
   htotpass_cat2_2016_prefit__36->SetBinError(21,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(22,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetBinError(23,1.18956e-06);
   htotpass_cat2_2016_prefit__36->SetMinimum(0);
   htotpass_cat2_2016_prefit__36->SetMaximum(2041.7);
   htotpass_cat2_2016_prefit__36->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__36->SetFillColor(ci);
   htotpass_cat2_2016_prefit__36->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit__36->SetLineColor(ci);
   htotpass_cat2_2016_prefit__36->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_prefit__36->SetMarkerColor(ci);
   htotpass_cat2_2016_prefit__36->SetMarkerSize(0);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_prefit__36->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__36->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_prefit__36->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__36->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_prefit__36->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_prefit__36->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_prefit__36->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__36->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit__36->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit__36->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit__36->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit__36->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis9[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_9 = new TH1F("hstackMC_stack_9","hstackMC",23, xAxis9);
   hstackMC_stack_9->SetMinimum(-25.3077);
   hstackMC_stack_9->SetMaximum(327.7617);
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
   tqq_stack_1->SetBinContent(2,7.311898);
   tqq_stack_1->SetBinContent(3,11.74802);
   tqq_stack_1->SetBinContent(4,13.98404);
   tqq_stack_1->SetBinContent(5,21.66475);
   tqq_stack_1->SetBinContent(6,31.76628);
   tqq_stack_1->SetBinContent(7,37.98007);
   tqq_stack_1->SetBinContent(8,35.21215);
   tqq_stack_1->SetBinContent(9,27.66987);
   tqq_stack_1->SetBinContent(10,33.50956);
   tqq_stack_1->SetBinContent(14,30.00323);
   tqq_stack_1->SetBinContent(15,21.20855);
   tqq_stack_1->SetBinContent(16,16.20237);
   tqq_stack_1->SetBinContent(17,9.957702);
   tqq_stack_1->SetBinContent(18,9.621358);
   tqq_stack_1->SetBinContent(19,2.19973);
   tqq_stack_1->SetBinContent(20,5.478358);
   tqq_stack_1->SetBinError(2,3.659561);
   tqq_stack_1->SetBinError(3,5.879811);
   tqq_stack_1->SetBinError(4,6.998927);
   tqq_stack_1->SetBinError(5,10.84308);
   tqq_stack_1->SetBinError(6,15.89882);
   tqq_stack_1->SetBinError(7,19.00879);
   tqq_stack_1->SetBinError(8,17.62347);
   tqq_stack_1->SetBinError(9,13.8486);
   tqq_stack_1->SetBinError(10,16.77133);
   tqq_stack_1->SetBinError(14,15.01643);
   tqq_stack_1->SetBinError(15,10.61475);
   tqq_stack_1->SetBinError(16,8.109189);
   tqq_stack_1->SetBinError(17,4.983768);
   tqq_stack_1->SetBinError(18,4.81543);
   tqq_stack_1->SetBinError(19,1.100951);
   tqq_stack_1->SetBinError(20,2.741885);
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
   wqq_stack_2->SetBinContent(1,2.797823e-06);
   wqq_stack_2->SetBinContent(2,1.839592);
   wqq_stack_2->SetBinContent(3,2.725741);
   wqq_stack_2->SetBinContent(4,20.10753);
   wqq_stack_2->SetBinContent(5,34.22224);
   wqq_stack_2->SetBinContent(6,108.9634);
   wqq_stack_2->SetBinContent(7,133.6663);
   wqq_stack_2->SetBinContent(8,71.70438);
   wqq_stack_2->SetBinContent(9,21.13939);
   wqq_stack_2->SetBinContent(10,5.320306);
   wqq_stack_2->SetBinContent(11,2.797823e-06);
   wqq_stack_2->SetBinContent(12,2.797823e-06);
   wqq_stack_2->SetBinContent(13,2.797823e-06);
   wqq_stack_2->SetBinContent(14,2.797823e-06);
   wqq_stack_2->SetBinContent(15,2.797823e-06);
   wqq_stack_2->SetBinContent(16,2.797823e-06);
   wqq_stack_2->SetBinContent(17,2.797823e-06);
   wqq_stack_2->SetBinContent(18,2.797823e-06);
   wqq_stack_2->SetBinContent(19,2.797823e-06);
   wqq_stack_2->SetBinContent(20,2.797823e-06);
   wqq_stack_2->SetBinContent(21,2.797823e-06);
   wqq_stack_2->SetBinContent(22,2.797823e-06);
   wqq_stack_2->SetBinContent(23,2.797823e-06);
   wqq_stack_2->SetBinError(1,4.159577e-07);
   wqq_stack_2->SetBinError(2,0.3658462);
   wqq_stack_2->SetBinError(3,3.482789);
   wqq_stack_2->SetBinError(4,4.602855);
   wqq_stack_2->SetBinError(5,9.942442);
   wqq_stack_2->SetBinError(6,19.64835);
   wqq_stack_2->SetBinError(7,23.38176);
   wqq_stack_2->SetBinError(8,14.06539);
   wqq_stack_2->SetBinError(9,9.233526);
   wqq_stack_2->SetBinError(10,2.887325);
   wqq_stack_2->SetBinError(11,4.159577e-07);
   wqq_stack_2->SetBinError(12,4.159577e-07);
   wqq_stack_2->SetBinError(13,4.159577e-07);
   wqq_stack_2->SetBinError(14,4.159577e-07);
   wqq_stack_2->SetBinError(15,4.159577e-07);
   wqq_stack_2->SetBinError(16,4.159577e-07);
   wqq_stack_2->SetBinError(17,4.159577e-07);
   wqq_stack_2->SetBinError(18,4.159577e-07);
   wqq_stack_2->SetBinError(19,4.159577e-07);
   wqq_stack_2->SetBinError(20,4.159577e-07);
   wqq_stack_2->SetBinError(21,4.159577e-07);
   wqq_stack_2->SetBinError(22,4.159577e-07);
   wqq_stack_2->SetBinError(23,4.159577e-07);
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
   zqq_stack_3->SetBinContent(1,4.568817e-06);
   zqq_stack_3->SetBinContent(2,4.568817e-06);
   zqq_stack_3->SetBinContent(3,4.568817e-06);
   zqq_stack_3->SetBinContent(4,12.28101);
   zqq_stack_3->SetBinContent(5,31.22824);
   zqq_stack_3->SetBinContent(6,52.8965);
   zqq_stack_3->SetBinContent(7,130.1757);
   zqq_stack_3->SetBinContent(8,205.0382);
   zqq_stack_3->SetBinContent(9,162.4422);
   zqq_stack_3->SetBinContent(10,58.62625);
   zqq_stack_3->SetBinContent(11,4.568817e-06);
   zqq_stack_3->SetBinContent(12,4.568817e-06);
   zqq_stack_3->SetBinContent(13,4.568817e-06);
   zqq_stack_3->SetBinContent(14,4.568817e-06);
   zqq_stack_3->SetBinContent(15,4.568817e-06);
   zqq_stack_3->SetBinContent(16,4.568817e-06);
   zqq_stack_3->SetBinContent(17,4.568817e-06);
   zqq_stack_3->SetBinContent(18,4.568817e-06);
   zqq_stack_3->SetBinContent(19,4.568817e-06);
   zqq_stack_3->SetBinContent(20,4.568817e-06);
   zqq_stack_3->SetBinContent(21,4.568817e-06);
   zqq_stack_3->SetBinContent(22,4.568817e-06);
   zqq_stack_3->SetBinContent(23,4.568817e-06);
   zqq_stack_3->SetBinError(1,1.114465e-06);
   zqq_stack_3->SetBinError(2,1.365498);
   zqq_stack_3->SetBinError(3,2.552867);
   zqq_stack_3->SetBinError(4,4.890453);
   zqq_stack_3->SetBinError(5,9.549388);
   zqq_stack_3->SetBinError(6,20.55225);
   zqq_stack_3->SetBinError(7,34.11717);
   zqq_stack_3->SetBinError(8,58.20924);
   zqq_stack_3->SetBinError(9,41.45923);
   zqq_stack_3->SetBinError(10,23.44169);
   zqq_stack_3->SetBinError(11,1.114465e-06);
   zqq_stack_3->SetBinError(12,1.114465e-06);
   zqq_stack_3->SetBinError(13,1.114465e-06);
   zqq_stack_3->SetBinError(14,1.114465e-06);
   zqq_stack_3->SetBinError(15,1.114465e-06);
   zqq_stack_3->SetBinError(16,1.114465e-06);
   zqq_stack_3->SetBinError(17,1.114465e-06);
   zqq_stack_3->SetBinError(18,1.114465e-06);
   zqq_stack_3->SetBinError(19,1.114465e-06);
   zqq_stack_3->SetBinError(20,1.114465e-06);
   zqq_stack_3->SetBinError(21,1.114465e-06);
   zqq_stack_3->SetBinError(22,1.114465e-06);
   zqq_stack_3->SetBinError(23,1.114465e-06);
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
   
   TH1F *hsigpass_cat2_2016_prefit_stack_4 = new TH1F("hsigpass_cat2_2016_prefit_stack_4","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(1,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(2,0.0116422);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(3,0.1670045);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(4,0.0597671);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(5,0.1861342);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(6,0.5024967);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(7,0.5847712);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(8,0.1992326);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(9,1.696406);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(10,4.099107);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(11,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(12,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(13,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(14,4.597333);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(15,1.271443);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(16,0.2468058);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(17,0.1905453);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(18,0.02591683);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(19,0.02961403);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(20,0.02206332);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(21,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(22,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinContent(23,9.723198e-08);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(1,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(2,0.02490468);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(3,1.226088);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(4,0.3838435);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(5,1.434773);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(6,2.981269);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(7,2.90608);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(8,2.402185);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(9,11.88174);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(10,28.14241);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(11,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(12,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(13,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(14,29.90503);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(15,9.411492);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(16,2.011606);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(17,0.8336804);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(18,0.2002501);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(19,0.08852176);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(20,0.04826115);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(21,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(22,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetBinError(23,6.44107e-07);
   hsigpass_cat2_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_prefit_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat2_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat2_2016_prefit_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat2_2016_prefit_copy__37 = new TH1F("htotpass_cat2_2016_prefit_copy__37","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(1,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(2,1174.134);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(3,1232.149);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(4,1257.205);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(5,1264.577);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(6,1307.771);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(7,1361.133);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(8,1329.161);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(9,1185.326);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(10,1015.038);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(11,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(12,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(13,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(14,685.6512);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(15,595.1393);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(16,515.1321);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(17,428.1035);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(18,350.482);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(19,276.9914);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(20,217.9153);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(21,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(22,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinContent(23,7.36664e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(1,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(2,33.55341);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(3,22.42333);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(4,18.3505);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(5,22.03346);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(6,34.81528);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(7,47.01645);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(8,63.46424);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(9,46.02169);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(10,30.79374);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(11,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(12,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(13,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(14,17.12645);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(15,13.25647);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(16,11.34574);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(17,9.376097);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(18,9.30958);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(19,8.163628);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(20,8.487267);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(21,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(22,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetBinError(23,1.18956e-06);
   htotpass_cat2_2016_prefit_copy__37->SetMaximum(2041.7);
   htotpass_cat2_2016_prefit_copy__37->SetEntries(92);
   htotpass_cat2_2016_prefit_copy__37->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit_copy__37->SetFillColor(ci);
   htotpass_cat2_2016_prefit_copy__37->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_prefit_copy__37->SetLineColor(ci);
   htotpass_cat2_2016_prefit_copy__37->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_prefit_copy__37->SetMarkerColor(ci);
   htotpass_cat2_2016_prefit_copy__37->SetMarkerSize(0);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_prefit_copy__37->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit_copy__37->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_prefit_copy__37->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit_copy__37->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_prefit_copy__37->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_prefit_copy__37->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_prefit_copy__37->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit_copy__37->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_prefit_copy__37->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_prefit_copy__37->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_prefit_copy__37->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_prefit_copy__37->Draw("sameaxis");
   p12pass_cat2_2016_prefit->Modified();
   cpass_cat2_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_prefit
   TPad *p22pass_cat2_2016_prefit = new TPad("p22pass_cat2_2016_prefit", "p22pass_cat2_2016_prefit",0,0,1,0.3);
   p22pass_cat2_2016_prefit->Draw();
   p22pass_cat2_2016_prefit->cd();
   p22pass_cat2_2016_prefit->Range(18.24324,-11.6906,197.973,10.61141);
   p22pass_cat2_2016_prefit->SetFillColor(0);
   p22pass_cat2_2016_prefit->SetBorderMode(0);
   p22pass_cat2_2016_prefit->SetBorderSize(2);
   p22pass_cat2_2016_prefit->SetTickx(1);
   p22pass_cat2_2016_prefit->SetTicky(1);
   p22pass_cat2_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat2_2016_prefit->SetTopMargin(0.05);
   p22pass_cat2_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat2_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat2_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat2_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_prefit__38 = new TH1F("iOneWithErrorspass_cat2_2016_prefit__38","",23,40,201);
   iOneWithErrorspass_cat2_2016_prefit__38->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_prefit__38->SetMaximum(9.496309);
   iOneWithErrorspass_cat2_2016_prefit__38->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit__38->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_prefit__38->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit__38->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_prefit__38->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit__38->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_prefit__38->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_prefit__38->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_prefit__38->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit__38->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit__38->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit__38->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit__38->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit__38->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_10 = new TH1F("hstack_stack_10","hstack",23,40,201);
   hstack_stack_10->SetMinimum(-52.39526);
   hstack_stack_10->SetMaximum(67.22439);
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
   
   
   TH1F *sigHistResidualwqqpass_cat2_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat2_2016_prefit_stack_1","wqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(2,0.05306647);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(3,0.07820723);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(4,0.5832028);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(5,0.9707825);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(6,2.984769);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(7,3.658697);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(8,2.033221);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(9,0.6297752);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(10,0.1646822);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(14,1.059982e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(15,1.149227e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(16,1.217956e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(17,1.35925e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(18,1.524795e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(19,1.643851e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinContent(20,1.989965e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(1,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(2,0.3658462);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(3,3.482789);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(4,4.602855);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(5,9.942442);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(6,19.64835);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(7,23.38176);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(8,14.06539);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(9,9.233526);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(10,2.887325);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(11,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(12,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(13,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(14,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(15,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(16,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(17,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(18,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(19,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(20,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(21,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(22,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetBinError(23,4.159577e-07);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat2_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat2_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat2_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat2_2016_prefit_stack_2","zqq in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(2,1.317961e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(3,1.310889e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(4,0.3562009);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(5,0.8858515);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(6,1.448962);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(7,3.563153);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(8,5.813982);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(9,4.839405);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(10,1.814688);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(14,1.730941e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(15,1.876677e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(16,1.98891e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(17,2.219642e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(18,2.489976e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(19,2.684393e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinContent(20,3.249594e-07);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(1,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(2,1.365498);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(3,2.552867);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(4,4.890453);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(5,9.549388);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(6,20.55225);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(7,34.11717);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(8,58.20924);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(9,41.45923);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(10,23.44169);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(11,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(12,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(13,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(14,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(15,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(16,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(17,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(18,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(19,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(20,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(21,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(22,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetBinError(23,1.114465e-06);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat2_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat2_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(2,0.0003358411);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(3,0.004791709);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(4,0.001733497);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(5,0.005280069);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(6,0.01376459);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(7,0.01600628);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(8,0.00564936);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(9,0.05053857);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(10,0.1268818);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(14,0.1741745);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(15,0.05222552);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(16,0.01074402);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(17,0.009257151);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(18,0.00141245);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(19,0.001739962);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinContent(20,0.001569265);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(1,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(2,0.02490468);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(3,1.226088);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(4,0.3838435);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(5,1.434773);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(6,2.981269);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(7,2.90608);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(8,2.402185);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(9,11.88174);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(10,28.14241);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(11,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(12,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(13,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(14,29.90503);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(15,9.411492);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(16,2.011606);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(17,0.8336804);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(18,0.2002501);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(19,0.08852176);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(20,0.04826115);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(21,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(22,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetBinError(23,6.44107e-07);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_prefitpass_cat2_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_prefit__39 = new TH1F("iOneWithErrorsLinepass_cat2_2016_prefit__39","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_prefit__39->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fx3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fy3010[23] = {
   0,
   0.8325388,
   -0.4138288,
   -1.038833,
   1.209746,
   4.986358,
   6.330873,
   5.280558,
   3.62205,
   2.788195,
   0,
   0,
   0,
   0.4139791,
   -0.08787519,
   0.5363135,
   -0.1993587,
   -0.7347583,
   0.7207239,
   -1.416487,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_felx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fely3010[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fehx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_prefit_fehy3010[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_prefit_fx3010,Graph_from_iRatiopass_cat2_2016_prefit_fy3010,Graph_from_iRatiopass_cat2_2016_prefit_felx3010,Graph_from_iRatiopass_cat2_2016_prefit_fehx3010,Graph_from_iRatiopass_cat2_2016_prefit_fely3010,Graph_from_iRatiopass_cat2_2016_prefit_fehy3010);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_prefit3010 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_prefit3010","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->SetMinimum(-3.391223);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->SetMaximum(8.305608);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_prefit3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_prefit3010);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_prefit_copy__40 = new TH1F("iOneWithErrorspass_cat2_2016_prefit_copy__40","",23,40,201);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetMinimum(-5);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetMaximum(9.496309);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetEntries(184);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_prefit_copy__40->Draw("sameaxis");
   p22pass_cat2_2016_prefit->Modified();
   cpass_cat2_2016_prefit->cd();
   cpass_cat2_2016_prefit->Modified();
   cpass_cat2_2016_prefit->cd();
   cpass_cat2_2016_prefit->SetSelected(cpass_cat2_2016_prefit);
}
