from bernstein import *
from optparse import OptionParser,OptionGroup
import ROOT as r
import os

def getListOfPams(card):
    lParams = []
    if 'suffix' in card.keys():
        lParams.append("qcdeff_"+card['suffix'])
    else:
        lParams.append("qcdeff")
    pt_max  = 4
    rho_max = 5
    # for r2p1 polynomial
    for i_pt in range(0,pt_max+1):
        for i_rho in range(0,rho_max+1):
            if 'suffix' in card.keys():
                #print ("p%ir%i_%s"%(i_pt,i_rho,card['suffix']))  
                lParams.append("p%ir%i_%s"%(i_pt,i_rho,card['suffix'])) 
            else: 
                #print ("p%ir%i"%(i_pt,i_rho))  
                lParams.append("p%ir%i"%(i_pt,i_rho)) 
    print ("Will look for these parameters:",lParams)  
    return lParams

def get1DTF(qcdTFpars, ipt):
    if qcdTFpars['pars'][0]==-999:
        print "Use default of qcdeff=1"
        qcdTFpars['pars'][0]=1.0
    f2params    = array.array('d', qcdTFpars['pars'])
    npar        = len(f2params)
    boundaries={}
    boundaries['RHO_LO']=-6.
    boundaries['RHO_HI']=-2.1
    boundaries['PT_LO' ]= 450.
    boundaries['PT_HI' ]= 1200.
    if   ipt ==1: pt = 465.0
    elif ipt ==2: pt = 515.0
    elif ipt ==3: pt = 565.0
    elif ipt ==4: pt = 622.5
    elif ipt ==5: pt = 712.5
    elif ipt ==6: pt = 920.0

    f_bernstein = genBernsteinTF1D(qcdTFpars['n_rho'],qcdTFpars['n_pT'],pt,boundaries,IsMsdPt=True,qcdeff=True,rescale=True)
    tf2   = r.TF1("f2", f_bernstein, 47,201,npar)
    tf2.SetParameters(f2params)
    return tf2

def draw1Ds(flist,odir):

    for i,f in enumerate(flist):
        pars = []
        card_path = f['f']
        (nr,npT)  = (f['n_rho'],f['n_pT'])
        lParams = getListOfPams(f)
        pars = getParsfromWS(card_path,lParams)
        f['qcdTFpars']={'n_rho':nr, 'n_pT':npT,'pars':pars['arr']}

    for ipt in range(1,7):
        c1 = r.TCanvas('c1','c1',800,600)
        leg = r.TLegend(0.7,0.7,0.9,0.9)
        tf1s =[]
        for i,f in enumerate(flist):
            qcdTFpars= f['qcdTFpars']
            tf1 = get1DTF(qcdTFpars,ipt)
            leg.AddEntry(tf1 ,f['label']      ,'l')
            tf1.SetName('%i_graph'%i)
            tf1.SetTitle('')
            tf1.SetLineColor(f['color'])
            tf1s.append(tf1)
        for i,tf1 in enumerate(tf1s):
            if i==0:
                tf1.Draw()
            else:
                tf1.Draw('same')
        leg.Draw('same')
        c1.SaveAs(odir+"TF_cat%s.pdf"%(ipt))
        c1.SaveAs(odir+"TF_cat%s.png"%(ipt))
    Merge(odir,'TF_cat*','TF_all')
     
def Merge(idir,sub_plotNames, plotname):
    cmd = ' montage -density 750 -tile 3x0 -geometry 1600x1600 -border 5 '
    plotName = idir+sub_plotNames
    plotpdf  = idir+plotname

    cmd += plotName+".png"
    cmd += ' '
    cmd += plotpdf+".pdf"
    print cmd
    os.system(cmd)
    print 'rm '+plotName+".png"
    os.system('rm '+plotName+'.png')

   
