void mlfit_pass_cat5_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat5_2016_prefit/cpass_cat5_2016_prefit
//=========  (Wed Sep  4 11:54:13 2019) by ROOT version 6.12/07
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
   p12pass_cat5_2016_prefit->Range(13.7027,-12.78803,221.8108,626.6134);
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
   
   TH1F *htotpass_cat5_2016_prefit__73 = new TH1F("htotpass_cat5_2016_prefit__73","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_prefit__73->SetBinContent(1,2.747104e-06);
   htotpass_cat5_2016_prefit__73->SetBinContent(2,230.9984);
   htotpass_cat5_2016_prefit__73->SetBinContent(3,256.8488);
   htotpass_cat5_2016_prefit__73->SetBinContent(4,280.3692);
   htotpass_cat5_2016_prefit__73->SetBinContent(5,294.8011);
   htotpass_cat5_2016_prefit__73->SetBinContent(6,292.5526);
   htotpass_cat5_2016_prefit__73->SetBinContent(7,375.1155);
   htotpass_cat5_2016_prefit__73->SetBinContent(8,342.4725);
   htotpass_cat5_2016_prefit__73->SetBinContent(9,279.8683);
   htotpass_cat5_2016_prefit__73->SetBinContent(10,218.2888);
   htotpass_cat5_2016_prefit__73->SetBinContent(11,2.747104e-06);
   htotpass_cat5_2016_prefit__73->SetBinContent(12,2.747104e-06);
   htotpass_cat5_2016_prefit__73->SetBinContent(13,2.747104e-06);
   htotpass_cat5_2016_prefit__73->SetBinContent(14,165.88);
   htotpass_cat5_2016_prefit__73->SetBinContent(15,152.5427);
   htotpass_cat5_2016_prefit__73->SetBinContent(16,141.8509);
   htotpass_cat5_2016_prefit__73->SetBinContent(17,126.6908);
   htotpass_cat5_2016_prefit__73->SetBinContent(18,115.5139);
   htotpass_cat5_2016_prefit__73->SetBinContent(19,104.1334);
   htotpass_cat5_2016_prefit__73->SetBinContent(20,93.77134);
   htotpass_cat5_2016_prefit__73->SetBinContent(21,83.22814);
   htotpass_cat5_2016_prefit__73->SetBinContent(22,71.33533);
   htotpass_cat5_2016_prefit__73->SetBinContent(23,59.1384);
   htotpass_cat5_2016_prefit__73->SetBinError(1,5.519241e-07);
   htotpass_cat5_2016_prefit__73->SetBinError(2,12.18877);
   htotpass_cat5_2016_prefit__73->SetBinError(3,8.883511);
   htotpass_cat5_2016_prefit__73->SetBinError(4,8.407978);
   htotpass_cat5_2016_prefit__73->SetBinError(5,9.585452);
   htotpass_cat5_2016_prefit__73->SetBinError(6,25.2007);
   htotpass_cat5_2016_prefit__73->SetBinError(7,34.37338);
   htotpass_cat5_2016_prefit__73->SetBinError(8,37.58783);
   htotpass_cat5_2016_prefit__73->SetBinError(9,27.58075);
   htotpass_cat5_2016_prefit__73->SetBinError(10,24.51365);
   htotpass_cat5_2016_prefit__73->SetBinError(11,5.519241e-07);
   htotpass_cat5_2016_prefit__73->SetBinError(12,5.519241e-07);
   htotpass_cat5_2016_prefit__73->SetBinError(13,5.519241e-07);
   htotpass_cat5_2016_prefit__73->SetBinError(14,8.468156);
   htotpass_cat5_2016_prefit__73->SetBinError(15,7.645612);
   htotpass_cat5_2016_prefit__73->SetBinError(16,5.198665);
   htotpass_cat5_2016_prefit__73->SetBinError(17,4.232075);
   htotpass_cat5_2016_prefit__73->SetBinError(18,3.215776);
   htotpass_cat5_2016_prefit__73->SetBinError(19,3.005339);
   htotpass_cat5_2016_prefit__73->SetBinError(20,3.258632);
   htotpass_cat5_2016_prefit__73->SetBinError(21,3.14598);
   htotpass_cat5_2016_prefit__73->SetBinError(22,2.784876);
   htotpass_cat5_2016_prefit__73->SetBinError(23,2.801112);
   htotpass_cat5_2016_prefit__73->SetMinimum(0);
   htotpass_cat5_2016_prefit__73->SetMaximum(562.6732);
   htotpass_cat5_2016_prefit__73->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__73->SetFillColor(ci);
   htotpass_cat5_2016_prefit__73->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__73->SetLineColor(ci);
   htotpass_cat5_2016_prefit__73->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_prefit__73->SetMarkerColor(ci);
   htotpass_cat5_2016_prefit__73->SetMarkerSize(0);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_prefit__73->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__73->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_prefit__73->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__73->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_prefit__73->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_prefit__73->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_prefit__73->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__73->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__73->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__73->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__73->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__73->Draw("");
   
   TH1F *htot_linepass_cat5_2016_prefit__74 = new TH1F("htot_linepass_cat5_2016_prefit__74","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(1,2.747104e-06);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(2,230.9984);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(3,256.8488);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(4,280.3692);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(5,294.8011);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(6,292.5526);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(7,375.1155);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(8,342.4725);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(9,279.8683);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(10,218.2888);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(11,2.747104e-06);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(12,2.747104e-06);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(13,2.747104e-06);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(14,165.88);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(15,152.5427);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(16,141.8509);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(17,126.6908);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(18,115.5139);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(19,104.1334);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(20,93.77134);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(21,83.22814);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(22,71.33533);
   htot_linepass_cat5_2016_prefit__74->SetBinContent(23,59.1384);
   htot_linepass_cat5_2016_prefit__74->SetBinError(1,5.519241e-07);
   htot_linepass_cat5_2016_prefit__74->SetBinError(2,12.18877);
   htot_linepass_cat5_2016_prefit__74->SetBinError(3,8.883511);
   htot_linepass_cat5_2016_prefit__74->SetBinError(4,8.407978);
   htot_linepass_cat5_2016_prefit__74->SetBinError(5,9.585452);
   htot_linepass_cat5_2016_prefit__74->SetBinError(6,25.2007);
   htot_linepass_cat5_2016_prefit__74->SetBinError(7,34.37338);
   htot_linepass_cat5_2016_prefit__74->SetBinError(8,37.58783);
   htot_linepass_cat5_2016_prefit__74->SetBinError(9,27.58075);
   htot_linepass_cat5_2016_prefit__74->SetBinError(10,24.51365);
   htot_linepass_cat5_2016_prefit__74->SetBinError(11,5.519241e-07);
   htot_linepass_cat5_2016_prefit__74->SetBinError(12,5.519241e-07);
   htot_linepass_cat5_2016_prefit__74->SetBinError(13,5.519241e-07);
   htot_linepass_cat5_2016_prefit__74->SetBinError(14,8.468156);
   htot_linepass_cat5_2016_prefit__74->SetBinError(15,7.645612);
   htot_linepass_cat5_2016_prefit__74->SetBinError(16,5.198665);
   htot_linepass_cat5_2016_prefit__74->SetBinError(17,4.232075);
   htot_linepass_cat5_2016_prefit__74->SetBinError(18,3.215776);
   htot_linepass_cat5_2016_prefit__74->SetBinError(19,3.005339);
   htot_linepass_cat5_2016_prefit__74->SetBinError(20,3.258632);
   htot_linepass_cat5_2016_prefit__74->SetBinError(21,3.14598);
   htot_linepass_cat5_2016_prefit__74->SetBinError(22,2.784876);
   htot_linepass_cat5_2016_prefit__74->SetBinError(23,2.801112);
   htot_linepass_cat5_2016_prefit__74->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_prefit__74->SetFillColor(ci);
   htot_linepass_cat5_2016_prefit__74->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_prefit__74->SetLineColor(ci);
   htot_linepass_cat5_2016_prefit__74->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_prefit__74->SetMarkerColor(ci);
   htot_linepass_cat5_2016_prefit__74->SetMarkerSize(0);
   htot_linepass_cat5_2016_prefit__74->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_prefit__74->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_prefit__74->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_prefit__74->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_prefit__74->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_prefit__74->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_prefit__74->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_prefit__74->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_prefit__74->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_prefit__74->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_prefit__74->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_prefit__74->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_prefit__74->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_prefit__74->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_prefit__74->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_prefit__74->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_prefit__74->Draw("histsame");
   
   TH1F *qcd__75 = new TH1F("qcd__75","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__75->SetBinContent(2,230.5897);
   qcd__75->SetBinContent(3,255.3345);
   qcd__75->SetBinContent(4,265.3568);
   qcd__75->SetBinContent(5,259.8537);
   qcd__75->SetBinContent(6,245.6137);
   qcd__75->SetBinContent(7,230.992);
   qcd__75->SetBinContent(8,226.9262);
   qcd__75->SetBinContent(9,211.4482);
   qcd__75->SetBinContent(10,198.5804);
   qcd__75->SetBinContent(14,154.9771);
   qcd__75->SetBinContent(15,142.7393);
   qcd__75->SetBinContent(16,135.8602);
   qcd__75->SetBinContent(17,122.1606);
   qcd__75->SetBinContent(18,112.9702);
   qcd__75->SetBinContent(19,102.0155);
   qcd__75->SetBinContent(20,91.00971);
   qcd__75->SetBinContent(21,80.88049);
   qcd__75->SetBinContent(22,71.33533);
   qcd__75->SetBinContent(23,59.1384);
   qcd__75->SetBinError(2,12.17646);
   qcd__75->SetBinError(3,8.238107);
   qcd__75->SetBinError(4,6.222013);
   qcd__75->SetBinError(5,5.258751);
   qcd__75->SetBinError(6,4.81159);
   qcd__75->SetBinError(7,4.593724);
   qcd__75->SetBinError(8,4.631032);
   qcd__75->SetBinError(9,4.414766);
   qcd__75->SetBinError(10,4.212624);
   qcd__75->SetBinError(14,3.32078);
   qcd__75->SetBinError(15,3.065274);
   qcd__75->SetBinError(16,2.950598);
   qcd__75->SetBinError(17,2.726558);
   qcd__75->SetBinError(18,2.652993);
   qcd__75->SetBinError(19,2.596618);
   qcd__75->SetBinError(20,2.593364);
   qcd__75->SetBinError(21,2.661532);
   qcd__75->SetBinError(22,2.784876);
   qcd__75->SetBinError(23,2.801112);
   qcd__75->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__75->SetLineColor(ci);
   qcd__75->SetLineStyle(2);
   qcd__75->SetLineWidth(2);
   qcd__75->GetXaxis()->SetTitle("x");
   qcd__75->GetXaxis()->SetLabelFont(42);
   qcd__75->GetXaxis()->SetLabelSize(0.035);
   qcd__75->GetXaxis()->SetTitleSize(0.035);
   qcd__75->GetXaxis()->SetTitleFont(42);
   qcd__75->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__75->GetYaxis()->SetLabelFont(42);
   qcd__75->GetYaxis()->SetLabelSize(0.035);
   qcd__75->GetYaxis()->SetTitleSize(0.035);
   qcd__75->GetYaxis()->SetTitleOffset(0);
   qcd__75->GetYaxis()->SetTitleFont(42);
   qcd__75->GetZaxis()->SetLabelFont(42);
   qcd__75->GetZaxis()->SetLabelSize(0.035);
   qcd__75->GetZaxis()->SetTitleSize(0.035);
   qcd__75->GetZaxis()->SetTitleFont(42);
   qcd__75->Draw("hist sames");
   
   TH1F *htotpass_cat5_2016_prefit__76 = new TH1F("htotpass_cat5_2016_prefit__76","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_prefit__76->SetBinContent(1,2.747104e-06);
   htotpass_cat5_2016_prefit__76->SetBinContent(2,230.9984);
   htotpass_cat5_2016_prefit__76->SetBinContent(3,256.8488);
   htotpass_cat5_2016_prefit__76->SetBinContent(4,280.3692);
   htotpass_cat5_2016_prefit__76->SetBinContent(5,294.8011);
   htotpass_cat5_2016_prefit__76->SetBinContent(6,292.5526);
   htotpass_cat5_2016_prefit__76->SetBinContent(7,375.1155);
   htotpass_cat5_2016_prefit__76->SetBinContent(8,342.4725);
   htotpass_cat5_2016_prefit__76->SetBinContent(9,279.8683);
   htotpass_cat5_2016_prefit__76->SetBinContent(10,218.2888);
   htotpass_cat5_2016_prefit__76->SetBinContent(11,2.747104e-06);
   htotpass_cat5_2016_prefit__76->SetBinContent(12,2.747104e-06);
   htotpass_cat5_2016_prefit__76->SetBinContent(13,2.747104e-06);
   htotpass_cat5_2016_prefit__76->SetBinContent(14,165.88);
   htotpass_cat5_2016_prefit__76->SetBinContent(15,152.5427);
   htotpass_cat5_2016_prefit__76->SetBinContent(16,141.8509);
   htotpass_cat5_2016_prefit__76->SetBinContent(17,126.6908);
   htotpass_cat5_2016_prefit__76->SetBinContent(18,115.5139);
   htotpass_cat5_2016_prefit__76->SetBinContent(19,104.1334);
   htotpass_cat5_2016_prefit__76->SetBinContent(20,93.77134);
   htotpass_cat5_2016_prefit__76->SetBinContent(21,83.22814);
   htotpass_cat5_2016_prefit__76->SetBinContent(22,71.33533);
   htotpass_cat5_2016_prefit__76->SetBinContent(23,59.1384);
   htotpass_cat5_2016_prefit__76->SetBinError(1,5.519241e-07);
   htotpass_cat5_2016_prefit__76->SetBinError(2,12.18877);
   htotpass_cat5_2016_prefit__76->SetBinError(3,8.883511);
   htotpass_cat5_2016_prefit__76->SetBinError(4,8.407978);
   htotpass_cat5_2016_prefit__76->SetBinError(5,9.585452);
   htotpass_cat5_2016_prefit__76->SetBinError(6,25.2007);
   htotpass_cat5_2016_prefit__76->SetBinError(7,34.37338);
   htotpass_cat5_2016_prefit__76->SetBinError(8,37.58783);
   htotpass_cat5_2016_prefit__76->SetBinError(9,27.58075);
   htotpass_cat5_2016_prefit__76->SetBinError(10,24.51365);
   htotpass_cat5_2016_prefit__76->SetBinError(11,5.519241e-07);
   htotpass_cat5_2016_prefit__76->SetBinError(12,5.519241e-07);
   htotpass_cat5_2016_prefit__76->SetBinError(13,5.519241e-07);
   htotpass_cat5_2016_prefit__76->SetBinError(14,8.468156);
   htotpass_cat5_2016_prefit__76->SetBinError(15,7.645612);
   htotpass_cat5_2016_prefit__76->SetBinError(16,5.198665);
   htotpass_cat5_2016_prefit__76->SetBinError(17,4.232075);
   htotpass_cat5_2016_prefit__76->SetBinError(18,3.215776);
   htotpass_cat5_2016_prefit__76->SetBinError(19,3.005339);
   htotpass_cat5_2016_prefit__76->SetBinError(20,3.258632);
   htotpass_cat5_2016_prefit__76->SetBinError(21,3.14598);
   htotpass_cat5_2016_prefit__76->SetBinError(22,2.784876);
   htotpass_cat5_2016_prefit__76->SetBinError(23,2.801112);
   htotpass_cat5_2016_prefit__76->SetMinimum(0);
   htotpass_cat5_2016_prefit__76->SetMaximum(562.6732);
   htotpass_cat5_2016_prefit__76->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__76->SetFillColor(ci);
   htotpass_cat5_2016_prefit__76->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit__76->SetLineColor(ci);
   htotpass_cat5_2016_prefit__76->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_prefit__76->SetMarkerColor(ci);
   htotpass_cat5_2016_prefit__76->SetMarkerSize(0);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_prefit__76->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__76->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_prefit__76->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__76->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_prefit__76->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_prefit__76->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_prefit__76->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__76->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit__76->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit__76->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit__76->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit__76->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis19[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_19 = new TH1F("hstackMC_stack_19","hstackMC",23, xAxis19);
   hstackMC_stack_19->SetMinimum(-1708.138);
   hstackMC_stack_19->SetMaximum(1801.227);
   hstackMC_stack_19->SetDirectory(0);
   hstackMC_stack_19->SetStats(0);
   hstackMC_stack_19->SetLineStyle(0);
   hstackMC_stack_19->SetMarkerStyle(20);
   hstackMC_stack_19->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_19->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_19->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_19->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_19->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_19->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_19->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_19->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_19->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_19->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_19->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_19->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_19->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_19->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_19->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_19->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_19->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_19);
   
   Double_t xAxis20[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat5_2016_pass_cat5",23, xAxis20);
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
   tqq_stack_1->SetBinError(2,0.2919882);
   tqq_stack_1->SetBinError(3,1.046025);
   tqq_stack_1->SetBinError(4,2.366274);
   tqq_stack_1->SetBinError(5,3.908217);
   tqq_stack_1->SetBinError(6,3.843748);
   tqq_stack_1->SetBinError(7,6.33573);
   tqq_stack_1->SetBinError(8,7.150292);
   tqq_stack_1->SetBinError(9,4.645894);
   tqq_stack_1->SetBinError(10,9.119472);
   tqq_stack_1->SetBinError(14,7.78987);
   tqq_stack_1->SetBinError(15,7.004247);
   tqq_stack_1->SetBinError(16,4.280197);
   tqq_stack_1->SetBinError(17,3.236718);
   tqq_stack_1->SetBinError(18,1.817372);
   tqq_stack_1->SetBinError(19,1.513155);
   tqq_stack_1->SetBinError(20,1.973105);
   tqq_stack_1->SetBinError(21,1.677329);
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
   wqq_stack_2->SetBinError(1,2.458119e-07);
   wqq_stack_2->SetBinError(2,0.01776468);
   wqq_stack_2->SetBinError(3,2.812232);
   wqq_stack_2->SetBinError(4,4.490343);
   wqq_stack_2->SetBinError(5,5.928288);
   wqq_stack_2->SetBinError(6,15.0917);
   wqq_stack_2->SetBinError(7,25.94583);
   wqq_stack_2->SetBinError(8,15.01628);
   wqq_stack_2->SetBinError(9,5.356805);
   wqq_stack_2->SetBinError(10,1.259652);
   wqq_stack_2->SetBinError(11,2.458119e-07);
   wqq_stack_2->SetBinError(12,2.458119e-07);
   wqq_stack_2->SetBinError(13,2.458119e-07);
   wqq_stack_2->SetBinError(14,2.458119e-07);
   wqq_stack_2->SetBinError(15,2.458119e-07);
   wqq_stack_2->SetBinError(16,2.458119e-07);
   wqq_stack_2->SetBinError(17,2.458119e-07);
   wqq_stack_2->SetBinError(18,2.458119e-07);
   wqq_stack_2->SetBinError(19,2.458119e-07);
   wqq_stack_2->SetBinError(20,2.458119e-07);
   wqq_stack_2->SetBinError(21,2.458119e-07);
   wqq_stack_2->SetBinError(22,2.458119e-07);
   wqq_stack_2->SetBinError(23,2.458119e-07);
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
   zqq_stack_3->SetBinError(1,4.941627e-07);
   zqq_stack_3->SetBinError(2,0.4630006);
   zqq_stack_3->SetBinError(3,1.430927);
   zqq_stack_3->SetBinError(4,2.493634);
   zqq_stack_3->SetBinError(5,3.715867);
   zqq_stack_3->SetBinError(6,19.21952);
   zqq_stack_3->SetBinError(7,21.14472);
   zqq_stack_3->SetBinError(8,33.38837);
   zqq_stack_3->SetBinError(9,26.28551);
   zqq_stack_3->SetBinError(10,22.32536);
   zqq_stack_3->SetBinError(11,4.941627e-07);
   zqq_stack_3->SetBinError(12,4.941627e-07);
   zqq_stack_3->SetBinError(13,4.941627e-07);
   zqq_stack_3->SetBinError(14,4.941627e-07);
   zqq_stack_3->SetBinError(15,4.941627e-07);
   zqq_stack_3->SetBinError(16,4.941627e-07);
   zqq_stack_3->SetBinError(17,4.941627e-07);
   zqq_stack_3->SetBinError(18,4.941627e-07);
   zqq_stack_3->SetBinError(19,4.941627e-07);
   zqq_stack_3->SetBinError(20,4.941627e-07);
   zqq_stack_3->SetBinError(21,4.941627e-07);
   zqq_stack_3->SetBinError(22,4.941627e-07);
   zqq_stack_3->SetBinError(23,4.941627e-07);
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
   
   TH1F *hsigpass_cat5_2016_prefit_stack_4 = new TH1F("hsigpass_cat5_2016_prefit_stack_4","hqq125 in cat5_2016_pass_cat5",23,40,201);
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
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(1,2.464413e-05);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(2,0.03609232);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(3,155.6546);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(4,0.01183154);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(5,16.15071);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(6,30.23195);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(7,59.30645);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(8,201.4617);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(9,312.9365);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(10,607.2933);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(11,2.464413e-05);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(12,2.464413e-05);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(13,2.464413e-05);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(14,1711.796);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(15,432.1237);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(16,42.77318);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(17,0.4601952);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(18,0.04831168);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(19,0.02740942);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(20,0.06571709);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(21,0.02354123);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(22,0.01158931);
   hsigpass_cat5_2016_prefit_stack_4->SetBinError(23,0.01246662);
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
   
   Double_t data_copy_fx3019[23] = {
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
   Double_t data_copy_fy3019[23] = {
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
   Double_t data_copy_felx3019[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3019[23] = {
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
   Double_t data_copy_fehx3019[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3019[23] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3019,data_copy_fy3019,data_copy_felx3019,data_copy_fehx3019,data_copy_fely3019,data_copy_fehy3019);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat5_2016_pass_cat5");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3019 = new TH1F("Graph_data_copy3019","tqq in cat5_2016_pass_cat5",100,28.1,212.9);
   Graph_data_copy3019->SetMinimum(0);
   Graph_data_copy3019->SetMaximum(408.0126);
   Graph_data_copy3019->SetDirectory(0);
   Graph_data_copy3019->SetStats(0);
   Graph_data_copy3019->SetLineStyle(0);
   Graph_data_copy3019->SetMarkerStyle(20);
   Graph_data_copy3019->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3019->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3019->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3019->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3019->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3019->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3019->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3019->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3019->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3019->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3019->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3019->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3019);
   
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
   
   TH1F *htotpass_cat5_2016_prefit_copy__77 = new TH1F("htotpass_cat5_2016_prefit_copy__77","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(1,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(2,230.9984);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(3,256.8488);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(4,280.3692);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(5,294.8011);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(6,292.5526);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(7,375.1155);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(8,342.4725);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(9,279.8683);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(10,218.2888);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(11,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(12,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(13,2.747104e-06);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(14,165.88);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(15,152.5427);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(16,141.8509);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(17,126.6908);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(18,115.5139);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(19,104.1334);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(20,93.77134);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(21,83.22814);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(22,71.33533);
   htotpass_cat5_2016_prefit_copy__77->SetBinContent(23,59.1384);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(1,5.519241e-07);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(2,12.18877);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(3,8.883511);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(4,8.407978);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(5,9.585452);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(6,25.2007);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(7,34.37338);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(8,37.58783);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(9,27.58075);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(10,24.51365);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(11,5.519241e-07);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(12,5.519241e-07);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(13,5.519241e-07);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(14,8.468156);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(15,7.645612);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(16,5.198665);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(17,4.232075);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(18,3.215776);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(19,3.005339);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(20,3.258632);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(21,3.14598);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(22,2.784876);
   htotpass_cat5_2016_prefit_copy__77->SetBinError(23,2.801112);
   htotpass_cat5_2016_prefit_copy__77->SetMaximum(562.6732);
   htotpass_cat5_2016_prefit_copy__77->SetEntries(92);
   htotpass_cat5_2016_prefit_copy__77->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit_copy__77->SetFillColor(ci);
   htotpass_cat5_2016_prefit_copy__77->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_prefit_copy__77->SetLineColor(ci);
   htotpass_cat5_2016_prefit_copy__77->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_prefit_copy__77->SetMarkerColor(ci);
   htotpass_cat5_2016_prefit_copy__77->SetMarkerSize(0);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_prefit_copy__77->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit_copy__77->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_prefit_copy__77->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit_copy__77->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_prefit_copy__77->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_prefit_copy__77->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_prefit_copy__77->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit_copy__77->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_prefit_copy__77->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_prefit_copy__77->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_prefit_copy__77->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_prefit_copy__77->Draw("sameaxis");
   p12pass_cat5_2016_prefit->Modified();
   cpass_cat5_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_prefit
   TPad *p22pass_cat5_2016_prefit = new TPad("p22pass_cat5_2016_prefit", "p22pass_cat5_2016_prefit",0,0,1,0.3);
   p22pass_cat5_2016_prefit->Draw();
   p22pass_cat5_2016_prefit->cd();
   p22pass_cat5_2016_prefit->Range(13.7027,-11.33508,221.8108,9.781843);
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
   
   TH1F *iOneWithErrorspass_cat5_2016_prefit__78 = new TH1F("iOneWithErrorspass_cat5_2016_prefit__78","",23,40,201);
   iOneWithErrorspass_cat5_2016_prefit__78->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_prefit__78->SetMaximum(8.725997);
   iOneWithErrorspass_cat5_2016_prefit__78->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit__78->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_prefit__78->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit__78->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_prefit__78->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit__78->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_prefit__78->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_prefit__78->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_prefit__78->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit__78->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit__78->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit__78->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit__78->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit__78->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_20 = new TH1F("hstack_stack_20","hstack",23,40,201);
   hstack_stack_20->SetMinimum(-1711.54);
   hstack_stack_20->SetMaximum(1797.655);
   hstack_stack_20->SetDirectory(0);
   hstack_stack_20->SetStats(0);
   hstack_stack_20->SetLineStyle(0);
   hstack_stack_20->SetMarkerStyle(20);
   hstack_stack_20->GetXaxis()->SetLabelFont(42);
   hstack_stack_20->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_20->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_20->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_20->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_20->GetXaxis()->SetTitleFont(42);
   hstack_stack_20->GetYaxis()->SetLabelFont(42);
   hstack_stack_20->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_20->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_20->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_20->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_20->GetYaxis()->SetTitleFont(42);
   hstack_stack_20->GetZaxis()->SetLabelFont(42);
   hstack_stack_20->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_20->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_20->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_20->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_20);
   
   
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
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(1,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(2,0.01776468);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(3,2.812232);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(4,4.490343);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(5,5.928288);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(6,15.0917);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(7,25.94583);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(8,15.01628);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(9,5.356805);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(10,1.259652);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(11,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(12,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(13,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(14,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(15,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(16,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(17,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(18,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(19,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(20,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(21,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(22,2.458119e-07);
   sigHistResidualwqqpass_cat5_2016_prefit_stack_1->SetBinError(23,2.458119e-07);
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
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(1,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(2,0.4630006);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(3,1.430927);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(4,2.493634);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(5,3.715867);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(6,19.21952);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(7,21.14472);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(8,33.38837);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(9,26.28551);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(10,22.32536);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(11,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(12,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(13,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(14,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(15,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(16,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(17,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(18,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(19,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(20,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(21,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(22,4.941627e-07);
   sigHistResidualzqqpass_cat5_2016_prefit_stack_2->SetBinError(23,4.941627e-07);
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
   
   TH1F *sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3","hqq125 in cat5_2016_pass_cat5",23,40,201);
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
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(1,2.464413e-05);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(2,0.03609232);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(3,155.6546);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(4,0.01183154);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(5,16.15071);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(6,30.23195);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(7,59.30645);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(8,201.4617);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(9,312.9365);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(10,607.2933);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(11,2.464413e-05);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(12,2.464413e-05);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(13,2.464413e-05);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(14,1711.796);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(15,432.1237);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(16,42.77318);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(17,0.4601952);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(18,0.04831168);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(19,0.02740942);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(20,0.06571709);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(21,0.02354123);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(22,0.01158931);
   sigHistResidualhsigpass_cat5_2016_prefitpass_cat5_2016_prefit_stack_3->SetBinError(23,0.01246662);
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
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_prefit__79 = new TH1F("iOneWithErrorsLinepass_cat5_2016_prefit__79","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_prefit__79->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fx3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fy3020[23] = {
   0,
   3.16841,
   3.10119,
   2.067395,
   2.696183,
   3.97898,
   5.409958,
   5.817332,
   1.735545,
   2.890909,
   0,
   0,
   0,
   2.490438,
   0.2557759,
   2.389397,
   1.544174,
   1.466579,
   -0.01309952,
   2.113034,
   1.091883,
   0.1737058,
   2.605442};
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_felx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fely3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fehx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_prefit_fehy3020[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_prefit_fx3020,Graph_from_iRatiopass_cat5_2016_prefit_fy3020,Graph_from_iRatiopass_cat5_2016_prefit_felx3020,Graph_from_iRatiopass_cat5_2016_prefit_fehx3020,Graph_from_iRatiopass_cat5_2016_prefit_fely3020,Graph_from_iRatiopass_cat5_2016_prefit_fehy3020);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_prefit3020 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_prefit3020","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->SetMinimum(-1.796143);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->SetMaximum(7.600375);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_prefit3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_prefit3020);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_prefit_copy__80 = new TH1F("iOneWithErrorspass_cat5_2016_prefit_copy__80","",23,40,201);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetMaximum(8.725997);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetEntries(184);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_prefit_copy__80->Draw("sameaxis");
   p22pass_cat5_2016_prefit->Modified();
   cpass_cat5_2016_prefit->cd();
   cpass_cat5_2016_prefit->Modified();
   cpass_cat5_2016_prefit->cd();
   cpass_cat5_2016_prefit->SetSelected(cpass_cat5_2016_prefit);
}
