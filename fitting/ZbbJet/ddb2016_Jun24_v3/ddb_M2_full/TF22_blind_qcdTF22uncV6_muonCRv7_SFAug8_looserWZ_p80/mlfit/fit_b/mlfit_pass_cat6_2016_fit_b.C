void mlfit_pass_cat6_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_b/cpass_cat6_2016_fit_b
//=========  (Wed Sep  4 11:54:18 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat6_2016_fit_b = new TCanvas("cpass_cat6_2016_fit_b", "cpass_cat6_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat6_2016_fit_b->SetHighLightColor(2);
   cpass_cat6_2016_fit_b->Range(0,0,1,1);
   cpass_cat6_2016_fit_b->SetFillColor(0);
   cpass_cat6_2016_fit_b->SetBorderMode(0);
   cpass_cat6_2016_fit_b->SetBorderSize(2);
   cpass_cat6_2016_fit_b->SetTickx(1);
   cpass_cat6_2016_fit_b->SetTicky(1);
   cpass_cat6_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat6_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat6_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat6_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat6_2016_fit_b
   TPad *p12pass_cat6_2016_fit_b = new TPad("p12pass_cat6_2016_fit_b", "p12pass_cat6_2016_fit_b",0,0.3,1,1);
   p12pass_cat6_2016_fit_b->Draw();
   p12pass_cat6_2016_fit_b->cd();
   p12pass_cat6_2016_fit_b->Range(13.7027,-5.751008,221.8108,281.7994);
   p12pass_cat6_2016_fit_b->SetFillColor(0);
   p12pass_cat6_2016_fit_b->SetBorderMode(0);
   p12pass_cat6_2016_fit_b->SetBorderSize(2);
   p12pass_cat6_2016_fit_b->SetTickx(1);
   p12pass_cat6_2016_fit_b->SetTicky(1);
   p12pass_cat6_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat6_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat6_2016_fit_b__89 = new TH1F("htotpass_cat6_2016_fit_b__89","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b__89->SetBinContent(1,1.583928e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(2,138.1156);
   htotpass_cat6_2016_fit_b__89->SetBinContent(3,145.0169);
   htotpass_cat6_2016_fit_b__89->SetBinContent(4,146.783);
   htotpass_cat6_2016_fit_b__89->SetBinContent(5,147.9701);
   htotpass_cat6_2016_fit_b__89->SetBinContent(6,164.3778);
   htotpass_cat6_2016_fit_b__89->SetBinContent(7,168.6962);
   htotpass_cat6_2016_fit_b__89->SetBinContent(8,166.4156);
   htotpass_cat6_2016_fit_b__89->SetBinContent(9,148.6538);
   htotpass_cat6_2016_fit_b__89->SetBinContent(10,122.7203);
   htotpass_cat6_2016_fit_b__89->SetBinContent(11,1.583928e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(12,1.583928e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(13,1.583928e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(14,83.33968);
   htotpass_cat6_2016_fit_b__89->SetBinContent(15,77.99456);
   htotpass_cat6_2016_fit_b__89->SetBinContent(16,75.60559);
   htotpass_cat6_2016_fit_b__89->SetBinContent(17,66.81181);
   htotpass_cat6_2016_fit_b__89->SetBinContent(18,62.6312);
   htotpass_cat6_2016_fit_b__89->SetBinContent(19,61.45813);
   htotpass_cat6_2016_fit_b__89->SetBinContent(20,56.35987);
   htotpass_cat6_2016_fit_b__89->SetBinContent(21,51.73354);
   htotpass_cat6_2016_fit_b__89->SetBinContent(22,47.94331);
   htotpass_cat6_2016_fit_b__89->SetBinContent(23,46.03831);
   htotpass_cat6_2016_fit_b__89->SetMinimum(0);
   htotpass_cat6_2016_fit_b__89->SetMaximum(253.0443);
   htotpass_cat6_2016_fit_b__89->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__89->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__89->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__89->SetLineColor(ci);
   htotpass_cat6_2016_fit_b__89->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b__89->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b__89->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b__89->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b__89->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__89->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__89->Draw("");
   
   TH1F *htot_linepass_cat6_2016_fit_b__90 = new TH1F("htot_linepass_cat6_2016_fit_b__90","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(1,1.583928e-06);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(2,138.1156);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(3,145.0169);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(4,146.783);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(5,147.9701);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(6,164.3778);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(7,168.6962);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(8,166.4156);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(9,148.6538);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(10,122.7203);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(11,1.583928e-06);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(12,1.583928e-06);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(13,1.583928e-06);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(14,83.33968);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(15,77.99456);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(16,75.60559);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(17,66.81181);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(18,62.6312);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(19,61.45813);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(20,56.35987);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(21,51.73354);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(22,47.94331);
   htot_linepass_cat6_2016_fit_b__90->SetBinContent(23,46.03831);
   htot_linepass_cat6_2016_fit_b__90->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_b__90->SetFillColor(ci);
   htot_linepass_cat6_2016_fit_b__90->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_b__90->SetLineColor(ci);
   htot_linepass_cat6_2016_fit_b__90->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_fit_b__90->SetMarkerColor(ci);
   htot_linepass_cat6_2016_fit_b__90->SetMarkerSize(0);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_fit_b__90->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_b__90->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_b__90->Draw("histsame");
   
   TH1F *qcd__91 = new TH1F("qcd__91","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__91->SetBinContent(2,138.1156);
   qcd__91->SetBinContent(3,142.341);
   qcd__91->SetBinContent(4,137.818);
   qcd__91->SetBinContent(5,132.3019);
   qcd__91->SetBinContent(6,126.8421);
   qcd__91->SetBinContent(7,114.4489);
   qcd__91->SetBinContent(8,104.5754);
   qcd__91->SetBinContent(9,96.86427);
   qcd__91->SetBinContent(10,93.08102);
   qcd__91->SetBinContent(14,72.4649);
   qcd__91->SetBinContent(15,68.60364);
   qcd__91->SetBinContent(16,64.65347);
   qcd__91->SetBinContent(17,63.27953);
   qcd__91->SetBinContent(18,60.04081);
   qcd__91->SetBinContent(19,57.7028);
   qcd__91->SetBinContent(20,52.80318);
   qcd__91->SetBinContent(21,50.78429);
   qcd__91->SetBinContent(22,47.94331);
   qcd__91->SetBinContent(23,45.18987);
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
   
   TH1F *htotpass_cat6_2016_fit_b__92 = new TH1F("htotpass_cat6_2016_fit_b__92","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b__92->SetBinContent(1,1.583928e-06);
   htotpass_cat6_2016_fit_b__92->SetBinContent(2,138.1156);
   htotpass_cat6_2016_fit_b__92->SetBinContent(3,145.0169);
   htotpass_cat6_2016_fit_b__92->SetBinContent(4,146.783);
   htotpass_cat6_2016_fit_b__92->SetBinContent(5,147.9701);
   htotpass_cat6_2016_fit_b__92->SetBinContent(6,164.3778);
   htotpass_cat6_2016_fit_b__92->SetBinContent(7,168.6962);
   htotpass_cat6_2016_fit_b__92->SetBinContent(8,166.4156);
   htotpass_cat6_2016_fit_b__92->SetBinContent(9,148.6538);
   htotpass_cat6_2016_fit_b__92->SetBinContent(10,122.7203);
   htotpass_cat6_2016_fit_b__92->SetBinContent(11,1.583928e-06);
   htotpass_cat6_2016_fit_b__92->SetBinContent(12,1.583928e-06);
   htotpass_cat6_2016_fit_b__92->SetBinContent(13,1.583928e-06);
   htotpass_cat6_2016_fit_b__92->SetBinContent(14,83.33968);
   htotpass_cat6_2016_fit_b__92->SetBinContent(15,77.99456);
   htotpass_cat6_2016_fit_b__92->SetBinContent(16,75.60559);
   htotpass_cat6_2016_fit_b__92->SetBinContent(17,66.81181);
   htotpass_cat6_2016_fit_b__92->SetBinContent(18,62.6312);
   htotpass_cat6_2016_fit_b__92->SetBinContent(19,61.45813);
   htotpass_cat6_2016_fit_b__92->SetBinContent(20,56.35987);
   htotpass_cat6_2016_fit_b__92->SetBinContent(21,51.73354);
   htotpass_cat6_2016_fit_b__92->SetBinContent(22,47.94331);
   htotpass_cat6_2016_fit_b__92->SetBinContent(23,46.03831);
   htotpass_cat6_2016_fit_b__92->SetMinimum(0);
   htotpass_cat6_2016_fit_b__92->SetMaximum(253.0443);
   htotpass_cat6_2016_fit_b__92->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__92->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__92->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__92->SetLineColor(ci);
   htotpass_cat6_2016_fit_b__92->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b__92->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b__92->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b__92->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b__92->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b__92->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b__92->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis23[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_23 = new TH1F("hstackMC_stack_23","hstackMC",23, xAxis23);
   hstackMC_stack_23->SetMinimum(0);
   hstackMC_stack_23->SetMaximum(64.93228);
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
   tqq_stack_1->SetBinContent(3,0.8771585);
   tqq_stack_1->SetBinContent(4,1.697214);
   tqq_stack_1->SetBinContent(5,3.609008);
   tqq_stack_1->SetBinContent(6,7.657047);
   tqq_stack_1->SetBinContent(7,13.50159);
   tqq_stack_1->SetBinContent(8,8.120453);
   tqq_stack_1->SetBinContent(9,5.063185);
   tqq_stack_1->SetBinContent(10,2.561326);
   tqq_stack_1->SetBinContent(14,7.435026);
   tqq_stack_1->SetBinContent(15,6.6735);
   tqq_stack_1->SetBinContent(16,10.10802);
   tqq_stack_1->SetBinContent(17,3.532278);
   tqq_stack_1->SetBinContent(18,2.590389);
   tqq_stack_1->SetBinContent(19,3.75533);
   tqq_stack_1->SetBinContent(20,3.556693);
   tqq_stack_1->SetBinContent(21,0.9492469);
   tqq_stack_1->SetBinContent(23,0.848435);
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
   wqq_stack_2->SetBinContent(1,7.285997e-07);
   wqq_stack_2->SetBinContent(2,7.285997e-07);
   wqq_stack_2->SetBinContent(3,0.9125185);
   wqq_stack_2->SetBinContent(4,6.01226);
   wqq_stack_2->SetBinContent(5,10.2876);
   wqq_stack_2->SetBinContent(6,18.93709);
   wqq_stack_2->SetBinContent(7,26.17096);
   wqq_stack_2->SetBinContent(8,25.00969);
   wqq_stack_2->SetBinContent(9,14.55432);
   wqq_stack_2->SetBinContent(10,2.201245);
   wqq_stack_2->SetBinContent(11,7.285997e-07);
   wqq_stack_2->SetBinContent(12,7.285997e-07);
   wqq_stack_2->SetBinContent(13,7.285997e-07);
   wqq_stack_2->SetBinContent(14,7.285997e-07);
   wqq_stack_2->SetBinContent(15,7.285997e-07);
   wqq_stack_2->SetBinContent(16,7.285997e-07);
   wqq_stack_2->SetBinContent(17,7.285997e-07);
   wqq_stack_2->SetBinContent(18,7.285997e-07);
   wqq_stack_2->SetBinContent(19,7.285997e-07);
   wqq_stack_2->SetBinContent(20,7.285997e-07);
   wqq_stack_2->SetBinContent(21,7.285997e-07);
   wqq_stack_2->SetBinContent(22,7.285997e-07);
   wqq_stack_2->SetBinContent(23,7.285997e-07);
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
   zqq_stack_3->SetBinContent(1,8.553283e-07);
   zqq_stack_3->SetBinContent(2,8.553283e-07);
   zqq_stack_3->SetBinContent(3,0.8861997);
   zqq_stack_3->SetBinContent(4,1.25549);
   zqq_stack_3->SetBinContent(5,1.771608);
   zqq_stack_3->SetBinContent(6,10.9415);
   zqq_stack_3->SetBinContent(7,14.57482);
   zqq_stack_3->SetBinContent(8,28.71012);
   zqq_stack_3->SetBinContent(9,32.17202);
   zqq_stack_3->SetBinContent(10,24.87673);
   zqq_stack_3->SetBinContent(11,8.553283e-07);
   zqq_stack_3->SetBinContent(12,8.553283e-07);
   zqq_stack_3->SetBinContent(13,8.553283e-07);
   zqq_stack_3->SetBinContent(14,3.439749);
   zqq_stack_3->SetBinContent(15,2.717422);
   zqq_stack_3->SetBinContent(16,0.8441002);
   zqq_stack_3->SetBinContent(17,8.553283e-07);
   zqq_stack_3->SetBinContent(18,8.553283e-07);
   zqq_stack_3->SetBinContent(19,8.553283e-07);
   zqq_stack_3->SetBinContent(20,8.553283e-07);
   zqq_stack_3->SetBinContent(21,8.553283e-07);
   zqq_stack_3->SetBinContent(22,8.553283e-07);
   zqq_stack_3->SetBinContent(23,8.553283e-07);
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
   
   TH1F *hsigpass_cat6_2016_fit_b_stack_4 = new TH1F("hsigpass_cat6_2016_fit_b_stack_4","hqq125 in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_fit_b_stack_4->SetEntries(92);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat6_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat6_2016_fit_b_stack_4,"");
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
   entry=leg->AddEntry("htotpass_cat6_2016_fit_b","Total background","lf");

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
   
   TH1F *htotpass_cat6_2016_fit_b_copy__93 = new TH1F("htotpass_cat6_2016_fit_b_copy__93","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(1,1.583928e-06);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(2,138.1156);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(3,145.0169);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(4,146.783);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(5,147.9701);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(6,164.3778);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(7,168.6962);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(8,166.4156);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(9,148.6538);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(10,122.7203);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(11,1.583928e-06);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(12,1.583928e-06);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(13,1.583928e-06);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(14,83.33968);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(15,77.99456);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(16,75.60559);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(17,66.81181);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(18,62.6312);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(19,61.45813);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(20,56.35987);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(21,51.73354);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(22,47.94331);
   htotpass_cat6_2016_fit_b_copy__93->SetBinContent(23,46.03831);
   htotpass_cat6_2016_fit_b_copy__93->SetMaximum(253.0443);
   htotpass_cat6_2016_fit_b_copy__93->SetEntries(92);
   htotpass_cat6_2016_fit_b_copy__93->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__93->SetFillColor(ci);
   htotpass_cat6_2016_fit_b_copy__93->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__93->SetLineColor(ci);
   htotpass_cat6_2016_fit_b_copy__93->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b_copy__93->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b_copy__93->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b_copy__93->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b_copy__93->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__93->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__93->Draw("sameaxis");
   p12pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_b
   TPad *p22pass_cat6_2016_fit_b = new TPad("p22pass_cat6_2016_fit_b", "p22pass_cat6_2016_fit_b",0,0,1,0.3);
   p22pass_cat6_2016_fit_b->Draw();
   p22pass_cat6_2016_fit_b->cd();
   p22pass_cat6_2016_fit_b->Range(13.7027,-9.96737,221.8108,6.590529);
   p22pass_cat6_2016_fit_b->SetFillColor(0);
   p22pass_cat6_2016_fit_b->SetBorderMode(0);
   p22pass_cat6_2016_fit_b->SetBorderSize(2);
   p22pass_cat6_2016_fit_b->SetTickx(1);
   p22pass_cat6_2016_fit_b->SetTicky(1);
   p22pass_cat6_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat6_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat6_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat6_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b__94 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b__94","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMaximum(5.762634);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__94->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__94->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_24 = new TH1F("hstack_stack_24","hstack",23,40,201);
   hstack_stack_24->SetMinimum(0);
   hstack_stack_24->SetMaximum(4.565036);
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
   
   
   TH1F *sigHistResidualwqqpass_cat6_2016_fit_b_stack_1 = new TH1F("sigHistResidualwqqpass_cat6_2016_fit_b_stack_1","wqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(2,6.349567e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(3,0.07337293);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(4,0.5142797);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(5,0.8523669);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(6,1.43285);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(7,1.931064);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(8,2.024085);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(9,1.227126);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(10,0.1955826);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(14,8.375913e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(15,8.162925e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(16,8.488855e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(17,8.991102e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(18,1.044413e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(19,8.431817e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(20,9.131237e-08);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(21,1.044413e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(22,1.115438e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetBinContent(23,1.142539e-07);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat6_2016_fit_b_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat6_2016_fit_b_stack_2 = new TH1F("sigHistResidualzqqpass_cat6_2016_fit_b_stack_2","zqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(2,7.453975e-08);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(3,0.07125672);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(4,0.1073928);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(5,0.1467845);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(6,0.827874);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(7,1.075426);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(8,2.323569);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(9,2.712537);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(10,2.210321);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(14,0.3954302);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(15,0.3044485);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(16,0.09834541);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(17,1.055496e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(18,1.226073e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(19,9.8984e-08);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(20,1.071947e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(21,1.226073e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(22,1.309451e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetBinContent(23,1.341266e-07);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_b_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat6_2016_fit_b_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3","hqq125 in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_b__95 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_b__95","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fx3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fy3024[23] = {
   0,
   -0.5329635,
   0.8742175,
   -0.2151475,
   0.7695189,
   2.841311,
   3.841756,
   3.008543,
   3.028243,
   2.549549,
   0,
   0,
   0,
   -0.4483317,
   0.4731484,
   -0.08872055,
   -0.1001788,
   -1.953967,
   1.396217,
   0.8449712,
   -0.3918388,
   -0.7567886,
   -0.7900715};
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_felx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fely3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fehx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_b_fehy3024[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_b_fx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fy3024,Graph_from_iRatiopass_cat6_2016_fit_b_felx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fehx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fely3024,Graph_from_iRatiopass_cat6_2016_fit_b_fehy3024);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMinimum(-3.73354);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMaximum(5.621329);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b_copy__96 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b_copy__96","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMaximum(5.762634);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->Draw("sameaxis");
   p22pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
   cpass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
   cpass_cat6_2016_fit_b->SetSelected(cpass_cat6_2016_fit_b);
}
