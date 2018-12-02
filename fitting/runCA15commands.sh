#! /bin/bash
idir=input_hists/fulldataset/CA15_2017_v4_Lumi411_blinded_bPA_pT575_1500_wznew_newkFact250_oldqcdkfactsig.root
idirmuon=input_hists/muon/CA15_2017_v4_Lumi411_Muon_bU.root
ijet=CA15
inp=2
inr=5
itag=blinded
itest=test
echo "python buildRhalphabet_for2017.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --masses 100,115,125,150,175,200,225,250,275,300,350,400,450 --interpol --smooth > log"
echo "python makeMuonCRCard.py --input ${idirmuon} --jet ${ijet}"
echo "python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass all -M MaxLikelihoodFit --tag ${itag} --test ${itest} --copy --isMuonCR"
echo "python plotLims.py --idir ${idir} --box ${ijet} --lumi 4.1 --gq --observed --tag limit${itest}"
