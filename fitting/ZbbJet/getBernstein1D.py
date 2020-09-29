import ROOT as r
import bernstein as br
import matplotlib.pyplot as plt
import numpy as np


def getBernstein1D(pT_bin_center,n_pT=2,n_rho=2):
	boundaries={}
	boundaries['RHO_LO']=-6.
	boundaries['RHO_HI']=-2.1
	boundaries['PT_LO' ]= 450.
	boundaries['PT_HI' ]= 1200.



	bernstein1D = br.genBernsteinTF1D(n_rho,n_pT,pT_bin_center,boundaries,IsMsdPt=True,qcdeff=False,rescale=True) 
	return bernstein1D

def getTFParams(card_path,n_pT=2,n_rho=2):
	lParams = []
	lParams.append("qcdeff_2016")

	print ("Will look for these parameters:")  
	for i_pt in range(0,n_pT+1):
	    for i_rho in range(0,n_rho+1):
	        print ("p%ir%i"%(i_pt,i_rho))  
	        lParams.append("p%ir%i_2016"%(i_pt,i_rho)) 
	pars = br.getParsfromWS(card_path,lParams)
	return(pars['arr'])