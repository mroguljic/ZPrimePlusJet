void mlfit_pass_cat3_2016_fit_b()
{
//=========Macro generated from canvas: cpass_cat3_2016_fit_b/cpass_cat3_2016_fit_b
//=========  (Wed Oct  9 22:42:59 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_fit_b = new TCanvas("cpass_cat3_2016_fit_b", "cpass_cat3_2016_fit_b",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_fit_b->SetHighLightColor(2);
   cpass_cat3_2016_fit_b->Range(0,0,1,1);
   cpass_cat3_2016_fit_b->SetFillColor(0);
   cpass_cat3_2016_fit_b->SetBorderMode(0);
   cpass_cat3_2016_fit_b->SetBorderSize(2);
   cpass_cat3_2016_fit_b->SetTickx(1);
   cpass_cat3_2016_fit_b->SetTicky(1);
   cpass_cat3_2016_fit_b->SetLeftMargin(0.16);
   cpass_cat3_2016_fit_b->SetBottomMargin(0.13);
   cpass_cat3_2016_fit_b->SetFrameFillStyle(0);
   cpass_cat3_2016_fit_b->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_fit_b
   TPad *p12pass_cat3_2016_fit_b = new TPad("p12pass_cat3_2016_fit_b", "p12pass_cat3_2016_fit_b",0,0.3,1,1);
   p12pass_cat3_2016_fit_b->Draw();
   p12pass_cat3_2016_fit_b->cd();
   p12pass_cat3_2016_fit_b->Range(13.7027,-24.36153,221.8108,1193.715);
   p12pass_cat3_2016_fit_b->SetFillColor(0);
   p12pass_cat3_2016_fit_b->SetBorderMode(0);
   p12pass_cat3_2016_fit_b->SetBorderSize(2);
   p12pass_cat3_2016_fit_b->SetTickx(1);
   p12pass_cat3_2016_fit_b->SetTicky(1);
   p12pass_cat3_2016_fit_b->SetLeftMargin(0.16);
   p12pass_cat3_2016_fit_b->SetBottomMargin(0.02);
   p12pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   p12pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p12pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_fit_b__41 = new TH1F("htotpass_cat3_2016_fit_b__41","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b__41->SetBinContent(1,3.523456e-06);
   htotpass_cat3_2016_fit_b__41->SetBinContent(2,608.0156);
   htotpass_cat3_2016_fit_b__41->SetBinContent(3,644.5232);
   htotpass_cat3_2016_fit_b__41->SetBinContent(4,654.403);
   htotpass_cat3_2016_fit_b__41->SetBinContent(5,658.8535);
   htotpass_cat3_2016_fit_b__41->SetBinContent(6,696.2201);
   htotpass_cat3_2016_fit_b__41->SetBinContent(7,714.6048);
   htotpass_cat3_2016_fit_b__41->SetBinContent(8,678.8489);
   htotpass_cat3_2016_fit_b__41->SetBinContent(9,620.7016);
   htotpass_cat3_2016_fit_b__41->SetBinContent(10,548.0891);
   htotpass_cat3_2016_fit_b__41->SetBinContent(11,495.2584);
   htotpass_cat3_2016_fit_b__41->SetBinContent(12,466.9435);
   htotpass_cat3_2016_fit_b__41->SetBinContent(13,437.9344);
   htotpass_cat3_2016_fit_b__41->SetBinContent(14,398.0365);
   htotpass_cat3_2016_fit_b__41->SetBinContent(15,366.0878);
   htotpass_cat3_2016_fit_b__41->SetBinContent(16,322.1057);
   htotpass_cat3_2016_fit_b__41->SetBinContent(17,280.2773);
   htotpass_cat3_2016_fit_b__41->SetBinContent(18,242.2564);
   htotpass_cat3_2016_fit_b__41->SetBinContent(19,200.1787);
   htotpass_cat3_2016_fit_b__41->SetBinContent(20,168.8427);
   htotpass_cat3_2016_fit_b__41->SetBinContent(21,133.3766);
   htotpass_cat3_2016_fit_b__41->SetBinContent(22,101.3553);
   htotpass_cat3_2016_fit_b__41->SetBinContent(23,77.13342);
   htotpass_cat3_2016_fit_b__41->SetBinError(1,3.738752e-07);
   htotpass_cat3_2016_fit_b__41->SetBinError(2,8.421725);
   htotpass_cat3_2016_fit_b__41->SetBinError(3,7.131811);
   htotpass_cat3_2016_fit_b__41->SetBinError(4,7.699118);
   htotpass_cat3_2016_fit_b__41->SetBinError(5,9.434138);
   htotpass_cat3_2016_fit_b__41->SetBinError(6,13.95056);
   htotpass_cat3_2016_fit_b__41->SetBinError(7,17.90007);
   htotpass_cat3_2016_fit_b__41->SetBinError(8,17.20762);
   htotpass_cat3_2016_fit_b__41->SetBinError(9,13.13472);
   htotpass_cat3_2016_fit_b__41->SetBinError(10,12.34516);
   htotpass_cat3_2016_fit_b__41->SetBinError(11,5.933468);
   htotpass_cat3_2016_fit_b__41->SetBinError(12,5.646474);
   htotpass_cat3_2016_fit_b__41->SetBinError(13,4.836447);
   htotpass_cat3_2016_fit_b__41->SetBinError(14,4.66353);
   htotpass_cat3_2016_fit_b__41->SetBinError(15,4.310959);
   htotpass_cat3_2016_fit_b__41->SetBinError(16,3.749064);
   htotpass_cat3_2016_fit_b__41->SetBinError(17,3.68458);
   htotpass_cat3_2016_fit_b__41->SetBinError(18,3.634711);
   htotpass_cat3_2016_fit_b__41->SetBinError(19,3.389633);
   htotpass_cat3_2016_fit_b__41->SetBinError(20,3.07962);
   htotpass_cat3_2016_fit_b__41->SetBinError(21,2.966141);
   htotpass_cat3_2016_fit_b__41->SetBinError(22,2.779893);
   htotpass_cat3_2016_fit_b__41->SetBinError(23,2.815675);
   htotpass_cat3_2016_fit_b__41->SetMinimum(0);
   htotpass_cat3_2016_fit_b__41->SetMaximum(1071.907);
   htotpass_cat3_2016_fit_b__41->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__41->SetFillColor(ci);
   htotpass_cat3_2016_fit_b__41->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b__41->SetLineColor(ci);
   htotpass_cat3_2016_fit_b__41->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b__41->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b__41->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b__41->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b__41->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b__41->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b__41->Draw("hist");
   
   TH1F *qcd__42 = new TH1F("qcd__42","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__42->SetBinContent(2,602.85);
   qcd__42->SetBinContent(3,635.3321);
   qcd__42->SetBinContent(4,636.563);
   qcd__42->SetBinContent(5,619.6181);
   qcd__42->SetBinContent(6,596.8651);
   qcd__42->SetBinContent(7,576.1245);
   qcd__42->SetBinContent(8,547.7967);
   qcd__42->SetBinContent(9,517.0997);
   qcd__42->SetBinContent(10,496.3709);
   qcd__42->SetBinContent(11,471.3207);
   qcd__42->SetBinContent(12,441.5525);
   qcd__42->SetBinContent(13,418.4291);
   qcd__42->SetBinContent(14,385.5158);
   qcd__42->SetBinContent(15,356.8621);
   qcd__42->SetBinContent(16,315.8072);
   qcd__42->SetBinContent(17,274.5695);
   qcd__42->SetBinContent(18,237.2441);
   qcd__42->SetBinContent(19,197.862);
   qcd__42->SetBinContent(20,166.6193);
   qcd__42->SetBinContent(21,131.8543);
   qcd__42->SetBinContent(22,100.9919);
   qcd__42->SetBinContent(23,76.77);
   qcd__42->SetBinError(2,8.390153);
   qcd__42->SetBinError(3,7.059846);
   qcd__42->SetBinError(4,7.130224);
   qcd__42->SetBinError(5,7.621132);
   qcd__42->SetBinError(6,8.481682);
   qcd__42->SetBinError(7,8.44983);
   qcd__42->SetBinError(8,7.779776);
   qcd__42->SetBinError(9,7.717782);
   qcd__42->SetBinError(10,6.487922);
   qcd__42->SetBinError(11,5.425594);
   qcd__42->SetBinError(12,4.826283);
   qcd__42->SetBinError(13,4.158126);
   qcd__42->SetBinError(14,4.358508);
   qcd__42->SetBinError(15,4.130908);
   qcd__42->SetBinError(16,3.65336);
   qcd__42->SetBinError(17,3.604764);
   qcd__42->SetBinError(18,3.572461);
   qcd__42->SetBinError(19,3.375465);
   qcd__42->SetBinError(20,3.065253);
   qcd__42->SetBinError(21,2.959156);
   qcd__42->SetBinError(22,2.779469);
   qcd__42->SetBinError(23,2.815256);
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
   hstackMC_stack_11->SetMaximum(145.4044);
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
   tqq_stack_1->SetBinContent(2,4.022548);
   tqq_stack_1->SetBinContent(3,4.59089);
   tqq_stack_1->SetBinContent(4,7.216467);
   tqq_stack_1->SetBinContent(5,7.97502);
   tqq_stack_1->SetBinContent(6,15.77371);
   tqq_stack_1->SetBinContent(7,18.56831);
   tqq_stack_1->SetBinContent(8,15.19973);
   tqq_stack_1->SetBinContent(9,17.3655);
   tqq_stack_1->SetBinContent(10,14.51462);
   tqq_stack_1->SetBinContent(11,16.79851);
   tqq_stack_1->SetBinContent(12,21.46088);
   tqq_stack_1->SetBinContent(13,18.05647);
   tqq_stack_1->SetBinContent(14,12.10081);
   tqq_stack_1->SetBinContent(15,9.225691);
   tqq_stack_1->SetBinContent(16,6.298484);
   tqq_stack_1->SetBinContent(17,5.707856);
   tqq_stack_1->SetBinContent(18,5.0123);
   tqq_stack_1->SetBinContent(19,2.316733);
   tqq_stack_1->SetBinContent(20,2.223386);
   tqq_stack_1->SetBinContent(21,1.522333);
   tqq_stack_1->SetBinContent(22,0.3634105);
   tqq_stack_1->SetBinContent(23,0.3634105);
   tqq_stack_1->SetBinError(2,0.5375497);
   tqq_stack_1->SetBinError(3,0.6134997);
   tqq_stack_1->SetBinError(4,0.9643664);
   tqq_stack_1->SetBinError(5,1.065735);
   tqq_stack_1->SetBinError(6,2.107906);
   tqq_stack_1->SetBinError(7,2.48136);
   tqq_stack_1->SetBinError(8,2.031203);
   tqq_stack_1->SetBinError(9,2.320624);
   tqq_stack_1->SetBinError(10,1.939648);
   tqq_stack_1->SetBinError(11,2.244854);
   tqq_stack_1->SetBinError(12,2.867907);
   tqq_stack_1->SetBinError(13,2.412962);
   tqq_stack_1->SetBinError(14,1.617082);
   tqq_stack_1->SetBinError(15,1.232867);
   tqq_stack_1->SetBinError(16,0.8416925);
   tqq_stack_1->SetBinError(17,0.7627645);
   tqq_stack_1->SetBinError(18,0.6698144);
   tqq_stack_1->SetBinError(19,0.3095947);
   tqq_stack_1->SetBinError(20,0.2971203);
   tqq_stack_1->SetBinError(21,0.2034357);
   tqq_stack_1->SetBinError(22,0.04856406);
   tqq_stack_1->SetBinError(23,0.04856406);
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
   wqq_stack_2->SetBinContent(1,1.513099e-06);
   wqq_stack_2->SetBinContent(2,0.8072254);
   wqq_stack_2->SetBinContent(3,2.961941);
   wqq_stack_2->SetBinContent(4,9.070123);
   wqq_stack_2->SetBinContent(5,22.37777);
   wqq_stack_2->SetBinContent(6,56.61134);
   wqq_stack_2->SetBinContent(7,72.33344);
   wqq_stack_2->SetBinContent(8,30.06235);
   wqq_stack_2->SetBinContent(9,13.02022);
   wqq_stack_2->SetBinContent(10,5.546248);
   wqq_stack_2->SetBinContent(11,2.126241);
   wqq_stack_2->SetBinContent(12,0.8408678);
   wqq_stack_2->SetBinContent(13,0.3991836);
   wqq_stack_2->SetBinContent(14,1.513099e-06);
   wqq_stack_2->SetBinContent(15,1.513099e-06);
   wqq_stack_2->SetBinContent(16,1.513099e-06);
   wqq_stack_2->SetBinContent(17,1.513099e-06);
   wqq_stack_2->SetBinContent(18,1.513099e-06);
   wqq_stack_2->SetBinContent(19,1.513099e-06);
   wqq_stack_2->SetBinContent(20,1.513099e-06);
   wqq_stack_2->SetBinContent(21,1.513099e-06);
   wqq_stack_2->SetBinContent(22,1.513099e-06);
   wqq_stack_2->SetBinContent(23,1.513099e-06);
   wqq_stack_2->SetBinError(1,2.670351e-07);
   wqq_stack_2->SetBinError(2,0.4382179);
   wqq_stack_2->SetBinError(3,0.6179182);
   wqq_stack_2->SetBinError(4,2.685186);
   wqq_stack_2->SetBinError(5,4.022032);
   wqq_stack_2->SetBinError(6,9.251921);
   wqq_stack_2->SetBinError(7,13.52929);
   wqq_stack_2->SetBinError(8,9.76741);
   wqq_stack_2->SetBinError(9,2.811047);
   wqq_stack_2->SetBinError(10,1.648942);
   wqq_stack_2->SetBinError(11,0.4327565);
   wqq_stack_2->SetBinError(12,0.365354);
   wqq_stack_2->SetBinError(13,0.3279422);
   wqq_stack_2->SetBinError(14,2.670351e-07);
   wqq_stack_2->SetBinError(15,2.670351e-07);
   wqq_stack_2->SetBinError(16,2.670351e-07);
   wqq_stack_2->SetBinError(17,2.670351e-07);
   wqq_stack_2->SetBinError(18,2.670351e-07);
   wqq_stack_2->SetBinError(19,2.670351e-07);
   wqq_stack_2->SetBinError(20,2.670351e-07);
   wqq_stack_2->SetBinError(21,2.670351e-07);
   wqq_stack_2->SetBinError(22,2.670351e-07);
   wqq_stack_2->SetBinError(23,2.670351e-07);
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
   zqq_stack_3->SetBinContent(1,2.010358e-06);
   zqq_stack_3->SetBinContent(2,0.3357855);
   zqq_stack_3->SetBinContent(3,1.638261);
   zqq_stack_3->SetBinContent(4,1.553416);
   zqq_stack_3->SetBinContent(5,8.882572);
   zqq_stack_3->SetBinContent(6,26.97);
   zqq_stack_3->SetBinContent(7,47.57859);
   zqq_stack_3->SetBinContent(8,85.79009);
   zqq_stack_3->SetBinContent(9,73.21617);
   zqq_stack_3->SetBinContent(10,31.65724);
   zqq_stack_3->SetBinContent(11,5.012962);
   zqq_stack_3->SetBinContent(12,3.089324);
   zqq_stack_3->SetBinContent(13,1.04961);
   zqq_stack_3->SetBinContent(14,0.4198914);
   zqq_stack_3->SetBinContent(15,2.010358e-06);
   zqq_stack_3->SetBinContent(16,2.010358e-06);
   zqq_stack_3->SetBinContent(17,2.010358e-06);
   zqq_stack_3->SetBinContent(18,2.010358e-06);
   zqq_stack_3->SetBinContent(19,2.010358e-06);
   zqq_stack_3->SetBinContent(20,2.010358e-06);
   zqq_stack_3->SetBinContent(21,2.010358e-06);
   zqq_stack_3->SetBinContent(22,2.010358e-06);
   zqq_stack_3->SetBinContent(23,2.010358e-06);
   zqq_stack_3->SetBinError(1,2.616771e-07);
   zqq_stack_3->SetBinError(2,0.223153);
   zqq_stack_3->SetBinError(3,0.5129262);
   zqq_stack_3->SetBinError(4,0.5441455);
   zqq_stack_3->SetBinError(5,3.689008);
   zqq_stack_3->SetBinError(6,5.712964);
   zqq_stack_3->SetBinError(7,7.733967);
   zqq_stack_3->SetBinError(8,11.66402);
   zqq_stack_3->SetBinError(9,9.983461);
   zqq_stack_3->SetBinError(10,10.18963);
   zqq_stack_3->SetBinError(11,0.7364244);
   zqq_stack_3->SetBinError(12,0.4809192);
   zqq_stack_3->SetBinError(13,0.413856);
   zqq_stack_3->SetBinError(14,0.3700901);
   zqq_stack_3->SetBinError(15,2.616771e-07);
   zqq_stack_3->SetBinError(16,2.616771e-07);
   zqq_stack_3->SetBinError(17,2.616771e-07);
   zqq_stack_3->SetBinError(18,2.616771e-07);
   zqq_stack_3->SetBinError(19,2.616771e-07);
   zqq_stack_3->SetBinError(20,2.616771e-07);
   zqq_stack_3->SetBinError(21,2.616771e-07);
   zqq_stack_3->SetBinError(22,2.616771e-07);
   zqq_stack_3->SetBinError(23,2.616771e-07);
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
   
   TH1F *hsigpass_cat3_2016_fit_b_stack_4 = new TH1F("hsigpass_cat3_2016_fit_b_stack_4","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_fit_b_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_fit_b_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_fit_b_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_fit_b_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_fit_b_stack_4,"");
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
   
   TH1F *htotpass_cat3_2016_fit_b_copy__44 = new TH1F("htotpass_cat3_2016_fit_b_copy__44","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(1,3.523456e-06);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(2,608.0156);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(3,644.5232);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(4,654.403);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(5,658.8535);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(6,696.2201);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(7,714.6048);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(8,678.8489);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(9,620.7016);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(10,548.0891);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(11,495.2584);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(12,466.9435);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(13,437.9344);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(14,398.0365);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(15,366.0878);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(16,322.1057);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(17,280.2773);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(18,242.2564);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(19,200.1787);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(20,168.8427);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(21,133.3766);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(22,101.3553);
   htotpass_cat3_2016_fit_b_copy__44->SetBinContent(23,77.13342);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(1,3.738752e-07);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(2,8.421725);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(3,7.131811);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(4,7.699118);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(5,9.434138);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(6,13.95056);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(7,17.90007);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(8,17.20762);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(9,13.13472);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(10,12.34516);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(11,5.933468);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(12,5.646474);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(13,4.836447);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(14,4.66353);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(15,4.310959);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(16,3.749064);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(17,3.68458);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(18,3.634711);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(19,3.389633);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(20,3.07962);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(21,2.966141);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(22,2.779893);
   htotpass_cat3_2016_fit_b_copy__44->SetBinError(23,2.815675);
   htotpass_cat3_2016_fit_b_copy__44->SetMaximum(1071.907);
   htotpass_cat3_2016_fit_b_copy__44->SetEntries(92);
   htotpass_cat3_2016_fit_b_copy__44->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b_copy__44->SetFillColor(ci);
   htotpass_cat3_2016_fit_b_copy__44->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_fit_b_copy__44->SetLineColor(ci);
   htotpass_cat3_2016_fit_b_copy__44->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_fit_b_copy__44->SetMarkerColor(ci);
   htotpass_cat3_2016_fit_b_copy__44->SetMarkerSize(0);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_fit_b_copy__44->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__44->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_fit_b_copy__44->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__44->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_fit_b_copy__44->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_fit_b_copy__44->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_fit_b_copy__44->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__44->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_fit_b_copy__44->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_fit_b_copy__44->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_fit_b_copy__44->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_fit_b_copy__44->Draw("sameaxis");
   p12pass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_fit_b
   TPad *p22pass_cat3_2016_fit_b = new TPad("p22pass_cat3_2016_fit_b", "p22pass_cat3_2016_fit_b",0,0,1,0.3);
   p22pass_cat3_2016_fit_b->Draw();
   p22pass_cat3_2016_fit_b->cd();
   p22pass_cat3_2016_fit_b->Range(13.7027,-10.72075,221.8108,5.025529);
   p22pass_cat3_2016_fit_b->SetFillColor(0);
   p22pass_cat3_2016_fit_b->SetBorderMode(0);
   p22pass_cat3_2016_fit_b->SetBorderSize(2);
   p22pass_cat3_2016_fit_b->SetTickx(1);
   p22pass_cat3_2016_fit_b->SetTicky(1);
   p22pass_cat3_2016_fit_b->SetLeftMargin(0.16);
   p22pass_cat3_2016_fit_b->SetTopMargin(0.05);
   p22pass_cat3_2016_fit_b->SetBottomMargin(0.3);
   p22pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   p22pass_cat3_2016_fit_b->SetFrameFillStyle(0);
   p22pass_cat3_2016_fit_b->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b__45 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b__45","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(1,5.001255e-07);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(2,0.2890554);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(3,0.2577292);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(4,0.2714537);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(5,0.2656167);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(6,0.3749028);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(7,0.3654787);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(8,0.375562);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(9,0.3454477);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(10,0.3993181);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(11,0.2823395);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(12,0.2603883);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(13,0.2428534);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(14,0.2087674);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(15,0.2213877);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(16,0.2131098);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(17,0.21471);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(18,0.2175243);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(19,0.2534299);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(20,0.2122164);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(21,0.2856539);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(22,0.2644216);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetBinError(23,0.2902061);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetMinimum(-5.996869);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetMaximum(4.238214);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_b__45->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_b__45->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__45->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__45->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__45->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__45->Draw("");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b__46 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b__46","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(1,5.001255e-07);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(2,0.2890554);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(3,0.2577292);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(4,0.2714537);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(5,0.2656167);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(6,0.3749028);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(7,0.3654787);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(8,0.375562);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(9,0.3454477);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(10,0.3993181);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(11,0.2823395);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(12,0.2603883);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(13,0.2428534);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(14,0.2087674);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(15,0.2213877);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(16,0.2131098);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(17,0.21471);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(18,0.2175243);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(19,0.2534299);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(20,0.2122164);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(21,0.2856539);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(22,0.2644216);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetBinError(23,0.2902061);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMinimum(-5.996869);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMaximum(4.238214);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_b__46->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_b__46->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b__46->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b__46->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b__46->Draw("e2 sames");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_12 = new TH1F("hstack_stack_12","hstack",23,40,201);
   hstack_stack_12->SetMinimum(0);
   hstack_stack_12->SetMaximum(0);
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
   
   
   TH1F *sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1 = new TH1F("sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1","ggH_hbb in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_fit_bpass_cat3_2016_fit_b_stack_1,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_fit_b__47 = new TH1F("iOneWithErrorsLinepass_cat3_2016_fit_b__47","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(1,5.001255e-07);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(2,0.2890554);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(3,0.2577292);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(4,0.2714537);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(5,0.2656167);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(6,0.3749028);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(7,0.3654787);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(8,0.375562);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(9,0.3454477);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(10,0.3993181);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(11,0.2823395);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(12,0.2603883);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(13,0.2428534);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(14,0.2087674);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(15,0.2213877);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(16,0.2131098);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(17,0.21471);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(18,0.2175243);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(19,0.2534299);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(20,0.2122164);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(21,0.2856539);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(22,0.2644216);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetBinError(23,0.2902061);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetEntries(184);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_fit_b__47->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fx3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fy3012[23] = {
   0,
   1.620321,
   0.3937699,
   -1.630942,
   -0.1114347,
   -0.08429206,
   0.8302342,
   0.1529093,
   -1.47647,
   -0.5223165,
   -0.6966749,
   -0.8953147,
   -1.176761,
   1.021053,
   0.4372475,
   0.8191555,
   -1.193977,
   -1.64408,
   -0.6647143,
   1.104672,
   -2.997913,
   -0.5475149,
   1.825476};
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_felx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fely3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fehx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_fit_b_fehy3012[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_fit_b_fx3012,Graph_from_iRatiopass_cat3_2016_fit_b_fy3012,Graph_from_iRatiopass_cat3_2016_fit_b_felx3012,Graph_from_iRatiopass_cat3_2016_fit_b_fehx3012,Graph_from_iRatiopass_cat3_2016_fit_b_fely3012,Graph_from_iRatiopass_cat3_2016_fit_b_fehy3012);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_fit_b");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetMinimum(-4.680252);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetMaximum(3.507815);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_fit_b3012);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_fit_b_copy__48 = new TH1F("iOneWithErrorspass_cat3_2016_fit_b_copy__48","",23,40,201);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(1,5.001255e-07);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(2,0.2890554);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(3,0.2577292);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(4,0.2714537);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(5,0.2656167);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(6,0.3749028);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(7,0.3654787);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(8,0.375562);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(9,0.3454477);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(10,0.3993181);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(11,0.2823395);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(12,0.2603883);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(13,0.2428534);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(14,0.2087674);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(15,0.2213877);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(16,0.2131098);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(17,0.21471);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(18,0.2175243);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(19,0.2534299);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(20,0.2122164);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(21,0.2856539);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(22,0.2644216);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetBinError(23,0.2902061);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMinimum(-5.996869);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMaximum(4.238214);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetEntries(184);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitle(" #frac{Data #minus Bkg}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_fit_b_copy__48->Draw("sameaxis");
   p22pass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
   cpass_cat3_2016_fit_b->Modified();
   cpass_cat3_2016_fit_b->cd();
   cpass_cat3_2016_fit_b->SetSelected(cpass_cat3_2016_fit_b);
}
