void mlfit_pass_cat6_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_b/cpass_cat6_2016_fit_b
//=========  (Wed Oct  9 22:43:00 2019) by ROOT version 6.12/07
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
   p12pass_cat6_2016_fit_b->Range(13.7027,-5.771772,221.8108,282.8168);
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
   htotpass_cat6_2016_fit_b__89->SetBinContent(1,1.440073e-06);
   htotpass_cat6_2016_fit_b__89->SetBinContent(2,136.9304);
   htotpass_cat6_2016_fit_b__89->SetBinContent(3,145.936);
   htotpass_cat6_2016_fit_b__89->SetBinContent(4,149.9379);
   htotpass_cat6_2016_fit_b__89->SetBinContent(5,150.7562);
   htotpass_cat6_2016_fit_b__89->SetBinContent(6,167.0194);
   htotpass_cat6_2016_fit_b__89->SetBinContent(7,169.3053);
   htotpass_cat6_2016_fit_b__89->SetBinContent(8,162.2028);
   htotpass_cat6_2016_fit_b__89->SetBinContent(9,139.6592);
   htotpass_cat6_2016_fit_b__89->SetBinContent(10,117.907);
   htotpass_cat6_2016_fit_b__89->SetBinContent(11,103.353);
   htotpass_cat6_2016_fit_b__89->SetBinContent(12,97.15981);
   htotpass_cat6_2016_fit_b__89->SetBinContent(13,88.97285);
   htotpass_cat6_2016_fit_b__89->SetBinContent(14,82.62154);
   htotpass_cat6_2016_fit_b__89->SetBinContent(15,77.07359);
   htotpass_cat6_2016_fit_b__89->SetBinContent(16,73.34735);
   htotpass_cat6_2016_fit_b__89->SetBinContent(17,68.06591);
   htotpass_cat6_2016_fit_b__89->SetBinContent(18,63.9267);
   htotpass_cat6_2016_fit_b__89->SetBinContent(19,61.8049);
   htotpass_cat6_2016_fit_b__89->SetBinContent(20,56.34253);
   htotpass_cat6_2016_fit_b__89->SetBinContent(21,52.83743);
   htotpass_cat6_2016_fit_b__89->SetBinContent(22,49.2471);
   htotpass_cat6_2016_fit_b__89->SetBinContent(23,46.5555);
   htotpass_cat6_2016_fit_b__89->SetBinError(1,2.249998e-07);
   htotpass_cat6_2016_fit_b__89->SetBinError(2,9.14407);
   htotpass_cat6_2016_fit_b__89->SetBinError(3,7.263563);
   htotpass_cat6_2016_fit_b__89->SetBinError(4,6.61893);
   htotpass_cat6_2016_fit_b__89->SetBinError(5,6.01912);
   htotpass_cat6_2016_fit_b__89->SetBinError(6,9.694656);
   htotpass_cat6_2016_fit_b__89->SetBinError(7,8.985478);
   htotpass_cat6_2016_fit_b__89->SetBinError(8,9.399275);
   htotpass_cat6_2016_fit_b__89->SetBinError(9,8.223921);
   htotpass_cat6_2016_fit_b__89->SetBinError(10,6.022826);
   htotpass_cat6_2016_fit_b__89->SetBinError(11,4.047632);
   htotpass_cat6_2016_fit_b__89->SetBinError(12,3.778475);
   htotpass_cat6_2016_fit_b__89->SetBinError(13,3.396748);
   htotpass_cat6_2016_fit_b__89->SetBinError(14,2.922148);
   htotpass_cat6_2016_fit_b__89->SetBinError(15,2.832329);
   htotpass_cat6_2016_fit_b__89->SetBinError(16,2.654577);
   htotpass_cat6_2016_fit_b__89->SetBinError(17,2.338111);
   htotpass_cat6_2016_fit_b__89->SetBinError(18,2.068585);
   htotpass_cat6_2016_fit_b__89->SetBinError(19,2.030628);
   htotpass_cat6_2016_fit_b__89->SetBinError(20,1.881147);
   htotpass_cat6_2016_fit_b__89->SetBinError(21,1.972204);
   htotpass_cat6_2016_fit_b__89->SetBinError(22,2.124991);
   htotpass_cat6_2016_fit_b__89->SetBinError(23,2.187329);
   htotpass_cat6_2016_fit_b__89->SetMinimum(0);
   htotpass_cat6_2016_fit_b__89->SetMaximum(253.958);
   htotpass_cat6_2016_fit_b__89->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b__89->SetFillColor(ci);
   htotpass_cat6_2016_fit_b__89->SetFillStyle(0);

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
   htotpass_cat6_2016_fit_b__89->Draw("hist");
   
   TH1F *qcd__90 = new TH1F("qcd__90","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__90->SetBinContent(2,136.9304);
   qcd__90->SetBinContent(3,144.1034);
   qcd__90->SetBinContent(4,141.4968);
   qcd__90->SetBinContent(5,137.0002);
   qcd__90->SetBinContent(6,133.1224);
   qcd__90->SetBinContent(7,123.307);
   qcd__90->SetBinContent(8,114.6405);
   qcd__90->SetBinContent(9,105.6827);
   qcd__90->SetBinContent(10,100.1242);
   qcd__90->SetBinContent(11,92.89513);
   qcd__90->SetBinContent(12,87.91561);
   qcd__90->SetBinContent(13,81.95264);
   qcd__90->SetBinContent(14,77.0697);
   qcd__90->SetBinContent(15,72.75507);
   qcd__90->SetBinContent(16,68.35947);
   qcd__90->SetBinContent(17,66.51312);
   qcd__90->SetBinContent(18,62.78797);
   qcd__90->SetBinContent(19,60.15406);
   qcd__90->SetBinContent(20,54.779);
   qcd__90->SetBinContent(21,52.42014);
   qcd__90->SetBinContent(22,49.2471);
   qcd__90->SetBinContent(23,46.18253);
   qcd__90->SetBinError(2,9.14407);
   qcd__90->SetBinError(3,7.233165);
   qcd__90->SetBinError(4,6.169598);
   qcd__90->SetBinError(5,5.589153);
   qcd__90->SetBinError(6,5.630942);
   qcd__90->SetBinError(7,4.981714);
   qcd__90->SetBinError(8,4.862938);
   qcd__90->SetBinError(9,4.482553);
   qcd__90->SetBinError(10,4.308288);
   qcd__90->SetBinError(11,3.686188);
   qcd__90->SetBinError(12,3.539578);
   qcd__90->SetBinError(13,3.264289);
   qcd__90->SetBinError(14,2.76238);
   qcd__90->SetBinError(15,2.715291);
   qcd__90->SetBinError(16,2.511956);
   qcd__90->SetBinError(17,2.325355);
   qcd__90->SetBinError(18,2.060838);
   qcd__90->SetBinError(19,2.014005);
   qcd__90->SetBinError(20,1.865048);
   qcd__90->SetBinError(21,1.971114);
   qcd__90->SetBinError(22,2.124991);
   qcd__90->SetBinError(23,2.186544);
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
   hstackMC_stack_23->SetMinimum(0);
   hstackMC_stack_23->SetMaximum(49.94038);
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
   tqq_stack_1->SetBinContent(3,0.3855982);
   tqq_stack_1->SetBinContent(4,0.746094);
   tqq_stack_1->SetBinContent(5,1.586517);
   tqq_stack_1->SetBinContent(6,3.366033);
   tqq_stack_1->SetBinContent(7,5.935291);
   tqq_stack_1->SetBinContent(8,3.569745);
   tqq_stack_1->SetBinContent(9,2.225773);
   tqq_stack_1->SetBinContent(10,1.125957);
   tqq_stack_1->SetBinContent(11,2.676516);
   tqq_stack_1->SetBinContent(12,3.760237);
   tqq_stack_1->SetBinContent(13,3.079017);
   tqq_stack_1->SetBinContent(14,3.268432);
   tqq_stack_1->SetBinContent(15,2.933666);
   tqq_stack_1->SetBinContent(16,4.44348);
   tqq_stack_1->SetBinContent(17,1.552787);
   tqq_stack_1->SetBinContent(18,1.138733);
   tqq_stack_1->SetBinContent(19,1.650841);
   tqq_stack_1->SetBinContent(20,1.56352);
   tqq_stack_1->SetBinContent(21,0.4172883);
   tqq_stack_1->SetBinContent(23,0.3729715);
   tqq_stack_1->SetBinError(3,0.06056579);
   tqq_stack_1->SetBinError(4,0.1171888);
   tqq_stack_1->SetBinError(5,0.2491937);
   tqq_stack_1->SetBinError(6,0.5287016);
   tqq_stack_1->SetBinError(7,0.9322541);
   tqq_stack_1->SetBinError(8,0.5606988);
   tqq_stack_1->SetBinError(9,0.3496014);
   tqq_stack_1->SetBinError(10,0.1768537);
   tqq_stack_1->SetBinError(11,0.4203995);
   tqq_stack_1->SetBinError(12,0.5906193);
   tqq_stack_1->SetBinError(13,0.4836202);
   tqq_stack_1->SetBinError(14,0.5133715);
   tqq_stack_1->SetBinError(15,0.4607899);
   tqq_stack_1->SetBinError(16,0.6979359);
   tqq_stack_1->SetBinError(17,0.2438957);
   tqq_stack_1->SetBinError(18,0.1788604);
   tqq_stack_1->SetBinError(19,0.259297);
   tqq_stack_1->SetBinError(20,0.2455815);
   tqq_stack_1->SetBinError(21,0.06554333);
   tqq_stack_1->SetBinError(23,0.0585825);
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
   wqq_stack_2->SetBinContent(1,4.684709e-07);
   wqq_stack_2->SetBinContent(2,4.684709e-07);
   wqq_stack_2->SetBinContent(3,0.8753969);
   wqq_stack_2->SetBinContent(4,5.756906);
   wqq_stack_2->SetBinContent(5,9.369697);
   wqq_stack_2->SetBinContent(6,15.61382);
   wqq_stack_2->SetBinContent(7,17.64619);
   wqq_stack_2->SetBinContent(8,11.50574);
   wqq_stack_2->SetBinContent(9,5.401988);
   wqq_stack_2->SetBinContent(10,0.7546828);
   wqq_stack_2->SetBinContent(11,4.684709e-07);
   wqq_stack_2->SetBinContent(12,4.684709e-07);
   wqq_stack_2->SetBinContent(13,4.684709e-07);
   wqq_stack_2->SetBinContent(14,4.684709e-07);
   wqq_stack_2->SetBinContent(15,4.684709e-07);
   wqq_stack_2->SetBinContent(16,4.684709e-07);
   wqq_stack_2->SetBinContent(17,4.684709e-07);
   wqq_stack_2->SetBinContent(18,4.684709e-07);
   wqq_stack_2->SetBinContent(19,4.684709e-07);
   wqq_stack_2->SetBinContent(20,4.684709e-07);
   wqq_stack_2->SetBinContent(21,4.684709e-07);
   wqq_stack_2->SetBinContent(22,4.684709e-07);
   wqq_stack_2->SetBinContent(23,4.684709e-07);
   wqq_stack_2->SetBinError(1,1.089045e-07);
   wqq_stack_2->SetBinError(2,1.089045e-07);
   wqq_stack_2->SetBinError(3,0.4021549);
   wqq_stack_2->SetBinError(4,2.136046);
   wqq_stack_2->SetBinError(5,2.101915);
   wqq_stack_2->SetBinError(6,3.941147);
   wqq_stack_2->SetBinError(7,4.76616);
   wqq_stack_2->SetBinError(8,4.048244);
   wqq_stack_2->SetBinError(9,2.175921);
   wqq_stack_2->SetBinError(10,0.3492852);
   wqq_stack_2->SetBinError(11,1.089045e-07);
   wqq_stack_2->SetBinError(12,1.089045e-07);
   wqq_stack_2->SetBinError(13,1.089045e-07);
   wqq_stack_2->SetBinError(14,1.089045e-07);
   wqq_stack_2->SetBinError(15,1.089045e-07);
   wqq_stack_2->SetBinError(16,1.089045e-07);
   wqq_stack_2->SetBinError(17,1.089045e-07);
   wqq_stack_2->SetBinError(18,1.089045e-07);
   wqq_stack_2->SetBinError(19,1.089045e-07);
   wqq_stack_2->SetBinError(20,1.089045e-07);
   wqq_stack_2->SetBinError(21,1.089045e-07);
   wqq_stack_2->SetBinError(22,1.089045e-07);
   wqq_stack_2->SetBinError(23,1.089045e-07);
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
   zqq_stack_3->SetBinContent(1,9.71602e-07);
   zqq_stack_3->SetBinContent(2,9.71602e-07);
   zqq_stack_3->SetBinContent(3,0.571552);
   zqq_stack_3->SetBinContent(4,1.938122);
   zqq_stack_3->SetBinContent(5,2.79987);
   zqq_stack_3->SetBinContent(6,14.91711);
   zqq_stack_3->SetBinContent(7,22.4168);
   zqq_stack_3->SetBinContent(8,32.48679);
   zqq_stack_3->SetBinContent(9,26.3487);
   zqq_stack_3->SetBinContent(10,15.90218);
   zqq_stack_3->SetBinContent(11,7.781364);
   zqq_stack_3->SetBinContent(12,5.483953);
   zqq_stack_3->SetBinContent(13,3.94119);
   zqq_stack_3->SetBinContent(14,2.283404);
   zqq_stack_3->SetBinContent(15,1.384849);
   zqq_stack_3->SetBinContent(16,0.5444002);
   zqq_stack_3->SetBinContent(17,9.71602e-07);
   zqq_stack_3->SetBinContent(18,9.71602e-07);
   zqq_stack_3->SetBinContent(19,9.71602e-07);
   zqq_stack_3->SetBinContent(20,9.71602e-07);
   zqq_stack_3->SetBinContent(21,9.71602e-07);
   zqq_stack_3->SetBinContent(22,9.71602e-07);
   zqq_stack_3->SetBinContent(23,9.71602e-07);
   zqq_stack_3->SetBinError(1,1.968876e-07);
   zqq_stack_3->SetBinError(2,1.968876e-07);
   zqq_stack_3->SetBinError(3,0.5246662);
   zqq_stack_3->SetBinError(4,1.081606);
   zqq_stack_3->SetBinError(5,0.7148665);
   zqq_stack_3->SetBinError(6,6.816648);
   zqq_stack_3->SetBinError(7,5.686473);
   zqq_stack_3->SetBinError(8,6.927882);
   zqq_stack_3->SetBinError(9,6.533203);
   zqq_stack_3->SetBinError(10,4.190443);
   zqq_stack_3->SetBinError(11,1.61821);
   zqq_stack_3->SetBinError(12,1.182975);
   zqq_stack_3->SetBinError(13,0.8052466);
   zqq_stack_3->SetBinError(14,0.802902);
   zqq_stack_3->SetBinError(15,0.6610266);
   zqq_stack_3->SetBinError(16,0.4997416);
   zqq_stack_3->SetBinError(17,1.968876e-07);
   zqq_stack_3->SetBinError(18,1.968876e-07);
   zqq_stack_3->SetBinError(19,1.968876e-07);
   zqq_stack_3->SetBinError(20,1.968876e-07);
   zqq_stack_3->SetBinError(21,1.968876e-07);
   zqq_stack_3->SetBinError(22,1.968876e-07);
   zqq_stack_3->SetBinError(23,1.968876e-07);
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
   
   TH1F *hsigpass_cat6_2016_fit_b_stack_4 = new TH1F("hsigpass_cat6_2016_fit_b_stack_4","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   hsigpass_cat6_2016_fit_b_stack_4->SetEntries(115);

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
   
   TH1F *htotpass_cat6_2016_fit_b_copy__92 = new TH1F("htotpass_cat6_2016_fit_b_copy__92","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(1,1.440073e-06);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(2,136.9304);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(3,145.936);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(4,149.9379);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(5,150.7562);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(6,167.0194);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(7,169.3053);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(8,162.2028);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(9,139.6592);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(10,117.907);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(11,103.353);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(12,97.15981);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(13,88.97285);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(14,82.62154);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(15,77.07359);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(16,73.34735);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(17,68.06591);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(18,63.9267);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(19,61.8049);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(20,56.34253);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(21,52.83743);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(22,49.2471);
   htotpass_cat6_2016_fit_b_copy__92->SetBinContent(23,46.5555);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(1,2.249998e-07);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(2,9.14407);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(3,7.263563);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(4,6.61893);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(5,6.01912);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(6,9.694656);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(7,8.985478);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(8,9.399275);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(9,8.223921);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(10,6.022826);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(11,4.047632);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(12,3.778475);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(13,3.396748);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(14,2.922148);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(15,2.832329);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(16,2.654577);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(17,2.338111);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(18,2.068585);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(19,2.030628);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(20,1.881147);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(21,1.972204);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(22,2.124991);
   htotpass_cat6_2016_fit_b_copy__92->SetBinError(23,2.187329);
   htotpass_cat6_2016_fit_b_copy__92->SetMaximum(253.958);
   htotpass_cat6_2016_fit_b_copy__92->SetEntries(92);
   htotpass_cat6_2016_fit_b_copy__92->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__92->SetFillColor(ci);
   htotpass_cat6_2016_fit_b_copy__92->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_b_copy__92->SetLineColor(ci);
   htotpass_cat6_2016_fit_b_copy__92->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_b_copy__92->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_b_copy__92->SetMarkerSize(0);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_b_copy__92->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__92->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_b_copy__92->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__92->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_b_copy__92->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_b_copy__92->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_b_copy__92->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__92->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_b_copy__92->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_b_copy__92->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_b_copy__92->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_b_copy__92->Draw("sameaxis");
   p12pass_cat6_2016_fit_b->Modified();
   cpass_cat6_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_b
   TPad *p22pass_cat6_2016_fit_b = new TPad("p22pass_cat6_2016_fit_b", "p22pass_cat6_2016_fit_b",0,0,1,0.3);
   p22pass_cat6_2016_fit_b->Draw();
   p22pass_cat6_2016_fit_b->cd();
   p22pass_cat6_2016_fit_b->Range(13.7027,-8.517295,221.8108,4.175326);
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
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b__93 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b__93","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(1,2.722895e-07);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(2,0.682214);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(3,0.4922235);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(4,0.4287764);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(5,0.4418773);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(6,0.5526813);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(7,0.4061398);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(8,0.4401945);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(9,0.5411471);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(10,0.3427496);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(11,0.3741829);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(12,0.3546039);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(13,0.2940286);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(14,0.3777856);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(15,0.2754673);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(16,0.2973153);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(17,0.2573328);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(18,0.3320455);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(19,0.2598931);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(20,0.2798021);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(21,0.3438058);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(22,0.348008);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetBinError(23,0.3729904);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetMinimum(-4.709509);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetMaximum(3.540695);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_b__93->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_b__93->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_b__93->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__93->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_b__93->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_b__93->Draw("");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_b__94 = new TH1F("iOneWithErrorspass_cat6_2016_fit_b__94","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(1,2.722895e-07);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(2,0.682214);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(3,0.4922235);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(4,0.4287764);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(5,0.4418773);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(6,0.5526813);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(7,0.4061398);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(8,0.4401945);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(9,0.5411471);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(10,0.3427496);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(11,0.3741829);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(12,0.3546039);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(13,0.2940286);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(14,0.3777856);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(15,0.2754673);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(16,0.2973153);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(17,0.2573328);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(18,0.3320455);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(19,0.2598931);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(20,0.2798021);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(21,0.3438058);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(22,0.348008);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetBinError(23,0.3729904);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMinimum(-4.709509);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetMaximum(3.540695);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_b__94->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b__94->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat6_2016_fit_b__94->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat6_2016_fit_b__94->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_24 = new TH1F("hstack_stack_24","hstack",23,40,201);
   hstack_stack_24->SetMinimum(0);
   hstack_stack_24->SetMaximum(0);
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
   
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_bpass_cat6_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_b__95 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_b__95","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(1,2.722895e-07);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(2,0.682214);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(3,0.4922235);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(4,0.4287764);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(5,0.4418773);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(6,0.5526813);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(7,0.4061398);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(8,0.4401945);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(9,0.5411471);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(10,0.3427496);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(11,0.3741829);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(12,0.3546039);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(13,0.2940286);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(14,0.3777856);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(15,0.2754673);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(16,0.2973153);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(17,0.2573328);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(18,0.3320455);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(19,0.2598931);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(20,0.2798021);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(21,0.3438058);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(22,0.348008);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetBinError(23,0.3729904);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorsLinepass_cat6_2016_fit_b__95->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   -0.4296686,
   0.6725572,
   -1.106692,
   -0.3940715,
   0.5598744,
   1.007206,
   -0.744803,
   0.1039153,
   0.7393092,
   -1.756573,
   0.1675397,
   1.085159,
   -0.7612055,
   0.2931757,
   0.06769302,
   -0.2549385,
   -2.139672,
   1.360463,
   0.84689,
   -0.5500767,
   -0.9563891,
   -0.8711741};
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_b_fx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fy3024,Graph_from_iRatiopass_cat6_2016_fit_b_felx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fehx3024,Graph_from_iRatiopass_cat6_2016_fit_b_fely3024,Graph_from_iRatiopass_cat6_2016_fit_b_fehy3024);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMinimum(-3.689686);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_b3024->SetMaximum(2.910477);
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
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(1,2.722895e-07);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(2,0.682214);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(3,0.4922235);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(4,0.4287764);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(5,0.4418773);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(6,0.5526813);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(7,0.4061398);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(8,0.4401945);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(9,0.5411471);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(10,0.3427496);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(11,0.3741829);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(12,0.3546039);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(13,0.2940286);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(14,0.3777856);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(15,0.2754673);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(16,0.2973153);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(17,0.2573328);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(18,0.3320455);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(19,0.2598931);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(20,0.2798021);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(21,0.3438058);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(22,0.348008);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetBinError(23,0.3729904);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMinimum(-4.709509);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetMaximum(3.540695);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat6_2016_fit_b_copy__96->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
