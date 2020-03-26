void mlfit_pass_cat3_2016_prefit()
{
//=========Macro generated from canvas: cpass_cat3_2016_prefit/cpass_cat3_2016_prefit
//=========  (Wed Sep  4 11:54:13 2019) by ROOT version 6.12/07
   TCanvas *cpass_cat3_2016_prefit = new TCanvas("cpass_cat3_2016_prefit", "cpass_cat3_2016_prefit",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cpass_cat3_2016_prefit->SetHighLightColor(2);
   cpass_cat3_2016_prefit->Range(0,0,1,1);
   cpass_cat3_2016_prefit->SetFillColor(0);
   cpass_cat3_2016_prefit->SetBorderMode(0);
   cpass_cat3_2016_prefit->SetBorderSize(2);
   cpass_cat3_2016_prefit->SetTickx(1);
   cpass_cat3_2016_prefit->SetTicky(1);
   cpass_cat3_2016_prefit->SetLeftMargin(0.16);
   cpass_cat3_2016_prefit->SetBottomMargin(0.13);
   cpass_cat3_2016_prefit->SetFrameFillStyle(0);
   cpass_cat3_2016_prefit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p12pass_cat3_2016_prefit
   TPad *p12pass_cat3_2016_prefit = new TPad("p12pass_cat3_2016_prefit", "p12pass_cat3_2016_prefit",0,0.3,1,1);
   p12pass_cat3_2016_prefit->Draw();
   p12pass_cat3_2016_prefit->cd();
   p12pass_cat3_2016_prefit->Range(13.7027,-25.33031,221.8108,1241.185);
   p12pass_cat3_2016_prefit->SetFillColor(0);
   p12pass_cat3_2016_prefit->SetBorderMode(0);
   p12pass_cat3_2016_prefit->SetBorderSize(2);
   p12pass_cat3_2016_prefit->SetTickx(1);
   p12pass_cat3_2016_prefit->SetTicky(1);
   p12pass_cat3_2016_prefit->SetLeftMargin(0.16);
   p12pass_cat3_2016_prefit->SetBottomMargin(0.02);
   p12pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat3_2016_prefit->SetFrameBorderMode(0);
   p12pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p12pass_cat3_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *htotpass_cat3_2016_prefit__41 = new TH1F("htotpass_cat3_2016_prefit__41","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_prefit__41->SetBinContent(1,4.257061e-06);
   htotpass_cat3_2016_prefit__41->SetBinContent(2,565.8411);
   htotpass_cat3_2016_prefit__41->SetBinContent(3,626.6229);
   htotpass_cat3_2016_prefit__41->SetBinContent(4,640.9543);
   htotpass_cat3_2016_prefit__41->SetBinContent(5,654.0794);
   htotpass_cat3_2016_prefit__41->SetBinContent(6,718.8784);
   htotpass_cat3_2016_prefit__41->SetBinContent(7,743.0224);
   htotpass_cat3_2016_prefit__41->SetBinContent(8,722.3418);
   htotpass_cat3_2016_prefit__41->SetBinContent(9,651.7588);
   htotpass_cat3_2016_prefit__41->SetBinContent(10,518.6117);
   htotpass_cat3_2016_prefit__41->SetBinContent(11,4.257061e-06);
   htotpass_cat3_2016_prefit__41->SetBinContent(12,4.257061e-06);
   htotpass_cat3_2016_prefit__41->SetBinContent(13,4.257061e-06);
   htotpass_cat3_2016_prefit__41->SetBinContent(14,378.7074);
   htotpass_cat3_2016_prefit__41->SetBinContent(15,342.4628);
   htotpass_cat3_2016_prefit__41->SetBinContent(16,297.914);
   htotpass_cat3_2016_prefit__41->SetBinContent(17,257.1687);
   htotpass_cat3_2016_prefit__41->SetBinContent(18,219.1025);
   htotpass_cat3_2016_prefit__41->SetBinContent(19,177.8864);
   htotpass_cat3_2016_prefit__41->SetBinContent(20,147.2878);
   htotpass_cat3_2016_prefit__41->SetBinContent(21,115.7229);
   htotpass_cat3_2016_prefit__41->SetBinContent(22,85.94496);
   htotpass_cat3_2016_prefit__41->SetBinContent(23,64.05327);
   htotpass_cat3_2016_prefit__41->SetBinError(1,8.18384e-07);
   htotpass_cat3_2016_prefit__41->SetBinError(2,15.73857);
   htotpass_cat3_2016_prefit__41->SetBinError(3,11.50133);
   htotpass_cat3_2016_prefit__41->SetBinError(4,11.46443);
   htotpass_cat3_2016_prefit__41->SetBinError(5,16.13125);
   htotpass_cat3_2016_prefit__41->SetBinError(6,25.65358);
   htotpass_cat3_2016_prefit__41->SetBinError(7,37.04717);
   htotpass_cat3_2016_prefit__41->SetBinError(8,52.63825);
   htotpass_cat3_2016_prefit__41->SetBinError(9,38.32809);
   htotpass_cat3_2016_prefit__41->SetBinError(10,28.50945);
   htotpass_cat3_2016_prefit__41->SetBinError(11,8.18384e-07);
   htotpass_cat3_2016_prefit__41->SetBinError(12,8.18384e-07);
   htotpass_cat3_2016_prefit__41->SetBinError(13,8.18384e-07);
   htotpass_cat3_2016_prefit__41->SetBinError(14,10.03161);
   htotpass_cat3_2016_prefit__41->SetBinError(15,8.142961);
   htotpass_cat3_2016_prefit__41->SetBinError(16,6.384616);
   htotpass_cat3_2016_prefit__41->SetBinError(17,6.046736);
   htotpass_cat3_2016_prefit__41->SetBinError(18,5.741524);
   htotpass_cat3_2016_prefit__41->SetBinError(19,4.737292);
   htotpass_cat3_2016_prefit__41->SetBinError(20,4.823828);
   htotpass_cat3_2016_prefit__41->SetBinError(21,4.660884);
   htotpass_cat3_2016_prefit__41->SetBinError(22,4.389116);
   htotpass_cat3_2016_prefit__41->SetBinError(23,4.317834);
   htotpass_cat3_2016_prefit__41->SetMinimum(0);
   htotpass_cat3_2016_prefit__41->SetMaximum(1114.534);
   htotpass_cat3_2016_prefit__41->SetEntries(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__41->SetFillColor(ci);
   htotpass_cat3_2016_prefit__41->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__41->SetLineColor(ci);
   htotpass_cat3_2016_prefit__41->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_prefit__41->SetMarkerColor(ci);
   htotpass_cat3_2016_prefit__41->SetMarkerSize(0);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_prefit__41->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__41->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_prefit__41->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__41->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_prefit__41->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_prefit__41->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_prefit__41->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__41->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__41->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__41->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__41->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__41->Draw("");
   
   TH1F *htot_linepass_cat3_2016_prefit__42 = new TH1F("htot_linepass_cat3_2016_prefit__42","wqq in cat3_2016_pass_cat3",23,40,201);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(1,4.257061e-06);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(2,565.8411);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(3,626.6229);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(4,640.9543);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(5,654.0794);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(6,718.8784);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(7,743.0224);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(8,722.3418);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(9,651.7588);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(10,518.6117);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(11,4.257061e-06);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(12,4.257061e-06);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(13,4.257061e-06);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(14,378.7074);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(15,342.4628);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(16,297.914);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(17,257.1687);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(18,219.1025);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(19,177.8864);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(20,147.2878);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(21,115.7229);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(22,85.94496);
   htot_linepass_cat3_2016_prefit__42->SetBinContent(23,64.05327);
   htot_linepass_cat3_2016_prefit__42->SetBinError(1,8.18384e-07);
   htot_linepass_cat3_2016_prefit__42->SetBinError(2,15.73857);
   htot_linepass_cat3_2016_prefit__42->SetBinError(3,11.50133);
   htot_linepass_cat3_2016_prefit__42->SetBinError(4,11.46443);
   htot_linepass_cat3_2016_prefit__42->SetBinError(5,16.13125);
   htot_linepass_cat3_2016_prefit__42->SetBinError(6,25.65358);
   htot_linepass_cat3_2016_prefit__42->SetBinError(7,37.04717);
   htot_linepass_cat3_2016_prefit__42->SetBinError(8,52.63825);
   htot_linepass_cat3_2016_prefit__42->SetBinError(9,38.32809);
   htot_linepass_cat3_2016_prefit__42->SetBinError(10,28.50945);
   htot_linepass_cat3_2016_prefit__42->SetBinError(11,8.18384e-07);
   htot_linepass_cat3_2016_prefit__42->SetBinError(12,8.18384e-07);
   htot_linepass_cat3_2016_prefit__42->SetBinError(13,8.18384e-07);
   htot_linepass_cat3_2016_prefit__42->SetBinError(14,10.03161);
   htot_linepass_cat3_2016_prefit__42->SetBinError(15,8.142961);
   htot_linepass_cat3_2016_prefit__42->SetBinError(16,6.384616);
   htot_linepass_cat3_2016_prefit__42->SetBinError(17,6.046736);
   htot_linepass_cat3_2016_prefit__42->SetBinError(18,5.741524);
   htot_linepass_cat3_2016_prefit__42->SetBinError(19,4.737292);
   htot_linepass_cat3_2016_prefit__42->SetBinError(20,4.823828);
   htot_linepass_cat3_2016_prefit__42->SetBinError(21,4.660884);
   htot_linepass_cat3_2016_prefit__42->SetBinError(22,4.389116);
   htot_linepass_cat3_2016_prefit__42->SetBinError(23,4.317834);
   htot_linepass_cat3_2016_prefit__42->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_prefit__42->SetFillColor(ci);
   htot_linepass_cat3_2016_prefit__42->SetFillStyle(0);

   ci = TColor::GetColor("#3366cc");
   htot_linepass_cat3_2016_prefit__42->SetLineColor(ci);
   htot_linepass_cat3_2016_prefit__42->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htot_linepass_cat3_2016_prefit__42->SetMarkerColor(ci);
   htot_linepass_cat3_2016_prefit__42->SetMarkerSize(0);
   htot_linepass_cat3_2016_prefit__42->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htot_linepass_cat3_2016_prefit__42->GetXaxis()->SetRange(2,23);
   htot_linepass_cat3_2016_prefit__42->GetXaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_prefit__42->GetXaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_prefit__42->GetXaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_prefit__42->GetXaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_prefit__42->GetYaxis()->SetTitle("Events / 7 GeV");
   htot_linepass_cat3_2016_prefit__42->GetYaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_prefit__42->GetYaxis()->SetLabelSize(0.05);
   htot_linepass_cat3_2016_prefit__42->GetYaxis()->SetTitleSize(0.06);
   htot_linepass_cat3_2016_prefit__42->GetYaxis()->SetTitleOffset(1.25);
   htot_linepass_cat3_2016_prefit__42->GetYaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_prefit__42->GetZaxis()->SetLabelFont(42);
   htot_linepass_cat3_2016_prefit__42->GetZaxis()->SetLabelSize(0.035);
   htot_linepass_cat3_2016_prefit__42->GetZaxis()->SetTitleSize(0.035);
   htot_linepass_cat3_2016_prefit__42->GetZaxis()->SetTitleFont(42);
   htot_linepass_cat3_2016_prefit__42->Draw("histsame");
   
   TH1F *qcd__43 = new TH1F("qcd__43","qcd in cat3_2016_pass_cat3",23,40,201);
   qcd__43->SetBinContent(2,561.2573);
   qcd__43->SetBinContent(3,613.4407);
   qcd__43->SetBinContent(4,627.0352);
   qcd__43->SetBinContent(5,615.0496);
   qcd__43->SetBinContent(6,589.1296);
   qcd__43->SetBinContent(7,563.1407);
   qcd__43->SetBinContent(8,540.9874);
   qcd__43->SetBinContent(9,513.9722);
   qcd__43->SetBinContent(10,490.0379);
   qcd__43->SetBinContent(14,364.9183);
   qcd__43->SetBinContent(15,331.9499);
   qcd__43->SetBinContent(16,290.7368);
   qcd__43->SetBinContent(17,250.6645);
   qcd__43->SetBinContent(18,213.3909);
   qcd__43->SetBinContent(19,175.2465);
   qcd__43->SetBinContent(20,144.7542);
   qcd__43->SetBinContent(21,113.9882);
   qcd__43->SetBinContent(22,85.53085);
   qcd__43->SetBinContent(23,63.63915);
   qcd__43->SetBinError(2,15.41295);
   qcd__43->SetBinError(3,10.70951);
   qcd__43->SetBinError(4,8.625208);
   qcd__43->SetBinError(5,7.766462);
   qcd__43->SetBinError(6,7.32394);
   qcd__43->SetBinError(7,7.033786);
   qcd__43->SetBinError(8,6.795061);
   qcd__43->SetBinError(9,6.462465);
   qcd__43->SetBinError(10,6.140635);
   qcd__43->SetBinError(14,4.735332);
   qcd__43->SetBinError(15,4.582191);
   qcd__43->SetBinError(16,4.432149);
   qcd__43->SetBinError(17,4.383924);
   qcd__43->SetBinError(18,4.426108);
   qcd__43->SetBinError(19,4.425449);
   qcd__43->SetBinError(20,4.542863);
   qcd__43->SetBinError(21,4.526598);
   qcd__43->SetBinError(22,4.3811);
   qcd__43->SetBinError(23,4.309684);
   qcd__43->SetEntries(23);

   ci = TColor::GetColor("#666666");
   qcd__43->SetLineColor(ci);
   qcd__43->SetLineStyle(2);
   qcd__43->SetLineWidth(2);
   qcd__43->GetXaxis()->SetTitle("x");
   qcd__43->GetXaxis()->SetLabelFont(42);
   qcd__43->GetXaxis()->SetLabelSize(0.035);
   qcd__43->GetXaxis()->SetTitleSize(0.035);
   qcd__43->GetXaxis()->SetTitleFont(42);
   qcd__43->GetYaxis()->SetTitle("Events / ( 7 )");
   qcd__43->GetYaxis()->SetLabelFont(42);
   qcd__43->GetYaxis()->SetLabelSize(0.035);
   qcd__43->GetYaxis()->SetTitleSize(0.035);
   qcd__43->GetYaxis()->SetTitleOffset(0);
   qcd__43->GetYaxis()->SetTitleFont(42);
   qcd__43->GetZaxis()->SetLabelFont(42);
   qcd__43->GetZaxis()->SetLabelSize(0.035);
   qcd__43->GetZaxis()->SetTitleSize(0.035);
   qcd__43->GetZaxis()->SetTitleFont(42);
   qcd__43->Draw("hist sames");
   
   TH1F *htotpass_cat3_2016_prefit__44 = new TH1F("htotpass_cat3_2016_prefit__44","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_prefit__44->SetBinContent(1,4.257061e-06);
   htotpass_cat3_2016_prefit__44->SetBinContent(2,565.8411);
   htotpass_cat3_2016_prefit__44->SetBinContent(3,626.6229);
   htotpass_cat3_2016_prefit__44->SetBinContent(4,640.9543);
   htotpass_cat3_2016_prefit__44->SetBinContent(5,654.0794);
   htotpass_cat3_2016_prefit__44->SetBinContent(6,718.8784);
   htotpass_cat3_2016_prefit__44->SetBinContent(7,743.0224);
   htotpass_cat3_2016_prefit__44->SetBinContent(8,722.3418);
   htotpass_cat3_2016_prefit__44->SetBinContent(9,651.7588);
   htotpass_cat3_2016_prefit__44->SetBinContent(10,518.6117);
   htotpass_cat3_2016_prefit__44->SetBinContent(11,4.257061e-06);
   htotpass_cat3_2016_prefit__44->SetBinContent(12,4.257061e-06);
   htotpass_cat3_2016_prefit__44->SetBinContent(13,4.257061e-06);
   htotpass_cat3_2016_prefit__44->SetBinContent(14,378.7074);
   htotpass_cat3_2016_prefit__44->SetBinContent(15,342.4628);
   htotpass_cat3_2016_prefit__44->SetBinContent(16,297.914);
   htotpass_cat3_2016_prefit__44->SetBinContent(17,257.1687);
   htotpass_cat3_2016_prefit__44->SetBinContent(18,219.1025);
   htotpass_cat3_2016_prefit__44->SetBinContent(19,177.8864);
   htotpass_cat3_2016_prefit__44->SetBinContent(20,147.2878);
   htotpass_cat3_2016_prefit__44->SetBinContent(21,115.7229);
   htotpass_cat3_2016_prefit__44->SetBinContent(22,85.94496);
   htotpass_cat3_2016_prefit__44->SetBinContent(23,64.05327);
   htotpass_cat3_2016_prefit__44->SetBinError(1,8.18384e-07);
   htotpass_cat3_2016_prefit__44->SetBinError(2,15.73857);
   htotpass_cat3_2016_prefit__44->SetBinError(3,11.50133);
   htotpass_cat3_2016_prefit__44->SetBinError(4,11.46443);
   htotpass_cat3_2016_prefit__44->SetBinError(5,16.13125);
   htotpass_cat3_2016_prefit__44->SetBinError(6,25.65358);
   htotpass_cat3_2016_prefit__44->SetBinError(7,37.04717);
   htotpass_cat3_2016_prefit__44->SetBinError(8,52.63825);
   htotpass_cat3_2016_prefit__44->SetBinError(9,38.32809);
   htotpass_cat3_2016_prefit__44->SetBinError(10,28.50945);
   htotpass_cat3_2016_prefit__44->SetBinError(11,8.18384e-07);
   htotpass_cat3_2016_prefit__44->SetBinError(12,8.18384e-07);
   htotpass_cat3_2016_prefit__44->SetBinError(13,8.18384e-07);
   htotpass_cat3_2016_prefit__44->SetBinError(14,10.03161);
   htotpass_cat3_2016_prefit__44->SetBinError(15,8.142961);
   htotpass_cat3_2016_prefit__44->SetBinError(16,6.384616);
   htotpass_cat3_2016_prefit__44->SetBinError(17,6.046736);
   htotpass_cat3_2016_prefit__44->SetBinError(18,5.741524);
   htotpass_cat3_2016_prefit__44->SetBinError(19,4.737292);
   htotpass_cat3_2016_prefit__44->SetBinError(20,4.823828);
   htotpass_cat3_2016_prefit__44->SetBinError(21,4.660884);
   htotpass_cat3_2016_prefit__44->SetBinError(22,4.389116);
   htotpass_cat3_2016_prefit__44->SetBinError(23,4.317834);
   htotpass_cat3_2016_prefit__44->SetMinimum(0);
   htotpass_cat3_2016_prefit__44->SetMaximum(1114.534);
   htotpass_cat3_2016_prefit__44->SetEntries(92);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__44->SetFillColor(ci);
   htotpass_cat3_2016_prefit__44->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit__44->SetLineColor(ci);
   htotpass_cat3_2016_prefit__44->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_prefit__44->SetMarkerColor(ci);
   htotpass_cat3_2016_prefit__44->SetMarkerSize(0);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_prefit__44->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__44->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_prefit__44->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__44->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_prefit__44->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_prefit__44->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_prefit__44->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__44->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit__44->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit__44->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit__44->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit__44->Draw("E2same");
   
   THStack *hstackMC = new THStack();
   hstackMC->SetName("hstackMC");
   hstackMC->SetTitle("hstackMC");
   Double_t xAxis11[24] = {40, 47, 54, 61, 68, 75, 82, 89, 96, 103, 110, 117, 124, 131, 138, 145, 152, 159, 166, 173, 180, 187, 194, 201}; 
   
   TH1F *hstackMC_stack_11 = new TH1F("hstackMC_stack_11","hstackMC",23, xAxis11);
   hstackMC_stack_11->SetMinimum(-90.05161);
   hstackMC_stack_11->SetMaximum(201.6063);
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
   tqq_stack_1->SetBinContent(2,4.58378);
   tqq_stack_1->SetBinContent(3,5.231419);
   tqq_stack_1->SetBinContent(4,8.223321);
   tqq_stack_1->SetBinContent(5,9.087708);
   tqq_stack_1->SetBinContent(6,17.97449);
   tqq_stack_1->SetBinContent(7,21.15899);
   tqq_stack_1->SetBinContent(8,17.32043);
   tqq_stack_1->SetBinContent(9,19.78836);
   tqq_stack_1->SetBinContent(10,16.53972);
   tqq_stack_1->SetBinContent(14,13.78914);
   tqq_stack_1->SetBinContent(15,10.51287);
   tqq_stack_1->SetBinContent(16,7.177259);
   tqq_stack_1->SetBinContent(17,6.504226);
   tqq_stack_1->SetBinContent(18,5.711624);
   tqq_stack_1->SetBinContent(19,2.639968);
   tqq_stack_1->SetBinContent(20,2.533597);
   tqq_stack_1->SetBinContent(21,1.734731);
   tqq_stack_1->SetBinContent(22,0.4141142);
   tqq_stack_1->SetBinContent(23,0.4141142);
   tqq_stack_1->SetBinError(2,2.934984);
   tqq_stack_1->SetBinError(3,3.349665);
   tqq_stack_1->SetBinError(4,5.265373);
   tqq_stack_1->SetBinError(5,5.818837);
   tqq_stack_1->SetBinError(6,11.50902);
   tqq_stack_1->SetBinError(7,13.54805);
   tqq_stack_1->SetBinError(8,11.09023);
   tqq_stack_1->SetBinError(9,12.67044);
   tqq_stack_1->SetBinError(10,10.59034);
   tqq_stack_1->SetBinError(14,8.829154);
   tqq_stack_1->SetBinError(15,6.73137);
   tqq_stack_1->SetBinError(16,4.595582);
   tqq_stack_1->SetBinError(17,4.164641);
   tqq_stack_1->SetBinError(18,3.65714);
   tqq_stack_1->SetBinError(19,1.690365);
   tqq_stack_1->SetBinError(20,1.622256);
   tqq_stack_1->SetBinError(21,1.110744);
   tqq_stack_1->SetBinError(22,0.2651563);
   tqq_stack_1->SetBinError(23,0.2651563);
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
   wqq_stack_2->SetBinContent(1,1.666617e-06);
   wqq_stack_2->SetBinContent(2,1.666617e-06);
   wqq_stack_2->SetBinContent(3,3.510665);
   wqq_stack_2->SetBinContent(4,5.695725);
   wqq_stack_2->SetBinContent(5,25.2469);
   wqq_stack_2->SetBinContent(6,72.30769);
   wqq_stack_2->SetBinContent(7,94.33781);
   wqq_stack_2->SetBinContent(8,21.49481);
   wqq_stack_2->SetBinContent(9,12.72604);
   wqq_stack_2->SetBinContent(10,2.768538);
   wqq_stack_2->SetBinContent(11,1.666617e-06);
   wqq_stack_2->SetBinContent(12,1.666617e-06);
   wqq_stack_2->SetBinContent(13,1.666617e-06);
   wqq_stack_2->SetBinContent(14,1.666617e-06);
   wqq_stack_2->SetBinContent(15,1.666617e-06);
   wqq_stack_2->SetBinContent(16,1.666617e-06);
   wqq_stack_2->SetBinContent(17,1.666617e-06);
   wqq_stack_2->SetBinContent(18,1.666617e-06);
   wqq_stack_2->SetBinContent(19,1.666617e-06);
   wqq_stack_2->SetBinContent(20,1.666617e-06);
   wqq_stack_2->SetBinContent(21,1.666617e-06);
   wqq_stack_2->SetBinContent(22,1.666617e-06);
   wqq_stack_2->SetBinContent(23,1.666617e-06);
   wqq_stack_2->SetBinError(1,3.769402e-07);
   wqq_stack_2->SetBinError(2,0.908968);
   wqq_stack_2->SetBinError(3,1.194077);
   wqq_stack_2->SetBinError(4,5.1383);
   wqq_stack_2->SetBinError(5,8.91735);
   wqq_stack_2->SetBinError(6,17.72163);
   wqq_stack_2->SetBinError(7,23.36448);
   wqq_stack_2->SetBinError(8,12.43599);
   wqq_stack_2->SetBinError(9,4.06483);
   wqq_stack_2->SetBinError(10,2.587612);
   wqq_stack_2->SetBinError(11,3.769402e-07);
   wqq_stack_2->SetBinError(12,3.769402e-07);
   wqq_stack_2->SetBinError(13,3.769402e-07);
   wqq_stack_2->SetBinError(14,3.769402e-07);
   wqq_stack_2->SetBinError(15,3.769402e-07);
   wqq_stack_2->SetBinError(16,3.769402e-07);
   wqq_stack_2->SetBinError(17,3.769402e-07);
   wqq_stack_2->SetBinError(18,3.769402e-07);
   wqq_stack_2->SetBinError(19,3.769402e-07);
   wqq_stack_2->SetBinError(20,3.769402e-07);
   wqq_stack_2->SetBinError(21,3.769402e-07);
   wqq_stack_2->SetBinError(22,3.769402e-07);
   wqq_stack_2->SetBinError(23,3.769402e-07);
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
   zqq_stack_3->SetBinContent(1,2.590444e-06);
   zqq_stack_3->SetBinContent(2,2.590444e-06);
   zqq_stack_3->SetBinContent(3,4.440021);
   zqq_stack_3->SetBinContent(4,2.590444e-06);
   zqq_stack_3->SetBinContent(5,4.695195);
   zqq_stack_3->SetBinContent(6,39.46658);
   zqq_stack_3->SetBinContent(7,64.38483);
   zqq_stack_3->SetBinContent(8,142.5392);
   zqq_stack_3->SetBinContent(9,105.2722);
   zqq_stack_3->SetBinContent(10,9.265484);
   zqq_stack_3->SetBinContent(11,2.590444e-06);
   zqq_stack_3->SetBinContent(12,2.590444e-06);
   zqq_stack_3->SetBinContent(13,2.590444e-06);
   zqq_stack_3->SetBinContent(14,2.590444e-06);
   zqq_stack_3->SetBinContent(15,2.590444e-06);
   zqq_stack_3->SetBinContent(16,2.590444e-06);
   zqq_stack_3->SetBinContent(17,2.590444e-06);
   zqq_stack_3->SetBinContent(18,2.590444e-06);
   zqq_stack_3->SetBinContent(19,2.590444e-06);
   zqq_stack_3->SetBinContent(20,2.590444e-06);
   zqq_stack_3->SetBinContent(21,2.590444e-06);
   zqq_stack_3->SetBinContent(22,2.590444e-06);
   zqq_stack_3->SetBinContent(23,2.590444e-06);
   zqq_stack_3->SetBinError(1,7.264079e-07);
   zqq_stack_3->SetBinError(2,0.8385948);
   zqq_stack_3->SetBinError(3,2.222772);
   zqq_stack_3->SetBinError(4,1.706675);
   zqq_stack_3->SetBinError(5,9.301684);
   zqq_stack_3->SetBinError(6,12.5679);
   zqq_stack_3->SetBinError(7,24.3633);
   zqq_stack_3->SetBinError(8,49.46681);
   zqq_stack_3->SetBinError(9,35.35839);
   zqq_stack_3->SetBinError(10,25.61699);
   zqq_stack_3->SetBinError(11,7.264079e-07);
   zqq_stack_3->SetBinError(12,7.264079e-07);
   zqq_stack_3->SetBinError(13,7.264079e-07);
   zqq_stack_3->SetBinError(14,0.5058336);
   zqq_stack_3->SetBinError(15,7.264079e-07);
   zqq_stack_3->SetBinError(16,7.264079e-07);
   zqq_stack_3->SetBinError(17,7.264079e-07);
   zqq_stack_3->SetBinError(18,7.264079e-07);
   zqq_stack_3->SetBinError(19,7.264079e-07);
   zqq_stack_3->SetBinError(20,7.264079e-07);
   zqq_stack_3->SetBinError(21,7.264079e-07);
   zqq_stack_3->SetBinError(22,7.264079e-07);
   zqq_stack_3->SetBinError(23,7.264079e-07);
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
   
   TH1F *hsigpass_cat3_2016_prefit_stack_4 = new TH1F("hsigpass_cat3_2016_prefit_stack_4","hqq125 in cat3_2016_pass_cat3",23,40,201);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(1,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(2,0.007289121);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(3,0.02047808);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(4,0.01733828);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(5,0.1899052);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(6,0.2083735);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(7,0.4735312);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(8,0.4657216);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(9,0.7934976);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(10,1.810448);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(11,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(12,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(13,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(14,5.054578);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(15,1.134251);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(16,0.3251308);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(17,0.01373303);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(18,0.02083634);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(19,0.02515118);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(20,0.00573285);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(21,0.01682105);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(22,7.412233e-08);
   hsigpass_cat3_2016_prefit_stack_4->SetBinContent(23,0.006088414);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(1,1.434735e-06);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(2,0.03812851);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(3,0.1071191);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(4,0.06606411);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(5,3.734872);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(6,3.101158);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(7,21.20499);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(8,5.158037);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(9,12.29785);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(10,45.75647);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(11,1.434735e-06);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(12,1.434735e-06);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(13,1.434735e-06);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(14,95.10619);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(15,21.73341);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(16,3.934918);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(17,0.3689802);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(18,0.1599967);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(19,0.1020059);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(20,0.03120234);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(21,0.0882442);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(22,0.001629704);
   hsigpass_cat3_2016_prefit_stack_4->SetBinError(23,0.03184769);
   hsigpass_cat3_2016_prefit_stack_4->SetEntries(115);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_prefit_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   hsigpass_cat3_2016_prefit_stack_4->SetLineColor(ci);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetTitle("x");
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetXaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitle("Events / ( 7 )");
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitleOffset(0);
   hsigpass_cat3_2016_prefit_stack_4->GetYaxis()->SetTitleFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetLabelFont(42);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetLabelSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetTitleSize(0.035);
   hsigpass_cat3_2016_prefit_stack_4->GetZaxis()->SetTitleFont(42);
   hstackMC->Add(hsigpass_cat3_2016_prefit_stack_4,"");
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
   0,
   0,
   0,
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
   1.841055,
   1.841055,
   1.841055,
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
   0,
   0,
   0,
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
   grae->SetTitle("tqq in cat3_2016_pass_cat3");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(8);
   
   TH1F *Graph_data_copy3011 = new TH1F("Graph_data_copy3011","tqq in cat3_2016_pass_cat3",100,28.1,212.9);
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
   entry=leg->AddEntry("htotpass_cat3_2016_prefit","Total background","lf");

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
   entry=leg->AddEntry("hsigpass_cat3_2016_prefit_stack_4","H(b#bar{b})","lf");

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
   
   TH1F *htotpass_cat3_2016_prefit_copy__45 = new TH1F("htotpass_cat3_2016_prefit_copy__45","wqq in cat3_2016_pass_cat3",23,40,201);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(1,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(2,565.8411);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(3,626.6229);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(4,640.9543);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(5,654.0794);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(6,718.8784);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(7,743.0224);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(8,722.3418);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(9,651.7588);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(10,518.6117);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(11,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(12,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(13,4.257061e-06);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(14,378.7074);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(15,342.4628);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(16,297.914);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(17,257.1687);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(18,219.1025);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(19,177.8864);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(20,147.2878);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(21,115.7229);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(22,85.94496);
   htotpass_cat3_2016_prefit_copy__45->SetBinContent(23,64.05327);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(1,8.18384e-07);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(2,15.73857);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(3,11.50133);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(4,11.46443);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(5,16.13125);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(6,25.65358);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(7,37.04717);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(8,52.63825);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(9,38.32809);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(10,28.50945);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(11,8.18384e-07);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(12,8.18384e-07);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(13,8.18384e-07);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(14,10.03161);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(15,8.142961);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(16,6.384616);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(17,6.046736);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(18,5.741524);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(19,4.737292);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(20,4.823828);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(21,4.660884);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(22,4.389116);
   htotpass_cat3_2016_prefit_copy__45->SetBinError(23,4.317834);
   htotpass_cat3_2016_prefit_copy__45->SetMaximum(1114.534);
   htotpass_cat3_2016_prefit_copy__45->SetEntries(92);
   htotpass_cat3_2016_prefit_copy__45->SetDirectory(0);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit_copy__45->SetFillColor(ci);
   htotpass_cat3_2016_prefit_copy__45->SetFillStyle(3001);

   ci = TColor::GetColor("#3366cc");
   htotpass_cat3_2016_prefit_copy__45->SetLineColor(ci);
   htotpass_cat3_2016_prefit_copy__45->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   htotpass_cat3_2016_prefit_copy__45->SetMarkerColor(ci);
   htotpass_cat3_2016_prefit_copy__45->SetMarkerSize(0);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetTitle("m_{SD} (GeV)");
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetRange(2,23);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetLabelOffset(100);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetTitleOffset(100);
   htotpass_cat3_2016_prefit_copy__45->GetXaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit_copy__45->GetYaxis()->SetTitle("Events / 7 GeV");
   htotpass_cat3_2016_prefit_copy__45->GetYaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit_copy__45->GetYaxis()->SetLabelSize(0.05);
   htotpass_cat3_2016_prefit_copy__45->GetYaxis()->SetTitleSize(0.06);
   htotpass_cat3_2016_prefit_copy__45->GetYaxis()->SetTitleOffset(1.25);
   htotpass_cat3_2016_prefit_copy__45->GetYaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit_copy__45->GetZaxis()->SetLabelFont(42);
   htotpass_cat3_2016_prefit_copy__45->GetZaxis()->SetLabelSize(0.035);
   htotpass_cat3_2016_prefit_copy__45->GetZaxis()->SetTitleSize(0.035);
   htotpass_cat3_2016_prefit_copy__45->GetZaxis()->SetTitleFont(42);
   htotpass_cat3_2016_prefit_copy__45->Draw("sameaxis");
   p12pass_cat3_2016_prefit->Modified();
   cpass_cat3_2016_prefit->cd();
  
// ------------>Primitives in pad: p22pass_cat3_2016_prefit
   TPad *p22pass_cat3_2016_prefit = new TPad("p22pass_cat3_2016_prefit", "p22pass_cat3_2016_prefit",0,0,1,0.3);
   p22pass_cat3_2016_prefit->Draw();
   p22pass_cat3_2016_prefit->cd();
   p22pass_cat3_2016_prefit->Range(13.7027,-11.08383,221.8108,9.195599);
   p22pass_cat3_2016_prefit->SetFillColor(0);
   p22pass_cat3_2016_prefit->SetBorderMode(0);
   p22pass_cat3_2016_prefit->SetBorderSize(2);
   p22pass_cat3_2016_prefit->SetTickx(1);
   p22pass_cat3_2016_prefit->SetTicky(1);
   p22pass_cat3_2016_prefit->SetLeftMargin(0.16);
   p22pass_cat3_2016_prefit->SetTopMargin(0.05);
   p22pass_cat3_2016_prefit->SetBottomMargin(0.3);
   p22pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat3_2016_prefit->SetFrameBorderMode(0);
   p22pass_cat3_2016_prefit->SetFrameFillStyle(0);
   p22pass_cat3_2016_prefit->SetFrameBorderMode(0);
   
   TH1F *iOneWithErrorspass_cat3_2016_prefit__46 = new TH1F("iOneWithErrorspass_cat3_2016_prefit__46","",23,40,201);
   iOneWithErrorspass_cat3_2016_prefit__46->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_prefit__46->SetMaximum(8.181627);
   iOneWithErrorspass_cat3_2016_prefit__46->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit__46->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_prefit__46->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit__46->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_prefit__46->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit__46->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_prefit__46->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_prefit__46->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_prefit__46->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit__46->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit__46->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit__46->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit__46->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit__46->Draw("");
   
   hstack = new THStack();
   hstack->SetName("hstack");
   hstack->SetTitle("hstack");
   
   TH1F *hstack_stack_12 = new TH1F("hstack_stack_12","hstack",23,40,201);
   hstack_stack_12->SetMinimum(-94.85946);
   hstack_stack_12->SetMaximum(100.1206);
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
   
   
   TH1F *sigHistResidualwqqpass_cat3_2016_prefit_stack_1 = new TH1F("sigHistResidualwqqpass_cat3_2016_prefit_stack_1","wqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(2,6.533525e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(3,0.1372051);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(4,0.2299184);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(5,0.9859559);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(6,2.745365);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(7,3.473335);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(8,0.8226596);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(9,0.5262961);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(10,0.1196174);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(14,8.135324e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(15,8.610029e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(16,9.069495e-08);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(17,1.03225e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(18,1.129618e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(19,1.206954e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(20,1.226405e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(21,1.644807e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(22,1.703922e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinContent(23,1.695086e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(1,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(2,0.908968);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(3,1.194077);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(4,5.1383);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(5,8.91735);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(6,17.72163);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(7,23.36448);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(8,12.43599);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(9,4.06483);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(10,2.587612);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(11,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(12,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(13,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(14,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(15,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(16,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(17,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(18,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(19,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(20,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(21,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(22,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetBinError(23,3.769402e-07);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetEntries(46);

   ci = TColor::GetColor("#009900");
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetLineColor(ci);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetLineStyle(2);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->SetLineWidth(2);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetTitle("x");
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetXaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitleOffset(0);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetYaxis()->SetTitleFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetLabelFont(42);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualwqqpass_cat3_2016_prefit_stack_1->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualwqqpass_cat3_2016_prefit_stack_1,"");
   
   TH1F *sigHistResidualzqqpass_cat3_2016_prefit_stack_2 = new TH1F("sigHistResidualzqqpass_cat3_2016_prefit_stack_2","zqq in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(2,1.015514e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(3,0.1735265);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(4,1.045681e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(5,0.1833593);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(6,1.49846);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(7,2.370525);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(8,5.455327);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(9,4.353622);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(10,0.4003242);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(14,1.264484e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(15,1.338268e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(16,1.409683e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(17,1.604439e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(18,1.755781e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(19,1.875983e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(20,1.906216e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(21,2.556545e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(22,2.648428e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinContent(23,2.634693e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(1,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(2,0.8385948);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(3,2.222772);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(4,1.706675);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(5,9.301684);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(6,12.5679);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(7,24.3633);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(8,49.46681);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(9,35.35839);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(10,25.61699);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(11,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(12,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(13,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(14,0.5058336);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(15,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(16,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(17,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(18,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(19,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(20,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(21,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(22,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetBinError(23,7.264079e-07);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetEntries(46);

   ci = TColor::GetColor("#cc0000");
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetLineColor(ci);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetLineStyle(3);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->SetLineWidth(2);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetTitle("x");
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetXaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitleOffset(0);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetYaxis()->SetTitleFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetLabelFont(42);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualzqqpass_cat3_2016_prefit_stack_2->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualzqqpass_cat3_2016_prefit_stack_2,"");
   
   TH1F *sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3 = new TH1F("sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3","hqq125 in cat3_2016_pass_cat3",23,40,201);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(2,0.0002857504);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(3,0.0008003321);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(4,0.0006998916);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(5,0.007416284);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(6,0.007911487);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(7,0.0174345);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(8,0.01782432);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(9,0.03281576);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(10,0.07822215);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(14,0.2467311);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(15,0.05859732);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(16,0.01769316);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(17,0.0008505803);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(18,0.001412269);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(19,0.001821433);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(20,0.0004218601);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(21,0.001660092);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(22,7.578145e-09);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinContent(23,0.0006192413);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(1,1.434735e-06);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(2,0.03812851);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(3,0.1071191);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(4,0.06606411);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(5,3.734872);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(6,3.101158);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(7,21.20499);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(8,5.158037);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(9,12.29785);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(10,45.75647);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(11,1.434735e-06);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(12,1.434735e-06);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(13,1.434735e-06);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(14,95.10619);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(15,21.73341);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(16,3.934918);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(17,0.3689802);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(18,0.1599967);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(19,0.1020059);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(20,0.03120234);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(21,0.0882442);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(22,0.001629704);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetBinError(23,0.03184769);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetEntries(138);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff0099");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->SetLineColor(ci);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetTitle("x");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetXaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitle("Events / ( 7 )");
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitleOffset(0);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetYaxis()->SetTitleFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetLabelFont(42);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetLabelSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetTitleSize(0.035);
   sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3->GetZaxis()->SetTitleFont(42);
   hstack->Add(sigHistResidualhsigpass_cat3_2016_prefitpass_cat3_2016_prefit_stack_3,"");
   hstack->Draw("hist sames");
   
   TH1F *iOneWithErrorsLinepass_cat3_2016_prefit__47 = new TH1F("iOneWithErrorsLinepass_cat3_2016_prefit__47","",23,40,201);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetEntries(184);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetFillColor(ci);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetFillStyle(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetLineColor(ci);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetMarkerColor(ci);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->SetMarkerSize(0);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetRange(2,23);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetXaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetNdivisions(6);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetYaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetZaxis()->SetLabelFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->GetZaxis()->SetTitleFont(42);
   iOneWithErrorsLinepass_cat3_2016_prefit__47->Draw("hist sames");
   
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fx3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fy3012[23] = {
   0,
   3.210109,
   1.36537,
   -0.8581403,
   1.196671,
   3.176352,
   5.454418,
   4.593116,
   2.033222,
   1.217481,
   0,
   0,
   0,
   1.919635,
   1.596326,
   2.065933,
   0.2230546,
   -0.07472913,
   0.8833812,
   2.578378,
   -1.255639,
   0.9282514,
   3.027369};
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_felx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fely3012[23] = {
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fehx3012[23] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph_from_iRatiopass_cat3_2016_prefit_fehy3012[23] = {
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
   grae = new TGraphAsymmErrors(23,Graph_from_iRatiopass_cat3_2016_prefit_fx3012,Graph_from_iRatiopass_cat3_2016_prefit_fy3012,Graph_from_iRatiopass_cat3_2016_prefit_felx3012,Graph_from_iRatiopass_cat3_2016_prefit_fehx3012,Graph_from_iRatiopass_cat3_2016_prefit_fely3012,Graph_from_iRatiopass_cat3_2016_prefit_fehy3012);
   grae->SetName("Graph_from_iRatiopass_cat3_2016_prefit");
   grae->SetTitle("AK8 m_{SD} (GeV)");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_iRatiopass_cat3_2016_prefit3012 = new TH1F("Graph_Graph_from_iRatiopass_cat3_2016_prefit3012","AK8 m_{SD} (GeV)",100,28.1,212.9);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->SetMinimum(-3.126645);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->SetMaximum(7.325424);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->SetDirectory(0);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->SetStats(0);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->SetLineStyle(0);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->SetMarkerStyle(20);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_iRatiopass_cat3_2016_prefit3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_iRatiopass_cat3_2016_prefit3012);
   
   grae->Draw("pez");
   
   TH1F *iOneWithErrorspass_cat3_2016_prefit_copy__48 = new TH1F("iOneWithErrorspass_cat3_2016_prefit_copy__48","",23,40,201);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetMinimum(-5);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetMaximum(8.181627);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetEntries(184);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetDirectory(0);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetFillColor(ci);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetFillStyle(3001);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetLineColor(ci);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetLineWidth(2);

   ci = TColor::GetColor("#666666");
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetMarkerColor(ci);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->SetMarkerSize(0);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetTitle(" m_{SD} (GeV)");
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetRange(2,23);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetTitleSize(0.13);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetTitleOffset(0.9);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetXaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetTitle(" #frac{Data #minus (Multijet + t#bar{t})}{#sigma_{Data}}");
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetNdivisions(6);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetLabelSize(0.12);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetTitleSize(0.1);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetTitleOffset(0.7);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetYaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetZaxis()->SetLabelFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetZaxis()->SetLabelSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetZaxis()->SetTitleSize(0.035);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->GetZaxis()->SetTitleFont(42);
   iOneWithErrorspass_cat3_2016_prefit_copy__48->Draw("sameaxis");
   p22pass_cat3_2016_prefit->Modified();
   cpass_cat3_2016_prefit->cd();
   cpass_cat3_2016_prefit->Modified();
   cpass_cat3_2016_prefit->cd();
   cpass_cat3_2016_prefit->SetSelected(cpass_cat3_2016_prefit);
}
