void mlfit_pass_cat2_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat2_2016_fit_b/cpass_cat2_2016_fit_b
//=========  (Wed Oct  9 22:42:59 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_fit_b = new TCanvas("cpass_cat2_2016_fit_b", "cpass_cat2_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_fit_b->SetHighLightColor(2);
   cpass_cat2_2016_fit_b->Range(0,0,1,1);
   cpass_cat2_2016_fit_b->SetFillColor(0);
   cpass_cat2_2016_fit_b->SetBorderMode(0);
   cpass_cat2_2016_fit_b->SetBorderSize(2);
   cpass_cat2_2016_fit_b->SetTickx(1);
   cpass_cat2_2016_fit_b->SetTicky(1);
   cpass_cat2_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat2_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat2_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat2_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_fit_b
   TPad *p12pass_cat2_2016_fit_b = new TPad("p12pass_cat2_2016_fit_b", "p12pass_cat2_2016_fit_b",0,0.3,1,1);
   p12pass_cat2_2016_fit_b->Draw();
   p12pass_cat2_2016_fit_b->cd();
   p12pass_cat2_2016_fit_b->Range(18.24324,-45.48237,197.973,2228.636);
   p12pass_cat2_2016_fit_b->SetFillColor(0);
   p12pass_cat2_2016_fit_b->SetBorderMode(0);
   p12pass_cat2_2016_fit_b->SetBorderSize(2);
   p12pass_cat2_2016_fit_b->SetTickx(1);
   p12pass_cat2_2016_fit_b->SetTicky(1);
   p12pass_cat2_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat2_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_fit_b__25 = new TH1F("htotpass_cat2_2016_fit_b__25","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b__25->SetBinContent(1,5.893717e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(2,1178.342);
   htotpass_cat2_2016_fit_b__25->SetBinContent(3,1251.293);
   htotpass_cat2_2016_fit_b__25->SetBinContent(4,1272.857);
   htotpass_cat2_2016_fit_b__25->SetBinContent(5,1283.468);
   htotpass_cat2_2016_fit_b__25->SetBinContent(6,1316.356);
   htotpass_cat2_2016_fit_b__25->SetBinContent(7,1334.149);
   htotpass_cat2_2016_fit_b__25->SetBinContent(8,1292.004);
   htotpass_cat2_2016_fit_b__25->SetBinContent(9,1177.854);
   htotpass_cat2_2016_fit_b__25->SetBinContent(10,1057.832);
   htotpass_cat2_2016_fit_b__25->SetBinContent(11,955.5936);
   htotpass_cat2_2016_fit_b__25->SetBinContent(12,862.5729);
   htotpass_cat2_2016_fit_b__25->SetBinContent(13,796.8194);
   htotpass_cat2_2016_fit_b__25->SetBinContent(14,704.7545);
   htotpass_cat2_2016_fit_b__25->SetBinContent(15,610.7657);
   htotpass_cat2_2016_fit_b__25->SetBinContent(16,527.8109);
   htotpass_cat2_2016_fit_b__25->SetBinContent(17,436.4079);
   htotpass_cat2_2016_fit_b__25->SetBinContent(18,357.3649);
   htotpass_cat2_2016_fit_b__25->SetBinContent(19,281.1015);
   htotpass_cat2_2016_fit_b__25->SetBinContent(20,221.562);
   htotpass_cat2_2016_fit_b__25->SetBinContent(21,5.893717e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(22,5.893717e-06);
   htotpass_cat2_2016_fit_b__25->SetBinContent(23,5.893717e-06);
   htotpass_cat2_2016_fit_b__25->SetBinError(1,5.439103e-07);
   htotpass_cat2_2016_fit_b__25->SetBinError(2,14.77832);
   htotpass_cat2_2016_fit_b__25->SetBinError(3,11.72383);
   htotpass_cat2_2016_fit_b__25->SetBinError(4,12.84899);
   htotpass_cat2_2016_fit_b__25->SetBinError(5,13.675);
   htotpass_cat2_2016_fit_b__25->SetBinError(6,19.98074);
   htotpass_cat2_2016_fit_b__25->SetBinError(7,23.07601);
   htotpass_cat2_2016_fit_b__25->SetBinError(8,23.51447);
   htotpass_cat2_2016_fit_b__25->SetBinError(9,20.69314);
   htotpass_cat2_2016_fit_b__25->SetBinError(10,17.56651);
   htotpass_cat2_2016_fit_b__25->SetBinError(11,11.50406);
   htotpass_cat2_2016_fit_b__25->SetBinError(12,8.6221);
   htotpass_cat2_2016_fit_b__25->SetBinError(13,8.036085);
   htotpass_cat2_2016_fit_b__25->SetBinError(14,7.41919);
   htotpass_cat2_2016_fit_b__25->SetBinError(15,6.264405);
   htotpass_cat2_2016_fit_b__25->SetBinError(16,6.003595);
   htotpass_cat2_2016_fit_b__25->SetBinError(17,5.222788);
   htotpass_cat2_2016_fit_b__25->SetBinError(18,4.837247);
   htotpass_cat2_2016_fit_b__25->SetBinError(19,4.492027);
   htotpass_cat2_2016_fit_b__25->SetBinError(20,4.212254);
   htotpass_cat2_2016_fit_b__25->SetBinError(21,5.439103e-07);
   htotpass_cat2_2016_fit_b__25->SetBinError(22,5.439103e-07);
   htotpass_cat2_2016_fit_b__25->SetBinError(23,5.439103e-07);
   htotpass_cat2_2016_fit_b__25->SetMinimum(0);
   htotpass_cat2_2016_fit_b__25->SetMaximum(2001.224);
   htotpass_cat2_2016_fit_b__25->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__25->SetFillColor(ci);
   htotpass_cat2_2016_fit_b__25->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b__25->SetLineColor(ci);
   htotpass_cat2_2016_fit_b__25->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b__25->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b__25->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b__25->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b__25->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b__25->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b__25->Draw("hist");
   
   TH1F *qcd__26 = new TH1F("qcd__26","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__26->SetBinContent(2,1168.829);
   qcd__26->SetBinContent(3,1234.036);
   qcd__26->SetBinContent(4,1234.882);
   qcd__26->SetBinContent(5,1213.595);
   qcd__26->SetBinContent(6,1164.738);
   qcd__26->SetBinContent(7,1114.884);
   qcd__26->SetBinContent(8,1064.381);
   qcd__26->SetBinContent(9,1005.867);
   qcd__26->SetBinContent(10,953.4974);
   qcd__26->SetBinContent(11,900.337);
   qcd__26->SetBinContent(12,832.9517);
   qcd__26->SetBinContent(13,767.0179);
   qcd__26->SetBinContent(14,678.3758);
   qcd__26->SetBinContent(15,592.1193);
   qcd__26->SetBinContent(16,513.5659);
   qcd__26->SetBinContent(17,427.6531);
   qcd__26->SetBinContent(18,348.9059);
   qcd__26->SetBinContent(19,279.1675);
   qcd__26->SetBinContent(20,216.7455);
   qcd__26->SetBinError(2,14.70724);
   qcd__26->SetBinError(3,11.40799);
   qcd__26->SetBinError(4,12.08053);
   qcd__26->SetBinError(5,12.12514);
   qcd__26->SetBinError(6,13.95947);
   qcd__26->SetBinError(7,14.37866);
   qcd__26->SetBinError(8,13.76794);
   qcd__26->SetBinError(9,13.10101);
   qcd__26->SetBinError(10,10.06632);
   qcd__26->SetBinError(11,9.044357);
   qcd__26->SetBinError(12,7.738548);
   qcd__26->SetBinError(13,6.912794);
   qcd__26->SetBinError(14,6.452853);
   qcd__26->SetBinError(15,5.70479);
   qcd__26->SetBinError(16,5.66868);
   qcd__26->SetBinError(17,5.079464);
   qcd__26->SetBinError(18,4.692596);
   qcd__26->SetBinError(19,4.483999);
   qcd__26->SetBinError(20,4.158865);
   qcd__26->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__26->SetLineColor(ci);
   qcd__26->SetLineStyle(2);
   qcd__26->SetLineWidth(2);
   qcd__26->GetXaxis()->SetTitle("x");
   qcd__26->GetXaxis()->SetLabelFont(42);
   qcd__26->GetXaxis()->SetLabelSize(0.035);
   qcd__26->GetXaxis()->SetTitleSize(0.035);
   qcd__26->GetXaxis()->SetTitleFont(42);
   qcd__26->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__26->GetYaxis()->SetLabelFont(42);
   qcd__26->GetYaxis()->SetLabelSize(0.035);
   qcd__26->GetYaxis()->SetTitleSize(0.035);
   qcd__26->GetYaxis()->SetTitleOffset(0);
   qcd__26->GetYaxis()->SetTitleFont(42);
   qcd__26->GetZaxis()->SetLabelFont(42);
   qcd__26->GetZaxis()->SetLabelSize(0.035);
   qcd__26->GetZaxis()->SetTitleSize(0.035);
   qcd__26->GetZaxis()->SetTitleFont(42);
   qcd__26->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016_cat2__27 = new TH1D("bkgUncBand_pass_2016_cat2__27","bkgUncBand_pass_2016_cat2",23,40,201);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(1,6.216612e-06);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(2,1180.544);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(3,1249.635);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(4,1268.208);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(5,1277.527);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(6,1312.392);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(7,1331.9);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(8,1292.092);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(9,1175.78);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(10,1052.063);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(11,946.5498);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(12,853.6878);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(13,788.8236);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(14,698.9);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(15,605.1133);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(16,523.8178);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(17,433.8218);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(18,355.7514);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(19,280.3731);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(20,220.8561);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(21,6.216612e-06);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(22,6.216612e-06);
   bkgUncBand_pass_2016_cat2__27->SetBinContent(23,6.216612e-06);
   bkgUncBand_pass_2016_cat2__27->SetBinError(1,6.321644e-07);
   bkgUncBand_pass_2016_cat2__27->SetBinError(2,14.92402);
   bkgUncBand_pass_2016_cat2__27->SetBinError(3,10.726);
   bkgUncBand_pass_2016_cat2__27->SetBinError(4,10.08474);
   bkgUncBand_pass_2016_cat2__27->SetBinError(5,11.00103);
   bkgUncBand_pass_2016_cat2__27->SetBinError(6,10.6902);
   bkgUncBand_pass_2016_cat2__27->SetBinError(7,13.79299);
   bkgUncBand_pass_2016_cat2__27->SetBinError(8,13.93965);
   bkgUncBand_pass_2016_cat2__27->SetBinError(9,11.45974);
   bkgUncBand_pass_2016_cat2__27->SetBinError(10,9.93292);
   bkgUncBand_pass_2016_cat2__27->SetBinError(11,8.771722);
   bkgUncBand_pass_2016_cat2__27->SetBinError(12,8.532997);
   bkgUncBand_pass_2016_cat2__27->SetBinError(13,8.157905);
   bkgUncBand_pass_2016_cat2__27->SetBinError(14,7.348381);
   bkgUncBand_pass_2016_cat2__27->SetBinError(15,6.3618);
   bkgUncBand_pass_2016_cat2__27->SetBinError(16,5.380889);
   bkgUncBand_pass_2016_cat2__27->SetBinError(17,4.762313);
   bkgUncBand_pass_2016_cat2__27->SetBinError(18,4.771623);
   bkgUncBand_pass_2016_cat2__27->SetBinError(19,4.573615);
   bkgUncBand_pass_2016_cat2__27->SetBinError(20,4.316895);
   bkgUncBand_pass_2016_cat2__27->SetBinError(21,6.321644e-07);
   bkgUncBand_pass_2016_cat2__27->SetBinError(22,6.321644e-07);
   bkgUncBand_pass_2016_cat2__27->SetBinError(23,6.321644e-07);
   bkgUncBand_pass_2016_cat2__27->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016_cat2__27->SetFillColor(ci);
   bkgUncBand_pass_2016_cat2__27->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016_cat2__27->SetLineColor(ci);
   bkgUncBand_pass_2016_cat2__27->SetLineStyle(0);
   bkgUncBand_pass_2016_cat2__27->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016_cat2__27->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat2__27->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat2__27->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat2__27->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat2__27->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016_cat2__27->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat2__27->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat2__27->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat2__27->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016_cat2__27->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat2__27->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat2__27->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat2__27->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat2__27->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat2__27->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis7[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_7 = new TH1F("hstackMC_stack_7","hstackMC",23, xAxis7);
   hstackMC_stack_7->SetMinimum(0);
   hstackMC_stack_7->SetMaximum(239.0043);
   hstackMC_stack_7->SetDirectory(0);
   hstackMC_stack_7->SetStats(0);
   hstackMC_stack_7->SetLineStyle(0);
   hstackMC_stack_7->SetMarkerStyle(20);
   hstackMC_stack_7->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_7->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_7->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_7->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_7->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_7->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_7->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_7->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_7->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_7);
   
   Double_t xAxis8[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat2_2016_pass_cat2",23, xAxis8);
   tqq_stack_1->SetBinContent(2,6.42857);
   tqq_stack_1->SetBinContent(3,10.32878);
   tqq_stack_1->SetBinContent(4,12.29468);
   tqq_stack_1->SetBinContent(5,19.0475);
   tqq_stack_1->SetBinContent(6,27.92869);
   tqq_stack_1->SetBinContent(7,33.39182);
   tqq_stack_1->SetBinContent(8,30.95828);
   tqq_stack_1->SetBinContent(9,24.32716);
   tqq_stack_1->SetBinContent(10,29.46138);
   tqq_stack_1->SetBinContent(11,32.66284);
   tqq_stack_1->SetBinContent(12,25.88769);
   tqq_stack_1->SetBinContent(13,29.44805);
   tqq_stack_1->SetBinContent(14,26.37864);
   tqq_stack_1->SetBinContent(15,18.64641);
   tqq_stack_1->SetBinContent(16,14.24501);
   tqq_stack_1->SetBinContent(17,8.754744);
   tqq_stack_1->SetBinContent(18,8.459031);
   tqq_stack_1->SetBinContent(19,1.933988);
   tqq_stack_1->SetBinContent(20,4.816535);
   tqq_stack_1->SetBinError(2,0.8922702);
   tqq_stack_1->SetBinError(3,1.433611);
   tqq_stack_1->SetBinError(4,1.706473);
   tqq_stack_1->SetBinError(5,2.643749);
   tqq_stack_1->SetBinError(6,3.876437);
   tqq_stack_1->SetBinError(7,4.634708);
   tqq_stack_1->SetBinError(8,4.296937);
   tqq_stack_1->SetBinError(9,3.376553);
   tqq_stack_1->SetBinError(10,4.08917);
   tqq_stack_1->SetBinError(11,4.533526);
   tqq_stack_1->SetBinError(12,3.593152);
   tqq_stack_1->SetBinError(13,4.08732);
   tqq_stack_1->SetBinError(14,3.661293);
   tqq_stack_1->SetBinError(15,2.588078);
   tqq_stack_1->SetBinError(16,1.977175);
   tqq_stack_1->SetBinError(17,1.215138);
   tqq_stack_1->SetBinError(18,1.174094);
   tqq_stack_1->SetBinError(19,0.268433);
   tqq_stack_1->SetBinError(20,0.6685239);
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
   wqq_stack_2->SetBinContent(1,2.451159e-06);
   wqq_stack_2->SetBinContent(2,1.825832);
   wqq_stack_2->SetBinContent(3,5.214777);
   wqq_stack_2->SetBinContent(4,16.44265);
   wqq_stack_2->SetBinContent(5,29.11295);
   wqq_stack_2->SetBinContent(6,79.61687);
   wqq_stack_2->SetBinContent(7,104.9259);
   wqq_stack_2->SetBinContent(8,67.77929);
   wqq_stack_2->SetBinContent(9,32.19516);
   wqq_stack_2->SetBinContent(10,9.079359);
   wqq_stack_2->SetBinContent(11,2.854635);
   wqq_stack_2->SetBinContent(12,0.7647061);
   wqq_stack_2->SetBinContent(13,0.3533733);
   wqq_stack_2->SetBinContent(14,2.451159e-06);
   wqq_stack_2->SetBinContent(15,2.451159e-06);
   wqq_stack_2->SetBinContent(16,2.451159e-06);
   wqq_stack_2->SetBinContent(17,2.451159e-06);
   wqq_stack_2->SetBinContent(18,2.451159e-06);
   wqq_stack_2->SetBinContent(19,2.451159e-06);
   wqq_stack_2->SetBinContent(20,2.451159e-06);
   wqq_stack_2->SetBinContent(21,2.451159e-06);
   wqq_stack_2->SetBinContent(22,2.451159e-06);
   wqq_stack_2->SetBinContent(23,2.451159e-06);
   wqq_stack_2->SetBinError(1,3.18168e-07);
   wqq_stack_2->SetBinError(2,0.2820679);
   wqq_stack_2->SetBinError(3,1.996686);
   wqq_stack_2->SetBinError(4,3.096453);
   wqq_stack_2->SetBinError(5,3.956894);
   wqq_stack_2->SetBinError(6,10.21427);
   wqq_stack_2->SetBinError(7,13.58896);
   wqq_stack_2->SetBinError(8,11.60446);
   wqq_stack_2->SetBinError(9,7.496029);
   wqq_stack_2->SetBinError(10,2.275388);
   wqq_stack_2->SetBinError(11,0.5392589);
   wqq_stack_2->SetBinError(12,0.3123094);
   wqq_stack_2->SetBinError(13,0.2928392);
   wqq_stack_2->SetBinError(14,3.18168e-07);
   wqq_stack_2->SetBinError(15,3.18168e-07);
   wqq_stack_2->SetBinError(16,3.18168e-07);
   wqq_stack_2->SetBinError(17,3.18168e-07);
   wqq_stack_2->SetBinError(18,3.18168e-07);
   wqq_stack_2->SetBinError(19,3.18168e-07);
   wqq_stack_2->SetBinError(20,3.18168e-07);
   wqq_stack_2->SetBinError(21,3.18168e-07);
   wqq_stack_2->SetBinError(22,3.18168e-07);
   wqq_stack_2->SetBinError(23,3.18168e-07);
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
   zqq_stack_3->SetBinContent(1,3.442558e-06);
   zqq_stack_3->SetBinContent(2,1.258347);
   zqq_stack_3->SetBinContent(3,1.713566);
   zqq_stack_3->SetBinContent(4,9.237511);
   zqq_stack_3->SetBinContent(5,21.71257);
   zqq_stack_3->SetBinContent(6,44.0718);
   zqq_stack_3->SetBinContent(7,80.9479);
   zqq_stack_3->SetBinContent(8,128.8855);
   zqq_stack_3->SetBinContent(9,115.4647);
   zqq_stack_3->SetBinContent(10,65.79417);
   zqq_stack_3->SetBinContent(11,19.73913);
   zqq_stack_3->SetBinContent(12,2.968791);
   zqq_stack_3->SetBinContent(13,3.442558e-06);
   zqq_stack_3->SetBinContent(14,3.442558e-06);
   zqq_stack_3->SetBinContent(15,3.442558e-06);
   zqq_stack_3->SetBinContent(16,3.442558e-06);
   zqq_stack_3->SetBinContent(17,3.442558e-06);
   zqq_stack_3->SetBinContent(18,3.442558e-06);
   zqq_stack_3->SetBinContent(19,3.442558e-06);
   zqq_stack_3->SetBinContent(20,3.442558e-06);
   zqq_stack_3->SetBinContent(21,3.442558e-06);
   zqq_stack_3->SetBinContent(22,3.442558e-06);
   zqq_stack_3->SetBinContent(23,3.442558e-06);
   zqq_stack_3->SetBinError(1,4.411434e-07);
   zqq_stack_3->SetBinError(2,1.104549);
   zqq_stack_3->SetBinError(3,1.124198);
   zqq_stack_3->SetBinError(4,2.580142);
   zqq_stack_3->SetBinError(5,4.164168);
   zqq_stack_3->SetBinError(6,9.219808);
   zqq_stack_3->SetBinError(7,10.93692);
   zqq_stack_3->SetBinError(8,14.49989);
   zqq_stack_3->SetBinError(9,13.74693);
   zqq_stack_3->SetBinError(10,13.61443);
   zqq_stack_3->SetBinError(11,5.449716);
   zqq_stack_3->SetBinError(12,1.202997);
   zqq_stack_3->SetBinError(13,4.411434e-07);
   zqq_stack_3->SetBinError(14,4.411434e-07);
   zqq_stack_3->SetBinError(15,4.411434e-07);
   zqq_stack_3->SetBinError(16,4.411434e-07);
   zqq_stack_3->SetBinError(17,4.411434e-07);
   zqq_stack_3->SetBinError(18,4.411434e-07);
   zqq_stack_3->SetBinError(19,4.411434e-07);
   zqq_stack_3->SetBinError(20,4.411434e-07);
   zqq_stack_3->SetBinError(21,4.411434e-07);
   zqq_stack_3->SetBinError(22,4.411434e-07);
   zqq_stack_3->SetBinError(23,4.411434e-07);
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
   
   TH1F *hsigpass_cat2_2016_fit_b_stack_4 = new TH1F("hsigpass_cat2_2016_fit_b_stack_4","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_fit_b_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3007[23] = {
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
   Double_t data_copy_fy3007[23] = {
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
   915,
   894,
   811,
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
   Double_t data_copy_felx3007[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3007[23] = {
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
   31.26066,
   30.91165,
   29.49041,
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
   Double_t data_copy_fehx3007[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3007[23] = {
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
   30.24409,
   29.89488,
   28.4728,
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3007,data_copy_fy3007,data_copy_felx3007,data_copy_fehx3007,data_copy_fely3007,data_copy_fehy3007);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat2_2016_pass_cat2");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3007 = new TH1F("Graph_data_copy3007","WH_hbb in cat2_2016_pass_cat2",100,28.1,212.9);
   Graph_data_copy3007->SetMinimum(0);
   Graph_data_copy3007->SetMaximum(1508.871);
   Graph_data_copy3007->SetDirectory(0);
   Graph_data_copy3007->SetStats(0);
   Graph_data_copy3007->SetLineStyle(0);
   Graph_data_copy3007->SetMarkerStyle(20);
   Graph_data_copy3007->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3007->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3007->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3007->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3007->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3007->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3007->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3007);
   
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
   entry=leg->AddEntry("bkgUncBand_pass_2016_cat2","Total background","lf");

   ci = TColor::GetColor("#3366cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("data_copy","Data","pe");
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
   
   TH1F *htotpass_cat2_2016_fit_b_copy__28 = new TH1F("htotpass_cat2_2016_fit_b_copy__28","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(1,5.893717e-06);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(2,1178.342);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(3,1251.293);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(4,1272.857);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(5,1283.468);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(6,1316.356);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(7,1334.149);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(8,1292.004);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(9,1177.854);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(10,1057.832);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(11,955.5936);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(12,862.5729);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(13,796.8194);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(14,704.7545);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(15,610.7657);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(16,527.8109);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(17,436.4079);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(18,357.3649);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(19,281.1015);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(20,221.562);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(21,5.893717e-06);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(22,5.893717e-06);
   htotpass_cat2_2016_fit_b_copy__28->SetBinContent(23,5.893717e-06);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(1,5.439103e-07);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(2,14.77832);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(3,11.72383);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(4,12.84899);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(5,13.675);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(6,19.98074);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(7,23.07601);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(8,23.51447);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(9,20.69314);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(10,17.56651);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(11,11.50406);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(12,8.6221);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(13,8.036085);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(14,7.41919);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(15,6.264405);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(16,6.003595);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(17,5.222788);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(18,4.837247);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(19,4.492027);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(20,4.212254);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(21,5.439103e-07);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(22,5.439103e-07);
   htotpass_cat2_2016_fit_b_copy__28->SetBinError(23,5.439103e-07);
   htotpass_cat2_2016_fit_b_copy__28->SetMaximum(2001.224);
   htotpass_cat2_2016_fit_b_copy__28->SetEntries(92);
   htotpass_cat2_2016_fit_b_copy__28->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b_copy__28->SetFillColor(ci);
   htotpass_cat2_2016_fit_b_copy__28->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_b_copy__28->SetLineColor(ci);
   htotpass_cat2_2016_fit_b_copy__28->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_b_copy__28->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_b_copy__28->SetMarkerSize(0);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_b_copy__28->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__28->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_b_copy__28->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__28->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_b_copy__28->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_b_copy__28->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_b_copy__28->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__28->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_b_copy__28->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_b_copy__28->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_b_copy__28->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_b_copy__28->Draw("sameaxis");
   p12pass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_fit_b
   TPad *p22pass_cat2_2016_fit_b = new TPad("p22pass_cat2_2016_fit_b", "p22pass_cat2_2016_fit_b",0,0,1,0.3);
   p22pass_cat2_2016_fit_b->Draw();
   p22pass_cat2_2016_fit_b->cd();
   p22pass_cat2_2016_fit_b->Range(18.24324,-8.920628,197.973,3.653731);
   p22pass_cat2_2016_fit_b->SetFillColor(0);
   p22pass_cat2_2016_fit_b->SetBorderMode(0);
   p22pass_cat2_2016_fit_b->SetBorderSize(2);
   p22pass_cat2_2016_fit_b->SetTickx(1);
   p22pass_cat2_2016_fit_b->SetTicky(1);
   p22pass_cat2_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat2_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat2_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat2_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b__29 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b__29","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(1,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(2,0.4243029);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(3,0.303337);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(4,0.2882587);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(5,0.3076407);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(6,0.2888203);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(7,0.3723736);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(8,0.3896639);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(9,0.3363189);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(10,0.3027012);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(11,0.2852372);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(12,0.2806605);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(13,0.2814856);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(14,0.2731284);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(15,0.255951);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(16,0.2291459);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(17,0.2257475);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(18,0.2529688);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(19,0.2608331);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(20,0.2961348);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(21,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(22,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetBinError(23,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetMinimum(-5.14832);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetMaximum(3.025013);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_b__29->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_b__29->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__29->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__29->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__29->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__29->Draw("");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b__30 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b__30","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(1,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(2,0.4243029);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(3,0.303337);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(4,0.2882587);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(5,0.3076407);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(6,0.2888203);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(7,0.3723736);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(8,0.3896639);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(9,0.3363189);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(10,0.3027012);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(11,0.2852372);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(12,0.2806605);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(13,0.2814856);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(14,0.2731284);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(15,0.255951);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(16,0.2291459);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(17,0.2257475);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(18,0.2529688);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(19,0.2608331);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(20,0.2961348);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(21,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(22,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetBinError(23,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMinimum(-5.14832);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMaximum(3.025013);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_b__30->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_b__30->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b__30->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b__30->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b__30->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_8 = new TH1F("hstack_stack_8","hstack",23,40,201);
   hstack_stack_8->SetMinimum(0);
   hstack_stack_8->SetMaximum(0);
   hstack_stack_8->SetDirectory(0);
   hstack_stack_8->SetStats(0);
   hstack_stack_8->SetLineStyle(0);
   hstack_stack_8->SetMarkerStyle(20);
   hstack_stack_8->GetXaxis()->SetLabelFont(42);
   hstack_stack_8->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_8->GetXaxis()->SetTitleFont(42);
   hstack_stack_8->GetYaxis()->SetLabelFont(42);
   hstack_stack_8->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_8->GetYaxis()->SetTitleFont(42);
   hstack_stack_8->GetZaxis()->SetLabelFont(42);
   hstack_stack_8->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_8->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_8->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_8->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_8);
   
   
   TH1F *sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_fit_bpass_cat2_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_fit_b__31 = new TH1F("iOneWithErrorsLinepass_cat2_2016_fit_b__31","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(1,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(2,0.4243029);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(3,0.303337);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(4,0.2882587);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(5,0.3076407);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(6,0.2888203);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(7,0.3723736);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(8,0.3896639);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(9,0.3363189);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(10,0.3027012);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(11,0.2852372);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(12,0.2806605);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(13,0.2814856);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(14,0.2731284);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(15,0.255951);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(16,0.2291459);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(17,0.2257475);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(18,0.2529688);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(19,0.2608331);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(20,0.2961348);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(21,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(22,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetBinError(23,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_b__31->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fx3008[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fy3008[23] = {
   0,
   0.6630648,
   -1.041328,
   -2.432213,
   -1.147953,
   0.4436118,
   0.02265354,
   -1.361176,
   -1.515023,
   -0.4281575,
   -1.342198,
   1.016676,
   0.4808548,
   -0.2937851,
   -0.7297419,
   0.007883372,
   -0.6028026,
   -1.109874,
   0.4930108,
   -1.675859,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_felx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fely3008[23] = {
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
   1,
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
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fehx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_b_fehy3008[23] = {
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
   1,
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
   0};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_fit_b_fx3008,Graph_from_iRatiopass_cat2_2016_fit_b_fy3008,Graph_from_iRatiopass_cat2_2016_fit_b_felx3008,Graph_from_iRatiopass_cat2_2016_fit_b_fehx3008,Graph_from_iRatiopass_cat2_2016_fit_b_fely3008,Graph_from_iRatiopass_cat2_2016_fit_b_fehy3008);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetMinimum(-3.977102);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetMaximum(2.561565);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_fit_b3008);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_b_copy__32 = new TH1F("iOneWithErrorspass_cat2_2016_fit_b_copy__32","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(1,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(2,0.4243029);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(3,0.303337);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(4,0.2882587);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(5,0.3076407);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(6,0.2888203);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(7,0.3723736);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(8,0.3896639);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(9,0.3363189);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(10,0.3027012);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(11,0.2852372);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(12,0.2806605);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(13,0.2814856);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(14,0.2731284);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(15,0.255951);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(16,0.2291459);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(17,0.2257475);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(18,0.2529688);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(19,0.2608331);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(20,0.2961348);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(21,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(22,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetBinError(23,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMinimum(-5.14832);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMaximum(3.025013);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetEntries(184);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_b_copy__32->Draw("sameaxis");
   p22pass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
   cpass_cat2_2016_fit_b->Modified();
   cpass_cat2_2016_fit_b->cd();
   cpass_cat2_2016_fit_b->SetSelected(cpass_cat2_2016_fit_b);
}
