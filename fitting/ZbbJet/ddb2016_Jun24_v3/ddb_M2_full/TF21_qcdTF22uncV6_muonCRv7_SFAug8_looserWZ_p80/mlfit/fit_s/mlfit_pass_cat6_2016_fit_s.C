void mlfit_pass_cat6_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_s/cpass_cat6_2016_fit_s
//=========  (Wed Oct  9 22:43:09 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat6_2016_fit_s = new TCanvas("cpass_cat6_2016_fit_s", "cpass_cat6_2016_fit_s",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat6_2016_fit_s->SetHighLightColor(2);
   cpass_cat6_2016_fit_s->Range(0,0,1,1);
   cpass_cat6_2016_fit_s->SetFillColor(0);
   cpass_cat6_2016_fit_s->SetBorderMode(0);
   cpass_cat6_2016_fit_s->SetBorderSize(2);
   cpass_cat6_2016_fit_s->SetTickx(1);
   cpass_cat6_2016_fit_s->SetTicky(1);
   cpass_cat6_2016_fit_s->SetLeftMargin(0.16);
   cpass_cat6_2016_fit_s->SetBottomMargin(0.13);
   cpass_cat6_2016_fit_s->SetFrameFillStyle(0);
   cpass_cat6_2016_fit_s->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat6_2016_fit_s
   TPad *p12pass_cat6_2016_fit_s = new TPad("p12pass_cat6_2016_fit_s", "p12pass_cat6_2016_fit_s",0,0.3,1,1);
   p12pass_cat6_2016_fit_s->Draw();
   p12pass_cat6_2016_fit_s->cd();
   p12pass_cat6_2016_fit_s->Range(13.7027,-5.735649,221.8108,281.0468);
   p12pass_cat6_2016_fit_s->SetFillColor(0);
   p12pass_cat6_2016_fit_s->SetBorderMode(0);
   p12pass_cat6_2016_fit_s->SetBorderSize(2);
   p12pass_cat6_2016_fit_s->SetTickx(1);
   p12pass_cat6_2016_fit_s->SetTicky(1);
   p12pass_cat6_2016_fit_s->SetLeftMargin(0.16);
   p12pass_cat6_2016_fit_s->SetBottomMargin(0.02);
   p12pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   p12pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p12pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat6_2016_fit_s__89 = new TH1F("htotpass_cat6_2016_fit_s__89","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s__89->SetBinContent(1,1.656852e-06);
   htotpass_cat6_2016_fit_s__89->SetBinContent(2,139.1575);
   htotpass_cat6_2016_fit_s__89->SetBinContent(3,145.9899);
   htotpass_cat6_2016_fit_s__89->SetBinContent(4,149.0412);
   htotpass_cat6_2016_fit_s__89->SetBinContent(5,147.7744);
   htotpass_cat6_2016_fit_s__89->SetBinContent(6,166.9536);
   htotpass_cat6_2016_fit_s__89->SetBinContent(7,168.2457);
   htotpass_cat6_2016_fit_s__89->SetBinContent(8,161.8033);
   htotpass_cat6_2016_fit_s__89->SetBinContent(9,137.1343);
   htotpass_cat6_2016_fit_s__89->SetBinContent(10,113.9587);
   htotpass_cat6_2016_fit_s__89->SetBinContent(11,98.92891);
   htotpass_cat6_2016_fit_s__89->SetBinContent(12,92.6982);
   htotpass_cat6_2016_fit_s__89->SetBinContent(13,84.72114);
   htotpass_cat6_2016_fit_s__89->SetBinContent(14,78.5742);
   htotpass_cat6_2016_fit_s__89->SetBinContent(15,73.65316);
   htotpass_cat6_2016_fit_s__89->SetBinContent(16,70.27317);
   htotpass_cat6_2016_fit_s__89->SetBinContent(17,65.39122);
   htotpass_cat6_2016_fit_s__89->SetBinContent(18,61.76614);
   htotpass_cat6_2016_fit_s__89->SetBinContent(19,60.05355);
   htotpass_cat6_2016_fit_s__89->SetBinContent(20,55.09771);
   htotpass_cat6_2016_fit_s__89->SetBinContent(21,52.08509);
   htotpass_cat6_2016_fit_s__89->SetBinContent(22,48.93648);
   htotpass_cat6_2016_fit_s__89->SetBinContent(23,46.60743);
   htotpass_cat6_2016_fit_s__89->SetBinError(1,2.362628e-07);
   htotpass_cat6_2016_fit_s__89->SetBinError(2,7.52636);
   htotpass_cat6_2016_fit_s__89->SetBinError(3,6.261215);
   htotpass_cat6_2016_fit_s__89->SetBinError(4,6.206966);
   htotpass_cat6_2016_fit_s__89->SetBinError(5,6.097254);
   htotpass_cat6_2016_fit_s__89->SetBinError(6,9.879227);
   htotpass_cat6_2016_fit_s__89->SetBinError(7,9.156766);
   htotpass_cat6_2016_fit_s__89->SetBinError(8,9.719425);
   htotpass_cat6_2016_fit_s__89->SetBinError(9,8.820656);
   htotpass_cat6_2016_fit_s__89->SetBinError(10,6.325016);
   htotpass_cat6_2016_fit_s__89->SetBinError(11,4.41412);
   htotpass_cat6_2016_fit_s__89->SetBinError(12,3.99444);
   htotpass_cat6_2016_fit_s__89->SetBinError(13,3.50746);
   htotpass_cat6_2016_fit_s__89->SetBinError(14,3.185737);
   htotpass_cat6_2016_fit_s__89->SetBinError(15,2.91537);
   htotpass_cat6_2016_fit_s__89->SetBinError(16,2.624189);
   htotpass_cat6_2016_fit_s__89->SetBinError(17,2.26912);
   htotpass_cat6_2016_fit_s__89->SetBinError(18,2.246593);
   htotpass_cat6_2016_fit_s__89->SetBinError(19,2.082277);
   htotpass_cat6_2016_fit_s__89->SetBinError(20,2.126704);
   htotpass_cat6_2016_fit_s__89->SetBinError(21,2.123376);
   htotpass_cat6_2016_fit_s__89->SetBinError(22,2.203341);
   htotpass_cat6_2016_fit_s__89->SetBinError(23,2.271436);
   htotpass_cat6_2016_fit_s__89->SetMinimum(0);
   htotpass_cat6_2016_fit_s__89->SetMaximum(252.3685);
   htotpass_cat6_2016_fit_s__89->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__89->SetFillColor(ci);
   htotpass_cat6_2016_fit_s__89->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__89->SetLineColor(ci);
   htotpass_cat6_2016_fit_s__89->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s__89->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s__89->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s__89->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s__89->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__89->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__89->Draw("hist");
   
   TH1F *qcd__90 = new TH1F("qcd__90","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__90->SetBinContent(2,139.1575);
   qcd__90->SetBinContent(3,143.7156);
   qcd__90->SetBinContent(4,138.7619);
   qcd__90->SetBinContent(5,132.5717);
   qcd__90->SetBinContent(6,127.15);
   qcd__90->SetBinContent(7,117.0606);
   qcd__90->SetBinContent(8,108.4545);
   qcd__90->SetBinContent(9,99.62458);
   qcd__90->SetBinContent(10,94.27556);
   qcd__90->SetBinContent(11,87.49985);
   qcd__90->SetBinContent(12,82.81749);
   qcd__90->SetBinContent(13,77.3159);
   qcd__90->SetBinContent(14,73.05711);
   qcd__90->SetBinContent(15,69.22752);
   qcd__90->SetBinContent(16,65.38563);
   qcd__90->SetBinContent(17,63.95612);
   qcd__90->SetBinContent(18,60.71371);
   qcd__90->SetBinContent(19,58.52783);
   qcd__90->SetBinContent(20,53.65269);
   qcd__90->SetBinContent(21,51.69943);
   qcd__90->SetBinContent(22,48.93648);
   qcd__90->SetBinContent(23,46.26273);
   qcd__90->SetBinError(2,7.52636);
   qcd__90->SetBinError(3,6.222802);
   qcd__90->SetBinError(4,5.702384);
   qcd__90->SetBinError(5,5.589904);
   qcd__90->SetBinError(6,5.882437);
   qcd__90->SetBinError(7,5.501857);
   qcd__90->SetBinError(8,5.188571);
   qcd__90->SetBinError(9,4.91914);
   qcd__90->SetBinError(10,4.53803);
   qcd__90->SetBinError(11,4.036604);
   qcd__90->SetBinError(12,3.741673);
   qcd__90->SetBinError(13,3.375999);
   qcd__90->SetBinError(14,3.032863);
   qcd__90->SetBinError(15,2.797577);
   qcd__90->SetBinError(16,2.460704);
   qcd__90->SetBinError(17,2.254307);
   qcd__90->SetBinError(18,2.238558);
   qcd__90->SetBinError(19,2.064011);
   qcd__90->SetBinError(20,2.110672);
   qcd__90->SetBinError(21,2.122236);
   qcd__90->SetBinError(22,2.203341);
   qcd__90->SetBinError(23,2.270584);
   qcd__90->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__90->SetLineColor(ci);
   qcd__90->SetLineStyle(2);
   qcd__90->SetLineWidth(2);
   qcd__90->GetXaxis()->SetTitle("x");
   qcd__90->GetXaxis()->SetLabelFont(42);
   qcd__90->GetXaxis()->SetLabelSize(0.035);
   qcd__90->GetXaxis()->SetTitleSize(0.035);
   qcd__90->GetXaxis()->SetTitleFont(42);
   qcd__90->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__90->GetYaxis()->SetLabelFont(42);
   qcd__90->GetYaxis()->SetLabelSize(0.035);
   qcd__90->GetYaxis()->SetTitleSize(0.035);
   qcd__90->GetYaxis()->SetTitleOffset(0);
   qcd__90->GetYaxis()->SetTitleFont(42);
   qcd__90->GetZaxis()->SetLabelFont(42);
   qcd__90->GetZaxis()->SetLabelSize(0.035);
   qcd__90->GetZaxis()->SetTitleSize(0.035);
   qcd__90->GetZaxis()->SetTitleFont(42);
   qcd__90->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016_cat6__91 = new TH1D("bkgUncBand_pass_2016_cat6__91","bkgUncBand_pass_2016_cat6",23,40,201);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(1,1.553568e-06);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(2,137.9717);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(3,145.9804);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(4,149.2321);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(5,149.0286);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(6,167.7025);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(7,169.3142);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(8,162.5557);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(9,138.9562);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(10,116.2157);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(11,101.6405);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(12,95.34099);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(13,87.10332);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(14,80.84384);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(15,75.47454);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(16,72.07861);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(17,66.73636);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(18,63.05902);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(19,61.07679);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(20,55.58692);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(21,52.29362);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(22,48.89372);
   bkgUncBand_pass_2016_cat6__91->SetBinContent(23,46.26859);
   bkgUncBand_pass_2016_cat6__91->SetBinError(1,2.506499e-07);
   bkgUncBand_pass_2016_cat6__91->SetBinError(2,8.184256);
   bkgUncBand_pass_2016_cat6__91->SetBinError(3,6.377667);
   bkgUncBand_pass_2016_cat6__91->SetBinError(4,5.236242);
   bkgUncBand_pass_2016_cat6__91->SetBinError(5,5.56332);
   bkgUncBand_pass_2016_cat6__91->SetBinError(6,7.591262);
   bkgUncBand_pass_2016_cat6__91->SetBinError(7,5.714829);
   bkgUncBand_pass_2016_cat6__91->SetBinError(8,5.668081);
   bkgUncBand_pass_2016_cat6__91->SetBinError(9,6.700269);
   bkgUncBand_pass_2016_cat6__91->SetBinError(10,4.036579);
   bkgUncBand_pass_2016_cat6__91->SetBinError(11,3.680645);
   bkgUncBand_pass_2016_cat6__91->SetBinError(12,3.708603);
   bkgUncBand_pass_2016_cat6__91->SetBinError(13,3.104461);
   bkgUncBand_pass_2016_cat6__91->SetBinError(14,3.48602);
   bkgUncBand_pass_2016_cat6__91->SetBinError(15,2.604199);
   bkgUncBand_pass_2016_cat6__91->SetBinError(16,2.709185);
   bkgUncBand_pass_2016_cat6__91->SetBinError(17,2.221921);
   bkgUncBand_pass_2016_cat6__91->SetBinError(18,2.49432);
   bkgUncBand_pass_2016_cat6__91->SetBinError(19,2.383226);
   bkgUncBand_pass_2016_cat6__91->SetBinError(20,2.381267);
   bkgUncBand_pass_2016_cat6__91->SetBinError(21,2.582663);
   bkgUncBand_pass_2016_cat6__91->SetBinError(22,2.460486);
   bkgUncBand_pass_2016_cat6__91->SetBinError(23,2.579669);
   bkgUncBand_pass_2016_cat6__91->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016_cat6__91->SetFillColor(ci);
   bkgUncBand_pass_2016_cat6__91->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016_cat6__91->SetLineColor(ci);
   bkgUncBand_pass_2016_cat6__91->SetLineStyle(0);
   bkgUncBand_pass_2016_cat6__91->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016_cat6__91->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat6__91->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat6__91->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat6__91->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat6__91->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016_cat6__91->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat6__91->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat6__91->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat6__91->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016_cat6__91->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat6__91->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat6__91->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat6__91->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat6__91->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat6__91->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis23[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_23 = new TH1F("hstackMC_stack_23","hstackMC",23, xAxis23);
   hstackMC_stack_23->SetMinimum(-0.0457694);
   hstackMC_stack_23->SetMaximum(56.68317);
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
   tqq_stack_1->SetBinContent(3,0.3563721);
   tqq_stack_1->SetBinContent(4,0.6895444);
   tqq_stack_1->SetBinContent(5,1.466268);
   tqq_stack_1->SetBinContent(6,3.110906);
   tqq_stack_1->SetBinContent(7,5.48543);
   tqq_stack_1->SetBinContent(8,3.299179);
   tqq_stack_1->SetBinContent(9,2.057072);
   tqq_stack_1->SetBinContent(10,1.040616);
   tqq_stack_1->SetBinContent(11,2.473652);
   tqq_stack_1->SetBinContent(12,3.475233);
   tqq_stack_1->SetBinContent(13,2.845645);
   tqq_stack_1->SetBinContent(14,3.020704);
   tqq_stack_1->SetBinContent(15,2.711311);
   tqq_stack_1->SetBinContent(16,4.10669);
   tqq_stack_1->SetBinContent(17,1.435094);
   tqq_stack_1->SetBinContent(18,1.052423);
   tqq_stack_1->SetBinContent(19,1.525716);
   tqq_stack_1->SetBinContent(20,1.445014);
   tqq_stack_1->SetBinContent(21,0.3856602);
   tqq_stack_1->SetBinContent(23,0.3447024);
   tqq_stack_1->SetBinError(3,0.06427981);
   tqq_stack_1->SetBinError(4,0.124375);
   tqq_stack_1->SetBinError(5,0.2644749);
   tqq_stack_1->SetBinError(6,0.5611228);
   tqq_stack_1->SetBinError(7,0.989422);
   tqq_stack_1->SetBinError(8,0.595082);
   tqq_stack_1->SetBinError(9,0.3710397);
   tqq_stack_1->SetBinError(10,0.1876987);
   tqq_stack_1->SetBinError(11,0.4461794);
   tqq_stack_1->SetBinError(12,0.6268373);
   tqq_stack_1->SetBinError(13,0.5132769);
   tqq_stack_1->SetBinError(14,0.5448526);
   tqq_stack_1->SetBinError(15,0.4890466);
   tqq_stack_1->SetBinError(16,0.7407349);
   tqq_stack_1->SetBinError(17,0.2588519);
   tqq_stack_1->SetBinError(18,0.1898285);
   tqq_stack_1->SetBinError(19,0.2751976);
   tqq_stack_1->SetBinError(20,0.2606412);
   tqq_stack_1->SetBinError(21,0.06956258);
   tqq_stack_1->SetBinError(23,0.06217492);
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
   wqq_stack_2->SetBinContent(1,5.178319e-07);
   wqq_stack_2->SetBinContent(2,5.178319e-07);
   wqq_stack_2->SetBinContent(3,1.09809);
   wqq_stack_2->SetBinContent(4,7.016572);
   wqq_stack_2->SetBinContent(5,10.4219);
   wqq_stack_2->SetBinContent(6,17.4981);
   wqq_stack_2->SetBinContent(7,19.01842);
   wqq_stack_2->SetBinContent(8,11.94976);
   wqq_stack_2->SetBinContent(9,6.095414);
   wqq_stack_2->SetBinContent(10,0.8777308);
   wqq_stack_2->SetBinContent(11,5.178319e-07);
   wqq_stack_2->SetBinContent(12,5.178319e-07);
   wqq_stack_2->SetBinContent(13,5.178319e-07);
   wqq_stack_2->SetBinContent(14,5.178319e-07);
   wqq_stack_2->SetBinContent(15,5.178319e-07);
   wqq_stack_2->SetBinContent(16,5.178319e-07);
   wqq_stack_2->SetBinContent(17,5.178319e-07);
   wqq_stack_2->SetBinContent(18,5.178319e-07);
   wqq_stack_2->SetBinContent(19,5.178319e-07);
   wqq_stack_2->SetBinContent(20,5.178319e-07);
   wqq_stack_2->SetBinContent(21,5.178319e-07);
   wqq_stack_2->SetBinContent(22,5.178319e-07);
   wqq_stack_2->SetBinContent(23,5.178319e-07);
   wqq_stack_2->SetBinError(1,1.135173e-07);
   wqq_stack_2->SetBinError(2,1.135173e-07);
   wqq_stack_2->SetBinError(3,0.4048502);
   wqq_stack_2->SetBinError(4,2.199575);
   wqq_stack_2->SetBinError(5,2.323299);
   wqq_stack_2->SetBinError(6,4.154747);
   wqq_stack_2->SetBinError(7,4.733308);
   wqq_stack_2->SetBinError(8,3.796036);
   wqq_stack_2->SetBinError(9,2.062415);
   wqq_stack_2->SetBinError(10,0.3289979);
   wqq_stack_2->SetBinError(11,1.135173e-07);
   wqq_stack_2->SetBinError(12,1.135173e-07);
   wqq_stack_2->SetBinError(13,1.135173e-07);
   wqq_stack_2->SetBinError(14,1.135173e-07);
   wqq_stack_2->SetBinError(15,1.135173e-07);
   wqq_stack_2->SetBinError(16,1.135173e-07);
   wqq_stack_2->SetBinError(17,1.135173e-07);
   wqq_stack_2->SetBinError(18,1.135173e-07);
   wqq_stack_2->SetBinError(19,1.135173e-07);
   wqq_stack_2->SetBinError(20,1.135173e-07);
   wqq_stack_2->SetBinError(21,1.135173e-07);
   wqq_stack_2->SetBinError(22,1.135173e-07);
   wqq_stack_2->SetBinError(23,1.135173e-07);
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
   zqq_stack_3->SetBinContent(1,1.13902e-06);
   zqq_stack_3->SetBinContent(2,1.13902e-06);
   zqq_stack_3->SetBinContent(3,0.8198008);
   zqq_stack_3->SetBinContent(4,2.5731);
   zqq_stack_3->SetBinContent(5,3.314501);
   zqq_stack_3->SetBinContent(6,19.19462);
   zqq_stack_3->SetBinContent(7,26.68122);
   zqq_stack_3->SetBinContent(8,38.09984);
   zqq_stack_3->SetBinContent(9,29.35725);
   zqq_stack_3->SetBinContent(10,17.76477);
   zqq_stack_3->SetBinContent(11,8.955409);
   zqq_stack_3->SetBinContent(12,6.405472);
   zqq_stack_3->SetBinContent(13,4.559596);
   zqq_stack_3->SetBinContent(14,2.496395);
   zqq_stack_3->SetBinContent(15,1.714324);
   zqq_stack_3->SetBinContent(16,0.7808557);
   zqq_stack_3->SetBinContent(17,1.13902e-06);
   zqq_stack_3->SetBinContent(18,1.13902e-06);
   zqq_stack_3->SetBinContent(19,1.13902e-06);
   zqq_stack_3->SetBinContent(20,1.13902e-06);
   zqq_stack_3->SetBinContent(21,1.13902e-06);
   zqq_stack_3->SetBinContent(22,1.13902e-06);
   zqq_stack_3->SetBinContent(23,1.13902e-06);
   zqq_stack_3->SetBinError(1,2.072051e-07);
   zqq_stack_3->SetBinError(2,2.072051e-07);
   zqq_stack_3->SetBinError(3,0.5581285);
   zqq_stack_3->SetBinError(4,1.075012);
   zqq_stack_3->SetBinError(5,0.6795691);
   zqq_stack_3->SetBinError(6,6.739382);
   zqq_stack_3->SetBinError(7,5.494795);
   zqq_stack_3->SetBinError(8,7.265119);
   zqq_stack_3->SetBinError(9,7.015327);
   zqq_stack_3->SetBinError(10,4.389606);
   zqq_stack_3->SetBinError(11,1.729512);
   zqq_stack_3->SetBinError(12,1.250005);
   zqq_stack_3->SetBinError(13,0.8009098);
   zqq_stack_3->SetBinError(14,0.8085784);
   zqq_stack_3->SetBinError(15,0.6586158);
   zqq_stack_3->SetBinError(16,0.5316144);
   zqq_stack_3->SetBinError(17,2.072051e-07);
   zqq_stack_3->SetBinError(18,2.072051e-07);
   zqq_stack_3->SetBinError(19,2.072051e-07);
   zqq_stack_3->SetBinError(20,2.072051e-07);
   zqq_stack_3->SetBinError(21,2.072051e-07);
   zqq_stack_3->SetBinError(22,2.072051e-07);
   zqq_stack_3->SetBinError(23,2.072051e-07);
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
   
   TH1F *hsigpass_cat6_2016_fit_s_stack_4 = new TH1F("hsigpass_cat6_2016_fit_s_stack_4","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(1,2.347359e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(2,2.347359e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(3,2.347359e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(4,0.006271695);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(5,0.05551906);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(6,0.1076578);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(7,0.2003266);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(8,0.6351925);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(9,0.5326355);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(10,4.111116);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(11,5.411758);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(12,7.434465);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(13,7.334731);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(14,3.417);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(15,3.754124);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(16,0.07348694);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(17,0.3857933);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(18,0.01672042);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(19,0.002506509);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(20,0.03817623);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(21,0.02434121);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(22,0.02402386);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(23,0.01130152);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(1,8.634218e-08);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(2,8.634218e-08);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(3,8.634218e-08);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(4,0.002906362);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(5,0.02713771);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(6,0.0693222);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(7,0.06927964);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(8,0.281747);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(9,0.2153854);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(10,2.103924);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(11,2.223327);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(12,2.918618);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(13,2.642532);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(14,1.813047);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(15,1.52794);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(16,0.1192563);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(17,0.1674543);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(18,0.00778185);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(19,0.003002159);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(20,0.0179218);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(21,0.01154902);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(22,0.01140319);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(23,0.005237313);
   hsigpass_cat6_2016_fit_s_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_s_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat6_2016_fit_s_stack_4->SetLineColor(ci);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat6_2016_fit_s_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat6_2016_fit_s_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat6_2016_fit_s_stack_4,"");
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
   87,
   99,
   101,
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
   10.36336,
   10.98363,
   11.0833,
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
   9.309608,
   9.933246,
   10.03342,
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
   grae->SetTitle("WH_hbb in cat6_2016_pass_cat6");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3023 = new TH1F("Graph_data_copy3023","WH_hbb in cat6_2016_pass_cat6",100,28.1,212.9);
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
   entry=leg->AddEntry("bkgUncBand_pass_2016_cat6","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat6_2016_fit_s_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat6_2016_fit_s_copy__92 = new TH1F("htotpass_cat6_2016_fit_s_copy__92","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(1,1.656852e-06);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(2,139.1575);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(3,145.9899);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(4,149.0412);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(5,147.7744);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(6,166.9536);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(7,168.2457);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(8,161.8033);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(9,137.1343);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(10,113.9587);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(11,98.92891);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(12,92.6982);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(13,84.72114);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(14,78.5742);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(15,73.65316);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(16,70.27317);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(17,65.39122);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(18,61.76614);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(19,60.05355);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(20,55.09771);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(21,52.08509);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(22,48.93648);
   htotpass_cat6_2016_fit_s_copy__92->SetBinContent(23,46.60743);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(1,2.362628e-07);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(2,7.52636);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(3,6.261215);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(4,6.206966);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(5,6.097254);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(6,9.879227);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(7,9.156766);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(8,9.719425);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(9,8.820656);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(10,6.325016);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(11,4.41412);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(12,3.99444);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(13,3.50746);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(14,3.185737);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(15,2.91537);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(16,2.624189);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(17,2.26912);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(18,2.246593);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(19,2.082277);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(20,2.126704);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(21,2.123376);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(22,2.203341);
   htotpass_cat6_2016_fit_s_copy__92->SetBinError(23,2.271436);
   htotpass_cat6_2016_fit_s_copy__92->SetMaximum(252.3685);
   htotpass_cat6_2016_fit_s_copy__92->SetEntries(92);
   htotpass_cat6_2016_fit_s_copy__92->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s_copy__92->SetFillColor(ci);
   htotpass_cat6_2016_fit_s_copy__92->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s_copy__92->SetLineColor(ci);
   htotpass_cat6_2016_fit_s_copy__92->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s_copy__92->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s_copy__92->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s_copy__92->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__92->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s_copy__92->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__92->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s_copy__92->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s_copy__92->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s_copy__92->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__92->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__92->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s_copy__92->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s_copy__92->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__92->Draw("sameaxis");
   p12pass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_s
   TPad *p22pass_cat6_2016_fit_s = new TPad("p22pass_cat6_2016_fit_s", "p22pass_cat6_2016_fit_s",0,0,1,0.3);
   p22pass_cat6_2016_fit_s->Draw();
   p22pass_cat6_2016_fit_s->cd();
   p22pass_cat6_2016_fit_s->Range(13.7027,-7.963333,221.8108,4.431283);
   p22pass_cat6_2016_fit_s->SetFillColor(0);
   p22pass_cat6_2016_fit_s->SetBorderMode(0);
   p22pass_cat6_2016_fit_s->SetBorderSize(2);
   p22pass_cat6_2016_fit_s->SetTickx(1);
   p22pass_cat6_2016_fit_s->SetTicky(1);
   p22pass_cat6_2016_fit_s->SetLeftMargin(0.16);
   p22pass_cat6_2016_fit_s->SetTopMargin(0.05);
   p22pass_cat6_2016_fit_s->SetBottomMargin(0.3);
   p22pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   p22pass_cat6_2016_fit_s->SetFrameFillStyle(0);
   p22pass_cat6_2016_fit_s->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s__93 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s__93","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(1,2.722895e-07);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(2,0.682214);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(3,0.4922235);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(4,0.4287764);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(5,0.4418773);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(6,0.5526813);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(7,0.4061398);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(8,0.4401945);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(9,0.5411471);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(10,0.3427496);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(11,0.3741829);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(12,0.3546039);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(13,0.2940286);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(14,0.3777856);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(15,0.2754673);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(16,0.2973153);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(17,0.2573328);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(18,0.3320455);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(19,0.2598931);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(20,0.2798021);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(21,0.3438058);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(22,0.348008);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetBinError(23,0.3729904);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetMinimum(-4.244948);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetMaximum(3.811552);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_s__93->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_s__93->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__93->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__93->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__93->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__93->Draw("");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s__94 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s__94","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(1,2.722895e-07);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(2,0.682214);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(3,0.4922235);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(4,0.4287764);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(5,0.4418773);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(6,0.5526813);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(7,0.4061398);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(8,0.4401945);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(9,0.5411471);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(10,0.3427496);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(11,0.3741829);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(12,0.3546039);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(13,0.2940286);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(14,0.3777856);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(15,0.2754673);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(16,0.2973153);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(17,0.2573328);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(18,0.3320455);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(19,0.2598931);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(20,0.2798021);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(21,0.3438058);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(22,0.348008);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetBinError(23,0.3729904);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMinimum(-4.244948);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMaximum(3.811552);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_s__94->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_s__94->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__94->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__94->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__94->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_24 = new TH1F("hstack_stack_24","hstack",23,40,201);
   hstack_stack_24->SetMinimum(-2.170176);
   hstack_stack_24->SetMaximum(3.850414);
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
   
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(2,2.045665e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(3,1.887442e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(4,0.0005364713);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(5,0.004599968);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(6,0.008145779);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(7,0.01478141);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(8,0.05140742);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(9,0.04490837);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(10,0.3652765);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(11,0.5813089);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(12,0.7484426);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(13,0.7310302);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(14,0.3928151);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(15,0.4205962);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(16,0.008561902);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(17,0.04760786);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(18,0.002396792);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(19,0.0002900691);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(20,0.004784468);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(21,0.003489197);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(22,0.003677893);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinContent(23,0.001772225);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(1,8.634218e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(2,8.634218e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(3,8.634218e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(4,0.002906362);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(5,0.02713771);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(6,0.0693222);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(7,0.06927964);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(8,0.281747);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(9,0.2153854);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(10,2.103924);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(11,2.223327);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(12,2.918618);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(13,2.642532);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(14,1.813047);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(15,1.52794);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(16,0.1192563);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(17,0.1674543);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(18,0.00778185);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(19,0.003002159);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(20,0.0179218);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(21,0.01154902);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(22,0.01140319);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetBinError(23,0.005237313);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_s__95 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_s__95","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(1,2.722895e-07);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(2,0.682214);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(3,0.4922235);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(4,0.4287764);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(5,0.4418773);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(6,0.5526813);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(7,0.4061398);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(8,0.4401945);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(9,0.5411471);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(10,0.3427496);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(11,0.3741829);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(12,0.3546039);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(13,0.2940286);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(14,0.3777856);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(15,0.2754673);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(16,0.2973153);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(17,0.2573328);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(18,0.3320455);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(19,0.2598931);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(20,0.2798021);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(21,0.3438058);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(22,0.348008);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetBinError(23,0.3729904);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__95->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fx3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fy3024[23] = {
   0,
   -0.6237612,
   0.668557,
   -1.029982,
   -0.147017,
   0.5644882,
   1.079834,
   -0.7124665,
   0.2996031,
   1.060331,
   -1.281354,
   0.5737448,
   1.468774,
   -0.295928,
   0.6358427,
   0.3865483,
   0.06642236,
   -1.829965,
   1.541035,
   0.9845622,
   -0.4422331,
   -0.9088359,
   -0.8793179};
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_felx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fely3024[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fehx3024[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fehy3024[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_s_fx3024,Graph_from_iRatiopass_cat6_2016_fit_s_fy3024,Graph_from_iRatiopass_cat6_2016_fit_s_felx3024,Graph_from_iRatiopass_cat6_2016_fit_s_fehx3024,Graph_from_iRatiopass_cat6_2016_fit_s_fely3024,Graph_from_iRatiopass_cat6_2016_fit_s_fehy3024);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetMinimum(-3.367065);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetMaximum(3.078135);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_fit_s3024);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s_copy__96 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s_copy__96","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(1,2.722895e-07);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(2,0.682214);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(3,0.4922235);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(4,0.4287764);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(5,0.4418773);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(6,0.5526813);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(7,0.4061398);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(8,0.4401945);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(9,0.5411471);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(10,0.3427496);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(11,0.3741829);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(12,0.3546039);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(13,0.2940286);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(14,0.3777856);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(15,0.2754673);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(16,0.2973153);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(17,0.2573328);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(18,0.3320455);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(19,0.2598931);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(20,0.2798021);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(21,0.3438058);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(22,0.348008);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetBinError(23,0.3729904);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMinimum(-4.244948);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMaximum(3.811552);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__96->Draw("sameaxis");
   p22pass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
   cpass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
   cpass_cat6_2016_fit_s->SetSelected(cpass_cat6_2016_fit_s);
}
