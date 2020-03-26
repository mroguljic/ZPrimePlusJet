void mlfit_pass_cat4_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat4_2016_fit_b/cpass_cat4_2016_fit_b
//=========  (Wed Oct  9 22:43:00 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat4_2016_fit_b = new TCanvas("cpass_cat4_2016_fit_b", "cpass_cat4_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat4_2016_fit_b->SetHighLightColor(2);
   cpass_cat4_2016_fit_b->Range(0,0,1,1);
   cpass_cat4_2016_fit_b->SetFillColor(0);
   cpass_cat4_2016_fit_b->SetBorderMode(0);
   cpass_cat4_2016_fit_b->SetBorderSize(2);
   cpass_cat4_2016_fit_b->SetTickx(1);
   cpass_cat4_2016_fit_b->SetTicky(1);
   cpass_cat4_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat4_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat4_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat4_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat4_2016_fit_b
   TPad *p12pass_cat4_2016_fit_b = new TPad("p12pass_cat4_2016_fit_b", "p12pass_cat4_2016_fit_b",0,0.3,1,1);
   p12pass_cat4_2016_fit_b->Draw();
   p12pass_cat4_2016_fit_b->cd();
   p12pass_cat4_2016_fit_b->Range(13.7027,-18.4727,221.8108,905.1624);
   p12pass_cat4_2016_fit_b->SetFillColor(0);
   p12pass_cat4_2016_fit_b->SetBorderMode(0);
   p12pass_cat4_2016_fit_b->SetBorderSize(2);
   p12pass_cat4_2016_fit_b->SetTickx(1);
   p12pass_cat4_2016_fit_b->SetTicky(1);
   p12pass_cat4_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat4_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat4_2016_fit_b__57 = new TH1F("htotpass_cat4_2016_fit_b__57","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_b__57->SetBinContent(1,3.237888e-06);
   htotpass_cat4_2016_fit_b__57->SetBinContent(2,452.5981);
   htotpass_cat4_2016_fit_b__57->SetBinContent(3,472.3639);
   htotpass_cat4_2016_fit_b__57->SetBinContent(4,483.1144);
   htotpass_cat4_2016_fit_b__57->SetBinContent(5,503.391);
   htotpass_cat4_2016_fit_b__57->SetBinContent(6,526.3094);
   htotpass_cat4_2016_fit_b__57->SetBinContent(7,541.8659);
   htotpass_cat4_2016_fit_b__57->SetBinContent(8,510.023);
   htotpass_cat4_2016_fit_b__57->SetBinContent(9,446.2948);
   htotpass_cat4_2016_fit_b__57->SetBinContent(10,397.4466);
   htotpass_cat4_2016_fit_b__57->SetBinContent(11,357.5728);
   htotpass_cat4_2016_fit_b__57->SetBinContent(12,336.8552);
   htotpass_cat4_2016_fit_b__57->SetBinContent(13,319.1465);
   htotpass_cat4_2016_fit_b__57->SetBinContent(14,300.9568);
   htotpass_cat4_2016_fit_b__57->SetBinContent(15,277.6902);
   htotpass_cat4_2016_fit_b__57->SetBinContent(16,252.899);
   htotpass_cat4_2016_fit_b__57->SetBinContent(17,233.2191);
   htotpass_cat4_2016_fit_b__57->SetBinContent(18,203.2625);
   htotpass_cat4_2016_fit_b__57->SetBinContent(19,180.329);
   htotpass_cat4_2016_fit_b__57->SetBinContent(20,152.7399);
   htotpass_cat4_2016_fit_b__57->SetBinContent(21,129.9411);
   htotpass_cat4_2016_fit_b__57->SetBinContent(22,108.0414);
   htotpass_cat4_2016_fit_b__57->SetBinContent(23,85.76871);
   htotpass_cat4_2016_fit_b__57->SetBinError(1,3.52494e-07);
   htotpass_cat4_2016_fit_b__57->SetBinError(2,8.33884);
   htotpass_cat4_2016_fit_b__57->SetBinError(3,6.314836);
   htotpass_cat4_2016_fit_b__57->SetBinError(4,7.508505);
   htotpass_cat4_2016_fit_b__57->SetBinError(5,9.250688);
   htotpass_cat4_2016_fit_b__57->SetBinError(6,12.62197);
   htotpass_cat4_2016_fit_b__57->SetBinError(7,15.967);
   htotpass_cat4_2016_fit_b__57->SetBinError(8,14.61602);
   htotpass_cat4_2016_fit_b__57->SetBinError(9,11.69541);
   htotpass_cat4_2016_fit_b__57->SetBinError(10,9.809797);
   htotpass_cat4_2016_fit_b__57->SetBinError(11,5.814421);
   htotpass_cat4_2016_fit_b__57->SetBinError(12,4.625264);
   htotpass_cat4_2016_fit_b__57->SetBinError(13,4.503044);
   htotpass_cat4_2016_fit_b__57->SetBinError(14,4.315277);
   htotpass_cat4_2016_fit_b__57->SetBinError(15,3.730759);
   htotpass_cat4_2016_fit_b__57->SetBinError(16,3.550691);
   htotpass_cat4_2016_fit_b__57->SetBinError(17,3.2407);
   htotpass_cat4_2016_fit_b__57->SetBinError(18,3.168883);
   htotpass_cat4_2016_fit_b__57->SetBinError(19,3.059152);
   htotpass_cat4_2016_fit_b__57->SetBinError(20,2.789504);
   htotpass_cat4_2016_fit_b__57->SetBinError(21,2.672149);
   htotpass_cat4_2016_fit_b__57->SetBinError(22,2.711849);
   htotpass_cat4_2016_fit_b__57->SetBinError(23,2.773433);
   htotpass_cat4_2016_fit_b__57->SetMinimum(0);
   htotpass_cat4_2016_fit_b__57->SetMaximum(812.7989);
   htotpass_cat4_2016_fit_b__57->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b__57->SetFillColor(ci);
   htotpass_cat4_2016_fit_b__57->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b__57->SetLineColor(ci);
   htotpass_cat4_2016_fit_b__57->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_b__57->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_b__57->SetMarkerSize(0);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_b__57->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__57->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_b__57->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__57->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_b__57->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_b__57->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_b__57->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__57->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b__57->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b__57->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b__57->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b__57->Draw("hist");
   
   TH1F *qcd__58 = new TH1F("qcd__58","qcd in cat4_2016_pass_cat4",23,40,201);
   qcd__58->SetBinContent(2,448.7298);
   qcd__58->SetBinContent(3,467.965);
   qcd__58->SetBinContent(4,468.2293);
   qcd__58->SetBinContent(5,458.4272);
   qcd__58->SetBinContent(6,433.0962);
   qcd__58->SetBinContent(7,415.3813);
   qcd__58->SetBinContent(8,395.5715);
   qcd__58->SetBinContent(9,367.9613);
   qcd__58->SetBinContent(10,353.9031);
   qcd__58->SetBinContent(11,338.2969);
   qcd__58->SetBinContent(12,321.8226);
   qcd__58->SetBinContent(13,304.4822);
   qcd__58->SetBinContent(14,286.8423);
   qcd__58->SetBinContent(15,272.3044);
   qcd__58->SetBinContent(16,245.972);
   qcd__58->SetBinContent(17,229.4624);
   qcd__58->SetBinContent(18,200.3065);
   qcd__58->SetBinContent(19,176.5801);
   qcd__58->SetBinContent(20,150.5512);
   qcd__58->SetBinContent(21,128.3947);
   qcd__58->SetBinContent(22,107.3317);
   qcd__58->SetBinContent(23,85.76871);
   qcd__58->SetBinError(2,8.321486);
   qcd__58->SetBinError(3,6.26823);
   qcd__58->SetBinError(4,6.502204);
   qcd__58->SetBinError(5,6.921139);
   qcd__58->SetBinError(6,7.055491);
   qcd__58->SetBinError(7,7.666349);
   qcd__58->SetBinError(8,7.425003);
   qcd__58->SetBinError(9,6.809399);
   qcd__58->SetBinError(10,5.485982);
   qcd__58->SetBinError(11,5.046996);
   qcd__58->SetBinError(12,4.237083);
   qcd__58->SetBinError(13,4.032807);
   qcd__58->SetBinError(14,3.821216);
   qcd__58->SetBinError(15,3.649538);
   qcd__58->SetBinError(16,3.4082);
   qcd__58->SetBinError(17,3.195385);
   qcd__58->SetBinError(18,3.140263);
   qcd__58->SetBinError(19,3.011307);
   qcd__58->SetBinError(20,2.771702);
   qcd__58->SetBinError(21,2.662887);
   qcd__58->SetBinError(22,2.709929);
   qcd__58->SetBinError(23,2.773433);
   qcd__58->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__58->SetLineColor(ci);
   qcd__58->SetLineStyle(2);
   qcd__58->SetLineWidth(2);
   qcd__58->GetXaxis()->SetTitle("x");
   qcd__58->GetXaxis()->SetLabelFont(42);
   qcd__58->GetXaxis()->SetLabelSize(0.035);
   qcd__58->GetXaxis()->SetTitleSize(0.035);
   qcd__58->GetXaxis()->SetTitleFont(42);
   qcd__58->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__58->GetYaxis()->SetLabelFont(42);
   qcd__58->GetYaxis()->SetLabelSize(0.035);
   qcd__58->GetYaxis()->SetTitleSize(0.035);
   qcd__58->GetYaxis()->SetTitleOffset(0);
   qcd__58->GetYaxis()->SetTitleFont(42);
   qcd__58->GetZaxis()->SetLabelFont(42);
   qcd__58->GetZaxis()->SetLabelSize(0.035);
   qcd__58->GetZaxis()->SetTitleSize(0.035);
   qcd__58->GetZaxis()->SetTitleFont(42);
   qcd__58->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016_cat4__59 = new TH1D("bkgUncBand_pass_2016_cat4__59","bkgUncBand_pass_2016_cat4",23,40,201);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(1,3.415603e-06);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(2,453.4261);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(3,471.2606);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(4,480.6136);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(5,499.8631);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(6,524.7302);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(7,540.8407);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(8,510.4613);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(9,444.5423);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(10,394.2889);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(11,353.5531);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(12,332.3366);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(13,315.0093);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(14,297.0904);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(15,274.5458);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(16,250.3513);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(17,231.364);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(18,201.952);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(19,179.18);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(20,151.9548);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(21,129.7576);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(22,108.1118);
   bkgUncBand_pass_2016_cat4__59->SetBinContent(23,86.35189);
   bkgUncBand_pass_2016_cat4__59->SetBinError(1,3.492549e-07);
   bkgUncBand_pass_2016_cat4__59->SetBinError(2,8.125806);
   bkgUncBand_pass_2016_cat4__59->SetBinError(3,6.161941);
   bkgUncBand_pass_2016_cat4__59->SetBinError(4,6.842012);
   bkgUncBand_pass_2016_cat4__59->SetBinError(5,7.280338);
   bkgUncBand_pass_2016_cat4__59->SetBinError(6,8.233886);
   bkgUncBand_pass_2016_cat4__59->SetBinError(7,8.827424);
   bkgUncBand_pass_2016_cat4__59->SetBinError(8,7.807899);
   bkgUncBand_pass_2016_cat4__59->SetBinError(9,7.012062);
   bkgUncBand_pass_2016_cat4__59->SetBinError(10,7.149774);
   bkgUncBand_pass_2016_cat4__59->SetBinError(11,4.846205);
   bkgUncBand_pass_2016_cat4__59->SetBinError(12,4.804656);
   bkgUncBand_pass_2016_cat4__59->SetBinError(13,4.447454);
   bkgUncBand_pass_2016_cat4__59->SetBinError(14,3.812131);
   bkgUncBand_pass_2016_cat4__59->SetBinError(15,3.785885);
   bkgUncBand_pass_2016_cat4__59->SetBinError(16,3.564516);
   bkgUncBand_pass_2016_cat4__59->SetBinError(17,3.472583);
   bkgUncBand_pass_2016_cat4__59->SetBinError(18,2.876748);
   bkgUncBand_pass_2016_cat4__59->SetBinError(19,2.84185);
   bkgUncBand_pass_2016_cat4__59->SetBinError(20,2.84369);
   bkgUncBand_pass_2016_cat4__59->SetBinError(21,2.708209);
   bkgUncBand_pass_2016_cat4__59->SetBinError(22,2.669622);
   bkgUncBand_pass_2016_cat4__59->SetBinError(23,2.695388);
   bkgUncBand_pass_2016_cat4__59->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016_cat4__59->SetFillColor(ci);
   bkgUncBand_pass_2016_cat4__59->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016_cat4__59->SetLineColor(ci);
   bkgUncBand_pass_2016_cat4__59->SetLineStyle(0);
   bkgUncBand_pass_2016_cat4__59->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016_cat4__59->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat4__59->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat4__59->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat4__59->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat4__59->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016_cat4__59->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat4__59->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat4__59->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat4__59->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016_cat4__59->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat4__59->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat4__59->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat4__59->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat4__59->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat4__59->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis15[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_15 = new TH1F("hstackMC_stack_15","hstackMC",23, xAxis15);
   hstackMC_stack_15->SetMinimum(0);
   hstackMC_stack_15->SetMaximum(132.8089);
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
   tqq_stack_1->SetBinContent(2,2.866608);
   tqq_stack_1->SetBinContent(3,2.671874);
   tqq_stack_1->SetBinContent(4,2.660801);
   tqq_stack_1->SetBinContent(5,7.764668);
   tqq_stack_1->SetBinContent(6,12.66828);
   tqq_stack_1->SetBinContent(7,12.22233);
   tqq_stack_1->SetBinContent(8,12.44225);
   tqq_stack_1->SetBinContent(9,10.51593);
   tqq_stack_1->SetBinContent(10,10.7442);
   tqq_stack_1->SetBinContent(11,10.3281);
   tqq_stack_1->SetBinContent(12,12.53202);
   tqq_stack_1->SetBinContent(13,13.57302);
   tqq_stack_1->SetBinContent(14,13.68408);
   tqq_stack_1->SetBinContent(15,5.385758);
   tqq_stack_1->SetBinContent(16,6.926956);
   tqq_stack_1->SetBinContent(17,3.75674);
   tqq_stack_1->SetBinContent(18,2.955995);
   tqq_stack_1->SetBinContent(19,3.748944);
   tqq_stack_1->SetBinContent(20,2.1887);
   tqq_stack_1->SetBinContent(21,1.546362);
   tqq_stack_1->SetBinContent(22,0.7096968);
   tqq_stack_1->SetBinError(2,0.4120884);
   tqq_stack_1->SetBinError(3,0.3840945);
   tqq_stack_1->SetBinError(4,0.3825028);
   tqq_stack_1->SetBinError(5,1.116208);
   tqq_stack_1->SetBinError(6,1.821125);
   tqq_stack_1->SetBinError(7,1.757017);
   tqq_stack_1->SetBinError(8,1.788633);
   tqq_stack_1->SetBinError(9,1.511714);
   tqq_stack_1->SetBinError(10,1.54453);
   tqq_stack_1->SetBinError(11,1.484714);
   tqq_stack_1->SetBinError(12,1.801538);
   tqq_stack_1->SetBinError(13,1.951186);
   tqq_stack_1->SetBinError(14,1.967151);
   tqq_stack_1->SetBinError(15,0.7742283);
   tqq_stack_1->SetBinError(16,0.9957827);
   tqq_stack_1->SetBinError(17,0.5400492);
   tqq_stack_1->SetBinError(18,0.4249383);
   tqq_stack_1->SetBinError(19,0.5389284);
   tqq_stack_1->SetBinError(20,0.314636);
   tqq_stack_1->SetBinError(21,0.2222968);
   tqq_stack_1->SetBinError(22,0.1020223);
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
   wqq_stack_2->SetBinContent(1,1.323462e-06);
   wqq_stack_2->SetBinContent(2,1.001637);
   wqq_stack_2->SetBinContent(3,1.727029);
   wqq_stack_2->SetBinContent(4,10.18202);
   wqq_stack_2->SetBinContent(5,25.24275);
   wqq_stack_2->SetBinContent(6,49.20242);
   wqq_stack_2->SetBinContent(7,61.36454);
   wqq_stack_2->SetBinContent(8,28.67039);
   wqq_stack_2->SetBinContent(9,9.319092);
   wqq_stack_2->SetBinContent(10,1.806636);
   wqq_stack_2->SetBinContent(11,0.5494645);
   wqq_stack_2->SetBinContent(12,1.323462e-06);
   wqq_stack_2->SetBinContent(13,1.323462e-06);
   wqq_stack_2->SetBinContent(14,1.323462e-06);
   wqq_stack_2->SetBinContent(15,1.323462e-06);
   wqq_stack_2->SetBinContent(16,1.323462e-06);
   wqq_stack_2->SetBinContent(17,1.323462e-06);
   wqq_stack_2->SetBinContent(18,1.323462e-06);
   wqq_stack_2->SetBinContent(19,1.323462e-06);
   wqq_stack_2->SetBinContent(20,1.323462e-06);
   wqq_stack_2->SetBinContent(21,1.323462e-06);
   wqq_stack_2->SetBinContent(22,1.323462e-06);
   wqq_stack_2->SetBinContent(23,1.323462e-06);
   wqq_stack_2->SetBinError(1,2.104016e-07);
   wqq_stack_2->SetBinError(2,0.3454106);
   wqq_stack_2->SetBinError(3,0.6625127);
   wqq_stack_2->SetBinError(4,3.580145);
   wqq_stack_2->SetBinError(5,4.320993);
   wqq_stack_2->SetBinError(6,7.581786);
   wqq_stack_2->SetBinError(7,11.05962);
   wqq_stack_2->SetBinError(8,7.989511);
   wqq_stack_2->SetBinError(9,3.071044);
   wqq_stack_2->SetBinError(10,0.4133955);
   wqq_stack_2->SetBinError(11,0.235827);
   wqq_stack_2->SetBinError(12,2.104016e-07);
   wqq_stack_2->SetBinError(13,2.104016e-07);
   wqq_stack_2->SetBinError(14,2.104016e-07);
   wqq_stack_2->SetBinError(15,2.104016e-07);
   wqq_stack_2->SetBinError(16,2.104016e-07);
   wqq_stack_2->SetBinError(17,2.104016e-07);
   wqq_stack_2->SetBinError(18,2.104016e-07);
   wqq_stack_2->SetBinError(19,2.104016e-07);
   wqq_stack_2->SetBinError(20,2.104016e-07);
   wqq_stack_2->SetBinError(21,2.104016e-07);
   wqq_stack_2->SetBinError(22,2.104016e-07);
   wqq_stack_2->SetBinError(23,2.104016e-07);
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
   zqq_stack_3->SetBinContent(1,1.914426e-06);
   zqq_stack_3->SetBinContent(2,1.914426e-06);
   zqq_stack_3->SetBinContent(3,1.914426e-06);
   zqq_stack_3->SetBinContent(4,2.042289);
   zqq_stack_3->SetBinContent(5,11.95634);
   zqq_stack_3->SetBinContent(6,31.34248);
   zqq_stack_3->SetBinContent(7,52.89776);
   zqq_stack_3->SetBinContent(8,73.33884);
   zqq_stack_3->SetBinContent(9,58.49847);
   zqq_stack_3->SetBinContent(10,30.99264);
   zqq_stack_3->SetBinContent(11,8.398359);
   zqq_stack_3->SetBinContent(12,2.500538);
   zqq_stack_3->SetBinContent(13,1.091337);
   zqq_stack_3->SetBinContent(14,0.4303787);
   zqq_stack_3->SetBinContent(15,1.914426e-06);
   zqq_stack_3->SetBinContent(16,1.914426e-06);
   zqq_stack_3->SetBinContent(17,1.914426e-06);
   zqq_stack_3->SetBinContent(18,1.914426e-06);
   zqq_stack_3->SetBinContent(19,1.914426e-06);
   zqq_stack_3->SetBinContent(20,1.914426e-06);
   zqq_stack_3->SetBinContent(21,1.914426e-06);
   zqq_stack_3->SetBinContent(22,1.914426e-06);
   zqq_stack_3->SetBinContent(23,1.914426e-06);
   zqq_stack_3->SetBinError(1,2.82813e-07);
   zqq_stack_3->SetBinError(2,2.82813e-07);
   zqq_stack_3->SetBinError(3,2.82813e-07);
   zqq_stack_3->SetBinError(4,1.065479);
   zqq_stack_3->SetBinError(5,4.213807);
   zqq_stack_3->SetBinError(6,6.980996);
   zqq_stack_3->SetBinError(7,8.412487);
   zqq_stack_3->SetBinError(8,9.563779);
   zqq_stack_3->SetBinError(9,8.871194);
   zqq_stack_3->SetBinError(10,7.973685);
   zqq_stack_3->SetBinError(11,2.464819);
   zqq_stack_3->SetBinError(12,0.4411989);
   zqq_stack_3->SetBinError(13,0.4546948);
   zqq_stack_3->SetBinError(14,0.3876102);
   zqq_stack_3->SetBinError(15,2.82813e-07);
   zqq_stack_3->SetBinError(16,2.82813e-07);
   zqq_stack_3->SetBinError(17,2.82813e-07);
   zqq_stack_3->SetBinError(18,2.82813e-07);
   zqq_stack_3->SetBinError(19,2.82813e-07);
   zqq_stack_3->SetBinError(20,2.82813e-07);
   zqq_stack_3->SetBinError(21,2.82813e-07);
   zqq_stack_3->SetBinError(22,2.82813e-07);
   zqq_stack_3->SetBinError(23,2.82813e-07);
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
   
   TH1F *hsigpass_cat4_2016_fit_b_stack_4 = new TH1F("hsigpass_cat4_2016_fit_b_stack_4","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   hsigpass_cat4_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat4_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat4_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat4_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat4_2016_fit_b_stack_4,"");
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
   402,
   361,
   326,
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
   21.06703,
   20.01799,
   19.07435,
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
   20.04203,
   18.9916,
   18.04659,
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
   grae->SetTitle("WH_hbb in cat4_2016_pass_cat4");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3015 = new TH1F("Graph_data_copy3015","WH_hbb in cat4_2016_pass_cat4",100,28.1,212.9);
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
   entry=leg->AddEntry("bkgUncBand_pass_2016_cat4","Total background","lf");

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
   
   TH1F *htotpass_cat4_2016_fit_b_copy__60 = new TH1F("htotpass_cat4_2016_fit_b_copy__60","wqq in cat4_2016_pass_cat4",23,40,201);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(1,3.237888e-06);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(2,452.5981);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(3,472.3639);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(4,483.1144);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(5,503.391);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(6,526.3094);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(7,541.8659);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(8,510.023);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(9,446.2948);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(10,397.4466);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(11,357.5728);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(12,336.8552);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(13,319.1465);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(14,300.9568);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(15,277.6902);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(16,252.899);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(17,233.2191);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(18,203.2625);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(19,180.329);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(20,152.7399);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(21,129.9411);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(22,108.0414);
   htotpass_cat4_2016_fit_b_copy__60->SetBinContent(23,85.76871);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(1,3.52494e-07);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(2,8.33884);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(3,6.314836);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(4,7.508505);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(5,9.250688);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(6,12.62197);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(7,15.967);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(8,14.61602);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(9,11.69541);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(10,9.809797);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(11,5.814421);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(12,4.625264);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(13,4.503044);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(14,4.315277);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(15,3.730759);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(16,3.550691);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(17,3.2407);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(18,3.168883);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(19,3.059152);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(20,2.789504);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(21,2.672149);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(22,2.711849);
   htotpass_cat4_2016_fit_b_copy__60->SetBinError(23,2.773433);
   htotpass_cat4_2016_fit_b_copy__60->SetMaximum(812.7989);
   htotpass_cat4_2016_fit_b_copy__60->SetEntries(92);
   htotpass_cat4_2016_fit_b_copy__60->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b_copy__60->SetFillColor(ci);
   htotpass_cat4_2016_fit_b_copy__60->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat4_2016_fit_b_copy__60->SetLineColor(ci);
   htotpass_cat4_2016_fit_b_copy__60->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat4_2016_fit_b_copy__60->SetMarkerColor(ci);
   htotpass_cat4_2016_fit_b_copy__60->SetMarkerSize(0);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetRange(2,23);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetLabelOffset(100);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetTitleOffset(100);
   htotpass_cat4_2016_fit_b_copy__60->GetXaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b_copy__60->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat4_2016_fit_b_copy__60->GetYaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b_copy__60->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat4_2016_fit_b_copy__60->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat4_2016_fit_b_copy__60->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat4_2016_fit_b_copy__60->GetYaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b_copy__60->GetZaxis()->SetLabelFont(42);
   htotpass_cat4_2016_fit_b_copy__60->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat4_2016_fit_b_copy__60->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat4_2016_fit_b_copy__60->GetZaxis()->SetTitleFont(42);
   htotpass_cat4_2016_fit_b_copy__60->Draw("sameaxis");
   p12pass_cat4_2016_fit_b->Modified();
   cpass_cat4_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat4_2016_fit_b
   TPad *p22pass_cat4_2016_fit_b = new TPad("p22pass_cat4_2016_fit_b", "p22pass_cat4_2016_fit_b",0,0,1,0.3);
   p22pass_cat4_2016_fit_b->Draw();
   p22pass_cat4_2016_fit_b->cd();
   p22pass_cat4_2016_fit_b->Range(13.7027,-7.912199,221.8108,5.491803);
   p22pass_cat4_2016_fit_b->SetFillColor(0);
   p22pass_cat4_2016_fit_b->SetBorderMode(0);
   p22pass_cat4_2016_fit_b->SetBorderSize(2);
   p22pass_cat4_2016_fit_b->SetTickx(1);
   p22pass_cat4_2016_fit_b->SetTicky(1);
   p22pass_cat4_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat4_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat4_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat4_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat4_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_b__61 = new TH1F("iOneWithErrorspass_cat4_2016_fit_b__61","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(1,3.794074e-07);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(2,0.3640314);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(3,0.2809997);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(4,0.3106931);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(5,0.3241646);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(6,0.3633223);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(7,0.3766156);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(8,0.3455591);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(9,0.3151083);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(10,0.3408874);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(11,0.2357731);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(12,0.246332);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(13,0.2396197);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(14,0.2026872);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(15,0.221156);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(16,0.2151458);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(17,0.2042957);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(18,0.191816);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(19,0.2046617);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(20,0.2312481);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(21,0.220994);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(22,0.2438347);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetBinError(23,0.266856);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetMinimum(-3.890998);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetMaximum(4.821602);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat4_2016_fit_b__61->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat4_2016_fit_b__61->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b__61->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__61->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b__61->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__61->Draw("");
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_b__62 = new TH1F("iOneWithErrorspass_cat4_2016_fit_b__62","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(1,3.794074e-07);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(2,0.3640314);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(3,0.2809997);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(4,0.3106931);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(5,0.3241646);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(6,0.3633223);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(7,0.3766156);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(8,0.3455591);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(9,0.3151083);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(10,0.3408874);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(11,0.2357731);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(12,0.246332);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(13,0.2396197);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(14,0.2026872);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(15,0.221156);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(16,0.2151458);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(17,0.2042957);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(18,0.191816);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(19,0.2046617);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(20,0.2312481);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(21,0.220994);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(22,0.2438347);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetBinError(23,0.266856);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetMinimum(-3.890998);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetMaximum(4.821602);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat4_2016_fit_b__62->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat4_2016_fit_b__62->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b__62->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b__62->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b__62->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b__62->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_16 = new TH1F("hstack_stack_16","hstack",23,40,201);
   hstack_stack_16->SetMinimum(0);
   hstack_stack_16->SetMaximum(0);
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
   
   
   TH1F *sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1","ggH_hbb in cat4_2016_pass_cat4",23,40,201);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat4_2016_fit_bpass_cat4_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat4_2016_fit_b__63 = new TH1F("iOneWithErrorsLinepass_cat4_2016_fit_b__63","",23,40,201);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(1,3.794074e-07);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(2,0.3640314);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(3,0.2809997);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(4,0.3106931);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(5,0.3241646);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(6,0.3633223);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(7,0.3766156);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(8,0.3455591);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(9,0.3151083);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(10,0.3408874);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(11,0.2357731);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(12,0.246332);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(13,0.2396197);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(14,0.2026872);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(15,0.221156);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(16,0.2151458);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(17,0.2042957);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(18,0.191816);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(19,0.2046617);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(20,0.2312481);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(21,0.220994);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(22,0.2438347);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetBinError(23,0.266856);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetFillColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetLineColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat4_2016_fit_b__63->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fx3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fy3016[23] = {
   0,
   1.024907,
   -0.623987,
   -0.9351136,
   -0.9746515,
   -1.593999,
   -0.6919914,
   -0.9972538,
   1.173113,
   1.003126,
   2.108851,
   1.206157,
   0.3593021,
   1.761921,
   -0.1017967,
   0.2985937,
   2.214402,
   0.4342659,
   -0.09942686,
   -1.166781,
   0.6307873,
   0.08355323,
   0.5863819};
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_felx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fely3016[23] = {
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fehx3016[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat4_2016_fit_b_fehy3016[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat4_2016_fit_b_fx3016,Graph_from_iRatiopass_cat4_2016_fit_b_fy3016,Graph_from_iRatiopass_cat4_2016_fit_b_felx3016,Graph_from_iRatiopass_cat4_2016_fit_b_fehx3016,Graph_from_iRatiopass_cat4_2016_fit_b_fely3016,Graph_from_iRatiopass_cat4_2016_fit_b_fehy3016);
   grae->SetName("Graph_from_iRatiopass_cat4_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016 = new TH1F("Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->SetMinimum(-3.174839);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->SetMaximum(3.795242);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->SetStats(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat4_2016_fit_b3016);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat4_2016_fit_b_copy__64 = new TH1F("iOneWithErrorspass_cat4_2016_fit_b_copy__64","",23,40,201);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(1,3.794074e-07);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(2,0.3640314);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(3,0.2809997);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(4,0.3106931);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(5,0.3241646);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(6,0.3633223);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(7,0.3766156);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(8,0.3455591);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(9,0.3151083);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(10,0.3408874);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(11,0.2357731);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(12,0.246332);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(13,0.2396197);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(14,0.2026872);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(15,0.221156);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(16,0.2151458);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(17,0.2042957);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(18,0.191816);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(19,0.2046617);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(20,0.2312481);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(21,0.220994);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(22,0.2438347);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetBinError(23,0.266856);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetMinimum(-3.890998);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetMaximum(4.821602);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetEntries(184);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetFillColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetLineColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetMarkerColor(ci);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->SetMarkerSize(0);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat4_2016_fit_b_copy__64->Draw("sameaxis");
   p22pass_cat4_2016_fit_b->Modified();
   cpass_cat4_2016_fit_b->cd();
   cpass_cat4_2016_fit_b->Modified();
   cpass_cat4_2016_fit_b->cd();
   cpass_cat4_2016_fit_b->SetSelected(cpass_cat4_2016_fit_b);
}
