Instructions to run fit once created templates

Summarized in `runAK8Commands.sh` and `runCA15commands.sh`

Place *.root in input_hists/

Make workspaces: `base.root` and `ralphabase_${np}${nr}.root`
```
python buildRhalphabet_for2017.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --interpol --smooth --masses ${masses} > log
```

Make muonCR workspace
```
python makeMuonCRCard.py --input ${idirmuon} --jet ${ijet}
```

Make datacards (step included in runFit): $datacard = card_rhalphabet_${np}${nr}_pt.txt
```
python makeCards.py  --skipcat 1 --input ${idir}  --jet ${ijet} --np ${inp} --nr ${inr} --tag ${tag} --no-mcstat-shape --mcstat --syst --mass ${mass} --isMuonCR
``` 

Run Fit
```
`Limits`: python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass all -M MaxLikelihoodFit --tag ${itag} --test ${itest} --copy --isMuonCR

`Postfit (in ZQQ_${mass}/ dir)`: combine -M MaxLikelihoodFit ${datacard} --minimizerStrategy 0 --rMin -${rMin} --rMax ${rMax} --saveShapes --saveWithUncertainties  --robustFit 1

`Ftest`: See e.g. ftest.sh

`GOF`: python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass ${mass} -M GoodnessOfFit --tag ${itag} --test ${itest} --copy

`Bias`: python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass ${mass} -M Bias --tag ${itag} --test ${itest} --copy

`Impacts`: 

A bit tricky if run in crab. Run initial fits as:

python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass ${mass} -M Impacts --tag ${itag} --test ${itest} --copy --isMuonCR

and allfits as:

python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass ${mass} -M Impacts --tag ${itag} --test ${itest} --copy --isMuonCR --allfits

```

Plot Fit
```
plotFitResults.py --input ${idir}/${jet}/${mlfitfile} --jet ${ijet} --mass ${mass} --cats ${cat} --lumi ${lumi}

python plotLims.py --idir ${idir} --tag lim_${np}${nr}_skip1_${test}limit --lumi ${lumi} --box ${jet} --odir ./ --xsec --xsecMin 10 --xsecMax 10e6    

python plotLims.py --idir ${idir} --tag lim_${np}${nr}_skip1_${test}limit --lumi ${lumi} --box ${jet} --odir ./ --gq

python plotLims.py --idir ${idir} --tag lim_${np}${nr}_skip1_${test}limit --lumi ${lumi} --box ${jet} --odir ./ --mu 

python plotValidation --odir --scale ${scalesigma} --smear ${smearsigma}

python plotNuisances.py --input ${idir}/${jet}/${mlfitfile} -g nuisances.root

```