#! /bin/bash
mass=$1
input=$2
tag=$3
odir=/afs/cern.ch/user/c/cmantill/www/Zqqjet/Dec21/${tag}/
mkdir -p ${odir}
python plotNuisances.py ${input} -g nuisances.root
mv nuisances.pdf ${odir}/nuisances_${mass}.pdf
for i in {2..6}; do
    #python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --prefit
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --template
    #python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fail
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fitb
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fitb --ratio
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --ratio
    #python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fitb --fail
done;
python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats 2,3,4,5,6 --template
python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats 2,3,4,5,6 --ratio
python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats 2,3,4,5,6 --ratio --fitb
