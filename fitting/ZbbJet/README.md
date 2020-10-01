To install TagAndProbe module in combine:
```
cd fitting/ZbbJet
mv TagAndProbeExtended.py $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/python/
scram b -j 4
```

```
IDIR=dak8/dak8_2016_0.2_0.9/
```
Defines the input directory where the templates are stored in $IDIR/data and $IDIR/muonCR. Input directory should have the tagger in its name (dak8) and the year correcsponding to data. To perform the fit, first we need to do the MC fit and then the data fit.  


MC fit
```
ODIR=TF43_MC_w2Fitv2/
```
We define the output directory, TF43_MC_w2Fitv2 for example. The "TF43" sets the polynomial order for the Rpf function, 4 in rho and 3 in pT. "MC" signals that the fit will be done on MC only.
Before running the MC fit, the makeCardsZbb.py needs to be checked for nRho and npT (https://github.com/mroguljic/ZPrimePlusJet/blob/hbbRun2/fitting/ZbbJet/makeCardsZbb.py#L478-L479). In our case, nRho should be 4 and npT 3. This ensures that the datacard, which is one of the outputs of the MC fit, pulls correct Rpf parameters. In principle, this is not necessary since standard procedure does not use MC datacard, however, one might do diagnostic checks with this datacard. The goal of the MC fit is to extract a sensible, smooth Rpf surface to be used in the data fit.  
Running the MC fit  
```
python buildcard.py -i $IDIR --odirs $ODIR --dryRun
python buildcard.py -i $IDIR --odirs $ODIR >& $IDIR$ODIR/buildcard.out
```
The first command will print out the commands that will be executed and create $ODIR if it's not there. The second command runs the fit. The output is piped into a text file so we can extract the Rpf parameters from the fit. 

To do so, one can have a look at the $IDIR$ODIR/buildcard.out. The first parameter we're interested is the qcdeff_2016. Open the buildcard.out and search for the last instance of it. Below it, are the fitted values for other parameters - pXrY, where X and Y start from 0 and end with n_pT and n_rho (3,4 in our case). The values should be copied into buildRhalphabetZbb.py, in the "qcdTFpars_2016_dak8" dictionary, under "pars" key. qcdeff is the first parameter, followed by p0r0, p0r1,... Other values in the dictionary need to be updated as well: n_rho, n_pT and fitpath.  

Running the data fit
```
ODIR=TF22_blind_qcdTF43uncV6_muonCRv7/
```
We redefine the output directory. TF22 here signifies the polynomial order for the function account for the data/MC differences in Rpf. qcdTF43 tells that the MC fit we're using was made with polynomial order n_rho = 4, n_pT = 3. Before running the fit, we need to check two files.  

In fitting/rhalphabet_builder.py, the line `param_names = ['p%dr%d_%s' % (ipt, irho, year) for ipt in range(3) for irho in range(3)]` needs to be changed depending on what we used in MC fit. In our case, we used n_rho=4 and n_pT = 3 so the line should read: `param_names = ['p%dr%d_%s' % (ipt, irho, year) for ipt in range(4) for irho in range(5)]`. Plus one is added to n_rho and n_pT to account for the offset parameter.  

In makecardsZbb.py we again have to correct nRho and npT as we had to for the MC fit. In this case, they need to be set to 2 and 2. 

In case this is confusing, the pXrY parameters in the data fit datacard are parameters for the function correcting the Rpf due to data/MC differences, while the parameters for the Rpf itself (which we got from the MC fit) at this point are called qcdfit_tf_2016_decoX. They used to be called pXrY in the MC fit which might be a source of confusion.  

Finally, we can run the fit by doing 
```
python buildcard.py -i $IDIR --odirs $ODIR --dryRun
python buildcard.py -i $IDIR --odirs $ODIR >& $IDIR$ODIR/buildcard.out
```
When this is done, the resulting datacard is given to combine to fit the SF:
```
combine -M FitDiagnostics  -m 125 $IDIR/$ODIR/card_rhalphabet_all_2016_floatZ_TNP.root --setRobustFitTolerance  0.001 --setRobustFitStrategy 2 --robustFit 1  --setRobustFitAlgo Minuit2,Migrad --saveShapes --saveWithUncertainties
mv fitDiagnostics.root  $IDIR/$ODIR/mlfit_2016.root
```
To plot the fit results:
```
python validateMLFit.py -i  $IDIR/$ODIR/ --suffix 2016 --odir $IDIR/$ODIR/mlfit/prefit --fit prefit
python validateMLFit.py -i  $IDIR/$ODIR/ --suffix 2016 --odir $IDIR/$ODIR/mlfit/fit_b --fit fit_b
python validateMLFit.py -i  $IDIR/$ODIR/ --suffix 2016 --odir $IDIR/$ODIR/mlfit/fit_s --fit fit_s
```


To build cards,workspace from input hists print all commands, (replace IDIR with the input dir, e.g. ddb/ddb_M2_2016/):
```
python buildcard.py -i $IDIR --odirs $ODIR --dryRun
```
