#! /bin/bash
idir=input_hists/blinded/AK8_2017_v4_Lumi411_blinded_bPA_pT525_1500_wznew_newkFact250_oldqcdkfactsig.root
idirmuon=input_hists/muon/AK8_2017_v4_Lumi411_Muon_bU_pT500
ijet=CA15
inp=2
inr=5
itag=blinded
itest=test
echo "python buildRhalphabet_for2017.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --interpol --smooth > log"
echo "python makeMuonCRCard.py --input ${idirmuon} --jet ${ijet}"
echo "python runFit.py --input ${idir} --jet ${ijet} --np ${inp} --nr ${inr} --mass all -M MaxLikelihoodFit --tag ${itag} --test ${itest} --copy --isMuonCR"
