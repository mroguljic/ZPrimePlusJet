void mlfit_pass_cat6_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat6_2016_prefit/cpass_cat6_2016_prefit
//=========  (Wed Sep  4 11:54:13 2019) by ROOT version 6.12/07
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
   p12pass_cat6_2016_prefit->Range(13.7027,-5.636617,221.8108,276.1942);
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
   
   TH1F *htotpass_cat6_2016_prefit__89 = new TH1F("htotpass_cat6_2016_prefit__89","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_prefit__89->SetBinContent(1,1.578107e-06);
   htotpass_cat6_2016_prefit__89->SetBinContent(2,91.5517);
   htotpass_cat6_2016_prefit__89->SetBinContent(3,104.123);
   htotpass_cat6_2016_prefit__89->SetBinContent(4,110.0129);
   htotpass_cat6_2016_prefit__89->SetBinContent(5,125.8651);
   htotpass_cat6_2016_prefit__89->SetBinContent(6,130.7361);
   htotpass_cat6_2016_prefit__89->SetBinContent(7,165.3408);
   htotpass_cat6_2016_prefit__89->SetBinContent(8,155.4202);
   htotpass_cat6_2016_prefit__89->SetBinContent(9,145.8686);
   htotpass_cat6_2016_prefit__89->SetBinContent(10,101.724);
   htotpass_cat6_2016_prefit__89->SetBinContent(11,1.578107e-06);
   htotpass_cat6_2016_prefit__89->SetBinContent(12,1.578107e-06);
   htotpass_cat6_2016_prefit__89->SetBinContent(13,1.578107e-06);
   htotpass_cat6_2016_prefit__89->SetBinContent(14,74.2819);
   htotpass_cat6_2016_prefit__89->SetBinContent(15,64.96438);
   htotpass_cat6_2016_prefit__89->SetBinContent(16,62.49262);
   htotpass_cat6_2016_prefit__89->SetBinContent(17,56.90559);
   htotpass_cat6_2016_prefit__89->SetBinContent(18,52.59089);
   htotpass_cat6_2016_prefit__89->SetBinContent(19,50.5664);
   htotpass_cat6_2016_prefit__89->SetBinContent(20,44.97956);
   htotpass_cat6_2016_prefit__89->SetBinContent(21,41.32833);
   htotpass_cat6_2016_prefit__89->SetBinContent(22,38.21875);
   htotpass_cat6_2016_prefit__89->SetBinContent(23,35.43926);
   htotpass_cat6_2016_prefit__89->SetBinError(1,3.844202e-07);
   htotpass_cat6_2016_prefit__89->SetBinError(2,7.200374);
   htotpass_cat6_2016_prefit__89->SetBinError(3,4.878814);
   htotpass_cat6_2016_prefit__89->SetBinError(4,6.24319);
   htotpass_cat6_2016_prefit__89->SetBinError(5,6.972402);
   htotpass_cat6_2016_prefit__89->SetBinError(6,15.97361);
   htotpass_cat6_2016_prefit__89->SetBinError(7,18.34823);
   htotpass_cat6_2016_prefit__89->SetBinError(8,18.52345);
   htotpass_cat6_2016_prefit__89->SetBinError(9,22.39828);
   htotpass_cat6_2016_prefit__89->SetBinError(10,16.93489);
   htotpass_cat6_2016_prefit__89->SetBinError(11,3.844202e-07);
   htotpass_cat6_2016_prefit__89->SetBinError(12,3.844202e-07);
   htotpass_cat6_2016_prefit__89->SetBinError(13,3.844202e-07);
   htotpass_cat6_2016_prefit__89->SetBinError(14,3.868121);
   htotpass_cat6_2016_prefit__89->SetBinError(15,3.561434);
   htotpass_cat6_2016_prefit__89->SetBinError(16,3.468964);
   htotpass_cat6_2016_prefit__89->SetBinError(17,2.106889);
   htotpass_cat6_2016_prefit__89->SetBinError(18,1.953816);
   htotpass_cat6_2016_prefit__89->SetBinError(19,2.151094);
   htotpass_cat6_2016_prefit__89->SetBinError(20,2.127932);
   htotpass_cat6_2016_prefit__89->SetBinError(21,2.078814);
   htotpass_cat6_2016_prefit__89->SetBinError(22,2.271774);
   htotpass_cat6_2016_prefit__89->SetBinError(23,2.485197);
   htotpass_cat6_2016_prefit__89->SetMinimum(0);
   htotpass_cat6_2016_prefit__89->SetMaximum(248.0111);
   htotpass_cat6_2016_prefit__89->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__89->SetFillColor(ci);
   htotpass_cat6_2016_prefit__89->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__89->SetLineColor(ci);
   htotpass_cat6_2016_prefit__89->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_prefit__89->SetMarkerColor(ci);
   htotpass_cat6_2016_prefit__89->SetMarkerSize(0);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_prefit__89->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__89->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_prefit__89->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__89->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_prefit__89->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_prefit__89->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_prefit__89->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__89->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__89->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__89->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__89->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__89->Draw("");
   
   TH1F *htot_linepass_cat6_2016_prefit__90 = new TH1F("htot_linepass_cat6_2016_prefit__90","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(1,1.578107e-06);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(2,91.5517);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(3,104.123);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(4,110.0129);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(5,125.8651);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(6,130.7361);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(7,165.3408);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(8,155.4202);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(9,145.8686);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(10,101.724);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(11,1.578107e-06);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(12,1.578107e-06);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(13,1.578107e-06);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(14,74.2819);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(15,64.96438);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(16,62.49262);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(17,56.90559);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(18,52.59089);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(19,50.5664);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(20,44.97956);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(21,41.32833);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(22,38.21875);
   htot_linepass_cat6_2016_prefit__90->SetBinContent(23,35.43926);
   htot_linepass_cat6_2016_prefit__90->SetBinError(1,3.844202e-07);
   htot_linepass_cat6_2016_prefit__90->SetBinError(2,7.200374);
   htot_linepass_cat6_2016_prefit__90->SetBinError(3,4.878814);
   htot_linepass_cat6_2016_prefit__90->SetBinError(4,6.24319);
   htot_linepass_cat6_2016_prefit__90->SetBinError(5,6.972402);
   htot_linepass_cat6_2016_prefit__90->SetBinError(6,15.97361);
   htot_linepass_cat6_2016_prefit__90->SetBinError(7,18.34823);
   htot_linepass_cat6_2016_prefit__90->SetBinError(8,18.52345);
   htot_linepass_cat6_2016_prefit__90->SetBinError(9,22.39828);
   htot_linepass_cat6_2016_prefit__90->SetBinError(10,16.93489);
   htot_linepass_cat6_2016_prefit__90->SetBinError(11,3.844202e-07);
   htot_linepass_cat6_2016_prefit__90->SetBinError(12,3.844202e-07);
   htot_linepass_cat6_2016_prefit__90->SetBinError(13,3.844202e-07);
   htot_linepass_cat6_2016_prefit__90->SetBinError(14,3.868121);
   htot_linepass_cat6_2016_prefit__90->SetBinError(15,3.561434);
   htot_linepass_cat6_2016_prefit__90->SetBinError(16,3.468964);
   htot_linepass_cat6_2016_prefit__90->SetBinError(17,2.106889);
   htot_linepass_cat6_2016_prefit__90->SetBinError(18,1.953816);
   htot_linepass_cat6_2016_prefit__90->SetBinError(19,2.151094);
   htot_linepass_cat6_2016_prefit__90->SetBinError(20,2.127932);
   htot_linepass_cat6_2016_prefit__90->SetBinError(21,2.078814);
   htot_linepass_cat6_2016_prefit__90->SetBinError(22,2.271774);
   htot_linepass_cat6_2016_prefit__90->SetBinError(23,2.485197);
   htot_linepass_cat6_2016_prefit__90->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_prefit__90->SetFillColor(ci);
   htot_linepass_cat6_2016_prefit__90->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_prefit__90->SetLineColor(ci);
   htot_linepass_cat6_2016_prefit__90->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_prefit__90->SetMarkerColor(ci);
   htot_linepass_cat6_2016_prefit__90->SetMarkerSize(0);
   htot_linepass_cat6_2016_prefit__90->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_prefit__90->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_prefit__90->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_prefit__90->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_prefit__90->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_prefit__90->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_prefit__90->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_prefit__90->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_prefit__90->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_prefit__90->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_prefit__90->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_prefit__90->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_prefit__90->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_prefit__90->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_prefit__90->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_prefit__90->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_prefit__90->Draw("histsame");
   
   TH1F *qcd__91 = new TH1F("qcd__91","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__91->SetBinContent(2,91.5517);
   qcd__91->SetBinContent(3,103.6916);
   qcd__91->SetBinContent(4,107.0499);
   qcd__91->SetBinContent(5,106.8064);
   qcd__91->SetBinContent(6,107.5297);
   qcd__91->SetBinContent(7,99.35639);
   qcd__91->SetBinContent(8,94.8745);
   qcd__91->SetBinContent(9,91.37515);
   qcd__91->SetBinContent(10,86.15089);
   qcd__91->SetBinContent(14,66.24609);
   qcd__91->SetBinContent(15,61.68219);
   qcd__91->SetBinContent(16,57.52125);
   qcd__91->SetBinContent(17,55.16832);
   qcd__91->SetBinContent(18,51.31687);
   qcd__91->SetBinContent(19,48.71943);
   qcd__91->SetBinContent(20,43.23029);
   qcd__91->SetBinContent(21,40.86147);
   qcd__91->SetBinContent(22,38.21875);
   qcd__91->SetBinContent(23,35.02198);
   qcd__91->SetBinError(2,7.200374);
   qcd__91->SetBinError(3,4.740743);
   qcd__91->SetBinError(4,3.792132);
   qcd__91->SetBinError(5,3.668669);
   qcd__91->SetBinError(6,3.847858);
   qcd__91->SetBinError(7,3.707382);
   qcd__91->SetBinError(8,3.635243);
   qcd__91->SetBinError(9,3.536971);
   qcd__91->SetBinError(10,3.321364);
   qcd__91->SetBinError(14,2.302425);
   qcd__91->SetBinError(15,2.085507);
   qcd__91->SetBinError(16,1.918685);
   qcd__91->SetBinError(17,1.861856);
   qcd__91->SetBinError(18,1.815048);
   qcd__91->SetBinError(19,1.878306);
   qcd__91->SetBinError(20,1.882055);
   qcd__91->SetBinError(21,2.061852);
   qcd__91->SetBinError(22,2.271774);
   qcd__91->SetBinError(23,2.473884);
   qcd__91->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__91->SetLineColor(ci);
   qcd__91->SetLineStyle(2);
   qcd__91->SetLineWidth(2);
   qcd__91->GetXaxis()->SetTitle("x");
   qcd__91->GetXaxis()->SetLabelFont(42);
   qcd__91->GetXaxis()->SetLabelSize(0.035);
   qcd__91->GetXaxis()->SetTitleSize(0.035);
   qcd__91->GetXaxis()->SetTitleFont(42);
   qcd__91->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__91->GetYaxis()->SetLabelFont(42);
   qcd__91->GetYaxis()->SetLabelSize(0.035);
   qcd__91->GetYaxis()->SetTitleSize(0.035);
   qcd__91->GetYaxis()->SetTitleOffset(0);
   qcd__91->GetYaxis()->SetTitleFont(42);
   qcd__91->GetZaxis()->SetLabelFont(42);
   qcd__91->GetZaxis()->SetLabelSize(0.035);
   qcd__91->GetZaxis()->SetTitleSize(0.035);
   qcd__91->GetZaxis()->SetTitleFont(42);
   qcd__91->Draw("hist sames");
   
   TH1F *htotpass_cat6_2016_prefit__92 = new TH1F("htotpass_cat6_2016_prefit__92","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_prefit__92->SetBinContent(1,1.578107e-06);
   htotpass_cat6_2016_prefit__92->SetBinContent(2,91.5517);
   htotpass_cat6_2016_prefit__92->SetBinContent(3,104.123);
   htotpass_cat6_2016_prefit__92->SetBinContent(4,110.0129);
   htotpass_cat6_2016_prefit__92->SetBinContent(5,125.8651);
   htotpass_cat6_2016_prefit__92->SetBinContent(6,130.7361);
   htotpass_cat6_2016_prefit__92->SetBinContent(7,165.3408);
   htotpass_cat6_2016_prefit__92->SetBinContent(8,155.4202);
   htotpass_cat6_2016_prefit__92->SetBinContent(9,145.8686);
   htotpass_cat6_2016_prefit__92->SetBinContent(10,101.724);
   htotpass_cat6_2016_prefit__92->SetBinContent(11,1.578107e-06);
   htotpass_cat6_2016_prefit__92->SetBinContent(12,1.578107e-06);
   htotpass_cat6_2016_prefit__92->SetBinContent(13,1.578107e-06);
   htotpass_cat6_2016_prefit__92->SetBinContent(14,74.2819);
   htotpass_cat6_2016_prefit__92->SetBinContent(15,64.96438);
   htotpass_cat6_2016_prefit__92->SetBinContent(16,62.49262);
   htotpass_cat6_2016_prefit__92->SetBinContent(17,56.90559);
   htotpass_cat6_2016_prefit__92->SetBinContent(18,52.59089);
   htotpass_cat6_2016_prefit__92->SetBinContent(19,50.5664);
   htotpass_cat6_2016_prefit__92->SetBinContent(20,44.97956);
   htotpass_cat6_2016_prefit__92->SetBinContent(21,41.32833);
   htotpass_cat6_2016_prefit__92->SetBinContent(22,38.21875);
   htotpass_cat6_2016_prefit__92->SetBinContent(23,35.43926);
   htotpass_cat6_2016_prefit__92->SetBinError(1,3.844202e-07);
   htotpass_cat6_2016_prefit__92->SetBinError(2,7.200374);
   htotpass_cat6_2016_prefit__92->SetBinError(3,4.878814);
   htotpass_cat6_2016_prefit__92->SetBinError(4,6.24319);
   htotpass_cat6_2016_prefit__92->SetBinError(5,6.972402);
   htotpass_cat6_2016_prefit__92->SetBinError(6,15.97361);
   htotpass_cat6_2016_prefit__92->SetBinError(7,18.34823);
   htotpass_cat6_2016_prefit__92->SetBinError(8,18.52345);
   htotpass_cat6_2016_prefit__92->SetBinError(9,22.39828);
   htotpass_cat6_2016_prefit__92->SetBinError(10,16.93489);
   htotpass_cat6_2016_prefit__92->SetBinError(11,3.844202e-07);
   htotpass_cat6_2016_prefit__92->SetBinError(12,3.844202e-07);
   htotpass_cat6_2016_prefit__92->SetBinError(13,3.844202e-07);
   htotpass_cat6_2016_prefit__92->SetBinError(14,3.868121);
   htotpass_cat6_2016_prefit__92->SetBinError(15,3.561434);
   htotpass_cat6_2016_prefit__92->SetBinError(16,3.468964);
   htotpass_cat6_2016_prefit__92->SetBinError(17,2.106889);
   htotpass_cat6_2016_prefit__92->SetBinError(18,1.953816);
   htotpass_cat6_2016_prefit__92->SetBinError(19,2.151094);
   htotpass_cat6_2016_prefit__92->SetBinError(20,2.127932);
   htotpass_cat6_2016_prefit__92->SetBinError(21,2.078814);
   htotpass_cat6_2016_prefit__92->SetBinError(22,2.271774);
   htotpass_cat6_2016_prefit__92->SetBinError(23,2.485197);
   htotpass_cat6_2016_prefit__92->SetMinimum(0);
   htotpass_cat6_2016_prefit__92->SetMaximum(248.0111);
   htotpass_cat6_2016_prefit__92->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__92->SetFillColor(ci);
   htotpass_cat6_2016_prefit__92->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit__92->SetLineColor(ci);
   htotpass_cat6_2016_prefit__92->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_prefit__92->SetMarkerColor(ci);
   htotpass_cat6_2016_prefit__92->SetMarkerSize(0);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_prefit__92->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__92->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_prefit__92->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__92->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_prefit__92->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_prefit__92->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_prefit__92->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__92->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit__92->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit__92->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit__92->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit__92->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis23[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_23 = new TH1F("hstackMC_stack_23","hstackMC",23, xAxis23);
   hstackMC_stack_23->SetMinimum(-174.8561);
   hstackMC_stack_23->SetMaximum(187.4339);
   hstackMC_stack_23->SetDirectory(0);
   hstackMC_stack_23->SetStats(0);
   hstackMC_stack_23->SetLineStyle(0);
   hstackMC_stack_23->SetMarkerStyle(20);
   hstackMC_stack_23->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_23->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_23->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_23->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_23->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_23->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_23->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_23->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_23->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_23->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_23->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_23->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_23->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_23->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_23->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_23->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_23->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_23);
   
   Double_t xAxis24[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat6_2016_pass_cat6",23, xAxis24);
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
   tqq_stack_1->SetBinError(3,0.2448851);
   tqq_stack_1->SetBinError(4,0.4738283);
   tqq_stack_1->SetBinError(5,1.007563);
   tqq_stack_1->SetBinError(6,2.137695);
   tqq_stack_1->SetBinError(7,3.769376);
   tqq_stack_1->SetBinError(8,2.267068);
   tqq_stack_1->SetBinError(9,1.41354);
   tqq_stack_1->SetBinError(10,0.715071);
   tqq_stack_1->SetBinError(14,2.07571);
   tqq_stack_1->SetBinError(15,1.863108);
   tqq_stack_1->SetBinError(16,2.821958);
   tqq_stack_1->SetBinError(17,0.9861414);
   tqq_stack_1->SetBinError(18,0.7231848);
   tqq_stack_1->SetBinError(19,1.048413);
   tqq_stack_1->SetBinError(20,0.9929578);
   tqq_stack_1->SetBinError(21,0.2650108);
   tqq_stack_1->SetBinError(23,0.2368661);
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
   wqq_stack_2->SetBinError(1,1.498745e-07);
   wqq_stack_2->SetBinError(2,1.498745e-07);
   wqq_stack_2->SetBinError(3,0.9162614);
   wqq_stack_2->SetBinError(4,4.330569);
   wqq_stack_2->SetBinError(5,5.330826);
   wqq_stack_2->SetBinError(6,6.820966);
   wqq_stack_2->SetBinError(7,9.591887);
   wqq_stack_2->SetBinError(8,8.285985);
   wqq_stack_2->SetBinError(9,5.607888);
   wqq_stack_2->SetBinError(10,1.086586);
   wqq_stack_2->SetBinError(11,1.498745e-07);
   wqq_stack_2->SetBinError(12,1.498745e-07);
   wqq_stack_2->SetBinError(13,1.498745e-07);
   wqq_stack_2->SetBinError(14,1.498745e-07);
   wqq_stack_2->SetBinError(15,1.498745e-07);
   wqq_stack_2->SetBinError(16,1.498745e-07);
   wqq_stack_2->SetBinError(17,1.498745e-07);
   wqq_stack_2->SetBinError(18,1.498745e-07);
   wqq_stack_2->SetBinError(19,1.498745e-07);
   wqq_stack_2->SetBinError(20,1.498745e-07);
   wqq_stack_2->SetBinError(21,1.498745e-07);
   wqq_stack_2->SetBinError(22,1.498745e-07);
   wqq_stack_2->SetBinError(23,1.498745e-07);
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
   zqq_stack_3->SetBinError(1,3.540008e-07);
   zqq_stack_3->SetBinError(2,3.540008e-07);
   zqq_stack_3->SetBinError(3,0.6547301);
   zqq_stack_3->SetBinError(4,2.370405);
   zqq_stack_3->SetBinError(5,2.392146);
   zqq_stack_3->SetBinError(6,13.75699);
   zqq_stack_3->SetBinError(7,14.72074);
   zqq_stack_3->SetBinError(8,16.00331);
   zqq_stack_3->SetBinError(9,21.34774);
   zqq_stack_3->SetBinError(10,16.55497);
   zqq_stack_3->SetBinError(11,3.540008e-07);
   zqq_stack_3->SetBinError(12,3.540008e-07);
   zqq_stack_3->SetBinError(13,3.540008e-07);
   zqq_stack_3->SetBinError(14,2.313573);
   zqq_stack_3->SetBinError(15,2.20529);
   zqq_stack_3->SetBinError(16,0.6236269);
   zqq_stack_3->SetBinError(17,3.540008e-07);
   zqq_stack_3->SetBinError(18,3.540008e-07);
   zqq_stack_3->SetBinError(19,3.540008e-07);
   zqq_stack_3->SetBinError(20,3.540008e-07);
   zqq_stack_3->SetBinError(21,3.540008e-07);
   zqq_stack_3->SetBinError(22,3.540008e-07);
   zqq_stack_3->SetBinError(23,3.540008e-07);
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
   
   TH1F *hsigpass_cat6_2016_prefit_stack_4 = new TH1F("hsigpass_cat6_2016_prefit_stack_4","hqq125 in cat6_2016_pass_cat6",23,40,201);
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
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(1,2.820039e-06);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(2,2.820039e-06);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(3,2.820039e-06);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(4,0.01627744);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(5,0.09248679);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(6,0.2843942);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(7,0.6756405);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(8,6.304027);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(9,20.54308);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(10,101.7062);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(11,2.820039e-06);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(12,2.820039e-06);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(13,2.820039e-06);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(14,176.6823);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(15,80.42573);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(16,16.73483);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(17,4.195874);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(18,0.04690539);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(19,0.01852742);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(20,0.09059933);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(21,0.05757477);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(22,0.05675133);
   hsigpass_cat6_2016_prefit_stack_4->SetBinError(23,0.02933224);
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
   
   Double_t data_copy_fx3023[23] = {
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
   Double_t data_copy_fy3023[23] = {
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
   Double_t data_copy_felx3023[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3023[23] = {
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
   Double_t data_copy_fehx3023[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3023[23] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3023,data_copy_fy3023,data_copy_felx3023,data_copy_fehx3023,data_copy_fely3023,data_copy_fehy3023);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat6_2016_pass_cat6");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3023 = new TH1F("Graph_data_copy3023","tqq in cat6_2016_pass_cat6",100,28.1,212.9);
   Graph_data_copy3023->SetMinimum(0);
   Graph_data_copy3023->SetMaximum(217.492);
   Graph_data_copy3023->SetDirectory(0);
   Graph_data_copy3023->SetStats(0);
   Graph_data_copy3023->SetLineStyle(0);
   Graph_data_copy3023->SetMarkerStyle(20);
   Graph_data_copy3023->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3023->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3023->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3023->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3023->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3023->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3023->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3023->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3023->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3023->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3023->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3023->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3023);
   
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
   
   TH1F *htotpass_cat6_2016_prefit_copy__93 = new TH1F("htotpass_cat6_2016_prefit_copy__93","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(1,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(2,91.5517);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(3,104.123);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(4,110.0129);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(5,125.8651);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(6,130.7361);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(7,165.3408);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(8,155.4202);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(9,145.8686);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(10,101.724);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(11,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(12,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(13,1.578107e-06);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(14,74.2819);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(15,64.96438);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(16,62.49262);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(17,56.90559);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(18,52.59089);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(19,50.5664);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(20,44.97956);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(21,41.32833);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(22,38.21875);
   htotpass_cat6_2016_prefit_copy__93->SetBinContent(23,35.43926);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(1,3.844202e-07);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(2,7.200374);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(3,4.878814);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(4,6.24319);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(5,6.972402);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(6,15.97361);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(7,18.34823);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(8,18.52345);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(9,22.39828);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(10,16.93489);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(11,3.844202e-07);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(12,3.844202e-07);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(13,3.844202e-07);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(14,3.868121);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(15,3.561434);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(16,3.468964);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(17,2.106889);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(18,1.953816);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(19,2.151094);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(20,2.127932);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(21,2.078814);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(22,2.271774);
   htotpass_cat6_2016_prefit_copy__93->SetBinError(23,2.485197);
   htotpass_cat6_2016_prefit_copy__93->SetMaximum(248.0111);
   htotpass_cat6_2016_prefit_copy__93->SetEntries(92);
   htotpass_cat6_2016_prefit_copy__93->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit_copy__93->SetFillColor(ci);
   htotpass_cat6_2016_prefit_copy__93->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_prefit_copy__93->SetLineColor(ci);
   htotpass_cat6_2016_prefit_copy__93->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_prefit_copy__93->SetMarkerColor(ci);
   htotpass_cat6_2016_prefit_copy__93->SetMarkerSize(0);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_prefit_copy__93->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit_copy__93->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_prefit_copy__93->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit_copy__93->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_prefit_copy__93->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_prefit_copy__93->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_prefit_copy__93->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit_copy__93->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_prefit_copy__93->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_prefit_copy__93->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_prefit_copy__93->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_prefit_copy__93->Draw("sameaxis");
   p12pass_cat6_2016_prefit->Modified();
   cpass_cat6_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_prefit
   TPad *p22pass_cat6_2016_prefit = new TPad("p22pass_cat6_2016_prefit", "p22pass_cat6_2016_prefit",0,0,1,0.3);
   p22pass_cat6_2016_prefit->Draw();
   p22pass_cat6_2016_prefit->cd();
   p22pass_cat6_2016_prefit->Range(13.7027,-11.00912,221.8108,9.021278);
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
   
   TH1F *iOneWithErrorspass_cat6_2016_prefit__94 = new TH1F("iOneWithErrorspass_cat6_2016_prefit__94","",23,40,201);
   iOneWithErrorspass_cat6_2016_prefit__94->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_prefit__94->SetMaximum(8.019758);
   iOneWithErrorspass_cat6_2016_prefit__94->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit__94->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_prefit__94->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit__94->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_prefit__94->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit__94->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_prefit__94->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_prefit__94->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_prefit__94->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit__94->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit__94->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit__94->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit__94->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit__94->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_24 = new TH1F("hstack_stack_24","hstack",23,40,201);
   hstack_stack_24->SetMinimum(-176.4723);
   hstack_stack_24->SetMaximum(185.7368);
   hstack_stack_24->SetDirectory(0);
   hstack_stack_24->SetStats(0);
   hstack_stack_24->SetLineStyle(0);
   hstack_stack_24->SetMarkerStyle(20);
   hstack_stack_24->GetXaxis()->SetLabelFont(42);
   hstack_stack_24->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_24->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_24->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_24->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_24->GetXaxis()->SetTitleFont(42);
   hstack_stack_24->GetYaxis()->SetLabelFont(42);
   hstack_stack_24->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_24->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_24->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_24->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_24->GetYaxis()->SetTitleFont(42);
   hstack_stack_24->GetZaxis()->SetLabelFont(42);
   hstack_stack_24->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_24->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_24->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_24->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_24);
   
   
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
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(1,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(2,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(3,0.9162614);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(4,4.330569);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(5,5.330826);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(6,6.820966);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(7,9.591887);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(8,8.285985);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(9,5.607888);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(10,1.086586);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(11,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(12,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(13,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(14,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(15,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(16,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(17,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(18,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(19,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(20,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(21,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(22,1.498745e-07);
   sigHistResidualwqqpass_cat6_2016_prefit_stack_1->SetBinError(23,1.498745e-07);
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
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(1,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(2,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(3,0.6547301);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(4,2.370405);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(5,2.392146);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(6,13.75699);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(7,14.72074);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(8,16.00331);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(9,21.34774);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(10,16.55497);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(11,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(12,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(13,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(14,2.313573);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(15,2.20529);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(16,0.6236269);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(17,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(18,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(19,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(20,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(21,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(22,3.540008e-07);
   sigHistResidualzqqpass_cat6_2016_prefit_stack_2->SetBinError(23,3.540008e-07);
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
   
   TH1F *sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3","hqq125 in cat6_2016_pass_cat6",23,40,201);
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
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(1,2.820039e-06);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(2,2.820039e-06);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(3,2.820039e-06);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(4,0.01627744);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(5,0.09248679);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(6,0.2843942);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(7,0.6756405);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(8,6.304027);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(9,20.54308);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(10,101.7062);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(11,2.820039e-06);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(12,2.820039e-06);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(13,2.820039e-06);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(14,176.6823);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(15,80.42573);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(16,16.73483);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(17,4.195874);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(18,0.04690539);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(19,0.01852742);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(20,0.09059933);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(21,0.05757477);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(22,0.05675133);
   sigHistResidualhsigpass_cat6_2016_prefitpass_cat6_2016_prefit_stack_3->SetBinError(23,0.02933224);
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
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_prefit__95 = new TH1F("iOneWithErrorsLinepass_cat6_2016_prefit__95","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_prefit__95->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fx3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fy3024[23] = {
   0,
   3.231101,
   3.7751,
   2.28652,
   2.854003,
   4.469137,
   5.346506,
   4.040709,
   3.653081,
   3.218835,
   0,
   0,
   0,
   0.6249497,
   1.506307,
   1.19355,
   0.9922673,
   -0.514737,
   2.519195,
   2.103594,
   0.9532626,
   0.6284143,
   0.7458731};
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_felx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fely3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fehx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_prefit_fehy3024[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_prefit_fx3024,Graph_from_iRatiopass_cat6_2016_prefit_fy3024,Graph_from_iRatiopass_cat6_2016_prefit_felx3024,Graph_from_iRatiopass_cat6_2016_prefit_fehx3024,Graph_from_iRatiopass_cat6_2016_prefit_fely3024,Graph_from_iRatiopass_cat6_2016_prefit_fehy3024);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_prefit3024 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_prefit3024","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->SetMinimum(-2.300861);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->SetMaximum(7.13263);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_prefit3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_prefit3024);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_prefit_copy__96 = new TH1F("iOneWithErrorspass_cat6_2016_prefit_copy__96","",23,40,201);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetMaximum(8.019758);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetEntries(184);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_prefit_copy__96->Draw("sameaxis");
   p22pass_cat6_2016_prefit->Modified();
   cpass_cat6_2016_prefit->cd();
   cpass_cat6_2016_prefit->Modified();
   cpass_cat6_2016_prefit->cd();
   cpass_cat6_2016_prefit->SetSelected(cpass_cat6_2016_prefit);
}
