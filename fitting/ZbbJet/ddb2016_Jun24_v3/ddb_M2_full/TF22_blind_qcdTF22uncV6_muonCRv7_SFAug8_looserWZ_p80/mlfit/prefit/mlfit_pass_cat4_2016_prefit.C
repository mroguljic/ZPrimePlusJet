void mlfit_pass_cat4_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat4_2016_prefit/cpass_cat4_2016_prefit
//=========  (Wed Sep  4 11:54:13 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_prefit = new TCanvas("cpass_cat4_2016_prefit", "cpass_cat4_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_prefit->SetHighLightColor(2);
   cpass_cat4_2016_prefit->Range(0,0,1,1);
   cpass_cat4_2016_prefit->SetFillColor(0);
   cpass_cat4_2016_prefit->SetBorderMode(0);
   cpass_cat4_2016_prefit->SetBorderSize(2);
   cpass_cat4_2016_prefit->SetTickx(1);
   cpass_cat4_2016_prefit->SetTicky(1);
   cpass_cat4_2016_prefit->SetLeftMargin(0.16);
   cpass_cat4_2016_prefit->SetBottomMargin(0.13);
   cpass_cat4_2016_prefit->SetFrameFillStyle(0);
   cpass_cat4_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_prefit
   TPad *p12pass_cat4_2016_prefit = new TPad("p12pass_cat4_2016_prefit", "p12pass_cat4_2016_prefit",0,0.3,1,1);
   p12pass_cat4_2016_prefit->Draw();
   p12pass_cat4_2016_prefit->cd();
   p12pass_cat4_2016_prefit->Range(13.7027,-19.81681,221.8108,971.0236);
   p12pass_cat4_2016_prefit->SetFillColor(0);
   p12pass_cat4_2016_prefit->SetBorderMode(0);
   p12pass_cat4_2016_prefit->SetBorderSize(2);
   p12pass_cat4_2016_prefit->SetTickx(1);
   p12pass_cat4_2016_prefit->SetTicky(1);
   p12pass_cat4_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat4_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat4_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat4_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_prefit__57 = new TH1F("htotpass_cat4_2016_prefit__57","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_prefit__57->SetBinContent(1,4.046803e-06);
   htotpass_cat4_2016_prefit__57->SetBinContent(2,404.5145);
   htotpass_cat4_2016_prefit__57->SetBinContent(3,437.2776);
   htotpass_cat4_2016_prefit__57->SetBinContent(4,456.5234);
   htotpass_cat4_2016_prefit__57->SetBinContent(5,495.3049);
   htotpass_cat4_2016_prefit__57->SetBinContent(6,536.7052);
   htotpass_cat4_2016_prefit__57->SetBinContent(7,581.293);
   htotpass_cat4_2016_prefit__57->SetBinContent(8,539.6525);
   htotpass_cat4_2016_prefit__57->SetBinContent(9,455.7917);
   htotpass_cat4_2016_prefit__57->SetBinContent(10,376.545);
   htotpass_cat4_2016_prefit__57->SetBinContent(11,4.046803e-06);
   htotpass_cat4_2016_prefit__57->SetBinContent(12,4.046803e-06);
   htotpass_cat4_2016_prefit__57->SetBinContent(13,4.046803e-06);
   htotpass_cat4_2016_prefit__57->SetBinContent(14,281.0391);
   htotpass_cat4_2016_prefit__57->SetBinContent(15,254.6353);
   htotpass_cat4_2016_prefit__57->SetBinContent(16,227.4305);
   htotpass_cat4_2016_prefit__57->SetBinContent(17,207.7362);
   htotpass_cat4_2016_prefit__57->SetBinContent(18,176.8706);
   htotpass_cat4_2016_prefit__57->SetBinContent(19,154.5541);
   htotpass_cat4_2016_prefit__57->SetBinContent(20,130.0178);
   htotpass_cat4_2016_prefit__57->SetBinContent(21,108.0271);
   htotpass_cat4_2016_prefit__57->SetBinContent(22,88.19376);
   htotpass_cat4_2016_prefit__57->SetBinContent(23,68.88723);
   htotpass_cat4_2016_prefit__57->SetBinError(1,7.32391e-07);
   htotpass_cat4_2016_prefit__57->SetBinError(2,13.46889);
   htotpass_cat4_2016_prefit__57->SetBinError(3,9.598684);
   htotpass_cat4_2016_prefit__57->SetBinError(4,11.2858);
   htotpass_cat4_2016_prefit__57->SetBinError(5,16.49513);
   htotpass_cat4_2016_prefit__57->SetBinError(6,24.01765);
   htotpass_cat4_2016_prefit__57->SetBinError(7,34.30427);
   htotpass_cat4_2016_prefit__57->SetBinError(8,43.5213);
   htotpass_cat4_2016_prefit__57->SetBinError(9,29.23901);
   htotpass_cat4_2016_prefit__57->SetBinError(10,20.55918);
   htotpass_cat4_2016_prefit__57->SetBinError(11,7.32391e-07);
   htotpass_cat4_2016_prefit__57->SetBinError(12,7.32391e-07);
   htotpass_cat4_2016_prefit__57->SetBinError(13,7.32391e-07);
   htotpass_cat4_2016_prefit__57->SetBinError(14,12.06054);
   htotpass_cat4_2016_prefit__57->SetBinError(15,6.065018);
   htotpass_cat4_2016_prefit__57->SetBinError(16,6.834475);
   htotpass_cat4_2016_prefit__57->SetBinError(17,4.866476);
   htotpass_cat4_2016_prefit__57->SetBinError(18,4.316459);
   htotpass_cat4_2016_prefit__57->SetBinError(19,4.713825);
   htotpass_cat4_2016_prefit__57->SetBinError(20,4.039039);
   htotpass_cat4_2016_prefit__57->SetBinError(21,3.904982);
   htotpass_cat4_2016_prefit__57->SetBinError(22,3.844283);
   htotpass_cat4_2016_prefit__57->SetBinError(23,3.823169);
   htotpass_cat4_2016_prefit__57->SetMinimum(0);
   htotpass_cat4_2016_prefit__57->SetMaximum(871.9395);
   htotpass_cat4_2016_prefit__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__57->SetFillColor(ci);
   htotpass_cat4_2016_prefit__57->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__57->SetLineColor(ci);
   htotpass_cat4_2016_prefit__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_prefit__57->SetMarkerColor(ci);
   htotpass_cat4_2016_prefit__57->SetMarkerSize(0);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_prefit__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_prefit__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_prefit__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_prefit__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_prefit__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__57->Draw("");
   
   TH1F *htot_linepass_cat4_2016_prefit__58 = new TH1F("htot_linepass_cat4_2016_prefit__58","wqq in cat4_2016_pass_cat4",23,40,201);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(1,4.046803e-06);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(2,404.5145);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(3,437.2776);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(4,456.5234);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(5,495.3049);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(6,536.7052);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(7,581.293);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(8,539.6525);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(9,455.7917);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(10,376.545);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(11,4.046803e-06);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(12,4.046803e-06);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(13,4.046803e-06);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(14,281.0391);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(15,254.6353);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(16,227.4305);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(17,207.7362);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(18,176.8706);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(19,154.5541);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(20,130.0178);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(21,108.0271);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(22,88.19376);
   htot_linepass_cat4_2016_prefit__58->SetBinContent(23,68.88723);
   htot_linepass_cat4_2016_prefit__58->SetBinError(1,7.32391e-07);
   htot_linepass_cat4_2016_prefit__58->SetBinError(2,13.46889);
   htot_linepass_cat4_2016_prefit__58->SetBinError(3,9.598684);
   htot_linepass_cat4_2016_prefit__58->SetBinError(4,11.2858);
   htot_linepass_cat4_2016_prefit__58->SetBinError(5,16.49513);
   htot_linepass_cat4_2016_prefit__58->SetBinError(6,24.01765);
   htot_linepass_cat4_2016_prefit__58->SetBinError(7,34.30427);
   htot_linepass_cat4_2016_prefit__58->SetBinError(8,43.5213);
   htot_linepass_cat4_2016_prefit__58->SetBinError(9,29.23901);
   htot_linepass_cat4_2016_prefit__58->SetBinError(10,20.55918);
   htot_linepass_cat4_2016_prefit__58->SetBinError(11,7.32391e-07);
   htot_linepass_cat4_2016_prefit__58->SetBinError(12,7.32391e-07);
   htot_linepass_cat4_2016_prefit__58->SetBinError(13,7.32391e-07);
   htot_linepass_cat4_2016_prefit__58->SetBinError(14,12.06054);
   htot_linepass_cat4_2016_prefit__58->SetBinError(15,6.065018);
   htot_linepass_cat4_2016_prefit__58->SetBinError(16,6.834475);
   htot_linepass_cat4_2016_prefit__58->SetBinError(17,4.866476);
   htot_linepass_cat4_2016_prefit__58->SetBinError(18,4.316459);
   htot_linepass_cat4_2016_prefit__58->SetBinError(19,4.713825);
   htot_linepass_cat4_2016_prefit__58->SetBinError(20,4.039039);
   htot_linepass_cat4_2016_prefit__58->SetBinError(21,3.904982);
   htot_linepass_cat4_2016_prefit__58->SetBinError(22,3.844283);
   htot_linepass_cat4_2016_prefit__58->SetBinError(23,3.823169);
   htot_linepass_cat4_2016_prefit__58->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_prefit__58->SetFillColor(ci);
   htot_linepass_cat4_2016_prefit__58->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_prefit__58->SetLineColor(ci);
   htot_linepass_cat4_2016_prefit__58->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat4_2016_prefit__58->SetMarkerColor(ci);
   htot_linepass_cat4_2016_prefit__58->SetMarkerSize(0);
   htot_linepass_cat4_2016_prefit__58->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat4_2016_prefit__58->GetXaxis()->SetRange(2,23);
   htot_linepass_cat4_2016_prefit__58->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_prefit__58->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_prefit__58->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_prefit__58->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_prefit__58->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat4_2016_prefit__58->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_prefit__58->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat4_2016_prefit__58->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat4_2016_prefit__58->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat4_2016_prefit__58->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_prefit__58->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_prefit__58->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_prefit__58->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_prefit__58->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_prefit__58->Draw("histsame");
   
   TH1F *qcd__59 = new TH1F("qcd__59","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__59->SetBinContent(2,398.6573);
   qcd__59->SetBinContent(3,434.3032);
   qcd__59->SetBinContent(4,448.0343);
   qcd__59->SetBinContent(5,444.0414);
   qcd__59->SetBinContent(6,417.3368);
   qcd__59->SetBinContent(7,399.2141);
   qcd__59->SetBinContent(8,383.3141);
   qcd__59->SetBinContent(9,358.489);
   qcd__59->SetBinContent(10,339.1026);
   qcd__59->SetBinContent(14,265.8053);
   qcd__59->SetBinContent(15,248.6396);
   qcd__59->SetBinContent(16,219.7191);
   qcd__59->SetBinContent(17,203.554);
   qcd__59->SetBinContent(18,173.5798);
   qcd__59->SetBinContent(19,150.3806);
   qcd__59->SetBinContent(20,127.5812);
   qcd__59->SetBinContent(21,106.3056);
   qcd__59->SetBinContent(22,87.40369);
   qcd__59->SetBinContent(23,68.88722);
   qcd__59->SetBinError(2,13.18609);
   qcd__59->SetBinError(3,9.172588);
   qcd__59->SetBinError(4,7.66082);
   qcd__59->SetBinError(5,7.193409);
   qcd__59->SetBinError(6,6.809738);
   qcd__59->SetBinError(7,6.64281);
   qcd__59->SetBinError(8,6.478478);
   qcd__59->SetBinError(9,6.105536);
   qcd__59->SetBinError(10,5.774646);
   qcd__59->SetBinError(14,4.397899);
   qcd__59->SetBinError(15,4.157785);
   qcd__59->SetBinError(16,3.802294);
   qcd__59->SetBinError(17,3.76778);
   qcd__59->SetBinError(18,3.571898);
   qcd__59->SetBinError(19,3.573942);
   qcd__59->SetBinError(20,3.618544);
   qcd__59->SetBinError(21,3.693449);
   qcd__59->SetBinError(22,3.799994);
   qcd__59->SetBinError(23,3.823169);
   qcd__59->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__59->SetLineColor(ci);
   qcd__59->SetLineStyle(2);
   qcd__59->SetLineWidth(2);
   qcd__59->GetXaxis()->SetTitle("x");
   qcd__59->GetXaxis()->SetLabelFont(42);
   qcd__59->GetXaxis()->SetLabelSize(0.035);
   qcd__59->GetXaxis()->SetTitleSize(0.035);
   qcd__59->GetXaxis()->SetTitleFont(42);
   qcd__59->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__59->GetYaxis()->SetLabelFont(42);
   qcd__59->GetYaxis()->SetLabelSize(0.035);
   qcd__59->GetYaxis()->SetTitleSize(0.035);
   qcd__59->GetYaxis()->SetTitleOffset(0);
   qcd__59->GetYaxis()->SetTitleFont(42);
   qcd__59->GetZaxis()->SetLabelFont(42);
   qcd__59->GetZaxis()->SetLabelSize(0.035);
   qcd__59->GetZaxis()->SetTitleSize(0.035);
   qcd__59->GetZaxis()->SetTitleFont(42);
   qcd__59->Draw("hist sames");
   
   TH1F *htotpass_cat4_2016_prefit__60 = new TH1F("htotpass_cat4_2016_prefit__60","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_prefit__60->SetBinContent(1,4.046803e-06);
   htotpass_cat4_2016_prefit__60->SetBinContent(2,404.5145);
   htotpass_cat4_2016_prefit__60->SetBinContent(3,437.2776);
   htotpass_cat4_2016_prefit__60->SetBinContent(4,456.5234);
   htotpass_cat4_2016_prefit__60->SetBinContent(5,495.3049);
   htotpass_cat4_2016_prefit__60->SetBinContent(6,536.7052);
   htotpass_cat4_2016_prefit__60->SetBinContent(7,581.293);
   htotpass_cat4_2016_prefit__60->SetBinContent(8,539.6525);
   htotpass_cat4_2016_prefit__60->SetBinContent(9,455.7917);
   htotpass_cat4_2016_prefit__60->SetBinContent(10,376.545);
   htotpass_cat4_2016_prefit__60->SetBinContent(11,4.046803e-06);
   htotpass_cat4_2016_prefit__60->SetBinContent(12,4.046803e-06);
   htotpass_cat4_2016_prefit__60->SetBinContent(13,4.046803e-06);
   htotpass_cat4_2016_prefit__60->SetBinContent(14,281.0391);
   htotpass_cat4_2016_prefit__60->SetBinContent(15,254.6353);
   htotpass_cat4_2016_prefit__60->SetBinContent(16,227.4305);
   htotpass_cat4_2016_prefit__60->SetBinContent(17,207.7362);
   htotpass_cat4_2016_prefit__60->SetBinContent(18,176.8706);
   htotpass_cat4_2016_prefit__60->SetBinContent(19,154.5541);
   htotpass_cat4_2016_prefit__60->SetBinContent(20,130.0178);
   htotpass_cat4_2016_prefit__60->SetBinContent(21,108.0271);
   htotpass_cat4_2016_prefit__60->SetBinContent(22,88.19376);
   htotpass_cat4_2016_prefit__60->SetBinContent(23,68.88723);
   htotpass_cat4_2016_prefit__60->SetBinError(1,7.32391e-07);
   htotpass_cat4_2016_prefit__60->SetBinError(2,13.46889);
   htotpass_cat4_2016_prefit__60->SetBinError(3,9.598684);
   htotpass_cat4_2016_prefit__60->SetBinError(4,11.2858);
   htotpass_cat4_2016_prefit__60->SetBinError(5,16.49513);
   htotpass_cat4_2016_prefit__60->SetBinError(6,24.01765);
   htotpass_cat4_2016_prefit__60->SetBinError(7,34.30427);
   htotpass_cat4_2016_prefit__60->SetBinError(8,43.5213);
   htotpass_cat4_2016_prefit__60->SetBinError(9,29.23901);
   htotpass_cat4_2016_prefit__60->SetBinError(10,20.55918);
   htotpass_cat4_2016_prefit__60->SetBinError(11,7.32391e-07);
   htotpass_cat4_2016_prefit__60->SetBinError(12,7.32391e-07);
   htotpass_cat4_2016_prefit__60->SetBinError(13,7.32391e-07);
   htotpass_cat4_2016_prefit__60->SetBinError(14,12.06054);
   htotpass_cat4_2016_prefit__60->SetBinError(15,6.065018);
   htotpass_cat4_2016_prefit__60->SetBinError(16,6.834475);
   htotpass_cat4_2016_prefit__60->SetBinError(17,4.866476);
   htotpass_cat4_2016_prefit__60->SetBinError(18,4.316459);
   htotpass_cat4_2016_prefit__60->SetBinError(19,4.713825);
   htotpass_cat4_2016_prefit__60->SetBinError(20,4.039039);
   htotpass_cat4_2016_prefit__60->SetBinError(21,3.904982);
   htotpass_cat4_2016_prefit__60->SetBinError(22,3.844283);
   htotpass_cat4_2016_prefit__60->SetBinError(23,3.823169);
   htotpass_cat4_2016_prefit__60->SetMinimum(0);
   htotpass_cat4_2016_prefit__60->SetMaximum(871.9395);
   htotpass_cat4_2016_prefit__60->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__60->SetFillColor(ci);
   htotpass_cat4_2016_prefit__60->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit__60->SetLineColor(ci);
   htotpass_cat4_2016_prefit__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_prefit__60->SetMarkerColor(ci);
   htotpass_cat4_2016_prefit__60->SetMarkerSize(0);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_prefit__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_prefit__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_prefit__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_prefit__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_prefit__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit__60->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(-319.1573);
   hstackMC_stack_15->SetMaximum(342.6664);
   hstackMC_stack_15->SetDirectory(0);
   hstackMC_stack_15->SetStats(0);
   hstackMC_stack_15->SetLineStyle(0);
   hstackMC_stack_15->SetMarkerStyle(20);
   hstackMC_stack_15->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_15->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_15->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_15->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_15->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_15->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_15->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_15->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_15->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_15);
   
   Double_t xAxis16[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat4_2016_pass_cat4",23, xAxis16);
   tqq_stack_1->SetBinContent(2,3.191241);
   tqq_stack_1->SetBinContent(3,2.974454);
   tqq_stack_1->SetBinContent(4,2.962127);
   tqq_stack_1->SetBinContent(5,8.643989);
   tqq_stack_1->SetBinContent(6,14.10292);
   tqq_stack_1->SetBinContent(7,13.60646);
   tqq_stack_1->SetBinContent(8,13.85129);
   tqq_stack_1->SetBinContent(9,11.70682);
   tqq_stack_1->SetBinContent(10,11.96094);
   tqq_stack_1->SetBinContent(14,15.23375);
   tqq_stack_1->SetBinContent(15,5.995676);
   tqq_stack_1->SetBinContent(16,7.711408);
   tqq_stack_1->SetBinContent(17,4.182178);
   tqq_stack_1->SetBinContent(18,3.29075);
   tqq_stack_1->SetBinContent(19,4.173498);
   tqq_stack_1->SetBinContent(20,2.436562);
   tqq_stack_1->SetBinContent(21,1.721481);
   tqq_stack_1->SetBinContent(22,0.7900673);
   tqq_stack_1->SetBinError(2,2.350218);
   tqq_stack_1->SetBinError(3,2.190564);
   tqq_stack_1->SetBinError(4,2.181485);
   tqq_stack_1->SetBinError(5,6.365944);
   tqq_stack_1->SetBinError(6,10.38622);
   tqq_stack_1->SetBinError(7,10.0206);
   tqq_stack_1->SetBinError(8,10.20091);
   tqq_stack_1->SetBinError(9,8.621591);
   tqq_stack_1->SetBinError(10,8.808746);
   tqq_stack_1->SetBinError(14,11.21903);
   tqq_stack_1->SetBinError(15,4.41557);
   tqq_stack_1->SetBinError(16,5.679138);
   tqq_stack_1->SetBinError(17,3.080003);
   tqq_stack_1->SetBinError(18,2.423503);
   tqq_stack_1->SetBinError(19,3.073612);
   tqq_stack_1->SetBinError(20,1.794429);
   tqq_stack_1->SetBinError(21,1.267801);
   tqq_stack_1->SetBinError(22,0.5818523);
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
   wqq_stack_2->SetBinContent(1,1.661525e-06);
   wqq_stack_2->SetBinContent(2,2.66601);
   wqq_stack_2->SetBinContent(3,1.661525e-06);
   wqq_stack_2->SetBinContent(4,5.527049);
   wqq_stack_2->SetBinContent(5,33.77459);
   wqq_stack_2->SetBinContent(6,66.36655);
   wqq_stack_2->SetBinContent(7,95.7905);
   wqq_stack_2->SetBinContent(8,27.44625);
   wqq_stack_2->SetBinContent(9,3.822264);
   wqq_stack_2->SetBinContent(10,1.967568);
   wqq_stack_2->SetBinContent(11,1.661525e-06);
   wqq_stack_2->SetBinContent(12,1.661525e-06);
   wqq_stack_2->SetBinContent(13,1.661525e-06);
   wqq_stack_2->SetBinContent(14,1.661525e-06);
   wqq_stack_2->SetBinContent(15,1.661525e-06);
   wqq_stack_2->SetBinContent(16,1.661525e-06);
   wqq_stack_2->SetBinContent(17,1.661525e-06);
   wqq_stack_2->SetBinContent(18,1.661525e-06);
   wqq_stack_2->SetBinContent(19,1.661525e-06);
   wqq_stack_2->SetBinContent(20,1.661525e-06);
   wqq_stack_2->SetBinContent(21,1.661525e-06);
   wqq_stack_2->SetBinContent(22,1.661525e-06);
   wqq_stack_2->SetBinContent(23,1.661525e-06);
   wqq_stack_2->SetBinError(1,3.003618e-07);
   wqq_stack_2->SetBinError(2,1.419351);
   wqq_stack_2->SetBinError(3,1.788796);
   wqq_stack_2->SetBinError(4,7.537466);
   wqq_stack_2->SetBinError(5,10.30537);
   wqq_stack_2->SetBinError(6,15.01885);
   wqq_stack_2->SetBinError(7,22.72244);
   wqq_stack_2->SetBinError(8,13.26302);
   wqq_stack_2->SetBinError(9,6.171888);
   wqq_stack_2->SetBinError(10,0.7326892);
   wqq_stack_2->SetBinError(11,3.003618e-07);
   wqq_stack_2->SetBinError(12,3.003618e-07);
   wqq_stack_2->SetBinError(13,3.003618e-07);
   wqq_stack_2->SetBinError(14,3.003618e-07);
   wqq_stack_2->SetBinError(15,3.003618e-07);
   wqq_stack_2->SetBinError(16,3.003618e-07);
   wqq_stack_2->SetBinError(17,3.003618e-07);
   wqq_stack_2->SetBinError(18,3.003618e-07);
   wqq_stack_2->SetBinError(19,3.003618e-07);
   wqq_stack_2->SetBinError(20,3.003618e-07);
   wqq_stack_2->SetBinError(21,3.003618e-07);
   wqq_stack_2->SetBinError(22,3.003618e-07);
   wqq_stack_2->SetBinError(23,3.003618e-07);
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
   zqq_stack_3->SetBinContent(1,2.385278e-06);
   zqq_stack_3->SetBinContent(2,2.385278e-06);
   zqq_stack_3->SetBinContent(3,2.385278e-06);
   zqq_stack_3->SetBinContent(4,2.385278e-06);
   zqq_stack_3->SetBinContent(5,8.844934);
   zqq_stack_3->SetBinContent(6,38.89893);
   zqq_stack_3->SetBinContent(7,72.68194);
   zqq_stack_3->SetBinContent(8,115.0408);
   zqq_stack_3->SetBinContent(9,81.77354);
   zqq_stack_3->SetBinContent(10,23.51383);
   zqq_stack_3->SetBinContent(11,2.385278e-06);
   zqq_stack_3->SetBinContent(12,2.385278e-06);
   zqq_stack_3->SetBinContent(13,2.385278e-06);
   zqq_stack_3->SetBinContent(14,2.385278e-06);
   zqq_stack_3->SetBinContent(15,2.385278e-06);
   zqq_stack_3->SetBinContent(16,2.385278e-06);
   zqq_stack_3->SetBinContent(17,2.385278e-06);
   zqq_stack_3->SetBinContent(18,2.385278e-06);
   zqq_stack_3->SetBinContent(19,2.385278e-06);
   zqq_stack_3->SetBinContent(20,2.385278e-06);
   zqq_stack_3->SetBinContent(21,2.385278e-06);
   zqq_stack_3->SetBinContent(22,2.385278e-06);
   zqq_stack_3->SetBinContent(23,2.385278e-06);
   zqq_stack_3->SetBinError(1,6.679666e-07);
   zqq_stack_3->SetBinError(2,6.679666e-07);
   zqq_stack_3->SetBinError(3,6.679666e-07);
   zqq_stack_3->SetBinError(4,2.666242);
   zqq_stack_3->SetBinError(5,8.580105);
   zqq_stack_3->SetBinError(6,14.03692);
   zqq_stack_3->SetBinError(7,22.71418);
   zqq_stack_3->SetBinError(8,39.65055);
   zqq_stack_3->SetBinError(9,26.55595);
   zqq_stack_3->SetBinError(10,17.64093);
   zqq_stack_3->SetBinError(11,6.679666e-07);
   zqq_stack_3->SetBinError(12,6.679666e-07);
   zqq_stack_3->SetBinError(13,6.679666e-07);
   zqq_stack_3->SetBinError(14,0.4984157);
   zqq_stack_3->SetBinError(15,6.679666e-07);
   zqq_stack_3->SetBinError(16,6.679666e-07);
   zqq_stack_3->SetBinError(17,6.679666e-07);
   zqq_stack_3->SetBinError(18,6.679666e-07);
   zqq_stack_3->SetBinError(19,6.679666e-07);
   zqq_stack_3->SetBinError(20,6.679666e-07);
   zqq_stack_3->SetBinError(21,6.679666e-07);
   zqq_stack_3->SetBinError(22,6.679666e-07);
   zqq_stack_3->SetBinError(23,6.679666e-07);
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
   
   TH1F *hsigpass_cat4_2016_prefit_stack_4 = new TH1F("hsigpass_cat4_2016_prefit_stack_4","hqq125 in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(1,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(2,0.2060963);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(3,0.009211014);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(4,0.1730856);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(5,0.02287545);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(6,0.05126379);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(7,0.02465427);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(8,0.2469853);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(9,0.6319354);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(10,1.423695);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(11,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(12,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(13,5.94761e-08);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(14,3.595814);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(15,1.845189);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(16,0.1781673);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(17,0.02283169);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(18,0.02679342);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(19,0.01324434);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(20,0.003520045);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(21,0.01193407);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(22,0.003215015);
   hsigpass_cat4_2016_prefit_stack_4->SetBinContent(23,0.006075388);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(1,5.19854e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(2,27.55697);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(3,0.0329351);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(4,23.14313);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(5,1.176707);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(6,4.409103);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(7,3.192073);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(8,19.72656);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(9,55.11584);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(10,151.6773);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(11,5.19854e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(12,5.19854e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(13,5.19854e-06);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(14,322.7531);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(15,123.7167);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(16,17.26148);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(17,0.8047315);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(18,0.0862832);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(19,0.08754461);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(20,0.01342411);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(21,0.0425888);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(22,0.0114732);
   hsigpass_cat4_2016_prefit_stack_4->SetBinError(23,0.02168098);
   hsigpass_cat4_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_prefit_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3015[23] = {
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
   Double_t data_copy_fy3015[23] = {
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
   Double_t data_copy_felx3015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3015[23] = {
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
   Double_t data_copy_fehx3015[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3015[23] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3015,data_copy_fy3015,data_copy_felx3015,data_copy_fehx3015,data_copy_fely3015,data_copy_fehy3015);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat4_2016_pass_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3015 = new TH1F("Graph_data_copy3015","tqq in cat4_2016_pass_cat4",100,28.1,212.9);
   Graph_data_copy3015->SetMinimum(0);
   Graph_data_copy3015->SetMaximum(604.0048);
   Graph_data_copy3015->SetDirectory(0);
   Graph_data_copy3015->SetStats(0);
   Graph_data_copy3015->SetLineStyle(0);
   Graph_data_copy3015->SetMarkerStyle(20);
   Graph_data_copy3015->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3015->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3015->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3015->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3015->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3015->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3015->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3015);
   
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
   entry=leg->AddEntry("htotpass_cat4_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat4_2016_prefit_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat4_2016_prefit_copy__61 = new TH1F("htotpass_cat4_2016_prefit_copy__61","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(1,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(2,404.5145);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(3,437.2776);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(4,456.5234);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(5,495.3049);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(6,536.7052);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(7,581.293);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(8,539.6525);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(9,455.7917);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(10,376.545);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(11,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(12,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(13,4.046803e-06);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(14,281.0391);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(15,254.6353);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(16,227.4305);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(17,207.7362);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(18,176.8706);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(19,154.5541);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(20,130.0178);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(21,108.0271);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(22,88.19376);
   htotpass_cat4_2016_prefit_copy__61->SetBinContent(23,68.88723);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(1,7.32391e-07);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(2,13.46889);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(3,9.598684);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(4,11.2858);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(5,16.49513);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(6,24.01765);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(7,34.30427);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(8,43.5213);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(9,29.23901);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(10,20.55918);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(11,7.32391e-07);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(12,7.32391e-07);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(13,7.32391e-07);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(14,12.06054);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(15,6.065018);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(16,6.834475);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(17,4.866476);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(18,4.316459);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(19,4.713825);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(20,4.039039);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(21,3.904982);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(22,3.844283);
   htotpass_cat4_2016_prefit_copy__61->SetBinError(23,3.823169);
   htotpass_cat4_2016_prefit_copy__61->SetMaximum(871.9395);
   htotpass_cat4_2016_prefit_copy__61->SetEntries(92);
   htotpass_cat4_2016_prefit_copy__61->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit_copy__61->SetFillColor(ci);
   htotpass_cat4_2016_prefit_copy__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_prefit_copy__61->SetLineColor(ci);
   htotpass_cat4_2016_prefit_copy__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_prefit_copy__61->SetMarkerColor(ci);
   htotpass_cat4_2016_prefit_copy__61->SetMarkerSize(0);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_prefit_copy__61->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit_copy__61->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_prefit_copy__61->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit_copy__61->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_prefit_copy__61->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_prefit_copy__61->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_prefit_copy__61->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit_copy__61->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_prefit_copy__61->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_prefit_copy__61->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_prefit_copy__61->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_prefit_copy__61->Draw("sameaxis");
   p12pass_cat4_2016_prefit->Modified();
   cpass_cat4_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_prefit
   TPad *p22pass_cat4_2016_prefit = new TPad("p22pass_cat4_2016_prefit", "p22pass_cat4_2016_prefit",0,0,1,0.3);
   p22pass_cat4_2016_prefit->Draw();
   p22pass_cat4_2016_prefit->cd();
   p22pass_cat4_2016_prefit->Range(13.7027,-10.57933,221.8108,8.018443);
   p22pass_cat4_2016_prefit->SetFillColor(0);
   p22pass_cat4_2016_prefit->SetBorderMode(0);
   p22pass_cat4_2016_prefit->SetBorderSize(2);
   p22pass_cat4_2016_prefit->SetTickx(1);
   p22pass_cat4_2016_prefit->SetTicky(1);
   p22pass_cat4_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat4_2016_prefit->SetTopMargin(0.05);
   p22pass_cat4_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat4_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat4_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat4_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_prefit__62 = new TH1F("iOneWithErrorspass_cat4_2016_prefit__62","",23,40,201);
   iOneWithErrorspass_cat4_2016_prefit__62->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_prefit__62->SetMaximum(7.088554);
   iOneWithErrorspass_cat4_2016_prefit__62->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit__62->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_prefit__62->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit__62->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_prefit__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_prefit__62->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_prefit__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_prefit__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit__62->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(-322.5566);
   hstack_stack_16->SetMaximum(339.0972);
   hstack_stack_16->SetDirectory(0);
   hstack_stack_16->SetStats(0);
   hstack_stack_16->SetLineStyle(0);
   hstack_stack_16->SetMarkerStyle(20);
   hstack_stack_16->GetXaxis()->SetLabelFont(42);
   hstack_stack_16->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_16->GetXaxis()->SetTitleFont(42);
   hstack_stack_16->GetYaxis()->SetLabelFont(42);
   hstack_stack_16->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_16->GetYaxis()->SetTitleFont(42);
   hstack_stack_16->GetZaxis()->SetLabelFont(42);
   hstack_stack_16->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_16->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_16->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_16->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_16);
   
   
   TH1F *sigHistResidualwqqpass_cat4_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat4_2016_prefit_stack_1","wqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(2,0.1222367);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(3,7.757996e-08);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(4,0.256951);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(5,1.538891);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(6,2.996036);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(7,4.177903);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(8,1.242832);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(9,0.1758063);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(10,0.0961583);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(14,9.082223e-08);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(15,1.000706e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(16,1.03507e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(17,1.008046e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(18,1.147451e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(19,1.243018e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(20,1.410957e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(21,1.416072e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(22,1.593868e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinContent(23,1.735384e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(1,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(2,1.419351);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(3,1.788796);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(4,7.537466);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(5,10.30537);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(6,15.01885);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(7,22.72244);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(8,13.26302);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(9,6.171888);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(10,0.7326892);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(11,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(12,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(13,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(14,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(15,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(16,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(17,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(18,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(19,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(20,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(21,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(22,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetBinError(23,3.003618e-07);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat4_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat4_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat4_2016_prefit_stack_2","zqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(2,1.093651e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(3,1.113734e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(4,1.108909e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(5,0.4030069);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(6,1.756045);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(7,3.170023);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(8,5.209327);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(9,3.7612);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(10,1.14916);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(14,1.30384e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(15,1.436609e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(16,1.485941e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(17,1.447146e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(18,1.647276e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(19,1.784471e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(20,2.025563e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(21,2.032907e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(22,2.28815e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinContent(23,2.491309e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(1,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(2,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(3,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(4,2.666242);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(5,8.580105);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(6,14.03692);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(7,22.71418);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(8,39.65055);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(9,26.55595);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(10,17.64093);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(11,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(12,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(13,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(14,0.4984157);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(15,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(16,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(17,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(18,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(19,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(20,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(21,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(22,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetBinError(23,6.679666e-07);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat4_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3","hqq125 in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(2,0.009449527);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(3,0.0004300808);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(4,0.008046703);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(5,0.001042287);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(6,0.002314241);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(7,0.001075296);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(8,0.01118409);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(9,0.02906607);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(10,0.06957835);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(14,0.1965542);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(15,0.1111323);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(16,0.01109917);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(17,0.001385197);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(18,0.001850356);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(19,0.0009908335);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(20,0.0002989201);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(21,0.001017108);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(22,0.00030841);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinContent(23,0.0006345454);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(1,5.19854e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(2,27.55697);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(3,0.0329351);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(4,23.14313);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(5,1.176707);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(6,4.409103);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(7,3.192073);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(8,19.72656);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(9,55.11584);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(10,151.6773);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(11,5.19854e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(12,5.19854e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(13,5.19854e-06);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(14,322.7531);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(15,123.7167);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(16,17.26148);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(17,0.8047315);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(18,0.0862832);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(19,0.08754461);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(20,0.01342411);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(21,0.0425888);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(22,0.0114732);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetBinError(23,0.02168098);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_prefitpass_cat4_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_prefit__63 = new TH1F("iOneWithErrorsLinepass_cat4_2016_prefit__63","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_prefit__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fy3016[23] = {
   0,
   3.247529,
   0.9680048,
   0.5327021,
   1.276204,
   2.570126,
   4.725703,
   3.931157,
   4.516007,
   3.161858,
   0,
   0,
   0,
   2.792773,
   1.211582,
   1.789415,
   3.669488,
   2.135353,
   1.697124,
   0.7007292,
   2.346029,
   1.813575,
   2.174979};
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_prefit_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_prefit_fx3016,Graph_from_iRatiopass_cat4_2016_prefit_fy3016,Graph_from_iRatiopass_cat4_2016_prefit_felx3016,Graph_from_iRatiopass_cat4_2016_prefit_fehx3016,Graph_from_iRatiopass_cat4_2016_prefit_fely3016,Graph_from_iRatiopass_cat4_2016_prefit_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_prefit3016 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_prefit3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->SetMinimum(-1.086598);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->SetMaximum(6.345003);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_prefit3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_prefit3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_prefit_copy__64 = new TH1F("iOneWithErrorspass_cat4_2016_prefit_copy__64","",23,40,201);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetMaximum(7.088554);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetEntries(184);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_prefit_copy__64->Draw("sameaxis");
   p22pass_cat4_2016_prefit->Modified();
   cpass_cat4_2016_prefit->cd();
   cpass_cat4_2016_prefit->Modified();
   cpass_cat4_2016_prefit->cd();
   cpass_cat4_2016_prefit->SetSelected(cpass_cat4_2016_prefit);
}
