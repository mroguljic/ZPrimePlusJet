#! /bin/bash
mass=$1
input=$2
tag=$3
odir=/afs/cern.ch/user/c/cmantill/www/Zqqjet/Dec19/${tag}/CA15/
mkdir -p ${odir}
python plotNuisances.py ${input} -g nuisances.root
mv nuisances.pdf ${odir}/nuisances_${mass}.pdf
for i in {2..5}; do
    #python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --prefit --jet CA15
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --template --jet CA15
    #python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fail --jet CA15
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fitb --jet CA15
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fitb --ratio --jet CA15
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --ratio --jet CA15
    python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats ${i} --fitb --fail --jet CA15
done;
python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats 2,3,4,5 --template --jet CA15
python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats 2,3,4,5 --ratio --jet CA15
python plotFitResults.py --input ${input} --mass ${mass} --odir ${odir} --cats 2,3,4,5 --ratio --fitb --jet CA15
