void mlfit_pass_cat4_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat4_2016_fit_s/cpass_cat4_2016_fit_s
//=========  (Thu Sep 26 13:57:41 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_fit_s = new TCanvas("cpass_cat4_2016_fit_s", "cpass_cat4_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_fit_s->SetHighLightColor(2);
   cpass_cat4_2016_fit_s->Range(0,0,1,1);
   cpass_cat4_2016_fit_s->SetFillColor(0);
   cpass_cat4_2016_fit_s->SetBorderMode(0);
   cpass_cat4_2016_fit_s->SetBorderSize(2);
   cpass_cat4_2016_fit_s->SetTickx(1);
   cpass_cat4_2016_fit_s->SetTicky(1);
   cpass_cat4_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat4_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat4_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat4_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_fit_s
   TPad *p12pass_cat4_2016_fit_s = new TPad("p12pass_cat4_2016_fit_s", "p12pass_cat4_2016_fit_s",0,0.3,1,1);
   p12pass_cat4_2016_fit_s->Draw();
   p12pass_cat4_2016_fit_s->cd();
   p12pass_cat4_2016_fit_s->Range(13.7027,-18.39122,221.8108,901.1699);
   p12pass_cat4_2016_fit_s->SetFillColor(0);
   p12pass_cat4_2016_fit_s->SetBorderMode(0);
   p12pass_cat4_2016_fit_s->SetBorderSize(2);
   p12pass_cat4_2016_fit_s->SetTickx(1);
   p12pass_cat4_2016_fit_s->SetTicky(1);
   p12pass_cat4_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat4_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_fit_s__81 = new TH1F("htotpass_cat4_2016_fit_s__81","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s__81->SetBinContent(1,3.51838e-06);
   htotpass_cat4_2016_fit_s__81->SetBinContent(2,457.0735);
   htotpass_cat4_2016_fit_s__81->SetBinContent(3,467.7638);
   htotpass_cat4_2016_fit_s__81->SetBinContent(4,474.1996);
   htotpass_cat4_2016_fit_s__81->SetBinContent(5,497.1954);
   htotpass_cat4_2016_fit_s__81->SetBinContent(6,525.1616);
   htotpass_cat4_2016_fit_s__81->SetBinContent(7,539.4758);
   htotpass_cat4_2016_fit_s__81->SetBinContent(8,502.2375);
   htotpass_cat4_2016_fit_s__81->SetBinContent(9,434.2593);
   htotpass_cat4_2016_fit_s__81->SetBinContent(10,384.3191);
   htotpass_cat4_2016_fit_s__81->SetBinContent(11,3.51838e-06);
   htotpass_cat4_2016_fit_s__81->SetBinContent(12,3.51838e-06);
   htotpass_cat4_2016_fit_s__81->SetBinContent(13,3.51838e-06);
   htotpass_cat4_2016_fit_s__81->SetBinContent(14,295.3755);
   htotpass_cat4_2016_fit_s__81->SetBinContent(15,269.3494);
   htotpass_cat4_2016_fit_s__81->SetBinContent(16,247.6149);
   htotpass_cat4_2016_fit_s__81->SetBinContent(17,227.8398);
   htotpass_cat4_2016_fit_s__81->SetBinContent(18,199.3316);
   htotpass_cat4_2016_fit_s__81->SetBinContent(19,178.4496);
   htotpass_cat4_2016_fit_s__81->SetBinContent(20,151.4045);
   htotpass_cat4_2016_fit_s__81->SetBinContent(21,129.4438);
   htotpass_cat4_2016_fit_s__81->SetBinContent(22,108.0951);
   htotpass_cat4_2016_fit_s__81->SetBinContent(23,86.21682);
   htotpass_cat4_2016_fit_s__81->SetBinError(1,4.876585e-07);
   htotpass_cat4_2016_fit_s__81->SetBinError(2,8.63534);
   htotpass_cat4_2016_fit_s__81->SetBinError(3,7.227704);
   htotpass_cat4_2016_fit_s__81->SetBinError(4,8.666243);
   htotpass_cat4_2016_fit_s__81->SetBinError(5,12.05455);
   htotpass_cat4_2016_fit_s__81->SetBinError(6,17.82573);
   htotpass_cat4_2016_fit_s__81->SetBinError(7,21.72867);
   htotpass_cat4_2016_fit_s__81->SetBinError(8,22.14161);
   htotpass_cat4_2016_fit_s__81->SetBinError(9,17.12699);
   htotpass_cat4_2016_fit_s__81->SetBinError(10,13.34541);
   htotpass_cat4_2016_fit_s__81->SetBinError(11,4.876585e-07);
   htotpass_cat4_2016_fit_s__81->SetBinError(12,4.876585e-07);
   htotpass_cat4_2016_fit_s__81->SetBinError(13,4.876585e-07);
   htotpass_cat4_2016_fit_s__81->SetBinError(14,8.65239);
   htotpass_cat4_2016_fit_s__81->SetBinError(15,5.513354);
   htotpass_cat4_2016_fit_s__81->SetBinError(16,5.626695);
   htotpass_cat4_2016_fit_s__81->SetBinError(17,4.34168);
   htotpass_cat4_2016_fit_s__81->SetBinError(18,3.568446);
   htotpass_cat4_2016_fit_s__81->SetBinError(19,3.661885);
   htotpass_cat4_2016_fit_s__81->SetBinError(20,3.183098);
   htotpass_cat4_2016_fit_s__81->SetBinError(21,2.755714);
   htotpass_cat4_2016_fit_s__81->SetBinError(22,2.675471);
   htotpass_cat4_2016_fit_s__81->SetBinError(23,2.649313);
   htotpass_cat4_2016_fit_s__81->SetMinimum(0);
   htotpass_cat4_2016_fit_s__81->SetMaximum(809.2137);
   htotpass_cat4_2016_fit_s__81->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__81->SetFillColor(ci);
   htotpass_cat4_2016_fit_s__81->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__81->SetLineColor(ci);
   htotpass_cat4_2016_fit_s__81->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s__81->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s__81->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s__81->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__81->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s__81->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__81->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s__81->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s__81->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s__81->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__81->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__81->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__81->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__81->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__81->Draw("");
   
   TH1F *htot_linepass_cat4_2016_fit_s__82 = new TH1F("htot_linepass_cat4_2016_fit_s__82","wqq in cat4_2016_pass_cat4",23,40,201);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(1,3.51838e-06);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(2,457.0735);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(3,467.7638);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(4,474.1996);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(5,497.1954);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(6,525.1616);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(7,539.4758);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(8,502.2375);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(9,434.2593);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(10,384.3191);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(11,3.51838e-06);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(12,3.51838e-06);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(13,3.51838e-06);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(14,295.3755);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(15,269.3494);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(16,247.6149);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(17,227.8398);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(18,199.3316);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(19,178.4496);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(20,151.4045);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(21,129.4438);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(22,108.0951);
   htot_linepass_cat4_2016_fit_s__82->SetBinContent(23,86.21682);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(1,4.876585e-07);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(2,8.63534);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(3,7.227704);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(4,8.666243);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(5,12.05455);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(6,17.82573);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(7,21.72867);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(8,22.14161);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(9,17.12699);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(10,13.34541);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(11,4.876585e-07);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(12,4.876585e-07);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(13,4.876585e-07);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(14,8.65239);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(15,5.513354);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(16,5.626695);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(17,4.34168);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(18,3.568446);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(19,3.661885);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(20,3.183098);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(21,2.755714);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(22,2.675471);
   htot_linepass_cat4_2016_fit_s__82->SetBinError(23,2.649313);
   htot_linepass_cat4_2016_fit_s__82->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_s__82->SetFillColor(ci);
   htot_linepass_cat4_2016_fit_s__82->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_s__82->SetLineColor(ci);
   htot_linepass_cat4_2016_fit_s__82->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat4_2016_fit_s__82->SetMarkerColor(ci);
   htot_linepass_cat4_2016_fit_s__82->SetMarkerSize(0);
   htot_linepass_cat4_2016_fit_s__82->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat4_2016_fit_s__82->GetXaxis()->SetRange(2,23);
   htot_linepass_cat4_2016_fit_s__82->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__82->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_s__82->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_s__82->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__82->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat4_2016_fit_s__82->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__82->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat4_2016_fit_s__82->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat4_2016_fit_s__82->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat4_2016_fit_s__82->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__82->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__82->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_s__82->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_s__82->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__82->Draw("histsame");
   
   TH1F *qcd__83 = new TH1F("qcd__83","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__83->SetBinContent(2,451.376);
   qcd__83->SetBinContent(3,461.4409);
   qcd__83->SetBinContent(4,454.6255);
   qcd__83->SetBinContent(5,438.7383);
   qcd__83->SetBinContent(6,409.1661);
   qcd__83->SetBinContent(7,390.4574);
   qcd__83->SetBinContent(8,373.2292);
   qcd__83->SetBinContent(9,348.1818);
   qcd__83->SetBinContent(10,335.0999);
   qcd__83->SetBinContent(14,273.4854);
   qcd__83->SetBinContent(15,260.8878);
   qcd__83->SetBinContent(16,236.732);
   qcd__83->SetBinContent(17,221.9376);
   qcd__83->SetBinContent(18,194.6874);
   qcd__83->SetBinContent(19,172.5596);
   qcd__83->SetBinContent(20,147.9658);
   qcd__83->SetBinContent(21,127.0143);
   qcd__83->SetBinContent(22,106.9801);
   qcd__83->SetBinContent(23,86.21682);
   qcd__83->SetBinError(2,8.507442);
   qcd__83->SetBinError(3,7.074904);
   qcd__83->SetBinError(4,7.67036);
   qcd__83->SetBinError(5,9.022365);
   qcd__83->SetBinError(6,10.22797);
   qcd__83->SetBinError(7,10.83036);
   qcd__83->SetBinError(8,10.56744);
   qcd__83->SetBinError(9,9.569105);
   qcd__83->SetBinError(10,8.448323);
   qcd__83->SetBinError(14,5.230281);
   qcd__83->SetBinError(15,4.801832);
   qcd__83->SetBinError(16,4.41799);
   qcd__83->SetBinError(17,3.908855);
   qcd__83->SetBinError(18,3.243896);
   qcd__83->SetBinError(19,3.138976);
   qcd__83->SetBinError(20,2.986636);
   qcd__83->SetBinError(21,2.643653);
   qcd__83->SetBinError(22,2.651547);
   qcd__83->SetBinError(23,2.649313);
   qcd__83->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__83->SetLineColor(ci);
   qcd__83->SetLineStyle(2);
   qcd__83->SetLineWidth(2);
   qcd__83->GetXaxis()->SetTitle("x");
   qcd__83->GetXaxis()->SetLabelFont(42);
   qcd__83->GetXaxis()->SetLabelSize(0.035);
   qcd__83->GetXaxis()->SetTitleSize(0.035);
   qcd__83->GetXaxis()->SetTitleFont(42);
   qcd__83->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__83->GetYaxis()->SetLabelFont(42);
   qcd__83->GetYaxis()->SetLabelSize(0.035);
   qcd__83->GetYaxis()->SetTitleSize(0.035);
   qcd__83->GetYaxis()->SetTitleOffset(0);
   qcd__83->GetYaxis()->SetTitleFont(42);
   qcd__83->GetZaxis()->SetLabelFont(42);
   qcd__83->GetZaxis()->SetLabelSize(0.035);
   qcd__83->GetZaxis()->SetTitleSize(0.035);
   qcd__83->GetZaxis()->SetTitleFont(42);
   qcd__83->Draw("hist sames");
   
   TH1F *htotpass_cat4_2016_fit_s__84 = new TH1F("htotpass_cat4_2016_fit_s__84","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s__84->SetBinContent(1,3.51838e-06);
   htotpass_cat4_2016_fit_s__84->SetBinContent(2,457.0735);
   htotpass_cat4_2016_fit_s__84->SetBinContent(3,467.7638);
   htotpass_cat4_2016_fit_s__84->SetBinContent(4,474.1996);
   htotpass_cat4_2016_fit_s__84->SetBinContent(5,497.1954);
   htotpass_cat4_2016_fit_s__84->SetBinContent(6,525.1616);
   htotpass_cat4_2016_fit_s__84->SetBinContent(7,539.4758);
   htotpass_cat4_2016_fit_s__84->SetBinContent(8,502.2375);
   htotpass_cat4_2016_fit_s__84->SetBinContent(9,434.2593);
   htotpass_cat4_2016_fit_s__84->SetBinContent(10,384.3191);
   htotpass_cat4_2016_fit_s__84->SetBinContent(11,3.51838e-06);
   htotpass_cat4_2016_fit_s__84->SetBinContent(12,3.51838e-06);
   htotpass_cat4_2016_fit_s__84->SetBinContent(13,3.51838e-06);
   htotpass_cat4_2016_fit_s__84->SetBinContent(14,295.3755);
   htotpass_cat4_2016_fit_s__84->SetBinContent(15,269.3494);
   htotpass_cat4_2016_fit_s__84->SetBinContent(16,247.6149);
   htotpass_cat4_2016_fit_s__84->SetBinContent(17,227.8398);
   htotpass_cat4_2016_fit_s__84->SetBinContent(18,199.3316);
   htotpass_cat4_2016_fit_s__84->SetBinContent(19,178.4496);
   htotpass_cat4_2016_fit_s__84->SetBinContent(20,151.4045);
   htotpass_cat4_2016_fit_s__84->SetBinContent(21,129.4438);
   htotpass_cat4_2016_fit_s__84->SetBinContent(22,108.0951);
   htotpass_cat4_2016_fit_s__84->SetBinContent(23,86.21682);
   htotpass_cat4_2016_fit_s__84->SetBinError(1,4.876585e-07);
   htotpass_cat4_2016_fit_s__84->SetBinError(2,8.63534);
   htotpass_cat4_2016_fit_s__84->SetBinError(3,7.227704);
   htotpass_cat4_2016_fit_s__84->SetBinError(4,8.666243);
   htotpass_cat4_2016_fit_s__84->SetBinError(5,12.05455);
   htotpass_cat4_2016_fit_s__84->SetBinError(6,17.82573);
   htotpass_cat4_2016_fit_s__84->SetBinError(7,21.72867);
   htotpass_cat4_2016_fit_s__84->SetBinError(8,22.14161);
   htotpass_cat4_2016_fit_s__84->SetBinError(9,17.12699);
   htotpass_cat4_2016_fit_s__84->SetBinError(10,13.34541);
   htotpass_cat4_2016_fit_s__84->SetBinError(11,4.876585e-07);
   htotpass_cat4_2016_fit_s__84->SetBinError(12,4.876585e-07);
   htotpass_cat4_2016_fit_s__84->SetBinError(13,4.876585e-07);
   htotpass_cat4_2016_fit_s__84->SetBinError(14,8.65239);
   htotpass_cat4_2016_fit_s__84->SetBinError(15,5.513354);
   htotpass_cat4_2016_fit_s__84->SetBinError(16,5.626695);
   htotpass_cat4_2016_fit_s__84->SetBinError(17,4.34168);
   htotpass_cat4_2016_fit_s__84->SetBinError(18,3.568446);
   htotpass_cat4_2016_fit_s__84->SetBinError(19,3.661885);
   htotpass_cat4_2016_fit_s__84->SetBinError(20,3.183098);
   htotpass_cat4_2016_fit_s__84->SetBinError(21,2.755714);
   htotpass_cat4_2016_fit_s__84->SetBinError(22,2.675471);
   htotpass_cat4_2016_fit_s__84->SetBinError(23,2.649313);
   htotpass_cat4_2016_fit_s__84->SetMinimum(0);
   htotpass_cat4_2016_fit_s__84->SetMaximum(809.2137);
   htotpass_cat4_2016_fit_s__84->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__84->SetFillColor(ci);
   htotpass_cat4_2016_fit_s__84->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__84->SetLineColor(ci);
   htotpass_cat4_2016_fit_s__84->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s__84->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s__84->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s__84->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__84->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s__84->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__84->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s__84->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s__84->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s__84->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__84->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__84->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__84->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__84->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__84->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis21[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_21 = new TH1F("hstackMC_stack_21","hstackMC",23, xAxis21);
   hstackMC_stack_21->SetMinimum(-123.0395);
   hstackMC_stack_21->SetMaximum(179.9734);
   hstackMC_stack_21->SetDirectory(0);
   hstackMC_stack_21->SetStats(0);
   hstackMC_stack_21->SetLineStyle(0);
   hstackMC_stack_21->SetMarkerStyle(20);
   hstackMC_stack_21->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_21->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_21->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_21->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_21->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_21->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_21->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_21->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_21->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_21->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_21->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_21->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_21->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_21->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_21->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_21->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_21->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_21);
   
   Double_t xAxis22[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat4_2016_pass_cat4",23, xAxis22);
   tqq_stack_1->SetBinContent(2,4.503708);
   tqq_stack_1->SetBinContent(3,4.197763);
   tqq_stack_1->SetBinContent(4,4.180367);
   tqq_stack_1->SetBinContent(5,12.19902);
   tqq_stack_1->SetBinContent(6,19.90305);
   tqq_stack_1->SetBinContent(7,19.20242);
   tqq_stack_1->SetBinContent(8,19.54794);
   tqq_stack_1->SetBinContent(9,16.5215);
   tqq_stack_1->SetBinContent(10,16.88014);
   tqq_stack_1->SetBinContent(14,21.49896);
   tqq_stack_1->SetBinContent(15,8.461529);
   tqq_stack_1->SetBinContent(16,10.88289);
   tqq_stack_1->SetBinContent(17,5.902189);
   tqq_stack_1->SetBinContent(18,4.644143);
   tqq_stack_1->SetBinContent(19,5.889939);
   tqq_stack_1->SetBinContent(20,3.438652);
   tqq_stack_1->SetBinContent(21,2.429478);
   tqq_stack_1->SetBinContent(22,1.115);
   tqq_stack_1->SetBinError(2,1.441963);
   tqq_stack_1->SetBinError(3,1.344008);
   tqq_stack_1->SetBinError(4,1.338438);
   tqq_stack_1->SetBinError(5,3.90579);
   tqq_stack_1->SetBinError(6,6.372406);
   tqq_stack_1->SetBinError(7,6.148083);
   tqq_stack_1->SetBinError(8,6.258711);
   tqq_stack_1->SetBinError(9,5.289729);
   tqq_stack_1->SetBinError(10,5.404556);
   tqq_stack_1->SetBinError(14,6.883375);
   tqq_stack_1->SetBinError(15,2.709148);
   tqq_stack_1->SetBinError(16,3.484402);
   tqq_stack_1->SetBinError(17,1.889718);
   tqq_stack_1->SetBinError(18,1.486927);
   tqq_stack_1->SetBinError(19,1.885796);
   tqq_stack_1->SetBinError(20,1.100961);
   tqq_stack_1->SetBinError(21,0.7778519);
   tqq_stack_1->SetBinError(22,0.3569921);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat4_2016_pass_cat4",23,40,201);
   wqq_stack_2->SetBinContent(1,1.560025e-06);
   wqq_stack_2->SetBinContent(2,1.193822);
   wqq_stack_2->SetBinContent(3,2.125132);
   wqq_stack_2->SetBinContent(4,12.95741);
   wqq_stack_2->SetBinContent(5,32.41619);
   wqq_stack_2->SetBinContent(6,60.88798);
   wqq_stack_2->SetBinContent(7,70.32555);
   wqq_stack_2->SetBinContent(8,31.21016);
   wqq_stack_2->SetBinContent(9,9.788646);
   wqq_stack_2->SetBinContent(10,1.955795);
   wqq_stack_2->SetBinContent(11,1.560025e-06);
   wqq_stack_2->SetBinContent(12,1.560025e-06);
   wqq_stack_2->SetBinContent(13,1.560025e-06);
   wqq_stack_2->SetBinContent(14,1.560025e-06);
   wqq_stack_2->SetBinContent(15,1.560025e-06);
   wqq_stack_2->SetBinContent(16,1.560025e-06);
   wqq_stack_2->SetBinContent(17,1.560025e-06);
   wqq_stack_2->SetBinContent(18,1.560025e-06);
   wqq_stack_2->SetBinContent(19,1.560025e-06);
   wqq_stack_2->SetBinContent(20,1.560025e-06);
   wqq_stack_2->SetBinContent(21,1.560025e-06);
   wqq_stack_2->SetBinContent(22,1.560025e-06);
   wqq_stack_2->SetBinContent(23,1.560025e-06);
   wqq_stack_2->SetBinError(1,2.529837e-07);
   wqq_stack_2->SetBinError(2,0.3365744);
   wqq_stack_2->SetBinError(3,0.615705);
   wqq_stack_2->SetBinError(4,3.673226);
   wqq_stack_2->SetBinError(5,5.39184);
   wqq_stack_2->SetBinError(6,9.676341);
   wqq_stack_2->SetBinError(7,12.50422);
   wqq_stack_2->SetBinError(8,8.230813);
   wqq_stack_2->SetBinError(9,3.00949);
   wqq_stack_2->SetBinError(10,0.4327909);
   wqq_stack_2->SetBinError(11,2.529837e-07);
   wqq_stack_2->SetBinError(12,2.529837e-07);
   wqq_stack_2->SetBinError(13,2.529837e-07);
   wqq_stack_2->SetBinError(14,2.529837e-07);
   wqq_stack_2->SetBinError(15,2.529837e-07);
   wqq_stack_2->SetBinError(16,2.529837e-07);
   wqq_stack_2->SetBinError(17,2.529837e-07);
   wqq_stack_2->SetBinError(18,2.529837e-07);
   wqq_stack_2->SetBinError(19,2.529837e-07);
   wqq_stack_2->SetBinError(20,2.529837e-07);
   wqq_stack_2->SetBinError(21,2.529837e-07);
   wqq_stack_2->SetBinError(22,2.529837e-07);
   wqq_stack_2->SetBinError(23,2.529837e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat4_2016_pass_cat4",23,40,201);
   zqq_stack_3->SetBinContent(1,1.958355e-06);
   zqq_stack_3->SetBinContent(2,1.958355e-06);
   zqq_stack_3->SetBinContent(3,1.958355e-06);
   zqq_stack_3->SetBinContent(4,2.436313);
   zqq_stack_3->SetBinContent(5,13.84181);
   zqq_stack_3->SetBinContent(6,35.20446);
   zqq_stack_3->SetBinContent(7,59.49044);
   zqq_stack_3->SetBinContent(8,78.25017);
   zqq_stack_3->SetBinContent(9,59.76739);
   zqq_stack_3->SetBinContent(10,30.38327);
   zqq_stack_3->SetBinContent(11,1.958355e-06);
   zqq_stack_3->SetBinContent(12,1.958355e-06);
   zqq_stack_3->SetBinContent(13,1.958355e-06);
   zqq_stack_3->SetBinContent(14,0.3911226);
   zqq_stack_3->SetBinContent(15,1.958355e-06);
   zqq_stack_3->SetBinContent(16,1.958355e-06);
   zqq_stack_3->SetBinContent(17,1.958355e-06);
   zqq_stack_3->SetBinContent(18,1.958355e-06);
   zqq_stack_3->SetBinContent(19,1.958355e-06);
   zqq_stack_3->SetBinContent(20,1.958355e-06);
   zqq_stack_3->SetBinContent(21,1.958355e-06);
   zqq_stack_3->SetBinContent(22,1.958355e-06);
   zqq_stack_3->SetBinContent(23,1.958355e-06);
   zqq_stack_3->SetBinError(1,4.169053e-07);
   zqq_stack_3->SetBinError(2,4.169053e-07);
   zqq_stack_3->SetBinError(3,4.169053e-07);
   zqq_stack_3->SetBinError(4,0.9926502);
   zqq_stack_3->SetBinError(5,4.42514);
   zqq_stack_3->SetBinError(6,8.882908);
   zqq_stack_3->SetBinError(7,12.67612);
   zqq_stack_3->SetBinError(8,16.48218);
   zqq_stack_3->SetBinError(9,12.83463);
   zqq_stack_3->SetBinError(10,8.793706);
   zqq_stack_3->SetBinError(11,4.169053e-07);
   zqq_stack_3->SetBinError(12,4.169053e-07);
   zqq_stack_3->SetBinError(13,4.169053e-07);
   zqq_stack_3->SetBinError(14,0.3566065);
   zqq_stack_3->SetBinError(15,4.169053e-07);
   zqq_stack_3->SetBinError(16,4.169053e-07);
   zqq_stack_3->SetBinError(17,4.169053e-07);
   zqq_stack_3->SetBinError(18,4.169053e-07);
   zqq_stack_3->SetBinError(19,4.169053e-07);
   zqq_stack_3->SetBinError(20,4.169053e-07);
   zqq_stack_3->SetBinError(21,4.169053e-07);
   zqq_stack_3->SetBinError(22,4.169053e-07);
   zqq_stack_3->SetBinError(23,4.169053e-07);
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
   
   TH1F *hsigpass_cat4_2016_fit_s_stack_4 = new TH1F("hsigpass_cat4_2016_fit_s_stack_4","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(1,4.778996e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(2,1.529262);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(3,0.02118423);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(4,1.28466);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(5,0.138465);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(6,0.4591533);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(7,0.8134713);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(8,2.58478);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(9,6.626111);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(10,14.0059);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(11,4.778996e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(12,4.778996e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(13,4.778996e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(14,24.1819);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(15,12.02213);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(16,4.102798);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(17,0.3413821);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(18,0.05841304);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(19,0.04349223);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(20,0.01024331);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(21,0.02700407);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(22,0.007275095);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(23,0.01374738);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(1,2.94326e-06);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(2,11.61469);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(3,0.05279183);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(4,9.754345);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(5,0.8366628);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(6,2.271307);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(7,4.594234);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(8,15.52976);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(9,42.99103);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(10,85.0497);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(11,2.94326e-06);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(12,2.94326e-06);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(13,2.94326e-06);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(14,147.2214);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(15,74.8723);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(16,28.04687);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(17,2.311175);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(18,0.1437319);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(19,0.1036879);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(20,0.02598097);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(21,0.06769463);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(22,0.01823657);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinError(23,0.03446178);
   hsigpass_cat4_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3021[23] = {
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
   Double_t data_copy_fy3021[23] = {
   0,
   476,
   459,
   463,
   482,
   491,
   526,
   488,
   473,
   419,
   0,
   0,
   0,
   335,
   276,
   258,
   272,
   210,
   179,
   139,
   138,
   109,
   92};
   Double_t data_copy_felx3021[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3021[23] = {
   1.841055,
   22.8332,
   22.44034,
   22.53342,
   22.97018,
   23.17407,
   23.94975,
   23.10632,
   22.76439,
   21.48625,
   1.841055,
   1.841055,
   1.841055,
   19.32164,
   17.6337,
   17.08351,
   17.51302,
   15.51473,
   14.40433,
   12.8184,
   12.77601,
   11.4725,
   10.62667};
   Double_t data_copy_fehx3021[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3021[23] = {
   0,
   21.81023,
   21.41694,
   21.51013,
   21.94735,
   22.15145,
   22.92789,
   22.08363,
   21.74134,
   20.46176,
   0,
   0,
   0,
   18.29426,
   16.60353,
   16.05231,
   16.48263,
   14.48014,
   13.36686,
   11.77587,
   11.73334,
   10.42448,
   9.574395};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3021,data_copy_fy3021,data_copy_felx3021,data_copy_fehx3021,data_copy_fely3021,data_copy_fehy3021);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat4_2016_pass_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3021 = new TH1F("Graph_data_copy3021","tqq in cat4_2016_pass_cat4",100,28.1,212.9);
   Graph_data_copy3021->SetMinimum(0);
   Graph_data_copy3021->SetMaximum(604.0048);
   Graph_data_copy3021->SetDirectory(0);
   Graph_data_copy3021->SetStats(0);
   Graph_data_copy3021->SetLineStyle(0);
   Graph_data_copy3021->SetMarkerStyle(20);
   Graph_data_copy3021->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3021->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3021->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3021->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3021->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3021->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3021->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3021->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3021->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3021->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3021->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3021->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3021);
   
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
   entry=leg->AddEntry("htotpass_cat4_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat4_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"600 < p_{T} < 675 GeV");
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
   
   TH1F *htotpass_cat4_2016_fit_s_copy__85 = new TH1F("htotpass_cat4_2016_fit_s_copy__85","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(1,3.51838e-06);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(2,457.0735);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(3,467.7638);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(4,474.1996);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(5,497.1954);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(6,525.1616);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(7,539.4758);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(8,502.2375);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(9,434.2593);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(10,384.3191);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(11,3.51838e-06);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(12,3.51838e-06);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(13,3.51838e-06);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(14,295.3755);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(15,269.3494);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(16,247.6149);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(17,227.8398);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(18,199.3316);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(19,178.4496);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(20,151.4045);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(21,129.4438);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(22,108.0951);
   htotpass_cat4_2016_fit_s_copy__85->SetBinContent(23,86.21682);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(1,4.876585e-07);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(2,8.63534);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(3,7.227704);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(4,8.666243);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(5,12.05455);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(6,17.82573);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(7,21.72867);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(8,22.14161);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(9,17.12699);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(10,13.34541);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(11,4.876585e-07);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(12,4.876585e-07);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(13,4.876585e-07);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(14,8.65239);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(15,5.513354);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(16,5.626695);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(17,4.34168);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(18,3.568446);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(19,3.661885);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(20,3.183098);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(21,2.755714);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(22,2.675471);
   htotpass_cat4_2016_fit_s_copy__85->SetBinError(23,2.649313);
   htotpass_cat4_2016_fit_s_copy__85->SetMaximum(809.2137);
   htotpass_cat4_2016_fit_s_copy__85->SetEntries(92);
   htotpass_cat4_2016_fit_s_copy__85->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s_copy__85->SetFillColor(ci);
   htotpass_cat4_2016_fit_s_copy__85->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s_copy__85->SetLineColor(ci);
   htotpass_cat4_2016_fit_s_copy__85->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s_copy__85->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s_copy__85->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s_copy__85->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__85->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s_copy__85->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__85->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s_copy__85->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s_copy__85->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s_copy__85->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__85->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__85->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s_copy__85->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s_copy__85->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__85->Draw("sameaxis");
   p12pass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_fit_s
   TPad *p22pass_cat4_2016_fit_s = new TPad("p22pass_cat4_2016_fit_s", "p22pass_cat4_2016_fit_s",0,0,1,0.3);
   p22pass_cat4_2016_fit_s->Draw();
   p22pass_cat4_2016_fit_s->cd();
   p22pass_cat4_2016_fit_s->Range(13.7027,-10.6707,221.8108,8.231633);
   p22pass_cat4_2016_fit_s->SetFillColor(0);
   p22pass_cat4_2016_fit_s->SetBorderMode(0);
   p22pass_cat4_2016_fit_s->SetBorderSize(2);
   p22pass_cat4_2016_fit_s->SetTickx(1);
   p22pass_cat4_2016_fit_s->SetTicky(1);
   p22pass_cat4_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat4_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat4_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_s__86 = new TH1F("iOneWithErrorspass_cat4_2016_fit_s__86","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_s__86->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_s__86->SetMaximum(7.286516);
   iOneWithErrorspass_cat4_2016_fit_s__86->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__86->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__86->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__86->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__86->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__86->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__86->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s__86->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__86->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_22 = new TH1F("hstack_stack_22","hstack",23,40,201);
   hstack_stack_22->SetMinimum(-145.8996);
   hstack_stack_22->SetMaximum(155.9704);
   hstack_stack_22->SetDirectory(0);
   hstack_stack_22->SetStats(0);
   hstack_stack_22->SetLineStyle(0);
   hstack_stack_22->SetMarkerStyle(20);
   hstack_stack_22->GetXaxis()->SetLabelFont(42);
   hstack_stack_22->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_22->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_22->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_22->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_22->GetXaxis()->SetTitleFont(42);
   hstack_stack_22->GetYaxis()->SetLabelFont(42);
   hstack_stack_22->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_22->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_22->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_22->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_22->GetYaxis()->SetTitleFont(42);
   hstack_stack_22->GetZaxis()->SetLabelFont(42);
   hstack_stack_22->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_22->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_22->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_22->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_22);
   
   
   TH1F *sigHistResidualwqqpass_cat4_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat4_2016_fit_s_stack_1","wqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(2,0.0547368);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(3,0.09922671);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(4,0.6023865);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(5,1.476998);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(6,2.748713);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(7,3.067249);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(8,1.413271);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(9,0.4502319);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(10,0.09558293);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(14,8.527401e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(15,9.39574e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(16,9.718384e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(17,9.464659e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(18,1.077355e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(19,1.167084e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(20,1.324763e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(21,1.329566e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(22,1.496501e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(23,1.629372e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(1,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(2,0.3365744);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(3,0.615705);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(4,3.673226);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(5,5.39184);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(6,9.676341);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(7,12.50422);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(8,8.230813);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(9,3.00949);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(10,0.4327909);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(11,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(12,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(13,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(14,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(15,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(16,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(17,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(18,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(19,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(20,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(21,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(22,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinError(23,2.529837e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat4_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat4_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat4_2016_fit_s_stack_2","zqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(2,8.979065e-08);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(3,9.143952e-08);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(4,0.1132636);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(5,0.6306825);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(6,1.589262);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(7,2.594676);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(8,3.543357);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(9,2.74902);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(10,1.484881);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(14,0.02137953);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(15,1.179481e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(16,1.219983e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(17,1.188132e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(18,1.352442e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(19,1.465082e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(20,1.663023e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(21,1.669052e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(22,1.878611e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(23,2.045408e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(1,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(2,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(3,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(4,0.9926502);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(5,4.42514);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(6,8.882908);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(7,12.67612);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(8,16.48218);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(9,12.83463);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(10,8.793706);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(11,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(12,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(13,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(14,0.3566065);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(15,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(16,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(17,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(18,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(19,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(20,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(21,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(22,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinError(23,4.169053e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat4_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(2,0.07011675);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(3,0.0009891342);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(4,0.0597235);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(5,0.006308961);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(6,0.02072791);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(7,0.03547955);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(8,0.1170451);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(9,0.3047701);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(10,0.6844914);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(14,1.32183);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(15,0.7240706);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(16,0.2555893);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(17,0.02071162);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(18,0.004034011);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(19,0.003253735);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(20,0.0008698551);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(21,0.002301482);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(22,0.0006978854);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(23,0.001435849);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(1,2.94326e-06);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(2,11.61469);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(3,0.05279183);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(4,9.754345);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(5,0.8366628);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(6,2.271307);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(7,4.594234);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(8,15.52976);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(9,42.99103);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(10,85.0497);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(11,2.94326e-06);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(12,2.94326e-06);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(13,2.94326e-06);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(14,147.2214);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(15,74.8723);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(16,28.04687);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(17,2.311175);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(18,0.1437319);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(19,0.1036879);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(20,0.02598097);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(21,0.06769463);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(22,0.01823657);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinError(23,0.03446178);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_fit_s__87 = new TH1F("iOneWithErrorsLinepass_cat4_2016_fit_s__87","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__87->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fx3022[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fy3022[23] = {
   0,
   0.8811848,
   -0.3099715,
   0.186129,
   1.352303,
   2.672419,
   4.857677,
   4.121074,
   4.757287,
   3.119206,
   0,
   0,
   0,
   2.071024,
   0.3771547,
   0.6079002,
   2.521563,
   0.6876312,
   0.03821389,
   -1.053378,
   0.6697129,
   0.07887951,
   0.544214};
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_felx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fely3022[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fehx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fehy3022[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_fit_s_fx3022,Graph_from_iRatiopass_cat4_2016_fit_s_fy3022,Graph_from_iRatiopass_cat4_2016_fit_s_felx3022,Graph_from_iRatiopass_cat4_2016_fit_s_fehx3022,Graph_from_iRatiopass_cat4_2016_fit_s_fely3022,Graph_from_iRatiopass_cat4_2016_fit_s_fehy3022);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->SetMinimum(-2.844484);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->SetMaximum(6.648783);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_fit_s3022);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_s_copy__88 = new TH1F("iOneWithErrorspass_cat4_2016_fit_s_copy__88","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetMaximum(7.286516);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetEntries(184);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__88->Draw("sameaxis");
   p22pass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
   cpass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
   cpass_cat4_2016_fit_s->SetSelected(cpass_cat4_2016_fit_s);
}
