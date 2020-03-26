void mlfit_pass_cat5_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_s/cpass_cat5_2016_fit_s
//=========  (Mon Sep 30 17:21:42 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat5_2016_fit_s = new TCanvas("cpass_cat5_2016_fit_s", "cpass_cat5_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat5_2016_fit_s->SetHighLightColor(2);
   cpass_cat5_2016_fit_s->Range(0,0,1,1);
   cpass_cat5_2016_fit_s->SetFillColor(0);
   cpass_cat5_2016_fit_s->SetBorderMode(0);
   cpass_cat5_2016_fit_s->SetBorderSize(2);
   cpass_cat5_2016_fit_s->SetTickx(1);
   cpass_cat5_2016_fit_s->SetTicky(1);
   cpass_cat5_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat5_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat5_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat5_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat5_2016_fit_s
   TPad *p12pass_cat5_2016_fit_s = new TPad("p12pass_cat5_2016_fit_s", "p12pass_cat5_2016_fit_s",0,0.3,1,1);
   p12pass_cat5_2016_fit_s->Draw();
   p12pass_cat5_2016_fit_s->cd();
   p12pass_cat5_2016_fit_s->Range(13.7027,-11.91335,221.8108,583.7542);
   p12pass_cat5_2016_fit_s->SetFillColor(0);
   p12pass_cat5_2016_fit_s->SetBorderMode(0);
   p12pass_cat5_2016_fit_s->SetBorderSize(2);
   p12pass_cat5_2016_fit_s->SetTickx(1);
   p12pass_cat5_2016_fit_s->SetTicky(1);
   p12pass_cat5_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat5_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat5_2016_fit_s__73 = new TH1F("htotpass_cat5_2016_fit_s__73","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s__73->SetBinContent(1,2.548204e-06);
   htotpass_cat5_2016_fit_s__73->SetBinContent(2,2.548204e-06);
   htotpass_cat5_2016_fit_s__73->SetBinContent(3,296.475);
   htotpass_cat5_2016_fit_s__73->SetBinContent(4,307.0329);
   htotpass_cat5_2016_fit_s__73->SetBinContent(5,304.8768);
   htotpass_cat5_2016_fit_s__73->SetBinContent(6,324.0208);
   htotpass_cat5_2016_fit_s__73->SetBinContent(7,349.4583);
   htotpass_cat5_2016_fit_s__73->SetBinContent(8,325.7269);
   htotpass_cat5_2016_fit_s__73->SetBinContent(9,271.4396);
   htotpass_cat5_2016_fit_s__73->SetBinContent(10,238.6652);
   htotpass_cat5_2016_fit_s__73->SetBinContent(11,207.6566);
   htotpass_cat5_2016_fit_s__73->SetBinContent(12,199.0484);
   htotpass_cat5_2016_fit_s__73->SetBinContent(13,186.2114);
   htotpass_cat5_2016_fit_s__73->SetBinContent(14,177.7629);
   htotpass_cat5_2016_fit_s__73->SetBinContent(15,164.9311);
   htotpass_cat5_2016_fit_s__73->SetBinContent(16,157.0558);
   htotpass_cat5_2016_fit_s__73->SetBinContent(17,142.8835);
   htotpass_cat5_2016_fit_s__73->SetBinContent(18,132.5187);
   htotpass_cat5_2016_fit_s__73->SetBinContent(19,122.195);
   htotpass_cat5_2016_fit_s__73->SetBinContent(20,111.6305);
   htotpass_cat5_2016_fit_s__73->SetBinContent(21,100.7375);
   htotpass_cat5_2016_fit_s__73->SetBinContent(22,88.85597);
   htotpass_cat5_2016_fit_s__73->SetBinContent(23,75.57983);
   htotpass_cat5_2016_fit_s__73->SetMinimum(0);
   htotpass_cat5_2016_fit_s__73->SetMaximum(524.1875);
   htotpass_cat5_2016_fit_s__73->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__73->SetFillColor(ci);
   htotpass_cat5_2016_fit_s__73->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__73->SetLineColor(ci);
   htotpass_cat5_2016_fit_s__73->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s__73->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s__73->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s__73->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__73->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s__73->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__73->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s__73->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s__73->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s__73->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__73->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__73->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__73->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__73->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__73->Draw("");
   
   TH1F *htot_linepass_cat5_2016_fit_s__74 = new TH1F("htot_linepass_cat5_2016_fit_s__74","wqq in cat5_2016_pass_cat5",23,40,201);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(1,2.548204e-06);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(2,2.548204e-06);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(3,296.475);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(4,307.0329);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(5,304.8768);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(6,324.0208);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(7,349.4583);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(8,325.7269);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(9,271.4396);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(10,238.6652);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(11,207.6566);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(12,199.0484);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(13,186.2114);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(14,177.7629);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(15,164.9311);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(16,157.0558);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(17,142.8835);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(18,132.5187);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(19,122.195);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(20,111.6305);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(21,100.7375);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(22,88.85597);
   htot_linepass_cat5_2016_fit_s__74->SetBinContent(23,75.57983);
   htot_linepass_cat5_2016_fit_s__74->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_s__74->SetFillColor(ci);
   htot_linepass_cat5_2016_fit_s__74->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat5_2016_fit_s__74->SetLineColor(ci);
   htot_linepass_cat5_2016_fit_s__74->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat5_2016_fit_s__74->SetMarkerColor(ci);
   htot_linepass_cat5_2016_fit_s__74->SetMarkerSize(0);
   htot_linepass_cat5_2016_fit_s__74->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat5_2016_fit_s__74->GetXaxis()->SetRange(2,23);
   htot_linepass_cat5_2016_fit_s__74->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_s__74->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_s__74->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_s__74->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_s__74->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat5_2016_fit_s__74->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_s__74->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat5_2016_fit_s__74->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat5_2016_fit_s__74->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat5_2016_fit_s__74->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_s__74->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat5_2016_fit_s__74->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat5_2016_fit_s__74->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat5_2016_fit_s__74->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat5_2016_fit_s__74->Draw("histsame");
   
   TH1F *qcd__75 = new TH1F("qcd__75","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__75->SetBinContent(3,290.8362);
   qcd__75->SetBinContent(4,289.165);
   qcd__75->SetBinContent(5,274.9289);
   qcd__75->SetBinContent(6,258.3209);
   qcd__75->SetBinContent(7,245.2176);
   qcd__75->SetBinContent(8,235.0511);
   qcd__75->SetBinContent(9,217.7036);
   qcd__75->SetBinContent(10,205.7553);
   qcd__75->SetBinContent(11,197.1435);
   qcd__75->SetBinContent(12,186.5015);
   qcd__75->SetBinContent(13,177.7024);
   qcd__75->SetBinContent(14,168.9672);
   qcd__75->SetBinContent(15,157.0225);
   qcd__75->SetBinContent(16,152.223);
   qcd__75->SetBinContent(17,139.2289);
   qcd__75->SetBinContent(18,130.4667);
   qcd__75->SetBinContent(19,120.4865);
   qcd__75->SetBinContent(20,109.4026);
   qcd__75->SetBinContent(21,98.84361);
   qcd__75->SetBinContent(22,88.85597);
   qcd__75->SetBinContent(23,75.57983);
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
   
   TH1F *htotpass_cat5_2016_fit_s__76 = new TH1F("htotpass_cat5_2016_fit_s__76","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s__76->SetBinContent(1,2.548204e-06);
   htotpass_cat5_2016_fit_s__76->SetBinContent(2,2.548204e-06);
   htotpass_cat5_2016_fit_s__76->SetBinContent(3,296.475);
   htotpass_cat5_2016_fit_s__76->SetBinContent(4,307.0329);
   htotpass_cat5_2016_fit_s__76->SetBinContent(5,304.8768);
   htotpass_cat5_2016_fit_s__76->SetBinContent(6,324.0208);
   htotpass_cat5_2016_fit_s__76->SetBinContent(7,349.4583);
   htotpass_cat5_2016_fit_s__76->SetBinContent(8,325.7269);
   htotpass_cat5_2016_fit_s__76->SetBinContent(9,271.4396);
   htotpass_cat5_2016_fit_s__76->SetBinContent(10,238.6652);
   htotpass_cat5_2016_fit_s__76->SetBinContent(11,207.6566);
   htotpass_cat5_2016_fit_s__76->SetBinContent(12,199.0484);
   htotpass_cat5_2016_fit_s__76->SetBinContent(13,186.2114);
   htotpass_cat5_2016_fit_s__76->SetBinContent(14,177.7629);
   htotpass_cat5_2016_fit_s__76->SetBinContent(15,164.9311);
   htotpass_cat5_2016_fit_s__76->SetBinContent(16,157.0558);
   htotpass_cat5_2016_fit_s__76->SetBinContent(17,142.8835);
   htotpass_cat5_2016_fit_s__76->SetBinContent(18,132.5187);
   htotpass_cat5_2016_fit_s__76->SetBinContent(19,122.195);
   htotpass_cat5_2016_fit_s__76->SetBinContent(20,111.6305);
   htotpass_cat5_2016_fit_s__76->SetBinContent(21,100.7375);
   htotpass_cat5_2016_fit_s__76->SetBinContent(22,88.85597);
   htotpass_cat5_2016_fit_s__76->SetBinContent(23,75.57983);
   htotpass_cat5_2016_fit_s__76->SetMinimum(0);
   htotpass_cat5_2016_fit_s__76->SetMaximum(524.1875);
   htotpass_cat5_2016_fit_s__76->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__76->SetFillColor(ci);
   htotpass_cat5_2016_fit_s__76->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__76->SetLineColor(ci);
   htotpass_cat5_2016_fit_s__76->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s__76->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s__76->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s__76->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__76->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s__76->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__76->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s__76->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s__76->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s__76->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__76->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s__76->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s__76->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s__76->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s__76->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis19[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_19 = new TH1F("hstackMC_stack_19","hstackMC",23, xAxis19);
   hstackMC_stack_19->SetMinimum(0);
   hstackMC_stack_19->SetMaximum(110.139);
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
   tqq_stack_1->SetBinContent(3,1.181085);
   tqq_stack_1->SetBinContent(4,2.671799);
   tqq_stack_1->SetBinContent(5,4.412833);
   tqq_stack_1->SetBinContent(6,4.340041);
   tqq_stack_1->SetBinContent(7,7.153776);
   tqq_stack_1->SetBinContent(8,8.073512);
   tqq_stack_1->SetBinContent(9,5.245756);
   tqq_stack_1->SetBinContent(10,10.29695);
   tqq_stack_1->SetBinContent(11,6.101948);
   tqq_stack_1->SetBinContent(12,10.27003);
   tqq_stack_1->SetBinContent(13,8.508976);
   tqq_stack_1->SetBinContent(14,8.795671);
   tqq_stack_1->SetBinContent(15,7.908612);
   tqq_stack_1->SetBinContent(16,4.832842);
   tqq_stack_1->SetBinContent(17,3.654631);
   tqq_stack_1->SetBinContent(18,2.052025);
   tqq_stack_1->SetBinContent(19,1.708528);
   tqq_stack_1->SetBinContent(20,2.227865);
   tqq_stack_1->SetBinContent(21,1.8939);
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
   wqq_stack_2->SetBinContent(1,1.117405e-06);
   wqq_stack_2->SetBinContent(2,1.117405e-06);
   wqq_stack_2->SetBinContent(3,3.151875);
   wqq_stack_2->SetBinContent(4,10.64204);
   wqq_stack_2->SetBinContent(5,18.86228);
   wqq_stack_2->SetBinContent(6,37.85276);
   wqq_stack_2->SetBinContent(7,53.64528);
   wqq_stack_2->SetBinContent(8,24.05217);
   wqq_stack_2->SetBinContent(9,8.32677);
   wqq_stack_2->SetBinContent(10,2.103926);
   wqq_stack_2->SetBinContent(11,0.9922094);
   wqq_stack_2->SetBinContent(12,1.117405e-06);
   wqq_stack_2->SetBinContent(13,1.117405e-06);
   wqq_stack_2->SetBinContent(14,1.117405e-06);
   wqq_stack_2->SetBinContent(15,1.117405e-06);
   wqq_stack_2->SetBinContent(16,1.117405e-06);
   wqq_stack_2->SetBinContent(17,1.117405e-06);
   wqq_stack_2->SetBinContent(18,1.117405e-06);
   wqq_stack_2->SetBinContent(19,1.117405e-06);
   wqq_stack_2->SetBinContent(20,1.117405e-06);
   wqq_stack_2->SetBinContent(21,1.117405e-06);
   wqq_stack_2->SetBinContent(22,1.117405e-06);
   wqq_stack_2->SetBinContent(23,1.117405e-06);
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
   zqq_stack_3->SetBinContent(1,1.430799e-06);
   zqq_stack_3->SetBinContent(2,1.430799e-06);
   zqq_stack_3->SetBinContent(3,1.305883);
   zqq_stack_3->SetBinContent(4,4.554039);
   zqq_stack_3->SetBinContent(5,6.672725);
   zqq_stack_3->SetBinContent(6,23.50714);
   zqq_stack_3->SetBinContent(7,43.44164);
   zqq_stack_3->SetBinContent(8,58.55012);
   zqq_stack_3->SetBinContent(9,40.16348);
   zqq_stack_3->SetBinContent(10,20.50896);
   zqq_stack_3->SetBinContent(11,3.418905);
   zqq_stack_3->SetBinContent(12,2.276899);
   zqq_stack_3->SetBinContent(13,1.430799e-06);
   zqq_stack_3->SetBinContent(14,1.430799e-06);
   zqq_stack_3->SetBinContent(15,1.430799e-06);
   zqq_stack_3->SetBinContent(16,1.430799e-06);
   zqq_stack_3->SetBinContent(17,1.430799e-06);
   zqq_stack_3->SetBinContent(18,1.430799e-06);
   zqq_stack_3->SetBinContent(19,1.430799e-06);
   zqq_stack_3->SetBinContent(20,1.430799e-06);
   zqq_stack_3->SetBinContent(21,1.430799e-06);
   zqq_stack_3->SetBinContent(22,1.430799e-06);
   zqq_stack_3->SetBinContent(23,1.430799e-06);
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
   
   TH1F *hsigpass_cat5_2016_fit_s_stack_4 = new TH1F("hsigpass_cat5_2016_fit_s_stack_4","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(1,3.614617e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(2,3.614617e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(3,0.5125214);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(4,0.00790685);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(5,0.2141755);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(6,0.415854);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(7,0.6535966);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(8,1.185746);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(9,1.881115);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(10,2.271077);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(11,7.63436);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(12,10.9974);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(13,12.09066);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(14,7.478395);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(15,4.915748);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(16,1.206645);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(17,0.06800702);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(18,0.01490841);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(19,0.01966858);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(20,0.03779226);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(21,0.01573195);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(22,0.00774498);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(23,0.008331252);
   hsigpass_cat5_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat5_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat5_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat5_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat5_2016_fit_s_stack_4,"");
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
   0,
   315,
   307,
   316,
   327,
   346,
   352,
   247,
   261,
   210,
   211,
   197,
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
   1.841055,
   18.76744,
   18.54085,
   18.79556,
   19.102,
   19.61943,
   19.77987,
   16.73782,
   17.17651,
   15.51473,
   15.54914,
   15.05976,
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
   0,
   17.7392,
   17.51224,
   17.76736,
   18.07428,
   18.59248,
   18.75315,
   15.70592,
   16.14548,
   14.48014,
   14.51463,
   14.02405,
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
   grae->SetTitle("WH_hbb in cat5_2016_pass_cat5");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3019 = new TH1F("Graph_data_copy3019","WH_hbb in cat5_2016_pass_cat5",100,28.1,212.9);
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
   entry=leg->AddEntry("htotpass_cat5_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat5_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat5_2016_fit_s_copy__77 = new TH1F("htotpass_cat5_2016_fit_s_copy__77","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(1,2.548204e-06);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(2,2.548204e-06);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(3,296.475);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(4,307.0329);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(5,304.8768);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(6,324.0208);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(7,349.4583);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(8,325.7269);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(9,271.4396);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(10,238.6652);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(11,207.6566);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(12,199.0484);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(13,186.2114);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(14,177.7629);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(15,164.9311);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(16,157.0558);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(17,142.8835);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(18,132.5187);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(19,122.195);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(20,111.6305);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(21,100.7375);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(22,88.85597);
   htotpass_cat5_2016_fit_s_copy__77->SetBinContent(23,75.57983);
   htotpass_cat5_2016_fit_s_copy__77->SetMaximum(524.1875);
   htotpass_cat5_2016_fit_s_copy__77->SetEntries(92);
   htotpass_cat5_2016_fit_s_copy__77->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s_copy__77->SetFillColor(ci);
   htotpass_cat5_2016_fit_s_copy__77->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s_copy__77->SetLineColor(ci);
   htotpass_cat5_2016_fit_s_copy__77->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s_copy__77->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s_copy__77->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s_copy__77->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__77->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s_copy__77->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__77->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s_copy__77->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s_copy__77->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s_copy__77->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__77->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__77->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s_copy__77->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s_copy__77->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__77->Draw("sameaxis");
   p12pass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_s
   TPad *p22pass_cat5_2016_fit_s = new TPad("p22pass_cat5_2016_fit_s", "p22pass_cat5_2016_fit_s",0,0,1,0.3);
   p22pass_cat5_2016_fit_s->Draw();
   p22pass_cat5_2016_fit_s->cd();
   p22pass_cat5_2016_fit_s->Range(13.7027,-11.1184,221.8108,9.276266);
   p22pass_cat5_2016_fit_s->SetFillColor(0);
   p22pass_cat5_2016_fit_s->SetBorderMode(0);
   p22pass_cat5_2016_fit_s->SetBorderSize(2);
   p22pass_cat5_2016_fit_s->SetTickx(1);
   p22pass_cat5_2016_fit_s->SetTicky(1);
   p22pass_cat5_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat5_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat5_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat5_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat5_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_s__78 = new TH1F("iOneWithErrorspass_cat5_2016_fit_s__78","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetMaximum(8.256533);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__78->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__78->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__78->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s__78->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__78->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_20 = new TH1F("hstack_stack_20","hstack",23,40,201);
   hstack_stack_20->SetMinimum(0);
   hstack_stack_20->SetMaximum(5.51984);
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
   
   
   TH1F *sigHistResidualwqqpass_cat5_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat5_2016_fit_s_stack_1","wqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(3,0.1776786);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(4,0.6076913);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(5,1.061626);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(6,2.094289);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(7,2.885321);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(8,1.282567);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(9,0.5301675);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(10,0.1303105);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(11,0.06852209);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(12,7.698475e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(13,7.967781e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(14,7.829657e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(15,8.955821e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(16,8.430596e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(17,9.226515e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(18,9.664782e-08);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(19,1.097451e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(20,1.025746e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(21,1.148435e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(22,1.310807e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetBinContent(23,1.207256e-07);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat5_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat5_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat5_2016_fit_s_stack_2","zqq in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(3,0.07361568);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(4,0.2600489);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(5,0.3755608);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(6,1.300585);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(7,2.336517);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(8,3.122148);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(9,2.557218);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(10,1.27026);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(11,0.2361099);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(12,0.1568692);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(13,1.020247e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(14,1.00256e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(15,1.146762e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(16,1.079509e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(17,1.181423e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(18,1.237542e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(19,1.405247e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(20,1.313432e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(21,1.470531e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(22,1.678443e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetBinContent(23,1.54585e-07);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat5_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat5_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(3,0.02889203);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(4,0.0004515041);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(5,0.01205444);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(6,0.02300805);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(7,0.03515381);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(8,0.06322914);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(9,0.1197711);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(10,0.1406633);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(11,0.5272297);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(12,0.757677);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(13,0.8621379);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(14,0.5240111);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(15,0.3939892);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(16,0.0910389);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(17,0.005615401);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(18,0.001289474);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(19,0.001931734);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(20,0.00346922);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(21,0.001616882);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(22,0.000908549);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetBinContent(23,0.0009001172);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_s__79 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_s__79","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetLineColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fx3020[23] = {
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fy3020[23] = {
   0,
   0,
   1.224608,
   0.8178253,
   1.950367,
   3.368186,
   4.77224,
   5.504355,
   1.436903,
   2.616812,
   0.4353645,
   0.9150639,
   0.7163883,
   1.71411,
   -0.7158149,
   1.325515,
   0.3129895,
   0.1175158,
   -1.787006,
   0.6172338,
   -0.589683,
   -1.860034,
   1.010705};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_felx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fely3020[23] = {
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
   1};
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fehx3020[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat5_2016_fit_s_fehy3020[23] = {
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
   1};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_s_fx3020,Graph_from_iRatiopass_cat5_2016_fit_s_fy3020,Graph_from_iRatiopass_cat5_2016_fit_s_felx3020,Graph_from_iRatiopass_cat5_2016_fit_s_fehx3020,Graph_from_iRatiopass_cat5_2016_fit_s_fely3020,Graph_from_iRatiopass_cat5_2016_fit_s_fehy3020);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetMinimum(-3.796473);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetMaximum(7.440794);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetStats(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_s_copy__80 = new TH1F("iOneWithErrorspass_cat5_2016_fit_s_copy__80","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetMinimum(-5);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetMaximum(8.256533);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->Draw("sameaxis");
   p22pass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
   cpass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
   cpass_cat5_2016_fit_s->SetSelected(cpass_cat5_2016_fit_s);
}
