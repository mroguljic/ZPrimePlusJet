void mlfit_fail_allcats_2016_fit_s()
{
//=========Macro generated from canvas: cfail_allcats_2016_fit_s/cfail_allcats_2016_fit_s
//=========  (Wed Sep  4 11:54:24 2019) by ROOT version 6.12/07
   TCanvas *cfail_allcats_2016_fit_s = new TCanvas("cfail_allcats_2016_fit_s", "cfail_allcats_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cfail_allcats_2016_fit_s->SetHighLightColor(2);
   cfail_allcats_2016_fit_s->Range(0,0,1,1);
   cfail_allcats_2016_fit_s->SetFillColor(0);
   cfail_allcats_2016_fit_s->SetBorderMode(0);
   cfail_allcats_2016_fit_s->SetBorderSize(2);
   cfail_allcats_2016_fit_s->SetTickx(1);
   cfail_allcats_2016_fit_s->SetTicky(1);
   cfail_allcats_2016_fit_s->SetLeftMargin(0.16);
   cfail_allcats_2016_fit_s->SetBottomMargin(0.13);
   cfail_allcats_2016_fit_s->SetFrameFillStyle(0);
   cfail_allcats_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12fail_allcats_2016_fit_s
   TPad *p12fail_allcats_2016_fit_s = new TPad("p12fail_allcats_2016_fit_s", "p12fail_allcats_2016_fit_s",0,0.3,1,1);
   p12fail_allcats_2016_fit_s->Draw();
   p12fail_allcats_2016_fit_s->cd();
   p12fail_allcats_2016_fit_s->Range(13.7027,-13536.42,221.8108,663284.4);
   p12fail_allcats_2016_fit_s->SetFillColor(0);
   p12fail_allcats_2016_fit_s->SetBorderMode(0);
   p12fail_allcats_2016_fit_s->SetBorderSize(2);
   p12fail_allcats_2016_fit_s->SetTickx(1);
   p12fail_allcats_2016_fit_s->SetTicky(1);
   p12fail_allcats_2016_fit_s->SetLeftMargin(0.16);
   p12fail_allcats_2016_fit_s->SetBottomMargin(0.02);
   p12fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   p12fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p12fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotfail_allcats_2016_fit_s__105 = new TH1F("htotfail_allcats_2016_fit_s__105","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_s__105->SetBinContent(1,0.0005088159);
   htotfail_allcats_2016_fit_s__105->SetBinContent(2,397068.2);
   htotfail_allcats_2016_fit_s__105->SetBinContent(3,365001.5);
   htotfail_allcats_2016_fit_s__105->SetBinContent(4,338279.2);
   htotfail_allcats_2016_fit_s__105->SetBinContent(5,320384.4);
   htotfail_allcats_2016_fit_s__105->SetBinContent(6,310973.1);
   htotfail_allcats_2016_fit_s__105->SetBinContent(7,302280.2);
   htotfail_allcats_2016_fit_s__105->SetBinContent(8,287622.3);
   htotfail_allcats_2016_fit_s__105->SetBinContent(9,270101.8);
   htotfail_allcats_2016_fit_s__105->SetBinContent(10,256296.7);
   htotfail_allcats_2016_fit_s__105->SetBinContent(11,0.0005088159);
   htotfail_allcats_2016_fit_s__105->SetBinContent(12,0.0005088159);
   htotfail_allcats_2016_fit_s__105->SetBinContent(13,0.0005088159);
   htotfail_allcats_2016_fit_s__105->SetBinContent(14,207959);
   htotfail_allcats_2016_fit_s__105->SetBinContent(15,193140.5);
   htotfail_allcats_2016_fit_s__105->SetBinContent(16,177825.7);
   htotfail_allcats_2016_fit_s__105->SetBinContent(17,161906.7);
   htotfail_allcats_2016_fit_s__105->SetBinContent(18,145127.5);
   htotfail_allcats_2016_fit_s__105->SetBinContent(19,81947.3);
   htotfail_allcats_2016_fit_s__105->SetBinContent(20,74845.68);
   htotfail_allcats_2016_fit_s__105->SetBinContent(21,43634.35);
   htotfail_allcats_2016_fit_s__105->SetBinContent(22,40206.26);
   htotfail_allcats_2016_fit_s__105->SetBinContent(23,36657.65);
   htotfail_allcats_2016_fit_s__105->SetMinimum(0);
   htotfail_allcats_2016_fit_s__105->SetMaximum(595602.3);
   htotfail_allcats_2016_fit_s__105->SetEntries(552);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__105->SetFillColor(ci);
   htotfail_allcats_2016_fit_s__105->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__105->SetLineColor(ci);
   htotfail_allcats_2016_fit_s__105->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_s__105->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_s__105->SetMarkerSize(0);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_s__105->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_s__105->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__105->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__105->Draw("");
   
   TH1F *htot_linefail_allcats_2016_fit_s__106 = new TH1F("htot_linefail_allcats_2016_fit_s__106","wqq in cat1_2016_fail_cat1",23,40,201);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(1,0.0005088159);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(2,397068.2);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(3,365001.5);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(4,338279.2);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(5,320384.4);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(6,310973.1);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(7,302280.2);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(8,287622.3);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(9,270101.8);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(10,256296.7);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(11,0.0005088159);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(12,0.0005088159);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(13,0.0005088159);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(14,207959);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(15,193140.5);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(16,177825.7);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(17,161906.7);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(18,145127.5);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(19,81947.3);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(20,74845.68);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(21,43634.35);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(22,40206.26);
   htot_linefail_allcats_2016_fit_s__106->SetBinContent(23,36657.65);
   htot_linefail_allcats_2016_fit_s__106->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_allcats_2016_fit_s__106->SetFillColor(ci);
   htot_linefail_allcats_2016_fit_s__106->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linefail_allcats_2016_fit_s__106->SetLineColor(ci);
   htot_linefail_allcats_2016_fit_s__106->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linefail_allcats_2016_fit_s__106->SetMarkerColor(ci);
   htot_linefail_allcats_2016_fit_s__106->SetMarkerSize(0);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetRange(2,23);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetLabelSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetTitleSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetXaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetLabelSize(0.05);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitleSize(0.06);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitleOffset(1.25);
   htot_linefail_allcats_2016_fit_s__106->GetYaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetLabelFont(42);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetLabelSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetTitleSize(0.035);
   htot_linefail_allcats_2016_fit_s__106->GetZaxis()->SetTitleFont(42);
   htot_linefail_allcats_2016_fit_s__106->Draw("histsame");
   
   TH1F *qcd_fail_sum__107 = new TH1F("qcd_fail_sum__107","qcd in cat1_2016_fail_cat1",23,40,201);
   qcd_fail_sum__107->SetBinContent(2,396463.2);
   qcd_fail_sum__107->SetBinContent(3,363574.8);
   qcd_fail_sum__107->SetBinContent(4,334543.2);
   qcd_fail_sum__107->SetBinContent(5,312581);
   qcd_fail_sum__107->SetBinContent(6,293695.6);
   qcd_fail_sum__107->SetBinContent(7,281296.1);
   qcd_fail_sum__107->SetBinContent(8,272548.3);
   qcd_fail_sum__107->SetBinContent(9,260230.6);
   qcd_fail_sum__107->SetBinContent(10,251942.8);
   qcd_fail_sum__107->SetBinContent(14,206850.9);
   qcd_fail_sum__107->SetBinContent(15,192187.2);
   qcd_fail_sum__107->SetBinContent(16,177086.5);
   qcd_fail_sum__107->SetBinContent(17,161327.5);
   qcd_fail_sum__107->SetBinContent(18,144651.4);
   qcd_fail_sum__107->SetBinContent(19,81695.91);
   qcd_fail_sum__107->SetBinContent(20,74622.48);
   qcd_fail_sum__107->SetBinContent(21,43526.42);
   qcd_fail_sum__107->SetBinContent(22,40129.98);
   qcd_fail_sum__107->SetBinContent(23,36607.75);
   qcd_fail_sum__107->SetEntries(138);

   ci = TColor::GetColor("#666666");
   qcd_fail_sum__107->SetLineColor(ci);
   qcd_fail_sum__107->SetLineStyle(2);
   qcd_fail_sum__107->SetLineWidth(2);
   qcd_fail_sum__107->GetXaxis()->SetTitle("x");
   qcd_fail_sum__107->GetXaxis()->SetLabelFont(42);
   qcd_fail_sum__107->GetXaxis()->SetLabelSize(0.035);
   qcd_fail_sum__107->GetXaxis()->SetTitleSize(0.035);
   qcd_fail_sum__107->GetXaxis()->SetTitleFont(42);
   qcd_fail_sum__107->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd_fail_sum__107->GetYaxis()->SetLabelFont(42);
   qcd_fail_sum__107->GetYaxis()->SetLabelSize(0.035);
   qcd_fail_sum__107->GetYaxis()->SetTitleSize(0.035);
   qcd_fail_sum__107->GetYaxis()->SetTitleOffset(0);
   qcd_fail_sum__107->GetYaxis()->SetTitleFont(42);
   qcd_fail_sum__107->GetZaxis()->SetLabelFont(42);
   qcd_fail_sum__107->GetZaxis()->SetLabelSize(0.035);
   qcd_fail_sum__107->GetZaxis()->SetTitleSize(0.035);
   qcd_fail_sum__107->GetZaxis()->SetTitleFont(42);
   qcd_fail_sum__107->Draw("hist sames");
   
   TH1F *htotfail_allcats_2016_fit_s__108 = new TH1F("htotfail_allcats_2016_fit_s__108","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_s__108->SetBinContent(1,0.0005088159);
   htotfail_allcats_2016_fit_s__108->SetBinContent(2,397068.2);
   htotfail_allcats_2016_fit_s__108->SetBinContent(3,365001.5);
   htotfail_allcats_2016_fit_s__108->SetBinContent(4,338279.2);
   htotfail_allcats_2016_fit_s__108->SetBinContent(5,320384.4);
   htotfail_allcats_2016_fit_s__108->SetBinContent(6,310973.1);
   htotfail_allcats_2016_fit_s__108->SetBinContent(7,302280.2);
   htotfail_allcats_2016_fit_s__108->SetBinContent(8,287622.3);
   htotfail_allcats_2016_fit_s__108->SetBinContent(9,270101.8);
   htotfail_allcats_2016_fit_s__108->SetBinContent(10,256296.7);
   htotfail_allcats_2016_fit_s__108->SetBinContent(11,0.0005088159);
   htotfail_allcats_2016_fit_s__108->SetBinContent(12,0.0005088159);
   htotfail_allcats_2016_fit_s__108->SetBinContent(13,0.0005088159);
   htotfail_allcats_2016_fit_s__108->SetBinContent(14,207959);
   htotfail_allcats_2016_fit_s__108->SetBinContent(15,193140.5);
   htotfail_allcats_2016_fit_s__108->SetBinContent(16,177825.7);
   htotfail_allcats_2016_fit_s__108->SetBinContent(17,161906.7);
   htotfail_allcats_2016_fit_s__108->SetBinContent(18,145127.5);
   htotfail_allcats_2016_fit_s__108->SetBinContent(19,81947.3);
   htotfail_allcats_2016_fit_s__108->SetBinContent(20,74845.68);
   htotfail_allcats_2016_fit_s__108->SetBinContent(21,43634.35);
   htotfail_allcats_2016_fit_s__108->SetBinContent(22,40206.26);
   htotfail_allcats_2016_fit_s__108->SetBinContent(23,36657.65);
   htotfail_allcats_2016_fit_s__108->SetMinimum(0);
   htotfail_allcats_2016_fit_s__108->SetMaximum(595602.3);
   htotfail_allcats_2016_fit_s__108->SetEntries(552);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__108->SetFillColor(ci);
   htotfail_allcats_2016_fit_s__108->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s__108->SetLineColor(ci);
   htotfail_allcats_2016_fit_s__108->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_s__108->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_s__108->SetMarkerSize(0);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_s__108->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_s__108->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s__108->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s__108->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis27[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_27 = new TH1F("hstackMC_stack_27","hstackMC",23, xAxis27);
   hstackMC_stack_27->SetMinimum(0);
   hstackMC_stack_27->SetMaximum(22066.74);
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
   
   TH1F *tqq_fail_sum_stack_1 = new TH1F("tqq_fail_sum_stack_1","tqq in cat1_2016_fail_cat1",23, xAxis28);
   tqq_fail_sum_stack_1->SetBinContent(2,322.7193);
   tqq_fail_sum_stack_1->SetBinContent(3,373.9995);
   tqq_fail_sum_stack_1->SetBinContent(4,486.2592);
   tqq_fail_sum_stack_1->SetBinContent(5,803.4241);
   tqq_fail_sum_stack_1->SetBinContent(6,1554.106);
   tqq_fail_sum_stack_1->SetBinContent(7,1934.995);
   tqq_fail_sum_stack_1->SetBinContent(8,1411.916);
   tqq_fail_sum_stack_1->SetBinContent(9,962.671);
   tqq_fail_sum_stack_1->SetBinContent(10,878.318);
   tqq_fail_sum_stack_1->SetBinContent(14,978.4588);
   tqq_fail_sum_stack_1->SetBinContent(15,878.4753);
   tqq_fail_sum_stack_1->SetBinContent(16,711.4093);
   tqq_fail_sum_stack_1->SetBinContent(17,555.5147);
   tqq_fail_sum_stack_1->SetBinContent(18,449.0003);
   tqq_fail_sum_stack_1->SetBinContent(19,251.4008);
   tqq_fail_sum_stack_1->SetBinContent(20,221.6256);
   tqq_fail_sum_stack_1->SetBinContent(21,107.9234);
   tqq_fail_sum_stack_1->SetBinContent(22,76.27557);
   tqq_fail_sum_stack_1->SetBinContent(23,49.90528);
   tqq_fail_sum_stack_1->SetEntries(138);

   ci = TColor::GetColor("#660066");
   tqq_fail_sum_stack_1->SetLineColor(ci);
   tqq_fail_sum_stack_1->SetLineStyle(4);
   tqq_fail_sum_stack_1->SetLineWidth(2);
   tqq_fail_sum_stack_1->GetXaxis()->SetTitle("x");
   tqq_fail_sum_stack_1->GetXaxis()->SetLabelFont(42);
   tqq_fail_sum_stack_1->GetXaxis()->SetLabelSize(0.035);
   tqq_fail_sum_stack_1->GetXaxis()->SetTitleSize(0.035);
   tqq_fail_sum_stack_1->GetXaxis()->SetTitleFont(42);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   tqq_fail_sum_stack_1->GetYaxis()->SetLabelFont(42);
   tqq_fail_sum_stack_1->GetYaxis()->SetLabelSize(0.035);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitleSize(0.035);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitleOffset(0);
   tqq_fail_sum_stack_1->GetYaxis()->SetTitleFont(42);
   tqq_fail_sum_stack_1->GetZaxis()->SetLabelFont(42);
   tqq_fail_sum_stack_1->GetZaxis()->SetLabelSize(0.035);
   tqq_fail_sum_stack_1->GetZaxis()->SetTitleSize(0.035);
   tqq_fail_sum_stack_1->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(tqq_fail_sum_stack_1,"");
   
   TH1F *wqq_fail_sum_stack_2 = new TH1F("wqq_fail_sum_stack_2","wqq in cat1_2016_fail_cat1",23,40,201);
   wqq_fail_sum_stack_2->SetBinContent(1,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(2,209.2638);
   wqq_fail_sum_stack_2->SetBinContent(3,920.5146);
   wqq_fail_sum_stack_2->SetBinContent(4,2913.071);
   wqq_fail_sum_stack_2->SetBinContent(5,6188.62);
   wqq_fail_sum_stack_2->SetBinContent(6,13598.98);
   wqq_fail_sum_stack_2->SetBinContent(7,15243.18);
   wqq_fail_sum_stack_2->SetBinContent(8,7649.095);
   wqq_fail_sum_stack_2->SetBinContent(9,4017.567);
   wqq_fail_sum_stack_2->SetBinContent(10,1228.509);
   wqq_fail_sum_stack_2->SetBinContent(11,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(12,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(13,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(14,29.24813);
   wqq_fail_sum_stack_2->SetBinContent(15,10.91184);
   wqq_fail_sum_stack_2->SetBinContent(16,0.6546147);
   wqq_fail_sum_stack_2->SetBinContent(17,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(18,5.692553);
   wqq_fail_sum_stack_2->SetBinContent(19,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(20,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(21,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(22,0.0003641071);
   wqq_fail_sum_stack_2->SetBinContent(23,0.0003641071);
   wqq_fail_sum_stack_2->SetEntries(138);

   ci = TColor::GetColor("#009900");
   wqq_fail_sum_stack_2->SetLineColor(ci);
   wqq_fail_sum_stack_2->SetLineStyle(2);
   wqq_fail_sum_stack_2->SetLineWidth(2);
   wqq_fail_sum_stack_2->GetXaxis()->SetTitle("x");
   wqq_fail_sum_stack_2->GetXaxis()->SetLabelFont(42);
   wqq_fail_sum_stack_2->GetXaxis()->SetLabelSize(0.035);
   wqq_fail_sum_stack_2->GetXaxis()->SetTitleSize(0.035);
   wqq_fail_sum_stack_2->GetXaxis()->SetTitleFont(42);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   wqq_fail_sum_stack_2->GetYaxis()->SetLabelFont(42);
   wqq_fail_sum_stack_2->GetYaxis()->SetLabelSize(0.035);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitleSize(0.035);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitleOffset(0);
   wqq_fail_sum_stack_2->GetYaxis()->SetTitleFont(42);
   wqq_fail_sum_stack_2->GetZaxis()->SetLabelFont(42);
   wqq_fail_sum_stack_2->GetZaxis()->SetLabelSize(0.035);
   wqq_fail_sum_stack_2->GetZaxis()->SetTitleSize(0.035);
   wqq_fail_sum_stack_2->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(wqq_fail_sum_stack_2,"");
   
   TH1F *zqq_fail_sum_stack_3 = new TH1F("zqq_fail_sum_stack_3","zqq in cat1_2016_fail_cat1",23,40,201);
   zqq_fail_sum_stack_3->SetBinContent(1,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(2,73.01652);
   zqq_fail_sum_stack_3->SetBinContent(3,132.1246);
   zqq_fail_sum_stack_3->SetBinContent(4,336.5962);
   zqq_fail_sum_stack_3->SetBinContent(5,811.3488);
   zqq_fail_sum_stack_3->SetBinContent(6,2124.421);
   zqq_fail_sum_stack_3->SetBinContent(7,3805.984);
   zqq_fail_sum_stack_3->SetBinContent(8,6012.981);
   zqq_fail_sum_stack_3->SetBinContent(9,4891.003);
   zqq_fail_sum_stack_3->SetBinContent(10,2247.086);
   zqq_fail_sum_stack_3->SetBinContent(11,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(12,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(13,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(14,100.4499);
   zqq_fail_sum_stack_3->SetBinContent(15,63.93159);
   zqq_fail_sum_stack_3->SetBinContent(16,27.14178);
   zqq_fail_sum_stack_3->SetBinContent(17,23.6247);
   zqq_fail_sum_stack_3->SetBinContent(18,21.38622);
   zqq_fail_sum_stack_3->SetBinContent(19,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(20,1.579564);
   zqq_fail_sum_stack_3->SetBinContent(21,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(22,0.0001447087);
   zqq_fail_sum_stack_3->SetBinContent(23,0.0001447087);
   zqq_fail_sum_stack_3->SetEntries(138);

   ci = TColor::GetColor("#cc0000");
   zqq_fail_sum_stack_3->SetLineColor(ci);
   zqq_fail_sum_stack_3->SetLineStyle(3);
   zqq_fail_sum_stack_3->SetLineWidth(2);
   zqq_fail_sum_stack_3->GetXaxis()->SetTitle("x");
   zqq_fail_sum_stack_3->GetXaxis()->SetLabelFont(42);
   zqq_fail_sum_stack_3->GetXaxis()->SetLabelSize(0.035);
   zqq_fail_sum_stack_3->GetXaxis()->SetTitleSize(0.035);
   zqq_fail_sum_stack_3->GetXaxis()->SetTitleFont(42);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   zqq_fail_sum_stack_3->GetYaxis()->SetLabelFont(42);
   zqq_fail_sum_stack_3->GetYaxis()->SetLabelSize(0.035);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitleSize(0.035);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitleOffset(0);
   zqq_fail_sum_stack_3->GetYaxis()->SetTitleFont(42);
   zqq_fail_sum_stack_3->GetZaxis()->SetLabelFont(42);
   zqq_fail_sum_stack_3->GetZaxis()->SetLabelSize(0.035);
   zqq_fail_sum_stack_3->GetZaxis()->SetTitleSize(0.035);
   zqq_fail_sum_stack_3->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(zqq_fail_sum_stack_3,"");
   
   TH1F *hsigfail_allcats_2016_fit_s_stack_4 = new TH1F("hsigfail_allcats_2016_fit_s_stack_4","hqq125 in cat1_2016_fail_cat1",23,40,201);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(1,3.12766e-06);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(2,12.23641);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(3,12.97433);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(4,10.19693);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(5,18.19031);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(6,22.1752);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(7,31.78196);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(8,37.82179);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(9,50.2994);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(10,80.70004);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(11,3.12766e-06);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(12,3.12766e-06);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(13,3.12766e-06);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(14,77.17924);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(15,43.45249);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(16,19.46118);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(17,12.21936);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(18,6.601122);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(19,5.611517);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(20,2.942541);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(21,1.579777);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(22,1.041339);
   hsigfail_allcats_2016_fit_s_stack_4->SetBinContent(23,0.3436115);
   hsigfail_allcats_2016_fit_s_stack_4->SetEntries(690);

   ci = TColor::GetColor("#ff0099");
   hsigfail_allcats_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigfail_allcats_2016_fit_s_stack_4->SetLineColor(ci);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigfail_allcats_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigfail_allcats_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigfail_allcats_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_fail_sum_copy_fx3027[23] = {
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
   Double_t data_fail_sum_copy_fy3027[23] = {
   0,
   397011,
   365009,
   338415,
   320409,
   310993,
   302310,
   287674,
   270080,
   256347,
   0,
   0,
   0,
   208068,
   193238,
   177740,
   161921,
   145144,
   81953,
   74854,
   43668,
   40235,
   36629};
   Double_t data_fail_sum_copy_felx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_fail_sum_copy_fely3027[23] = {
   1.841055,
   631.1023,
   605.1734,
   582.7477,
   567.0597,
   558.6802,
   550.8398,
   537.3648,
   520.7042,
   507.3189,
   1.841055,
   1.841055,
   1.841055,
   457.1554,
   440.5988,
   422.6022,
   403.4037,
   381.9869,
   287.2817,
   274.6018,
   209.975,
   201.5927,
   192.393};
   Double_t data_fail_sum_copy_fehx3027[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_fail_sum_copy_fehy3027[23] = {
   0,
   630.1015,
   604.1726,
   581.7468,
   566.0588,
   557.6793,
   549.8389,
   536.3638,
   519.7032,
   506.3179,
   0,
   0,
   0,
   456.1542,
   439.5976,
   421.601,
   402.4024,
   380.9855,
   286.28,
   273.5999,
   208.9726,
   200.5901,
   191.3903};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_fail_sum_copy_fx3027,data_fail_sum_copy_fy3027,data_fail_sum_copy_felx3027,data_fail_sum_copy_fehx3027,data_fail_sum_copy_fely3027,data_fail_sum_copy_fehy3027);
   grae->SetName("data_fail_sum_copy");
   grae->SetTitle("tqq in cat1_2016_fail_cat1");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_fail_sum_copy3027 = new TH1F("Graph_data_fail_sum_copy3027","tqq in cat1_2016_fail_cat1",100,28.1,212.9);
   Graph_data_fail_sum_copy3027->SetMinimum(0);
   Graph_data_fail_sum_copy3027->SetMaximum(437405.4);
   Graph_data_fail_sum_copy3027->SetDirectory(0);
   Graph_data_fail_sum_copy3027->SetStats(0);
   Graph_data_fail_sum_copy3027->SetLineStyle(0);
   Graph_data_fail_sum_copy3027->SetMarkerStyle(20);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetLabelFont(42);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetLabelSize(0.05);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetTitleSize(0.06);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_fail_sum_copy3027->GetXaxis()->SetTitleFont(42);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetLabelFont(42);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetLabelSize(0.05);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetTitleSize(0.06);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_fail_sum_copy3027->GetYaxis()->SetTitleFont(42);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetLabelFont(42);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetLabelSize(0.05);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetTitleSize(0.06);
   Graph_data_fail_sum_copy3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_fail_sum_copy3027);
   
   grae->Draw("pez");
   
   TLegend *leg = new TLegend(0.6,0.55,0.75,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.037);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("wqq_fail_sum_stack_2","W","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zqq_fail_sum_stack_3","Z","l");

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("tqq_fail_sum_stack_1","t#bar{t}","l");

   ci = TColor::GetColor("#660066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd_fail_sum","Multijet","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("htotfail_allcats_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigfail_allcats_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   entry=leg->AddEntry("data_fail_sum","Data","pe");
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
      tex = new TLatex(0.25,0.67,"Failing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotfail_allcats_2016_fit_s_copy__109 = new TH1F("htotfail_allcats_2016_fit_s_copy__109","wqq in cat1_2016_fail_cat1",23,40,201);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(1,0.0005088159);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(2,397068.2);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(3,365001.5);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(4,338279.2);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(5,320384.4);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(6,310973.1);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(7,302280.2);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(8,287622.3);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(9,270101.8);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(10,256296.7);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(11,0.0005088159);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(12,0.0005088159);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(13,0.0005088159);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(14,207959);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(15,193140.5);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(16,177825.7);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(17,161906.7);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(18,145127.5);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(19,81947.3);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(20,74845.68);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(21,43634.35);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(22,40206.26);
   htotfail_allcats_2016_fit_s_copy__109->SetBinContent(23,36657.65);
   htotfail_allcats_2016_fit_s_copy__109->SetMaximum(595602.3);
   htotfail_allcats_2016_fit_s_copy__109->SetEntries(552);
   htotfail_allcats_2016_fit_s_copy__109->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s_copy__109->SetFillColor(ci);
   htotfail_allcats_2016_fit_s_copy__109->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotfail_allcats_2016_fit_s_copy__109->SetLineColor(ci);
   htotfail_allcats_2016_fit_s_copy__109->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotfail_allcats_2016_fit_s_copy__109->SetMarkerColor(ci);
   htotfail_allcats_2016_fit_s_copy__109->SetMarkerSize(0);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetRange(2,23);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetLabelOffset(100);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitleOffset(100);
   htotfail_allcats_2016_fit_s_copy__109->GetXaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitle("Events / 7 GeV");
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetLabelSize(0.05);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitleSize(0.06);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitleOffset(1.25);
   htotfail_allcats_2016_fit_s_copy__109->GetYaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetLabelFont(42);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetLabelSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetTitleSize(0.035);
   htotfail_allcats_2016_fit_s_copy__109->GetZaxis()->SetTitleFont(42);
   htotfail_allcats_2016_fit_s_copy__109->Draw("sameaxis");
   p12fail_allcats_2016_fit_s->Modified();
   cfail_allcats_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22fail_allcats_2016_fit_s
   TPad *p22fail_allcats_2016_fit_s = new TPad("p22fail_allcats_2016_fit_s", "p22fail_allcats_2016_fit_s",0,0,1,0.3);
   p22fail_allcats_2016_fit_s->Draw();
   p22fail_allcats_2016_fit_s->cd();
   p22fail_allcats_2016_fit_s->Range(13.7027,-31.28649,221.8108,56.33513);
   p22fail_allcats_2016_fit_s->SetFillColor(0);
   p22fail_allcats_2016_fit_s->SetBorderMode(0);
   p22fail_allcats_2016_fit_s->SetBorderSize(2);
   p22fail_allcats_2016_fit_s->SetTickx(1);
   p22fail_allcats_2016_fit_s->SetTicky(1);
   p22fail_allcats_2016_fit_s->SetLeftMargin(0.16);
   p22fail_allcats_2016_fit_s->SetTopMargin(0.05);
   p22fail_allcats_2016_fit_s->SetBottomMargin(0.3);
   p22fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   p22fail_allcats_2016_fit_s->SetFrameFillStyle(0);
   p22fail_allcats_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorsfail_allcats_2016_fit_s__110 = new TH1F("iOneWithErrorsfail_allcats_2016_fit_s__110","",23,40,201);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMinimum(-5);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMaximum(51.95405);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetFillColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetLineColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMarkerColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s__110->SetMarkerSize(0);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s__110->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s__110->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_28 = new TH1F("hstack_stack_28","hstack",23,40,201);
   hstack_stack_28->SetMinimum(0);
   hstack_stack_28->SetMaximum(36.43794);
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
   
   
   TH1F *sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1","wqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(2,0.3321112);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(3,1.523596);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(4,5.007454);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(5,10.93282);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(6,24.38495);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(7,27.72299);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(8,14.26102);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(9,7.730503);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(10,2.426358);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(14,0.06411894);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(15,0.02482233);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(16,0.001552688);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(17,9.048334e-07);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(18,0.01494165);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(19,1.271857e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(20,1.330801e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(21,1.742368e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(22,1.81518e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetBinContent(23,1.902432e-06);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetEntries(161);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqq_fail_sumfail_allcats_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2","zqq in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(2,0.1158806);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(3,0.2186869);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(4,0.5785957);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(5,1.43333);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(6,3.809396);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(7,6.921998);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(8,11.21064);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(9,9.411147);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(10,4.438093);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(14,0.2202104);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(15,0.1454321);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(16,0.0643779);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(17,0.05870914);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(18,0.05613396);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(19,5.054797e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(20,0.005773263);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(21,6.924769e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(22,7.214148e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetBinContent(23,7.560922e-07);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetEntries(161);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqq_fail_sumfail_allcats_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3","hqq125 in cat1_2016_fail_cat1",23,40,201);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(2,0.01941974);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(3,0.02147454);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(4,0.01752813);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(5,0.03213501);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(6,0.03976336);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(7,0.05780232);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(8,0.07051519);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(9,0.09678486);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(10,0.1593861);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(14,0.1691955);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(15,0.09884606);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(16,0.04616019);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(17,0.03036602);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(18,0.01732644);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(19,0.0196015);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(20,0.0107549);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(21,0.007559732);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(22,0.005191379);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetBinContent(23,0.001795345);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetEntries(713);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigfail_allcats_2016_fit_sfail_allcats_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinefail_allcats_2016_fit_s__111 = new TH1F("iOneWithErrorsLinefail_allcats_2016_fit_s__111","",23,40,201);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetEntries(1104);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetFillColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetLineColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetMarkerColor(ci);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->SetMarkerSize(0);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinefail_allcats_2016_fit_s__111->Draw("hist sames");
   
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fx3028[23] = {
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fy3028[23] = {
   0,
   0.3566181,
   1.751822,
   5.809547,
   12.38764,
   28.17953,
   34.63604,
   25.52049,
   17.06673,
   6.950079,
   0,
   0,
   0,
   0.5220804,
   0.391229,
   -0.1373485,
   0.09404352,
   0.1141646,
   0.01982483,
   0.03604652,
   0.1602869,
   0.1425756,
   -0.1497063};
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_felx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fely3028[23] = {
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fehx3028[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiofail_allcats_2016_fit_s_fehy3028[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiofail_allcats_2016_fit_s_fx3028,Graph_from_iRatiofail_allcats_2016_fit_s_fy3028,Graph_from_iRatiofail_allcats_2016_fit_s_felx3028,Graph_from_iRatiofail_allcats_2016_fit_s_fehx3028,Graph_from_iRatiofail_allcats_2016_fit_s_fely3028,Graph_from_iRatiofail_allcats_2016_fit_s_fehy3028);
   grae->SetName("Graph_from_iRatiofail_allcats_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028 = new TH1F("Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetMinimum(-4.828281);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetMaximum(39.31461);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetDirectory(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetStats(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetLineStyle(0);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->SetMarkerStyle(20);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiofail_allcats_2016_fit_s3028);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorsfail_allcats_2016_fit_s_copy__112 = new TH1F("iOneWithErrorsfail_allcats_2016_fit_s_copy__112","",23,40,201);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMinimum(-5);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMaximum(51.95405);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetEntries(1104);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetFillColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetLineColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMarkerColor(ci);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->SetMarkerSize(0);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetRange(2,23);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsfail_allcats_2016_fit_s_copy__112->Draw("sameaxis");
   p22fail_allcats_2016_fit_s->Modified();
   cfail_allcats_2016_fit_s->cd();
   cfail_allcats_2016_fit_s->Modified();
   cfail_allcats_2016_fit_s->cd();
   cfail_allcats_2016_fit_s->SetSelected(cfail_allcats_2016_fit_s);
}
