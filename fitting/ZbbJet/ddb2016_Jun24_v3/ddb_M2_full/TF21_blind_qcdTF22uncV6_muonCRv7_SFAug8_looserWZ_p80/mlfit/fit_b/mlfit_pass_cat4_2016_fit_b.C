void mlfit_pass_cat4_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat4_2016_fit_b/cpass_cat4_2016_fit_b
//=========  (Thu Sep 26 13:57:22 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_fit_b = new TCanvas("cpass_cat4_2016_fit_b", "cpass_cat4_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_fit_b->SetHighLightColor(2);
   cpass_cat4_2016_fit_b->Range(0,0,1,1);
   cpass_cat4_2016_fit_b->SetFillColor(0);
   cpass_cat4_2016_fit_b->SetBorderMode(0);
   cpass_cat4_2016_fit_b->SetBorderSize(2);
   cpass_cat4_2016_fit_b->SetTickx(1);
   cpass_cat4_2016_fit_b->SetTicky(1);
   cpass_cat4_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat4_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat4_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat4_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_fit_b
   TPad *p12pass_cat4_2016_fit_b = new TPad("p12pass_cat4_2016_fit_b", "p12pass_cat4_2016_fit_b",0,0.3,1,1);
   p12pass_cat4_2016_fit_b->Draw();
   p12pass_cat4_2016_fit_b->cd();
   p12pass_cat4_2016_fit_b->Range(13.7027,-18.49296,221.8108,906.1549);
   p12pass_cat4_2016_fit_b->SetFillColor(0);
   p12pass_cat4_2016_fit_b->SetBorderMode(0);
   p12pass_cat4_2016_fit_b->SetBorderSize(2);
   p12pass_cat4_2016_fit_b->SetTickx(1);
   p12pass_cat4_2016_fit_b->SetTicky(1);
   p12pass_cat4_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat4_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_fit_b__81 = new TH1F("htotpass_cat4_2016_fit_b__81","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_b__81->SetBinContent(1,3.308012e-06);
   htotpass_cat4_2016_fit_b__81->SetBinContent(2,456.7429);
   htotpass_cat4_2016_fit_b__81->SetBinContent(3,469.6584);
   htotpass_cat4_2016_fit_b__81->SetBinContent(4,475.8875);
   htotpass_cat4_2016_fit_b__81->SetBinContent(5,499.6877);
   htotpass_cat4_2016_fit_b__81->SetBinContent(6,527.366);
   htotpass_cat4_2016_fit_b__81->SetBinContent(7,542.4601);
   htotpass_cat4_2016_fit_b__81->SetBinContent(8,508.8793);
   htotpass_cat4_2016_fit_b__81->SetBinContent(9,443.6688);
   htotpass_cat4_2016_fit_b__81->SetBinContent(10,396.2229);
   htotpass_cat4_2016_fit_b__81->SetBinContent(11,3.308012e-06);
   htotpass_cat4_2016_fit_b__81->SetBinContent(12,3.308012e-06);
   htotpass_cat4_2016_fit_b__81->SetBinContent(13,3.308012e-06);
   htotpass_cat4_2016_fit_b__81->SetBinContent(14,307.1379);
   htotpass_cat4_2016_fit_b__81->SetBinContent(15,274.6237);
   htotpass_cat4_2016_fit_b__81->SetBinContent(16,253.4714);
   htotpass_cat4_2016_fit_b__81->SetBinContent(17,231.0367);
   htotpass_cat4_2016_fit_b__81->SetBinContent(18,201.5829);
   htotpass_cat4_2016_fit_b__81->SetBinContent(19,181.0176);
   htotpass_cat4_2016_fit_b__81->SetBinContent(20,152.6009);
   htotpass_cat4_2016_fit_b__81->SetBinContent(21,130.015);
   htotpass_cat4_2016_fit_b__81->SetBinContent(22,107.9673);
   htotpass_cat4_2016_fit_b__81->SetBinContent(23,85.52032);
   htotpass_cat4_2016_fit_b__81->SetBinError(1,4.781007e-07);
   htotpass_cat4_2016_fit_b__81->SetBinError(2,9.716854);
   htotpass_cat4_2016_fit_b__81->SetBinError(3,8.168653);
   htotpass_cat4_2016_fit_b__81->SetBinError(4,10.58582);
   htotpass_cat4_2016_fit_b__81->SetBinError(5,15.18549);
   htotpass_cat4_2016_fit_b__81->SetBinError(6,22.22754);
   htotpass_cat4_2016_fit_b__81->SetBinError(7,26.508);
   htotpass_cat4_2016_fit_b__81->SetBinError(8,26.73665);
   htotpass_cat4_2016_fit_b__81->SetBinError(9,22.14198);
   htotpass_cat4_2016_fit_b__81->SetBinError(10,18.57016);
   htotpass_cat4_2016_fit_b__81->SetBinError(11,4.781007e-07);
   htotpass_cat4_2016_fit_b__81->SetBinError(12,4.781007e-07);
   htotpass_cat4_2016_fit_b__81->SetBinError(13,4.781007e-07);
   htotpass_cat4_2016_fit_b__81->SetBinError(14,16.60581);
   htotpass_cat4_2016_fit_b__81->SetBinError(15,9.097812);
   htotpass_cat4_2016_fit_b__81->SetBinError(16,9.727453);
   htotpass_cat4_2016_fit_b__81->SetBinError(17,6.90965);
   htotpass_cat4_2016_fit_b__81->SetBinError(18,5.612524);
   htotpass_cat4_2016_fit_b__81->SetBinError(19,5.75851);
   htotpass_cat4_2016_fit_b__81->SetBinError(20,4.215817);
   htotpass_cat4_2016_fit_b__81->SetBinError(21,3.705665);
   htotpass_cat4_2016_fit_b__81->SetBinError(22,3.122251);
   htotpass_cat4_2016_fit_b__81->SetBinError(23,2.920981);
   htotpass_cat4_2016_fit_b__81->SetMinimum(0);
   htotpass_cat4_2016_fit_b__81->SetMaximum(813.6901);
   htotpass_cat4_2016_fit_b__81->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b__81->SetFillColor(ci);
   htotpass_cat4_2016_fit_b__81->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b__81->SetLineColor(ci);
   htotpass_cat4_2016_fit_b__81->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_b__81->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_b__81->SetMarkerSize(0);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_b__81->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__81->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_b__81->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__81->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_b__81->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_b__81->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_b__81->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__81->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__81->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b__81->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b__81->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__81->Draw("");
   
   TH1F *htot_linepass_cat4_2016_fit_b__82 = new TH1F("htot_linepass_cat4_2016_fit_b__82","wqq in cat4_2016_pass_cat4",23,40,201);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(1,3.308012e-06);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(2,456.7429);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(3,469.6584);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(4,475.8875);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(5,499.6877);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(6,527.366);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(7,542.4601);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(8,508.8793);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(9,443.6688);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(10,396.2229);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(11,3.308012e-06);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(12,3.308012e-06);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(13,3.308012e-06);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(14,307.1379);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(15,274.6237);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(16,253.4714);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(17,231.0367);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(18,201.5829);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(19,181.0176);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(20,152.6009);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(21,130.015);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(22,107.9673);
   htot_linepass_cat4_2016_fit_b__82->SetBinContent(23,85.52032);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(1,4.781007e-07);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(2,9.716854);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(3,8.168653);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(4,10.58582);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(5,15.18549);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(6,22.22754);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(7,26.508);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(8,26.73665);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(9,22.14198);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(10,18.57016);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(11,4.781007e-07);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(12,4.781007e-07);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(13,4.781007e-07);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(14,16.60581);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(15,9.097812);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(16,9.727453);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(17,6.90965);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(18,5.612524);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(19,5.75851);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(20,4.215817);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(21,3.705665);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(22,3.122251);
   htot_linepass_cat4_2016_fit_b__82->SetBinError(23,2.920981);
   htot_linepass_cat4_2016_fit_b__82->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_b__82->SetFillColor(ci);
   htot_linepass_cat4_2016_fit_b__82->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_b__82->SetLineColor(ci);
   htot_linepass_cat4_2016_fit_b__82->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat4_2016_fit_b__82->SetMarkerColor(ci);
   htot_linepass_cat4_2016_fit_b__82->SetMarkerSize(0);
   htot_linepass_cat4_2016_fit_b__82->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat4_2016_fit_b__82->GetXaxis()->SetRange(2,23);
   htot_linepass_cat4_2016_fit_b__82->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_b__82->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_b__82->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_b__82->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_b__82->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat4_2016_fit_b__82->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_b__82->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat4_2016_fit_b__82->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat4_2016_fit_b__82->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat4_2016_fit_b__82->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_b__82->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_b__82->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_b__82->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_b__82->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_b__82->Draw("histsame");
   
   TH1F *qcd__83 = new TH1F("qcd__83","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__83->SetBinContent(2,448.9526);
   qcd__83->SetBinContent(3,461.4314);
   qcd__83->SetBinContent(4,456.549);
   qcd__83->SetBinContent(5,442.476);
   qcd__83->SetBinContent(6,412.541);
   qcd__83->SetBinContent(7,392.0356);
   qcd__83->SetBinContent(8,374.7118);
   qcd__83->SetBinContent(9,350.2236);
   qcd__83->SetBinContent(10,337.7285);
   qcd__83->SetBinContent(14,275.2339);
   qcd__83->SetBinContent(15,262.2181);
   qcd__83->SetBinContent(16,237.5158);
   qcd__83->SetBinContent(17,222.3834);
   qcd__83->SetBinContent(18,194.7741);
   qcd__83->SetBinContent(19,172.3823);
   qcd__83->SetBinContent(20,147.5595);
   qcd__83->SetBinContent(21,126.4531);
   qcd__83->SetBinContent(22,106.3326);
   qcd__83->SetBinContent(23,85.52032);
   qcd__83->SetBinError(2,9.203062);
   qcd__83->SetBinError(3,7.594432);
   qcd__83->SetBinError(4,9.144212);
   qcd__83->SetBinError(5,10.93556);
   qcd__83->SetBinError(6,12.67925);
   qcd__83->SetBinError(7,14.78326);
   qcd__83->SetBinError(8,14.02129);
   qcd__83->SetBinError(9,13.24599);
   qcd__83->SetBinError(10,11.41868);
   qcd__83->SetBinError(14,7.613984);
   qcd__83->SetBinError(15,7.003838);
   qcd__83->SetBinError(16,6.232915);
   qcd__83->SetBinError(17,5.59808);
   qcd__83->SetBinError(18,4.619922);
   qcd__83->SetBinError(19,4.101669);
   qcd__83->SetBinError(20,3.493543);
   qcd__83->SetBinError(21,3.309446);
   qcd__83->SetBinError(22,3.027044);
   qcd__83->SetBinError(23,2.920981);
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
   
   TH1F *htotpass_cat4_2016_fit_b__84 = new TH1F("htotpass_cat4_2016_fit_b__84","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_b__84->SetBinContent(1,3.308012e-06);
   htotpass_cat4_2016_fit_b__84->SetBinContent(2,456.7429);
   htotpass_cat4_2016_fit_b__84->SetBinContent(3,469.6584);
   htotpass_cat4_2016_fit_b__84->SetBinContent(4,475.8875);
   htotpass_cat4_2016_fit_b__84->SetBinContent(5,499.6877);
   htotpass_cat4_2016_fit_b__84->SetBinContent(6,527.366);
   htotpass_cat4_2016_fit_b__84->SetBinContent(7,542.4601);
   htotpass_cat4_2016_fit_b__84->SetBinContent(8,508.8793);
   htotpass_cat4_2016_fit_b__84->SetBinContent(9,443.6688);
   htotpass_cat4_2016_fit_b__84->SetBinContent(10,396.2229);
   htotpass_cat4_2016_fit_b__84->SetBinContent(11,3.308012e-06);
   htotpass_cat4_2016_fit_b__84->SetBinContent(12,3.308012e-06);
   htotpass_cat4_2016_fit_b__84->SetBinContent(13,3.308012e-06);
   htotpass_cat4_2016_fit_b__84->SetBinContent(14,307.1379);
   htotpass_cat4_2016_fit_b__84->SetBinContent(15,274.6237);
   htotpass_cat4_2016_fit_b__84->SetBinContent(16,253.4714);
   htotpass_cat4_2016_fit_b__84->SetBinContent(17,231.0367);
   htotpass_cat4_2016_fit_b__84->SetBinContent(18,201.5829);
   htotpass_cat4_2016_fit_b__84->SetBinContent(19,181.0176);
   htotpass_cat4_2016_fit_b__84->SetBinContent(20,152.6009);
   htotpass_cat4_2016_fit_b__84->SetBinContent(21,130.015);
   htotpass_cat4_2016_fit_b__84->SetBinContent(22,107.9673);
   htotpass_cat4_2016_fit_b__84->SetBinContent(23,85.52032);
   htotpass_cat4_2016_fit_b__84->SetBinError(1,4.781007e-07);
   htotpass_cat4_2016_fit_b__84->SetBinError(2,9.716854);
   htotpass_cat4_2016_fit_b__84->SetBinError(3,8.168653);
   htotpass_cat4_2016_fit_b__84->SetBinError(4,10.58582);
   htotpass_cat4_2016_fit_b__84->SetBinError(5,15.18549);
   htotpass_cat4_2016_fit_b__84->SetBinError(6,22.22754);
   htotpass_cat4_2016_fit_b__84->SetBinError(7,26.508);
   htotpass_cat4_2016_fit_b__84->SetBinError(8,26.73665);
   htotpass_cat4_2016_fit_b__84->SetBinError(9,22.14198);
   htotpass_cat4_2016_fit_b__84->SetBinError(10,18.57016);
   htotpass_cat4_2016_fit_b__84->SetBinError(11,4.781007e-07);
   htotpass_cat4_2016_fit_b__84->SetBinError(12,4.781007e-07);
   htotpass_cat4_2016_fit_b__84->SetBinError(13,4.781007e-07);
   htotpass_cat4_2016_fit_b__84->SetBinError(14,16.60581);
   htotpass_cat4_2016_fit_b__84->SetBinError(15,9.097812);
   htotpass_cat4_2016_fit_b__84->SetBinError(16,9.727453);
   htotpass_cat4_2016_fit_b__84->SetBinError(17,6.90965);
   htotpass_cat4_2016_fit_b__84->SetBinError(18,5.612524);
   htotpass_cat4_2016_fit_b__84->SetBinError(19,5.75851);
   htotpass_cat4_2016_fit_b__84->SetBinError(20,4.215817);
   htotpass_cat4_2016_fit_b__84->SetBinError(21,3.705665);
   htotpass_cat4_2016_fit_b__84->SetBinError(22,3.122251);
   htotpass_cat4_2016_fit_b__84->SetBinError(23,2.920981);
   htotpass_cat4_2016_fit_b__84->SetMinimum(0);
   htotpass_cat4_2016_fit_b__84->SetMaximum(813.6901);
   htotpass_cat4_2016_fit_b__84->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b__84->SetFillColor(ci);
   htotpass_cat4_2016_fit_b__84->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b__84->SetLineColor(ci);
   htotpass_cat4_2016_fit_b__84->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_b__84->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_b__84->SetMarkerSize(0);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_b__84->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__84->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_b__84->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__84->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_b__84->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_b__84->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_b__84->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__84->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__84->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b__84->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b__84->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__84->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis21[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_21 = new TH1F("hstackMC_stack_21","hstackMC",23, xAxis21);
   hstackMC_stack_21->SetMinimum(0);
   hstackMC_stack_21->SetMaximum(157.9457);
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
   tqq_stack_1->SetBinContent(2,6.602961);
   tqq_stack_1->SetBinContent(3,6.154409);
   tqq_stack_1->SetBinContent(4,6.128905);
   tqq_stack_1->SetBinContent(5,17.88518);
   tqq_stack_1->SetBinContent(6,29.18019);
   tqq_stack_1->SetBinContent(7,28.15298);
   tqq_stack_1->SetBinContent(8,28.65956);
   tqq_stack_1->SetBinContent(9,24.22245);
   tqq_stack_1->SetBinContent(10,24.74825);
   tqq_stack_1->SetBinContent(14,31.51998);
   tqq_stack_1->SetBinContent(15,12.40559);
   tqq_stack_1->SetBinContent(16,15.95559);
   tqq_stack_1->SetBinContent(17,8.653298);
   tqq_stack_1->SetBinContent(18,6.808855);
   tqq_stack_1->SetBinContent(19,8.635338);
   tqq_stack_1->SetBinContent(20,5.041464);
   tqq_stack_1->SetBinContent(21,3.561898);
   tqq_stack_1->SetBinContent(22,1.63472);
   tqq_stack_1->SetBinError(2,3.090596);
   tqq_stack_1->SetBinError(3,2.880645);
   tqq_stack_1->SetBinError(4,2.868708);
   tqq_stack_1->SetBinError(5,8.371375);
   tqq_stack_1->SetBinError(6,13.65814);
   tqq_stack_1->SetBinError(7,13.17734);
   tqq_stack_1->SetBinError(8,13.41445);
   tqq_stack_1->SetBinError(9,11.33761);
   tqq_stack_1->SetBinError(10,11.58372);
   tqq_stack_1->SetBinError(14,14.75331);
   tqq_stack_1->SetBinError(15,5.806585);
   tqq_stack_1->SetBinError(16,7.468207);
   tqq_stack_1->SetBinError(17,4.05028);
   tqq_stack_1->SetBinError(18,3.186966);
   tqq_stack_1->SetBinError(19,4.041874);
   tqq_stack_1->SetBinError(20,2.359718);
   tqq_stack_1->SetBinError(21,1.66719);
   tqq_stack_1->SetBinError(22,0.7651503);
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
   wqq_stack_2->SetBinContent(1,1.608278e-06);
   wqq_stack_2->SetBinContent(2,1.187287);
   wqq_stack_2->SetBinContent(3,2.072608);
   wqq_stack_2->SetBinContent(4,11.49641);
   wqq_stack_2->SetBinContent(5,29.18008);
   wqq_stack_2->SetBinContent(6,58.33139);
   wqq_stack_2->SetBinContent(7,74.95305);
   wqq_stack_2->SetBinContent(8,38.10367);
   wqq_stack_2->SetBinContent(9,12.13315);
   wqq_stack_2->SetBinContent(10,2.296336);
   wqq_stack_2->SetBinContent(11,1.608278e-06);
   wqq_stack_2->SetBinContent(12,1.608278e-06);
   wqq_stack_2->SetBinContent(13,1.608278e-06);
   wqq_stack_2->SetBinContent(14,1.608278e-06);
   wqq_stack_2->SetBinContent(15,1.608278e-06);
   wqq_stack_2->SetBinContent(16,1.608278e-06);
   wqq_stack_2->SetBinContent(17,1.608278e-06);
   wqq_stack_2->SetBinContent(18,1.608278e-06);
   wqq_stack_2->SetBinContent(19,1.608278e-06);
   wqq_stack_2->SetBinContent(20,1.608278e-06);
   wqq_stack_2->SetBinContent(21,1.608278e-06);
   wqq_stack_2->SetBinContent(22,1.608278e-06);
   wqq_stack_2->SetBinContent(23,1.608278e-06);
   wqq_stack_2->SetBinError(1,2.689468e-07);
   wqq_stack_2->SetBinError(2,0.4112278);
   wqq_stack_2->SetBinError(3,0.8679702);
   wqq_stack_2->SetBinError(4,4.396139);
   wqq_stack_2->SetBinError(5,5.042717);
   wqq_stack_2->SetBinError(6,9.261659);
   wqq_stack_2->SetBinError(7,12.74445);
   wqq_stack_2->SetBinError(8,10.02208);
   wqq_stack_2->SetBinError(9,4.440373);
   wqq_stack_2->SetBinError(10,0.5588541);
   wqq_stack_2->SetBinError(11,2.689468e-07);
   wqq_stack_2->SetBinError(12,2.689468e-07);
   wqq_stack_2->SetBinError(13,2.689468e-07);
   wqq_stack_2->SetBinError(14,2.689468e-07);
   wqq_stack_2->SetBinError(15,2.689468e-07);
   wqq_stack_2->SetBinError(16,2.689468e-07);
   wqq_stack_2->SetBinError(17,2.689468e-07);
   wqq_stack_2->SetBinError(18,2.689468e-07);
   wqq_stack_2->SetBinError(19,2.689468e-07);
   wqq_stack_2->SetBinError(20,2.689468e-07);
   wqq_stack_2->SetBinError(21,2.689468e-07);
   wqq_stack_2->SetBinError(22,2.689468e-07);
   wqq_stack_2->SetBinError(23,2.689468e-07);
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
   zqq_stack_3->SetBinContent(1,1.699734e-06);
   zqq_stack_3->SetBinContent(2,1.699734e-06);
   zqq_stack_3->SetBinContent(3,1.699734e-06);
   zqq_stack_3->SetBinContent(4,1.713107);
   zqq_stack_3->SetBinContent(5,10.14642);
   zqq_stack_3->SetBinContent(6,27.31339);
   zqq_stack_3->SetBinContent(7,47.31844);
   zqq_stack_3->SetBinContent(8,67.40433);
   zqq_stack_3->SetBinContent(9,57.0896);
   zqq_stack_3->SetBinContent(10,31.4498);
   zqq_stack_3->SetBinContent(11,1.699734e-06);
   zqq_stack_3->SetBinContent(12,1.699734e-06);
   zqq_stack_3->SetBinContent(13,1.699734e-06);
   zqq_stack_3->SetBinContent(14,0.384067);
   zqq_stack_3->SetBinContent(15,1.699734e-06);
   zqq_stack_3->SetBinContent(16,1.699734e-06);
   zqq_stack_3->SetBinContent(17,1.699734e-06);
   zqq_stack_3->SetBinContent(18,1.699734e-06);
   zqq_stack_3->SetBinContent(19,1.699734e-06);
   zqq_stack_3->SetBinContent(20,1.699734e-06);
   zqq_stack_3->SetBinContent(21,1.699734e-06);
   zqq_stack_3->SetBinContent(22,1.699734e-06);
   zqq_stack_3->SetBinContent(23,1.699734e-06);
   zqq_stack_3->SetBinError(1,3.952821e-07);
   zqq_stack_3->SetBinError(2,3.952821e-07);
   zqq_stack_3->SetBinError(3,3.952821e-07);
   zqq_stack_3->SetBinError(4,0.9420295);
   zqq_stack_3->SetBinError(5,3.937476);
   zqq_stack_3->SetBinError(6,7.808785);
   zqq_stack_3->SetBinError(7,12.16824);
   zqq_stack_3->SetBinError(8,15.42279);
   zqq_stack_3->SetBinError(9,12.90552);
   zqq_stack_3->SetBinError(10,8.942592);
   zqq_stack_3->SetBinError(11,3.952821e-07);
   zqq_stack_3->SetBinError(12,3.952821e-07);
   zqq_stack_3->SetBinError(13,3.952821e-07);
   zqq_stack_3->SetBinError(14,0.3464948);
   zqq_stack_3->SetBinError(15,3.952821e-07);
   zqq_stack_3->SetBinError(16,3.952821e-07);
   zqq_stack_3->SetBinError(17,3.952821e-07);
   zqq_stack_3->SetBinError(18,3.952821e-07);
   zqq_stack_3->SetBinError(19,3.952821e-07);
   zqq_stack_3->SetBinError(20,3.952821e-07);
   zqq_stack_3->SetBinError(21,3.952821e-07);
   zqq_stack_3->SetBinError(22,3.952821e-07);
   zqq_stack_3->SetBinError(23,3.952821e-07);
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
   
   TH1F *hsigpass_cat4_2016_fit_b_stack_4 = new TH1F("hsigpass_cat4_2016_fit_b_stack_4","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_fit_b_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat4_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat4_2016_fit_b_copy__85 = new TH1F("htotpass_cat4_2016_fit_b_copy__85","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(1,3.308012e-06);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(2,456.7429);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(3,469.6584);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(4,475.8875);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(5,499.6877);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(6,527.366);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(7,542.4601);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(8,508.8793);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(9,443.6688);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(10,396.2229);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(11,3.308012e-06);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(12,3.308012e-06);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(13,3.308012e-06);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(14,307.1379);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(15,274.6237);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(16,253.4714);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(17,231.0367);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(18,201.5829);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(19,181.0176);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(20,152.6009);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(21,130.015);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(22,107.9673);
   htotpass_cat4_2016_fit_b_copy__85->SetBinContent(23,85.52032);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(1,4.781007e-07);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(2,9.716854);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(3,8.168653);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(4,10.58582);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(5,15.18549);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(6,22.22754);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(7,26.508);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(8,26.73665);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(9,22.14198);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(10,18.57016);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(11,4.781007e-07);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(12,4.781007e-07);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(13,4.781007e-07);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(14,16.60581);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(15,9.097812);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(16,9.727453);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(17,6.90965);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(18,5.612524);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(19,5.75851);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(20,4.215817);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(21,3.705665);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(22,3.122251);
   htotpass_cat4_2016_fit_b_copy__85->SetBinError(23,2.920981);
   htotpass_cat4_2016_fit_b_copy__85->SetMaximum(813.6901);
   htotpass_cat4_2016_fit_b_copy__85->SetEntries(92);
   htotpass_cat4_2016_fit_b_copy__85->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b_copy__85->SetFillColor(ci);
   htotpass_cat4_2016_fit_b_copy__85->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b_copy__85->SetLineColor(ci);
   htotpass_cat4_2016_fit_b_copy__85->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_b_copy__85->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_b_copy__85->SetMarkerSize(0);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_b_copy__85->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b_copy__85->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_b_copy__85->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b_copy__85->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_b_copy__85->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_b_copy__85->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_b_copy__85->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b_copy__85->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b_copy__85->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b_copy__85->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b_copy__85->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b_copy__85->Draw("sameaxis");
   p12pass_cat4_2016_fit_b->Modified();
   cpass_cat4_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_fit_b
   TPad *p22pass_cat4_2016_fit_b = new TPad("p22pass_cat4_2016_fit_b", "p22pass_cat4_2016_fit_b",0,0,1,0.3);
   p22pass_cat4_2016_fit_b->Draw();
   p22pass_cat4_2016_fit_b->cd();
   p22pass_cat4_2016_fit_b->Range(13.7027,-10.36635,221.8108,7.52148);
   p22pass_cat4_2016_fit_b->SetFillColor(0);
   p22pass_cat4_2016_fit_b->SetBorderMode(0);
   p22pass_cat4_2016_fit_b->SetBorderSize(2);
   p22pass_cat4_2016_fit_b->SetTickx(1);
   p22pass_cat4_2016_fit_b->SetTicky(1);
   p22pass_cat4_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat4_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat4_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_b__86 = new TH1F("iOneWithErrorspass_cat4_2016_fit_b__86","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_b__86->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_b__86->SetMaximum(6.627089);
   iOneWithErrorspass_cat4_2016_fit_b__86->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b__86->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__86->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b__86->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__86->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b__86->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__86->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b__86->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__86->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_22 = new TH1F("hstack_stack_22","hstack",23,40,201);
   hstack_stack_22->SetMinimum(-12.37055);
   hstack_stack_22->SetMaximum(19.39877);
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
   
   
   TH1F *sigHistResidualwqqpass_cat4_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat4_2016_fit_b_stack_1","wqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(2,0.05443718);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(3,0.09677423);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(4,0.5344649);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(5,1.329549);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(6,2.633299);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(7,3.269077);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(8,1.725426);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(9,0.5580681);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(10,0.1122257);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(14,8.791162e-08);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(15,9.686359e-08);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(16,1.001898e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(17,9.757409e-08);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(18,1.110678e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(19,1.203183e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(20,1.36574e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(21,1.370691e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(22,1.542789e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinContent(23,1.67977e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(1,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(2,0.4112278);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(3,0.8679702);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(4,4.396139);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(5,5.042717);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(6,9.261659);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(7,12.74445);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(8,10.02208);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(9,4.440373);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(10,0.5588541);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(11,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(12,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(13,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(14,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(15,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(16,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(17,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(18,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(19,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(20,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(21,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(22,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetBinError(23,2.689468e-07);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat4_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat4_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat4_2016_fit_b_stack_2","zqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(2,7.79329e-08);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(3,7.936401e-08);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(4,0.07964186);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(5,0.4623074);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(6,1.233029);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(7,2.063794);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(8,3.052231);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(9,2.625854);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(10,1.537004);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(14,0.02099385);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(15,1.023718e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(16,1.058872e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(17,1.031227e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(18,1.173838e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(19,1.271603e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(20,1.443404e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(21,1.448637e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(22,1.630521e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinContent(23,1.775291e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(1,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(2,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(3,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(4,0.9420295);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(5,3.937476);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(6,7.808785);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(7,12.16824);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(8,15.42279);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(9,12.90552);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(10,8.942592);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(11,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(12,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(13,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(14,0.3464948);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(15,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(16,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(17,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(18,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(19,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(20,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(21,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(22,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetBinError(23,3.952821e-07);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat4_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_fit_b__87 = new TH1F("iOneWithErrorsLinepass_cat4_2016_fit_b__87","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__87->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fx3022[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fy3022[23] = {
   0,
   0.8953802,
   -0.400889,
   0.01429219,
   0.942041,
   2.126465,
   4.418059,
   3.662577,
   4.329303,
   2.63067,
   0,
   0,
   0,
   1.461892,
   0.07805009,
   0.2650893,
   2.33902,
   0.5425212,
   -0.1509411,
   -1.154982,
   0.6250031,
   0.0900152,
   0.6097568};
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_felx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fely3022[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fehx3022[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fehy3022[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_fit_b_fx3022,Graph_from_iRatiopass_cat4_2016_fit_b_fy3022,Graph_from_iRatiopass_cat4_2016_fit_b_felx3022,Graph_from_iRatiopass_cat4_2016_fit_b_fehx3022,Graph_from_iRatiopass_cat4_2016_fit_b_fely3022,Graph_from_iRatiopass_cat4_2016_fit_b_fehy3022);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->SetMinimum(-2.912286);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->SetMaximum(6.175363);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_fit_b3022);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_b_copy__88 = new TH1F("iOneWithErrorspass_cat4_2016_fit_b_copy__88","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetMaximum(6.627089);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetEntries(184);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__88->Draw("sameaxis");
   p22pass_cat4_2016_fit_b->Modified();
   cpass_cat4_2016_fit_b->cd();
   cpass_cat4_2016_fit_b->Modified();
   cpass_cat4_2016_fit_b->cd();
   cpass_cat4_2016_fit_b->SetSelected(cpass_cat4_2016_fit_b);
}
