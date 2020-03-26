To install TagAndProbe module in combine:
```
cd fitting/ZbbJet
mv TagAndProbeExtended.py $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/python/
scram b -j 4
```

Inputs:
```
$DDB_2016=ddb//ddb_M2_2016/
```

To build cards,workspace from input hists print all commands, (replace IDIR with the input dir, e.g. ddb/ddb_M2_2016/):
```
python buildcard.py -i $IDIR --dryRun
```

then execute:
```
python buildcard.py -i $IDIR
```

This will execute the following commands:
```
python buildRhalphabetZbb.py (to build RooWorkspace with rhalphabet)
python writeMuonCRDatacard.py (to build muonCR datacard)
python writeMuonCRDatacard.py --addqcdCovMat (with qcd deco)
combineCards.py (to combine card categories)
text2workspace.py (to convert datacard to workspace)
```

The IDIRs that we are interested are the following 2 directories:
```
$IDIRMC = TF22_MC_w2Fitv2 (for qcd MC fit)
$IDIRFIT = TF22_blind_qcdTF22uncV6_muonCRv7_SFAug8 (for real hbb blinded fit)
```

The nomenclature means as follows:
```
TFXX: The polynomial degree in this case TF22 means npT =2 and nRho = 2.
MC: If fit is done only to QCD MC ( this is desired to get the shape of the jet mass for QCD and be able to decorrelate)
blind: The fit that we ultimately want but Higgs mass region blinded
+ extra labels such as : qcdTF22uncV6 (latest QCD jet mass decorrelation version), muonCRv7 (latest muonCR), SFAug8 (latest SFs)
```

Fit:
```
combine -M FitDiagnostics $DDB_2016/$IDIRFIT/card_rhalphabet_all_2016_floatZ.root  --setParameterRanges r=0,3 --setParameters r=1 --setRobustFitTolerance  0.001 --setRobustFitStrategy 2 --robustFit 1  --setRobustFitAlgo Minuit2,Migrad --saveShapes --saveWithUncertainties
mv fitDiagnostics.root $DDB_2016/$IDIRFIT/mlfit_2016.root
```

Plot:
```
python validateMLFit.py -i  $DDB_2016/$IDIRFIT/ --suffix 2016 --odir $DDB_2016/$IDIRFIT/mlfit/prefit --fit prefit
python validateMLFit.py -i  $DDB_2016/$IDIRFIT/	--suffix 2016 --odir $DDB_2016/$IDIRFIT/mlfit/fit_b --fit fit_b
python validateMLFit.py -i  $DDB_2016/$IDIRFIT/	--suffix 2016 --odir $DDB_2016/$IDIRFIT/mlfit/fit_s --fit fit_s
```

To get SF:
```
combine -M MultiDimFit -m 125 $DDB_2016/$IDIRFIT/card_rhalphabet_all_2016_floatZ_TNP.root  --algo=singles --robustFit=1 --cminDefaultMinimizerTolerance 5.
combine -M FitDiagnostics  -m 125 $DDB_2016/$IDIRFIT/card_rhalphabet_all_2016_floatZ_TNP.root --setRobustFitTolerance  0.001 --setRobustFitStrategy 2 --robustFit 1  --setRobustFitAlgo Minuit2,Migrad --saveShapes --saveWithUncertainties
mv fitDiagnostics.root  $DDB_2016/$IDIRFIT/mlfit_2016.root
```
