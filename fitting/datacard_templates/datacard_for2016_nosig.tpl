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
bin pass_CATX pass_CATX pass_CATX pass_CATX fail_CATX fail_CATX fail_CATX fail_CATX   
process wqq zqq tqq qcd wqq zqq tqq qcd  
process 1 2 3 4 1 2 3 4
rate -1 -1 -1 1 -1 -1 -1 1
--------------------------------
lumi lnN 1.023 1.023 - - 1.023 1.023 - -
scale shape 0.03 0.03 - - 0.03 0.03 - -
scalept shape 0.03 0.03 - - 0.03 0.03 - -
smear shape 0.25 0.25 - - 0.25 0.25 - -
veff lnN 0.91 0.91 - - 1.006 1.006 - -
wznormEW lnN 1.05 - - - 1.05 - - -
znormEW lnN 1.15 1.15 - - 1.15 1.15 - -
znormQ lnN 1.1 1.1 - - 1.1 1.1	- -
jecs lnN 1.02 1.02 1.02 - 1.02 1.02 1.02 - 
trigger lnN 1.02 1.02 1.02 - 1.02 1.02 1.02 -
muveto lnN 1.005 1.005 1.005 - 1.005 1.005 1.005 - 
eveto lnN 1.005 1.005 1.005 - 1.005 1.005 1.005 -  
ttnormSF lnN - - 1.1 - - - 1.1 -
tteffSF lnN - - 1.1 - - - 0.97 -
-------------------------------
qcdeff  flatParam