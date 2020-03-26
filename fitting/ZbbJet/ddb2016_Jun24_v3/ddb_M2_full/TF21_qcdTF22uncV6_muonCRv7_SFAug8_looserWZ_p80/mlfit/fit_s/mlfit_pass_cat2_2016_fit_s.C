void mlfit_pass_cat2_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat2_2016_fit_s/cpass_cat2_2016_fit_s
//=========  (Wed Oct  9 22:43:08 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat2_2016_fit_s = new TCanvas("cpass_cat2_2016_fit_s", "cpass_cat2_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat2_2016_fit_s->SetHighLightColor(2);
   cpass_cat2_2016_fit_s->Range(0,0,1,1);
   cpass_cat2_2016_fit_s->SetFillColor(0);
   cpass_cat2_2016_fit_s->SetBorderMode(0);
   cpass_cat2_2016_fit_s->SetBorderSize(2);
   cpass_cat2_2016_fit_s->SetTickx(1);
   cpass_cat2_2016_fit_s->SetTicky(1);
   cpass_cat2_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat2_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat2_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat2_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat2_2016_fit_s
   TPad *p12pass_cat2_2016_fit_s = new TPad("p12pass_cat2_2016_fit_s", "p12pass_cat2_2016_fit_s",0,0.3,1,1);
   p12pass_cat2_2016_fit_s->Draw();
   p12pass_cat2_2016_fit_s->cd();
   p12pass_cat2_2016_fit_s->Range(18.24324,-45.21124,197.973,2215.351);
   p12pass_cat2_2016_fit_s->SetFillColor(0);
   p12pass_cat2_2016_fit_s->SetBorderMode(0);
   p12pass_cat2_2016_fit_s->SetBorderSize(2);
   p12pass_cat2_2016_fit_s->SetTickx(1);
   p12pass_cat2_2016_fit_s->SetTicky(1);
   p12pass_cat2_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat2_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat2_2016_fit_s__25 = new TH1F("htotpass_cat2_2016_fit_s__25","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s__25->SetBinContent(1,6.656841e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(2,1186.241);
   htotpass_cat2_2016_fit_s__25->SetBinContent(3,1249.627);
   htotpass_cat2_2016_fit_s__25->SetBinContent(4,1264.649);
   htotpass_cat2_2016_fit_s__25->SetBinContent(5,1271.127);
   htotpass_cat2_2016_fit_s__25->SetBinContent(6,1306.782);
   htotpass_cat2_2016_fit_s__25->SetBinContent(7,1326.196);
   htotpass_cat2_2016_fit_s__25->SetBinContent(8,1287.577);
   htotpass_cat2_2016_fit_s__25->SetBinContent(9,1170.708);
   htotpass_cat2_2016_fit_s__25->SetBinContent(10,1045.514);
   htotpass_cat2_2016_fit_s__25->SetBinContent(11,936.4139);
   htotpass_cat2_2016_fit_s__25->SetBinContent(12,842.9653);
   htotpass_cat2_2016_fit_s__25->SetBinContent(13,778.5809);
   htotpass_cat2_2016_fit_s__25->SetBinContent(14,689.6309);
   htotpass_cat2_2016_fit_s__25->SetBinContent(15,599.1801);
   htotpass_cat2_2016_fit_s__25->SetBinContent(16,519.1043);
   htotpass_cat2_2016_fit_s__25->SetBinContent(17,430.448);
   htotpass_cat2_2016_fit_s__25->SetBinContent(18,353.3233);
   htotpass_cat2_2016_fit_s__25->SetBinContent(19,279.1576);
   htotpass_cat2_2016_fit_s__25->SetBinContent(20,220.5512);
   htotpass_cat2_2016_fit_s__25->SetBinContent(21,6.656841e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(22,6.656841e-06);
   htotpass_cat2_2016_fit_s__25->SetBinContent(23,6.656841e-06);
   htotpass_cat2_2016_fit_s__25->SetBinError(1,5.491221e-07);
   htotpass_cat2_2016_fit_s__25->SetBinError(2,14.41107);
   htotpass_cat2_2016_fit_s__25->SetBinError(3,11.20812);
   htotpass_cat2_2016_fit_s__25->SetBinError(4,12.0228);
   htotpass_cat2_2016_fit_s__25->SetBinError(5,13.58838);
   htotpass_cat2_2016_fit_s__25->SetBinError(6,20.59416);
   htotpass_cat2_2016_fit_s__25->SetBinError(7,24.32981);
   htotpass_cat2_2016_fit_s__25->SetBinError(8,24.36274);
   htotpass_cat2_2016_fit_s__25->SetBinError(9,20.07742);
   htotpass_cat2_2016_fit_s__25->SetBinError(10,17.37463);
   htotpass_cat2_2016_fit_s__25->SetBinError(11,12.08776);
   htotpass_cat2_2016_fit_s__25->SetBinError(12,9.867154);
   htotpass_cat2_2016_fit_s__25->SetBinError(13,8.948278);
   htotpass_cat2_2016_fit_s__25->SetBinError(14,8.288194);
   htotpass_cat2_2016_fit_s__25->SetBinError(15,6.843859);
   htotpass_cat2_2016_fit_s__25->SetBinError(16,5.97471);
   htotpass_cat2_2016_fit_s__25->SetBinError(17,5.377514);
   htotpass_cat2_2016_fit_s__25->SetBinError(18,4.776795);
   htotpass_cat2_2016_fit_s__25->SetBinError(19,4.022002);
   htotpass_cat2_2016_fit_s__25->SetBinError(20,3.785164);
   htotpass_cat2_2016_fit_s__25->SetBinError(21,5.491221e-07);
   htotpass_cat2_2016_fit_s__25->SetBinError(22,5.491221e-07);
   htotpass_cat2_2016_fit_s__25->SetBinError(23,5.491221e-07);
   htotpass_cat2_2016_fit_s__25->SetMinimum(0);
   htotpass_cat2_2016_fit_s__25->SetMaximum(1989.295);
   htotpass_cat2_2016_fit_s__25->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__25->SetFillColor(ci);
   htotpass_cat2_2016_fit_s__25->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s__25->SetLineColor(ci);
   htotpass_cat2_2016_fit_s__25->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s__25->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s__25->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s__25->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s__25->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s__25->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s__25->Draw("hist");
   
   TH1F *qcd__26 = new TH1F("qcd__26","qcd in cat2_2016_pass_cat2",23,40,201);
   qcd__26->SetBinContent(2,1176.614);
   qcd__26->SetBinContent(3,1231.551);
   qcd__26->SetBinContent(4,1223.711);
   qcd__26->SetBinContent(5,1196.233);
   qcd__26->SetBinContent(6,1141.755);
   qcd__26->SetBinContent(7,1089.441);
   qcd__26->SetBinContent(8,1039.414);
   qcd__26->SetBinContent(9,981.6344);
   qcd__26->SetBinContent(10,931.6303);
   qcd__26->SetBinContent(11,880.1703);
   qcd__26->SetBinContent(12,814.9039);
   qcd__26->SetBinContent(13,751.286);
   qcd__26->SetBinContent(14,665.5992);
   qcd__26->SetBinContent(15,582.1927);
   qcd__26->SetBinContent(16,506.1267);
   qcd__26->SetBinContent(17,422.4722);
   qcd__26->SetBinContent(18,345.6169);
   qcd__26->SetBinContent(19,277.3956);
   qcd__26->SetBinContent(20,216.1632);
   qcd__26->SetBinError(2,14.3349);
   qcd__26->SetBinError(3,10.88528);
   qcd__26->SetBinError(4,11.25607);
   qcd__26->SetBinError(5,12.05537);
   qcd__26->SetBinError(6,14.18639);
   qcd__26->SetBinError(7,15.38311);
   qcd__26->SetBinError(8,14.35962);
   qcd__26->SetBinError(9,12.63166);
   qcd__26->SetBinError(10,11.25515);
   qcd__26->SetBinError(11,10.02682);
   qcd__26->SetBinError(12,9.138516);
   qcd__26->SetBinError(13,7.992185);
   qcd__26->SetBinError(14,7.467285);
   qcd__26->SetBinError(15,6.35419);
   qcd__26->SetBinError(16,5.650254);
   qcd__26->SetBinError(17,5.243377);
   qcd__26->SetBinError(18,4.635487);
   qcd__26->SetBinError(19,4.01335);
   qcd__26->SetBinError(20,3.727768);
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
   hstackMC_stack_7->SetMaximum(263.0336);
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
   tqq_stack_1->SetBinContent(2,5.856603);
   tqq_stack_1->SetBinContent(3,9.409799);
   tqq_stack_1->SetBinContent(4,11.20079);
   tqq_stack_1->SetBinContent(5,17.35279);
   tqq_stack_1->SetBinContent(6,25.4438);
   tqq_stack_1->SetBinContent(7,30.42086);
   tqq_stack_1->SetBinContent(8,28.20384);
   tqq_stack_1->SetBinContent(9,22.16271);
   tqq_stack_1->SetBinContent(10,26.84012);
   tqq_stack_1->SetBinContent(11,29.75674);
   tqq_stack_1->SetBinContent(12,23.58439);
   tqq_stack_1->SetBinContent(13,26.82798);
   tqq_stack_1->SetBinContent(14,24.03166);
   tqq_stack_1->SetBinContent(15,16.98739);
   tqq_stack_1->SetBinContent(16,12.9776);
   tqq_stack_1->SetBinContent(17,7.97581);
   tqq_stack_1->SetBinContent(18,7.706409);
   tqq_stack_1->SetBinContent(19,1.761916);
   tqq_stack_1->SetBinContent(20,4.387995);
   tqq_stack_1->SetBinError(2,0.8764465);
   tqq_stack_1->SetBinError(3,1.408186);
   tqq_stack_1->SetBinError(4,1.676209);
   tqq_stack_1->SetBinError(5,2.596863);
   tqq_stack_1->SetBinError(6,3.807691);
   tqq_stack_1->SetBinError(7,4.552512);
   tqq_stack_1->SetBinError(8,4.220732);
   tqq_stack_1->SetBinError(9,3.316672);
   tqq_stack_1->SetBinError(10,4.016651);
   tqq_stack_1->SetBinError(11,4.453126);
   tqq_stack_1->SetBinError(12,3.529428);
   tqq_stack_1->SetBinError(13,4.014834);
   tqq_stack_1->SetBinError(14,3.596361);
   tqq_stack_1->SetBinError(15,2.542179);
   tqq_stack_1->SetBinError(16,1.94211);
   tqq_stack_1->SetBinError(17,1.193588);
   tqq_stack_1->SetBinError(18,1.153272);
   tqq_stack_1->SetBinError(19,0.2636724);
   tqq_stack_1->SetBinError(20,0.6566679);
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
   wqq_stack_2->SetBinContent(1,2.646721e-06);
   wqq_stack_2->SetBinContent(2,1.977716);
   wqq_stack_2->SetBinContent(3,6.283323);
   wqq_stack_2->SetBinContent(4,18.35478);
   wqq_stack_2->SetBinContent(5,31.67842);
   wqq_stack_2->SetBinContent(6,86.14884);
   wqq_stack_2->SetBinContent(7,112.1709);
   wqq_stack_2->SetBinContent(8,71.47472);
   wqq_stack_2->SetBinContent(9,35.50932);
   wqq_stack_2->SetBinContent(10,10.05851);
   wqq_stack_2->SetBinContent(11,3.103342);
   wqq_stack_2->SetBinContent(12,0.8762802);
   wqq_stack_2->SetBinContent(13,0.4668528);
   wqq_stack_2->SetBinContent(14,2.646721e-06);
   wqq_stack_2->SetBinContent(15,2.646721e-06);
   wqq_stack_2->SetBinContent(16,2.646721e-06);
   wqq_stack_2->SetBinContent(17,2.646721e-06);
   wqq_stack_2->SetBinContent(18,2.646721e-06);
   wqq_stack_2->SetBinContent(19,2.646721e-06);
   wqq_stack_2->SetBinContent(20,2.646721e-06);
   wqq_stack_2->SetBinContent(21,2.646721e-06);
   wqq_stack_2->SetBinContent(22,2.646721e-06);
   wqq_stack_2->SetBinContent(23,2.646721e-06);
   wqq_stack_2->SetBinError(1,3.45133e-07);
   wqq_stack_2->SetBinError(2,0.2776598);
   wqq_stack_2->SetBinError(3,1.939798);
   wqq_stack_2->SetBinError(4,2.95724);
   wqq_stack_2->SetBinError(5,4.262619);
   wqq_stack_2->SetBinError(6,11.08034);
   wqq_stack_2->SetBinError(7,14.67949);
   wqq_stack_2->SetBinError(8,11.52664);
   wqq_stack_2->SetBinError(9,7.146032);
   wqq_stack_2->SetBinError(10,2.141803);
   wqq_stack_2->SetBinError(11,0.519288);
   wqq_stack_2->SetBinError(12,0.2894925);
   wqq_stack_2->SetBinError(13,0.2788688);
   wqq_stack_2->SetBinError(14,3.45133e-07);
   wqq_stack_2->SetBinError(15,3.45133e-07);
   wqq_stack_2->SetBinError(16,3.45133e-07);
   wqq_stack_2->SetBinError(17,3.45133e-07);
   wqq_stack_2->SetBinError(18,3.45133e-07);
   wqq_stack_2->SetBinError(19,3.45133e-07);
   wqq_stack_2->SetBinError(20,3.45133e-07);
   wqq_stack_2->SetBinError(21,3.45133e-07);
   wqq_stack_2->SetBinError(22,3.45133e-07);
   wqq_stack_2->SetBinError(23,3.45133e-07);
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
   zqq_stack_3->SetBinContent(1,4.01012e-06);
   zqq_stack_3->SetBinContent(2,1.793437);
   zqq_stack_3->SetBinContent(3,2.383156);
   zqq_stack_3->SetBinContent(4,11.38232);
   zqq_stack_3->SetBinContent(5,25.86283);
   zqq_stack_3->SetBinContent(6,53.43454);
   zqq_stack_3->SetBinContent(7,94.16322);
   zqq_stack_3->SetBinContent(8,148.4843);
   zqq_stack_3->SetBinContent(9,131.4017);
   zqq_stack_3->SetBinContent(10,76.98474);
   zqq_stack_3->SetBinContent(11,23.38346);
   zqq_stack_3->SetBinContent(12,3.600637);
   zqq_stack_3->SetBinContent(13,4.01012e-06);
   zqq_stack_3->SetBinContent(14,4.01012e-06);
   zqq_stack_3->SetBinContent(15,4.01012e-06);
   zqq_stack_3->SetBinContent(16,4.01012e-06);
   zqq_stack_3->SetBinContent(17,4.01012e-06);
   zqq_stack_3->SetBinContent(18,4.01012e-06);
   zqq_stack_3->SetBinContent(19,4.01012e-06);
   zqq_stack_3->SetBinContent(20,4.01012e-06);
   zqq_stack_3->SetBinContent(21,4.01012e-06);
   zqq_stack_3->SetBinContent(22,4.01012e-06);
   zqq_stack_3->SetBinContent(23,4.01012e-06);
   zqq_stack_3->SetBinError(1,4.271045e-07);
   zqq_stack_3->SetBinError(2,1.159405);
   zqq_stack_3->SetBinError(3,1.177663);
   zqq_stack_3->SetBinError(4,2.508746);
   zqq_stack_3->SetBinError(5,3.794555);
   zqq_stack_3->SetBinError(6,9.251653);
   zqq_stack_3->SetBinError(7,10.9127);
   zqq_stack_3->SetBinError(8,15.38398);
   zqq_stack_3->SetBinError(9,13.47138);
   zqq_stack_3->SetBinError(10,12.42894);
   zqq_stack_3->SetBinError(11,5.047454);
   zqq_stack_3->SetBinError(12,1.143492);
   zqq_stack_3->SetBinError(13,4.271045e-07);
   zqq_stack_3->SetBinError(14,4.271045e-07);
   zqq_stack_3->SetBinError(15,4.271045e-07);
   zqq_stack_3->SetBinError(16,4.271045e-07);
   zqq_stack_3->SetBinError(17,4.271045e-07);
   zqq_stack_3->SetBinError(18,4.271045e-07);
   zqq_stack_3->SetBinError(19,4.271045e-07);
   zqq_stack_3->SetBinError(20,4.271045e-07);
   zqq_stack_3->SetBinError(21,4.271045e-07);
   zqq_stack_3->SetBinError(22,4.271045e-07);
   zqq_stack_3->SetBinError(23,4.271045e-07);
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
   
   TH1F *hsigpass_cat2_2016_fit_s_stack_4 = new TH1F("hsigpass_cat2_2016_fit_s_stack_4","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(1,1.044712e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(2,0.04512614);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(3,0.6260148);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(4,0.2283929);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(5,0.9161636);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(6,2.04676);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(7,1.554716);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(8,2.345381);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(9,6.734315);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(10,14.16881);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(11,21.34753);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(12,31.26247);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(13,32.14091);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(14,22.19427);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(15,9.681326);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(16,2.519393);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(17,0.728511);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(18,0.394296);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(19,0.2196695);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(20,0.0905484);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(21,1.044712e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(22,1.044712e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinContent(23,1.044712e-06);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(1,3.246375e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(2,0.02027228);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(3,0.2060497);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(4,0.07371394);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(5,0.354029);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(6,0.5605103);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(7,0.4695175);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(8,0.8233991);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(9,2.493992);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(10,4.70054);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(11,6.597087);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(12,10.05885);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(13,10.22611);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(14,7.151501);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(15,2.991876);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(16,0.7552929);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(17,0.1935494);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(18,0.1200058);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(19,0.08460891);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(20,0.04082294);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(21,3.246375e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(22,3.246375e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetBinError(23,3.246375e-07);
   hsigpass_cat2_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat2_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat2_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat2_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat2_2016_fit_s_stack_4,"");
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
   entry=leg->AddEntry("hsigpass_cat2_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat2_2016_fit_s_copy__28 = new TH1F("htotpass_cat2_2016_fit_s_copy__28","wqq in cat2_2016_pass_cat2",23,40,201);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(1,6.656841e-06);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(2,1186.241);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(3,1249.627);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(4,1264.649);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(5,1271.127);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(6,1306.782);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(7,1326.196);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(8,1287.577);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(9,1170.708);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(10,1045.514);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(11,936.4139);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(12,842.9653);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(13,778.5809);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(14,689.6309);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(15,599.1801);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(16,519.1043);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(17,430.448);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(18,353.3233);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(19,279.1576);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(20,220.5512);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(21,6.656841e-06);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(22,6.656841e-06);
   htotpass_cat2_2016_fit_s_copy__28->SetBinContent(23,6.656841e-06);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(1,5.491221e-07);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(2,14.41107);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(3,11.20812);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(4,12.0228);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(5,13.58838);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(6,20.59416);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(7,24.32981);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(8,24.36274);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(9,20.07742);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(10,17.37463);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(11,12.08776);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(12,9.867154);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(13,8.948278);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(14,8.288194);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(15,6.843859);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(16,5.97471);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(17,5.377514);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(18,4.776795);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(19,4.022002);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(20,3.785164);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(21,5.491221e-07);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(22,5.491221e-07);
   htotpass_cat2_2016_fit_s_copy__28->SetBinError(23,5.491221e-07);
   htotpass_cat2_2016_fit_s_copy__28->SetMaximum(1989.295);
   htotpass_cat2_2016_fit_s_copy__28->SetEntries(92);
   htotpass_cat2_2016_fit_s_copy__28->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s_copy__28->SetFillColor(ci);
   htotpass_cat2_2016_fit_s_copy__28->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat2_2016_fit_s_copy__28->SetLineColor(ci);
   htotpass_cat2_2016_fit_s_copy__28->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat2_2016_fit_s_copy__28->SetMarkerColor(ci);
   htotpass_cat2_2016_fit_s_copy__28->SetMarkerSize(0);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetRange(2,20);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetLabelOffset(100);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetTitleOffset(100);
   htotpass_cat2_2016_fit_s_copy__28->GetXaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__28->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat2_2016_fit_s_copy__28->GetYaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__28->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat2_2016_fit_s_copy__28->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat2_2016_fit_s_copy__28->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat2_2016_fit_s_copy__28->GetYaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__28->GetZaxis()->SetLabelFont(42);
   htotpass_cat2_2016_fit_s_copy__28->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat2_2016_fit_s_copy__28->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat2_2016_fit_s_copy__28->GetZaxis()->SetTitleFont(42);
   htotpass_cat2_2016_fit_s_copy__28->Draw("sameaxis");
   p12pass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat2_2016_fit_s
   TPad *p22pass_cat2_2016_fit_s = new TPad("p22pass_cat2_2016_fit_s", "p22pass_cat2_2016_fit_s",0,0,1,0.3);
   p22pass_cat2_2016_fit_s->Draw();
   p22pass_cat2_2016_fit_s->cd();
   p22pass_cat2_2016_fit_s->Range(18.24324,-8.83782,197.973,4.650917);
   p22pass_cat2_2016_fit_s->SetFillColor(0);
   p22pass_cat2_2016_fit_s->SetBorderMode(0);
   p22pass_cat2_2016_fit_s->SetBorderSize(2);
   p22pass_cat2_2016_fit_s->SetTickx(1);
   p22pass_cat2_2016_fit_s->SetTicky(1);
   p22pass_cat2_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat2_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat2_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat2_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat2_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s__29 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s__29","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(1,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(2,0.4243029);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(3,0.303337);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(4,0.2882587);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(5,0.3076407);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(6,0.2888203);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(7,0.3723736);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(8,0.3896639);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(9,0.3363189);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(10,0.3027012);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(11,0.2852372);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(12,0.2806605);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(13,0.2814856);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(14,0.2731284);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(15,0.255951);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(16,0.2291459);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(17,0.2257475);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(18,0.2529688);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(19,0.2608331);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(20,0.2961348);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(21,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(22,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetBinError(23,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetMinimum(-4.791199);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetMaximum(3.97648);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_s__29->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_s__29->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__29->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__29->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__29->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__29->Draw("");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s__30 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s__30","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(1,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(2,0.4243029);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(3,0.303337);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(4,0.2882587);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(5,0.3076407);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(6,0.2888203);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(7,0.3723736);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(8,0.3896639);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(9,0.3363189);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(10,0.3027012);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(11,0.2852372);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(12,0.2806605);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(13,0.2814856);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(14,0.2731284);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(15,0.255951);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(16,0.2291459);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(17,0.2257475);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(18,0.2529688);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(19,0.2608331);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(20,0.2961348);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(21,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(22,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetBinError(23,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMinimum(-4.791199);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMaximum(3.97648);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_s__30->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_s__30->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s__30->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s__30->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s__30->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_8 = new TH1F("hstack_stack_8","hstack",23,40,201);
   hstack_stack_8->SetMinimum(-9.097279);
   hstack_stack_8->SetMaximum(11.92268);
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
   
   
   TH1F *sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1 = new TH1F("sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1","ggH_hbb in cat2_2016_pass_cat2",23,40,201);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(2,0.001301748);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(3,0.01796168);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(4,0.006624351);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(5,0.02598882);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(6,0.05606565);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(7,0.04255549);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(8,0.06650469);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(9,0.2006257);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(10,0.4385746);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(11,0.7058413);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(12,1.045747);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(13,1.128829);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(14,0.8408515);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(15,0.397668);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(16,0.1096749);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(17,0.03539282);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(18,0.02148888);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(19,0.01290661);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinContent(20,0.0064403);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(1,3.246375e-07);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(2,0.02027228);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(3,0.2060497);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(4,0.07371394);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(5,0.354029);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(6,0.5605103);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(7,0.4695175);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(8,0.8233991);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(9,2.493992);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(10,4.70054);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(11,6.597087);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(12,10.05885);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(13,10.22611);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(14,7.151501);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(15,2.991876);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(16,0.7552929);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(17,0.1935494);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(18,0.1200058);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(19,0.08460891);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(20,0.04082294);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(21,3.246375e-07);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(22,3.246375e-07);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetBinError(23,3.246375e-07);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat2_2016_fit_spass_cat2_2016_fit_s_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat2_2016_fit_s__31 = new TH1F("iOneWithErrorsLinepass_cat2_2016_fit_s__31","",23,40,201);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(1,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(2,0.4243029);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(3,0.303337);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(4,0.2882587);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(5,0.3076407);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(6,0.2888203);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(7,0.3723736);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(8,0.3896639);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(9,0.3363189);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(10,0.3027012);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(11,0.2852372);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(12,0.2806605);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(13,0.2814856);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(14,0.2731284);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(15,0.255951);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(16,0.2291459);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(17,0.2257475);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(18,0.2529688);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(19,0.2608331);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(20,0.2961348);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(21,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(22,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetBinError(23,6.867415e-07);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetFillColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetLineColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetRange(2,20);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat2_2016_fit_s__31->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fx3008[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fy3008[23] = {
   0,
   0.4416635,
   -0.9935269,
   -2.194133,
   -0.797874,
   0.6987705,
   0.2344648,
   -1.235639,
   -1.302133,
   -0.04685346,
   -0.7080352,
   1.650987,
   1.099311,
   0.2688096,
   -0.2538505,
   0.3707601,
   -0.3132578,
   -0.8896078,
   0.600712,
   -1.603965,
   0,
   0,
   0};
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_felx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fely3008[23] = {
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fehx3008[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat2_2016_fit_s_fehy3008[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat2_2016_fit_s_fx3008,Graph_from_iRatiopass_cat2_2016_fit_s_fy3008,Graph_from_iRatiopass_cat2_2016_fit_s_felx3008,Graph_from_iRatiopass_cat2_2016_fit_s_fehx3008,Graph_from_iRatiopass_cat2_2016_fit_s_fely3008,Graph_from_iRatiopass_cat2_2016_fit_s_fehy3008);
   grae->SetName("Graph_from_iRatiopass_cat2_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008 = new TH1F("Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetMinimum(-3.778645);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetMaximum(3.235499);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetStats(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat2_2016_fit_s3008);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat2_2016_fit_s_copy__32 = new TH1F("iOneWithErrorspass_cat2_2016_fit_s_copy__32","",23,40,201);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(1,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(2,0.4243029);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(3,0.303337);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(4,0.2882587);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(5,0.3076407);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(6,0.2888203);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(7,0.3723736);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(8,0.3896639);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(9,0.3363189);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(10,0.3027012);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(11,0.2852372);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(12,0.2806605);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(13,0.2814856);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(14,0.2731284);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(15,0.255951);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(16,0.2291459);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(17,0.2257475);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(18,0.2529688);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(19,0.2608331);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(20,0.2961348);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(21,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(22,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetBinError(23,6.867415e-07);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMinimum(-4.791199);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMaximum(3.97648);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetEntries(184);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetFillColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetLineColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMarkerColor(ci);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->SetMarkerSize(0);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetRange(2,20);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat2_2016_fit_s_copy__32->Draw("sameaxis");
   p22pass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
   cpass_cat2_2016_fit_s->Modified();
   cpass_cat2_2016_fit_s->cd();
   cpass_cat2_2016_fit_s->SetSelected(cpass_cat2_2016_fit_s);
}
