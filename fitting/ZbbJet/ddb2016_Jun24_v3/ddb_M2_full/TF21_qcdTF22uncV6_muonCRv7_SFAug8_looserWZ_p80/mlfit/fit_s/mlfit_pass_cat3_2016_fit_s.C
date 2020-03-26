void mlfit_pass_cat3_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat3_2016_fit_s/cpass_cat3_2016_fit_s
//=========  (Wed Oct  9 22:43:08 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_fit_s = new TCanvas("cpass_cat3_2016_fit_s", "cpass_cat3_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_fit_s->SetHighLightColor(2);
   cpass_cat3_2016_fit_s->Range(0,0,1,1);
   cpass_cat3_2016_fit_s->SetFillColor(0);
   cpass_cat3_2016_fit_s->SetBorderMode(0);
   cpass_cat3_2016_fit_s->SetBorderSize(2);
   cpass_cat3_2016_fit_s->SetTickx(1);
   cpass_cat3_2016_fit_s->SetTicky(1);
   cpass_cat3_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat3_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat3_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat3_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_fit_s
   TPad *p12pass_cat3_2016_fit_s = new TPad("p12pass_cat3_2016_fit_s", "p12pass_cat3_2016_fit_s",0,0.3,1,1);
   p12pass_cat3_2016_fit_s->Draw();
   p12pass_cat3_2016_fit_s->cd();
   p12pass_cat3_2016_fit_s->Range(13.7027,-24.28646,221.8108,1190.036);
   p12pass_cat3_2016_fit_s->SetFillColor(0);
   p12pass_cat3_2016_fit_s->SetBorderMode(0);
   p12pass_cat3_2016_fit_s->SetBorderSize(2);
   p12pass_cat3_2016_fit_s->SetTickx(1);
   p12pass_cat3_2016_fit_s->SetTicky(1);
   p12pass_cat3_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat3_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_fit_s__41 = new TH1F("htotpass_cat3_2016_fit_s__41","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s__41->SetBinContent(1,4.01906e-06);
   htotpass_cat3_2016_fit_s__41->SetBinContent(2,612.0523);
   htotpass_cat3_2016_fit_s__41->SetBinContent(3,642.2092);
   htotpass_cat3_2016_fit_s__41->SetBinContent(4,648.3151);
   htotpass_cat3_2016_fit_s__41->SetBinContent(5,652.5805);
   htotpass_cat3_2016_fit_s__41->SetBinContent(6,692.4438);
   htotpass_cat3_2016_fit_s__41->SetBinContent(7,712.4028);
   htotpass_cat3_2016_fit_s__41->SetBinContent(8,676.8344);
   htotpass_cat3_2016_fit_s__41->SetBinContent(9,614.5973);
   htotpass_cat3_2016_fit_s__41->SetBinContent(10,540.0873);
   htotpass_cat3_2016_fit_s__41->SetBinContent(11,482.0674);
   htotpass_cat3_2016_fit_s__41->SetBinContent(12,454.2563);
   htotpass_cat3_2016_fit_s__41->SetBinContent(13,426.5384);
   htotpass_cat3_2016_fit_s__41->SetBinContent(14,388.5416);
   htotpass_cat3_2016_fit_s__41->SetBinContent(15,358.1674);
   htotpass_cat3_2016_fit_s__41->SetBinContent(16,316.1305);
   htotpass_cat3_2016_fit_s__41->SetBinContent(17,275.7958);
   htotpass_cat3_2016_fit_s__41->SetBinContent(18,239.0797);
   htotpass_cat3_2016_fit_s__41->SetBinContent(19,198.3188);
   htotpass_cat3_2016_fit_s__41->SetBinContent(20,167.8565);
   htotpass_cat3_2016_fit_s__41->SetBinContent(21,133.1559);
   htotpass_cat3_2016_fit_s__41->SetBinContent(22,101.7428);
   htotpass_cat3_2016_fit_s__41->SetBinContent(23,77.87121);
   htotpass_cat3_2016_fit_s__41->SetBinError(1,4.119882e-07);
   htotpass_cat3_2016_fit_s__41->SetBinError(2,8.481351);
   htotpass_cat3_2016_fit_s__41->SetBinError(3,7.167473);
   htotpass_cat3_2016_fit_s__41->SetBinError(4,7.874112);
   htotpass_cat3_2016_fit_s__41->SetBinError(5,10.07616);
   htotpass_cat3_2016_fit_s__41->SetBinError(6,14.87502);
   htotpass_cat3_2016_fit_s__41->SetBinError(7,18.84075);
   htotpass_cat3_2016_fit_s__41->SetBinError(8,18.45167);
   htotpass_cat3_2016_fit_s__41->SetBinError(9,13.79487);
   htotpass_cat3_2016_fit_s__41->SetBinError(10,12.61205);
   htotpass_cat3_2016_fit_s__41->SetBinError(11,6.856129);
   htotpass_cat3_2016_fit_s__41->SetBinError(12,6.448345);
   htotpass_cat3_2016_fit_s__41->SetBinError(13,5.708895);
   htotpass_cat3_2016_fit_s__41->SetBinError(14,5.082054);
   htotpass_cat3_2016_fit_s__41->SetBinError(15,4.835945);
   htotpass_cat3_2016_fit_s__41->SetBinError(16,4.138727);
   htotpass_cat3_2016_fit_s__41->SetBinError(17,3.848525);
   htotpass_cat3_2016_fit_s__41->SetBinError(18,3.478843);
   htotpass_cat3_2016_fit_s__41->SetBinError(19,3.081898);
   htotpass_cat3_2016_fit_s__41->SetBinError(20,2.967855);
   htotpass_cat3_2016_fit_s__41->SetBinError(21,2.616711);
   htotpass_cat3_2016_fit_s__41->SetBinError(22,2.651756);
   htotpass_cat3_2016_fit_s__41->SetBinError(23,2.685414);
   htotpass_cat3_2016_fit_s__41->SetMinimum(0);
   htotpass_cat3_2016_fit_s__41->SetMaximum(1068.604);
   htotpass_cat3_2016_fit_s__41->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__41->SetFillColor(ci);
   htotpass_cat3_2016_fit_s__41->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s__41->SetLineColor(ci);
   htotpass_cat3_2016_fit_s__41->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s__41->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s__41->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s__41->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s__41->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s__41->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s__41->Draw("hist");
   
   TH1F *qcd__42 = new TH1F("qcd__42","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__42->SetBinContent(2,606.869);
   qcd__42->SetBinContent(3,632.8281);
   qcd__42->SetBinContent(4,628.726);
   qcd__42->SetBinContent(5,608.1015);
   qcd__42->SetBinContent(6,582.1705);
   qcd__42->SetBinContent(7,560.2023);
   qcd__42->SetBinContent(8,532.3684);
   qcd__42->SetBinContent(9,502.2065);
   qcd__42->SetBinContent(10,482.636);
   qcd__42->SetBinContent(11,458.6202);
   qcd__42->SetBinContent(12,430.1047);
   qcd__42->SetBinContent(13,408.2052);
   qcd__42->SetBinContent(14,376.8771);
   qcd__42->SetBinContent(15,349.7272);
   qcd__42->SetBinContent(16,310.3683);
   qcd__42->SetBinContent(17,270.5739);
   qcd__42->SetBinContent(18,234.4942);
   qcd__42->SetBinContent(19,196.1993);
   qcd__42->SetBinContent(20,165.8224);
   qcd__42->SetBinContent(21,131.7632);
   qcd__42->SetBinContent(22,101.4103);
   qcd__42->SetBinContent(23,77.53873);
   qcd__42->SetBinError(2,8.447827);
   qcd__42->SetBinError(3,7.090962);
   qcd__42->SetBinError(4,7.205516);
   qcd__42->SetBinError(5,8.09427);
   qcd__42->SetBinError(6,9.187608);
   qcd__42->SetBinError(7,9.454783);
   qcd__42->SetBinError(8,8.687992);
   qcd__42->SetBinError(9,8.084198);
   qcd__42->SetBinError(10,6.9257);
   qcd__42->SetBinError(11,6.407244);
   qcd__42->SetBinError(12,5.721041);
   qcd__42->SetBinError(13,5.127996);
   qcd__42->SetBinError(14,4.793714);
   qcd__42->SetBinError(15,4.6709);
   qcd__42->SetBinError(16,4.049412);
   qcd__42->SetBinError(17,3.769687);
   qcd__42->SetBinError(18,3.411628);
   qcd__42->SetBinError(19,3.065803);
   qcd__42->SetBinError(20,2.952461);
   qcd__42->SetBinError(21,2.608535);
   qcd__42->SetBinError(22,2.651297);
   qcd__42->SetBinError(23,2.684961);
   qcd__42->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__42->SetLineColor(ci);
   qcd__42->SetLineStyle(2);
   qcd__42->SetLineWidth(2);
   qcd__42->GetXaxis()->SetTitle("x");
   qcd__42->GetXaxis()->SetLabelFont(42);
   qcd__42->GetXaxis()->SetLabelSize(0.035);
   qcd__42->GetXaxis()->SetTitleSize(0.035);
   qcd__42->GetXaxis()->SetTitleFont(42);
   qcd__42->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__42->GetYaxis()->SetLabelFont(42);
   qcd__42->GetYaxis()->SetLabelSize(0.035);
   qcd__42->GetYaxis()->SetTitleSize(0.035);
   qcd__42->GetYaxis()->SetTitleOffset(0);
   qcd__42->GetYaxis()->SetTitleFont(42);
   qcd__42->GetZaxis()->SetLabelFont(42);
   qcd__42->GetZaxis()->SetLabelSize(0.035);
   qcd__42->GetZaxis()->SetTitleSize(0.035);
   qcd__42->GetZaxis()->SetTitleFont(42);
   qcd__42->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016_cat3__43 = new TH1D("bkgUncBand_pass_2016_cat3__43","bkgUncBand_pass_2016_cat3",23,40,201);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(1,3.719677e-06);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(2,609.2529);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(3,643.0867);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(4,650.7959);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(5,655.141);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(6,693.7107);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(7,713.995);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(8,680.0595);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(9,618.8979);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(10,543.4878);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(11,489.5307);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(12,461.1715);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(13,433.2799);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(14,394.1148);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(15,362.5711);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(16,319.4542);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(17,278.5943);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(18,241.0563);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(19,199.1845);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(20,168.4099);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(21,133.4116);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(22,101.5582);
   bkgUncBand_pass_2016_cat3__43->SetBinContent(23,77.30652);
   bkgUncBand_pass_2016_cat3__43->SetBinError(1,4.603792e-07);
   bkgUncBand_pass_2016_cat3__43->SetBinError(2,7.520795);
   bkgUncBand_pass_2016_cat3__43->SetBinError(3,6.725902);
   bkgUncBand_pass_2016_cat3__43->SetBinError(4,6.863144);
   bkgUncBand_pass_2016_cat3__43->SetBinError(5,6.936926);
   bkgUncBand_pass_2016_cat3__43->SetBinError(6,10.06524);
   bkgUncBand_pass_2016_cat3__43->SetBinError(7,10.11273);
   bkgUncBand_pass_2016_cat3__43->SetBinError(8,10.00423);
   bkgUncBand_pass_2016_cat3__43->SetBinError(9,8.529361);
   bkgUncBand_pass_2016_cat3__43->SetBinError(10,9.446179);
   bkgUncBand_pass_2016_cat3__43->SetBinError(11,6.328126);
   bkgUncBand_pass_2016_cat3__43->SetBinError(12,5.642721);
   bkgUncBand_pass_2016_cat3__43->SetBinError(13,5.063864);
   bkgUncBand_pass_2016_cat3__43->SetBinError(14,4.383783);
   bkgUncBand_pass_2016_cat3__43->SetBinError(15,4.398894);
   bkgUncBand_pass_2016_cat3__43->SetBinError(16,4.025582);
   bkgUncBand_pass_2016_cat3__43->SetBinError(17,3.577282);
   bkgUncBand_pass_2016_cat3__43->SetBinError(18,3.321766);
   bkgUncBand_pass_2016_cat3__43->SetBinError(19,3.630787);
   bkgUncBand_pass_2016_cat3__43->SetBinError(20,2.993925);
   bkgUncBand_pass_2016_cat3__43->SetBinError(21,3.044299);
   bkgUncBand_pass_2016_cat3__43->SetBinError(22,2.725301);
   bkgUncBand_pass_2016_cat3__43->SetBinError(23,3.005811);
   bkgUncBand_pass_2016_cat3__43->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016_cat3__43->SetFillColor(ci);
   bkgUncBand_pass_2016_cat3__43->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016_cat3__43->SetLineColor(ci);
   bkgUncBand_pass_2016_cat3__43->SetLineStyle(0);
   bkgUncBand_pass_2016_cat3__43->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016_cat3__43->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat3__43->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat3__43->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat3__43->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat3__43->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016_cat3__43->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat3__43->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat3__43->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat3__43->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016_cat3__43->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat3__43->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat3__43->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat3__43->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat3__43->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat3__43->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis11[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_11 = new TH1F("hstackMC_stack_11","hstackMC",23, xAxis11);
   hstackMC_stack_11->SetMinimum(0);
   hstackMC_stack_11->SetMaximum(162.1532);
   hstackMC_stack_11->SetDirectory(0);
   hstackMC_stack_11->SetStats(0);
   hstackMC_stack_11->SetLineStyle(0);
   hstackMC_stack_11->SetMarkerStyle(20);
   hstackMC_stack_11->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_11->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_11->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_11->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_11->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_11->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_11->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_11->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_11->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_11->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_11->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_11->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_11->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_11->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_11->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_11->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_11->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_11);
   
   Double_t xAxis12[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat3_2016_pass_cat3",23, xAxis12);
   tqq_stack_1->SetBinContent(2,3.680063);
   tqq_stack_1->SetBinContent(3,4.200015);
   tqq_stack_1->SetBinContent(4,6.602047);
   tqq_stack_1->SetBinContent(5,7.296016);
   tqq_stack_1->SetBinContent(6,14.43072);
   tqq_stack_1->SetBinContent(7,16.98738);
   tqq_stack_1->SetBinContent(8,13.90561);
   tqq_stack_1->SetBinContent(9,15.88698);
   tqq_stack_1->SetBinContent(10,13.27882);
   tqq_stack_1->SetBinContent(11,15.36826);
   tqq_stack_1->SetBinContent(12,19.63367);
   tqq_stack_1->SetBinContent(13,16.51912);
   tqq_stack_1->SetBinContent(14,11.07053);
   tqq_stack_1->SetBinContent(15,8.440203);
   tqq_stack_1->SetBinContent(16,5.762223);
   tqq_stack_1->SetBinContent(17,5.221882);
   tqq_stack_1->SetBinContent(18,4.585546);
   tqq_stack_1->SetBinContent(19,2.119483);
   tqq_stack_1->SetBinContent(20,2.034084);
   tqq_stack_1->SetBinContent(21,1.392719);
   tqq_stack_1->SetBinContent(22,0.3324693);
   tqq_stack_1->SetBinContent(23,0.3324693);
   tqq_stack_1->SetBinError(2,0.5461622);
   tqq_stack_1->SetBinError(3,0.6233291);
   tqq_stack_1->SetBinError(4,0.9798172);
   tqq_stack_1->SetBinError(5,1.08281);
   tqq_stack_1->SetBinError(6,2.141679);
   tqq_stack_1->SetBinError(7,2.521116);
   tqq_stack_1->SetBinError(8,2.063746);
   tqq_stack_1->SetBinError(9,2.357804);
   tqq_stack_1->SetBinError(10,1.970725);
   tqq_stack_1->SetBinError(11,2.28082);
   tqq_stack_1->SetBinError(12,2.913855);
   tqq_stack_1->SetBinError(13,2.451621);
   tqq_stack_1->SetBinError(14,1.642991);
   tqq_stack_1->SetBinError(15,1.25262);
   tqq_stack_1->SetBinError(16,0.855178);
   tqq_stack_1->SetBinError(17,0.7749854);
   tqq_stack_1->SetBinError(18,0.680546);
   tqq_stack_1->SetBinError(19,0.3145549);
   tqq_stack_1->SetBinError(20,0.3018807);
   tqq_stack_1->SetBinError(21,0.206695);
   tqq_stack_1->SetBinError(22,0.04934215);
   tqq_stack_1->SetBinError(23,0.04934215);
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
   
   TH1F *wqq_stack_2 = new TH1F("wqq_stack_2","wqq in cat3_2016_pass_cat3",23,40,201);
   wqq_stack_2->SetBinContent(1,1.69494e-06);
   wqq_stack_2->SetBinContent(2,1.071509);
   wqq_stack_2->SetBinContent(3,3.444288);
   wqq_stack_2->SetBinContent(4,11.07845);
   wqq_stack_2->SetBinContent(5,25.61709);
   wqq_stack_2->SetBinContent(6,63.73829);
   wqq_stack_2->SetBinContent(7,79.87993);
   wqq_stack_2->SetBinContent(8,32.39646);
   wqq_stack_2->SetBinContent(9,14.59403);
   wqq_stack_2->SetBinContent(10,6.42513);
   wqq_stack_2->SetBinContent(11,2.337465);
   wqq_stack_2->SetBinContent(12,1.004522);
   wqq_stack_2->SetBinContent(13,0.5471032);
   wqq_stack_2->SetBinContent(14,1.69494e-06);
   wqq_stack_2->SetBinContent(15,1.69494e-06);
   wqq_stack_2->SetBinContent(16,1.69494e-06);
   wqq_stack_2->SetBinContent(17,1.69494e-06);
   wqq_stack_2->SetBinContent(18,1.69494e-06);
   wqq_stack_2->SetBinContent(19,1.69494e-06);
   wqq_stack_2->SetBinContent(20,1.69494e-06);
   wqq_stack_2->SetBinContent(21,1.69494e-06);
   wqq_stack_2->SetBinContent(22,1.69494e-06);
   wqq_stack_2->SetBinContent(23,1.69494e-06);
   wqq_stack_2->SetBinError(1,2.713378e-07);
   wqq_stack_2->SetBinError(2,0.4657361);
   wqq_stack_2->SetBinError(3,0.6562666);
   wqq_stack_2->SetBinError(4,2.969115);
   wqq_stack_2->SetBinError(5,4.424749);
   wqq_stack_2->SetBinError(6,9.848182);
   wqq_stack_2->SetBinError(7,13.16563);
   wqq_stack_2->SetBinError(8,8.404496);
   wqq_stack_2->SetBinError(9,2.755866);
   wqq_stack_2->SetBinError(10,1.639097);
   wqq_stack_2->SetBinError(11,0.4101157);
   wqq_stack_2->SetBinError(12,0.3650839);
   wqq_stack_2->SetBinError(13,0.3394121);
   wqq_stack_2->SetBinError(14,2.713378e-07);
   wqq_stack_2->SetBinError(15,2.713378e-07);
   wqq_stack_2->SetBinError(16,2.713378e-07);
   wqq_stack_2->SetBinError(17,2.713378e-07);
   wqq_stack_2->SetBinError(18,2.713378e-07);
   wqq_stack_2->SetBinError(19,2.713378e-07);
   wqq_stack_2->SetBinError(20,2.713378e-07);
   wqq_stack_2->SetBinError(21,2.713378e-07);
   wqq_stack_2->SetBinError(22,2.713378e-07);
   wqq_stack_2->SetBinError(23,2.713378e-07);
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
   
   TH1F *zqq_stack_3 = new TH1F("zqq_stack_3","zqq in cat3_2016_pass_cat3",23,40,201);
   zqq_stack_3->SetBinContent(1,2.324121e-06);
   zqq_stack_3->SetBinContent(2,0.4317134);
   zqq_stack_3->SetBinContent(3,1.736778);
   zqq_stack_3->SetBinContent(4,1.908606);
   zqq_stack_3->SetBinContent(5,11.5659);
   zqq_stack_3->SetBinContent(6,32.10439);
   zqq_stack_3->SetBinContent(7,55.33314);
   zqq_stack_3->SetBinContent(8,98.16384);
   zqq_stack_3->SetBinContent(9,81.90977);
   zqq_stack_3->SetBinContent(10,37.74731);
   zqq_stack_3->SetBinContent(11,5.741511);
   zqq_stack_3->SetBinContent(12,3.513375);
   zqq_stack_3->SetBinContent(13,1.266976);
   zqq_stack_3->SetBinContent(14,0.5939255);
   zqq_stack_3->SetBinContent(15,2.324121e-06);
   zqq_stack_3->SetBinContent(16,2.324121e-06);
   zqq_stack_3->SetBinContent(17,2.324121e-06);
   zqq_stack_3->SetBinContent(18,2.324121e-06);
   zqq_stack_3->SetBinContent(19,2.324121e-06);
   zqq_stack_3->SetBinContent(20,2.324121e-06);
   zqq_stack_3->SetBinContent(21,2.324121e-06);
   zqq_stack_3->SetBinContent(22,2.324121e-06);
   zqq_stack_3->SetBinContent(23,2.324121e-06);
   zqq_stack_3->SetBinError(1,3.100163e-07);
   zqq_stack_3->SetBinError(2,0.2287775);
   zqq_stack_3->SetBinError(3,0.5212507);
   zqq_stack_3->SetBinError(4,0.5536197);
   zqq_stack_3->SetBinError(5,3.906529);
   zqq_stack_3->SetBinError(6,5.939738);
   zqq_stack_3->SetBinError(7,9.267743);
   zqq_stack_3->SetBinError(8,13.78725);
   zqq_stack_3->SetBinError(9,10.57309);
   zqq_stack_3->SetBinError(10,10.2239);
   zqq_stack_3->SetBinError(11,0.7638044);
   zqq_stack_3->SetBinError(12,0.4764407);
   zqq_stack_3->SetBinError(13,0.4116864);
   zqq_stack_3->SetBinError(14,0.3849122);
   zqq_stack_3->SetBinError(15,3.100163e-07);
   zqq_stack_3->SetBinError(16,3.100163e-07);
   zqq_stack_3->SetBinError(17,3.100163e-07);
   zqq_stack_3->SetBinError(18,3.100163e-07);
   zqq_stack_3->SetBinError(19,3.100163e-07);
   zqq_stack_3->SetBinError(20,3.100163e-07);
   zqq_stack_3->SetBinError(21,3.100163e-07);
   zqq_stack_3->SetBinError(22,3.100163e-07);
   zqq_stack_3->SetBinError(23,3.100163e-07);
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
   
   TH1F *hsigpass_cat3_2016_fit_s_stack_4 = new TH1F("hsigpass_cat3_2016_fit_s_stack_4","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(1,7.457062e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(2,0.02739268);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(3,0.07695626);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(4,0.06549057);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(5,0.7317732);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(6,1.064816);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(7,2.231183);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(8,1.699351);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(9,3.8354);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(10,8.97096);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(11,15.35236);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(12,22.37446);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(13,20.81195);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(14,15.80542);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(15,10.11108);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(16,2.352587);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(17,0.5163707);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(18,0.2765404);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(19,0.09277694);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(20,0.03513692);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(21,0.06889587);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(22,0.005683322);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinContent(23,0.02288047);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(1,2.416451e-07);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(2,0.01218372);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(3,0.0342292);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(4,0.02244928);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(5,0.2302719);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(6,0.3166614);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(7,0.7219714);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(8,0.5167595);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(9,1.227572);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(10,3.387498);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(11,5.462556);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(12,7.611589);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(13,6.620854);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(14,5.110665);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(15,3.643492);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(16,0.7488841);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(17,0.208098);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(18,0.1328986);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(19,0.03586906);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(20,0.01316885);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(21,0.02942958);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(22,0.003746575);
   hsigpass_cat3_2016_fit_s_stack_4->SetBinError(23,0.01017672);
   hsigpass_cat3_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_fit_s_stack_4,"");
   hstackMC->Draw("hist sames");
   
   Double_t data_copy_fx3011[23] = {
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
   Double_t data_copy_fy3011[23] = {
   0,
   651,
   655,
   614,
   656,
   694,
   738,
   683,
   585,
   536,
   480,
   448,
   414,
   420,
   375,
   338,
   261,
   218,
   191,
   185,
   103,
   96,
   97};
   Double_t data_copy_felx3011[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3011[23] = {
   1.841055,
   26.52834,
   26.60657,
   25.79304,
   26.62609,
   27.35713,
   28.17904,
   27.14761,
   25.2011,
   24.1666,
   22.92462,
   22.18225,
   21.36384,
   21.51064,
   20.38258,
   19.40334,
   17.17651,
   15.78775,
   14.84473,
   14.62631,
   11.182,
   10.83224,
   10.88296};
   Double_t data_copy_fehx3011[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3011[23] = {
   0,
   25.5087,
   25.58699,
   24.77281,
   25.60652,
   26.3381,
   27.16059,
   26.12843,
   24.18038,
   23.14495,
   21.90174,
   21.15856,
   20.33921,
   20.48618,
   19.3567,
   18.37607,
   16.14548,
   14.75381,
   13.80846,
   13.58946,
   10.1326,
   9.781065,
   9.832053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3011,data_copy_fy3011,data_copy_felx3011,data_copy_fehx3011,data_copy_fely3011,data_copy_fehy3011);
   grae->SetName("data_copy");
   grae->SetTitle("WH_hbb in cat3_2016_pass_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3011 = new TH1F("Graph_data_copy3011","WH_hbb in cat3_2016_pass_cat3",100,28.1,212.9);
   Graph_data_copy3011->SetMinimum(0);
   Graph_data_copy3011->SetMaximum(841.8607);
   Graph_data_copy3011->SetDirectory(0);
   Graph_data_copy3011->SetStats(0);
   Graph_data_copy3011->SetLineStyle(0);
   Graph_data_copy3011->SetMarkerStyle(20);
   Graph_data_copy3011->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3011->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3011->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3011->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3011->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3011->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3011->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3011->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3011->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3011->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3011->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3011);
   
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
   entry=leg->AddEntry("bkgUncBand_pass_2016_cat3","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat3_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
      tex = new TLatex(0.25,0.67,"Passing region");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *htotpass_cat3_2016_fit_s_copy__44 = new TH1F("htotpass_cat3_2016_fit_s_copy__44","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(1,4.01906e-06);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(2,612.0523);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(3,642.2092);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(4,648.3151);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(5,652.5805);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(6,692.4438);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(7,712.4028);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(8,676.8344);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(9,614.5973);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(10,540.0873);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(11,482.0674);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(12,454.2563);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(13,426.5384);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(14,388.5416);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(15,358.1674);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(16,316.1305);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(17,275.7958);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(18,239.0797);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(19,198.3188);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(20,167.8565);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(21,133.1559);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(22,101.7428);
   htotpass_cat3_2016_fit_s_copy__44->SetBinContent(23,77.87121);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(1,4.119882e-07);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(2,8.481351);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(3,7.167473);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(4,7.874112);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(5,10.07616);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(6,14.87502);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(7,18.84075);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(8,18.45167);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(9,13.79487);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(10,12.61205);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(11,6.856129);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(12,6.448345);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(13,5.708895);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(14,5.082054);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(15,4.835945);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(16,4.138727);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(17,3.848525);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(18,3.478843);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(19,3.081898);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(20,2.967855);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(21,2.616711);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(22,2.651756);
   htotpass_cat3_2016_fit_s_copy__44->SetBinError(23,2.685414);
   htotpass_cat3_2016_fit_s_copy__44->SetMaximum(1068.604);
   htotpass_cat3_2016_fit_s_copy__44->SetEntries(92);
   htotpass_cat3_2016_fit_s_copy__44->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s_copy__44->SetFillColor(ci);
   htotpass_cat3_2016_fit_s_copy__44->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_s_copy__44->SetLineColor(ci);
   htotpass_cat3_2016_fit_s_copy__44->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_s_copy__44->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_s_copy__44->SetMarkerSize(0);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_s_copy__44->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__44->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_s_copy__44->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__44->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_s_copy__44->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_s_copy__44->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_s_copy__44->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__44->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_s_copy__44->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_s_copy__44->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_s_copy__44->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_s_copy__44->Draw("sameaxis");
   p12pass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_fit_s
   TPad *p22pass_cat3_2016_fit_s = new TPad("p22pass_cat3_2016_fit_s", "p22pass_cat3_2016_fit_s",0,0,1,0.3);
   p22pass_cat3_2016_fit_s->Draw();
   p22pass_cat3_2016_fit_s->cd();
   p22pass_cat3_2016_fit_s->Range(13.7027,-10.62606,221.8108,4.913504);
   p22pass_cat3_2016_fit_s->SetFillColor(0);
   p22pass_cat3_2016_fit_s->SetBorderMode(0);
   p22pass_cat3_2016_fit_s->SetBorderSize(2);
   p22pass_cat3_2016_fit_s->SetTickx(1);
   p22pass_cat3_2016_fit_s->SetTicky(1);
   p22pass_cat3_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat3_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat3_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat3_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s__45 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s__45","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(1,5.001255e-07);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(2,0.2890554);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(3,0.2577292);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(4,0.2714537);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(5,0.2656167);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(6,0.3749028);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(7,0.3654787);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(8,0.375562);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(9,0.3454477);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(10,0.3993181);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(11,0.2823395);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(12,0.2603883);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(13,0.2428534);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(14,0.2087674);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(15,0.2213877);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(16,0.2131098);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(17,0.21471);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(18,0.2175243);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(19,0.2534299);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(20,0.2122164);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(21,0.2856539);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(22,0.2644216);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetBinError(23,0.2902061);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetMinimum(-5.964192);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetMaximum(4.136525);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_s__45->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_s__45->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__45->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__45->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__45->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__45->Draw("");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s__46 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s__46","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(1,5.001255e-07);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(2,0.2890554);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(3,0.2577292);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(4,0.2714537);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(5,0.2656167);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(6,0.3749028);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(7,0.3654787);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(8,0.375562);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(9,0.3454477);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(10,0.3993181);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(11,0.2823395);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(12,0.2603883);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(13,0.2428534);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(14,0.2087674);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(15,0.2213877);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(16,0.2131098);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(17,0.21471);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(18,0.2175243);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(19,0.2534299);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(20,0.2122164);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(21,0.2856539);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(22,0.2644216);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetBinError(23,0.2902061);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMinimum(-5.964192);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMaximum(4.136525);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_s__46->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_s__46->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s__46->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s__46->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s__46->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_12 = new TH1F("hstack_stack_12","hstack",23,40,201);
   hstack_stack_12->SetMinimum(-6.554123);
   hstack_stack_12->SetMaximum(9.102508);
   hstack_stack_12->SetDirectory(0);
   hstack_stack_12->SetStats(0);
   hstack_stack_12->SetLineStyle(0);
   hstack_stack_12->SetMarkerStyle(20);
   hstack_stack_12->GetXaxis()->SetLabelFont(42);
   hstack_stack_12->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_12->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_12->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_12->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_12->GetXaxis()->SetTitleFont(42);
   hstack_stack_12->GetYaxis()->SetLabelFont(42);
   hstack_stack_12->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_12->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_12->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_12->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_12->GetYaxis()->SetTitleFont(42);
   hstack_stack_12->GetZaxis()->SetLabelFont(42);
   hstack_stack_12->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_12->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_12->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_12->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_12);
   
   
   TH1F *sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1 = new TH1F("sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(2,0.001073856);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(3,0.003007633);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(4,0.002643648);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(5,0.02857761);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(6,0.04042874);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(7,0.08214783);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(8,0.0650384);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(9,0.1586162);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(10,0.387599);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(11,0.7009652);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(12,1.057466);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(13,1.023243);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(14,0.7715161);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(15,0.5223559);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(16,0.1280245);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(17,0.03198236);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(18,0.01874367);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(19,0.006718847);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(20,0.002585601);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(21,0.006799427);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(22,0.0005810536);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinContent(23,0.00232713);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(1,2.416451e-07);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(2,0.01218372);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(3,0.0342292);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(4,0.02244928);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(5,0.2302719);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(6,0.3166614);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(7,0.7219714);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(8,0.5167595);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(9,1.227572);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(10,3.387498);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(11,5.462556);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(12,7.611589);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(13,6.620854);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(14,5.110665);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(15,3.643492);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(16,0.7488841);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(17,0.208098);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(18,0.1328986);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(19,0.03586906);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(20,0.01316885);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(21,0.02942958);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(22,0.003746575);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetBinError(23,0.01017672);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_fit_spass_cat3_2016_fit_s_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_fit_s__47 = new TH1F("iOneWithErrorsLinepass_cat3_2016_fit_s__47","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(1,5.001255e-07);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(2,0.2890554);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(3,0.2577292);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(4,0.2714537);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(5,0.2656167);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(6,0.3749028);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(7,0.3654787);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(8,0.375562);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(9,0.3454477);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(10,0.3993181);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(11,0.2823395);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(12,0.2603883);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(13,0.2428534);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(14,0.2087674);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(15,0.2213877);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(16,0.2131098);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(17,0.21471);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(18,0.2175243);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(19,0.2534299);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(20,0.2122164);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(21,0.2856539);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(22,0.2644216);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetBinError(23,0.2902061);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_s__47->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fx3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fy3012[23] = {
   0,
   1.468154,
   0.4807419,
   -1.385191,
   0.1284265,
   0.05688288,
   0.9083784,
   0.227118,
   -1.224021,
   -0.1765949,
   -0.09439494,
   -0.2956843,
   -0.6164611,
   1.462459,
   0.8258333,
   1.1271,
   -0.9164053,
   -1.428765,
   -0.5300208,
   1.172102,
   -2.976128,
   -0.5871335,
   1.757684};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_felx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fely3012[23] = {
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
   1,
   1};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fehx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_s_fehy3012[23] = {
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
   1,
   1};
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_fit_s_fx3012,Graph_from_iRatiopass_cat3_2016_fit_s_fy3012,Graph_from_iRatiopass_cat3_2016_fit_s_felx3012,Graph_from_iRatiopass_cat3_2016_fit_s_fehx3012,Graph_from_iRatiopass_cat3_2016_fit_s_fely3012,Graph_from_iRatiopass_cat3_2016_fit_s_fehy3012);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetMinimum(-4.64951);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetMaximum(3.431065);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_fit_s3012);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_s_copy__48 = new TH1F("iOneWithErrorspass_cat3_2016_fit_s_copy__48","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(1,5.001255e-07);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(2,0.2890554);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(3,0.2577292);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(4,0.2714537);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(5,0.2656167);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(6,0.3749028);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(7,0.3654787);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(8,0.375562);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(9,0.3454477);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(10,0.3993181);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(11,0.2823395);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(12,0.2603883);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(13,0.2428534);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(14,0.2087674);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(15,0.2213877);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(16,0.2131098);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(17,0.21471);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(18,0.2175243);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(19,0.2534299);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(20,0.2122164);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(21,0.2856539);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(22,0.2644216);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetBinError(23,0.2902061);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMinimum(-5.964192);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMaximum(4.136525);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetEntries(184);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_s_copy__48->Draw("sameaxis");
   p22pass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
   cpass_cat3_2016_fit_s->Modified();
   cpass_cat3_2016_fit_s->cd();
   cpass_cat3_2016_fit_s->SetSelected(cpass_cat3_2016_fit_s);
}
