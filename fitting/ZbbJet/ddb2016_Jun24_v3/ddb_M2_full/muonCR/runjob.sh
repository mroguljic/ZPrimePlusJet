#!/bin/bash
date
MAINDIR=`pwd`
ls
#CMSSW from scratch (only need for root)
export CWD=${PWD}
export PATH=${PATH}:/cvmfs/cms.cern.ch/common
export CMS_PATH=/cvmfs/cms.cern.ch
export SCRAM_ARCH=slc6_amd64_gcc530
scramv1 project CMSSW CMSSW_8_1_0
cd CMSSW_8_1_0/src
eval `scramv1 runtime -sh` # cmsenv
git clone -b PerBinEff git://github.com/kakwok/ZPrimePlusJet.git
cd ZPrimePlusJet
echo "Execute with git status/log:"
git status -uno 
git log -n 1 
source setup.sh
cd ${CWD}
python ${CMSSW_BASE}/src/ZPrimePlusJet/fitting/PbbJet/Hbb_create.py -o ${MAINDIR}/ --i-split $1 --max-split $2 --muonCR  --dbtagcut 0.89  --lumi 35.9  --year 2016legacy 
echo "Inside $MAINDIR:"
ls
echo "DELETING..."
rm -rf CMSSW_8_1_0
rm -rf *.pdf *.C core*
ls
date
