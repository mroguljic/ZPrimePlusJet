#!/bin/bash
date
MAINDIR=`pwd`
ls
#CMSSW from scratch (only need for root)
export CWD=${PWD}
export PATH=${PATH}:/cvmfs/cms.cern.ch/common
export CMS_PATH=/cvmfs/cms.cern.ch
export SCRAM_ARCH=slc6_amd64_gcc530
tar -xf CMSSW_10_2_13.tgz
cd CMSSW_10_2_13/src
scramv1 b ProjectRename
eval `scramv1 runtime -sh` # cmsenv
git clone -b deco git://github.com/kakwok/ZPrimePlusJet.git
cd ZPrimePlusJet
source setup.sh
echo "Execute with git status/log:"
git status -uno 
git log -n 1 
cd ${CMSSW_BASE}/src/ZPrimePlusJet/fitting/PbbJet/
tar -xf ${CWD}/rhalphalib.tgz
export PYTHONPATH=$PYTHONPATH:${PWD}/rhalphalib/
export PYTHONPATH=$PYTHONPATH:${PWD}/..//
export PYTHONPATH=$PYTHONPATH:${PWD}/../../analysis/
python ${CMSSW_BASE}/src/ZPrimePlusJet/fitting/PbbJet/runFtest.py -o ${MAINDIR}/ --seed $1 --toys $2 --ifile ${MAINDIR}/$3 --ifile-muon ${MAINDIR}/$4 --NP1 2  --NR2 1  --NP2 3  --lumi 35.9  --n 125  --freezeNuisances r_z  --setParameters r_z=1  --suffix 2016 
cd ${CWD}
mv ./ftest*/toy*.root .
mv ./ftest*/base*.root .
echo "Inside $MAINDIR:"
ls
echo "DELETING..."
rm -rf CMSSW_10_2_13
rm -rf *.pdf *.C
ls
date
