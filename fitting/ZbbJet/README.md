To build cards,workspace from input hists print all commands, e.g. for ddb:
```
python buildcard.py -i ddb//ddb_M2_2016/ --dryRun
```

then execute:
```
python buildcard.py -i ddb//ddb_M2_2016/
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

