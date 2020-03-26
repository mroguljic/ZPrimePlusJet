void mlfit_fail_cat3_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat3_2016_fit_s/cfail_cat3_2016_fit_s
//=========  (Wed Sep  4 11:54:22 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat3_2016_fit_s = new TCanvas("cfail_cat3_2016_fit_s", "cfail_cat3_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat3_2016_fit_s->SetHighLightColor(2);
   cfail_cat3_2016_fit_s->Range(0,0,1,1);
   cfail_cat3_2016_fit_s->SetFillColor(0);
   cfail_cat3_2016_fit_s->SetBorderMode(0);
   cfail_cat3_2016_fit_s->SetBorderSize(2);
   cfail_cat3_2016_fit_s->SetTickx(1);
   cfail_cat3_2016_fit_s->SetTicky(1);
   cfail_cat3_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat3_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat3_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat3_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat3_2016_fit_s
   TPad *p12fail_cat3_2016_fit_s = new TPad("p12fail_cat3_2016_fit_s", "p12fail_cat3_2016_fit_s",0,0.3,1,1);
   p12fail_cat3_2016_fit_s->Draw();
   p12fail_cat3_2016_fit_s->cd();
   p12fail_cat3_2016_fit_s->Range(13.7027,-1734.572,221.8108,84994.02);
   p12fail_cat3_2016_fit_s->SetFillColor(0);
   p12fail_cat3_2016_fit_s->SetBorderMode(0);
   p12fail_cat3_2016_fit_s->SetBorderSize(2);
   p12fail_cat3_2016_fit_s->SetTickx(1);
   p12fail_cat3_2016_fit_s->SetTicky(1);
   p12fail_cat3_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat3_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat3_2016_fit_s__33 = new TH1F("htotfail_cat3_2016_fit_s__33","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_s__33->SetBinContent(1,6.527916e-05);
   htotfail_cat3_2016_fit_s__33->SetBinContent(2,50880.77);
   htotfail_cat3_2016_fit_s__33->SetBinContent(3,46264.43);
   htotfail_cat3_2016_fit_s__33->SetBinContent(4,42767.12);
   htotfail_cat3_2016_fit_s__33->SetBinContent(5,40007.09);
   htotfail_cat3_2016_fit_s__33->SetBinContent(6,38583.21);
   htotfail_cat3_2016_fit_s__33->SetBinContent(7,37534.18);
   htotfail_cat3_2016_fit_s__33->SetBinContent(8,35352.76);
   htotfail_cat3_2016_fit_s__33->SetBinContent(9,33146.47);
   htotfail_cat3_2016_fit_s__33->SetBinContent(10,31728.31);
   htotfail_cat3_2016_fit_s__33->SetBinContent(11,6.527916e-05);
   htotfail_cat3_2016_fit_s__33->SetBinContent(12,6.527916e-05);
   htotfail_cat3_2016_fit_s__33->SetBinContent(13,6.527916e-05);
   htotfail_cat3_2016_fit_s__33->SetBinContent(14,27743.55);
   htotfail_cat3_2016_fit_s__33->SetBinContent(15,27003.62);
   htotfail_cat3_2016_fit_s__33->SetBinContent(16,25302.74);
   htotfail_cat3_2016_fit_s__33->SetBinContent(17,23475.79);
   htotfail_cat3_2016_fit_s__33->SetBinContent(18,21839.59);
   htotfail_cat3_2016_fit_s__33->SetBinContent(19,19827.54);
   htotfail_cat3_2016_fit_s__33->SetBinContent(20,18406.65);
   htotfail_cat3_2016_fit_s__33->SetBinContent(21,16306.07);
   htotfail_cat3_2016_fit_s__33->SetBinContent(22,14265.63);
   htotfail_cat3_2016_fit_s__33->SetBinContent(23,12719.77);
   htotfail_cat3_2016_fit_s__33->SetMinimum(0);
   htotfail_cat3_2016_fit_s__33->SetMaximum(76321.16);
   htotfail_cat3_2016_fit_s__33->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__33->SetFillColor(ci);
   htotfail_cat3_2016_fit_s__33->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__33->SetLineColor(ci);
   htotfail_cat3_2016_fit_s__33->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_s__33->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_s__33->SetMarkerSize(0);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_s__33->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_s__33->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__33->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__33->Draw("");
   
   TH1F *htot_linefail_cat3_2016_fit_s__34 = new TH1F("htot_linefail_cat3_2016_fit_s__34","wqq in cat3_2016_fail_cat3",23,40,201);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(1,6.527916e-05);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(2,50880.77);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(3,46264.43);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(4,42767.12);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(5,40007.09);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(6,38583.21);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(7,37534.18);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(8,35352.76);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(9,33146.47);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(10,31728.31);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(11,6.527916e-05);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(12,6.527916e-05);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(13,6.527916e-05);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(14,27743.55);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(15,27003.62);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(16,25302.74);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(17,23475.79);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(18,21839.59);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(19,19827.54);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(20,18406.65);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(21,16306.07);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(22,14265.63);
   htot_linefail_cat3_2016_fit_s__34->SetBinContent(23,12719.77);
   htot_linefail_cat3_2016_fit_s__34->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat3_2016_fit_s__34->SetFillColor(ci);
   htot_linefail_cat3_2016_fit_s__34->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat3_2016_fit_s__34->SetLineColor(ci);
   htot_linefail_cat3_2016_fit_s__34->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat3_2016_fit_s__34->SetMarkerColor(ci);
   htot_linefail_cat3_2016_fit_s__34->SetMarkerSize(0);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetRange(2,23);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat3_2016_fit_s__34->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat3_2016_fit_s__34->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat3_2016_fit_s__34->Draw("histsame");
   
   TH1F *qcd__35 = new TH1F("qcd__35","qcd in cat3_2016_fail_cat3",23,40,201);
   qcd__35->SetBinContent(2,50793.93);
   qcd__35->SetBinContent(3,46095.55);
   qcd__35->SetBinContent(4,42326.44);
   qcd__35->SetBinContent(5,39044.68);
   qcd__35->SetBinContent(6,36352.38);
   qcd__35->SetBinContent(7,34844.5);
   qcd__35->SetBinContent(8,33419.59);
   qcd__35->SetBinContent(9,31861.83);
   qcd__35->SetBinContent(10,31141.98);
   qcd__35->SetBinContent(14,27596.01);
   qcd__35->SetBinContent(15,26872.27);
   qcd__35->SetBinContent(16,25196.6);
   qcd__35->SetBinContent(17,23386.82);
   qcd__35->SetBinContent(18,21772.73);
   qcd__35->SetBinContent(19,19769.31);
   qcd__35->SetBinContent(20,18357.78);
   qcd__35->SetBinContent(21,16272.85);
   qcd__35->SetBinContent(22,14242.69);
   qcd__35->SetBinContent(23,12703.59);
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
   
   TH1F *htotfail_cat3_2016_fit_s__36 = new TH1F("htotfail_cat3_2016_fit_s__36","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_s__36->SetBinContent(1,6.527916e-05);
   htotfail_cat3_2016_fit_s__36->SetBinContent(2,50880.77);
   htotfail_cat3_2016_fit_s__36->SetBinContent(3,46264.43);
   htotfail_cat3_2016_fit_s__36->SetBinContent(4,42767.12);
   htotfail_cat3_2016_fit_s__36->SetBinContent(5,40007.09);
   htotfail_cat3_2016_fit_s__36->SetBinContent(6,38583.21);
   htotfail_cat3_2016_fit_s__36->SetBinContent(7,37534.18);
   htotfail_cat3_2016_fit_s__36->SetBinContent(8,35352.76);
   htotfail_cat3_2016_fit_s__36->SetBinContent(9,33146.47);
   htotfail_cat3_2016_fit_s__36->SetBinContent(10,31728.31);
   htotfail_cat3_2016_fit_s__36->SetBinContent(11,6.527916e-05);
   htotfail_cat3_2016_fit_s__36->SetBinContent(12,6.527916e-05);
   htotfail_cat3_2016_fit_s__36->SetBinContent(13,6.527916e-05);
   htotfail_cat3_2016_fit_s__36->SetBinContent(14,27743.55);
   htotfail_cat3_2016_fit_s__36->SetBinContent(15,27003.62);
   htotfail_cat3_2016_fit_s__36->SetBinContent(16,25302.74);
   htotfail_cat3_2016_fit_s__36->SetBinContent(17,23475.79);
   htotfail_cat3_2016_fit_s__36->SetBinContent(18,21839.59);
   htotfail_cat3_2016_fit_s__36->SetBinContent(19,19827.54);
   htotfail_cat3_2016_fit_s__36->SetBinContent(20,18406.65);
   htotfail_cat3_2016_fit_s__36->SetBinContent(21,16306.07);
   htotfail_cat3_2016_fit_s__36->SetBinContent(22,14265.63);
   htotfail_cat3_2016_fit_s__36->SetBinContent(23,12719.77);
   htotfail_cat3_2016_fit_s__36->SetMinimum(0);
   htotfail_cat3_2016_fit_s__36->SetMaximum(76321.16);
   htotfail_cat3_2016_fit_s__36->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__36->SetFillColor(ci);
   htotfail_cat3_2016_fit_s__36->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s__36->SetLineColor(ci);
   htotfail_cat3_2016_fit_s__36->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_s__36->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_s__36->SetMarkerSize(0);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_s__36->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_s__36->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s__36->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s__36->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis9[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_9 = new TH1F("hstackMC_stack_9","hstackMC",23, xAxis9);
   hstackMC_stack_9->SetMinimum(0);
   hstackMC_stack_9->SetMaximum(2829.885);
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
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat3_2016_fail_cat3",23, xAxis10);
   tqq_stack_1->SetBinContent(2,44.92179);
   tqq_stack_1->SetBinContent(3,52.40084);
   tqq_stack_1->SetBinContent(4,64.59045);
   tqq_stack_1->SetBinContent(5,90.81342);
   tqq_stack_1->SetBinContent(6,206.4843);
   tqq_stack_1->SetBinContent(7,235.4264);
   tqq_stack_1->SetBinContent(8,171.829);
   tqq_stack_1->SetBinContent(9,111.9329);
   tqq_stack_1->SetBinContent(10,110.0725);
   tqq_stack_1->SetBinContent(14,134.3963);
   tqq_stack_1->SetBinContent(15,125.131);
   tqq_stack_1->SetBinContent(16,102.7756);
   tqq_stack_1->SetBinContent(17,84.71817);
   tqq_stack_1->SetBinContent(18,64.83687);
   tqq_stack_1->SetBinContent(19,58.22207);
   tqq_stack_1->SetBinContent(20,47.287);
   tqq_stack_1->SetBinContent(21,33.22377);
   tqq_stack_1->SetBinContent(22,22.94746);
   tqq_stack_1->SetBinContent(23,16.18636);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat3_2016_fail_cat3",23,40,201);
   wqq_stack_2->SetBinContent(1,4.72056e-05);
   wqq_stack_2->SetBinContent(2,30.79097);
   wqq_stack_2->SetBinContent(3,95.72092);
   wqq_stack_2->SetBinContent(4,347.7213);
   wqq_stack_2->SetBinContent(5,796.6426);
   wqq_stack_2->SetBinContent(6,1741.94);
   wqq_stack_2->SetBinContent(7,1946.516);
   wqq_stack_2->SetBinContent(8,1032.748);
   wqq_stack_2->SetBinContent(9,571.9412);
   wqq_stack_2->SetBinContent(10,176.3678);
   wqq_stack_2->SetBinContent(11,4.72056e-05);
   wqq_stack_2->SetBinContent(12,4.72056e-05);
   wqq_stack_2->SetBinContent(13,4.72056e-05);
   wqq_stack_2->SetBinContent(14,3.269162);
   wqq_stack_2->SetBinContent(15,4.72056e-05);
   wqq_stack_2->SetBinContent(16,4.72056e-05);
   wqq_stack_2->SetBinContent(17,4.72056e-05);
   wqq_stack_2->SetBinContent(18,4.72056e-05);
   wqq_stack_2->SetBinContent(19,4.72056e-05);
   wqq_stack_2->SetBinContent(20,4.72056e-05);
   wqq_stack_2->SetBinContent(21,4.72056e-05);
   wqq_stack_2->SetBinContent(22,4.72056e-05);
   wqq_stack_2->SetBinContent(23,4.72056e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat3_2016_fail_cat3",23,40,201);
   zqq_stack_3->SetBinContent(1,1.807356e-05);
   zqq_stack_3->SetBinContent(2,11.13434);
   zqq_stack_3->SetBinContent(3,20.7618);
   zqq_stack_3->SetBinContent(4,28.36328);
   zqq_stack_3->SetBinContent(5,74.95615);
   zqq_stack_3->SetBinContent(6,282.415);
   zqq_stack_3->SetBinContent(7,507.7379);
   zqq_stack_3->SetBinContent(8,728.5968);
   zqq_stack_3->SetBinContent(9,600.7656);
   zqq_stack_3->SetBinContent(10,299.8882);
   zqq_stack_3->SetBinContent(11,1.807356e-05);
   zqq_stack_3->SetBinContent(12,1.807356e-05);
   zqq_stack_3->SetBinContent(13,1.807356e-05);
   zqq_stack_3->SetBinContent(14,9.879637);
   zqq_stack_3->SetBinContent(15,6.225031);
   zqq_stack_3->SetBinContent(16,3.361175);
   zqq_stack_3->SetBinContent(17,4.255897);
   zqq_stack_3->SetBinContent(18,2.017425);
   zqq_stack_3->SetBinContent(19,1.807356e-05);
   zqq_stack_3->SetBinContent(20,1.579437);
   zqq_stack_3->SetBinContent(21,1.807356e-05);
   zqq_stack_3->SetBinContent(22,1.807356e-05);
   zqq_stack_3->SetBinContent(23,1.807356e-05);
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
   
   TH1F *hsigfail_cat3_2016_fit_s_stack_4 = new TH1F("hsigfail_cat3_2016_fit_s_stack_4","hqq125 in cat3_2016_fail_cat3",23,40,201);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(1,4.848043e-07);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(2,0.4589985);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(3,1.300405);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(4,1.980118);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(5,1.778769);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(6,3.69514);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(7,5.448683);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(8,4.272315);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(9,7.140403);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(10,10.59411);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(11,4.848043e-07);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(12,4.848043e-07);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(13,4.848043e-07);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(14,11.96031);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(15,7.867428);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(16,2.610882);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(17,3.545608);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(18,1.677459);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(19,2.392159);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(20,1.115747);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(21,1.06917);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(22,0.1899498);
   hsigfail_cat3_2016_fit_s_stack_4->SetBinContent(23,0.1601221);
   hsigfail_cat3_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat3_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat3_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat3_2016_fit_s_stack_4,"");
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
   50846,
   46247,
   42792,
   40002,
   38588,
   37522,
   35351,
   33170,
   31747,
   0,
   0,
   0,
   27745,
   27004,
   25285,
   23494,
   21863,
   19838,
   18392,
   16338,
   14272,
   12701};
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
   226.497,
   216.0574,
   207.8684,
   201.011,
   197.4443,
   194.7119,
   189.0245,
   183.1321,
   179.1826,
   1.841055,
   1.841055,
   1.841055,
   167.5739,
   165.3345,
   160.0181,
   154.283,
   148.8669,
   141.8529,
   136.6225,
   128.8256,
   120.4709,
   113.7041};
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
   225.4947,
   215.055,
   206.8659,
   200.0085,
   196.4417,
   193.7093,
   188.0218,
   182.1294,
   178.1798,
   0,
   0,
   0,
   166.5709,
   164.3315,
   159.015,
   153.2798,
   147.8635,
   140.8493,
   135.6188,
   127.8216,
   119.4667,
   112.6997};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3009,data_copy_fy3009,data_copy_felx3009,data_copy_fehx3009,data_copy_fely3009,data_copy_fehy3009);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat3_2016_fail_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3009 = new TH1F("Graph_data_copy3009","tqq in cat3_2016_fail_cat3",100,28.1,212.9);
   Graph_data_copy3009->SetMinimum(0);
   Graph_data_copy3009->SetMaximum(56178.83);
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
   entry=leg->AddEntry("htotfail_cat3_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat3_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.77,"550 < p_{T} < 600 GeV");
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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat3_2016_fit_s_copy__37 = new TH1F("htotfail_cat3_2016_fit_s_copy__37","wqq in cat3_2016_fail_cat3",23,40,201);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(1,6.527916e-05);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(2,50880.77);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(3,46264.43);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(4,42767.12);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(5,40007.09);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(6,38583.21);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(7,37534.18);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(8,35352.76);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(9,33146.47);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(10,31728.31);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(11,6.527916e-05);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(12,6.527916e-05);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(13,6.527916e-05);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(14,27743.55);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(15,27003.62);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(16,25302.74);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(17,23475.79);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(18,21839.59);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(19,19827.54);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(20,18406.65);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(21,16306.07);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(22,14265.63);
   htotfail_cat3_2016_fit_s_copy__37->SetBinContent(23,12719.77);
   htotfail_cat3_2016_fit_s_copy__37->SetMaximum(76321.16);
   htotfail_cat3_2016_fit_s_copy__37->SetEntries(92);
   htotfail_cat3_2016_fit_s_copy__37->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s_copy__37->SetFillColor(ci);
   htotfail_cat3_2016_fit_s_copy__37->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat3_2016_fit_s_copy__37->SetLineColor(ci);
   htotfail_cat3_2016_fit_s_copy__37->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat3_2016_fit_s_copy__37->SetMarkerColor(ci);
   htotfail_cat3_2016_fit_s_copy__37->SetMarkerSize(0);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetRange(2,23);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetLabelOffset(100);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitleOffset(100);
   htotfail_cat3_2016_fit_s_copy__37->GetXaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat3_2016_fit_s_copy__37->GetYaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetLabelFont(42);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat3_2016_fit_s_copy__37->GetZaxis()->SetTitleFont(42);
   htotfail_cat3_2016_fit_s_copy__37->Draw("sameaxis");
   p12fail_cat3_2016_fit_s->Modified();
   cfail_cat3_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat3_2016_fit_s
   TPad *p22fail_cat3_2016_fit_s = new TPad("p22fail_cat3_2016_fit_s", "p22fail_cat3_2016_fit_s",0,0,1,0.3);
   p22fail_cat3_2016_fit_s->Draw();
   p22fail_cat3_2016_fit_s->cd();
   p22fail_cat3_2016_fit_s->Range(13.7027,-15.99062,221.8108,20.64478);
   p22fail_cat3_2016_fit_s->SetFillColor(0);
   p22fail_cat3_2016_fit_s->SetBorderMode(0);
   p22fail_cat3_2016_fit_s->SetBorderSize(2);
   p22fail_cat3_2016_fit_s->SetTickx(1);
   p22fail_cat3_2016_fit_s->SetTicky(1);
   p22fail_cat3_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat3_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat3_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat3_2016_fit_s__38 = new TH1F("iOneWithErrorsfail_cat3_2016_fit_s__38","",23,40,201);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMinimum(-5);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMaximum(18.81301);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetFillColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetLineColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMarkerColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s__38->SetMarkerSize(0);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s__38->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s__38->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_10 = new TH1F("hstack_stack_10","hstack",23,40,201);
   hstack_stack_10->SetMinimum(0);
   hstack_stack_10->SetMaximum(13.3328);
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
   
   
   TH1F *sigHistResidualwqqfail_cat3_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat3_2016_fit_s_stack_1","wqq in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(2,0.1365485);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(3,0.4450997);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(4,1.680902);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(5,3.983044);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(6,8.867467);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(7,10.04864);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(8,5.492701);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(9,3.140302);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(10,0.9898303);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(14,0.01962625);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(15,2.872584e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(16,2.968626e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(17,3.079702e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(18,3.192512e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(19,3.351497e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(20,3.480756e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(21,3.693083e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(22,3.951362e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetBinContent(23,4.188619e-07);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat3_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat3_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat3_2016_fit_s_stack_2","zqq in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(2,0.0493774);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(3,0.0965418);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(4,0.1371095);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(5,0.3747648);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(6,1.437653);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(7,2.621133);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(8,3.875066);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(9,3.298566);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(10,1.683065);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(14,0.0593119);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(15,0.03788094);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(16,0.02113747);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(17,0.02776555);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(18,0.01364383);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(19,1.283185e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(20,0.01164615);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(21,1.413967e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(22,1.512854e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetBinContent(23,1.603693e-07);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat3_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat3_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3","hqq125 in cat3_2016_fail_cat3",23,40,201);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(2,0.002035518);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(3,0.006046847);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(4,0.009571986);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(5,0.008893467);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(6,0.01881036);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(7,0.02812814);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(8,0.02272244);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(9,0.03920512);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(10,0.0594574);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(14,0.0718031);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(15,0.04787536);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(16,0.0164191);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(17,0.02313161);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(18,0.01134465);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(19,0.01698382);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(20,0.008227082);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(21,0.008364544);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(22,0.001589982);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetBinContent(23,0.001420786);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat3_2016_fit_sfail_cat3_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat3_2016_fit_s__39 = new TH1F("iOneWithErrorsLinefail_cat3_2016_fit_s__39","",23,40,201);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetFillColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetLineColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat3_2016_fit_s__39->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fx3010[23] = {
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fy3010[23] = {
   0,
   0.0315781,
   0.4584466,
   1.928955,
   4.310748,
   10.27703,
   12.54201,
   9.308752,
   6.532094,
   2.762261,
   0,
   0,
   0,
   0.08711173,
   0.0399167,
   -0.09041258,
   0.145608,
   0.1708347,
   0.07375875,
   -0.09637537,
   0.2478369,
   0.0528525,
   -0.1665794};
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_felx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fely3010[23] = {
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fehx3010[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat3_2016_fit_s_fehy3010[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat3_2016_fit_s_fx3010,Graph_from_iRatiofail_cat3_2016_fit_s_fy3010,Graph_from_iRatiofail_cat3_2016_fit_s_felx3010,Graph_from_iRatiofail_cat3_2016_fit_s_fehx3010,Graph_from_iRatiofail_cat3_2016_fit_s_fely3010,Graph_from_iRatiofail_cat3_2016_fit_s_fehy3010);
   grae->SetName("Graph_from_iRatiofail_cat3_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010 = new TH1F("Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetMinimum(-2.637438);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetMaximum(15.01287);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetStats(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat3_2016_fit_s3010);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat3_2016_fit_s_copy__40 = new TH1F("iOneWithErrorsfail_cat3_2016_fit_s_copy__40","",23,40,201);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMinimum(-5);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMaximum(18.81301);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetEntries(184);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetFillColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetLineColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMarkerColor(ci);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->SetMarkerSize(0);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat3_2016_fit_s_copy__40->Draw("sameaxis");
   p22fail_cat3_2016_fit_s->Modified();
   cfail_cat3_2016_fit_s->cd();
   cfail_cat3_2016_fit_s->Modified();
   cfail_cat3_2016_fit_s->cd();
   cfail_cat3_2016_fit_s->SetSelected(cfail_cat3_2016_fit_s);
}
