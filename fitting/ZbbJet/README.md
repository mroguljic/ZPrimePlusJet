To build cards,workspace from input hists print all commands, e.g. for ddb:
```
python buildcard.py -i dak8/dak8_M2_2016_tightMatch08/ --dryRun
```

then execute:
```
python buildcard.py -i dak8/dak8_M2_2016_tightMatch08/
```

This will execute the following commands:
```
python buildRhalphabetZbb.py (to build RooWorkspace with rhalphabet)
python writeMuonCRDatacard.py (to build muonCR datacard)
python writeMuonCRDatacard.py --addqcdCovMat (with qcd deco)
combineCards.py (to combine card categories)
text2workspace.py (to convert datacard to workspace)
```

for 2 directories:
```
TF22_MC_w2Fitv2 (for qcd MC fit)
TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8 (for real hbb blinded fit)
```

Fit:
```
combine -M FitDiagnostics dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2016_floatZ.root  --setParameterRanges r=0,3 --setParameters r=1 --setRobustFitTolerance  0.001 --setRobustFitStrategy 2 --robustFit 1  --setRobustFitAlgo Minuit2,Migrad --saveShapes --saveWithUncertainties
mv fitDiagnostics.root  dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit_2016.root
```

Plot:
```
mkdir  dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/
mkdir  dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/prefit/
mkdir  dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/fit_s/
mkdir  dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/fit_b/

python validateMLFit.py -i dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/ --suffix 2016 --odir dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/prefit --fit prefit
python validateMLFit.py -i dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/ --suffix 2016 --odir dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/fit_b --fit fit_b
python validateMLFit.py -i dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/ --suffix 2016 --odir dak8/dak8_M2_2016_tightMatch08/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/mlfit/fit_s --fit fit_s
```
