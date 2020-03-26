void mlfit_pass_cat5_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat5_2016_fit_s/cpass_cat5_2016_fit_s
//=========  (Wed Oct  9 22:43:09 2019) by ROOT version 6.12/07
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
   p12pass_cat5_2016_fit_s->Range(13.7027,-11.91804,221.8108,583.984);
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
   htotpass_cat5_2016_fit_s__73->SetBinContent(1,2.713098e-06);
   htotpass_cat5_2016_fit_s__73->SetBinContent(2,290.1917);
   htotpass_cat5_2016_fit_s__73->SetBinContent(3,302.6387);
   htotpass_cat5_2016_fit_s__73->SetBinContent(4,309.9138);
   htotpass_cat5_2016_fit_s__73->SetBinContent(5,305.0211);
   htotpass_cat5_2016_fit_s__73->SetBinContent(6,325.3434);
   htotpass_cat5_2016_fit_s__73->SetBinContent(7,349.5959);
   htotpass_cat5_2016_fit_s__73->SetBinContent(8,327.2117);
   htotpass_cat5_2016_fit_s__73->SetBinContent(9,271.1499);
   htotpass_cat5_2016_fit_s__73->SetBinContent(10,237.5133);
   htotpass_cat5_2016_fit_s__73->SetBinContent(11,203.8903);
   htotpass_cat5_2016_fit_s__73->SetBinContent(12,195.7087);
   htotpass_cat5_2016_fit_s__73->SetBinContent(13,182.857);
   htotpass_cat5_2016_fit_s__73->SetBinContent(14,174.8222);
   htotpass_cat5_2016_fit_s__73->SetBinContent(15,162.4788);
   htotpass_cat5_2016_fit_s__73->SetBinContent(16,154.9829);
   htotpass_cat5_2016_fit_s__73->SetBinContent(17,141.2818);
   htotpass_cat5_2016_fit_s__73->SetBinContent(18,131.3025);
   htotpass_cat5_2016_fit_s__73->SetBinContent(19,121.3453);
   htotpass_cat5_2016_fit_s__73->SetBinContent(20,111.1131);
   htotpass_cat5_2016_fit_s__73->SetBinContent(21,100.5033);
   htotpass_cat5_2016_fit_s__73->SetBinContent(22,88.85337);
   htotpass_cat5_2016_fit_s__73->SetBinContent(23,75.75573);
   htotpass_cat5_2016_fit_s__73->SetBinError(1,3.220303e-07);
   htotpass_cat5_2016_fit_s__73->SetBinError(2,8.925047);
   htotpass_cat5_2016_fit_s__73->SetBinError(3,6.178854);
   htotpass_cat5_2016_fit_s__73->SetBinError(4,6.372967);
   htotpass_cat5_2016_fit_s__73->SetBinError(5,6.883626);
   htotpass_cat5_2016_fit_s__73->SetBinError(6,12.60032);
   htotpass_cat5_2016_fit_s__73->SetBinError(7,17.06633);
   htotpass_cat5_2016_fit_s__73->SetBinError(8,13.29545);
   htotpass_cat5_2016_fit_s__73->SetBinError(9,9.886088);
   htotpass_cat5_2016_fit_s__73->SetBinError(10,8.780362);
   htotpass_cat5_2016_fit_s__73->SetBinError(11,4.749066);
   htotpass_cat5_2016_fit_s__73->SetBinError(12,4.351247);
   htotpass_cat5_2016_fit_s__73->SetBinError(13,3.965954);
   htotpass_cat5_2016_fit_s__73->SetBinError(14,3.618797);
   htotpass_cat5_2016_fit_s__73->SetBinError(15,3.332929);
   htotpass_cat5_2016_fit_s__73->SetBinError(16,3.078429);
   htotpass_cat5_2016_fit_s__73->SetBinError(17,2.750761);
   htotpass_cat5_2016_fit_s__73->SetBinError(18,2.509025);
   htotpass_cat5_2016_fit_s__73->SetBinError(19,2.5041);
   htotpass_cat5_2016_fit_s__73->SetBinError(20,2.323561);
   htotpass_cat5_2016_fit_s__73->SetBinError(21,2.345255);
   htotpass_cat5_2016_fit_s__73->SetBinError(22,2.434852);
   htotpass_cat5_2016_fit_s__73->SetBinError(23,2.310643);
   htotpass_cat5_2016_fit_s__73->SetMinimum(0);
   htotpass_cat5_2016_fit_s__73->SetMaximum(524.3938);
   htotpass_cat5_2016_fit_s__73->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s__73->SetFillColor(ci);
   htotpass_cat5_2016_fit_s__73->SetFillStyle(0);

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
   htotpass_cat5_2016_fit_s__73->Draw("hist");
   
   TH1F *qcd__74 = new TH1F("qcd__74","qcd in cat5_2016_pass_cat5",23,40,201);
   qcd__74->SetBinContent(2,289.2542);
   qcd__74->SetBinContent(3,296.6215);
   qcd__74->SetBinContent(4,291.2662);
   qcd__74->SetBinContent(5,274.2829);
   qcd__74->SetBinContent(6,255.8051);
   qcd__74->SetBinContent(7,241.6498);
   qcd__74->SetBinContent(8,230.7645);
   qcd__74->SetBinContent(9,213.365);
   qcd__74->SetBinContent(10,201.5528);
   qcd__74->SetBinContent(11,193.1172);
   qcd__74->SetBinContent(12,182.7937);
   qcd__74->SetBinContent(13,174.342);
   qcd__74->SetBinContent(14,166.0203);
   qcd__74->SetBinContent(15,154.5646);
   qcd__74->SetBinContent(16,150.1466);
   qcd__74->SetBinContent(17,137.6245);
   qcd__74->SetBinContent(18,129.249);
   qcd__74->SetBinContent(19,119.6356);
   qcd__74->SetBinContent(20,108.8836);
   qcd__74->SetBinContent(21,98.60807);
   qcd__74->SetBinContent(22,88.85337);
   qcd__74->SetBinContent(23,75.75573);
   qcd__74->SetBinError(2,8.916027);
   qcd__74->SetBinError(3,6.035969);
   qcd__74->SetBinError(4,5.748264);
   qcd__74->SetBinError(5,5.957707);
   qcd__74->SetBinError(6,6.434101);
   qcd__74->SetBinError(7,6.72671);
   qcd__74->SetBinError(8,5.938658);
   qcd__74->SetBinError(9,5.441365);
   qcd__74->SetBinError(10,5.019662);
   qcd__74->SetBinError(11,4.557203);
   qcd__74->SetBinError(12,3.958826);
   qcd__74->SetBinError(13,3.75128);
   qcd__74->SetBinError(14,3.365335);
   qcd__74->SetBinError(15,3.110829);
   qcd__74->SetBinError(16,2.990366);
   qcd__74->SetBinError(17,2.694637);
   qcd__74->SetBinError(18,2.48975);
   qcd__74->SetBinError(19,2.490727);
   qcd__74->SetBinError(20,2.298992);
   qcd__74->SetBinError(21,2.327691);
   qcd__74->SetBinError(22,2.434852);
   qcd__74->SetBinError(23,2.310643);
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
   hstackMC_stack_19->SetMaximum(114.361);
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
   tqq_stack_1->SetBinContent(2,0.3299233);
   tqq_stack_1->SetBinContent(3,1.181925);
   tqq_stack_1->SetBinContent(4,2.673701);
   tqq_stack_1->SetBinContent(5,4.415972);
   tqq_stack_1->SetBinContent(6,4.343129);
   tqq_stack_1->SetBinContent(7,7.158867);
   tqq_stack_1->SetBinContent(8,8.079257);
   tqq_stack_1->SetBinContent(9,5.249488);
   tqq_stack_1->SetBinContent(10,10.30427);
   tqq_stack_1->SetBinContent(11,6.10629);
   tqq_stack_1->SetBinContent(12,10.27734);
   tqq_stack_1->SetBinContent(13,8.515032);
   tqq_stack_1->SetBinContent(14,8.801929);
   tqq_stack_1->SetBinContent(15,7.91424);
   tqq_stack_1->SetBinContent(16,4.836281);
   tqq_stack_1->SetBinContent(17,3.657232);
   tqq_stack_1->SetBinContent(18,2.053486);
   tqq_stack_1->SetBinContent(19,1.709744);
   tqq_stack_1->SetBinContent(20,2.229451);
   tqq_stack_1->SetBinContent(21,1.895248);
   tqq_stack_1->SetBinError(2,0.04987096);
   tqq_stack_1->SetBinError(3,0.1786589);
   tqq_stack_1->SetBinError(4,0.4041546);
   tqq_stack_1->SetBinError(5,0.6675152);
   tqq_stack_1->SetBinError(6,0.6565042);
   tqq_stack_1->SetBinError(7,1.082129);
   tqq_stack_1->SetBinError(8,1.221254);
   tqq_stack_1->SetBinError(9,0.7935089);
   tqq_stack_1->SetBinError(10,1.557586);
   tqq_stack_1->SetBinError(11,0.9230223);
   tqq_stack_1->SetBinError(12,1.553515);
   tqq_stack_1->SetBinError(13,1.287126);
   tqq_stack_1->SetBinError(14,1.330493);
   tqq_stack_1->SetBinError(15,1.196311);
   tqq_stack_1->SetBinError(16,0.7310486);
   tqq_stack_1->SetBinError(17,0.5528245);
   tqq_stack_1->SetBinError(18,0.3104034);
   tqq_stack_1->SetBinError(19,0.2584437);
   tqq_stack_1->SetBinError(20,0.3370021);
   tqq_stack_1->SetBinError(21,0.2864843);
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
   wqq_stack_2->SetBinContent(1,1.133344e-06);
   wqq_stack_2->SetBinContent(2,0.02079354);
   wqq_stack_2->SetBinContent(3,3.336752);
   wqq_stack_2->SetBinContent(4,10.90901);
   wqq_stack_2->SetBinContent(5,19.08301);
   wqq_stack_2->SetBinContent(6,38.58589);
   wqq_stack_2->SetBinContent(7,53.29583);
   wqq_stack_2->SetBinContent(8,24.76636);
   wqq_stack_2->SetBinContent(9,8.742302);
   wqq_stack_2->SetBinContent(10,2.105725);
   wqq_stack_2->SetBinContent(11,1.060647);
   wqq_stack_2->SetBinContent(12,1.133344e-06);
   wqq_stack_2->SetBinContent(13,1.133344e-06);
   wqq_stack_2->SetBinContent(14,1.133344e-06);
   wqq_stack_2->SetBinContent(15,1.133344e-06);
   wqq_stack_2->SetBinContent(16,1.133344e-06);
   wqq_stack_2->SetBinContent(17,1.133344e-06);
   wqq_stack_2->SetBinContent(18,1.133344e-06);
   wqq_stack_2->SetBinContent(19,1.133344e-06);
   wqq_stack_2->SetBinContent(20,1.133344e-06);
   wqq_stack_2->SetBinContent(21,1.133344e-06);
   wqq_stack_2->SetBinContent(22,1.133344e-06);
   wqq_stack_2->SetBinContent(23,1.133344e-06);
   wqq_stack_2->SetBinError(1,1.975772e-07);
   wqq_stack_2->SetBinError(2,0.007280488);
   wqq_stack_2->SetBinError(3,1.157552);
   wqq_stack_2->SetBinError(4,2.349333);
   wqq_stack_2->SetBinError(5,3.164266);
   wqq_stack_2->SetBinError(6,6.982748);
   wqq_stack_2->SetBinError(7,12.40678);
   wqq_stack_2->SetBinError(8,7.261716);
   wqq_stack_2->SetBinError(9,2.436911);
   wqq_stack_2->SetBinError(10,0.5302433);
   wqq_stack_2->SetBinError(11,0.3841866);
   wqq_stack_2->SetBinError(12,1.975772e-07);
   wqq_stack_2->SetBinError(13,1.975772e-07);
   wqq_stack_2->SetBinError(14,1.975772e-07);
   wqq_stack_2->SetBinError(15,1.975772e-07);
   wqq_stack_2->SetBinError(16,1.975772e-07);
   wqq_stack_2->SetBinError(17,1.975772e-07);
   wqq_stack_2->SetBinError(18,1.975772e-07);
   wqq_stack_2->SetBinError(19,1.975772e-07);
   wqq_stack_2->SetBinError(20,1.975772e-07);
   wqq_stack_2->SetBinError(21,1.975772e-07);
   wqq_stack_2->SetBinError(22,1.975772e-07);
   wqq_stack_2->SetBinError(23,1.975772e-07);
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
   zqq_stack_3->SetBinContent(1,1.579753e-06);
   zqq_stack_3->SetBinContent(2,0.5868592);
   zqq_stack_3->SetBinContent(3,1.498565);
   zqq_stack_3->SetBinContent(4,5.064879);
   zqq_stack_3->SetBinContent(5,7.23923);
   zqq_stack_3->SetBinContent(6,26.60923);
   zqq_stack_3->SetBinContent(7,47.49136);
   zqq_stack_3->SetBinContent(8,63.60162);
   zqq_stack_3->SetBinContent(9,43.79305);
   zqq_stack_3->SetBinContent(10,23.55044);
   zqq_stack_3->SetBinContent(11,3.606096);
   zqq_stack_3->SetBinContent(12,2.637739);
   zqq_stack_3->SetBinContent(13,1.579753e-06);
   zqq_stack_3->SetBinContent(14,1.579753e-06);
   zqq_stack_3->SetBinContent(15,1.579753e-06);
   zqq_stack_3->SetBinContent(16,1.579753e-06);
   zqq_stack_3->SetBinContent(17,1.579753e-06);
   zqq_stack_3->SetBinContent(18,1.579753e-06);
   zqq_stack_3->SetBinContent(19,1.579753e-06);
   zqq_stack_3->SetBinContent(20,1.579753e-06);
   zqq_stack_3->SetBinContent(21,1.579753e-06);
   zqq_stack_3->SetBinContent(22,1.579753e-06);
   zqq_stack_3->SetBinContent(23,1.579753e-06);
   zqq_stack_3->SetBinError(1,2.542966e-07);
   zqq_stack_3->SetBinError(2,0.39797);
   zqq_stack_3->SetBinError(3,0.6111147);
   zqq_stack_3->SetBinError(4,1.374573);
   zqq_stack_3->SetBinError(5,1.196614);
   zqq_stack_3->SetBinError(6,8.257164);
   zqq_stack_3->SetBinError(7,9.534756);
   zqq_stack_3->SetBinError(8,9.342228);
   zqq_stack_3->SetBinError(9,7.845896);
   zqq_stack_3->SetBinError(10,7.013596);
   zqq_stack_3->SetBinError(11,0.8865424);
   zqq_stack_3->SetBinError(12,0.9206724);
   zqq_stack_3->SetBinError(13,2.542966e-07);
   zqq_stack_3->SetBinError(14,2.542966e-07);
   zqq_stack_3->SetBinError(15,2.542966e-07);
   zqq_stack_3->SetBinError(16,2.542966e-07);
   zqq_stack_3->SetBinError(17,2.542966e-07);
   zqq_stack_3->SetBinError(18,2.542966e-07);
   zqq_stack_3->SetBinError(19,2.542966e-07);
   zqq_stack_3->SetBinError(20,2.542966e-07);
   zqq_stack_3->SetBinError(21,2.542966e-07);
   zqq_stack_3->SetBinError(22,2.542966e-07);
   zqq_stack_3->SetBinError(23,2.542966e-07);
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
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(1,5.181794e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(2,0.03436451);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(3,0.7348468);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(4,0.01126545);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(5,0.3058684);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(6,0.6090516);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(7,0.9691545);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(8,1.69159);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(9,2.692227);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(10,3.259185);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(11,11.18431);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(12,15.28469);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(13,17.36913);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(14,10.57475);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(15,7.243904);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(16,1.812847);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(17,0.09935878);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(18,0.02175464);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(19,0.02822689);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(20,0.05379696);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(21,0.02241443);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(22,0.01103482);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinContent(23,0.01187013);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(1,1.90883e-07);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(2,0.01541674);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(3,0.3173584);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(4,0.005053799);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(5,0.08964081);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(6,0.243765);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(7,0.4273752);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(8,0.6797591);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(9,0.9966315);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(10,1.117231);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(11,5.588007);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(12,6.30042);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(13,6.518841);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(14,4.061987);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(15,3.017825);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(16,0.7810454);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(17,0.03237475);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(18,0.007799252);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(19,0.0114259);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(20,0.01819905);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(21,0.01005557);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(22,0.004950332);
   hsigpass_cat5_2016_fit_s_stack_4->SetBinError(23,0.005325074);
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
   
   TH1F *htotpass_cat5_2016_fit_s_copy__76 = new TH1F("htotpass_cat5_2016_fit_s_copy__76","wqq in cat5_2016_pass_cat5",23,40,201);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(1,2.713098e-06);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(2,290.1917);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(3,302.6387);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(4,309.9138);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(5,305.0211);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(6,325.3434);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(7,349.5959);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(8,327.2117);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(9,271.1499);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(10,237.5133);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(11,203.8903);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(12,195.7087);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(13,182.857);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(14,174.8222);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(15,162.4788);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(16,154.9829);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(17,141.2818);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(18,131.3025);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(19,121.3453);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(20,111.1131);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(21,100.5033);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(22,88.85337);
   htotpass_cat5_2016_fit_s_copy__76->SetBinContent(23,75.75573);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(1,3.220303e-07);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(2,8.925047);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(3,6.178854);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(4,6.372967);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(5,6.883626);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(6,12.60032);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(7,17.06633);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(8,13.29545);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(9,9.886088);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(10,8.780362);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(11,4.749066);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(12,4.351247);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(13,3.965954);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(14,3.618797);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(15,3.332929);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(16,3.078429);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(17,2.750761);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(18,2.509025);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(19,2.5041);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(20,2.323561);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(21,2.345255);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(22,2.434852);
   htotpass_cat5_2016_fit_s_copy__76->SetBinError(23,2.310643);
   htotpass_cat5_2016_fit_s_copy__76->SetMaximum(524.3938);
   htotpass_cat5_2016_fit_s_copy__76->SetEntries(92);
   htotpass_cat5_2016_fit_s_copy__76->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s_copy__76->SetFillColor(ci);
   htotpass_cat5_2016_fit_s_copy__76->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat5_2016_fit_s_copy__76->SetLineColor(ci);
   htotpass_cat5_2016_fit_s_copy__76->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat5_2016_fit_s_copy__76->SetMarkerColor(ci);
   htotpass_cat5_2016_fit_s_copy__76->SetMarkerSize(0);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetRange(2,23);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetLabelOffset(100);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetTitleOffset(100);
   htotpass_cat5_2016_fit_s_copy__76->GetXaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__76->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat5_2016_fit_s_copy__76->GetYaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__76->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat5_2016_fit_s_copy__76->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat5_2016_fit_s_copy__76->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat5_2016_fit_s_copy__76->GetYaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__76->GetZaxis()->SetLabelFont(42);
   htotpass_cat5_2016_fit_s_copy__76->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat5_2016_fit_s_copy__76->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat5_2016_fit_s_copy__76->GetZaxis()->SetTitleFont(42);
   htotpass_cat5_2016_fit_s_copy__76->Draw("sameaxis");
   p12pass_cat5_2016_fit_s->Modified();
   cpass_cat5_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat5_2016_fit_s
   TPad *p22pass_cat5_2016_fit_s = new TPad("p22pass_cat5_2016_fit_s", "p22pass_cat5_2016_fit_s",0,0,1,0.3);
   p22pass_cat5_2016_fit_s->Draw();
   p22pass_cat5_2016_fit_s->cd();
   p22pass_cat5_2016_fit_s->Range(13.7027,-8.281412,221.8108,5.024649);
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
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_s__77 = new TH1F("iOneWithErrorspass_cat5_2016_fit_s__77","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(1,3.338988e-07);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(2,0.4797013);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(3,0.3475296);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(4,0.3234753);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(5,0.3331938);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(6,0.5516137);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(7,0.4859614);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(8,0.4696474);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(9,0.5114671);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(10,0.3432795);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(11,0.2927626);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(12,0.2780593);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(13,0.233303);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(14,0.2063469);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(15,0.216849);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(16,0.1981467);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(17,0.1982852);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(18,0.1909994);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(19,0.2108482);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(20,0.1969189);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(21,0.2224692);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(22,0.2631022);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetBinError(23,0.2382534);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetMinimum(-4.289594);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetMaximum(4.359346);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_s__77->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_s__77->SetLineColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat5_2016_fit_s__77->SetMarkerColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__77->SetMarkerSize(0);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat5_2016_fit_s__77->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat5_2016_fit_s__77->Draw("");
   
   TH1F *iOneWithErrorspass_cat5_2016_fit_s__78 = new TH1F("iOneWithErrorspass_cat5_2016_fit_s__78","",23,40,201);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(1,3.338988e-07);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(2,0.4797013);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(3,0.3475296);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(4,0.3234753);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(5,0.3331938);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(6,0.5516137);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(7,0.4859614);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(8,0.4696474);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(9,0.5114671);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(10,0.3432795);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(11,0.2927626);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(12,0.2780593);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(13,0.233303);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(14,0.2063469);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(15,0.216849);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(16,0.1981467);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(17,0.1982852);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(18,0.1909994);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(19,0.2108482);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(20,0.1969189);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(21,0.2224692);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(22,0.2631022);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetBinError(23,0.2382534);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetMinimum(-4.289594);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetMaximum(4.359346);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_s__78->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s__78->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat5_2016_fit_s__78->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   iOneWithErrorspass_cat5_2016_fit_s__78->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_20 = new TH1F("hstack_stack_20","hstack",23,40,201);
   hstack_stack_20->SetMinimum(-5.280317);
   hstack_stack_20->SetMaximum(8.145235);
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
   
   
   TH1F *sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1 = new TH1F("sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1","ggH_hbb in cat5_2016_pass_cat5",23,40,201);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(2,0.002026081);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(3,0.04142503);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(4,0.00064329);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(5,0.01721518);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(6,0.03369714);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(7,0.05212615);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(8,0.090203);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(9,0.1714147);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(10,0.2018635);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(11,0.7723895);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(12,1.053054);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(13,1.238525);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(14,0.7409723);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(15,0.5805871);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(16,0.1367757);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(17,0.008204143);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(18,0.001881626);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(19,0.002772282);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(20,0.004938405);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(21,0.002303687);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(22,0.001294474);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinContent(23,0.001282461);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(1,1.90883e-07);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(2,0.01541674);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(3,0.3173584);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(4,0.005053799);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(5,0.08964081);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(6,0.243765);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(7,0.4273752);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(8,0.6797591);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(9,0.9966315);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(10,1.117231);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(11,5.588007);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(12,6.30042);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(13,6.518841);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(14,4.061987);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(15,3.017825);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(16,0.7810454);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(17,0.03237475);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(18,0.007799252);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(19,0.0114259);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(20,0.01819905);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(21,0.01005557);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(22,0.004950332);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetBinError(23,0.005325074);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat5_2016_fit_spass_cat5_2016_fit_s_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat5_2016_fit_s__79 = new TH1F("iOneWithErrorsLinepass_cat5_2016_fit_s__79","",23,40,201);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(1,3.338988e-07);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(2,0.4797013);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(3,0.3475296);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(4,0.3234753);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(5,0.3331938);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(6,0.5516137);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(7,0.4859614);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(8,0.4696474);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(9,0.5114671);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(10,0.3432795);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(11,0.2927626);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(12,0.2780593);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(13,0.233303);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(14,0.2063469);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(15,0.216849);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(16,0.1981467);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(17,0.1982852);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(18,0.1909994);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(19,0.2108482);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(20,0.1969189);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(21,0.2224692);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(22,0.2631022);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetBinError(23,0.2382534);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetFillColor(ci);
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorsLinepass_cat5_2016_fit_s__79->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
   -0.1292201,
   0.6586551,
   -0.166384,
   0.5841212,
   0.08672636,
   -0.1934054,
   1.253209,
   -1.537628,
   1.367374,
   0.3938007,
   0.9834153,
   0.9391226,
   1.906231,
   -0.5192682,
   1.470554,
   0.4347754,
   0.2140032,
   -1.703558,
   0.6605696,
   -0.5656143,
   -1.859729,
   0.9936432};
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat5_2016_fit_s_fx3020,Graph_from_iRatiopass_cat5_2016_fit_s_fy3020,Graph_from_iRatiopass_cat5_2016_fit_s_felx3020,Graph_from_iRatiopass_cat5_2016_fit_s_fehx3020,Graph_from_iRatiopass_cat5_2016_fit_s_fely3020,Graph_from_iRatiopass_cat5_2016_fit_s_fehy3020);
   grae->SetName("Graph_from_iRatiopass_cat5_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020 = new TH1F("Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetMinimum(-3.436325);
   Graph_Graph_from_iRatiopass_cat5_2016_fit_s3020->SetMaximum(3.482827);
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
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(1,3.338988e-07);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(2,0.4797013);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(3,0.3475296);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(4,0.3234753);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(5,0.3331938);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(6,0.5516137);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(7,0.4859614);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(8,0.4696474);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(9,0.5114671);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(10,0.3432795);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(11,0.2927626);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(12,0.2780593);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(13,0.233303);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(14,0.2063469);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(15,0.216849);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(16,0.1981467);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(17,0.1982852);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(18,0.1909994);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(19,0.2108482);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(20,0.1969189);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(21,0.2224692);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(22,0.2631022);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetBinError(23,0.2382534);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetMinimum(-4.289594);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetMaximum(4.359346);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetEntries(184);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetFillColor(ci);
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
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
   iOneWithErrorspass_cat5_2016_fit_s_copy__80->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
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
