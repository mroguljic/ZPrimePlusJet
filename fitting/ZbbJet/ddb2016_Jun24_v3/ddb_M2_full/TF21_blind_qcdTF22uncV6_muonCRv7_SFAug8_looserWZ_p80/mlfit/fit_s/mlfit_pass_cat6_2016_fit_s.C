void mlfit_pass_cat6_2016_fit_s()
{
//=========Macro generated from canvas: cpass_cat6_2016_fit_s/cpass_cat6_2016_fit_s
//=========  (Thu Sep 26 13:57:44 2019) by ROOT version 6.12/07
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
   p12pass_cat6_2016_fit_s->Range(13.7027,-5.837922,221.8108,286.0582);
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
   
   TH1F *htotpass_cat6_2016_fit_s__129 = new TH1F("htotpass_cat6_2016_fit_s__129","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s__129->SetBinContent(1,1.594361e-06);
   htotpass_cat6_2016_fit_s__129->SetBinContent(2,139.4064);
   htotpass_cat6_2016_fit_s__129->SetBinContent(3,145.3719);
   htotpass_cat6_2016_fit_s__129->SetBinContent(4,149.4824);
   htotpass_cat6_2016_fit_s__129->SetBinContent(5,148.108);
   htotpass_cat6_2016_fit_s__129->SetBinContent(6,170.1349);
   htotpass_cat6_2016_fit_s__129->SetBinContent(7,171.2457);
   htotpass_cat6_2016_fit_s__129->SetBinContent(8,161.613);
   htotpass_cat6_2016_fit_s__129->SetBinContent(9,131.9982);
   htotpass_cat6_2016_fit_s__129->SetBinContent(10,110.3674);
   htotpass_cat6_2016_fit_s__129->SetBinContent(11,1.594361e-06);
   htotpass_cat6_2016_fit_s__129->SetBinContent(12,1.594361e-06);
   htotpass_cat6_2016_fit_s__129->SetBinContent(13,1.594361e-06);
   htotpass_cat6_2016_fit_s__129->SetBinContent(14,77.05933);
   htotpass_cat6_2016_fit_s__129->SetBinContent(15,72.29847);
   htotpass_cat6_2016_fit_s__129->SetBinContent(16,69.98358);
   htotpass_cat6_2016_fit_s__129->SetBinContent(17,64.11776);
   htotpass_cat6_2016_fit_s__129->SetBinContent(18,60.54443);
   htotpass_cat6_2016_fit_s__129->SetBinContent(19,59.24273);
   htotpass_cat6_2016_fit_s__129->SetBinContent(20,54.51384);
   htotpass_cat6_2016_fit_s__129->SetBinContent(21,51.12676);
   htotpass_cat6_2016_fit_s__129->SetBinContent(22,47.96762);
   htotpass_cat6_2016_fit_s__129->SetBinContent(23,46.01183);
   htotpass_cat6_2016_fit_s__129->SetBinError(1,2.609998e-07);
   htotpass_cat6_2016_fit_s__129->SetBinError(2,8.565637);
   htotpass_cat6_2016_fit_s__129->SetBinError(3,6.685471);
   htotpass_cat6_2016_fit_s__129->SetBinError(4,6.724274);
   htotpass_cat6_2016_fit_s__129->SetBinError(5,6.918494);
   htotpass_cat6_2016_fit_s__129->SetBinError(6,10.56879);
   htotpass_cat6_2016_fit_s__129->SetBinError(7,11.08225);
   htotpass_cat6_2016_fit_s__129->SetBinError(8,11.8488);
   htotpass_cat6_2016_fit_s__129->SetBinError(9,10.20251);
   htotpass_cat6_2016_fit_s__129->SetBinError(10,7.58303);
   htotpass_cat6_2016_fit_s__129->SetBinError(11,2.609998e-07);
   htotpass_cat6_2016_fit_s__129->SetBinError(12,2.609998e-07);
   htotpass_cat6_2016_fit_s__129->SetBinError(13,2.609998e-07);
   htotpass_cat6_2016_fit_s__129->SetBinError(14,4.096182);
   htotpass_cat6_2016_fit_s__129->SetBinError(15,3.678034);
   htotpass_cat6_2016_fit_s__129->SetBinError(16,3.450723);
   htotpass_cat6_2016_fit_s__129->SetBinError(17,2.924559);
   htotpass_cat6_2016_fit_s__129->SetBinError(18,2.457694);
   htotpass_cat6_2016_fit_s__129->SetBinError(19,2.45796);
   htotpass_cat6_2016_fit_s__129->SetBinError(20,2.228342);
   htotpass_cat6_2016_fit_s__129->SetBinError(21,2.234686);
   htotpass_cat6_2016_fit_s__129->SetBinError(22,2.27977);
   htotpass_cat6_2016_fit_s__129->SetBinError(23,2.579641);
   htotpass_cat6_2016_fit_s__129->SetMinimum(0);
   htotpass_cat6_2016_fit_s__129->SetMaximum(256.8686);
   htotpass_cat6_2016_fit_s__129->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__129->SetFillColor(ci);
   htotpass_cat6_2016_fit_s__129->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__129->SetLineColor(ci);
   htotpass_cat6_2016_fit_s__129->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s__129->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s__129->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s__129->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__129->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s__129->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__129->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s__129->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s__129->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s__129->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__129->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__129->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__129->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__129->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__129->Draw("");
   
   TH1F *htot_linepass_cat6_2016_fit_s__130 = new TH1F("htot_linepass_cat6_2016_fit_s__130","wqq in cat6_2016_pass_cat6",23,40,201);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(1,1.594361e-06);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(2,139.4064);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(3,145.3719);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(4,149.4824);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(5,148.108);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(6,170.1349);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(7,171.2457);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(8,161.613);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(9,131.9982);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(10,110.3674);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(11,1.594361e-06);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(12,1.594361e-06);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(13,1.594361e-06);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(14,77.05933);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(15,72.29847);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(16,69.98358);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(17,64.11776);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(18,60.54443);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(19,59.24273);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(20,54.51384);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(21,51.12676);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(22,47.96762);
   htot_linepass_cat6_2016_fit_s__130->SetBinContent(23,46.01183);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(1,2.609998e-07);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(2,8.565637);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(3,6.685471);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(4,6.724274);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(5,6.918494);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(6,10.56879);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(7,11.08225);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(8,11.8488);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(9,10.20251);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(10,7.58303);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(11,2.609998e-07);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(12,2.609998e-07);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(13,2.609998e-07);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(14,4.096182);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(15,3.678034);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(16,3.450723);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(17,2.924559);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(18,2.457694);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(19,2.45796);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(20,2.228342);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(21,2.234686);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(22,2.27977);
   htot_linepass_cat6_2016_fit_s__130->SetBinError(23,2.579641);
   htot_linepass_cat6_2016_fit_s__130->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_s__130->SetFillColor(ci);
   htot_linepass_cat6_2016_fit_s__130->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat6_2016_fit_s__130->SetLineColor(ci);
   htot_linepass_cat6_2016_fit_s__130->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat6_2016_fit_s__130->SetMarkerColor(ci);
   htot_linepass_cat6_2016_fit_s__130->SetMarkerSize(0);
   htot_linepass_cat6_2016_fit_s__130->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat6_2016_fit_s__130->GetXaxis()->SetRange(2,23);
   htot_linepass_cat6_2016_fit_s__130->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_s__130->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_s__130->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_s__130->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_s__130->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat6_2016_fit_s__130->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_s__130->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat6_2016_fit_s__130->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat6_2016_fit_s__130->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat6_2016_fit_s__130->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_s__130->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat6_2016_fit_s__130->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat6_2016_fit_s__130->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat6_2016_fit_s__130->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat6_2016_fit_s__130->Draw("histsame");
   
   TH1F *qcd__131 = new TH1F("qcd__131","qcd in cat6_2016_pass_cat6",23,40,201);
   qcd__131->SetBinContent(2,139.4064);
   qcd__131->SetBinContent(3,142.8517);
   qcd__131->SetBinContent(4,136.7397);
   qcd__131->SetBinContent(5,129.3102);
   qcd__131->SetBinContent(6,122.8217);
   qcd__131->SetBinContent(7,113.2623);
   qcd__131->SetBinContent(8,105.1412);
   qcd__131->SetBinContent(9,96.64942);
   qcd__131->SetBinContent(10,90.87957);
   qcd__131->SetBinContent(14,70.34678);
   qcd__131->SetBinContent(15,66.74174);
   qcd__131->SetBinContent(16,63.15381);
   qcd__131->SetBinContent(17,61.91355);
   qcd__131->SetBinContent(18,58.92798);
   qcd__131->SetBinContent(19,56.89933);
   qcd__131->SetBinContent(20,52.29439);
   qcd__131->SetBinContent(21,50.53441);
   qcd__131->SetBinContent(22,47.96762);
   qcd__131->SetBinContent(23,45.48239);
   qcd__131->SetBinError(2,8.565637);
   qcd__131->SetBinError(3,6.64937);
   qcd__131->SetBinError(4,6.152393);
   qcd__131->SetBinError(5,6.281114);
   qcd__131->SetBinError(6,6.440027);
   qcd__131->SetBinError(7,6.490873);
   qcd__131->SetBinError(8,6.328026);
   qcd__131->SetBinError(9,6.096941);
   qcd__131->SetBinError(10,5.643774);
   qcd__131->SetBinError(14,3.822754);
   qcd__131->SetBinError(15,3.46389);
   qcd__131->SetBinError(16,3.003315);
   qcd__131->SetBinError(17,2.868536);
   qcd__131->SetBinError(18,2.421925);
   qcd__131->SetBinError(19,2.382172);
   qcd__131->SetBinError(20,2.153245);
   qcd__131->SetBinError(21,2.229436);
   qcd__131->SetBinError(22,2.27977);
   qcd__131->SetBinError(23,2.576009);
   qcd__131->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__131->SetLineColor(ci);
   qcd__131->SetLineStyle(2);
   qcd__131->SetLineWidth(2);
   qcd__131->GetXaxis()->SetTitle("x");
   qcd__131->GetXaxis()->SetLabelFont(42);
   qcd__131->GetXaxis()->SetLabelSize(0.035);
   qcd__131->GetXaxis()->SetTitleSize(0.035);
   qcd__131->GetXaxis()->SetTitleFont(42);
   qcd__131->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__131->GetYaxis()->SetLabelFont(42);
   qcd__131->GetYaxis()->SetLabelSize(0.035);
   qcd__131->GetYaxis()->SetTitleSize(0.035);
   qcd__131->GetYaxis()->SetTitleOffset(0);
   qcd__131->GetYaxis()->SetTitleFont(42);
   qcd__131->GetZaxis()->SetLabelFont(42);
   qcd__131->GetZaxis()->SetLabelSize(0.035);
   qcd__131->GetZaxis()->SetTitleSize(0.035);
   qcd__131->GetZaxis()->SetTitleFont(42);
   qcd__131->Draw("hist sames");
   
   TH1F *htotpass_cat6_2016_fit_s__132 = new TH1F("htotpass_cat6_2016_fit_s__132","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s__132->SetBinContent(1,1.594361e-06);
   htotpass_cat6_2016_fit_s__132->SetBinContent(2,139.4064);
   htotpass_cat6_2016_fit_s__132->SetBinContent(3,145.3719);
   htotpass_cat6_2016_fit_s__132->SetBinContent(4,149.4824);
   htotpass_cat6_2016_fit_s__132->SetBinContent(5,148.108);
   htotpass_cat6_2016_fit_s__132->SetBinContent(6,170.1349);
   htotpass_cat6_2016_fit_s__132->SetBinContent(7,171.2457);
   htotpass_cat6_2016_fit_s__132->SetBinContent(8,161.613);
   htotpass_cat6_2016_fit_s__132->SetBinContent(9,131.9982);
   htotpass_cat6_2016_fit_s__132->SetBinContent(10,110.3674);
   htotpass_cat6_2016_fit_s__132->SetBinContent(11,1.594361e-06);
   htotpass_cat6_2016_fit_s__132->SetBinContent(12,1.594361e-06);
   htotpass_cat6_2016_fit_s__132->SetBinContent(13,1.594361e-06);
   htotpass_cat6_2016_fit_s__132->SetBinContent(14,77.05933);
   htotpass_cat6_2016_fit_s__132->SetBinContent(15,72.29847);
   htotpass_cat6_2016_fit_s__132->SetBinContent(16,69.98358);
   htotpass_cat6_2016_fit_s__132->SetBinContent(17,64.11776);
   htotpass_cat6_2016_fit_s__132->SetBinContent(18,60.54443);
   htotpass_cat6_2016_fit_s__132->SetBinContent(19,59.24273);
   htotpass_cat6_2016_fit_s__132->SetBinContent(20,54.51384);
   htotpass_cat6_2016_fit_s__132->SetBinContent(21,51.12676);
   htotpass_cat6_2016_fit_s__132->SetBinContent(22,47.96762);
   htotpass_cat6_2016_fit_s__132->SetBinContent(23,46.01183);
   htotpass_cat6_2016_fit_s__132->SetBinError(1,2.609998e-07);
   htotpass_cat6_2016_fit_s__132->SetBinError(2,8.565637);
   htotpass_cat6_2016_fit_s__132->SetBinError(3,6.685471);
   htotpass_cat6_2016_fit_s__132->SetBinError(4,6.724274);
   htotpass_cat6_2016_fit_s__132->SetBinError(5,6.918494);
   htotpass_cat6_2016_fit_s__132->SetBinError(6,10.56879);
   htotpass_cat6_2016_fit_s__132->SetBinError(7,11.08225);
   htotpass_cat6_2016_fit_s__132->SetBinError(8,11.8488);
   htotpass_cat6_2016_fit_s__132->SetBinError(9,10.20251);
   htotpass_cat6_2016_fit_s__132->SetBinError(10,7.58303);
   htotpass_cat6_2016_fit_s__132->SetBinError(11,2.609998e-07);
   htotpass_cat6_2016_fit_s__132->SetBinError(12,2.609998e-07);
   htotpass_cat6_2016_fit_s__132->SetBinError(13,2.609998e-07);
   htotpass_cat6_2016_fit_s__132->SetBinError(14,4.096182);
   htotpass_cat6_2016_fit_s__132->SetBinError(15,3.678034);
   htotpass_cat6_2016_fit_s__132->SetBinError(16,3.450723);
   htotpass_cat6_2016_fit_s__132->SetBinError(17,2.924559);
   htotpass_cat6_2016_fit_s__132->SetBinError(18,2.457694);
   htotpass_cat6_2016_fit_s__132->SetBinError(19,2.45796);
   htotpass_cat6_2016_fit_s__132->SetBinError(20,2.228342);
   htotpass_cat6_2016_fit_s__132->SetBinError(21,2.234686);
   htotpass_cat6_2016_fit_s__132->SetBinError(22,2.27977);
   htotpass_cat6_2016_fit_s__132->SetBinError(23,2.579641);
   htotpass_cat6_2016_fit_s__132->SetMinimum(0);
   htotpass_cat6_2016_fit_s__132->SetMaximum(256.8686);
   htotpass_cat6_2016_fit_s__132->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__132->SetFillColor(ci);
   htotpass_cat6_2016_fit_s__132->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s__132->SetLineColor(ci);
   htotpass_cat6_2016_fit_s__132->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s__132->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s__132->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s__132->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__132->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s__132->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__132->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s__132->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s__132->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s__132->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__132->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s__132->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s__132->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s__132->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s__132->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis33[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_33 = new TH1F("hstackMC_stack_33","hstackMC",23, xAxis33);
   hstackMC_stack_33->SetMinimum(-127.2422);
   hstackMC_stack_33->SetMaximum(161.7747);
   hstackMC_stack_33->SetDirectory(0);
   hstackMC_stack_33->SetStats(0);
   hstackMC_stack_33->SetLineStyle(0);
   hstackMC_stack_33->SetMarkerStyle(20);
   hstackMC_stack_33->GetXaxis()->SetLabelFont(42);
   hstackMC_stack_33->GetXaxis()->SetLabelOffset(0.007);
   hstackMC_stack_33->GetXaxis()->SetLabelSize(0.05);
   hstackMC_stack_33->GetXaxis()->SetTitleSize(0.06);
   hstackMC_stack_33->GetXaxis()->SetTitleOffset(0.9);
   hstackMC_stack_33->GetXaxis()->SetTitleFont(42);
   hstackMC_stack_33->GetYaxis()->SetLabelFont(42);
   hstackMC_stack_33->GetYaxis()->SetLabelOffset(0.007);
   hstackMC_stack_33->GetYaxis()->SetLabelSize(0.05);
   hstackMC_stack_33->GetYaxis()->SetTitleSize(0.06);
   hstackMC_stack_33->GetYaxis()->SetTitleOffset(1.25);
   hstackMC_stack_33->GetYaxis()->SetTitleFont(42);
   hstackMC_stack_33->GetZaxis()->SetLabelFont(42);
   hstackMC_stack_33->GetZaxis()->SetLabelOffset(0.007);
   hstackMC_stack_33->GetZaxis()->SetLabelSize(0.05);
   hstackMC_stack_33->GetZaxis()->SetTitleSize(0.06);
   hstackMC_stack_33->GetZaxis()->SetTitleFont(42);
   hstackMC->SetHistogram(hstackMC_stack_33);
   
   Double_t xAxis34[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *tqq_stack_1 = new TH1F("tqq_stack_1","tqq in cat6_2016_pass_cat6",23, xAxis34);
   tqq_stack_1->SetBinContent(3,0.5473644);
   tqq_stack_1->SetBinContent(4,1.059095);
   tqq_stack_1->SetBinContent(5,2.252093);
   tqq_stack_1->SetBinContent(6,4.778151);
   tqq_stack_1->SetBinContent(7,8.425263);
   tqq_stack_1->SetBinContent(8,5.067325);
   tqq_stack_1->SetBinContent(9,3.159529);
   tqq_stack_1->SetBinContent(10,1.598318);
   tqq_stack_1->SetBinContent(14,4.639605);
   tqq_stack_1->SetBinContent(15,4.164397);
   tqq_stack_1->SetBinContent(16,6.307609);
   tqq_stack_1->SetBinContent(17,2.204212);
   tqq_stack_1->SetBinContent(18,1.616454);
   tqq_stack_1->SetBinContent(19,2.343401);
   tqq_stack_1->SetBinContent(20,2.219448);
   tqq_stack_1->SetBinContent(21,0.5923491);
   tqq_stack_1->SetBinContent(23,0.5294404);
   tqq_stack_1->SetBinError(3,0.1414686);
   tqq_stack_1->SetBinError(4,0.2737276);
   tqq_stack_1->SetBinError(5,0.5820628);
   tqq_stack_1->SetBinError(6,1.234933);
   tqq_stack_1->SetBinError(7,2.177545);
   tqq_stack_1->SetBinError(8,1.309671);
   tqq_stack_1->SetBinError(9,0.8165932);
   tqq_stack_1->SetBinError(10,0.413092);
   tqq_stack_1->SetBinError(14,1.199125);
   tqq_stack_1->SetBinError(15,1.076306);
   tqq_stack_1->SetBinError(16,1.630228);
   tqq_stack_1->SetBinError(17,0.5696877);
   tqq_stack_1->SetBinError(18,0.4177793);
   tqq_stack_1->SetBinError(19,0.6056617);
   tqq_stack_1->SetBinError(20,0.5736253);
   tqq_stack_1->SetBinError(21,0.153095);
   tqq_stack_1->SetBinError(23,0.1368361);
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
   wqq_stack_2->SetBinContent(1,6.244066e-07);
   wqq_stack_2->SetBinContent(2,6.244066e-07);
   wqq_stack_2->SetBinContent(3,1.424633);
   wqq_stack_2->SetBinContent(4,9.041063);
   wqq_stack_2->SetBinContent(5,13.26317);
   wqq_stack_2->SetBinContent(6,22.99706);
   wqq_stack_2->SetBinContent(7,22.4701);
   wqq_stack_2->SetBinContent(8,13.11535);
   wqq_stack_2->SetBinContent(9,6.036148);
   wqq_stack_2->SetBinContent(10,0.853416);
   wqq_stack_2->SetBinContent(11,6.244066e-07);
   wqq_stack_2->SetBinContent(12,6.244066e-07);
   wqq_stack_2->SetBinContent(13,6.244066e-07);
   wqq_stack_2->SetBinContent(14,6.244066e-07);
   wqq_stack_2->SetBinContent(15,6.244066e-07);
   wqq_stack_2->SetBinContent(16,6.244066e-07);
   wqq_stack_2->SetBinContent(17,6.244066e-07);
   wqq_stack_2->SetBinContent(18,6.244066e-07);
   wqq_stack_2->SetBinContent(19,6.244066e-07);
   wqq_stack_2->SetBinContent(20,6.244066e-07);
   wqq_stack_2->SetBinContent(21,6.244066e-07);
   wqq_stack_2->SetBinContent(22,6.244066e-07);
   wqq_stack_2->SetBinContent(23,6.244066e-07);
   wqq_stack_2->SetBinError(1,1.343795e-07);
   wqq_stack_2->SetBinError(2,1.343795e-07);
   wqq_stack_2->SetBinError(3,0.455988);
   wqq_stack_2->SetBinError(4,2.502386);
   wqq_stack_2->SetBinError(5,2.70562);
   wqq_stack_2->SetBinError(6,5.044162);
   wqq_stack_2->SetBinError(7,5.393202);
   wqq_stack_2->SetBinError(8,4.422048);
   wqq_stack_2->SetBinError(9,2.455389);
   wqq_stack_2->SetBinError(10,0.389758);
   wqq_stack_2->SetBinError(11,1.343795e-07);
   wqq_stack_2->SetBinError(12,1.343795e-07);
   wqq_stack_2->SetBinError(13,1.343795e-07);
   wqq_stack_2->SetBinError(14,1.343795e-07);
   wqq_stack_2->SetBinError(15,1.343795e-07);
   wqq_stack_2->SetBinError(16,1.343795e-07);
   wqq_stack_2->SetBinError(17,1.343795e-07);
   wqq_stack_2->SetBinError(18,1.343795e-07);
   wqq_stack_2->SetBinError(19,1.343795e-07);
   wqq_stack_2->SetBinError(20,1.343795e-07);
   wqq_stack_2->SetBinError(21,1.343795e-07);
   wqq_stack_2->SetBinError(22,1.343795e-07);
   wqq_stack_2->SetBinError(23,1.343795e-07);
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
   zqq_stack_3->SetBinContent(1,9.699546e-07);
   zqq_stack_3->SetBinContent(2,9.699546e-07);
   zqq_stack_3->SetBinContent(3,0.5482041);
   zqq_stack_3->SetBinContent(4,2.642483);
   zqq_stack_3->SetBinContent(5,3.282508);
   zqq_stack_3->SetBinContent(6,19.53796);
   zqq_stack_3->SetBinContent(7,27.08809);
   zqq_stack_3->SetBinContent(8,38.28908);
   zqq_stack_3->SetBinContent(9,26.1531);
   zqq_stack_3->SetBinContent(10,17.03608);
   zqq_stack_3->SetBinContent(11,9.699546e-07);
   zqq_stack_3->SetBinContent(12,9.699546e-07);
   zqq_stack_3->SetBinContent(13,9.699546e-07);
   zqq_stack_3->SetBinContent(14,2.072949);
   zqq_stack_3->SetBinContent(15,1.392325);
   zqq_stack_3->SetBinContent(16,0.5221614);
   zqq_stack_3->SetBinContent(17,9.699546e-07);
   zqq_stack_3->SetBinContent(18,9.699546e-07);
   zqq_stack_3->SetBinContent(19,9.699546e-07);
   zqq_stack_3->SetBinContent(20,9.699546e-07);
   zqq_stack_3->SetBinContent(21,9.699546e-07);
   zqq_stack_3->SetBinContent(22,9.699546e-07);
   zqq_stack_3->SetBinContent(23,9.699546e-07);
   zqq_stack_3->SetBinError(1,2.237477e-07);
   zqq_stack_3->SetBinError(2,2.237477e-07);
   zqq_stack_3->SetBinError(3,0.5034457);
   zqq_stack_3->SetBinError(4,1.013441);
   zqq_stack_3->SetBinError(5,0.8683306);
   zqq_stack_3->SetBinError(6,6.576981);
   zqq_stack_3->SetBinError(7,6.845178);
   zqq_stack_3->SetBinError(8,8.892721);
   zqq_stack_3->SetBinError(9,7.760336);
   zqq_stack_3->SetBinError(10,5.032654);
   zqq_stack_3->SetBinError(11,2.237477e-07);
   zqq_stack_3->SetBinError(12,2.237477e-07);
   zqq_stack_3->SetBinError(13,2.237477e-07);
   zqq_stack_3->SetBinError(14,0.8528533);
   zqq_stack_3->SetBinError(15,0.6090702);
   zqq_stack_3->SetBinError(16,0.4795293);
   zqq_stack_3->SetBinError(17,2.237477e-07);
   zqq_stack_3->SetBinError(18,2.237477e-07);
   zqq_stack_3->SetBinError(19,2.237477e-07);
   zqq_stack_3->SetBinError(20,2.237477e-07);
   zqq_stack_3->SetBinError(21,2.237477e-07);
   zqq_stack_3->SetBinError(22,2.237477e-07);
   zqq_stack_3->SetBinError(23,2.237477e-07);
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
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(1,1.856293e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(2,1.856293e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(3,1.856293e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(4,0.005643871);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(5,0.045934);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(6,0.2123366);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(7,0.2437475);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(8,1.826504);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(9,1.651326);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(10,13.41447);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(11,1.856293e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(12,1.856293e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(13,1.856293e-07);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(14,2.698458);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(15,5.999866);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(16,0.05004252);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(17,0.5076882);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(18,0.01706696);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(19,0.0009478684);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(20,0.03264659);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(21,0.02098257);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(22,0.02069699);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinContent(23,0.01017021);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(1,1.791846e-06);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(2,1.791846e-06);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(3,1.791846e-06);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(4,0.01927486);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(5,0.1423481);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(6,1.021448);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(7,0.9516532);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(8,17.58165);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(9,15.81314);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(10,140.6567);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(11,1.791846e-06);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(12,1.791846e-06);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(13,1.791846e-06);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(14,39.23013);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(15,59.16279);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(16,2.192453);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(17,4.977661);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(18,0.05755247);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(19,0.007826578);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(20,0.1121886);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(21,0.07180057);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(22,0.07082573);
   hsigpass_cat6_2016_fit_s_stack_4->SetBinError(23,0.03473363);
   hsigpass_cat6_2016_fit_s_stack_4->SetEntries(92);

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
   
   Double_t data_copy_fx3033[23] = {
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
   Double_t data_copy_fy3033[23] = {
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
   Double_t data_copy_felx3033[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fely3033[23] = {
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
   Double_t data_copy_fehx3033[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t data_copy_fehy3033[23] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(23,data_copy_fx3033,data_copy_fy3033,data_copy_felx3033,data_copy_fehx3033,data_copy_fely3033,data_copy_fehy3033);
   grae->SetName("data_copy");
   grae->SetTitle("tqq in cat6_2016_pass_cat6");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3033 = new TH1F("Graph_data_copy3033","tqq in cat6_2016_pass_cat6",100,28.1,212.9);
   Graph_data_copy3033->SetMinimum(0);
   Graph_data_copy3033->SetMaximum(217.492);
   Graph_data_copy3033->SetDirectory(0);
   Graph_data_copy3033->SetStats(0);
   Graph_data_copy3033->SetLineStyle(0);
   Graph_data_copy3033->SetMarkerStyle(20);
   Graph_data_copy3033->GetXaxis()->SetLabelFont(42);
   Graph_data_copy3033->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_copy3033->GetXaxis()->SetLabelSize(0.05);
   Graph_data_copy3033->GetXaxis()->SetTitleSize(0.06);
   Graph_data_copy3033->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_copy3033->GetXaxis()->SetTitleFont(42);
   Graph_data_copy3033->GetYaxis()->SetLabelFont(42);
   Graph_data_copy3033->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_copy3033->GetYaxis()->SetLabelSize(0.05);
   Graph_data_copy3033->GetYaxis()->SetTitleSize(0.06);
   Graph_data_copy3033->GetYaxis()->SetTitleOffset(1.25);
   Graph_data_copy3033->GetYaxis()->SetTitleFont(42);
   Graph_data_copy3033->GetZaxis()->SetLabelFont(42);
   Graph_data_copy3033->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_copy3033->GetZaxis()->SetLabelSize(0.05);
   Graph_data_copy3033->GetZaxis()->SetTitleSize(0.06);
   Graph_data_copy3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_copy3033);
   
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
   entry=leg->AddEntry("htotpass_cat6_2016_fit_s","Total background","lf");

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
   
   TH1F *htotpass_cat6_2016_fit_s_copy__133 = new TH1F("htotpass_cat6_2016_fit_s_copy__133","wqq in cat6_2016_pass_cat6",23,40,201);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(1,1.594361e-06);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(2,139.4064);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(3,145.3719);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(4,149.4824);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(5,148.108);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(6,170.1349);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(7,171.2457);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(8,161.613);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(9,131.9982);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(10,110.3674);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(11,1.594361e-06);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(12,1.594361e-06);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(13,1.594361e-06);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(14,77.05933);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(15,72.29847);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(16,69.98358);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(17,64.11776);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(18,60.54443);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(19,59.24273);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(20,54.51384);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(21,51.12676);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(22,47.96762);
   htotpass_cat6_2016_fit_s_copy__133->SetBinContent(23,46.01183);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(1,2.609998e-07);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(2,8.565637);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(3,6.685471);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(4,6.724274);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(5,6.918494);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(6,10.56879);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(7,11.08225);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(8,11.8488);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(9,10.20251);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(10,7.58303);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(11,2.609998e-07);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(12,2.609998e-07);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(13,2.609998e-07);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(14,4.096182);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(15,3.678034);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(16,3.450723);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(17,2.924559);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(18,2.457694);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(19,2.45796);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(20,2.228342);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(21,2.234686);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(22,2.27977);
   htotpass_cat6_2016_fit_s_copy__133->SetBinError(23,2.579641);
   htotpass_cat6_2016_fit_s_copy__133->SetMaximum(256.8686);
   htotpass_cat6_2016_fit_s_copy__133->SetEntries(92);
   htotpass_cat6_2016_fit_s_copy__133->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s_copy__133->SetFillColor(ci);
   htotpass_cat6_2016_fit_s_copy__133->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat6_2016_fit_s_copy__133->SetLineColor(ci);
   htotpass_cat6_2016_fit_s_copy__133->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat6_2016_fit_s_copy__133->SetMarkerColor(ci);
   htotpass_cat6_2016_fit_s_copy__133->SetMarkerSize(0);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetRange(2,23);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetLabelOffset(100);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetTitleOffset(100);
   htotpass_cat6_2016_fit_s_copy__133->GetXaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__133->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat6_2016_fit_s_copy__133->GetYaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__133->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat6_2016_fit_s_copy__133->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat6_2016_fit_s_copy__133->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat6_2016_fit_s_copy__133->GetYaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__133->GetZaxis()->SetLabelFont(42);
   htotpass_cat6_2016_fit_s_copy__133->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat6_2016_fit_s_copy__133->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat6_2016_fit_s_copy__133->GetZaxis()->SetTitleFont(42);
   htotpass_cat6_2016_fit_s_copy__133->Draw("sameaxis");
   p12pass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
  
// ------------>Primitives in pad: p22pass_cat6_2016_fit_s
   TPad *p22pass_cat6_2016_fit_s = new TPad("p22pass_cat6_2016_fit_s", "p22pass_cat6_2016_fit_s",0,0,1,0.3);
   p22pass_cat6_2016_fit_s->Draw();
   p22pass_cat6_2016_fit_s->cd();
   p22pass_cat6_2016_fit_s->Range(13.7027,-10.26456,221.8108,7.28397);
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
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s__134 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s__134","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s__134->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_s__134->SetMaximum(6.406543);
   iOneWithErrorspass_cat6_2016_fit_s__134->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__134->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__134->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__134->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__134->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s__134->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s__134->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s__134->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s__134->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_34 = new TH1F("hstack_stack_34","hstack",23,40,201);
   hstack_stack_34->SetMinimum(-139.4648);
   hstack_stack_34->SetMaximum(148.941);
   hstack_stack_34->SetDirectory(0);
   hstack_stack_34->SetStats(0);
   hstack_stack_34->SetLineStyle(0);
   hstack_stack_34->SetMarkerStyle(20);
   hstack_stack_34->GetXaxis()->SetLabelFont(42);
   hstack_stack_34->GetXaxis()->SetLabelOffset(0.007);
   hstack_stack_34->GetXaxis()->SetLabelSize(0.05);
   hstack_stack_34->GetXaxis()->SetTitleSize(0.06);
   hstack_stack_34->GetXaxis()->SetTitleOffset(0.9);
   hstack_stack_34->GetXaxis()->SetTitleFont(42);
   hstack_stack_34->GetYaxis()->SetLabelFont(42);
   hstack_stack_34->GetYaxis()->SetLabelOffset(0.007);
   hstack_stack_34->GetYaxis()->SetLabelSize(0.05);
   hstack_stack_34->GetYaxis()->SetTitleSize(0.06);
   hstack_stack_34->GetYaxis()->SetTitleOffset(1.25);
   hstack_stack_34->GetYaxis()->SetTitleFont(42);
   hstack_stack_34->GetZaxis()->SetLabelFont(42);
   hstack_stack_34->GetZaxis()->SetLabelOffset(0.007);
   hstack_stack_34->GetZaxis()->SetLabelSize(0.05);
   hstack_stack_34->GetZaxis()->SetTitleSize(0.06);
   hstack_stack_34->GetZaxis()->SetTitleFont(42);
   hstack->SetHistogram(hstack_stack_34);
   
   
   TH1F *sigHistResidualwqqpass_cat6_2016_fit_s_stack_1 = new TH1F("sigHistResidualwqqpass_cat6_2016_fit_s_stack_1","wqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(2,5.441549e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(3,0.1145506);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(4,0.7733589);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(5,1.098905);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(6,1.740042);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(7,1.65799);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(8,1.061452);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(9,0.5089289);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(10,0.0758268);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(14,7.178119e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(15,6.995589e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(16,7.27491e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(17,7.705333e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(18,8.950573e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(19,7.226028e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(20,7.825427e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(21,8.950573e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(22,9.559251e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinContent(23,9.791508e-08);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(1,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(2,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(3,0.455988);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(4,2.502386);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(5,2.70562);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(6,5.044162);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(7,5.393202);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(8,4.422048);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(9,2.455389);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(10,0.389758);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(11,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(12,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(13,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(14,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(15,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(16,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(17,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(18,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(19,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(20,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(21,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(22,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetBinError(23,1.343795e-07);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat6_2016_fit_s_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat6_2016_fit_s_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat6_2016_fit_s_stack_2 = new TH1F("sigHistResidualzqqpass_cat6_2016_fit_s_stack_2","zqq in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(2,8.452915e-08);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(3,0.04407948);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(4,0.226034);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(5,0.2719684);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(6,1.478313);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(7,1.998736);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(8,3.098814);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(9,2.20506);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(10,1.513672);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(14,0.2383043);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(15,0.1559902);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(16,0.06083659);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(17,1.196948e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(18,1.390384e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(19,1.122493e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(20,1.215604e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(21,1.390384e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(22,1.484936e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinContent(23,1.521015e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(1,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(2,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(3,0.5034457);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(4,1.013441);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(5,0.8683306);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(6,6.576981);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(7,6.845178);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(8,8.892721);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(9,7.760336);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(10,5.032654);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(11,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(12,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(13,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(14,0.8528533);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(15,0.6090702);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(16,0.4795293);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(17,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(18,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(19,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(20,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(21,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(22,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetBinError(23,2.237477e-07);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat6_2016_fit_s_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat6_2016_fit_s_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3 = new TH1F("sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3","ggH_hbb in cat6_2016_pass_cat6",23,40,201);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(2,1.617713e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(3,1.492591e-08);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(4,0.0004827682);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(5,0.003805808);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(6,0.01606616);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(7,0.01798528);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(8,0.1478227);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(9,0.1392291);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(10,1.191888);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(14,0.3102122);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(15,0.6721997);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(16,0.005830412);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(17,0.06264998);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(18,0.002446468);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(19,0.0001096933);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(20,0.004091461);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(21,0.003007753);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(22,0.003168572);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinContent(23,0.001594821);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(1,1.791846e-06);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(2,1.791846e-06);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(3,1.791846e-06);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(4,0.01927486);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(5,0.1423481);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(6,1.021448);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(7,0.9516532);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(8,17.58165);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(9,15.81314);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(10,140.6567);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(11,1.791846e-06);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(12,1.791846e-06);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(13,1.791846e-06);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(14,39.23013);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(15,59.16279);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(16,2.192453);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(17,4.977661);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(18,0.05755247);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(19,0.007826578);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(20,0.1121886);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(21,0.07180057);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(22,0.07082573);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetBinError(23,0.03473363);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat6_2016_fit_spass_cat6_2016_fit_s_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat6_2016_fit_s__135 = new TH1F("iOneWithErrorsLinepass_cat6_2016_fit_s__135","",23,40,201);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetFillColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetLineColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat6_2016_fit_s__135->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fx3034[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fy3034[23] = {
   0,
   -0.6454457,
   0.860794,
   -0.06833186,
   1.101193,
   3.325329,
   4.271029,
   3.194209,
   3.192433,
   2.806837,
   0,
   0,
   0,
   0.1038941,
   0.9110459,
   0.4707436,
   0.2053662,
   -1.65484,
   1.624633,
   1.049136,
   -0.3048608,
   -0.7605104,
   -0.7859201};
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_felx3034[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fely3034[23] = {
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fehx3034[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat6_2016_fit_s_fehy3034[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat6_2016_fit_s_fx3034,Graph_from_iRatiopass_cat6_2016_fit_s_fy3034,Graph_from_iRatiopass_cat6_2016_fit_s_felx3034,Graph_from_iRatiopass_cat6_2016_fit_s_fehx3034,Graph_from_iRatiopass_cat6_2016_fit_s_fely3034,Graph_from_iRatiopass_cat6_2016_fit_s_fehy3034);
   grae->SetName("Graph_from_iRatiopass_cat6_2016_fit_s");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034 = new TH1F("Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->SetMinimum(-3.447427);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->SetMaximum(6.063616);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->SetStats(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat6_2016_fit_s3034);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat6_2016_fit_s_copy__136 = new TH1F("iOneWithErrorspass_cat6_2016_fit_s_copy__136","",23,40,201);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetMinimum(-5);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetMaximum(6.406543);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetEntries(184);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetFillColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetLineColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetMarkerColor(ci);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->SetMarkerSize(0);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat6_2016_fit_s_copy__136->Draw("sameaxis");
   p22pass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
   cpass_cat6_2016_fit_s->Modified();
   cpass_cat6_2016_fit_s->cd();
   cpass_cat6_2016_fit_s->SetSelected(cpass_cat6_2016_fit_s);
}
