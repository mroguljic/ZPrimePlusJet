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
bin pass_CATX pass_CATX fail_CATX fail_CATX
process tqq qcd tqq qcd  
process 1 2 1 2
rate -1 1 -1 1
--------------------------------
Pu lnN 1 - 1 -
JER lnN 1 - 1 -
JES lnN 1 - 1 -
trigger lnN 1 - 1 -
jecs lnN 1.02 - 1.02 - 
muveto lnN 1.005 - 1.005 - 
eveto lnN 1.005 - 1.005 -  
tqqnormSF lnN 1.03 - 1.1 -
tqqeffSF lnN 1.1 - 1.1 -
tqqpassCATXnorm rateParam pass_CATX tqq (@0*@1) tqqnormSF,tqqeffSF
tqqfailCATXnorm rateParam fail_CATX tqq (@0*(1.0-@1*TQQEFF)/(1.0-TQQEFF)) tqqnormSF,tqqeffSF
tqqnormSF extArg 1.0 [0.0,10.0]
tqqeffSF extArg 1.0 [0.0,10.0]
-------------------------------
qcd2017eff  flatParam