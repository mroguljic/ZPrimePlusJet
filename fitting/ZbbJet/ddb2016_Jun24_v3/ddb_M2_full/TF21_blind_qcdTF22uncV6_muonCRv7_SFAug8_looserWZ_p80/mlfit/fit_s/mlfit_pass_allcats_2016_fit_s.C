void mlfit_pass_allcats_2016_fit_s()
{
//=========Macro generated from canvas: cpass_allcats_2016_fit_s/cpass_allcats_2016_fit_s
//=========  (Thu Sep 26 13:57:45 2019) by ROOT version 6.12/07
   TCanvas *cpass_allcats_2016_fit_s = new TCanvas("cpass_allcats_2016_fit_s", "cpass_allcats_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_allcats_2016_fit_s->SetHighLightColor(2);
   cpass_allcats_2016_fit_s->Range(0,0,1,1);
   cpass_allcats_2016_fit_s->SetFillColor(0);
   cpass_allcats_2016_fit_s->SetBorderMode(0);
   cpass_allcats_2016_fit_s->SetBorderSize(2);
   cpass_allcats_2016_fit_s->SetTickx(1);
   cpass_allcats_2016_fit_s->SetTicky(1);
   cpass_allcats_2016_fit_s->SetLeftMargin(0.16);
   cpass_allcats_2016_fit_s->SetBottomMargin(0.13);
   cpass_allcats_2016_fit_s->SetFrameFillStyle(0);
   cpass_allcats_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_allcats_2016_fit_s
   TPad *p12pass_allcats_2016_fit_s = new TPad("p12pass_allcats_2016_fit_s", "p12pass_allcats_2016_fit_s",0,0.3,1,1);
   p12pass_allcats_2016_fit_s->Draw();
   p12pass_allcats_2016_fit_s->cd();
   p12pass_allcats_2016_fit_s->Range(13.7027,-196.6225,221.8108,9634.503);
   p12pass_allcats_2016_fit_s->SetFillColor(0);
   p12pass_allcats_2016_fit_s->SetBorderMode(0);
   p12pass_allcats_2016_fit_s->SetBorderSize(2);
   p12pass_allcats_2016_fit_s->SetTickx(1);
   p12pass_allcats_2016_fit_s->SetTicky(1);
   p12pass_allcats_2016_fit_s->SetLeftMargin(0.16);
   p12pass_allcats_2016_fit_s->SetBottomMargin(0.02);
   p12pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   p12pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_allcats_2016_fit_s__145 = new TH1F("htotpass_allcats_2016_fit_s__145","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s__145->SetBinContent(1,2.863072e-05);
   htotpass_allcats_2016_fit_s__145->SetBinContent(2,5051.949);
   htotpass_allcats_2016_fit_s__145->SetBinContent(3,5312.205);
   htotpass_allcats_2016_fit_s__145->SetBinContent(4,5346.03);
   htotpass_allcats_2016_fit_s__145->SetBinContent(5,5377.378);
   htotpass_allcats_2016_fit_s__145->SetBinContent(6,5628.481);
   htotpass_allcats_2016_fit_s__145->SetBinContent(7,5767.594);
   htotpass_allcats_2016_fit_s__145->SetBinContent(8,5529.228);
   htotpass_allcats_2016_fit_s__145->SetBinContent(9,4859.543);
   htotpass_allcats_2016_fit_s__145->SetBinContent(10,4314.763);
   htotpass_allcats_2016_fit_s__145->SetBinContent(11,2.863072e-05);
   htotpass_allcats_2016_fit_s__145->SetBinContent(12,2.863072e-05);
   htotpass_allcats_2016_fit_s__145->SetBinContent(13,2.863072e-05);
   htotpass_allcats_2016_fit_s__145->SetBinContent(14,2815.08);
   htotpass_allcats_2016_fit_s__145->SetBinContent(15,2439.427);
   htotpass_allcats_2016_fit_s__145->SetBinContent(16,2090.499);
   htotpass_allcats_2016_fit_s__145->SetBinContent(17,1760.061);
   htotpass_allcats_2016_fit_s__145->SetBinContent(18,1455.072);
   htotpass_allcats_2016_fit_s__145->SetBinContent(19,833.8773);
   htotpass_allcats_2016_fit_s__145->SetBinContent(20,705.9816);
   htotpass_allcats_2016_fit_s__145->SetBinContent(21,414.4832);
   htotpass_allcats_2016_fit_s__145->SetBinContent(22,345.6215);
   htotpass_allcats_2016_fit_s__145->SetBinContent(23,285.459);
   htotpass_allcats_2016_fit_s__145->SetBinError(1,1.877938e-06);
   htotpass_allcats_2016_fit_s__145->SetBinError(2,37.36932);
   htotpass_allcats_2016_fit_s__145->SetBinError(3,32.43653);
   htotpass_allcats_2016_fit_s__145->SetBinError(4,35.88177);
   htotpass_allcats_2016_fit_s__145->SetBinError(5,43.49277);
   htotpass_allcats_2016_fit_s__145->SetBinError(6,64.27963);
   htotpass_allcats_2016_fit_s__145->SetBinError(7,86.92374);
   htotpass_allcats_2016_fit_s__145->SetBinError(8,94.63957);
   htotpass_allcats_2016_fit_s__145->SetBinError(9,74.03072);
   htotpass_allcats_2016_fit_s__145->SetBinError(10,55.36106);
   htotpass_allcats_2016_fit_s__145->SetBinError(11,1.877938e-06);
   htotpass_allcats_2016_fit_s__145->SetBinError(12,1.877938e-06);
   htotpass_allcats_2016_fit_s__145->SetBinError(13,1.877938e-06);
   htotpass_allcats_2016_fit_s__145->SetBinError(14,29.89127);
   htotpass_allcats_2016_fit_s__145->SetBinError(15,23.96098);
   htotpass_allcats_2016_fit_s__145->SetBinError(16,19.50909);
   htotpass_allcats_2016_fit_s__145->SetBinError(17,16.26831);
   htotpass_allcats_2016_fit_s__145->SetBinError(18,14.16978);
   htotpass_allcats_2016_fit_s__145->SetBinError(19,7.659189);
   htotpass_allcats_2016_fit_s__145->SetBinError(20,7.155702);
   htotpass_allcats_2016_fit_s__145->SetBinError(21,5.285759);
   htotpass_allcats_2016_fit_s__145->SetBinError(22,5.041276);
   htotpass_allcats_2016_fit_s__145->SetBinError(23,5.148126);
   htotpass_allcats_2016_fit_s__145->SetMinimum(0);
   htotpass_allcats_2016_fit_s__145->SetMaximum(8651.391);
   htotpass_allcats_2016_fit_s__145->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__145->SetFillColor(ci);
   htotpass_allcats_2016_fit_s__145->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__145->SetLineColor(ci);
   htotpass_allcats_2016_fit_s__145->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s__145->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s__145->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s__145->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__145->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s__145->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__145->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s__145->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s__145->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s__145->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__145->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__145->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__145->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__145->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__145->Draw("");
   
   TH1F *htot_linepass_allcats_2016_fit_s__146 = new TH1F("htot_linepass_allcats_2016_fit_s__146","wqq in cat1_2016_pass_cat1",23,40,201);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(1,2.863072e-05);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(2,5051.949);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(3,5312.205);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(4,5346.03);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(5,5377.378);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(6,5628.481);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(7,5767.594);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(8,5529.228);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(9,4859.543);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(10,4314.763);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(11,2.863072e-05);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(12,2.863072e-05);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(13,2.863072e-05);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(14,2815.08);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(15,2439.427);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(16,2090.499);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(17,1760.061);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(18,1455.072);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(19,833.8773);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(20,705.9816);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(21,414.4832);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(22,345.6215);
   htot_linepass_allcats_2016_fit_s__146->SetBinContent(23,285.459);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(1,1.877938e-06);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(2,37.36932);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(3,32.43653);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(4,35.88177);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(5,43.49277);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(6,64.27963);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(7,86.92374);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(8,94.63957);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(9,74.03072);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(10,55.36106);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(11,1.877938e-06);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(12,1.877938e-06);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(13,1.877938e-06);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(14,29.89127);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(15,23.96098);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(16,19.50909);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(17,16.26831);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(18,14.16978);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(19,7.659189);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(20,7.155702);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(21,5.285759);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(22,5.041276);
   htot_linepass_allcats_2016_fit_s__146->SetBinError(23,5.148126);
   htot_linepass_allcats_2016_fit_s__146->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_s__146->SetFillColor(ci);
   htot_linepass_allcats_2016_fit_s__146->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_allcats_2016_fit_s__146->SetLineColor(ci);
   htot_linepass_allcats_2016_fit_s__146->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_allcats_2016_fit_s__146->SetMarkerColor(ci);
   htot_linepass_allcats_2016_fit_s__146->SetMarkerSize(0);
   htot_linepass_allcats_2016_fit_s__146->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_allcats_2016_fit_s__146->GetXaxis()->SetRange(2,23);
   htot_linepass_allcats_2016_fit_s__146->GetXaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_s__146->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_s__146->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_s__146->GetXaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_s__146->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_allcats_2016_fit_s__146->GetYaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_s__146->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_allcats_2016_fit_s__146->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_allcats_2016_fit_s__146->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_allcats_2016_fit_s__146->GetYaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_s__146->GetZaxis()->SetLabelFont(42);
   htot_linepass_allcats_2016_fit_s__146->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_allcats_2016_fit_s__146->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_allcats_2016_fit_s__146->GetZaxis()->SetTitleFont(42);
   htot_linepass_allcats_2016_fit_s__146->Draw("histsame");
   
   TH1F *qcd_pass_sum__147 = new TH1F("qcd_pass_sum__147","qcd in cat1_2016_pass_cat1",23,40,201);
   qcd_pass_sum__147->SetBinContent(2,5003.379);
   qcd_pass_sum__147->SetBinContent(3,5224.789);
   qcd_pass_sum__147->SetBinContent(4,5156.606);
   qcd_pass_sum__147->SetBinContent(5,5002.507);
   qcd_pass_sum__147->SetBinContent(6,4769.817);
   qcd_pass_sum__147->SetBinContent(7,4533.296);
   qcd_pass_sum__147->SetBinContent(8,4331.576);
   qcd_pass_sum__147->SetBinContent(9,4073.031);
   qcd_pass_sum__147->SetBinContent(10,3842.446);
   qcd_pass_sum__147->SetBinContent(14,2662.607);
   qcd_pass_sum__147->SetBinContent(15,2333.434);
   qcd_pass_sum__147->SetBinContent(16,2014.278);
   qcd_pass_sum__147->SetBinContent(17,1707.316);
   qcd_pass_sum__147->SetBinContent(18,1413.096);
   qcd_pass_sum__147->SetBinContent(19,816.5419);
   qcd_pass_sum__147->SetBinContent(20,686.4821);
   qcd_pass_sum__147->SetBinContent(21,405.923);
   qcd_pass_sum__147->SetBinContent(22,343.9569);
   qcd_pass_sum__147->SetBinContent(23,284.38);
   qcd_pass_sum__147->SetBinError(2,36.84714);
   qcd_pass_sum__147->SetBinError(3,30.87333);
   qcd_pass_sum__147->SetBinError(4,32.6122);
   qcd_pass_sum__147->SetBinError(5,36.25166);
   qcd_pass_sum__147->SetBinError(6,42.50452);
   qcd_pass_sum__147->SetBinError(7,46.20677);
   qcd_pass_sum__147->SetBinError(8,46.02034);
   qcd_pass_sum__147->SetBinError(9,44.15225);
   qcd_pass_sum__147->SetBinError(10,36.44373);
   qcd_pass_sum__147->SetBinError(14,22.44231);
   qcd_pass_sum__147->SetBinError(15,19.50101);
   qcd_pass_sum__147->SetBinError(16,17.14947);
   qcd_pass_sum__147->SetBinError(17,14.79319);
   qcd_pass_sum__147->SetBinError(18,13.09705);
   qcd_pass_sum__147->SetBinError(19,7.235524);
   qcd_pass_sum__147->SetBinError(20,6.653178);
   qcd_pass_sum__147->SetBinError(21,5.076087);
   qcd_pass_sum__147->SetBinError(22,5.026138);
   qcd_pass_sum__147->SetBinError(23,5.143882);
   qcd_pass_sum__147->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_pass_sum__147->SetLineColor(ci);
   qcd_pass_sum__147->SetLineStyle(2);
   qcd_pass_sum__147->SetLineWidth(2);
   qcd_pass_sum__147->GetXaxis()->SetTitle("x");
   qcd_pass_sum__147->GetXaxis()->SetLabelFont(42);
   qcd_pass_sum__147->GetXaxis()->SetLabelSize(0.035);
   qcd_pass_sum__147->GetXaxis()->SetTitleSize(0.035);
   qcd_pass_sum__147->GetXaxis()->SetTitleFont(42);
   qcd_pass_sum__147->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_pass_sum__147->GetYaxis()->SetLabelFont(42);
   qcd_pass_sum__147->GetYaxis()->SetLabelSize(0.035);
   qcd_pass_sum__147->GetYaxis()->SetTitleSize(0.035);
   qcd_pass_sum__147->GetYaxis()->SetTitleOffset(0);
   qcd_pass_sum__147->GetYaxis()->SetTitleFont(42);
   qcd_pass_sum__147->GetZaxis()->SetLabelFont(42);
   qcd_pass_sum__147->GetZaxis()->SetLabelSize(0.035);
   qcd_pass_sum__147->GetZaxis()->SetTitleSize(0.035);
   qcd_pass_sum__147->GetZaxis()->SetTitleFont(42);
   qcd_pass_sum__147->Draw("hist sames");
   
   TH1F *htotpass_allcats_2016_fit_s__148 = new TH1F("htotpass_allcats_2016_fit_s__148","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s__148->SetBinContent(1,2.863072e-05);
   htotpass_allcats_2016_fit_s__148->SetBinContent(2,5051.949);
   htotpass_allcats_2016_fit_s__148->SetBinContent(3,5312.205);
   htotpass_allcats_2016_fit_s__148->SetBinContent(4,5346.03);
   htotpass_allcats_2016_fit_s__148->SetBinContent(5,5377.378);
   htotpass_allcats_2016_fit_s__148->SetBinContent(6,5628.481);
   htotpass_allcats_2016_fit_s__148->SetBinContent(7,5767.594);
   htotpass_allcats_2016_fit_s__148->SetBinContent(8,5529.228);
   htotpass_allcats_2016_fit_s__148->SetBinContent(9,4859.543);
   htotpass_allcats_2016_fit_s__148->SetBinContent(10,4314.763);
   htotpass_allcats_2016_fit_s__148->SetBinContent(11,2.863072e-05);
   htotpass_allcats_2016_fit_s__148->SetBinContent(12,2.863072e-05);
   htotpass_allcats_2016_fit_s__148->SetBinContent(13,2.863072e-05);
   htotpass_allcats_2016_fit_s__148->SetBinContent(14,2815.08);
   htotpass_allcats_2016_fit_s__148->SetBinContent(15,2439.427);
   htotpass_allcats_2016_fit_s__148->SetBinContent(16,2090.499);
   htotpass_allcats_2016_fit_s__148->SetBinContent(17,1760.061);
   htotpass_allcats_2016_fit_s__148->SetBinContent(18,1455.072);
   htotpass_allcats_2016_fit_s__148->SetBinContent(19,833.8773);
   htotpass_allcats_2016_fit_s__148->SetBinContent(20,705.9816);
   htotpass_allcats_2016_fit_s__148->SetBinContent(21,414.4832);
   htotpass_allcats_2016_fit_s__148->SetBinContent(22,345.6215);
   htotpass_allcats_2016_fit_s__148->SetBinContent(23,285.459);
   htotpass_allcats_2016_fit_s__148->SetBinError(1,1.877938e-06);
   htotpass_allcats_2016_fit_s__148->SetBinError(2,37.36932);
   htotpass_allcats_2016_fit_s__148->SetBinError(3,32.43653);
   htotpass_allcats_2016_fit_s__148->SetBinError(4,35.88177);
   htotpass_allcats_2016_fit_s__148->SetBinError(5,43.49277);
   htotpass_allcats_2016_fit_s__148->SetBinError(6,64.27963);
   htotpass_allcats_2016_fit_s__148->SetBinError(7,86.92374);
   htotpass_allcats_2016_fit_s__148->SetBinError(8,94.63957);
   htotpass_allcats_2016_fit_s__148->SetBinError(9,74.03072);
   htotpass_allcats_2016_fit_s__148->SetBinError(10,55.36106);
   htotpass_allcats_2016_fit_s__148->SetBinError(11,1.877938e-06);
   htotpass_allcats_2016_fit_s__148->SetBinError(12,1.877938e-06);
   htotpass_allcats_2016_fit_s__148->SetBinError(13,1.877938e-06);
   htotpass_allcats_2016_fit_s__148->SetBinError(14,29.89127);
   htotpass_allcats_2016_fit_s__148->SetBinError(15,23.96098);
   htotpass_allcats_2016_fit_s__148->SetBinError(16,19.50909);
   htotpass_allcats_2016_fit_s__148->SetBinError(17,16.26831);
   htotpass_allcats_2016_fit_s__148->SetBinError(18,14.16978);
   htotpass_allcats_2016_fit_s__148->SetBinError(19,7.659189);
   htotpass_allcats_2016_fit_s__148->SetBinError(20,7.155702);
   htotpass_allcats_2016_fit_s__148->SetBinError(21,5.285759);
   htotpass_allcats_2016_fit_s__148->SetBinError(22,5.041276);
   htotpass_allcats_2016_fit_s__148->SetBinError(23,5.148126);
   htotpass_allcats_2016_fit_s__148->SetMinimum(0);
   htotpass_allcats_2016_fit_s__148->SetMaximum(8651.391);
   htotpass_allcats_2016_fit_s__148->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__148->SetFillColor(ci);
   htotpass_allcats_2016_fit_s__148->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s__148->SetLineColor(ci);
   htotpass_allcats_2016_fit_s__148->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s__148->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s__148->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s__148->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__148->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s__148->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__148->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s__148->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s__148->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s__148->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__148->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s__148->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s__148->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s__148->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s__148->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis37[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_37 = new TH1F("hstackMC_stack_37","hstackMC",23, xAxis37);
   hstackMC_stack_37->SetMinimum(-323.2246);
   hstackMC_stack_37->SetMaximum(1308.409);
   hstackMC_stack_37->SetDirectory(0);
   hstackMC_stack_37->SetStats(0);
   hstackMC_stack_37->SetLineStyle(0);
   hstackMC_stack_37->SetMarkerStyle(20);
   hstackMC_stack_37->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_37->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_37->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_37->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_37->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_37->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_37->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_37->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_37->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_37->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_37->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_37->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_37->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_37->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_37->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_37->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_37->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_37);
   
   Double_t xAxis38[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_pass_sum_stack_1 = new TH1F("tqq_pass_sum_stack_1","tqq in cat1_2016_pass_cat1",23, xAxis38);
   tqq_pass_sum_stack_1->SetBinContent(2,38.85669);
   tqq_pass_sum_stack_1->SetBinContent(3,58.41715);
   tqq_pass_sum_stack_1->SetBinContent(4,73.22602);
   tqq_pass_sum_stack_1->SetBinContent(5,107.6465);
   tqq_pass_sum_stack_1->SetBinContent(6,168.5703);
   tqq_pass_sum_stack_1->SetBinContent(7,194.7514);
   tqq_pass_sum_stack_1->SetBinContent(8,183.6572);
   tqq_pass_sum_stack_1->SetBinContent(9,160.5944);
   tqq_pass_sum_stack_1->SetBinContent(10,178.9985);
   tqq_pass_sum_stack_1->SetBinContent(14,149.2902);
   tqq_pass_sum_stack_1->SetBinContent(15,104.6008);
   tqq_pass_sum_stack_1->SetBinContent(16,75.69872);
   tqq_pass_sum_stack_1->SetBinContent(17,52.74512);
   tqq_pass_sum_stack_1->SetBinContent(18,41.97636);
   tqq_pass_sum_stack_1->SetBinContent(19,17.33529);
   tqq_pass_sum_stack_1->SetBinContent(20,19.49943);
   tqq_pass_sum_stack_1->SetBinContent(21,8.560194);
   tqq_pass_sum_stack_1->SetBinContent(22,1.664541);
   tqq_pass_sum_stack_1->SetBinContent(23,1.078981);
   tqq_pass_sum_stack_1->SetBinError(2,5.946024);
   tqq_pass_sum_stack_1->SetBinError(3,9.219322);
   tqq_pass_sum_stack_1->SetBinError(4,11.04033);
   tqq_pass_sum_stack_1->SetBinError(5,15.39011);
   tqq_pass_sum_stack_1->SetBinError(6,24.07308);
   tqq_pass_sum_stack_1->SetBinError(7,26.88382);
   tqq_pass_sum_stack_1->SetBinError(8,25.8977);
   tqq_pass_sum_stack_1->SetBinError(9,23.12733);
   tqq_pass_sum_stack_1->SetBinError(10,25.79492);
   tqq_pass_sum_stack_1->SetBinError(14,19.71745);
   tqq_pass_sum_stack_1->SetBinError(15,13.90928);
   tqq_pass_sum_stack_1->SetBinError(16,9.288189);
   tqq_pass_sum_stack_1->SetBinError(17,6.769022);
   tqq_pass_sum_stack_1->SetBinError(18,5.408321);
   tqq_pass_sum_stack_1->SetBinError(19,2.512046);
   tqq_pass_sum_stack_1->SetBinError(20,2.634253);
   tqq_pass_sum_stack_1->SetBinError(21,1.473972);
   tqq_pass_sum_stack_1->SetBinError(22,0.3903807);
   tqq_pass_sum_stack_1->SetBinError(23,0.2089924);
   tqq_pass_sum_stack_1->SetEntries(138);

   ci = TColor::GetColor("#660066");
   tqq_pass_sum_stack_1->SetLineColor(ci);
   tqq_pass_sum_stack_1->SetLineStyle(4);
   tqq_pass_sum_stack_1->SetLineWidth(2);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitle("x");
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_pass_sum_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_pass_sum_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_pass_sum_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_pass_sum_stack_1,"");
   
   TH1F *wqq_pass_sum_stack_2 = new TH1F("wqq_pass_sum_stack_2","wqq in cat1_2016_pass_cat1",23,40,201);
   wqq_pass_sum_stack_2->SetBinContent(1,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(2,6.248408);
   wqq_pass_sum_stack_2->SetBinContent(3,19.77749);
   wqq_pass_sum_stack_2->SetBinContent(4,84.69215);
   wqq_pass_sum_stack_2->SetBinContent(5,183.2397);
   wqq_pass_sum_stack_2->SetBinContent(6,461.3359);
   wqq_pass_sum_stack_2->SetBinContent(7,545.7945);
   wqq_pass_sum_stack_2->SetBinContent(8,306.8671);
   wqq_pass_sum_stack_2->SetBinContent(9,118.1598);
   wqq_pass_sum_stack_2->SetBinContent(10,28.84719);
   wqq_pass_sum_stack_2->SetBinContent(11,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(12,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(13,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(14,0.3344567);
   wqq_pass_sum_stack_2->SetBinContent(15,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(16,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(17,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(18,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(19,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(20,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(21,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(22,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinContent(23,1.228708e-05);
   wqq_pass_sum_stack_2->SetBinError(1,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(2,0.7731729);
   wqq_pass_sum_stack_2->SetBinError(3,3.20652);
   wqq_pass_sum_stack_2->SetBinError(4,9.041813);
   wqq_pass_sum_stack_2->SetBinError(5,12.7686);
   wqq_pass_sum_stack_2->SetBinError(6,33.22197);
   wqq_pass_sum_stack_2->SetBinError(7,41.85956);
   wqq_pass_sum_stack_2->SetBinError(8,30.61228);
   wqq_pass_sum_stack_2->SetBinError(9,16.49748);
   wqq_pass_sum_stack_2->SetBinError(10,3.458576);
   wqq_pass_sum_stack_2->SetBinError(11,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(12,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(13,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(14,0.2845316);
   wqq_pass_sum_stack_2->SetBinError(15,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(16,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(17,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(18,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(19,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(20,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(21,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(22,9.046475e-07);
   wqq_pass_sum_stack_2->SetBinError(23,9.046475e-07);
   wqq_pass_sum_stack_2->SetEntries(138);

   ci = TColor::GetColor("#009900");
   wqq_pass_sum_stack_2->SetLineColor(ci);
   wqq_pass_sum_stack_2->SetLineStyle(2);
   wqq_pass_sum_stack_2->SetLineWidth(2);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitle("x");
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_pass_sum_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_pass_sum_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_pass_sum_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_pass_sum_stack_2,"");
   
   TH1F *zqq_pass_sum_stack_3 = new TH1F("zqq_pass_sum_stack_3","zqq in cat1_2016_pass_cat1",23,40,201);
   zqq_pass_sum_stack_3->SetBinContent(1,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(2,3.464737);
   zqq_pass_sum_stack_3->SetBinContent(3,9.221545);
   zqq_pass_sum_stack_3->SetBinContent(4,31.50568);
   zqq_pass_sum_stack_3->SetBinContent(5,83.98505);
   zqq_pass_sum_stack_3->SetBinContent(6,228.7582);
   zqq_pass_sum_stack_3->SetBinContent(7,493.7516);
   zqq_pass_sum_stack_3->SetBinContent(8,707.1272);
   zqq_pass_sum_stack_3->SetBinContent(9,507.7578);
   zqq_pass_sum_stack_3->SetBinContent(10,264.4713);
   zqq_pass_sum_stack_3->SetBinContent(11,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(12,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(13,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(14,2.848307);
   zqq_pass_sum_stack_3->SetBinContent(15,1.39234);
   zqq_pass_sum_stack_3->SetBinContent(16,0.5221767);
   zqq_pass_sum_stack_3->SetBinContent(17,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(18,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(19,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(20,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(21,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(22,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinContent(23,1.634364e-05);
   zqq_pass_sum_stack_3->SetBinError(1,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(2,1.673671);
   zqq_pass_sum_stack_3->SetBinError(3,1.920434);
   zqq_pass_sum_stack_3->SetBinError(4,4.505857);
   zqq_pass_sum_stack_3->SetBinError(5,13.32461);
   zqq_pass_sum_stack_3->SetBinError(6,25.3382);
   zqq_pass_sum_stack_3->SetBinError(7,54.27439);
   zqq_pass_sum_stack_3->SetBinError(8,72.32548);
   zqq_pass_sum_stack_3->SetBinError(9,52.19277);
   zqq_pass_sum_stack_3->SetBinError(10,32.54783);
   zqq_pass_sum_stack_3->SetBinError(11,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(12,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(13,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(14,0.9858667);
   zqq_pass_sum_stack_3->SetBinError(15,0.6090702);
   zqq_pass_sum_stack_3->SetBinError(16,0.4795293);
   zqq_pass_sum_stack_3->SetBinError(17,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(18,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(19,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(20,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(21,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(22,1.645681e-06);
   zqq_pass_sum_stack_3->SetBinError(23,1.645681e-06);
   zqq_pass_sum_stack_3->SetEntries(138);

   ci = TColor::GetColor("#cc0000");
   zqq_pass_sum_stack_3->SetLineColor(ci);
   zqq_pass_sum_stack_3->SetLineStyle(3);
   zqq_pass_sum_stack_3->SetLineWidth(2);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitle("x");
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_pass_sum_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_pass_sum_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_pass_sum_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_pass_sum_stack_3,"");
   
   TH1F *hsigpass_allcats_2016_fit_s_stack_4 = new TH1F("hsigpass_allcats_2016_fit_s_stack_4","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(1,2.656628e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(2,1.712672);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(3,4.047246);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(4,2.040444);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(5,3.244993);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(6,6.18054);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(7,11.80623);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(8,19.83559);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(9,38.3838);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(10,85.2045);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(11,2.656628e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(12,2.656628e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(13,2.656628e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(14,124.3702);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(15,63.08741);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(16,15.61692);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(17,2.790096);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(18,0.8399885);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(19,0.2503742);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(20,0.1553476);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(21,0.1079344);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(22,0.03692354);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinContent(23,0.04714637);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(1,9.353879e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(2,11.61902);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(3,44.89273);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(4,9.909021);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(5,8.894148);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(6,17.36679);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(7,63.62773);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(8,110.4868);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(9,164.1944);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(10,251.3641);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(11,9.353879e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(12,9.353879e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(13,9.353879e-06);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(14,447.5948);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(15,232.302);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(16,57.77531);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(17,6.493987);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(18,1.245342);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(19,0.3829835);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(20,0.1956006);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(21,0.1596631);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(22,0.07523568);
   hsigpass_allcats_2016_fit_s_stack_4->SetBinError(23,0.06750584);
   hsigpass_allcats_2016_fit_s_stack_4->SetEntries(667);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_allcats_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_allcats_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_pass_sum_copy_fx3037[23] = {
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
   Double_t data_pass_sum_copy_fy3037[23] = {
   0,
   5134,
   5311,
   5198,
   5385,
   5667,
   5824,
   5504,
   4922,
   4442,
   0,
   0,
   0,
   2903,
   2438,
   2209,
   1760,
   1450,
   839,
   705,
   385,
   321,
   316};
   Double_t data_pass_sum_copy_felx3037[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_copy_fely3037[23] = {
   1.841055,
   72.65816,
   73.88278,
   73.10336,
   74.38871,
   76.28556,
   77.32118,
   75.19507,
   71.16326,
   67.6548,
   1.841055,
   1.841055,
   1.841055,
   54.88687,
   50.38395,
   48.00813,
   42.96123,
   39.08847,
   29.97766,
   27.56499,
   20.63886,
   18.9355,
   18.79556};
   Double_t data_pass_sum_copy_fehx3037[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_pass_sum_copy_fehy3037[23] = {
   0,
   71.65115,
   72.87589,
   72.09639,
   73.38187,
   75.27888,
   76.31459,
   74.1883,
   70.1561,
   66.64726,
   0,
   0,
   0,
   53.87755,
   49.37379,
   46.99746,
   41.94927,
   38.0753,
   28.96035,
   26.54611,
   19.61331,
   17.90752,
   17.76736};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_pass_sum_copy_fx3037,data_pass_sum_copy_fy3037,data_pass_sum_copy_felx3037,data_pass_sum_copy_fehx3037,data_pass_sum_copy_fely3037,data_pass_sum_copy_fehy3037);
   grae->SetName("data_pass_sum_copy");
   grae->SetTitle("tqq in cat1_2016_pass_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_pass_sum_copy3037 = new TH1F("Graph_data_pass_sum_copy3037","tqq in cat1_2016_pass_cat1",100,28.1,212.9);
   Graph_data_pass_sum_copy3037->SetMinimum(0);
   Graph_data_pass_sum_copy3037->SetMaximum(6490.53);
   Graph_data_pass_sum_copy3037->SetDirectory(0);
   Graph_data_pass_sum_copy3037->SetStats(0);
   Graph_data_pass_sum_copy3037->SetLineStyle(0);
   Graph_data_pass_sum_copy3037->SetMarkerStyle(20);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_pass_sum_copy3037->GetXaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_pass_sum_copy3037->GetYaxis()->SetTitleFont(42);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetLabelFont(42);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetLabelSize(0.05);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetTitleSize(0.06);
   Graph_data_pass_sum_copy3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_pass_sum_copy3037);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.55,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_pass_sum_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_pass_sum_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_pass_sum_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd_pass_sum","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("htotpass_allcats_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_allcats_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   entry=leg->AddEntry("data_pass_sum","Data","pe");
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
      tex = new TLatex(0.25,0.77,"450 < p_{T} < 1200 GeV");
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
   
   TH1F *htotpass_allcats_2016_fit_s_copy__149 = new TH1F("htotpass_allcats_2016_fit_s_copy__149","wqq in cat1_2016_pass_cat1",23,40,201);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(1,2.863072e-05);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(2,5051.949);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(3,5312.205);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(4,5346.03);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(5,5377.378);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(6,5628.481);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(7,5767.594);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(8,5529.228);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(9,4859.543);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(10,4314.763);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(11,2.863072e-05);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(12,2.863072e-05);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(13,2.863072e-05);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(14,2815.08);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(15,2439.427);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(16,2090.499);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(17,1760.061);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(18,1455.072);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(19,833.8773);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(20,705.9816);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(21,414.4832);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(22,345.6215);
   htotpass_allcats_2016_fit_s_copy__149->SetBinContent(23,285.459);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(1,1.877938e-06);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(2,37.36932);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(3,32.43653);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(4,35.88177);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(5,43.49277);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(6,64.27963);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(7,86.92374);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(8,94.63957);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(9,74.03072);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(10,55.36106);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(11,1.877938e-06);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(12,1.877938e-06);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(13,1.877938e-06);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(14,29.89127);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(15,23.96098);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(16,19.50909);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(17,16.26831);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(18,14.16978);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(19,7.659189);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(20,7.155702);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(21,5.285759);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(22,5.041276);
   htotpass_allcats_2016_fit_s_copy__149->SetBinError(23,5.148126);
   htotpass_allcats_2016_fit_s_copy__149->SetMaximum(8651.391);
   htotpass_allcats_2016_fit_s_copy__149->SetEntries(552);
   htotpass_allcats_2016_fit_s_copy__149->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s_copy__149->SetFillColor(ci);
   htotpass_allcats_2016_fit_s_copy__149->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_allcats_2016_fit_s_copy__149->SetLineColor(ci);
   htotpass_allcats_2016_fit_s_copy__149->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_allcats_2016_fit_s_copy__149->SetMarkerColor(ci);
   htotpass_allcats_2016_fit_s_copy__149->SetMarkerSize(0);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetRange(2,23);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetLabelOffset(100);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetTitleOffset(100);
   htotpass_allcats_2016_fit_s_copy__149->GetXaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__149->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_allcats_2016_fit_s_copy__149->GetYaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__149->GetYaxis()->SetLabelSize(0.05);
   htotpass_allcats_2016_fit_s_copy__149->GetYaxis()->SetTitleSize(0.06);
   htotpass_allcats_2016_fit_s_copy__149->GetYaxis()->SetTitleOffset(1.25);
   htotpass_allcats_2016_fit_s_copy__149->GetYaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__149->GetZaxis()->SetLabelFont(42);
   htotpass_allcats_2016_fit_s_copy__149->GetZaxis()->SetLabelSize(0.035);
   htotpass_allcats_2016_fit_s_copy__149->GetZaxis()->SetTitleSize(0.035);
   htotpass_allcats_2016_fit_s_copy__149->GetZaxis()->SetTitleFont(42);
   htotpass_allcats_2016_fit_s_copy__149->Draw("sameaxis");
   p12pass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_allcats_2016_fit_s
   TPad *p22pass_allcats_2016_fit_s = new TPad("p22pass_allcats_2016_fit_s", "p22pass_allcats_2016_fit_s",0,0,1,0.3);
   p22pass_allcats_2016_fit_s->Draw();
   p22pass_allcats_2016_fit_s->cd();
   p22pass_allcats_2016_fit_s->Range(13.7027,-17.12048,221.8108,23.28111);
   p22pass_allcats_2016_fit_s->SetFillColor(0);
   p22pass_allcats_2016_fit_s->SetBorderMode(0);
   p22pass_allcats_2016_fit_s->SetBorderSize(2);
   p22pass_allcats_2016_fit_s->SetTickx(1);
   p22pass_allcats_2016_fit_s->SetTicky(1);
   p22pass_allcats_2016_fit_s->SetLeftMargin(0.16);
   p22pass_allcats_2016_fit_s->SetTopMargin(0.05);
   p22pass_allcats_2016_fit_s->SetBottomMargin(0.3);
   p22pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   p22pass_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22pass_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s__150 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s__150","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s__150->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_s__150->SetMaximum(21.26103);
   iOneWithErrorspass_allcats_2016_fit_s__150->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__150->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__150->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__150->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__150->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s__150->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s__150->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s__150->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s__150->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_38 = new TH1F("hstack_stack_38","hstack",23,40,201);
   hstack_stack_38->SetMinimum(-445.2864);
   hstack_stack_38->SetMaximum(472.3984);
   hstack_stack_38->SetDirectory(0);
   hstack_stack_38->SetStats(0);
   hstack_stack_38->SetLineStyle(0);
   hstack_stack_38->SetMarkerStyle(20);
   hstack_stack_38->GetXaxis()->SetLabelFont(42);
   hstack_stack_38->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_38->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_38->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_38->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_38->GetXaxis()->SetTitleFont(42);
   hstack_stack_38->GetYaxis()->SetLabelFont(42);
   hstack_stack_38->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_38->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_38->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_38->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_38->GetYaxis()->SetTitleFont(42);
   hstack_stack_38->GetZaxis()->SetLabelFont(42);
   hstack_stack_38->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_38->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_38->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_38->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_38);
   
   
   TH1F *sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1","wqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(2,0.08720598);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(3,0.2713859);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(4,1.174707);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(5,2.49707);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(6,6.128357);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(7,7.151902);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(8,4.136328);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(9,1.684242);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(10,0.4328338);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(14,0.006207719);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(15,2.488583e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(16,2.614413e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(17,2.929032e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(18,3.227047e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(19,4.242724e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(20,4.628579e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(21,6.264661e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(22,6.861406e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinContent(23,6.915533e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(1,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(2,0.7731729);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(3,3.20652);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(4,9.041813);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(5,12.7686);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(6,33.22197);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(7,41.85956);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(8,30.61228);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(9,16.49748);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(10,3.458576);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(11,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(12,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(13,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(14,0.2845316);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(15,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(16,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(17,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(18,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(19,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(20,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(21,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(22,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetBinError(23,9.046475e-07);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_pass_sumpass_allcats_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2","zqq in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(2,0.04835563);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(3,0.1265377);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(4,0.4369938);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(5,1.144493);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(6,3.03881);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(7,6.46995);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(8,9.53152);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(9,7.237544);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(10,3.968224);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(14,0.05286629);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(15,0.02819999);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(16,0.01111074);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(17,3.896048e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(18,4.292453e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(19,5.643454e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(20,6.156699e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(21,8.332931e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(22,9.12669e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinContent(23,9.198688e-07);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(1,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(2,1.673671);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(3,1.920434);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(4,4.505857);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(5,13.32461);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(6,25.3382);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(7,54.27439);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(8,72.32548);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(9,52.19277);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(10,32.54783);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(11,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(12,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(13,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(14,0.9858667);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(15,0.6090702);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(16,0.4795293);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(17,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(18,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(19,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(20,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(21,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(22,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetBinError(23,1.645681e-06);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_pass_sumpass_allcats_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3","ggH_hbb in cat1_2016_pass_cat1",23,40,201);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(2,0.02390293);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(3,0.05553615);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(4,0.0283016);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(5,0.04422064);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(6,0.08210191);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(7,0.1547047);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(8,0.2673682);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(9,0.5471199);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(10,1.27844);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(14,2.308386);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(15,1.277751);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(16,0.3322929);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(17,0.06651118);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(18,0.02206125);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(19,0.008645415);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(20,0.005851991);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(21,0.005503121);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(22,0.002061901);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinContent(23,0.002653538);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(1,9.353879e-06);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(2,11.61902);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(3,44.89273);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(4,9.909021);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(5,8.894148);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(6,17.36679);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(7,63.62773);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(8,110.4868);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(9,164.1944);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(10,251.3641);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(11,9.353879e-06);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(12,9.353879e-06);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(13,9.353879e-06);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(14,447.5948);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(15,232.302);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(16,57.77531);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(17,6.493987);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(18,1.245342);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(19,0.3829835);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(20,0.1956006);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(21,0.1596631);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(22,0.07523568);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetBinError(23,0.06750584);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_allcats_2016_fit_spass_allcats_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_allcats_2016_fit_s__151 = new TH1F("iOneWithErrorsLinepass_allcats_2016_fit_s__151","",23,40,201);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetFillColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetLineColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetMarkerColor(ci);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->SetMarkerSize(0);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_allcats_2016_fit_s__151->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fx3038[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fy3038[23] = {
   0,
   1.262951,
   0.3761964,
   -0.4415272,
   3.69473,
   9.551124,
   14.17402,
   13.14935,
   9.673173,
   6.216202,
   0,
   0,
   0,
   1.659819,
   -0.0007120428,
   2.479225,
   -0.001463705,
   -0.1332103,
   0.1708874,
   -0.03697594,
   -1.503221,
   -1.374925,
   1.624905};
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_felx3038[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fely3038[23] = {
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fehx3038[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_allcats_2016_fit_s_fehy3038[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_allcats_2016_fit_s_fx3038,Graph_from_iRatiopass_allcats_2016_fit_s_fy3038,Graph_from_iRatiopass_allcats_2016_fit_s_felx3038,Graph_from_iRatiopass_allcats_2016_fit_s_fehx3038,Graph_from_iRatiopass_allcats_2016_fit_s_fely3038,Graph_from_iRatiopass_allcats_2016_fit_s_fehy3038);
   grae->SetName("Graph_from_iRatiopass_allcats_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038 = new TH1F("Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->SetMinimum(-4.270946);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->SetMaximum(16.94175);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->SetDirectory(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->SetStats(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_allcats_2016_fit_s3038);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_allcats_2016_fit_s_copy__152 = new TH1F("iOneWithErrorspass_allcats_2016_fit_s_copy__152","",23,40,201);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetMinimum(-5);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetMaximum(21.26103);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetEntries(1104);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetFillColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetLineColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetMarkerColor(ci);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->SetMarkerSize(0);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_allcats_2016_fit_s_copy__152->Draw("sameaxis");
   p22pass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
   cpass_allcats_2016_fit_s->Modified();
   cpass_allcats_2016_fit_s->cd();
   cpass_allcats_2016_fit_s->SetSelected(cpass_allcats_2016_fit_s);
}
