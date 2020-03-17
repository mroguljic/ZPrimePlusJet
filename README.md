# ZPrimePlusJet
Analysis framework for DAZSLE analyses: Z(bb) + jet fit

Fitting depends on Higgs Combine tool.
Install from: https://cms-analysis.github.io/HiggsAnalysis-CombinedLimit/#setting-up-the-environment-and-installation
in `CMSSW_10_2_X`, e.g. `CMSSW_10_2_13`.

Clone repo:
```
cd CMSSW_10_2_13/src/
git clone https://github.com/mroguljic/ZPrimePlusJet.git
cd ZPrimePlusJet/
git fetch origin 
git checkout hbbRun2
```

To setup, (In bash shell and lpc):
```
source /cvmfs/cms.cern.ch/cmsset_default.sh 
cmsenv
source setup.sh
```

Test that libraries can be imported:
```
cd fitting/ZbbJet/
python -c 'import hist'
```
