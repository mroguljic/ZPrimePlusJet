void mlfit_fail_cat4_2016_fit_s()
{
//=========Macro generated from canvas: cfail_cat4_2016_fit_s/cfail_cat4_2016_fit_s
//=========  (Wed Sep  4 11:54:23 2019) by ROOT version 6.12/07
   TCanvas *cfail_cat4_2016_fit_s = new TCanvas("cfail_cat4_2016_fit_s", "cfail_cat4_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_cat4_2016_fit_s->SetHighLightColor(2);
   cfail_cat4_2016_fit_s->Range(0,0,1,1);
   cfail_cat4_2016_fit_s->SetFillColor(0);
   cfail_cat4_2016_fit_s->SetBorderMode(0);
   cfail_cat4_2016_fit_s->SetBorderSize(2);
   cfail_cat4_2016_fit_s->SetTickx(1);
   cfail_cat4_2016_fit_s->SetTicky(1);
   cfail_cat4_2016_fit_s->SetLeftMargin(0.16);
   cfail_cat4_2016_fit_s->SetBottomMargin(0.13);
   cfail_cat4_2016_fit_s->SetFrameFillStyle(0);
   cfail_cat4_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_cat4_2016_fit_s
   TPad *p12fail_cat4_2016_fit_s = new TPad("p12fail_cat4_2016_fit_s", "p12fail_cat4_2016_fit_s",0,0.3,1,1);
   p12fail_cat4_2016_fit_s->Draw();
   p12fail_cat4_2016_fit_s->cd();
   p12fail_cat4_2016_fit_s->Range(13.7027,-1276.155,221.8108,62531.57);
   p12fail_cat4_2016_fit_s->SetFillColor(0);
   p12fail_cat4_2016_fit_s->SetBorderMode(0);
   p12fail_cat4_2016_fit_s->SetBorderSize(2);
   p12fail_cat4_2016_fit_s->SetTickx(1);
   p12fail_cat4_2016_fit_s->SetTicky(1);
   p12fail_cat4_2016_fit_s->SetLeftMargin(0.16);
   p12fail_cat4_2016_fit_s->SetBottomMargin(0.02);
   p12fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   p12fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_cat4_2016_fit_s__49 = new TH1F("htotfail_cat4_2016_fit_s__49","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_s__49->SetBinContent(1,5.209243e-05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(2,37433.87);
   htotfail_cat4_2016_fit_s__49->SetBinContent(3,34005.88);
   htotfail_cat4_2016_fit_s__49->SetBinContent(4,31607.21);
   htotfail_cat4_2016_fit_s__49->SetBinContent(5,29922.03);
   htotfail_cat4_2016_fit_s__49->SetBinContent(6,28309.88);
   htotfail_cat4_2016_fit_s__49->SetBinContent(7,27303.14);
   htotfail_cat4_2016_fit_s__49->SetBinContent(8,25724.17);
   htotfail_cat4_2016_fit_s__49->SetBinContent(9,23721.23);
   htotfail_cat4_2016_fit_s__49->SetBinContent(10,22629.43);
   htotfail_cat4_2016_fit_s__49->SetBinContent(11,5.209243e-05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(12,5.209243e-05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(13,5.209243e-05);
   htotfail_cat4_2016_fit_s__49->SetBinContent(14,20071.78);
   htotfail_cat4_2016_fit_s__49->SetBinContent(15,19847.3);
   htotfail_cat4_2016_fit_s__49->SetBinContent(16,18786.63);
   htotfail_cat4_2016_fit_s__49->SetBinContent(17,18481.74);
   htotfail_cat4_2016_fit_s__49->SetBinContent(18,17147.32);
   htotfail_cat4_2016_fit_s__49->SetBinContent(19,16188.1);
   htotfail_cat4_2016_fit_s__49->SetBinContent(20,14934.92);
   htotfail_cat4_2016_fit_s__49->SetBinContent(21,13932.48);
   htotfail_cat4_2016_fit_s__49->SetBinContent(22,12913.03);
   htotfail_cat4_2016_fit_s__49->SetBinContent(23,11647.43);
   htotfail_cat4_2016_fit_s__49->SetMinimum(0);
   htotfail_cat4_2016_fit_s__49->SetMaximum(56150.8);
   htotfail_cat4_2016_fit_s__49->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__49->SetFillColor(ci);
   htotfail_cat4_2016_fit_s__49->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__49->SetLineColor(ci);
   htotfail_cat4_2016_fit_s__49->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_s__49->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_s__49->SetMarkerSize(0);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_s__49->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_s__49->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__49->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__49->Draw("");
   
   TH1F *htot_linefail_cat4_2016_fit_s__50 = new TH1F("htot_linefail_cat4_2016_fit_s__50","wqq in cat4_2016_fail_cat4",23,40,201);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(1,5.209243e-05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(2,37433.87);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(3,34005.88);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(4,31607.21);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(5,29922.03);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(6,28309.88);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(7,27303.14);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(8,25724.17);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(9,23721.23);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(10,22629.43);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(11,5.209243e-05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(12,5.209243e-05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(13,5.209243e-05);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(14,20071.78);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(15,19847.3);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(16,18786.63);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(17,18481.74);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(18,17147.32);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(19,16188.1);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(20,14934.92);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(21,13932.48);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(22,12913.03);
   htot_linefail_cat4_2016_fit_s__50->SetBinContent(23,11647.43);
   htot_linefail_cat4_2016_fit_s__50->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat4_2016_fit_s__50->SetFillColor(ci);
   htot_linefail_cat4_2016_fit_s__50->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_cat4_2016_fit_s__50->SetLineColor(ci);
   htot_linefail_cat4_2016_fit_s__50->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_cat4_2016_fit_s__50->SetMarkerColor(ci);
   htot_linefail_cat4_2016_fit_s__50->SetMarkerSize(0);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetRange(2,23);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetXaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_cat4_2016_fit_s__50->GetYaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetLabelFont(42);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_cat4_2016_fit_s__50->GetZaxis()->SetTitleFont(42);
   htot_linefail_cat4_2016_fit_s__50->Draw("histsame");
   
   TH1F *qcd__51 = new TH1F("qcd__51","qcd in cat4_2016_fail_cat4",23,40,201);
   qcd__51->SetBinContent(2,37348.6);
   qcd__51->SetBinContent(3,33864.49);
   qcd__51->SetBinContent(4,31216.76);
   qcd__51->SetBinContent(5,29087.8);
   qcd__51->SetBinContent(6,26650.25);
   qcd__51->SetBinContent(7,25305.01);
   qcd__51->SetBinContent(8,24203.37);
   qcd__51->SetBinContent(9,22648);
   qcd__51->SetBinContent(10,22111.04);
   qcd__51->SetBinContent(14,19936.48);
   qcd__51->SetBinContent(15,19740.94);
   qcd__51->SetBinContent(16,18704.62);
   qcd__51->SetBinContent(17,18416.04);
   qcd__51->SetBinContent(18,17084.74);
   qcd__51->SetBinContent(19,16141.94);
   qcd__51->SetBinContent(20,14889.11);
   qcd__51->SetBinContent(21,13895.9);
   qcd__51->SetBinContent(22,12891.25);
   qcd__51->SetBinContent(23,11632.23);
   qcd__51->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__51->SetLineColor(ci);
   qcd__51->SetLineStyle(2);
   qcd__51->SetLineWidth(2);
   qcd__51->GetXaxis()->SetTitle("x");
   qcd__51->GetXaxis()->SetLabelFont(42);
   qcd__51->GetXaxis()->SetLabelSize(0.035);
   qcd__51->GetXaxis()->SetTitleSize(0.035);
   qcd__51->GetXaxis()->SetTitleFont(42);
   qcd__51->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__51->GetYaxis()->SetLabelFont(42);
   qcd__51->GetYaxis()->SetLabelSize(0.035);
   qcd__51->GetYaxis()->SetTitleSize(0.035);
   qcd__51->GetYaxis()->SetTitleOffset(0);
   qcd__51->GetYaxis()->SetTitleFont(42);
   qcd__51->GetZaxis()->SetLabelFont(42);
   qcd__51->GetZaxis()->SetLabelSize(0.035);
   qcd__51->GetZaxis()->SetTitleSize(0.035);
   qcd__51->GetZaxis()->SetTitleFont(42);
   qcd__51->Draw("hist sames");
   
   TH1F *htotfail_cat4_2016_fit_s__52 = new TH1F("htotfail_cat4_2016_fit_s__52","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_s__52->SetBinContent(1,5.209243e-05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(2,37433.87);
   htotfail_cat4_2016_fit_s__52->SetBinContent(3,34005.88);
   htotfail_cat4_2016_fit_s__52->SetBinContent(4,31607.21);
   htotfail_cat4_2016_fit_s__52->SetBinContent(5,29922.03);
   htotfail_cat4_2016_fit_s__52->SetBinContent(6,28309.88);
   htotfail_cat4_2016_fit_s__52->SetBinContent(7,27303.14);
   htotfail_cat4_2016_fit_s__52->SetBinContent(8,25724.17);
   htotfail_cat4_2016_fit_s__52->SetBinContent(9,23721.23);
   htotfail_cat4_2016_fit_s__52->SetBinContent(10,22629.43);
   htotfail_cat4_2016_fit_s__52->SetBinContent(11,5.209243e-05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(12,5.209243e-05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(13,5.209243e-05);
   htotfail_cat4_2016_fit_s__52->SetBinContent(14,20071.78);
   htotfail_cat4_2016_fit_s__52->SetBinContent(15,19847.3);
   htotfail_cat4_2016_fit_s__52->SetBinContent(16,18786.63);
   htotfail_cat4_2016_fit_s__52->SetBinContent(17,18481.74);
   htotfail_cat4_2016_fit_s__52->SetBinContent(18,17147.32);
   htotfail_cat4_2016_fit_s__52->SetBinContent(19,16188.1);
   htotfail_cat4_2016_fit_s__52->SetBinContent(20,14934.92);
   htotfail_cat4_2016_fit_s__52->SetBinContent(21,13932.48);
   htotfail_cat4_2016_fit_s__52->SetBinContent(22,12913.03);
   htotfail_cat4_2016_fit_s__52->SetBinContent(23,11647.43);
   htotfail_cat4_2016_fit_s__52->SetMinimum(0);
   htotfail_cat4_2016_fit_s__52->SetMaximum(56150.8);
   htotfail_cat4_2016_fit_s__52->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__52->SetFillColor(ci);
   htotfail_cat4_2016_fit_s__52->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s__52->SetLineColor(ci);
   htotfail_cat4_2016_fit_s__52->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_s__52->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_s__52->SetMarkerSize(0);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_s__52->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_s__52->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s__52->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s__52->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis13[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_13 = new TH1F("hstackMC_stack_13","hstackMC",23, xAxis13);
   hstackMC_stack_13->SetMinimum(0);
   hstackMC_stack_13->SetMaximum(2102.197);
   hstackMC_stack_13->SetDirectory(0);
   hstackMC_stack_13->SetStats(0);
   hstackMC_stack_13->SetLineStyle(0);
   hstackMC_stack_13->SetMarkerStyle(20);
   hstackMC_stack_13->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_13->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_13->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_13->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_13->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_13->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_13->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_13->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_13->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_13->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_13->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_13->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_13->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_13->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_13->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_13->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_13->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_13);
   
   Double_t xAxis14[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat4_2016_fail_cat4",23, xAxis14);
   tqq_stack_1->SetBinContent(2,37.24079);
   tqq_stack_1->SetBinContent(3,40.57045);
   tqq_stack_1->SetBinContent(4,49.49541);
   tqq_stack_1->SetBinContent(5,77.85094);
   tqq_stack_1->SetBinContent(6,146.2558);
   tqq_stack_1->SetBinContent(7,172.7549);
   tqq_stack_1->SetBinContent(8,127.7103);
   tqq_stack_1->SetBinContent(9,87.85957);
   tqq_stack_1->SetBinContent(10,82.45248);
   tqq_stack_1->SetBinContent(14,113.697);
   tqq_stack_1->SetBinContent(15,92.96205);
   tqq_stack_1->SetBinContent(16,79.28985);
   tqq_stack_1->SetBinContent(17,64.25206);
   tqq_stack_1->SetBinContent(18,59.31706);
   tqq_stack_1->SetBinContent(19,46.15992);
   tqq_stack_1->SetBinContent(20,45.80713);
   tqq_stack_1->SetBinContent(21,36.57748);
   tqq_stack_1->SetBinContent(22,21.77309);
   tqq_stack_1->SetBinContent(23,15.19741);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat4_2016_fail_cat4",23,40,201);
   wqq_stack_2->SetBinContent(1,3.755801e-05);
   wqq_stack_2->SetBinContent(2,39.52445);
   wqq_stack_2->SetBinContent(3,88.32714);
   wqq_stack_2->SetBinContent(4,313.3038);
   wqq_stack_2->SetBinContent(5,672.9722);
   wqq_stack_2->SetBinContent(6,1355.674);
   wqq_stack_2->SetBinContent(7,1530.965);
   wqq_stack_2->SetBinContent(8,795.5449);
   wqq_stack_2->SetBinContent(9,421.6937);
   wqq_stack_2->SetBinContent(10,134.2901);
   wqq_stack_2->SetBinContent(11,3.755801e-05);
   wqq_stack_2->SetBinContent(12,3.755801e-05);
   wqq_stack_2->SetBinContent(13,3.755801e-05);
   wqq_stack_2->SetBinContent(14,7.566043);
   wqq_stack_2->SetBinContent(15,3.099612);
   wqq_stack_2->SetBinContent(16,0.6542881);
   wqq_stack_2->SetBinContent(17,3.755801e-05);
   wqq_stack_2->SetBinContent(18,1.81397);
   wqq_stack_2->SetBinContent(19,3.755801e-05);
   wqq_stack_2->SetBinContent(20,3.755801e-05);
   wqq_stack_2->SetBinContent(21,3.755801e-05);
   wqq_stack_2->SetBinContent(22,3.755801e-05);
   wqq_stack_2->SetBinContent(23,3.755801e-05);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat4_2016_fail_cat4",23,40,201);
   zqq_stack_3->SetBinContent(1,1.453442e-05);
   zqq_stack_3->SetBinContent(2,8.502841);
   zqq_stack_3->SetBinContent(3,12.48499);
   zqq_stack_3->SetBinContent(4,27.64359);
   zqq_stack_3->SetBinContent(5,83.41034);
   zqq_stack_3->SetBinContent(6,157.6997);
   zqq_stack_3->SetBinContent(7,294.4137);
   zqq_stack_3->SetBinContent(8,597.5458);
   zqq_stack_3->SetBinContent(9,563.6819);
   zqq_stack_3->SetBinContent(10,301.6548);
   zqq_stack_3->SetBinContent(11,1.453442e-05);
   zqq_stack_3->SetBinContent(12,1.453442e-05);
   zqq_stack_3->SetBinContent(13,1.453442e-05);
   zqq_stack_3->SetBinContent(14,14.04037);
   zqq_stack_3->SetBinContent(15,10.29848);
   zqq_stack_3->SetBinContent(16,2.062981);
   zqq_stack_3->SetBinContent(17,1.45314);
   zqq_stack_3->SetBinContent(18,1.45314);
   zqq_stack_3->SetBinContent(19,1.453442e-05);
   zqq_stack_3->SetBinContent(20,1.453442e-05);
   zqq_stack_3->SetBinContent(21,1.453442e-05);
   zqq_stack_3->SetBinContent(22,1.453442e-05);
   zqq_stack_3->SetBinContent(23,1.453442e-05);
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
   
   TH1F *hsigfail_cat4_2016_fit_s_stack_4 = new TH1F("hsigfail_cat4_2016_fit_s_stack_4","hqq125 in cat4_2016_fail_cat4",23,40,201);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(1,4.021248e-07);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(2,0.6020641);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(3,2.245326);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(4,1.287723);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(5,2.265157);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(6,1.767859);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(7,3.95893);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(8,3.291632);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(9,6.697303);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(10,10.86141);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(11,4.021248e-07);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(12,4.021248e-07);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(13,4.021248e-07);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(14,9.806895);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(15,6.79697);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(16,3.214438);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(17,2.245136);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(18,1.230974);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(19,0.3324613);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(20,0.2075539);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(21,0.2278572);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(22,0.2967091);
   hsigfail_cat4_2016_fit_s_stack_4->SetBinContent(23,0.1100058);
   hsigfail_cat4_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat4_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_cat4_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_cat4_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3013[23] = {
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
   Double_t data_copy_fy3013[23] = {
   0,
   37423,
   34018,
   31620,
   29935,
   28338,
   27316,
   25737,
   23697,
   22621,
   0,
   0,
   0,
   20065,
   19858,
   18782,
   18440,
   17138,
   16188,
   14948,
   13925,
   12913,
   11642};
   Double_t data_copy_felx3013[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3013[23] = {
   1.841055,
   194.4562,
   185.4455,
   178.8259,
   174.023,
   169.3446,
   166.2811,
   161.4331,
   154.9438,
   151.4083,
   1.841055,
   1.841055,
   1.841055,
   142.6564,
   141.9239,
   138.0529,
   136.7994,
   131.9176,
   128.2375,
   123.2674,
   119.0096,
   114.6408,
   108.9035};
   Double_t data_copy_fehx3013[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3013[23] = {
   0,
   193.4536,
   184.4428,
   177.823,
   173.0201,
   168.3416,
   165.2781,
   160.43,
   153.9405,
   150.4049,
   0,
   0,
   0,
   141.6529,
   140.9203,
   137.0492,
   135.7957,
   130.9137,
   127.2335,
   122.2633,
   118.0054,
   113.6364,
   107.8989};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3013,data_copy_fy3013,data_copy_felx3013,data_copy_fehx3013,data_copy_fely3013,data_copy_fehy3013);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat4_2016_fail_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3013 = new TH1F("Graph_data_copy3013","tqq in cat4_2016_fail_cat4",100,28.1,212.9);
   Graph_data_copy3013->SetMinimum(0);
   Graph_data_copy3013->SetMaximum(41378.28);
   Graph_data_copy3013->SetDirectory(0);
   Graph_data_copy3013->SetStats(0);
   Graph_data_copy3013->SetLineStyle(0);
   Graph_data_copy3013->SetMarkerStyle(20);
   Graph_data_copy3013->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3013->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3013->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3013->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3013->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3013->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3013->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3013->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3013->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3013->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3013->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3013);
   
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
   entry=leg->AddEntry("htotfail_cat4_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_cat4_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_cat4_2016_fit_s_copy__53 = new TH1F("htotfail_cat4_2016_fit_s_copy__53","wqq in cat4_2016_fail_cat4",23,40,201);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(1,5.209243e-05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(2,37433.87);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(3,34005.88);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(4,31607.21);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(5,29922.03);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(6,28309.88);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(7,27303.14);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(8,25724.17);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(9,23721.23);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(10,22629.43);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(11,5.209243e-05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(12,5.209243e-05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(13,5.209243e-05);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(14,20071.78);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(15,19847.3);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(16,18786.63);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(17,18481.74);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(18,17147.32);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(19,16188.1);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(20,14934.92);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(21,13932.48);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(22,12913.03);
   htotfail_cat4_2016_fit_s_copy__53->SetBinContent(23,11647.43);
   htotfail_cat4_2016_fit_s_copy__53->SetMaximum(56150.8);
   htotfail_cat4_2016_fit_s_copy__53->SetEntries(92);
   htotfail_cat4_2016_fit_s_copy__53->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s_copy__53->SetFillColor(ci);
   htotfail_cat4_2016_fit_s_copy__53->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_cat4_2016_fit_s_copy__53->SetLineColor(ci);
   htotfail_cat4_2016_fit_s_copy__53->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_cat4_2016_fit_s_copy__53->SetMarkerColor(ci);
   htotfail_cat4_2016_fit_s_copy__53->SetMarkerSize(0);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetRange(2,23);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetLabelOffset(100);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitleOffset(100);
   htotfail_cat4_2016_fit_s_copy__53->GetXaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetLabelSize(0.05);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitleSize(0.06);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitleOffset(1.25);
   htotfail_cat4_2016_fit_s_copy__53->GetYaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetLabelFont(42);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetLabelSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetTitleSize(0.035);
   htotfail_cat4_2016_fit_s_copy__53->GetZaxis()->SetTitleFont(42);
   htotfail_cat4_2016_fit_s_copy__53->Draw("sameaxis");
   p12fail_cat4_2016_fit_s->Modified();
   cfail_cat4_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_cat4_2016_fit_s
   TPad *p22fail_cat4_2016_fit_s = new TPad("p22fail_cat4_2016_fit_s", "p22fail_cat4_2016_fit_s",0,0,1,0.3);
   p22fail_cat4_2016_fit_s->Draw();
   p22fail_cat4_2016_fit_s->cd();
   p22fail_cat4_2016_fit_s->Range(13.7027,-14.96113,221.8108,18.24264);
   p22fail_cat4_2016_fit_s->SetFillColor(0);
   p22fail_cat4_2016_fit_s->SetBorderMode(0);
   p22fail_cat4_2016_fit_s->SetBorderSize(2);
   p22fail_cat4_2016_fit_s->SetTickx(1);
   p22fail_cat4_2016_fit_s->SetTicky(1);
   p22fail_cat4_2016_fit_s->SetLeftMargin(0.16);
   p22fail_cat4_2016_fit_s->SetTopMargin(0.05);
   p22fail_cat4_2016_fit_s->SetBottomMargin(0.3);
   p22fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   p22fail_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22fail_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_cat4_2016_fit_s__54 = new TH1F("iOneWithErrorsfail_cat4_2016_fit_s__54","",23,40,201);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMinimum(-5);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMaximum(16.58245);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetFillColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetLineColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMarkerColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s__54->SetMarkerSize(0);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s__54->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s__54->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_14 = new TH1F("hstack_stack_14","hstack",23,40,201);
   hstack_stack_14->SetMinimum(0);
   hstack_stack_14->SetMaximum(11.62165);
   hstack_stack_14->SetDirectory(0);
   hstack_stack_14->SetStats(0);
   hstack_stack_14->SetLineStyle(0);
   hstack_stack_14->SetMarkerStyle(20);
   hstack_stack_14->GetXaxis()->SetLabelFont(42);
   hstack_stack_14->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_14->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_14->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_14->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_14->GetXaxis()->SetTitleFont(42);
   hstack_stack_14->GetYaxis()->SetLabelFont(42);
   hstack_stack_14->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_14->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_14->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_14->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_14->GetYaxis()->SetTitleFont(42);
   hstack_stack_14->GetZaxis()->SetLabelFont(42);
   hstack_stack_14->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_14->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_14->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_14->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_14);
   
   
   TH1F *sigHistResidualwqqfail_cat4_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqfail_cat4_2016_fit_s_stack_1","wqq in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(2,0.2043097);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(3,0.4788864);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(4,1.761885);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(5,3.88956);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(6,8.053112);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(7,9.262964);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(8,4.958829);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(9,2.739328);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(10,0.8928573);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(14,0.05341257);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(15,0.0219955);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(16,0.004774112);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(17,2.765773e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(18,0.01385623);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(19,2.951896e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(20,3.071896e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(21,3.182737e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(22,3.305104e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetBinContent(23,3.480852e-07);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqfail_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqfail_cat4_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqfail_cat4_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqfail_cat4_2016_fit_s_stack_2","zqq in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(2,0.04395287);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(3,0.06769034);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(4,0.1554556);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(5,0.4820846);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(6,0.9367841);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(7,1.781323);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(8,3.724652);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(9,3.661686);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(10,2.005617);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(14,0.09911818);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(15,0.07308016);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(16,0.01505285);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(17,0.01070093);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(18,0.01109998);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(19,1.142342e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(20,1.188781e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(21,1.231675e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(22,1.279029e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetBinContent(23,1.347041e-07);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqfail_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqfail_cat4_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3","hqq125 in cat4_2016_fail_cat4",23,40,201);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(2,0.003112189);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(3,0.01217356);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(4,0.007241599);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(5,0.01309187);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(6,0.01050162);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(7,0.02395314);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(8,0.02051756);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(9,0.04350578);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(10,0.07221444);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(14,0.06923189);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(15,0.04823273);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(16,0.02345463);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(17,0.01653319);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(18,0.009402943);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(19,0.002613001);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(20,0.001697598);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(21,0.001930905);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(22,0.00261104);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetBinContent(23,0.001019527);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_cat4_2016_fit_sfail_cat4_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_cat4_2016_fit_s__55 = new TH1F("iOneWithErrorsLinefail_cat4_2016_fit_s__55","",23,40,201);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetFillColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetLineColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetMarkerColor(ci);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->SetMarkerSize(0);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_cat4_2016_fit_s__55->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fx3014[23] = {
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fy3014[23] = {
   0,
   0.1910978,
   0.6090063,
   1.978127,
   4.420975,
   9.10273,
   11.05497,
   8.708993,
   6.203156,
   2.823556,
   0,
   0,
   0,
   0.1039292,
   0.1698066,
   -0.01395199,
   -0.2966889,
   -0.04624944,
   -0.0007905617,
   0.1061589,
   -0.06338264,
   -0.0002320312,
   -0.050322};
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_felx3014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fely3014[23] = {
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fehx3014[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_cat4_2016_fit_s_fehy3014[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_cat4_2016_fit_s_fx3014,Graph_from_iRatiofail_cat4_2016_fit_s_fy3014,Graph_from_iRatiofail_cat4_2016_fit_s_felx3014,Graph_from_iRatiofail_cat4_2016_fit_s_fehx3014,Graph_from_iRatiofail_cat4_2016_fit_s_fely3014,Graph_from_iRatiofail_cat4_2016_fit_s_fehy3014);
   grae->SetName("Graph_from_iRatiofail_cat4_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014 = new TH1F("Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetMinimum(-2.631854);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetMaximum(13.39013);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetDirectory(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetStats(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_cat4_2016_fit_s3014);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_cat4_2016_fit_s_copy__56 = new TH1F("iOneWithErrorsfail_cat4_2016_fit_s_copy__56","",23,40,201);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMinimum(-5);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMaximum(16.58245);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetEntries(184);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetFillColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetLineColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMarkerColor(ci);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->SetMarkerSize(0);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_cat4_2016_fit_s_copy__56->Draw("sameaxis");
   p22fail_cat4_2016_fit_s->Modified();
   cfail_cat4_2016_fit_s->cd();
   cfail_cat4_2016_fit_s->Modified();
   cfail_cat4_2016_fit_s->cd();
   cfail_cat4_2016_fit_s->SetSelected(cfail_cat4_2016_fit_s);
}
