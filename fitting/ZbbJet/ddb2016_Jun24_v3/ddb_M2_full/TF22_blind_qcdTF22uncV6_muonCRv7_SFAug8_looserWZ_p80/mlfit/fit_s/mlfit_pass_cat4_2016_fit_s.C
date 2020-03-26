void mlfit_pass_cat4_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat4_2016_fit_s/cpass_cat4_2016_fit_s
//=========  (Wed Sep  4 11:54:23 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_fit_s = new TCanvas("cpass_cat4_2016_fit_s", "cpass_cat4_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_fit_s->SetHighLightColor(2);
   cpass_cat4_2016_fit_s->Range(0,0,1,1);
   cpass_cat4_2016_fit_s->SetFillColor(0);
   cpass_cat4_2016_fit_s->SetBorderMode(0);
   cpass_cat4_2016_fit_s->SetBorderSize(2);
   cpass_cat4_2016_fit_s->SetTickx(1);
   cpass_cat4_2016_fit_s->SetTicky(1);
   cpass_cat4_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat4_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat4_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat4_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_fit_s
   TPad *p12pass_cat4_2016_fit_s = new TPad("p12pass_cat4_2016_fit_s", "p12pass_cat4_2016_fit_s",0,0.3,1,1);
   p12pass_cat4_2016_fit_s->Draw();
   p12pass_cat4_2016_fit_s->cd();
   p12pass_cat4_2016_fit_s->Range(13.7027,-18.27903,221.8108,895.6724);
   p12pass_cat4_2016_fit_s->SetFillColor(0);
   p12pass_cat4_2016_fit_s->SetBorderMode(0);
   p12pass_cat4_2016_fit_s->SetBorderSize(2);
   p12pass_cat4_2016_fit_s->SetTickx(1);
   p12pass_cat4_2016_fit_s->SetTicky(1);
   p12pass_cat4_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat4_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_fit_s__57 = new TH1F("htotpass_cat4_2016_fit_s__57","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s__57->SetBinContent(1,3.914035e-06);
   htotpass_cat4_2016_fit_s__57->SetBinContent(2,462.4902);
   htotpass_cat4_2016_fit_s__57->SetBinContent(3,468.9628);
   htotpass_cat4_2016_fit_s__57->SetBinContent(4,473.3665);
   htotpass_cat4_2016_fit_s__57->SetBinContent(5,493.727);
   htotpass_cat4_2016_fit_s__57->SetBinContent(6,522.7529);
   htotpass_cat4_2016_fit_s__57->SetBinContent(7,536.1848);
   htotpass_cat4_2016_fit_s__57->SetBinContent(8,496.6489);
   htotpass_cat4_2016_fit_s__57->SetBinContent(9,425.6037);
   htotpass_cat4_2016_fit_s__57->SetBinContent(10,376.4224);
   htotpass_cat4_2016_fit_s__57->SetBinContent(11,3.914035e-06);
   htotpass_cat4_2016_fit_s__57->SetBinContent(12,3.914035e-06);
   htotpass_cat4_2016_fit_s__57->SetBinContent(13,3.914035e-06);
   htotpass_cat4_2016_fit_s__57->SetBinContent(14,287.6056);
   htotpass_cat4_2016_fit_s__57->SetBinContent(15,265.2496);
   htotpass_cat4_2016_fit_s__57->SetBinContent(16,244.4363);
   htotpass_cat4_2016_fit_s__57->SetBinContent(17,226.7128);
   htotpass_cat4_2016_fit_s__57->SetBinContent(18,199.207);
   htotpass_cat4_2016_fit_s__57->SetBinContent(19,178.5124);
   htotpass_cat4_2016_fit_s__57->SetBinContent(20,152.0835);
   htotpass_cat4_2016_fit_s__57->SetBinContent(21,130.1749);
   htotpass_cat4_2016_fit_s__57->SetBinContent(22,108.6973);
   htotpass_cat4_2016_fit_s__57->SetBinContent(23,86.46916);
   htotpass_cat4_2016_fit_s__57->SetMinimum(0);
   htotpass_cat4_2016_fit_s__57->SetMaximum(804.2772);
   htotpass_cat4_2016_fit_s__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__57->SetFillColor(ci);
   htotpass_cat4_2016_fit_s__57->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__57->SetLineColor(ci);
   htotpass_cat4_2016_fit_s__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s__57->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s__57->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__57->Draw("");
   
   TH1F *htot_linepass_cat4_2016_fit_s__58 = new TH1F("htot_linepass_cat4_2016_fit_s__58","wqq in cat4_2016_pass_cat4",23,40,201);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(1,3.914035e-06);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(2,462.4902);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(3,468.9628);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(4,473.3665);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(5,493.727);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(6,522.7529);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(7,536.1848);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(8,496.6489);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(9,425.6037);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(10,376.4224);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(11,3.914035e-06);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(12,3.914035e-06);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(13,3.914035e-06);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(14,287.6056);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(15,265.2496);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(16,244.4363);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(17,226.7128);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(18,199.207);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(19,178.5124);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(20,152.0835);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(21,130.1749);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(22,108.6973);
   htot_linepass_cat4_2016_fit_s__58->SetBinContent(23,86.46916);
   htot_linepass_cat4_2016_fit_s__58->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_s__58->SetFillColor(ci);
   htot_linepass_cat4_2016_fit_s__58->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat4_2016_fit_s__58->SetLineColor(ci);
   htot_linepass_cat4_2016_fit_s__58->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat4_2016_fit_s__58->SetMarkerColor(ci);
   htot_linepass_cat4_2016_fit_s__58->SetMarkerSize(0);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetRange(2,23);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat4_2016_fit_s__58->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat4_2016_fit_s__58->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat4_2016_fit_s__58->Draw("histsame");
   
   TH1F *qcd__59 = new TH1F("qcd__59","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__59->SetBinContent(2,457.8999);
   qcd__59->SetBinContent(3,463.1519);
   qcd__59->SetBinContent(4,450.2176);
   qcd__59->SetBinContent(5,430.5612);
   qcd__59->SetBinContent(6,399.0264);
   qcd__59->SetBinContent(7,379.9677);
   qcd__59->SetBinContent(8,362.3873);
   qcd__59->SetBinContent(9,336.6603);
   qcd__59->SetBinContent(10,325.0758);
   qcd__59->SetBinContent(14,269.6908);
   qcd__59->SetBinContent(15,258.5371);
   qcd__59->SetBinContent(16,235.803);
   qcd__59->SetBinContent(17,222.0306);
   qcd__59->SetBinContent(18,195.5228);
   qcd__59->SetBinContent(19,173.84);
   qcd__59->SetBinContent(20,149.3557);
   qcd__59->SetBinContent(21,128.2476);
   qcd__59->SetBinContent(22,107.8128);
   qcd__59->SetBinContent(23,86.46915);
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
   
   TH1F *htotpass_cat4_2016_fit_s__60 = new TH1F("htotpass_cat4_2016_fit_s__60","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s__60->SetBinContent(1,3.914035e-06);
   htotpass_cat4_2016_fit_s__60->SetBinContent(2,462.4902);
   htotpass_cat4_2016_fit_s__60->SetBinContent(3,468.9628);
   htotpass_cat4_2016_fit_s__60->SetBinContent(4,473.3665);
   htotpass_cat4_2016_fit_s__60->SetBinContent(5,493.727);
   htotpass_cat4_2016_fit_s__60->SetBinContent(6,522.7529);
   htotpass_cat4_2016_fit_s__60->SetBinContent(7,536.1848);
   htotpass_cat4_2016_fit_s__60->SetBinContent(8,496.6489);
   htotpass_cat4_2016_fit_s__60->SetBinContent(9,425.6037);
   htotpass_cat4_2016_fit_s__60->SetBinContent(10,376.4224);
   htotpass_cat4_2016_fit_s__60->SetBinContent(11,3.914035e-06);
   htotpass_cat4_2016_fit_s__60->SetBinContent(12,3.914035e-06);
   htotpass_cat4_2016_fit_s__60->SetBinContent(13,3.914035e-06);
   htotpass_cat4_2016_fit_s__60->SetBinContent(14,287.6056);
   htotpass_cat4_2016_fit_s__60->SetBinContent(15,265.2496);
   htotpass_cat4_2016_fit_s__60->SetBinContent(16,244.4363);
   htotpass_cat4_2016_fit_s__60->SetBinContent(17,226.7128);
   htotpass_cat4_2016_fit_s__60->SetBinContent(18,199.207);
   htotpass_cat4_2016_fit_s__60->SetBinContent(19,178.5124);
   htotpass_cat4_2016_fit_s__60->SetBinContent(20,152.0835);
   htotpass_cat4_2016_fit_s__60->SetBinContent(21,130.1749);
   htotpass_cat4_2016_fit_s__60->SetBinContent(22,108.6973);
   htotpass_cat4_2016_fit_s__60->SetBinContent(23,86.46916);
   htotpass_cat4_2016_fit_s__60->SetMinimum(0);
   htotpass_cat4_2016_fit_s__60->SetMaximum(804.2772);
   htotpass_cat4_2016_fit_s__60->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__60->SetFillColor(ci);
   htotpass_cat4_2016_fit_s__60->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s__60->SetLineColor(ci);
   htotpass_cat4_2016_fit_s__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s__60->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s__60->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s__60->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(0);
   hstackMC_stack_15->SetMaximum(165.3947);
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
   tqq_stack_1->SetBinContent(2,3.572766);
   tqq_stack_1->SetBinContent(3,3.330062);
   tqq_stack_1->SetBinContent(4,3.316262);
   tqq_stack_1->SetBinContent(5,9.677413);
   tqq_stack_1->SetBinContent(6,15.78898);
   tqq_stack_1->SetBinContent(7,15.23317);
   tqq_stack_1->SetBinContent(8,15.50727);
   tqq_stack_1->SetBinContent(9,13.10641);
   tqq_stack_1->SetBinContent(10,13.39092);
   tqq_stack_1->SetBinContent(14,17.055);
   tqq_stack_1->SetBinContent(15,6.712483);
   tqq_stack_1->SetBinContent(16,8.633338);
   tqq_stack_1->SetBinContent(17,4.682174);
   tqq_stack_1->SetBinContent(18,3.684173);
   tqq_stack_1->SetBinContent(19,4.672456);
   tqq_stack_1->SetBinContent(20,2.727863);
   tqq_stack_1->SetBinContent(21,1.927291);
   tqq_stack_1->SetBinContent(22,0.884523);
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
   wqq_stack_2->SetBinContent(1,1.533779e-06);
   wqq_stack_2->SetBinContent(2,1.017508);
   wqq_stack_2->SetBinContent(3,2.480869);
   wqq_stack_2->SetBinContent(4,15.97055);
   wqq_stack_2->SetBinContent(5,33.17909);
   wqq_stack_2->SetBinContent(6,60.66417);
   wqq_stack_2->SetBinContent(7,68.60899);
   wqq_stack_2->SetBinContent(8,25.03709);
   wqq_stack_2->SetBinContent(9,10.23084);
   wqq_stack_2->SetBinContent(10,1.922233);
   wqq_stack_2->SetBinContent(11,1.533779e-06);
   wqq_stack_2->SetBinContent(12,1.533779e-06);
   wqq_stack_2->SetBinContent(13,1.533779e-06);
   wqq_stack_2->SetBinContent(14,1.533779e-06);
   wqq_stack_2->SetBinContent(15,1.533779e-06);
   wqq_stack_2->SetBinContent(16,1.533779e-06);
   wqq_stack_2->SetBinContent(17,1.533779e-06);
   wqq_stack_2->SetBinContent(18,1.533779e-06);
   wqq_stack_2->SetBinContent(19,1.533779e-06);
   wqq_stack_2->SetBinContent(20,1.533779e-06);
   wqq_stack_2->SetBinContent(21,1.533779e-06);
   wqq_stack_2->SetBinContent(22,1.533779e-06);
   wqq_stack_2->SetBinContent(23,1.533779e-06);
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
   zqq_stack_3->SetBinContent(1,2.380255e-06);
   zqq_stack_3->SetBinContent(2,2.380255e-06);
   zqq_stack_3->SetBinContent(3,2.380255e-06);
   zqq_stack_3->SetBinContent(4,3.862129);
   zqq_stack_3->SetBinContent(5,20.30926);
   zqq_stack_3->SetBinContent(6,47.27338);
   zqq_stack_3->SetBinContent(7,72.37495);
   zqq_stack_3->SetBinContent(8,93.7173);
   zqq_stack_3->SetBinContent(9,65.60613);
   zqq_stack_3->SetBinContent(10,36.03347);
   zqq_stack_3->SetBinContent(11,2.380255e-06);
   zqq_stack_3->SetBinContent(12,2.380255e-06);
   zqq_stack_3->SetBinContent(13,2.380255e-06);
   zqq_stack_3->SetBinContent(14,0.8598179);
   zqq_stack_3->SetBinContent(15,2.380255e-06);
   zqq_stack_3->SetBinContent(16,2.380255e-06);
   zqq_stack_3->SetBinContent(17,2.380255e-06);
   zqq_stack_3->SetBinContent(18,2.380255e-06);
   zqq_stack_3->SetBinContent(19,2.380255e-06);
   zqq_stack_3->SetBinContent(20,2.380255e-06);
   zqq_stack_3->SetBinContent(21,2.380255e-06);
   zqq_stack_3->SetBinContent(22,2.380255e-06);
   zqq_stack_3->SetBinContent(23,2.380255e-06);
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
   
   TH1F *hsigpass_cat4_2016_fit_s_stack_4 = new TH1F("hsigpass_cat4_2016_fit_s_stack_4","hqq125 in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(1,6.18347e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(2,1.966597);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(3,0.04596749);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(4,1.652754);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(5,0.1952204);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(6,0.7928235);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(7,1.301688);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(8,3.875985);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(9,9.453775);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(10,19.73286);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(11,6.18347e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(12,6.18347e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(13,6.18347e-07);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(14,28.12659);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(15,15.01599);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(16,5.347728);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(17,0.4838939);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(18,0.12537);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(19,0.0887119);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(20,0.02607052);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(21,0.05806763);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(22,0.01564355);
   hsigpass_cat4_2016_fit_s_stack_4->SetBinContent(23,0.0295612);
   hsigpass_cat4_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_fit_s_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat4_2016_fit_s","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat4_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat4_2016_fit_s_copy__61 = new TH1F("htotpass_cat4_2016_fit_s_copy__61","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(1,3.914035e-06);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(2,462.4902);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(3,468.9628);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(4,473.3665);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(5,493.727);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(6,522.7529);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(7,536.1848);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(8,496.6489);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(9,425.6037);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(10,376.4224);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(11,3.914035e-06);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(12,3.914035e-06);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(13,3.914035e-06);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(14,287.6056);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(15,265.2496);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(16,244.4363);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(17,226.7128);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(18,199.207);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(19,178.5124);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(20,152.0835);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(21,130.1749);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(22,108.6973);
   htotpass_cat4_2016_fit_s_copy__61->SetBinContent(23,86.46916);
   htotpass_cat4_2016_fit_s_copy__61->SetMaximum(804.2772);
   htotpass_cat4_2016_fit_s_copy__61->SetEntries(92);
   htotpass_cat4_2016_fit_s_copy__61->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s_copy__61->SetFillColor(ci);
   htotpass_cat4_2016_fit_s_copy__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_s_copy__61->SetLineColor(ci);
   htotpass_cat4_2016_fit_s_copy__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_s_copy__61->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_s_copy__61->SetMarkerSize(0);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_s_copy__61->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_s_copy__61->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_s_copy__61->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_s_copy__61->Draw("sameaxis");
   p12pass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_fit_s
   TPad *p22pass_cat4_2016_fit_s = new TPad("p22pass_cat4_2016_fit_s", "p22pass_cat4_2016_fit_s",0,0,1,0.3);
   p22pass_cat4_2016_fit_s->Draw();
   p22pass_cat4_2016_fit_s->cd();
   p22pass_cat4_2016_fit_s->Range(13.7027,-11.08866,221.8108,9.206876);
   p22pass_cat4_2016_fit_s->SetFillColor(0);
   p22pass_cat4_2016_fit_s->SetBorderMode(0);
   p22pass_cat4_2016_fit_s->SetBorderSize(2);
   p22pass_cat4_2016_fit_s->SetTickx(1);
   p22pass_cat4_2016_fit_s->SetTicky(1);
   p22pass_cat4_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat4_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat4_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat4_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_s__62 = new TH1F("iOneWithErrorspass_cat4_2016_fit_s__62","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMaximum(8.192099);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__62->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__62->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s__62->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s__62->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(0);
   hstack_stack_16->SetMaximum(6.516078);
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
   
   
   TH1F *sigHistResidualwqqpass_cat4_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat4_2016_fit_s_stack_1","wqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(2,0.0466528);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(3,0.1158367);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(4,0.7424665);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(5,1.511758);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(6,2.738609);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(7,2.992381);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(8,1.13374);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(9,0.4705709);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(10,0.09394271);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(14,8.383937e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(15,9.237667e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(16,9.554884e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(17,9.305427e-08);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(18,1.05923e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(19,1.147449e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(20,1.302476e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(21,1.307198e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(22,1.471324e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetBinContent(23,1.60196e-07);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat4_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat4_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat4_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat4_2016_fit_s_stack_2","zqq in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(2,1.091348e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(3,1.111389e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(4,0.1795494);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(5,0.9253624);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(6,2.134099);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(7,3.156634);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(8,4.243746);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(9,3.017575);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(10,1.761015);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(14,0.04699933);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(15,1.433583e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(16,1.482812e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(17,1.444099e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(18,1.643807e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(19,1.780713e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(20,2.021298e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(21,2.028626e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(22,2.283332e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetBinContent(23,2.486063e-07);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat4_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat4_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3","hqq125 in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(2,0.09016856);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(3,0.002146314);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(4,0.07683607);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(5,0.008894942);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(6,0.03579104);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(7,0.0567731);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(8,0.175514);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(9,0.4348294);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(10,0.9643777);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(14,1.537454);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(15,0.9043853);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(16,0.3331439);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(17,0.02935781);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(18,0.008658065);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(19,0.006636703);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(20,0.002213892);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(21,0.004948945);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(22,0.001500655);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetBinContent(23,0.003087527);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_fit_spass_cat4_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_fit_s__63 = new TH1F("iOneWithErrorsLinepass_cat4_2016_fit_s__63","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_s__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fy3016[23] = {
   0,
   0.6362364,
   -0.3493451,
   0.4200954,
   1.818068,
   3.287496,
   5.4614,
   4.765167,
   5.413422,
   3.748132,
   0,
   0,
   0,
   2.497419,
   0.6096488,
   0.7939647,
   2.585915,
   0.6956615,
   0.03384844,
   -1.111046,
   0.6124829,
   0.02638317,
   0.5204685};
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_s_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_fit_s_fx3016,Graph_from_iRatiopass_cat4_2016_fit_s_fy3016,Graph_from_iRatiopass_cat4_2016_fit_s_felx3016,Graph_from_iRatiopass_cat4_2016_fit_s_fehx3016,Graph_from_iRatiopass_cat4_2016_fit_s_fely3016,Graph_from_iRatiopass_cat4_2016_fit_s_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetMinimum(-2.968291);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetMaximum(7.318644);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_fit_s3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_s_copy__64 = new TH1F("iOneWithErrorspass_cat4_2016_fit_s_copy__64","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMinimum(-5);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMaximum(8.192099);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetEntries(184);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_s_copy__64->Draw("sameaxis");
   p22pass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
   cpass_cat4_2016_fit_s->Modified();
   cpass_cat4_2016_fit_s->cd();
   cpass_cat4_2016_fit_s->SetSelected(cpass_cat4_2016_fit_s);
}
