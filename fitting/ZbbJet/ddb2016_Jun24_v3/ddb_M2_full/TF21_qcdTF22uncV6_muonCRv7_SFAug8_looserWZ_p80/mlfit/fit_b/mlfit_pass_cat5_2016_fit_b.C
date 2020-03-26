void mlfit_pass_cat5_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_b/cpass_cat5_2016_fit_b
//=========  (Wed Oct  9 22:43:00 2019) by ROOT version 6.12/07
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
   p12pass_cat5_2016_fit_b->Range(13.7027,-11.87847,221.8108,582.0452);
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
   htotpass_cat5_2016_fit_b__73->SetBinContent(1,2.351525e-06);
   htotpass_cat5_2016_fit_b__73->SetBinContent(2,285.7682);
   htotpass_cat5_2016_fit_b__73->SetBinContent(3,302.5168);
   htotpass_cat5_2016_fit_b__73->SetBinContent(4,312.3111);
   htotpass_cat5_2016_fit_b__73->SetBinContent(5,309.9736);
   htotpass_cat5_2016_fit_b__73->SetBinContent(6,325.0499);
   htotpass_cat5_2016_fit_b__73->SetBinContent(7,348.4352);
   htotpass_cat5_2016_fit_b__73->SetBinContent(8,327.6955);
   htotpass_cat5_2016_fit_b__73->SetBinContent(9,275.0458);
   htotpass_cat5_2016_fit_b__73->SetBinContent(10,242.7543);
   htotpass_cat5_2016_fit_b__73->SetBinContent(11,212.4041);
   htotpass_cat5_2016_fit_b__73->SetBinContent(12,203.8998);
   htotpass_cat5_2016_fit_b__73->SetBinContent(13,190.6702);
   htotpass_cat5_2016_fit_b__73->SetBinContent(14,181.808);
   htotpass_cat5_2016_fit_b__73->SetBinContent(15,168.3909);
   htotpass_cat5_2016_fit_b__73->SetBinContent(16,159.854);
   htotpass_cat5_2016_fit_b__73->SetBinContent(17,145.1256);
   htotpass_cat5_2016_fit_b__73->SetBinContent(18,134.2541);
   htotpass_cat5_2016_fit_b__73->SetBinContent(19,123.5435);
   htotpass_cat5_2016_fit_b__73->SetBinContent(20,112.6812);
   htotpass_cat5_2016_fit_b__73->SetBinContent(21,101.4229);
   htotpass_cat5_2016_fit_b__73->SetBinContent(22,89.04687);
   htotpass_cat5_2016_fit_b__73->SetBinContent(23,75.47302);
   htotpass_cat5_2016_fit_b__73->SetBinError(1,2.93403e-07);
   htotpass_cat5_2016_fit_b__73->SetBinError(2,8.160497);
   htotpass_cat5_2016_fit_b__73->SetBinError(3,6.299358);
   htotpass_cat5_2016_fit_b__73->SetBinError(4,6.153409);
   htotpass_cat5_2016_fit_b__73->SetBinError(5,6.463522);
   htotpass_cat5_2016_fit_b__73->SetBinError(6,12.15089);
   htotpass_cat5_2016_fit_b__73->SetBinError(7,15.62151);
   htotpass_cat5_2016_fit_b__73->SetBinError(8,13.10018);
   htotpass_cat5_2016_fit_b__73->SetBinError(9,9.8364);
   htotpass_cat5_2016_fit_b__73->SetBinError(10,8.503886);
   htotpass_cat5_2016_fit_b__73->SetBinError(11,4.364419);
   htotpass_cat5_2016_fit_b__73->SetBinError(12,3.952883);
   htotpass_cat5_2016_fit_b__73->SetBinError(13,3.415348);
   htotpass_cat5_2016_fit_b__73->SetBinError(14,3.270109);
   htotpass_cat5_2016_fit_b__73->SetBinError(15,3.0307);
   htotpass_cat5_2016_fit_b__73->SetBinError(16,2.749707);
   htotpass_cat5_2016_fit_b__73->SetBinError(17,2.4256);
   htotpass_cat5_2016_fit_b__73->SetBinError(18,2.248632);
   htotpass_cat5_2016_fit_b__73->SetBinError(19,2.287231);
   htotpass_cat5_2016_fit_b__73->SetBinError(20,2.199973);
   htotpass_cat5_2016_fit_b__73->SetBinError(21,2.294829);
   htotpass_cat5_2016_fit_b__73->SetBinError(22,2.241521);
   htotpass_cat5_2016_fit_b__73->SetBinError(23,2.136943);
   htotpass_cat5_2016_fit_b__73->SetMinimum(0);
   htotpass_cat5_2016_fit_b__73->SetMaximum(522.6529);
   htotpass_cat5_2016_fit_b__73->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b__73->SetFillColor(ci);
   htotpass_cat5_2016_fit_b__73->SetFillStyle(0);

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
   htotpass_cat5_2016_fit_b__73->Draw("hist");
   
   TH1F *qcd__74 = new TH1F("qcd__74","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__74->SetBinContent(2,284.989);
   qcd__74->SetBinContent(3,297.4798);
   qcd__74->SetBinContent(4,296.1006);
   qcd__74->SetBinContent(5,281.8652);
   qcd__74->SetBinContent(6,265.4684);
   qcd__74->SetBinContent(7,251.8883);
   qcd__74->SetBinContent(8,240.7993);
   qcd__74->SetBinContent(9,222.958);
   qcd__74->SetBinContent(10,210.3655);
   qcd__74->SetBinContent(11,201.5142);
   qcd__74->SetBinContent(12,190.4923);
   qcd__74->SetBinContent(13,181.3222);
   qcd__74->SetBinContent(14,172.145);
   qcd__74->SetBinContent(15,159.7025);
   qcd__74->SetBinContent(16,154.5446);
   qcd__74->SetBinContent(17,141.1106);
   qcd__74->SetBinContent(18,131.9998);
   qcd__74->SetBinContent(19,121.6665);
   qcd__74->SetBinContent(20,110.2337);
   qcd__74->SetBinContent(21,99.3422);
   qcd__74->SetBinContent(22,89.04687);
   qcd__74->SetBinContent(23,75.47302);
   qcd__74->SetBinError(2,8.151951);
   qcd__74->SetBinError(3,6.15735);
   qcd__74->SetBinError(4,5.524579);
   qcd__74->SetBinError(5,5.502953);
   qcd__74->SetBinError(6,6.045604);
   qcd__74->SetBinError(7,5.973878);
   qcd__74->SetBinError(8,5.655448);
   qcd__74->SetBinError(9,5.000412);
   qcd__74->SetBinError(10,4.518888);
   qcd__74->SetBinError(11,4.122191);
   qcd__74->SetBinError(12,3.465641);
   qcd__74->SetBinError(13,3.126849);
   qcd__74->SetBinError(14,2.945652);
   qcd__74->SetBinError(15,2.748576);
   qcd__74->SetBinError(16,2.636669);
   qcd__74->SetBinError(17,2.352734);
   qcd__74->SetBinError(18,2.22409);
   qcd__74->SetBinError(19,2.270535);
   qcd__74->SetBinError(20,2.170367);
   qcd__74->SetBinError(21,2.274365);
   qcd__74->SetBinError(22,2.241521);
   qcd__74->SetBinError(23,2.136943);
   qcd__74->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__74->SetLineColor(ci);
   qcd__74->SetLineStyle(2);
   qcd__74->SetLineWidth(2);
   qcd__74->GetXaxis()->SetTitle("x");
   qcd__74->GetXaxis()->SetLabelFont(42);
   qcd__74->GetXaxis()->SetLabelSize(0.035);
   qcd__74->GetXaxis()->SetTitleSize(0.035);
   qcd__74->GetXaxis()->SetTitleFont(42);
   qcd__74->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__74->GetYaxis()->SetLabelFont(42);
   qcd__74->GetYaxis()->SetLabelSize(0.035);
   qcd__74->GetYaxis()->SetTitleSize(0.035);
   qcd__74->GetYaxis()->SetTitleOffset(0);
   qcd__74->GetYaxis()->SetTitleFont(42);
   qcd__74->GetZaxis()->SetLabelFont(42);
   qcd__74->GetZaxis()->SetLabelSize(0.035);
   qcd__74->GetZaxis()->SetTitleSize(0.035);
   qcd__74->GetZaxis()->SetTitleFont(42);
   qcd__74->Draw("hist sames");
   
   TH1D *bkgUncBand_pass_2016_cat5__75 = new TH1D("bkgUncBand_pass_2016_cat5__75","bkgUncBand_pass_2016_cat5",23,40,201);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(1,2.472835e-06);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(2,287.5103);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(3,302.312);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(4,311.314);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(5,307.7556);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(6,325.0847);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(7,349.1005);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(8,328.2312);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(9,273.6656);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(10,240.1273);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(11,208.8755);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(12,200.4921);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(13,187.2157);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(14,178.8293);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(15,165.8445);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(16,157.761);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(17,143.4723);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(18,132.9415);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(19,122.6551);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(20,111.7774);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(21,101.094);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(22,88.98893);
   bkgUncBand_pass_2016_cat5__75->SetBinContent(23,75.55106);
   bkgUncBand_pass_2016_cat5__75->SetBinError(1,3.07363e-07);
   bkgUncBand_pass_2016_cat5__75->SetBinError(2,8.383182);
   bkgUncBand_pass_2016_cat5__75->SetBinError(3,6.343568);
   bkgUncBand_pass_2016_cat5__75->SetBinError(4,5.831144);
   bkgUncBand_pass_2016_cat5__75->SetBinError(5,6.091268);
   bkgUncBand_pass_2016_cat5__75->SetBinError(6,10.25347);
   bkgUncBand_pass_2016_cat5__75->SetBinError(7,9.284757);
   bkgUncBand_pass_2016_cat5__75->SetBinError(8,9.048465);
   bkgUncBand_pass_2016_cat5__75->SetBinError(9,8.296953);
   bkgUncBand_pass_2016_cat5__75->SetBinError(10,5.71938);
   bkgUncBand_pass_2016_cat5__75->SetBinError(11,4.390688);
   bkgUncBand_pass_2016_cat5__75->SetBinError(12,4.179755);
   bkgUncBand_pass_2016_cat5__75->SetBinError(13,3.39267);
   bkgUncBand_pass_2016_cat5__75->SetBinError(14,3.051663);
   bkgUncBand_pass_2016_cat5__75->SetBinError(15,2.81837);
   bkgUncBand_pass_2016_cat5__75->SetBinError(16,2.729085);
   bkgUncBand_pass_2016_cat5__75->SetBinError(17,2.504636);
   bkgUncBand_pass_2016_cat5__75->SetBinError(18,2.307898);
   bkgUncBand_pass_2016_cat5__75->SetBinError(19,2.257427);
   bkgUncBand_pass_2016_cat5__75->SetBinError(20,2.248138);
   bkgUncBand_pass_2016_cat5__75->SetBinError(21,2.28154);
   bkgUncBand_pass_2016_cat5__75->SetBinError(22,2.382102);
   bkgUncBand_pass_2016_cat5__75->SetBinError(23,2.330779);
   bkgUncBand_pass_2016_cat5__75->SetEntries(23);

   ci = TColor::GetColor("#3366cc");
   bkgUncBand_pass_2016_cat5__75->SetFillColor(ci);
   bkgUncBand_pass_2016_cat5__75->SetFillStyle(3001);

   ci = TColor::GetColor("#000099");
   bkgUncBand_pass_2016_cat5__75->SetLineColor(ci);
   bkgUncBand_pass_2016_cat5__75->SetLineStyle(0);
   bkgUncBand_pass_2016_cat5__75->GetXaxis()->SetTitle("mSD");
   bkgUncBand_pass_2016_cat5__75->GetXaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat5__75->GetXaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat5__75->GetXaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat5__75->GetXaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat5__75->GetYaxis()->SetTitle("Events / bin");
   bkgUncBand_pass_2016_cat5__75->GetYaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat5__75->GetYaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat5__75->GetYaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat5__75->GetYaxis()->SetTitleOffset(0);
   bkgUncBand_pass_2016_cat5__75->GetYaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat5__75->GetZaxis()->SetLabelFont(42);
   bkgUncBand_pass_2016_cat5__75->GetZaxis()->SetLabelSize(0.035);
   bkgUncBand_pass_2016_cat5__75->GetZaxis()->SetTitleSize(0.035);
   bkgUncBand_pass_2016_cat5__75->GetZaxis()->SetTitleFont(42);
   bkgUncBand_pass_2016_cat5__75->Draw("E2 same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis19[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_19 = new TH1F("hstackMC_stack_19","hstackMC",23, xAxis19);
   hstackMC_stack_19->SetMinimum(0);
   hstackMC_stack_19->SetMaximum(101.3743);
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
   tqq_stack_1->SetBinContent(2,0.3621986);
   tqq_stack_1->SetBinContent(3,1.297549);
   tqq_stack_1->SetBinContent(4,2.93526);
   tqq_stack_1->SetBinContent(5,4.847973);
   tqq_stack_1->SetBinContent(6,4.768003);
   tqq_stack_1->SetBinContent(7,7.859197);
   tqq_stack_1->SetBinContent(8,8.869626);
   tqq_stack_1->SetBinContent(9,5.76303);
   tqq_stack_1->SetBinContent(10,11.31231);
   tqq_stack_1->SetBinContent(11,6.703649);
   tqq_stack_1->SetBinContent(12,11.28274);
   tqq_stack_1->SetBinContent(13,9.34803);
   tqq_stack_1->SetBinContent(14,9.662995);
   tqq_stack_1->SetBinContent(15,8.688465);
   tqq_stack_1->SetBinContent(16,5.309399);
   tqq_stack_1->SetBinContent(17,4.015007);
   tqq_stack_1->SetBinContent(18,2.254372);
   tqq_stack_1->SetBinContent(19,1.877003);
   tqq_stack_1->SetBinContent(20,2.447551);
   tqq_stack_1->SetBinContent(21,2.080654);
   tqq_stack_1->SetBinError(2,0.05323053);
   tqq_stack_1->SetBinError(3,0.1906944);
   tqq_stack_1->SetBinError(4,0.4313807);
   tqq_stack_1->SetBinError(5,0.7124826);
   tqq_stack_1->SetBinError(6,0.7007298);
   tqq_stack_1->SetBinError(7,1.155027);
   tqq_stack_1->SetBinError(8,1.303525);
   tqq_stack_1->SetBinError(9,0.8469641);
   tqq_stack_1->SetBinError(10,1.662514);
   tqq_stack_1->SetBinError(11,0.9852021);
   tqq_stack_1->SetBinError(12,1.658168);
   tqq_stack_1->SetBinError(13,1.373834);
   tqq_stack_1->SetBinError(14,1.420123);
   tqq_stack_1->SetBinError(15,1.276901);
   tqq_stack_1->SetBinError(16,0.7802959);
   tqq_stack_1->SetBinError(17,0.5900658);
   tqq_stack_1->SetBinError(18,0.3313138);
   tqq_stack_1->SetBinError(19,0.2758538);
   tqq_stack_1->SetBinError(20,0.3597045);
   tqq_stack_1->SetBinError(21,0.3057834);
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
   wqq_stack_2->SetBinContent(1,1.032041e-06);
   wqq_stack_2->SetBinContent(2,0.01644387);
   wqq_stack_2->SetBinContent(3,2.643021);
   wqq_stack_2->SetBinContent(4,9.309413);
   wqq_stack_2->SetBinContent(5,17.1476);
   wqq_stack_2->SetBinContent(6,34.37669);
   wqq_stack_2->SetBinContent(7,49.55338);
   wqq_stack_2->SetBinContent(8,23.81262);
   wqq_stack_2->SetBinContent(9,7.676482);
   wqq_stack_2->SetBinContent(10,1.987988);
   wqq_stack_2->SetBinContent(11,0.9107614);
   wqq_stack_2->SetBinContent(12,1.032041e-06);
   wqq_stack_2->SetBinContent(13,1.032041e-06);
   wqq_stack_2->SetBinContent(14,1.032041e-06);
   wqq_stack_2->SetBinContent(15,1.032041e-06);
   wqq_stack_2->SetBinContent(16,1.032041e-06);
   wqq_stack_2->SetBinContent(17,1.032041e-06);
   wqq_stack_2->SetBinContent(18,1.032041e-06);
   wqq_stack_2->SetBinContent(19,1.032041e-06);
   wqq_stack_2->SetBinContent(20,1.032041e-06);
   wqq_stack_2->SetBinContent(21,1.032041e-06);
   wqq_stack_2->SetBinContent(22,1.032041e-06);
   wqq_stack_2->SetBinContent(23,1.032041e-06);
   wqq_stack_2->SetBinError(1,1.912856e-07);
   wqq_stack_2->SetBinError(2,0.007455929);
   wqq_stack_2->SetBinError(3,1.185674);
   wqq_stack_2->SetBinError(4,2.369982);
   wqq_stack_2->SetBinError(5,3.118904);
   wqq_stack_2->SetBinError(6,7.317931);
   wqq_stack_2->SetBinError(7,11.70054);
   wqq_stack_2->SetBinError(8,8.11804);
   wqq_stack_2->SetBinError(9,2.579461);
   wqq_stack_2->SetBinError(10,0.5247591);
   wqq_stack_2->SetBinError(11,0.4102605);
   wqq_stack_2->SetBinError(12,1.912856e-07);
   wqq_stack_2->SetBinError(13,1.912856e-07);
   wqq_stack_2->SetBinError(14,1.912856e-07);
   wqq_stack_2->SetBinError(15,1.912856e-07);
   wqq_stack_2->SetBinError(16,1.912856e-07);
   wqq_stack_2->SetBinError(17,1.912856e-07);
   wqq_stack_2->SetBinError(18,1.912856e-07);
   wqq_stack_2->SetBinError(19,1.912856e-07);
   wqq_stack_2->SetBinError(20,1.912856e-07);
   wqq_stack_2->SetBinError(21,1.912856e-07);
   wqq_stack_2->SetBinError(22,1.912856e-07);
   wqq_stack_2->SetBinError(23,1.912856e-07);
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
   zqq_stack_3->SetBinContent(1,1.319484e-06);
   zqq_stack_3->SetBinContent(2,0.4006261);
   zqq_stack_3->SetBinContent(3,1.096433);
   zqq_stack_3->SetBinContent(4,3.965791);
   zqq_stack_3->SetBinContent(5,6.112851);
   zqq_stack_3->SetBinContent(6,20.4368);
   zqq_stack_3->SetBinContent(7,39.13437);
   zqq_stack_3->SetBinContent(8,54.21388);
   zqq_stack_3->SetBinContent(9,38.64827);
   zqq_stack_3->SetBinContent(10,19.08849);
   zqq_stack_3->SetBinContent(11,3.275476);
   zqq_stack_3->SetBinContent(12,2.124783);
   zqq_stack_3->SetBinContent(13,1.319484e-06);
   zqq_stack_3->SetBinContent(14,1.319484e-06);
   zqq_stack_3->SetBinContent(15,1.319484e-06);
   zqq_stack_3->SetBinContent(16,1.319484e-06);
   zqq_stack_3->SetBinContent(17,1.319484e-06);
   zqq_stack_3->SetBinContent(18,1.319484e-06);
   zqq_stack_3->SetBinContent(19,1.319484e-06);
   zqq_stack_3->SetBinContent(20,1.319484e-06);
   zqq_stack_3->SetBinContent(21,1.319484e-06);
   zqq_stack_3->SetBinContent(22,1.319484e-06);
   zqq_stack_3->SetBinContent(23,1.319484e-06);
   zqq_stack_3->SetBinError(1,2.22475e-07);
   zqq_stack_3->SetBinError(2,0.3694901);
   zqq_stack_3->SetBinError(3,0.5716293);
   zqq_stack_3->SetBinError(4,1.241194);
   zqq_stack_3->SetBinError(5,1.122248);
   zqq_stack_3->SetBinError(6,7.553257);
   zqq_stack_3->SetBinError(7,8.373022);
   zqq_stack_3->SetBinError(8,8.486975);
   zqq_stack_3->SetBinError(9,8.023694);
   zqq_stack_3->SetBinError(10,6.989735);
   zqq_stack_3->SetBinError(11,0.9574719);
   zqq_stack_3->SetBinError(12,0.9301056);
   zqq_stack_3->SetBinError(13,2.22475e-07);
   zqq_stack_3->SetBinError(14,2.22475e-07);
   zqq_stack_3->SetBinError(15,2.22475e-07);
   zqq_stack_3->SetBinError(16,2.22475e-07);
   zqq_stack_3->SetBinError(17,2.22475e-07);
   zqq_stack_3->SetBinError(18,2.22475e-07);
   zqq_stack_3->SetBinError(19,2.22475e-07);
   zqq_stack_3->SetBinError(20,2.22475e-07);
   zqq_stack_3->SetBinError(21,2.22475e-07);
   zqq_stack_3->SetBinError(22,2.22475e-07);
   zqq_stack_3->SetBinError(23,2.22475e-07);
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
   
   TH1F *hsigpass_cat5_2016_fit_b_stack_4 = new TH1F("hsigpass_cat5_2016_fit_b_stack_4","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
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
   17.9906,
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
   16.96107,
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
   entry=leg->AddEntry("bkgUncBand_pass_2016_cat5","Total background","lf");

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
   
   TH1F *htotpass_cat5_2016_fit_b_copy__76 = new TH1F("htotpass_cat5_2016_fit_b_copy__76","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(1,2.351525e-06);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(2,285.7682);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(3,302.5168);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(4,312.3111);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(5,309.9736);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(6,325.0499);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(7,348.4352);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(8,327.6955);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(9,275.0458);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(10,242.7543);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(11,212.4041);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(12,203.8998);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(13,190.6702);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(14,181.808);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(15,168.3909);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(16,159.854);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(17,145.1256);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(18,134.2541);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(19,123.5435);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(20,112.6812);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(21,101.4229);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(22,89.04687);
   htotpass_cat5_2016_fit_b_copy__76->SetBinContent(23,75.47302);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(1,2.93403e-07);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(2,8.160497);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(3,6.299358);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(4,6.153409);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(5,6.463522);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(6,12.15089);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(7,15.62151);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(8,13.10018);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(9,9.8364);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(10,8.503886);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(11,4.364419);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(12,3.952883);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(13,3.415348);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(14,3.270109);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(15,3.0307);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(16,2.749707);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(17,2.4256);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(18,2.248632);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(19,2.287231);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(20,2.199973);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(21,2.294829);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(22,2.241521);
   htotpass_cat5_2016_fit_b_copy__76->SetBinError(23,2.136943);
   htotpass_cat5_2016_fit_b_copy__76->SetMaximum(522.6529);
   htotpass_cat5_2016_fit_b_copy__76->SetEntries(92);
   htotpass_cat5_2016_fit_b_copy__76->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__76->SetFillColor(ci);
   htotpass_cat5_2016_fit_b_copy__76->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_b_copy__76->SetLineColor(ci);
   htotpass_cat5_2016_fit_b_copy__76->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_b_copy__76->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_b_copy__76->SetMarkerSize(0);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_b_copy__76->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__76->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_b_copy__76->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__76->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_b_copy__76->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_b_copy__76->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_b_copy__76->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__76->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_b_copy__76->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_b_copy__76->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_b_copy__76->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_b_copy__76->Draw("sameaxis");
   p12pass_cat5_2016_fit_b->Modified();
   cpass_cat5_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_b
   TPad *p22pass_cat5_2016_fit_b = new TPad("p22pass_cat5_2016_fit_b", "p22pass_cat5_2016_fit_b",0,0,1,0.3);
   p22pass_cat5_2016_fit_b->Draw();
   p22pass_cat5_2016_fit_b->cd();
   p22pass_cat5_2016_fit_b->Range(13.7027,-8.096377,221.8108,4.29429);
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
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b__77 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b__77","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(1,3.338988e-07);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(2,0.4797013);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(3,0.3475296);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(4,0.3234753);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(5,0.3331938);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(6,0.5516137);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(7,0.4859614);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(8,0.4696474);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(9,0.5114671);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(10,0.3432795);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(11,0.2927626);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(12,0.2780593);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(13,0.233303);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(14,0.2063469);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(15,0.216849);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(16,0.1981467);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(17,0.1982852);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(18,0.1909994);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(19,0.2108482);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(20,0.1969189);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(21,0.2224692);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(22,0.2631022);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetBinError(23,0.2382534);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetMinimum(-4.379176);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetMaximum(3.674757);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_b__77->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_b__77->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_b__77->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__77->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_b__77->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_b__77->Draw("");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_b__78 = new TH1F("iOneWithErrorspass_cat5_2016_fit_b__78","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(1,3.338988e-07);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(2,0.4797013);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(3,0.3475296);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(4,0.3234753);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(5,0.3331938);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(6,0.5516137);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(7,0.4859614);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(8,0.4696474);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(9,0.5114671);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(10,0.3432795);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(11,0.2927626);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(12,0.2780593);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(13,0.233303);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(14,0.2063469);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(15,0.216849);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(16,0.1981467);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(17,0.1982852);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(18,0.1909994);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(19,0.2108482);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(20,0.1969189);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(21,0.2224692);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(22,0.2631022);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetBinError(23,0.2382534);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMinimum(-4.379176);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetMaximum(3.674757);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_b__78->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b__78->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat5_2016_fit_b__78->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat5_2016_fit_b__78->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_20 = new TH1F("hstack_stack_20","hstack",23,40,201);
   hstack_stack_20->SetMinimum(0);
   hstack_stack_20->SetMaximum(0);
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
   
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_bpass_cat5_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_b__79 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_b__79","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(1,3.338988e-07);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(2,0.4797013);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(3,0.3475296);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(4,0.3234753);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(5,0.3331938);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(6,0.5516137);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(7,0.4859614);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(8,0.4696474);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(9,0.5114671);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(10,0.3432795);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(11,0.2927626);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(12,0.2780593);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(13,0.233303);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(14,0.2063469);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(15,0.216849);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(16,0.1981467);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(17,0.1982852);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(18,0.1909994);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(19,0.2108482);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(20,0.1969189);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(21,0.2224692);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(22,0.2631022);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetBinError(23,0.2382534);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorsLinepass_cat5_2016_fit_b__79->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   0.1240509,
   0.665153,
   -0.3032808,
   0.3206272,
   0.1020906,
   -0.1309799,
   1.22875,
   -1.785683,
   1.062249,
   -0.1660241,
   0.4566311,
   0.4203124,
   1.449838,
   -0.993113,
   1.129725,
   0.1425181,
   -0.02197961,
   -1.919451,
   0.5292317,
   -0.6601218,
   -1.882428,
   1.021064};
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_b_fx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fy3020,Graph_from_iRatiopass_cat5_2016_fit_b_felx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fehx3020,Graph_from_iRatiopass_cat5_2016_fit_b_fely3020,Graph_from_iRatiopass_cat5_2016_fit_b_fehy3020);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMinimum(-3.45638);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_b3020->SetMaximum(2.986767);
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
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(1,3.338988e-07);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(2,0.4797013);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(3,0.3475296);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(4,0.3234753);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(5,0.3331938);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(6,0.5516137);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(7,0.4859614);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(8,0.4696474);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(9,0.5114671);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(10,0.3432795);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(11,0.2927626);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(12,0.2780593);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(13,0.233303);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(14,0.2063469);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(15,0.216849);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(16,0.1981467);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(17,0.1982852);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(18,0.1909994);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(19,0.2108482);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(20,0.1969189);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(21,0.2224692);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(22,0.2631022);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetBinError(23,0.2382534);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMinimum(-4.379176);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetMaximum(3.674757);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat5_2016_fit_b_copy__80->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
