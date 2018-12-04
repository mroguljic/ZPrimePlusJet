imax 2
jmax *
kmax *
---------------
shapes * * base.root w_$CHANNEL:$PROCESS_$CHANNEL w_$CHANNEL:$PROCESS_$CHANNEL_$SYSTEMATIC
shapes qcd * ralphabase.root w_$CHANNEL:$PROCESS_$CHANNEL 
---------------
bin pass_CATX fail_CATX
observation -1 -1
------------------------------
bin pass_CATX pass_CATX pass_CATX pass_CATX pass_CATX fail_CATX fail_CATX fail_CATX fail_CATX fail_CATX   
process SIGNALNAMESIGNALMASS wqq zqq tqq qcd SIGNALNAMESIGNALMASS wqq zqq tqq qcd  
process 0 1 2 3 4 0 1 2 3 4
rate -1 -1 -1 -1 1 -1 -1 -1 -1 1
--------------------------------
lumi lnN 1.023 1.023 1.023 - - 1.023 1.023 1.023 - -
scale shape 0.1 0.1 0.1 - - 0.1 0.1 0.1 - -
scalept shape 0.03 0.03 0.03 - - 0.03 0.03 0.03 - -
smear shape 0.33 0.33 0.33 - - 0.33 0.33 0.33 - -
#smear shape 0.5 0.5 0.5 - - 0.5 0.5 0.5 - -
veff lnN 1.11 1.11 1.11 - - 1.11 1.11 1.11 - -
wznormEW lnN - 1.05 - - - - 1.05 - - -
znormEW lnN - 1.15 1.15 - - - 1.15 1.15 - -
znormQ lnN 1.1 1.1 1.1	- - 1.1	1.1 1.1	- -
zreweight lnN 1.05 - - - - 1.05 - - - -
#Pu lnN 1 1 1 1 - 1 1 1 1 -
#JER lnN 1 1 1 1 - 1 1 1 1 -
#JES lnN 1 1 1 1 - 1 1 1 1 -
trigger lnN 1 1 1 1 - 1 1 1 1 -
jecs lnN 1.02 1.02 1.02 1.02 - 1.02 1.02 1.02 1.02 - 
muveto lnN 1.005 1.005 1.005 1.005 - 1.005 1.005 1.005 1.005 - 
eveto lnN 1.005 1.005 1.005 1.005 - 1.005 1.005 1.005 1.005 -  
#ttnormSF lnN - - - 1.1 - - - - 1.1 -
#tteffSF lnN - - - 1.1 - - - - 0.98 -
tqqpassCATXnorm rateParam pass_CATX tqq (@0*@1) tqqnormSF,tqqeffSF 
tqqfailCATXnorm rateParam fail_CATX tqq (@0*(1.0-@1*TQQEFF)/(1.0-TQQEFF)) tqqnormSF,tqqeffSF
tqqnormSF extArg 1.0 [0.0,10.0]
tqqeffSF extArg 1.0 [0.0,10.0]
-------------------------------
qcd2017eff  flatParam
