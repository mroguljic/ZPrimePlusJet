# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 2 --nr 3 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 3 --nr 3 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 2 --nr 4 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 2 --nr 5 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 3 --nr 4 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 3 --nr 5 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 3 --nr 6 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 4 --nr 4 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 5 --nr 4 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 4 --nr 5 --jet CA15 > log
# python buildRhalphabet_for2017.py --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --np 2 --nr 6 --jet CA15 > log
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 2 --nr 3 --npalt 3 --nralt 3 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 2 --nr 3 --npalt 2 --nralt 4 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 2 --nr 4 --npalt 2 --nralt 5 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 2 --nr 4 --npalt 3 --nralt 4 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 3 --nr 4 --npalt 4 --nralt 4 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 4 --nr 4 --npalt 5 --nralt 4 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 3 --nr 4 --npalt 3 --nralt 5 --copy --skipcat 1,2  --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 3 --nr 5 --npalt 3 --nralt 6 --copy --skipcat 1,2 --n 400 
python runFit.py --tag unblinded_bU_pT500 --jet CA15 --mass 250 -M FTest --sig 0 --input input_hists/fulldataset/CA15_2017_v4_NoB_Lumi362_bU_wznew.root --test bU_nomuonCR_newwz_fix --np 2 --nr 5 --npalt 2 --nralt 6 --copy --skipcat 1,2  --n 400 