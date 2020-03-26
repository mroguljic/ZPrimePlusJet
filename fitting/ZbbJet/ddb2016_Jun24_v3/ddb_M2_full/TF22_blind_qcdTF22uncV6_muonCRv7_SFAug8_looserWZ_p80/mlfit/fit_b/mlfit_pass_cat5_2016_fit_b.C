void mlfit_pass_cat5_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_b/cpass_cat5_2016_fit_b
//=========  (Wed Sep  4 11:54:18 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat5_2016_fit_b = new TCanvas("cpass_cat5_2016_fit_b", "cpass_cat5_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat5_2016_fit_b->SetHighLightColor(2);
   cpass_cat5_2016_fit_b->Range(0,0,1,1);
   cpass_cat5_2016_fit_b->SetFillColor(0);
   cpass_cat5_2016_fit_b->SetBorderMode(0);
   cpass_cat5_2016_fit_b->SetBorderSize(2);
   cpass_cat5_2016_fit_b->SetTickx(1);
   cpass_cat5_2016_fit_b->SetTicky(1);
   cpass_cat5_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat5_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat5_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat5_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat5_2016_fit_b
   TPad *p12pass_cat5_2016_fit_b = new TPad("p12pass_cat5_2016_fit_b", "p12pass_cat5_2016_fit_b",0,0.3,1,1);
   p12pass_cat5_2016_fit_b->Draw();
   p12pass_cat5_2016_fit_b->cd();
   p12pass_cat5_2016_fit_b->Range(13.7027,-11.83631,221.8108,579.9794);
   p12pass_cat5_2016_fit_b->SetFillColor(0);
   p12pass_cat5_2016_fit_b->SetBorderMode(0);
   p12pass_cat5_2016_fit_b->SetBorderSize(2);
   p12pass_cat5_2016_fit_b->SetTickx(1);
   p12pass_cat5_2016_fit_b->SetTicky(1);
   p12pass_cat5_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat5_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat5_2016_fit_b__73 = new TH1F("htotpass_cat5_2016_fit_b__73","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b__73->SetBinContent(1,2.667246e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(2,294.7331);
   htotpass_cat5_2016_fit_b__73->SetBinContent(3,306.1998);
   htotpass_cat5_2016_fit_b__73->SetBinContent(4,311.7025);
   htotpass_cat5_2016_fit_b__73->SetBinContent(5,307.7193);
   htotpass_cat5_2016_fit_b__73->SetBinContent(6,314.3186);
   htotpass_cat5_2016_fit_b__73->SetBinContent(7,347.1985);
   htotpass_cat5_2016_fit_b__73->SetBinContent(8,332.0819);
   htotpass_cat5_2016_fit_b__73->SetBinContent(9,274.7308);
   htotpass_cat5_2016_fit_b__73->SetBinContent(10,250.4733);
   htotpass_cat5_2016_fit_b__73->SetBinContent(11,2.667246e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(12,2.667246e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(13,2.667246e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(14,185.6742);
   htotpass_cat5_2016_fit_b__73->SetBinContent(15,172.5498);
   htotpass_cat5_2016_fit_b__73->SetBinContent(16,159.3856);
   htotpass_cat5_2016_fit_b__73->SetBinContent(17,144.3829);
   htotpass_cat5_2016_fit_b__73->SetBinContent(18,131.8998);
   htotpass_cat5_2016_fit_b__73->SetBinContent(19,121.9377);
   htotpass_cat5_2016_fit_b__73->SetBinContent(20,113.256);
   htotpass_cat5_2016_fit_b__73->SetBinContent(21,102.5031);
   htotpass_cat5_2016_fit_b__73->SetBinContent(22,87.28853);
   htotpass_cat5_2016_fit_b__73->SetBinContent(23,74.48385);
   htotpass_cat5_2016_fit_b__73->SetMinimum(0);
   htotpass_cat5_2016_fit_b__73->SetMaximum(520.7978);
   htotpass_cat5_2016_fit_b__73->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__73->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__73->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__73->SetLineColor(ci);
   htotpass_cat5_2016_fit_b__73->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b__73->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b__73->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b__73->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b__73->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__73->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__73->Draw("");
   
   TH1F *htot_linepass_cat5_2016_fit_b__74 = new TH1F("htot_linepass_cat5_2016_fit_b__74","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(1,2.667246e-06);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(2,294.7331);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(3,306.1998);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(4,311.7025);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(5,307.7193);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(6,314.3186);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(7,347.1985);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(8,332.0819);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(9,274.7308);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(10,250.4733);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(11,2.667246e-06);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(12,2.667246e-06);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(13,2.667246e-06);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(14,185.6742);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(15,172.5498);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(16,159.3856);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(17,144.3829);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(18,131.8998);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(19,121.9377);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(20,113.256);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(21,102.5031);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(22,87.28853);
   htot_linepass_cat5_2016_fit_b__74->SetBinContent(23,74.48385);
   htot_linepass_cat5_2016_fit_b__74->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_b__74->SetFillColor(ci);
   htot_linepass_cat5_2016_fit_b__74->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_b__74->SetLineColor(ci);
   htot_linepass_cat5_2016_fit_b__74->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_fit_b__74->SetMarkerColor(ci);
   htot_linepass_cat5_2016_fit_b__74->SetMarkerSize(0);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_fit_b__74->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_b__74->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_b__74->Draw("histsame");
   
   TH1F *qcd__75 = new TH1F("qcd__75","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__75->SetBinContent(2,293.0775);
   qcd__75->SetBinContent(3,298.379);
   qcd__75->SetBinContent(4,288.9156);
   qcd__75->SetBinContent(5,268.8185);
   qcd__75->SetBinContent(6,245.2651);
   qcd__75->SetBinContent(7,224.6413);
   qcd__75->SetBinContent(8,214.7562);
   qcd__75->SetBinContent(9,199.7229);
   qcd__75->SetBinContent(10,189.9109);
   qcd__75->SetBinContent(14,158.5789);
   qcd__75->SetBinContent(15,148.1871);
   qcd__75->SetBinContent(16,144.4979);
   qcd__75->SetBinContent(17,133.1248);
   qcd__75->SetBinContent(18,125.5785);
   qcd__75->SetBinContent(19,116.6745);
   qcd__75->SetBinContent(20,106.393);
   qcd__75->SetBinContent(21,96.66889);
   qcd__75->SetBinContent(22,87.28853);
   qcd__75->SetBinContent(23,74.48385);
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
   
   TH1F *htotpass_cat5_2016_fit_b__76 = new TH1F("htotpass_cat5_2016_fit_b__76","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b__76->SetBinContent(1,2.667246e-06);
   htotpass_cat5_2016_fit_b__76->SetBinContent(2,294.7331);
   htotpass_cat5_2016_fit_b__76->SetBinContent(3,306.1998);
   htotpass_cat5_2016_fit_b__76->SetBinContent(4,311.7025);
   htotpass_cat5_2016_fit_b__76->SetBinContent(5,307.7193);
   htotpass_cat5_2016_fit_b__76->SetBinContent(6,314.3186);
   htotpass_cat5_2016_fit_b__76->SetBinContent(7,347.1985);
   htotpass_cat5_2016_fit_b__76->SetBinContent(8,332.0819);
   htotpass_cat5_2016_fit_b__76->SetBinContent(9,274.7308);
   htotpass_cat5_2016_fit_b__76->SetBinContent(10,250.4733);
   htotpass_cat5_2016_fit_b__76->SetBinContent(11,2.667246e-06);
   htotpass_cat5_2016_fit_b__76->SetBinContent(12,2.667246e-06);
   htotpass_cat5_2016_fit_b__76->SetBinContent(13,2.667246e-06);
   htotpass_cat5_2016_fit_b__76->SetBinContent(14,185.6742);
   htotpass_cat5_2016_fit_b__76->SetBinContent(15,172.5498);
   htotpass_cat5_2016_fit_b__76->SetBinContent(16,159.3856);
   htotpass_cat5_2016_fit_b__76->SetBinContent(17,144.3829);
   htotpass_cat5_2016_fit_b__76->SetBinContent(18,131.8998);
   htotpass_cat5_2016_fit_b__76->SetBinContent(19,121.9377);
   htotpass_cat5_2016_fit_b__76->SetBinContent(20,113.256);
   htotpass_cat5_2016_fit_b__76->SetBinContent(21,102.5031);
   htotpass_cat5_2016_fit_b__76->SetBinContent(22,87.28853);
   htotpass_cat5_2016_fit_b__76->SetBinContent(23,74.48385);
   htotpass_cat5_2016_fit_b__76->SetMinimum(0);
   htotpass_cat5_2016_fit_b__76->SetMaximum(520.7978);
   htotpass_cat5_2016_fit_b__76->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__76->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__76->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__76->SetLineColor(ci);
   htotpass_cat5_2016_fit_b__76->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b__76->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b__76->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b__76->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b__76->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b__76->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b__76->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis19[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_19 = new TH1F("hstackMC_stack_19","hstackMC",23, xAxis19);
   hstackMC_stack_19->SetMinimum(0);
   hstackMC_stack_19->SetMaximum(128.6851);
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
   tqq_stack_1->SetBinContent(2,1.015615);
   tqq_stack_1->SetBinContent(3,3.638363);
   tqq_stack_1->SetBinContent(4,8.23055);
   tqq_stack_1->SetBinContent(5,13.59385);
   tqq_stack_1->SetBinContent(6,13.36961);
   tqq_stack_1->SetBinContent(7,22.0374);
   tqq_stack_1->SetBinContent(8,24.87067);
   tqq_stack_1->SetBinContent(9,16.15969);
   tqq_stack_1->SetBinContent(10,31.72002);
   tqq_stack_1->SetBinContent(14,27.0953);
   tqq_stack_1->SetBinContent(15,24.36269);
   tqq_stack_1->SetBinContent(16,14.8877);
   tqq_stack_1->SetBinContent(17,11.25819);
   tqq_stack_1->SetBinContent(18,6.32132);
   tqq_stack_1->SetBinContent(19,5.263168);
   tqq_stack_1->SetBinContent(20,6.863);
   tqq_stack_1->SetBinContent(21,5.834211);
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
   wqq_stack_2->SetBinContent(1,1.374744e-06);
   wqq_stack_2->SetBinContent(2,0.02033009);
   wqq_stack_2->SetBinContent(3,3.265808);
   wqq_stack_2->SetBinContent(4,11.2201);
   wqq_stack_2->SetBinContent(5,19.77241);
   wqq_stack_2->SetBinContent(6,37.56698);
   wqq_stack_2->SetBinContent(7,69.03057);
   wqq_stack_2->SetBinContent(8,39.10727);
   wqq_stack_2->SetBinContent(9,13.37955);
   wqq_stack_2->SetBinContent(10,3.029005);
   wqq_stack_2->SetBinContent(11,1.374744e-06);
   wqq_stack_2->SetBinContent(12,1.374744e-06);
   wqq_stack_2->SetBinContent(13,1.374744e-06);
   wqq_stack_2->SetBinContent(14,1.374744e-06);
   wqq_stack_2->SetBinContent(15,1.374744e-06);
   wqq_stack_2->SetBinContent(16,1.374744e-06);
   wqq_stack_2->SetBinContent(17,1.374744e-06);
   wqq_stack_2->SetBinContent(18,1.374744e-06);
   wqq_stack_2->SetBinContent(19,1.374744e-06);
   wqq_stack_2->SetBinContent(20,1.374744e-06);
   wqq_stack_2->SetBinContent(21,1.374744e-06);
   wqq_stack_2->SetBinContent(22,1.374744e-06);
   wqq_stack_2->SetBinContent(23,1.374744e-06);
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
   zqq_stack_3->SetBinContent(1,1.292502e-06);
   zqq_stack_3->SetBinContent(2,0.6196725);
   zqq_stack_3->SetBinContent(3,0.9165611);
   zqq_stack_3->SetBinContent(4,3.336298);
   zqq_stack_3->SetBinContent(5,5.534601);
   zqq_stack_3->SetBinContent(6,18.1169);
   zqq_stack_3->SetBinContent(7,31.48927);
   zqq_stack_3->SetBinContent(8,53.3478);
   zqq_stack_3->SetBinContent(9,45.46868);
   zqq_stack_3->SetBinContent(10,25.81342);
   zqq_stack_3->SetBinContent(11,1.292502e-06);
   zqq_stack_3->SetBinContent(12,1.292502e-06);
   zqq_stack_3->SetBinContent(13,1.292502e-06);
   zqq_stack_3->SetBinContent(14,1.292502e-06);
   zqq_stack_3->SetBinContent(15,1.292502e-06);
   zqq_stack_3->SetBinContent(16,1.292502e-06);
   zqq_stack_3->SetBinContent(17,1.292502e-06);
   zqq_stack_3->SetBinContent(18,1.292502e-06);
   zqq_stack_3->SetBinContent(19,1.292502e-06);
   zqq_stack_3->SetBinContent(20,1.292502e-06);
   zqq_stack_3->SetBinContent(21,1.292502e-06);
   zqq_stack_3->SetBinContent(22,1.292502e-06);
   zqq_stack_3->SetBinContent(23,1.292502e-06);
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
   
   TH1F *hsigpass_cat5_2016_fit_b_stack_4 = new TH1F("hsigpass_cat5_2016_fit_b_stack_4","hqq125 in cat5_2016_pass_cat5",23,40,201);
   hsigpass_cat5_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat5_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat5_2016_fit_b_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat5_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat5_2016_fit_b_copy__77 = new TH1F("htotpass_cat5_2016_fit_b_copy__77","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(1,2.667246e-06);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(2,294.7331);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(3,306.1998);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(4,311.7025);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(5,307.7193);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(6,314.3186);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(7,347.1985);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(8,332.0819);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(9,274.7308);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(10,250.4733);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(11,2.667246e-06);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(12,2.667246e-06);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(13,2.667246e-06);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(14,185.6742);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(15,172.5498);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(16,159.3856);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(17,144.3829);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(18,131.8998);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(19,121.9377);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(20,113.256);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(21,102.5031);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(22,87.28853);
   htotpass_cat5_2016_fit_b_copy__77->SetBinContent(23,74.48385);
   htotpass_cat5_2016_fit_b_copy__77->SetMaximum(520.7978);
   htotpass_cat5_2016_fit_b_copy__77->SetEntries(92);
   htotpass_cat5_2016_fit_b_copy__77->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__77->SetFillColor(ci);
   htotpass_cat5_2016_fit_b_copy__77->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__77->SetLineColor(ci);
   htotpass_cat5_2016_fit_b_copy__77->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b_copy__77->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b_copy__77->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b_copy__77->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b_copy__77->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__77->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__77->Draw("sameaxis");
   p12pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_b
   TPad *p22pass_cat5_2016_fit_b = new TPad("p22pass_cat5_2016_fit_b", "p22pass_cat5_2016_fit_b",0,0,1,0.3);
   p22pass_cat5_2016_fit_b->Draw();
   p22pass_cat5_2016_fit_b->cd();
   p22pass_cat5_2016_fit_b->Range(13.7027,-11.24082,221.8108,9.561918);
   p22pass_cat5_2016_fit_b->SetFillColor(0);
   p22pass_cat5_2016_fit_b->SetBorderMode(0);
   p22pass_cat5_2016_fit_b->SetBorderSize(2);
   p22pass_cat5_2016_fit_b->SetTickx(1);
   p22pass_cat5_2016_fit_b->SetTicky(1);
   p22pass_cat5_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat5_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat5_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat5_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b__78 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b__78","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMaximum(8.521781);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__78->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__78->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_20 = new TH1F("hstack_stack_20","hstack",23,40,201);
   hstack_stack_20->SetMinimum(0);
   hstack_stack_20->SetMaximum(5.676802);
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
   
   
   TH1F *sigHistResidualwqqpass_cat5_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat5_2016_fit_b_stack_1","wqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(2,0.001198633);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(3,0.1841012);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(4,0.6407005);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(5,1.11285);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(6,2.078477);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(7,3.712822);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(8,2.08537);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(9,0.8518791);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(10,0.1876069);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(14,9.63283e-08);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(15,1.101835e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(16,1.037217e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(17,1.135138e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(18,1.189059e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(19,1.350194e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(20,1.261975e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(21,1.41292e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(22,1.612686e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetBinContent(23,1.485288e-07);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat5_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat5_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat5_2016_fit_b_stack_2","zqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(2,0.03653499);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(3,0.0516687);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(4,0.1905123);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(5,0.3115039);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(6,1.002358);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(7,1.693656);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(8,2.844738);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(9,2.895002);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(10,1.598801);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(14,9.056562e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(15,1.03592e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(16,9.751669e-08);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(17,1.067231e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(18,1.117925e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(19,1.269421e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(20,1.18648e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(21,1.328394e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(22,1.51621e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetBinContent(23,1.396433e-07);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat5_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3","hqq125 in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_b__79 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_b__79","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fx3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fy3020[23] = {
   0,
   -0.3592409,
   0.6917623,
   0.5314687,
   1.787003,
   3.578959,
   5.062394,
   5.681187,
   1.859107,
   2.292032,
   0,
   0,
   0,
   1.19725,
   -1.326442,
   1.162503,
   0.1989827,
   0.1666154,
   -1.761734,
   0.4810893,
   -0.7711462,
   -1.67616,
   1.117009};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_felx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fely3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fehx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_b_fehy3020[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_b_fx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fy3020,Graph_from_iRatiopass_cat5_2016_fit_b_felx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fehx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fely3020,Graph_from_iRatiopass_cat5_2016_fit_b_fehy3020);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMinimum(-3.706026);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMaximum(7.625479);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b_copy__80 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b_copy__80","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMaximum(8.521781);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->Draw("sameaxis");
   p22pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
   cpass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
   cpass_cat5_2016_fit_b->SetSelected(cpass_cat5_2016_fit_b);
}