if __name__ == '__main__':

    parser = OptionParser()
    parser.add_option('-o', '--odir', dest='odir', default='./', help='directory to write histograms/job output', metavar='odir')

    (options, args) = parser.parse_args()
    r.gStyle.SetPadTopMargin(0.1)
    r.gStyle.SetPadBottomMargin(0.2)
    r.gStyle.SetPadLeftMargin(0.15)
    r.gStyle.SetPadRightMargin(0.2)
    r.gStyle.SetPalette(1)
    r.gStyle.SetOptFit(0000)
    r.gROOT.SetBatch()

    setTFto1 = False 

    cards =[
        #{'card':'ddb_Apr17/ddb_M2_full/msd47_TF22_muonCR_blind/card_rhalphabet_all_floatZ.root'        ,'n_rho':2,'n_pT':2},  ### AN
        #{'card':'ddb2018_Apr17/ddb_M2_full/msd47_TF22_muonCR_blind/card_rhalphabet_all_floatZ.root'    ,'n_rho':2,'n_pT':2},  ### AN
        #{'card':'ddb2016_May28_v2/ddb_M2_full/TF22_blind_muonCR_SFJun4/card_rhalphabet_all_floatZ.root','n_rho':2,'n_pT':2},  ### AN
         
        #{'card':'ddb_Jun24_v2/ddb_M2_full/TF21_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'        ,'n_rho':2,'n_pT':1,'suffix':'2017'} ,
        #{'card':'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2017'} ,
        #{'card':'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2017'} ,
        #{'card':'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2018'} ,
        #{'card':'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2016'} ,

        ########## Aug13 final cards
        #{'card':'ddb_Jun24_v2/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root'                    ,'n_rho':2,'n_pT':2,'suffix':'2017'} ,
        #{'card':'ddb2018_Jun24_v3/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root'                ,'n_rho':2,'n_pT':2,'suffix':'2018'} ,
        #{'card':'ddb2016_Jun24_v3/ddb_M2_full/TF22_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root'   ,'n_rho':2,'n_pT':2,'suffix':'2016'} ,

        #{'card':'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root'                    ,'n_rho':2,'n_pT':2,'suffix':'2017'} ,
        #{'card':'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root'                ,'n_rho':2,'n_pT':2,'suffix':'2018'} ,
        #{'card':'ddb2016_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV6_muonCRv7_SFAug8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root'   ,'n_rho':2,'n_pT':2,'suffix':'2016'} ,

        ###### f-deco cards
        #{'card':'cards/fdeco/2016/card_rhalphabet_all_2016_floatZ.root'                    ,'n_rho':2,'n_pT':1,'suffix':'2016'} ,
        #{'card':'cards/fdeco/2017/card_rhalphabet_all_2017_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2017'} ,
        {'card':'cards/fdeco/2018/card_rhalphabet_all_2018_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2018'} ,

        #{'card':'cards/fdeco_blind/2016/card_rhalphabet_all_2016_floatZ.root'                    ,'n_rho':2,'n_pT':1,'suffix':'2016'} ,
        #{'card':'cards/fdeco_blind/2017/card_rhalphabet_all_2017_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2017'} ,
        #{'card':'cards/fdeco_blind/2018/card_rhalphabet_all_2018_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2018'} ,

        ###### f-deco minlo cards
        #{'card':'cards/fdeco_minlo/2016/card_rhalphabet_all_2016_floatZ.root'                    ,'n_rho':2,'n_pT':1,'suffix':'2016'} ,
        #{'card':'cards/fdeco_minlo/2017/card_rhalphabet_all_2017_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2017'} ,
        #{'card':'cards/fdeco_minlo/2018/card_rhalphabet_all_2018_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2018'} ,

        #{'card':'cards/fdeco_minlo_blind/2016/card_rhalphabet_all_2016_floatZ.root'                    ,'n_rho':2,'n_pT':1,'suffix':'2016'} ,
        #{'card':'cards/fdeco_minlo_blind/2017/card_rhalphabet_all_2017_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2017'} ,
        #{'card':'cards/fdeco_minlo_blind/2018/card_rhalphabet_all_2018_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2018'} ,

        #{'card':'ddb2016_Jun24_v2/ddb_M2_full/TF22_MC_muonCR_SFJul8/card_rhalphabet_all_2016_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2016'} ,
        #{'card':'ddb_Jun24_v2/ddb_M2_full/TF22_MC_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2017'} ,
        #{'card':'ddb2018_Jun24_v3/ddb_M2_full/TF22_MC_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root'        ,'n_rho':2,'n_pT':2,'suffix':'2018'} ,
        #{'card':'nick/hbb_deco/tf22_blind/card_rhalphabet_all_2016_floatZ.root'         ,'n_rho':2,'n_pT':2,'suffix':'2016'} ,
        #{'card':'nick/hbb_deco/tf22_blind/card_rhalphabet_all_2017_floatZ.root'         ,'n_rho':2,'n_pT':2,'suffix':'2017'} ,
        #{'card':'nick/hbb_deco/tf22_blind/card_rhalphabet_all_2018_floatZ.root'         ,'n_rho':2,'n_pT':2,'suffix':'2018'} ,
        #### special fits
        {'card':'ddb2018_Nov1/ddb_M2_full/TF11_qcdTF22uncV6_muonCRv7_SFJul8/card_rhalphabet_all_2018_floatZ.root'                    ,'n_rho':1,'n_pT':1,'suffix':'2018'} ,
    ]

    flist = [
        #{'f':'ddb2016_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2016',
        # 'label':'old MC unc','color':r.kBlue},
        #{'f':'ddb2016_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV3_muonCRv3_SFJul8_looserWZ_p80/card_rhalphabet_all_2016_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2016',
        #'label':'new MC unc','color':r.kRed},

        #{'f':'ddb2016_Jun24_v2/ddb_M2_full/TF22_MC_w2Fit/card_rhalphabet_all_2016_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2016',
        # 'label':'old MC unc','color':r.kBlue},
        #{'f':'ddb2016_Jun24_v3/ddb_M2_full/TF22_MC_w2Fit/card_rhalphabet_all_2016_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2016',
        #'label':'new MC unc','color':r.kRed},

        {'f':'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8/card_rhalphabet_all_2017_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2017',
         'label':'2017 old Unc.(unweighted) ','color':r.kBlue},
        {'f':'ddb_Jun24_v2/ddb_M2_full/TF22_blind_qcdTF22uncV5_muonCRv7_SFJul8/card_rhalphabet_all_2017_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2017',
        'label':'2017 new Unc.(w/MC weigths)','color':r.kRed},
        #{'f':'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22unc_muonCR_SFJul8/card_rhalphabet_all_2018_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2018',
        # 'label':'2018 old','color':r.kBlue},
        #{'f':'ddb2018_Jun24_v3/ddb_M2_full/TF22_blind_qcdTF22uncV3_muonCRv3_SFJul8/card_rhalphabet_all_2018_floatZ.root','n_rho':2,'n_pT':2,'suffix':'2018',
        #'label':'2018 new','color':r.kRed},

    ]

    #draw1Ds(flist,'ddb_Jun24_v2/ddb_M2_full/compare_')
    #drawBasisMaps(2,2,'bernBasis/')
    for card in cards:
        pars = []
        card_path = card['card']
        (nr,npT)  = (card['n_rho'],card['n_pT'])
        lParams = getListOfPams(card)
        print lParams
        (zmaxMC,zminMC) = (0.02,0.0)
        (zmaxTF,zminTF) = (1.2,0.75)
        pars = getParsfromWS(card_path,lParams)
        if 'exp' in card.keys():    exp=card['exp']
        else:                       exp=False
        if 'MC'  in card_path:      (zmax,zmin) = (zmaxMC,zminMC)
        else:                       (zmax,zmin) = (zmaxTF,zminTF)  
        print  (zmax,zmin) 
        makeTFs(pars,nr,npT,  card_path.replace(card_path.split("/")[-1],""),exp=exp,zmax=zmax,zmin=zmin)

        #mlfit_path = card_path.replace(card_path.split("/")[-1],"")+"mlfit.root"
        mlfit_path = card_path.replace(card_path.split("/")[-1],"")+"mlfit_%s.root"%card['suffix']
        if os.path.exists(mlfit_path):
            pars = getParsfromMLfit(card_path,mlfit_path,lParams)
            makeTFs(pars,nr,npT,  card_path.replace(card_path.split("/")[-1],"mlfit/"),exp=exp,zmax=zmax,zmin=zmin)
            #makeTFs(pars,nr,npT,  card_path.replace(card_path.split("/")[-1],"tf%s/"%card['suffix']),exp=exp,zmax=zmax,zmin=zmin)
 


