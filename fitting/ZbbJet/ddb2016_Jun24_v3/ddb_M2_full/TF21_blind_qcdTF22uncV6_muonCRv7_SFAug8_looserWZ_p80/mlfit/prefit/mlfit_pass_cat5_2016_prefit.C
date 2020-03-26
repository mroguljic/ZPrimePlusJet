void mlfit_pass_cat5_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat5_2016_prefit/cpass_cat5_2016_prefit
//=========  (Thu Sep 26 13:57:13 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat5_2016_prefit = new TCanvas("cpass_cat5_2016_prefit", "cpass_cat5_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat5_2016_prefit->SetHighLightColor(2);
   cpass_cat5_2016_prefit->Range(0,0,1,1);
   cpass_cat5_2016_prefit->SetFillColor(0);
   cpass_cat5_2016_prefit->SetBorderMode(0);
   cpass_cat5_2016_prefit->SetBorderSize(2);
   cpass_cat5_2016_prefit->SetTickx(1);
   cpass_cat5_2016_prefit->SetTicky(1);
   cpass_cat5_2016_prefit->SetLeftMargin(0.16);
   cpass_cat5_2016_prefit->SetBottomMargin(0.13);
   cpass_cat5_2016_prefit->SetFrameFillStyle(0);
   cpass_cat5_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat5_2016_prefit
   TPad *p12pass_cat5_2016_prefit = new TPad("p12pass_cat5_2016_prefit", "p12pass_cat5_2016_prefit",0,0.3,1,1);
   p12pass_cat5_2016_prefit->Draw();
   p12pass_cat5_2016_prefit->cd();
   p12pass_cat5_2016_prefit->Range(13.7027,-12.8052,221.8108,627.4549);
   p12pass_cat5_2016_prefit->SetFillColor(0);
   p12pass_cat5_2016_prefit->SetBorderMode(0);
   p12pass_cat5_2016_prefit->SetBorderSize(2);
   p12pass_cat5_2016_prefit->SetTickx(1);
   p12pass_cat5_2016_prefit->SetTicky(1);
   p12pass_cat5_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat5_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat5_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat5_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat5_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat5_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat5_2016_prefit__105 = new TH1F("htotpass_cat5_2016_prefit__105","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_prefit__105->SetBinContent(1,2.747104e-06);
   htotpass_cat5_2016_prefit__105->SetBinContent(2,280.9287);
   htotpass_cat5_2016_prefit__105->SetBinContent(3,291.7132);
   htotpass_cat5_2016_prefit__105->SetBinContent(4,301.7494);
   htotpass_cat5_2016_prefit__105->SetBinContent(5,305.7681);
   htotpass_cat5_2016_prefit__105->SetBinContent(6,296.7513);
   htotpass_cat5_2016_prefit__105->SetBinContent(7,375.6193);
   htotpass_cat5_2016_prefit__105->SetBinContent(8,341.3943);
   htotpass_cat5_2016_prefit__105->SetBinContent(9,278.7374);
   htotpass_cat5_2016_prefit__105->SetBinContent(10,218.1193);
   htotpass_cat5_2016_prefit__105->SetBinContent(11,2.747104e-06);
   htotpass_cat5_2016_prefit__105->SetBinContent(12,2.747104e-06);
   htotpass_cat5_2016_prefit__105->SetBinContent(13,2.747104e-06);
   htotpass_cat5_2016_prefit__105->SetBinContent(14,173.8857);
   htotpass_cat5_2016_prefit__105->SetBinContent(15,162.63);
   htotpass_cat5_2016_prefit__105->SetBinContent(16,154.2526);
   htotpass_cat5_2016_prefit__105->SetBinContent(17,140.524);
   htotpass_cat5_2016_prefit__105->SetBinContent(18,130.9136);
   htotpass_cat5_2016_prefit__105->SetBinContent(19,120.4904);
   htotpass_cat5_2016_prefit__105->SetBinContent(20,110.6218);
   htotpass_cat5_2016_prefit__105->SetBinContent(21,100.2635);
   htotpass_cat5_2016_prefit__105->SetBinContent(22,88.2168);
   htotpass_cat5_2016_prefit__105->SetBinContent(23,74.69975);
   htotpass_cat5_2016_prefit__105->SetBinError(1,5.205801e-07);
   htotpass_cat5_2016_prefit__105->SetBinError(2,14.82087);
   htotpass_cat5_2016_prefit__105->SetBinError(3,9.902404);
   htotpass_cat5_2016_prefit__105->SetBinError(4,8.581766);
   htotpass_cat5_2016_prefit__105->SetBinError(5,9.549008);
   htotpass_cat5_2016_prefit__105->SetBinError(6,25.48231);
   htotpass_cat5_2016_prefit__105->SetBinError(7,35.4854);
   htotpass_cat5_2016_prefit__105->SetBinError(8,33.44776);
   htotpass_cat5_2016_prefit__105->SetBinError(9,25.64868);
   htotpass_cat5_2016_prefit__105->SetBinError(10,22.58119);
   htotpass_cat5_2016_prefit__105->SetBinError(11,5.205801e-07);
   htotpass_cat5_2016_prefit__105->SetBinError(12,5.205801e-07);
   htotpass_cat5_2016_prefit__105->SetBinError(13,5.205801e-07);
   htotpass_cat5_2016_prefit__105->SetBinError(14,8.260759);
   htotpass_cat5_2016_prefit__105->SetBinError(15,7.488688);
   htotpass_cat5_2016_prefit__105->SetBinError(16,5.223772);
   htotpass_cat5_2016_prefit__105->SetBinError(17,4.34611);
   htotpass_cat5_2016_prefit__105->SetBinError(18,3.484027);
   htotpass_cat5_2016_prefit__105->SetBinError(19,3.345522);
   htotpass_cat5_2016_prefit__105->SetBinError(20,3.611388);
   htotpass_cat5_2016_prefit__105->SetBinError(21,3.602833);
   htotpass_cat5_2016_prefit__105->SetBinError(22,3.443917);
   htotpass_cat5_2016_prefit__105->SetBinError(23,3.538182);
   htotpass_cat5_2016_prefit__105->SetMinimum(0);
   htotpass_cat5_2016_prefit__105->SetMaximum(563.4289);
   htotpass_cat5_2016_prefit__105->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__105->SetFillColor(ci);
   htotpass_cat5_2016_prefit__105->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__105->SetLineColor(ci);
   htotpass_cat5_2016_prefit__105->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_prefit__105->SetMarkerColor(ci);
   htotpass_cat5_2016_prefit__105->SetMarkerSize(0);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_prefit__105->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__105->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_prefit__105->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__105->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_prefit__105->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_prefit__105->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_prefit__105->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__105->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__105->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__105->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__105->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__105->Draw("");
   
   TH1F *htot_linepass_cat5_2016_prefit__106 = new TH1F("htot_linepass_cat5_2016_prefit__106","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(1,2.747104e-06);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(2,280.9287);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(3,291.7132);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(4,301.7494);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(5,305.7681);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(6,296.7513);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(7,375.6193);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(8,341.3943);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(9,278.7374);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(10,218.1193);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(11,2.747104e-06);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(12,2.747104e-06);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(13,2.747104e-06);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(14,173.8857);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(15,162.63);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(16,154.2526);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(17,140.524);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(18,130.9136);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(19,120.4904);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(20,110.6218);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(21,100.2635);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(22,88.2168);
   htot_linepass_cat5_2016_prefit__106->SetBinContent(23,74.69975);
   htot_linepass_cat5_2016_prefit__106->SetBinError(1,5.205801e-07);
   htot_linepass_cat5_2016_prefit__106->SetBinError(2,14.82087);
   htot_linepass_cat5_2016_prefit__106->SetBinError(3,9.902404);
   htot_linepass_cat5_2016_prefit__106->SetBinError(4,8.581766);
   htot_linepass_cat5_2016_prefit__106->SetBinError(5,9.549008);
   htot_linepass_cat5_2016_prefit__106->SetBinError(6,25.48231);
   htot_linepass_cat5_2016_prefit__106->SetBinError(7,35.4854);
   htot_linepass_cat5_2016_prefit__106->SetBinError(8,33.44776);
   htot_linepass_cat5_2016_prefit__106->SetBinError(9,25.64868);
   htot_linepass_cat5_2016_prefit__106->SetBinError(10,22.58119);
   htot_linepass_cat5_2016_prefit__106->SetBinError(11,5.205801e-07);
   htot_linepass_cat5_2016_prefit__106->SetBinError(12,5.205801e-07);
   htot_linepass_cat5_2016_prefit__106->SetBinError(13,5.205801e-07);
   htot_linepass_cat5_2016_prefit__106->SetBinError(14,8.260759);
   htot_linepass_cat5_2016_prefit__106->SetBinError(15,7.488688);
   htot_linepass_cat5_2016_prefit__106->SetBinError(16,5.223772);
   htot_linepass_cat5_2016_prefit__106->SetBinError(17,4.34611);
   htot_linepass_cat5_2016_prefit__106->SetBinError(18,3.484027);
   htot_linepass_cat5_2016_prefit__106->SetBinError(19,3.345522);
   htot_linepass_cat5_2016_prefit__106->SetBinError(20,3.611388);
   htot_linepass_cat5_2016_prefit__106->SetBinError(21,3.602833);
   htot_linepass_cat5_2016_prefit__106->SetBinError(22,3.443917);
   htot_linepass_cat5_2016_prefit__106->SetBinError(23,3.538182);
   htot_linepass_cat5_2016_prefit__106->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_prefit__106->SetFillColor(ci);
   htot_linepass_cat5_2016_prefit__106->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_prefit__106->SetLineColor(ci);
   htot_linepass_cat5_2016_prefit__106->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_prefit__106->SetMarkerColor(ci);
   htot_linepass_cat5_2016_prefit__106->SetMarkerSize(0);
   htot_linepass_cat5_2016_prefit__106->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_prefit__106->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_prefit__106->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_prefit__106->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_prefit__106->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_prefit__106->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_prefit__106->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_prefit__106->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_prefit__106->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_prefit__106->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_prefit__106->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_prefit__106->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_prefit__106->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_prefit__106->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_prefit__106->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_prefit__106->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_prefit__106->Draw("histsame");
   
   TH1F *qcd__107 = new TH1F("qcd__107","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__107->SetBinContent(2,280.5201);
   qcd__107->SetBinContent(3,290.199);
   qcd__107->SetBinContent(4,286.7369);
   qcd__107->SetBinContent(5,270.8207);
   qcd__107->SetBinContent(6,249.8124);
   qcd__107->SetBinContent(7,231.4958);
   qcd__107->SetBinContent(8,225.8479);
   qcd__107->SetBinContent(9,210.3174);
   qcd__107->SetBinContent(10,198.4108);
   qcd__107->SetBinContent(14,162.9827);
   qcd__107->SetBinContent(15,152.8266);
   qcd__107->SetBinContent(16,148.2619);
   qcd__107->SetBinContent(17,135.9938);
   qcd__107->SetBinContent(18,128.37);
   qcd__107->SetBinContent(19,118.3725);
   qcd__107->SetBinContent(20,107.8602);
   qcd__107->SetBinContent(21,97.91584);
   qcd__107->SetBinContent(22,88.2168);
   qcd__107->SetBinContent(23,74.69975);
   qcd__107->SetBinError(2,14.81306);
   qcd__107->SetBinError(3,9.362974);
   qcd__107->SetBinError(4,6.723327);
   qcd__107->SetBinError(5,5.480695);
   qcd__107->SetBinError(6,4.893842);
   qcd__107->SetBinError(7,4.603743);
   qcd__107->SetBinError(8,4.609028);
   qcd__107->SetBinError(9,4.391154);
   qcd__107->SetBinError(10,4.209027);
   qcd__107->SetBinError(14,3.492323);
   qcd__107->SetBinError(15,3.281895);
   qcd__107->SetBinError(16,3.219939);
   qcd__107->SetBinError(17,3.035308);
   qcd__107->SetBinError(18,3.014641);
   qcd__107->SetBinError(19,3.012954);
   qcd__107->SetBinError(20,3.073524);
   qcd__107->SetBinError(21,3.222114);
   qcd__107->SetBinError(22,3.443917);
   qcd__107->SetBinError(23,3.538182);
   qcd__107->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__107->SetLineColor(ci);
   qcd__107->SetLineStyle(2);
   qcd__107->SetLineWidth(2);
   qcd__107->GetXaxis()->SetTitle("x");
   qcd__107->GetXaxis()->SetLabelFont(42);
   qcd__107->GetXaxis()->SetLabelSize(0.035);
   qcd__107->GetXaxis()->SetTitleSize(0.035);
   qcd__107->GetXaxis()->SetTitleFont(42);
   qcd__107->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__107->GetYaxis()->SetLabelFont(42);
   qcd__107->GetYaxis()->SetLabelSize(0.035);
   qcd__107->GetYaxis()->SetTitleSize(0.035);
   qcd__107->GetYaxis()->SetTitleOffset(0);
   qcd__107->GetYaxis()->SetTitleFont(42);
   qcd__107->GetZaxis()->SetLabelFont(42);
   qcd__107->GetZaxis()->SetLabelSize(0.035);
   qcd__107->GetZaxis()->SetTitleSize(0.035);
   qcd__107->GetZaxis()->SetTitleFont(42);
   qcd__107->Draw("hist sames");
   
   TH1F *htotpass_cat5_2016_prefit__108 = new TH1F("htotpass_cat5_2016_prefit__108","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_prefit__108->SetBinContent(1,2.747104e-06);
   htotpass_cat5_2016_prefit__108->SetBinContent(2,280.9287);
   htotpass_cat5_2016_prefit__108->SetBinContent(3,291.7132);
   htotpass_cat5_2016_prefit__108->SetBinContent(4,301.7494);
   htotpass_cat5_2016_prefit__108->SetBinContent(5,305.7681);
   htotpass_cat5_2016_prefit__108->SetBinContent(6,296.7513);
   htotpass_cat5_2016_prefit__108->SetBinContent(7,375.6193);
   htotpass_cat5_2016_prefit__108->SetBinContent(8,341.3943);
   htotpass_cat5_2016_prefit__108->SetBinContent(9,278.7374);
   htotpass_cat5_2016_prefit__108->SetBinContent(10,218.1193);
   htotpass_cat5_2016_prefit__108->SetBinContent(11,2.747104e-06);
   htotpass_cat5_2016_prefit__108->SetBinContent(12,2.747104e-06);
   htotpass_cat5_2016_prefit__108->SetBinContent(13,2.747104e-06);
   htotpass_cat5_2016_prefit__108->SetBinContent(14,173.8857);
   htotpass_cat5_2016_prefit__108->SetBinContent(15,162.63);
   htotpass_cat5_2016_prefit__108->SetBinContent(16,154.2526);
   htotpass_cat5_2016_prefit__108->SetBinContent(17,140.524);
   htotpass_cat5_2016_prefit__108->SetBinContent(18,130.9136);
   htotpass_cat5_2016_prefit__108->SetBinContent(19,120.4904);
   htotpass_cat5_2016_prefit__108->SetBinContent(20,110.6218);
   htotpass_cat5_2016_prefit__108->SetBinContent(21,100.2635);
   htotpass_cat5_2016_prefit__108->SetBinContent(22,88.2168);
   htotpass_cat5_2016_prefit__108->SetBinContent(23,74.69975);
   htotpass_cat5_2016_prefit__108->SetBinError(1,5.205801e-07);
   htotpass_cat5_2016_prefit__108->SetBinError(2,14.82087);
   htotpass_cat5_2016_prefit__108->SetBinError(3,9.902404);
   htotpass_cat5_2016_prefit__108->SetBinError(4,8.581766);
   htotpass_cat5_2016_prefit__108->SetBinError(5,9.549008);
   htotpass_cat5_2016_prefit__108->SetBinError(6,25.48231);
   htotpass_cat5_2016_prefit__108->SetBinError(7,35.4854);
   htotpass_cat5_2016_prefit__108->SetBinError(8,33.44776);
   htotpass_cat5_2016_prefit__108->SetBinError(9,25.64868);
   htotpass_cat5_2016_prefit__108->SetBinError(10,22.58119);
   htotpass_cat5_2016_prefit__108->SetBinError(11,5.205801e-07);
   htotpass_cat5_2016_prefit__108->SetBinError(12,5.205801e-07);
   htotpass_cat5_2016_prefit__108->SetBinError(13,5.205801e-07);
   htotpass_cat5_2016_prefit__108->SetBinError(14,8.260759);
   htotpass_cat5_2016_prefit__108->SetBinError(15,7.488688);
   htotpass_cat5_2016_prefit__108->SetBinError(16,5.223772);
   htotpass_cat5_2016_prefit__108->SetBinError(17,4.34611);
   htotpass_cat5_2016_prefit__108->SetBinError(18,3.484027);
   htotpass_cat5_2016_prefit__108->SetBinError(19,3.345522);
   htotpass_cat5_2016_prefit__108->SetBinError(20,3.611388);
   htotpass_cat5_2016_prefit__108->SetBinError(21,3.602833);
   htotpass_cat5_2016_prefit__108->SetBinError(22,3.443917);
   htotpass_cat5_2016_prefit__108->SetBinError(23,3.538182);
   htotpass_cat5_2016_prefit__108->SetMinimum(0);
   htotpass_cat5_2016_prefit__108->SetMaximum(563.4289);
   htotpass_cat5_2016_prefit__108->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__108->SetFillColor(ci);
   htotpass_cat5_2016_prefit__108->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__108->SetLineColor(ci);
   htotpass_cat5_2016_prefit__108->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_prefit__108->SetMarkerColor(ci);
   htotpass_cat5_2016_prefit__108->SetMarkerSize(0);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_prefit__108->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__108->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_prefit__108->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__108->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_prefit__108->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_prefit__108->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_prefit__108->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__108->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__108->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__108->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__108->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__108->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis27[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_27 = new TH1F("hstackMC_stack_27","hstackMC",23, xAxis27);
   hstackMC_stack_27->SetMinimum(-225.022);
   hstackMC_stack_27->SetMaximum(243.9544);
   hstackMC_stack_27->SetDirectory(0);
   hstackMC_stack_27->SetStats(0);
   hstackMC_stack_27->SetLineStyle(0);
   hstackMC_stack_27->SetMarkerStyle(20);
   hstackMC_stack_27->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_27->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_27->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_27->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_27->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_27->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_27->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_27->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_27->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_27->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_27->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_27->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_27->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_27->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_27->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_27->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_27->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_27);
   
   Double_t xAxis28[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat5_2016_pass_cat5",23, xAxis28);
   tqq_stack_1->SetBinContent(2,0.4086762);
   tqq_stack_1->SetBinContent(3,1.464051);
   tqq_stack_1->SetBinContent(4,3.311915);
   tqq_stack_1->SetBinContent(5,5.470069);
   tqq_stack_1->SetBinContent(6,5.379837);
   tqq_stack_1->SetBinContent(7,8.867695);
   tqq_stack_1->SetBinContent(8,10.00778);
   tqq_stack_1->SetBinContent(9,6.502546);
   tqq_stack_1->SetBinContent(10,12.76391);
   tqq_stack_1->SetBinContent(14,10.90296);
   tqq_stack_1->SetBinContent(15,9.803375);
   tqq_stack_1->SetBinContent(16,5.990705);
   tqq_stack_1->SetBinContent(17,4.530216);
   tqq_stack_1->SetBinContent(18,2.543654);
   tqq_stack_1->SetBinContent(19,2.117862);
   tqq_stack_1->SetBinContent(20,2.761623);
   tqq_stack_1->SetBinContent(21,2.347645);
   tqq_stack_1->SetBinError(2,0.2806073);
   tqq_stack_1->SetBinError(3,1.005254);
   tqq_stack_1->SetBinError(4,2.274043);
   tqq_stack_1->SetBinError(5,3.755885);
   tqq_stack_1->SetBinError(6,3.69393);
   tqq_stack_1->SetBinError(7,6.088778);
   tqq_stack_1->SetBinError(8,6.871592);
   tqq_stack_1->SetBinError(9,4.464808);
   tqq_stack_1->SetBinError(10,8.764019);
   tqq_stack_1->SetBinError(14,7.486242);
   tqq_stack_1->SetBinError(15,6.731242);
   tqq_stack_1->SetBinError(16,4.113366);
   tqq_stack_1->SetBinError(17,3.110559);
   tqq_stack_1->SetBinError(18,1.746536);
   tqq_stack_1->SetBinError(19,1.454176);
   tqq_stack_1->SetBinError(20,1.896199);
   tqq_stack_1->SetBinError(21,1.611951);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat5_2016_pass_cat5",23,40,201);
   wqq_stack_2->SetBinContent(1,1.164406e-06);
   wqq_stack_2->SetBinContent(2,1.164406e-06);
   wqq_stack_2->SetBinContent(3,0.05016524);
   wqq_stack_2->SetBinContent(4,8.008374);
   wqq_stack_2->SetBinContent(5,19.64548);
   wqq_stack_2->SetBinContent(6,32.49368);
   wqq_stack_2->SetBinContent(7,80.78142);
   wqq_stack_2->SetBinContent(8,19.4176);
   wqq_stack_2->SetBinContent(9,3.028984);
   wqq_stack_2->SetBinContent(10,2.917995);
   wqq_stack_2->SetBinContent(11,1.164406e-06);
   wqq_stack_2->SetBinContent(12,1.164406e-06);
   wqq_stack_2->SetBinContent(13,1.164406e-06);
   wqq_stack_2->SetBinContent(14,1.164406e-06);
   wqq_stack_2->SetBinContent(15,1.164406e-06);
   wqq_stack_2->SetBinContent(16,1.164406e-06);
   wqq_stack_2->SetBinContent(17,1.164406e-06);
   wqq_stack_2->SetBinContent(18,1.164406e-06);
   wqq_stack_2->SetBinContent(19,1.164406e-06);
   wqq_stack_2->SetBinContent(20,1.164406e-06);
   wqq_stack_2->SetBinContent(21,1.164406e-06);
   wqq_stack_2->SetBinContent(22,1.164406e-06);
   wqq_stack_2->SetBinContent(23,1.164406e-06);
   wqq_stack_2->SetBinError(1,2.418224e-07);
   wqq_stack_2->SetBinError(2,0.01723317);
   wqq_stack_2->SetBinError(3,2.727489);
   wqq_stack_2->SetBinError(4,4.111474);
   wqq_stack_2->SetBinError(5,5.769386);
   wqq_stack_2->SetBinError(6,16.21075);
   wqq_stack_2->SetBinError(7,26.53076);
   wqq_stack_2->SetBinError(8,15.34219);
   wqq_stack_2->SetBinError(9,5.373042);
   wqq_stack_2->SetBinError(10,1.194965);
   wqq_stack_2->SetBinError(11,2.418224e-07);
   wqq_stack_2->SetBinError(12,2.418224e-07);
   wqq_stack_2->SetBinError(13,2.418224e-07);
   wqq_stack_2->SetBinError(14,2.418224e-07);
   wqq_stack_2->SetBinError(15,2.418224e-07);
   wqq_stack_2->SetBinError(16,2.418224e-07);
   wqq_stack_2->SetBinError(17,2.418224e-07);
   wqq_stack_2->SetBinError(18,2.418224e-07);
   wqq_stack_2->SetBinError(19,2.418224e-07);
   wqq_stack_2->SetBinError(20,2.418224e-07);
   wqq_stack_2->SetBinError(21,2.418224e-07);
   wqq_stack_2->SetBinError(22,2.418224e-07);
   wqq_stack_2->SetBinError(23,2.418224e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat5_2016_pass_cat5",23,40,201);
   zqq_stack_3->SetBinContent(1,1.582698e-06);
   zqq_stack_3->SetBinContent(2,1.582698e-06);
   zqq_stack_3->SetBinContent(3,1.582698e-06);
   zqq_stack_3->SetBinContent(4,3.692116);
   zqq_stack_3->SetBinContent(5,9.831873);
   zqq_stack_3->SetBinContent(6,9.065413);
   zqq_stack_3->SetBinContent(7,54.47434);
   zqq_stack_3->SetBinContent(8,86.12098);
   zqq_stack_3->SetBinContent(9,58.88852);
   zqq_stack_3->SetBinContent(10,4.026528);
   zqq_stack_3->SetBinContent(11,1.582698e-06);
   zqq_stack_3->SetBinContent(12,1.582698e-06);
   zqq_stack_3->SetBinContent(13,1.582698e-06);
   zqq_stack_3->SetBinContent(14,1.582698e-06);
   zqq_stack_3->SetBinContent(15,1.582698e-06);
   zqq_stack_3->SetBinContent(16,1.582698e-06);
   zqq_stack_3->SetBinContent(17,1.582698e-06);
   zqq_stack_3->SetBinContent(18,1.582698e-06);
   zqq_stack_3->SetBinContent(19,1.582698e-06);
   zqq_stack_3->SetBinContent(20,1.582698e-06);
   zqq_stack_3->SetBinContent(21,1.582698e-06);
   zqq_stack_3->SetBinContent(22,1.582698e-06);
   zqq_stack_3->SetBinContent(23,1.582698e-06);
   zqq_stack_3->SetBinError(1,4.61005e-07);
   zqq_stack_3->SetBinError(2,0.3903127);
   zqq_stack_3->SetBinError(3,1.393765);
   zqq_stack_3->SetBinError(4,2.523508);
   zqq_stack_3->SetBinError(5,3.708508);
   zqq_stack_3->SetBinError(6,18.6806);
   zqq_stack_3->SetBinError(7,22.29496);
   zqq_stack_3->SetBinError(8,28.5466);
   zqq_stack_3->SetBinError(9,24.28515);
   zqq_stack_3->SetBinError(10,20.34596);
   zqq_stack_3->SetBinError(11,4.61005e-07);
   zqq_stack_3->SetBinError(12,4.61005e-07);
   zqq_stack_3->SetBinError(13,4.61005e-07);
   zqq_stack_3->SetBinError(14,4.61005e-07);
   zqq_stack_3->SetBinError(15,4.61005e-07);
   zqq_stack_3->SetBinError(16,4.61005e-07);
   zqq_stack_3->SetBinError(17,4.61005e-07);
   zqq_stack_3->SetBinError(18,4.61005e-07);
   zqq_stack_3->SetBinError(19,4.61005e-07);
   zqq_stack_3->SetBinError(20,4.61005e-07);
   zqq_stack_3->SetBinError(21,4.61005e-07);
   zqq_stack_3->SetBinError(22,4.61005e-07);
   zqq_stack_3->SetBinError(23,4.61005e-07);
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
   
   TH1F *hsigpass_cat5_2016_prefit_stack_4 = new TH1F("hsigpass_cat5_2016_prefit_stack_4","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(1,4.895488e-08);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(2,0.009033547);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(3,0.185576);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(4,0.002961341);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(5,0.07860219);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(6,0.08397509);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(7,0.04481103);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(8,0.4371852);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(9,0.6729209);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(10,0.7628912);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(11,4.895488e-08);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(12,4.895488e-08);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(13,4.895488e-08);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(14,3.657732);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(15,0.9547911);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(16,0.0527974);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(17,0.01443271);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(18,0.0032546);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(19,0.006409552);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(20,0.01426797);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(21,0.00589215);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(22,0.002900714);
   hsigpass_cat5_2016_prefit_stack_4->SetBinContent(23,0.003120296);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(1,4.347669e-06);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(2,0.02096448);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(3,25.42638);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(4,0.006872419);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(5,3.452693);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(6,7.182778);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(7,35.07672);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(8,58.91655);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(9,80.6672);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(10,94.69245);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(11,4.347669e-06);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(12,4.347669e-06);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(13,4.347669e-06);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(14,228.6798);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(15,124.3373);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(16,28.87254);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(17,0.187062);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(18,0.04581835);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(19,0.02022132);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(20,0.03516672);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(21,0.01367409);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(22,0.006731719);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(23,0.007241315);
   hsigpass_cat5_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat5_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat5_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat5_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat5_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat5_2016_prefit_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3027[23] = {
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
   Double_t data_copy_fy3027[23] = {
   0,
   288,
   315,
   307,
   316,
   327,
   346,
   352,
   247,
   261,
   0,
   0,
   0,
   204,
   156,
   176,
   147,
   134,
   104,
   119,
   95,
   73,
   86};
   Double_t data_copy_felx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3027[23] = {
   1.841055,
   17.9906,
   18.76744,
   18.54085,
   18.79556,
   19.102,
   19.61943,
   19.77987,
   16.73782,
   17.17651,
   1.841055,
   1.841055,
   1.841055,
   15.30654,
   13.51699,
   14.29195,
   13.15215,
   12.60492,
   11.23099,
   11.93955,
   10.78125,
   9.583245,
   10.30981};
   Double_t data_copy_fehx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3027[23] = {
   0,
   16.96107,
   17.7392,
   17.51224,
   17.76736,
   18.07428,
   18.59248,
   18.75315,
   15.70592,
   16.14548,
   0,
   0,
   0,
   14.27145,
   12.47686,
   13.25417,
   12.1108,
   11.56162,
   10.18183,
   10.89359,
   9.729809,
   8.524559,
   9.255741};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3027,data_copy_fy3027,data_copy_felx3027,data_copy_fehx3027,data_copy_fely3027,data_copy_fehy3027);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat5_2016_pass_cat5");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3027 = new TH1F("Graph_data_copy3027","tqq in cat5_2016_pass_cat5",100,28.1,212.9);
   Graph_data_copy3027->SetMinimum(0);
   Graph_data_copy3027->SetMaximum(408.0126);
   Graph_data_copy3027->SetDirectory(0);
   Graph_data_copy3027->SetStats(0);
   Graph_data_copy3027->SetLineStyle(0);
   Graph_data_copy3027->SetMarkerStyle(20);
   Graph_data_copy3027->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3027->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3027->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3027->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3027->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3027->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3027->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3027->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3027->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3027->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3027->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3027);
   
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
   entry=leg->AddEntry("htotpass_cat5_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat5_2016_prefit_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"675 < p_{T} < 800 GeV");
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
   
   TH1F *htotpass_cat5_2016_prefit_copy__109 = new TH1F("htotpass_cat5_2016_prefit_copy__109","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(1,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(2,280.9287);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(3,291.7132);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(4,301.7494);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(5,305.7681);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(6,296.7513);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(7,375.6193);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(8,341.3943);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(9,278.7374);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(10,218.1193);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(11,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(12,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(13,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(14,173.8857);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(15,162.63);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(16,154.2526);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(17,140.524);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(18,130.9136);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(19,120.4904);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(20,110.6218);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(21,100.2635);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(22,88.2168);
   htotpass_cat5_2016_prefit_copy__109->SetBinContent(23,74.69975);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(1,5.205801e-07);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(2,14.82087);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(3,9.902404);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(4,8.581766);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(5,9.549008);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(6,25.48231);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(7,35.4854);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(8,33.44776);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(9,25.64868);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(10,22.58119);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(11,5.205801e-07);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(12,5.205801e-07);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(13,5.205801e-07);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(14,8.260759);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(15,7.488688);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(16,5.223772);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(17,4.34611);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(18,3.484027);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(19,3.345522);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(20,3.611388);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(21,3.602833);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(22,3.443917);
   htotpass_cat5_2016_prefit_copy__109->SetBinError(23,3.538182);
   htotpass_cat5_2016_prefit_copy__109->SetMaximum(563.4289);
   htotpass_cat5_2016_prefit_copy__109->SetEntries(92);
   htotpass_cat5_2016_prefit_copy__109->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit_copy__109->SetFillColor(ci);
   htotpass_cat5_2016_prefit_copy__109->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit_copy__109->SetLineColor(ci);
   htotpass_cat5_2016_prefit_copy__109->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_prefit_copy__109->SetMarkerColor(ci);
   htotpass_cat5_2016_prefit_copy__109->SetMarkerSize(0);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_prefit_copy__109->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit_copy__109->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_prefit_copy__109->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit_copy__109->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_prefit_copy__109->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_prefit_copy__109->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_prefit_copy__109->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit_copy__109->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit_copy__109->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit_copy__109->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit_copy__109->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit_copy__109->Draw("sameaxis");
   p12pass_cat5_2016_prefit->Modified();
   cpass_cat5_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_prefit
   TPad *p22pass_cat5_2016_prefit = new TPad("p22pass_cat5_2016_prefit", "p22pass_cat5_2016_prefit",0,0,1,0.3);
   p22pass_cat5_2016_prefit->Draw();
   p22pass_cat5_2016_prefit->cd();
   p22pass_cat5_2016_prefit->Range(13.7027,-11.37282,221.8108,9.869903);
   p22pass_cat5_2016_prefit->SetFillColor(0);
   p22pass_cat5_2016_prefit->SetBorderMode(0);
   p22pass_cat5_2016_prefit->SetBorderSize(2);
   p22pass_cat5_2016_prefit->SetTickx(1);
   p22pass_cat5_2016_prefit->SetTicky(1);
   p22pass_cat5_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat5_2016_prefit->SetTopMargin(0.05);
   p22pass_cat5_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat5_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat5_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat5_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat5_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat5_2016_prefit__110 = new TH1F("iOneWithErrorspass_cat5_2016_prefit__110","",23,40,201);
   iOneWithErrorspass_cat5_2016_prefit__110->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_prefit__110->SetMaximum(8.807767);
   iOneWithErrorspass_cat5_2016_prefit__110->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit__110->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_prefit__110->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit__110->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_prefit__110->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit__110->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_prefit__110->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_prefit__110->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_prefit__110->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit__110->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit__110->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit__110->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit__110->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit__110->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_28 = new TH1F("hstack_stack_28","hstack",23,40,201);
   hstack_stack_28->SetMinimum(-228.4235);
   hstack_stack_28->SetMaximum(240.3829);
   hstack_stack_28->SetDirectory(0);
   hstack_stack_28->SetStats(0);
   hstack_stack_28->SetLineStyle(0);
   hstack_stack_28->SetMarkerStyle(20);
   hstack_stack_28->GetXaxis()->SetLabelFont(42);
   hstack_stack_28->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_28->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_28->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_28->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_28->GetXaxis()->SetTitleFont(42);
   hstack_stack_28->GetYaxis()->SetLabelFont(42);
   hstack_stack_28->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_28->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_28->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_28->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_28->GetYaxis()->SetTitleFont(42);
   hstack_stack_28->GetZaxis()->SetLabelFont(42);
   hstack_stack_28->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_28->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_28->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_28->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_28);
   
   
   TH1F *sigHistResidualwqqpass_cat5_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat5_2016_prefit_stack_1","wqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(2,6.865168e-08);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(3,0.002827932);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(4,0.4573014);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(5,1.105706);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(6,1.797785);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(7,4.344843);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(8,1.035432);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(9,0.1928561);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(10,0.1807313);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(14,8.15899e-08);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(15,9.332524e-08);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(16,8.785207e-08);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(17,9.614603e-08);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(18,1.007131e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(19,1.143612e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(20,1.068891e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(21,1.196741e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(22,1.365943e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinContent(23,1.258036e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(1,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(2,0.01723317);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(3,2.727489);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(4,4.111474);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(5,5.769386);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(6,16.21075);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(7,26.53076);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(8,15.34219);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(9,5.373042);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(10,1.194965);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(11,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(12,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(13,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(14,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(15,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(16,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(17,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(18,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(19,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(20,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(21,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(22,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(23,2.418224e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat5_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat5_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat5_2016_prefit_stack_2","zqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(2,9.33136e-08);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(3,8.922041e-08);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(4,0.2108306);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(5,0.5533671);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(6,0.5015643);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(7,2.929912);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(8,4.592347);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(9,3.749446);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(10,0.2493903);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(14,1.108997e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(15,1.268507e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(16,1.194114e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(17,1.306848e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(18,1.368925e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(19,1.554434e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(20,1.452871e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(21,1.626649e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(22,1.856634e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinContent(23,1.709964e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(1,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(2,0.3903127);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(3,1.393765);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(4,2.523508);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(5,3.708508);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(6,18.6806);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(7,22.29496);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(8,28.5466);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(9,24.28515);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(10,20.34596);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(11,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(12,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(13,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(14,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(15,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(16,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(17,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(18,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(19,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(20,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(21,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(22,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(23,4.61005e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat5_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(2,0.0005326048);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(3,0.01046135);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(4,0.0001691012);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(5,0.004423966);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(6,0.00464611);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(7,0.002410169);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(8,0.02331263);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(9,0.04284504);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(10,0.04725105);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(14,0.2562973);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(15,0.07652496);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(16,0.003983457);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(17,0.001191722);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(18,0.0002815004);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(19,0.000629509);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(20,0.001309758);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(21,0.0006055771);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(22,0.0003402773);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinContent(23,0.0003371201);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(1,4.347669e-06);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(2,0.02096448);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(3,25.42638);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(4,0.006872419);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(5,3.452693);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(6,7.182778);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(7,35.07672);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(8,58.91655);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(9,80.6672);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(10,94.69245);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(11,4.347669e-06);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(12,4.347669e-06);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(13,4.347669e-06);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(14,228.6798);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(15,124.3373);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(16,28.87254);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(17,0.187062);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(18,0.04581835);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(19,0.02022132);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(20,0.03516672);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(21,0.01367409);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(22,0.006731719);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(23,0.007241315);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_prefit__111 = new TH1F("iOneWithErrorsLinepass_cat5_2016_prefit__111","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__111->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fx3028[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fy3028[23] = {
   0,
   0.3930529,
   1.243482,
   0.9142591,
   2.112692,
   3.759178,
   5.38428,
   5.871845,
   1.803108,
   2.900779,
   0,
   0,
   0,
   1.967414,
   -0.5313829,
   1.521652,
   0.4923885,
   0.2448551,
   -1.619588,
   0.7017194,
   -0.5409653,
   -1.785055,
   1.096068};
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_felx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fely3028[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fehx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fehy3028[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_prefit_fx3028,Graph_from_iRatiopass_cat5_2016_prefit_fy3028,Graph_from_iRatiopass_cat5_2016_prefit_felx3028,Graph_from_iRatiopass_cat5_2016_prefit_fehx3028,Graph_from_iRatiopass_cat5_2016_prefit_fely3028,Graph_from_iRatiopass_cat5_2016_prefit_fehy3028);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_prefit3028 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_prefit3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->SetMinimum(-3.750745);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->SetMaximum(7.837535);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_prefit3028);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_prefit_copy__112 = new TH1F("iOneWithErrorspass_cat5_2016_prefit_copy__112","",23,40,201);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetMaximum(8.807767);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetEntries(184);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__112->Draw("sameaxis");
   p22pass_cat5_2016_prefit->Modified();
   cpass_cat5_2016_prefit->cd();
   cpass_cat5_2016_prefit->Modified();
   cpass_cat5_2016_prefit->cd();
   cpass_cat5_2016_prefit->SetSelected(cpass_cat5_2016_prefit);
}
