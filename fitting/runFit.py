#!/usr/bin/env python
import ROOT as r,sys,math,array,os
from optparse import OptionParser
import random

from tools import *

RUN_CONDOR = True
RUN_CRAB = False
cmssw_path = '/afs/cern.ch/user/c/cmantill/work/public/tmp/CMSSW_7_4_7.tgz'
cmssw = 'CMSSW_7_4_7'

NOMINAL_MASSES = ['50','75','100','115','125','150','175','200','225','250','275','300','350','400','450','500']
NOMINAL_MASSES_2016 = ['50','75','100','125','150','200','250','300']

def parser():
    parser = OptionParser()
    parser.add_option('--sig',action='store',type='float',dest='sig',default=0.,help='sig')
    parser.add_option('--toys',action='store',type='float',dest='toys',default=100,help='number of toys')
    parser.add_option('--lumi',action='store',type='float',dest='lumi',default=3.6,help='lumi')
    parser.add_option('--mass',action='store',type='string',dest='mass',default='100',help='mass')
    parser.add_option('--condense',action='store_true',dest='condense',default=False,help='condense')
    parser.add_option('--copy',action='store_true',dest='copy',default=False,help='copy rhalph files')
    parser.add_option('--datacard',action='store',type='string',dest='datacard',default='card_rhalphabet_34_pt.txt',help='datacard name')
    parser.add_option('--datacard-alt',action='store',type='string',dest='datacardAlt',default='card_rhalphabet_34_pt.txt',help='alternative datacard name')
    parser.add_option('--tag',action='store',type='string',dest='tag',default='blinded',help='tag name')
    parser.add_option('--test',action='store',type='string',dest='test',default='',help='test name inside tag')
    parser.add_option('--jet',action='store',type='string',dest='jet',default='AK8',help='jet')
    parser.add_option('--rMin',dest='rMin',default='-20',type='string',help='minimum of r (signal strength) in profile likelihood plot')
    parser.add_option('--rMax',dest='rMax',default='20',type='string',help='maximum of r (signal strength) in profile likelihood plot')
    parser.add_option('-M','--method'   ,dest='method'   ,default='GoodnessOfFit',
                      choices=['GoodnessOfFit','FTest','Asymptotic','Bias','MaxLikelihoodFit','Impacts'],help='combine method to use')
    parser.add_option('-a','--algo'   ,dest='algo'   ,default='saturated',
                      choices=['saturated','KS'],help='GOF algo  to use')
    parser.add_option('--input', dest='input', default = 'input_hists/blinded/AK8_2017_v4_NoB_Lumi362_blinded.root',
                      help='file with histogram inputs', metavar='input')
    parser.add_option('--n'  ,action='store',type='int',dest='n'   ,default=300, help='number of bins (e.g. 5*60)')
    parser.add_option('--np', dest="np", type=int,default=3, help='degree poly pt')
    parser.add_option('--nr', dest="nr", type=int,default=4, help='degree poly rho')
    parser.add_option('--npalt', dest="npalt", type=int,default=3, help='degree poly pt alt')
    parser.add_option('--nralt', dest="nralt", type=int,default=4, help='degree poly rho alt')
    parser.add_option('--freezeNuisances'   ,action='store',type='string',dest='freezeNuisances'   ,default='None', help='freeze nuisances')
    parser.add_option('-r','--r',dest='r', default='0' ,type='string',help='default value of r')
    parser.add_option('--skipcat', action='store', dest='skipcat', default='1', type='string', help='number of cat to skip')
    parser.add_option('--data', action='store_true', dest='isData', default=True, help='is data')
    parser.add_option('--nowz', action='store_true', dest='nowz', default=False, help='no w and z')
    parser.add_option('--forcomb', action='store_true', dest='forcomb',  default=False, help='combine with 2016')
    parser.add_option('--isMuonCR', action='store_true', dest='isMuonCR', default=False, help='muon CR')
    parser.add_option('--is2016', action='store_true', dest='is2016', default=False, help='is 2016 sig')
    parser.add_option('--is2016sig', action='store_true', dest='is2016sig',  default=False, help='is 2016 signal')
    parser.add_option('--nocards', action='store_true', dest='nocards', default=False, help='no make cards again')
    parser.add_option('--dry-run', dest="dryRun",default=False,action='store_true',help="Just print out commands to run")
    parser.add_option('--allfits', action='store_true', dest='allfits', default=False, help='all fits for imapcts')
    parser.add_option('--nosig', dest='nosig', type=int, default=0, help='no signal (if not 0 then inject signal in that cat)')

    (options,args) = parser.parse_args()
    return options

def exec_me(command, dryRun=False):
    print command
    if not dryRun:
        os.system(command)

def write_condor(exe='runjob.sh', arguments = [], files = [],dryRun=True):
    job_name = exe.replace('.sh','.jdl')
    out = 'universe = vanilla\n'
    out += 'Executable = %s\n'%exe
    #out += 'JobFlavour = "longlunch" \n'
    #out += 'RequestCpus = 6 \n'
    #out += 'request_disk = 120MB \n'
    #out += 'request_memory = 2000MB \n'
    out += '+JobFlavour             = "workday"\n'
    out += 'Should_Transfer_Files = YES\n'
    out += 'WhenToTransferOutput = ON_EXIT_OR_EVICT\n'
    out += 'Transfer_Input_Files = %s,%s\n'%(exe,','.join(files))
    out += 'Output = %s.stdout\n'%job_name
    out += 'Error  = %s.stderr\n'%job_name
    out += 'Log    = %s.log\n'   %job_name
    out += 'Arguments = %s\n'%(' '.join(arguments))
    out += 'Queue 1\n'
    with open(job_name, 'w') as f:
        f.write(out)
    if not dryRun:
        os.system("condor_submit %s"%job_name)

def write_bash(temp = 'runjob.sh', command = '', files = []):
    out = '#!/bin/bash\n'
    out += 'date\n'
    out += 'MAINDIR=`pwd`\n'
    out += 'ls\n'
    out += 'tar -xf %s.tgz\n'% (cmssw)
    out += 'rm %s.tgz\n'% (cmssw)
    out += 'export SCRAM_ARCH=slc6_amd64_gcc491 \n'
    out += 'mkdir -p %s/src\n'% (cmssw)
    for f in files:
        out += 'cp -r %s %s/src\n'%(f,cmssw)
    out += 'cd %s/src\n'%cmssw
    out += 'scram b ProjectRename\n'
    out += 'eval `scramv1 runtime -sh` # cmsenv\n'
    out += command + '\n'
    out += 'echo "Inside $MAINDIR:"\n'
    out += 'ls\n'
    out += 'echo "DELETING..."\n'
    out += 'rm -rf %s\n'%cmssw
    out += 'rm -rf *.pdf *.C\n'
    out += 'ls\n'
    out += 'date\n'
    with open(temp, 'w') as f:
        f.write(out)

def cmsenv(iFile):
    iFile.write('#!/bin/bash\n')
    #iFile.write('cd  /afs/cern.ch/user/p/pharris/pharris/public/bacon/prod/tmp/CMSSW_7_4_7/src  \n')
    iFile.write('cd /afs/cern.ch/user/c/cmantill/work/public/Bacon/CMSSW_7_4_7/src/ \n')
    iFile.write('eval `scramv1 runtime -sh`\n')
    iFile.write('cd - \n')

def setup(options,iMass):
    print 'JET',options.jet
    iDir = '%s/results/%s/%s/ZQQ_%s'%(os.getcwd(),options.tag,options.jet,iMass)
    if not options.condense:
        if options.method=='FTest':
            # no muonCR for FTest
            lCommandBase = 'python makeCards.py  --skipcat %s --no-mcstat-shape --mcstat --syst --input %s --tag %s --mass %s --np %s --nr %s --jet %s'%(options.skipcat,options.input,options.tag,iMass,options.np,options.nr,options.jet)
            lCommandAlt = 'python makeCards.py  --skipcat %s --no-mcstat-shape --mcstat --syst --input %s --tag %s --mass %s --np %s --nr %s --jet %s'%(options.skipcat,options.input,options.tag,iMass,options.npalt,options.nralt,options.jet)
            exec_me(lCommandBase)
            exec_me(lCommandAlt)
        else:
            lCommandNoSys = 'python makeCards.py  --skipcat %s --input %s --tag %s --mass %s --np %s --nr %s --jet %s'%(options.skipcat,options.input,options.tag,iMass,options.np,options.nr,options.jet)
            lCommandSys = lCommandNoSys +'  --no-mcstat-shape --mcstat --syst '
            #lCommandSys = lCommandNoSys +'  --no-mcstat-shape --mcstat'
            #lCommandSys = lCommandNoSys +'  --no-mcstat-shape'
            lCommandSysNoWZ = lCommandSys + ' --nowz'
            lCommandNoSysComb = lCommandNoSys + ' --no-mcstat-shape --forcomb'
            lCommandNoSig = lCommandSys + ' --nosig %i'%options.nosig
            lCommandBase = lCommandSys
            if options.forcomb:
                lCommandBase = lCommandNoSysComb
            if options.is2016:
                lCommandBase = lCommandNoSys
            if options.is2016sig:
                lCommandBase += ' --is2016sig '
            if options.nowz:
                lCommandBase = lCommandSysNoWZ
            if options.nosig!=0:
                lCommandBase = lCommandNoSig
            if iMass not in NOMINAL_MASSES and not options.is2016sig:
                lCommandBase = lCommandBase + ' --interpol'
            if iMass not in NOMINAL_MASSES_2016 and options.is2016sig:
                lCommandBase = lCommandBase + ' --interpol'
            if options.method!='GoodnessOfFit' and options.method!='FTest' and options.isMuonCR:
                lCommandBase = lCommandBase + ' --isMuonCR'
            exec_me(lCommandBase)
        if options.copy:
            if options.forcomb:
                exec_me('cp base_2017.root %s ' % (iDir))
                exec_me('cp ralphabase_%s%s_pt_2017.root %s ' % (options.np,options.nr,iDir))
                exec_me('python makeCards.py --input input_hists/fulldataset/AK8_2016_v1_Lumi371.root --tag %s --mass %s --np 3 --nr 4  --is2016 --interpol --jetdir %s'%(options.tag,iMass,options.jet))
                exec_me('cp data/2016/%s/base.root  %s'%(options.jet,iDir))
                exec_me('cp data/2016/%s/ralphabase_34_pt.root  %s'%(options.jet,iDir))
                os.chdir(iDir)
                exec_me('combineCards.py cat1_2016=card_rhalphabet_34_cat1_2016.txt cat2_2016=card_rhalphabet_34_cat2_2016.txt cat3_2016=card_rhalphabet_34_cat3_2016.txt cat4_2016=card_rhalphabet_34_cat4_2016.txt cat5_2016=card_rhalphabet_34_cat5_2016.txt > card_2016.txt')
                if 'CA15' in options.jet:
                    exec_me('combineCards.py cat2_2017=card_rhalphabet_{0}{1}_cat2.txt cat3_2017=card_rhalphabet_{0}{1}_cat3.txt cat4_2017=card_rhalphabet_{0}{1}_cat4.txt cat5_2017=card_rhalphabet_{0}{1}_cat5.txt > card_2017.txt'.format(options.np,options.nr))
                    exec_me('combineCards.py cat1_2016=card_rhalphabet_34_cat1_2016.txt cat2_2016=card_rhalphabet_34_cat2_2016.txt cat3_2016=card_rhalphabet_34_cat3_2016.txt cat4_2016=card_rhalphabet_34_cat4_2016.txt cat5_2016=card_rhalphabet_34_cat5_2016.txt cat2_2017=card_rhalphabet_{0}{1}_cat2.txt cat3_2017=card_rhalphabet_{0}{1}_cat3.txt cat4_2017=card_rhalphabet_{0}{1}_cat4.txt cat5_2017=card_rhalphabet_{0}{1}_cat5.txt > card_2016_2017.txt'.format(options.np,options.nr))
                else:
                    exec_me('combineCards.py cat2_2017=card_rhalphabet_35_cat2.txt cat3_2017=card_rhalphabet_35_cat3.txt cat4_2017=card_rhalphabet_35_cat4.txt cat5_2017=card_rhalphabet_35_cat5.txt cat6_2017=card_rhalphabet_35_cat6.txt > card_2017.txt')
                    exec_me('combineCards.py cat1_2016=card_rhalphabet_34_cat1_2016.txt cat2_2016=card_rhalphabet_34_cat2_2016.txt cat3_2016=card_rhalphabet_34_cat3_2016.txt cat4_2016=card_rhalphabet_34_cat4_2016.txt cat5_2016=card_rhalphabet_34_cat5_2016.txt cat2_2017=card_rhalphabet_35_cat2.txt cat3_2017=card_rhalphabet_35_cat3.txt cat4_2017=card_rhalphabet_35_cat4.txt cat5_2017=card_rhalphabet_35_cat5.txt cat6_2017=card_rhalphabet_35_cat6.txt > card_2016_2017.txt')
            else:
                exec_me('cp base.root %s' % (iDir))    
                exec_me('cp ralphabase_%s%s_pt.root %s' % (options.np,options.nr,iDir)) 
                if options.method=='FTest':
                    exec_me('cp ralphabase_%s%s_pt.root %s' % (options.npalt,options.nralt,iDir))
    os.chdir (iDir)

def impacts(base,iLabel,iMass,iAllfits=False):
    idir=os.getcwd()                                                                                                                                                                
    '''
    fileName='runimpacts_%s.sh' % (iLabel)
    os.system('rm %s'%fileName)
    dirs=os.getcwd().split("/")
    lCommand = 'cd    %s   \n' % dirs[len(dirs)-1]
    lCommand += 'text2workspace.py %s -m %s \n'%(base,iMass)
    lCommand += 'combineTool.py -M Impacts -d %s --doInitialFit --robustFit 1 -m %s \n'%(base.replace('.txt','.root'),iMass)
    lCommand += 'combineTool.py -M Impacts -d %s --doFits --robustFit 1 --parallel 4 -m %s \n'%(base.replace('.txt','.root'),iMass)
    lCommand += 'combineTool.py -M Impacts -d %s -o impacts.json -m %s \n'%(base.replace('.txt','.root'),iMass)
    lCommand += 'plotImpacts.py -i impacts.json -o impacts_%s \n'%iLabel
    if not RUN_CONDOR:
        sub_file  = open(fileName,'a')
        cmsenv(sub_file)
        sub_file.write('cp -r %s . \n' % os.getcwd())
        sub_file.write(lCommand)
        sub_file.close()
        os.system('chmod +x %s' % os.path.abspath(sub_file.name))
        os.system('bsub -q 8nh -R "rusage[tmp=3600:duration=3600:decay=1]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    else:
        lFilesToTransfer = [os.getcwd(),cmssw_path]
        lFiles = [dirs[len(dirs)-1]]
        write_bash(os.path.abspath(fileName),lCommand,lFiles)
        write_condor(os.path.abspath(fileName), [], lFilesToTransfer, options.dryRun)

    fileName='runimpacts_%s_asimov.sh' % (iLabel)
    os.system('rm %s'%fileName)
    dirs=os.getcwd().split("/")
    lCommand = 'cd    %s   \n' % dirs[len(dirs)-1]
    lCommand += 'text2workspace.py %s -m %s \n'%(base,iMass)
    lCommand += "combineTool.py -M Impacts -d %s -t -1 --toysFreq --expectSignal 1 --robustFit 1 --doInitialFit --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s \n"%(base.replace('.txt','.root'),iMass)
    #lCommand += "combineTool.py -M Impacts -d %s -t -1 --toysFreq --expectSignal 1 --robustFit 1 --doFits --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s \n"%(base.replace('.txt','.root'),iMass)
    #lCommand += "combineTool.py -M Impacts -d %s -t -1 --toysFreq --expectSignal 1 -o impacts_asimov.json --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s \n"%(base.replace('.txt','.root'),iMass)
    #lCommand +='combineTool.py -M Impacts -d %s -o impacts_asimov.json -m %s \n'%(base.replace('.txt','.root'),iMass)
    #lCommand += 'plotImpacts.py -i impacts_asimov.json -o impacts_asimov_%s \n'%iLabel
    lCommand += 'mv higgsCombine_initialFit_Test.MultiDimFit.mH%s.root %s/impacts_asimov_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root \n' % (iMass,os.getcwd(),iLabel,iMass)
    idir=os.getcwd()

    if iAllfits:
        print 'impacts_asimov_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass)
        print os.path.isfile('impacts_asimov_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass))
        if os.path.isfile('impacts_asimov_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass)):
            lDir = '/afs/cern.ch/user/c/cmantill/work/public/tmp/CMSSW_7_4_7/src/%s/%s/'%(options.jet,dirs[len(dirs)-1])
            os.system('mkdir -p %s'%lDir)
            os.system('cp %s %s'%(base,lDir))
            os.system('cp base* %s'%lDir)
            os.system('cp ralphabase* %s'%lDir)
            os.system('cp datacard_muonCR_%s.txt %s'%(options.jet,lDir))
            os.system('cp datacard_muonCR_%s.root %s'%(options.jet,lDir))
            os.system('cp /afs/cern.ch/user/c/cmantill/work/public/Bacon/CMSSW_7_4_7/src/reload/ZPrimePlusJet/fitting/custom_crab.py %s'%lDir)
            os.system('ls %s'%lDir)
            os.system('cp impacts_asimov_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root %s/higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass,lDir,iMass))
            os.chdir(lDir)
            os.system('echo $CMSSW_BASE')
            os.system("eval `scramv1 runtime -sh`")
            os.system("cmsenv")
            os.system('pwd')
            os.system('echo $CMSSW_BASE')
            os.system('cp /afs/cern.ch/user/c/cmantill/work/public/Bacon/CMSSW_7_4_7/src/reload/ZPrimePlusJet/fitting/custom_crab.py %s'%lDir)
            os.system('text2workspace.py %s -m %s'% (base,iMass))
            os.system("source /cvmfs/cms.cern.ch/crab3/crab.sh; eval `scramv1 runtime -sh`")
            os.system("combineTool.py -M Impacts -d %s --robustFit 1 --doFits --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s --custom-crab custom_crab.py --job-mode crab3 --crab-area %s_%s --task-name impacts_asimov_%s_%s \n"%(base.replace('.txt','.root'),iMass,iLabel,iMass,iLabel,iMass))
            os.chdir(idir)
    else:
        if RUN_CONDOR:
            lFilesToTransfer = [os.getcwd(),cmssw_path]
            lFiles = [dirs[len(dirs)-1]]
            write_bash(os.path.abspath(fileName),lCommand,lFiles)
            write_condor(os.path.abspath(fileName), [], lFilesToTransfer, options.dryRun)
        else:
            sub_file  = open(fileName,'a')
            cmsenv(sub_file)
            sub_file.write('cp -r %s . \n' % os.getcwd())
            sub_file.write(lCommand)
            sub_file.close()
            os.system('chmod +x %s' % os.path.abspath(sub_file.name))
            os.system('bsub -q 8nh -R "rusage[tmp=3600:duration=3600:decay=1]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))
            '''
    fileName='runimpacts_%s_data.sh' % (iLabel)
    os.system('rm %s'%fileName)
    dirs=os.getcwd().split("/")
    lCommand = 'cd    %s   \n' % dirs[len(dirs)-1]
    lCommand += 'text2workspace.py %s -m %s \n'%(base,iMass)
    lCommand += "combineTool.py -M Impacts -d %s --robustFit 1 --doInitialFit --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s \n"%(base.replace('.txt','.root'),iMass)
    #lCommand += "combineTool.py -M Impacts -d %s --robustFit 1 --doFits --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s \n"%(base.replace('.txt','.root'),iMass)
    #lCommand += "combineTool.py -M Impacts -d %s -o impacts_data.json --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s \n"%(base.replace('.txt','.root'),iMass)
    #lCommand += 'plotImpacts.py -i impacts_data.json -o impacts_data_%s \n'%iLabel
    lCommand += 'mv higgsCombine_initialFit_Test.MultiDimFit.mH%s.root %s/impacts_data_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root \n' % (iMass,os.getcwd(),iLabel,iMass)
    if iAllfits:
        print 'impacts_data_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass)
        print os.path.isfile('impacts_data_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass))
        if os.path.isfile('impacts_data_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass)):
            lDir = '/afs/cern.ch/user/c/cmantill/work/public/tmp/CMSSW_7_4_7/src/%s/%s/'%(options.jet,dirs[len(dirs)-1])
            os.system('mkdir -p %s'%lDir)
            os.system('cp %s %s'%(base,lDir))
            os.system('cp base* %s'%lDir)
            os.system('cp ralphabase* %s'%lDir)
            os.system('cp datacard_muonCR_%s.txt %s'%(options.jet,lDir))
            os.system('cp datacard_muonCR_%s.root %s'%(options.jet,lDir))
            os.system('cp impacts_data_%s_higgsCombine_initialFit_Test.MultiDimFit.mH%s.root %s/higgsCombine_initialFit_Test.MultiDimFit.mH%s.root'%(iLabel,iMass,lDir,iMass))
            os.system('cp /afs/cern.ch/user/c/cmantill/work/public/Bacon/CMSSW_7_4_7/src/reload/ZPrimePlusJet/fitting/custom_crab.py %s'%lDir)
            os.system('ls %s'%lDir)
            os.chdir(lDir)
            os.system('echo $CMSSW_BASE')
            os.system("eval `scramv1 runtime -sh`")
            os.system("cmsenv")
            os.system('pwd')
            os.system('echo $CMSSW_BASE')
            os.system('cp /afs/cern.ch/user/c/cmantill/work/public/Bacon/CMSSW_7_4_7/src/reload/ZPrimePlusJet/fitting/custom_crab.py %s'%lDir)
            os.system('text2workspace.py %s -m %s'% (base,iMass))
            os.system("source /cvmfs/cms.cern.ch/crab3/crab.sh; eval `scramv1 runtime -sh`")
            os.system("combineTool.py -M Impacts -d %s --robustFit 1 --doFits --rMin -5 --rMax 5 --exclude 'rgx{mcstat}' -m %s --custom-crab custom_crab.py --job-mode crab3 --crab-area  %s_%s --task-name impacts_data_%s_%s \n"%(base.replace('.txt','.root'),iMass,iLabel,iMass,iLabel,iMass))
            os.chdir(idir)
    else:
        if RUN_CONDOR:
            lFilesToTransfer = [os.getcwd(),cmssw_path]
            lFiles = [dirs[len(dirs)-1]]
            write_bash(os.path.abspath(fileName),lCommand,lFiles)
            write_condor(os.path.abspath(fileName), [], lFilesToTransfer, options.dryRun)
        else:
            sub_file  = open(fileName,'a')
            cmsenv(sub_file)
            sub_file.write('cp -r %s . \n' % os.getcwd())
            sub_file.write(lCommand)
            sub_file.close()
            os.system('chmod +x %s' % os.path.abspath(sub_file.name))
            os.system('bsub -q 8nh -R "rusage[tmp=3600:duration=3600:decay=1]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))

def limit(base,iLabel,iMass,options):
    fileName='runlimit_%s.sh' % (iLabel)
    os.system('rm %s'%fileName)
    dirs=os.getcwd().split("/")
    lCommand = ''
    lCommand += 'cd    %s   \n' % dirs[len(dirs)-1]
    lCommand += 'combine -M Asymptotic %s --rMin -2 --rMax 2 --minimizerStrategy 0 \n' % base
    lCommand += 'mv higgsCombineTest.Asymptotic.mH120.root %s/%slimit.root \n' % (os.getcwd(),iLabel)
    #lCommand += 'combine -M Asymptotic %s --rMin -2 --rMax 2 --minimizerStrategy 0 -t -1 --run expected \n' % base
    #lCommand += 'mv higgsCombineTest.Asymptotic.mH120.root %s/%slimitexpectedt1.root \n' % (os.getcwd(),iLabel)
    #lCommand += 'combine -M MaxLikelihoodFit %s --rMin -2 --rMax 2 --saveShapes --saveWithUncertainties'% base
    #lCommand += 'mv mlfit.root %s/%smlfit.root \n' % (os.getcwd(),iLabel)
    # if int(iMass) < 150:
    #     sub_file.write('combine -M MaxLikelihoodFit %s --minimizerStrategy 0 --rMin -2 --rMax 2 --saveShapes --saveWithUncertainties  --robustFit 1 > /dev/null \n' % base)
    # else:
    #     sub_file.write('combine -M MaxLikelihoodFit %s  --rMin -20 --rMax 20 --saveShapes --saveWithUncertainties --minimizerStrategy 0 --robustFit 1  > /dev/null \n' % base)
    #sub_file.write('mv mlfit.root %s/%smlfit.root \n' % (os.getcwd(),iLabel)) 
    if RUN_CRAB:
        lDir = '/afs/cern.ch/user/c/cmantill/work/public/tmp/CMSSW_7_4_7/src/%s/%s/'%(options.jet,dirs[len(dirs)-1])
        os.system('mkdir -p %s'%lDir)
        os.system('cp %s %s'%(base,lDir))
        os.system('cp base* %s'%lDir)
        os.system('cp ralphabase* %s'%lDir)
        os.system('cp /afs/cern.ch/user/c/cmantill/work/public/Bacon/CMSSW_7_4_7/src/reload/ZPrimePlusJet/fitting/custom_crab.py %s'%lDir)
        os.system('ls %s'%lDir)
        os.chdir(lDir)
        os.system('echo $CMSSW_BASE')
        os.system("eval `scramv1 runtime -sh`")
        os.system("cmsenv")
        os.system('pwd')
        os.system('echo $CMSSW_BASE')
        os.system('text2workspace.py %s -m %s'% (base,iMass))
        os.system("source /cvmfs/cms.cern.ch/crab3/crab.sh; eval `scramv1 runtime -sh`")
        os.system('combineTool.py -M Asymptotic -d %s -m %s --rMin -5 --rMax 5 --minimizerStrategy 0 --custom-crab custom_crab.py --job-mode crab3 --crab-area %s_%s --task-name %s_%s '%(base.replace('.txt','.root'),iMass,iLabel,iMass,iLabel,iMass))
    elif RUN_CONDOR:
        lFilesToTransfer = [os.getcwd(),cmssw_path]
        lFiles = [dirs[len(dirs)-1]]
        write_bash(os.path.abspath(fileName),lCommand,lFiles)
        write_condor(os.path.abspath(fileName), [], lFilesToTransfer, options.dryRun)
    else:
        sub_file  = open(fileName,'a')
        cmsenv(sub_file)
        sub_file.write('cp -r %s . \n' % os.getcwd())
        sub_file.write(lCommand)
        sub_file.close()
        os.system('chmod +x %s' % os.path.abspath(sub_file.name))
        os.system('bsub -q 8nh -R "rusage[tmp=6000:duration=6000:decay=2]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))

def ftest(base,alt,ntoys,sig,iLabel,iMass):
    freeze="--freezeNuisances ttnormSF,tteffSF,eveto,muveto,trigger,jecs,znormE2,znormE3,znormE4,znormE5,znormE6,znormQ,wznorm2,wznorm3,wznorm4,wznorm5,wznor6,veff,smear,scale,lumi"
    fileNameAlt='runftest_%s_alt.sh' % (iLabel)
    dirs=os.getcwd().split("/")
    os.system('rm %s'%fileNameAlt)
    sub_file  = open(fileNameAlt,'a')
    cmsenv(sub_file)
    sub_file.write('cp -r %s . \n' % os.getcwd())
    sub_file.write('cd    %s   \n' % dirs[len(dirs)-1])
    sub_file.write('combine  -M GoodnessOfFit --algo saturated  --fixedSignalStrength 0 --rMax 20.0 --rMin -20.0 %s %s \n' % (freeze,alt))
    sub_file.write('mv higgsCombineTest.GoodnessOfFit.mH120.root %s/%sbase1.root \n' % (os.getcwd(),iLabel))
    sub_file.close()
    os.system('chmod +x %s' % os.path.abspath(sub_file.name))
    os.system('bsub -q 8nh -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    fileNameBase='runftest_%s_base.sh' % (iLabel)
    os.system('rm %s'%fileNameBase)
    sub_file  = open(fileNameBase,'a')
    cmsenv(sub_file)
    sub_file.write('cp -r %s . \n' % os.getcwd())
    sub_file.write('cd    %s   \n' % dirs[len(dirs)-1])
    sub_file.write('combine  -M GoodnessOfFit --algo saturated --fixedSignalStrength 0 --rMax 20.0 --rMin -20.0 %s %s \n'% (freeze,base))
    sub_file.write('mv higgsCombineTest.GoodnessOfFit.mH120.root %s/%sbase2.root \n' % (os.getcwd(),iLabel))
    sub_file.close()
    os.system('chmod +x %s' % os.path.abspath(sub_file.name))
    os.system('bsub -q 8nh -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    rand=int(random.random()*10000)
    os.system('combine -M GenerateOnly  %s --rMax 20.0 --rMin -20.0 --toysFrequentist -t %i --expectSignal 0 --saveToys  --seed %s \n' % (base,ntoys,rand))
    os.system('mv higgsCombineTest.GenerateOnly.mH120.%s.root %s/%s_%s_gen.root'%(rand,os.getcwd(),iLabel,rand))
    fileNameAltGen='runftest_%s_altgen.sh' % (iLabel)
    os.system('rm %s'%fileNameAltGen)
    sub_file  = open(fileNameAltGen,'a')
    cmsenv(sub_file)
    sub_file.write('cp -r %s . \n' % os.getcwd())
    sub_file.write('cd    %s   \n' % dirs[len(dirs)-1])
    sub_file.write('combine -M GoodnessOfFit %s --rMax 20.0 --rMin -20.0 --algo saturated -t %i --toysFile %s/%s_%s_gen.root  %s \n' % (alt,ntoys,os.getcwd(),iLabel,rand,freeze))
    sub_file.write('mv higgsCombineTest.GoodnessOfFit.mH120.123456.root %s/%s%stoys1.root \n' % (os.getcwd(),iMass,iLabel))
    sub_file.close()
    os.system('chmod +x %s' % os.path.abspath(sub_file.name))
    #os.system('bsub -q 8nh -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    os.system('bsub -q 8nh -R "rusage[tmp=600:duration=600:decay=1]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    fileNameBaseGen='runftest_%s_basegen.sh' % (iLabel)
    os.system('rm %s'%fileNameBaseGen)
    sub_file  = open(fileNameBaseGen,'a')
    cmsenv(sub_file)
    sub_file.write('cp -r %s . \n' % os.getcwd())
    sub_file.write('cd    %s   \n' % dirs[len(dirs)-1])
    sub_file.write('combine -M GoodnessOfFit  %s --rMax 20.0 --rMin -20.0 --algo saturated -t %i --toysFile %s/%s_%s_gen.root %s \n' % (base,ntoys,os.getcwd(),iLabel,rand,freeze))
    sub_file.write('mv higgsCombineTest.GoodnessOfFit.mH120.123456.root %s/%s%stoys2.root \n' % (os.getcwd(),iMass,iLabel))
    sub_file.close()
    os.system('chmod +x %s' % os.path.abspath(sub_file.name))
    os.system('bsub -q 8nh -R "rusage[tmp=1000:duration=1000:decay=1]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    #os.system('bsub -q 8nh -o out.%%J %s' % (os.path.abspath(sub_file.name)))

def ftestcondense(iLabel,options,iMass):
    print '--- condensing ftest %s'%iLabel
    p1 = (options.np+1)*(options.nr+1)-1
    p2 = (options.npalt+1)*(options.nralt+1)-1
    nllBase=fStat(iLabel+"base2.root",iLabel+"base1.root",p1,p2,options.n)
    #nllBase=nllDiffFstat(iLabel+"base1.root",iLabel+"base2.root") 
    if len(nllBase)==0: nllBase = [0.0]
    print "nllBase: ",nllBase
    nllToys=fStat(iMass+iLabel+"toys2.root",iMass+iLabel+"toys1.root",p1,p2,options.n)
    #nllToys=nllDiffFstat(iMass+iLabel+"toys1.root",iMass+iLabel+"toys2.root")
    lPass=0
    for val in nllToys:
        print 'nllToys vs Base:',val,nllBase[0]
        if nllBase[0] > val:
            lPass+=1
    pval = 1
    if len(nllToys)>0:
        pval = float(lPass)/float(len(nllToys))
        print "FTest p-value",pval
    plotftest(nllToys,nllBase[0],pval,iLabel,options)
    return float(lPass)/float(len(nllToys))

def fStat(iFName1,iFName2,p1,p2,n):
    print '--- calculating fstat'
    print '--- params: p1 %f, p2 %f, n %f'%(p1,p2,n)
    print 'files ',iFName1,iFName2
    lFile1 = r.TFile.Open(iFName1)
    lTree1 = lFile1.Get("limit")
    lFile2 = r.TFile.Open(iFName2)
    lTree2 = lFile2.Get("limit")
    lDiffs=[]
    print 'entries ',lTree1.GetEntries(),lTree2.GetEntries()
    for i0 in range(0,lTree1.GetEntries()):
        lTree1.GetEntry(i0)
        lTree2.GetEntry(i0)
        print 'limit ',lTree1.limit,lTree2.limit
        if lTree1.limit-lTree2.limit>0:
            F = (lTree1.limit-lTree2.limit)/(p2-p1)/(lTree2.limit/(n-p2))
            print 'entry ',i0, ":", lTree2.limit, "-", lTree1.limit, "=", lTree2.limit-lTree1.limit, "F =", F
            lDiffs.append(F)
    print 'diffs fstat: ',lDiffs
    return lDiffs

def nllDiff(iFName1,iFName2):
    print '--- calculating nllDiff'
    lFile1 = r.TFile.Open(iFName1)
    lTree1 = lFile1.Get("limit")
    lFile2 = r.TFile.Open(iFName2)
    lTree2 = lFile2.Get("limit")
    lDiffs=[]
    for i0 in range(0,lTree1.GetEntries()):
        lTree1.GetEntry(i0)
        lTree2.GetEntry(i0)
        diff = 2*(lTree1.nll-lTree1.nll0)-2*(lTree2.nll-lTree2.nll0)
        lDiffs.append(diff)
    print 'diffs: ',lDiffs
    return lDiffs

def plotftest(iToys,iCentral,prob,iLabel,options):
    print '--plotting'
    lCan   = r.TCanvas(str(iLabel),str(iLabel),800,600)    
    lCan.SetLeftMargin(0.12) 
    lCan.SetBottomMargin(0.12)
    lCan.SetRightMargin(0.1)
    lCan.SetTopMargin(0.1)
    if options.method=='FTest':
        lH = r.TH1F(iLabel+"hist",iLabel+"hist",70,0,max(max(iToys),iCentral)+1)
        lH_cut = r.TH1F(iLabel+"hist",iLabel+"hist",70,0,max(max(iToys),iCentral)+1)
    elif options.method=='GoodnessOfFit' and options.algo=='saturated':
        lH = r.TH1F(iLabel+"hist",iLabel+"hist",70,0,max(max(iToys),iCentral)+100)
        lH_cut = r.TH1F(iLabel+"hist",iLabel+"hist",70,0,max(max(iToys),iCentral)+100)
    elif options.method=='GoodnessOfFit' and options.algo=='KS':
        lH = r.TH1F(iLabel+"hist",iLabel+"hist",70,0,max(max(iToys),iCentral)+0.05)
        lH_cut = r.TH1F(iLabel+"hist",iLabel+"hist",70,0,max(max(iToys),iCentral)+0.05)
    if options.method=='FTest':
        lH.GetXaxis().SetTitle("F = #frac{-2log(#lambda_{1}/#lambda_{2})/(p_{2}-p_{1})}{-2log#lambda_{2}/(n-p_{2})}")
        lH.GetXaxis().SetTitleSize(0.025)
        lH.GetXaxis().SetTitleOffset(2)
        lH.GetYaxis().SetTitle("Pseudodatasets")
        lH.GetYaxis().SetTitleOffset(0.85)
    elif options.method=='GoodnessOfFit' and options.algo=='saturated':
        lH.GetXaxis().SetTitle("-2log#lambda")  
        lH.GetYaxis().SetTitle("Pseudodatasets")
        lH.GetYaxis().SetTitleOffset(0.85)
    elif options.method=='GoodnessOfFit' and options.algo=='KS':
        lH.GetXaxis().SetTitle("KS")  
        lH.GetYaxis().SetTitle("Pseudodatasets")
        lH.GetYaxis().SetTitleOffset(0.85)
    for val in iToys:
        lH.Fill(val)
        if val > iCentral:
            lH_cut.Fill(val)
    lH.SetMarkerStyle(20)
    lH.Draw("pez")
    lLine  = r.TArrow(iCentral,0.25*lH.GetMaximum(),iCentral,0)
    lLine.SetLineColor(r.kBlue+1)
    lLine.SetLineWidth(2)
    lH_cut.SetLineColor(r.kViolet-10)
    lH_cut.SetFillColor(r.kViolet-10)
    lH_cut.Draw("histsame")
    if options.method=='FTest':
        p1 = (options.np+1)*(options.nr+1)-1
        p2 = (options.npalt+1)*(options.nralt+1)-1
        print '--- params fDist: p1 %f, p2 %f, n %f'%(p1,p2,options.n)
        fdist = r.TF1("fDist", "[0]*TMath::FDist(x, [1], [2])", 0,max(max(iToys),iCentral)+1)
        fdist.SetParameter(0,lH.Integral()*((max(max(iToys),iCentral)+1)/70.))
        fdist.SetParameter(1,p2-p1)
        fdist.SetParameter(2,options.n-p2)
        fdist.Draw('same')
        #lH.Fit(fdist,'mle')
    elif options.method=='GoodnessOfFit' and options.algo=='saturated':
        chi2_func = r.TF1('chisqpdf','[0]*ROOT::Math::chisquared_pdf(x,[1])',0,max(max(iToys),iCentral)+100)
        chi2_func.SetParameter(0,lH.Integral())
        chi2_func.SetParameter(1,50)
        chi2_func.Draw('same')
        lH.Fit(chi2_func,"mle")        
    lH.Draw("pezsame")
    lLine.Draw()
    tLeg = r.TLegend(0.6,0.6,0.89,0.89)
    tLeg.SetLineColor(r.kWhite)
    tLeg.SetLineWidth(0)
    tLeg.SetFillStyle(0)
    tLeg.SetTextFont(42)
    tLeg.AddEntry(lH,"toy data","lep")
    tLeg.AddEntry(lLine,"observed = %.1f"%iCentral,"l")
    tLeg.AddEntry(lH_cut,"p-value = %.2f"%(1-prob),"f")
    if options.method=='FTest':
        #tLeg.AddEntry(fdist,"f-dist fit, ndf = (%.1f #pm %.1f, %.1f #pm %.1f) "%(fdist.GetParameter(1),fdist.GetParError(1),fdist.GetParameter(2),fdist.GetParError(2)),"l")
        tLeg.AddEntry(fdist,"F-dist, ndf = (%.0f, %.0f) "%(fdist.GetParameter(1),fdist.GetParameter(2)),"l")        
    elif options.method=='GoodnessOfFit' and options.algo=='saturated':
        tLeg.AddEntry(chi2_func,"#chi^{2} fit, ndf = %.1f #pm %.1f"%(chi2_func.GetParameter(1),chi2_func.GetParError(1)),"l")
    tLeg.Draw("same")
    l = r.TLatex()
    l.SetTextAlign(11)
    l.SetTextSize(0.06)
    l.SetTextFont(62)
    l.SetNDC()
    l.DrawLatex(0.12,0.91,"CMS")
    l.SetTextSize(0.05)
    l.SetTextFont(52)
    if options.isData:
        l.DrawLatex(0.23,0.91,"Preliminary")
    else:
        l.DrawLatex(0.23,0.91,"Simulation")
    l.SetTextFont(42)
    l.DrawLatex(0.76,0.91,"%.1f fb^{-1}"%options.lumi)
    l.SetTextFont(52)
    l.SetTextSize(0.045)
    lCan.SaveAs(iLabel+".pdf")
    lCan.SaveAs(iLabel+".png")
    lCan.SaveAs(iLabel+".C")

def goodness(base,ntoys,sig,iLabel,iMass,algo,freezeNuisances):
    fileName='rungood_%s_%s.sh' % (algo,iLabel)
    dirs=os.getcwd().split("/")
    os.system('rm %s'%fileName)
    sub_file  = open(fileName,'a')
    cmsenv(sub_file)
    sub_file.write('cp -r %s . \n' % os.getcwd())
    sub_file.write('cd    %s   \n' % dirs[len(dirs)-1])
    sub_file.write('combine  -M GoodnessOfFit --algo %s  %s --rMax 20 --rMin -20 --fixedSignalStrength %s --freezeNuisances %s \n' % (algo,base,sig,freezeNuisances))
    sub_file.write('mv higgsCombineTest.GoodnessOfFit.mH120.root %s/%sbase1.root \n' % (os.getcwd(),iLabel))
    sub_file.close()
    os.system('chmod +x %s' % os.path.abspath(sub_file.name))
    os.system('bsub -q 8nh -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    fileNameGen='rungood_%s_%s_gen.sh' % (algo,iLabel)
    os.system('rm %s'%fileNameGen)
    rand=int(random.random()*10000)
    sub_file  = open(fileNameGen,'a')
    cmsenv(sub_file)
    sub_file.write('cp -r %s . \n' % os.getcwd())
    sub_file.write('cd    %s   \n' % dirs[len(dirs)-1])
    sub_file.write('combine -M GenerateOnly   %s --rMax 20 --rMin -20 --toysFrequentist -t %i --expectSignal 0  --saveToys --freezeNuisances %s --seed %s \n' % (base,ntoys,freezeNuisances,rand))
    sub_file.write('combine -M GoodnessOfFit  %s --rMax 20 --rMin -20 --algo %s -t %i   --toysFile higgsCombineTest.GenerateOnly.mH120.%s.root --freezeNuisances %s \n' % (base,algo,ntoys,rand,freezeNuisances))
    sub_file.write('mv higgsCombineTest.GoodnessOfFit.mH120.123456.root %s/%s%sgoodness.root \n' % (os.getcwd(),iMass,iLabel))
    sub_file.close()
    os.system('chmod +x %s' % os.path.abspath(sub_file.name))
    os.system('bsub -q 8nh -R "rusage[tmp=1000:duration=1000:decay=1]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))

def goodnesscondense(iLabel,iMass,options):
    print '--- goodness in data %s'%(iLabel.replace(iMass,'')+"base1.root")
    nllBase=goodnessVals(iLabel.replace(iMass,'')+"base1.root")
    print nllBase[0]
    nllToys=[]
    pLabel = ("%sgoodness.root"%iLabel)
    print pLabel
    nllToys.extend(goodnessVals(pLabel))
    print nllToys
    lPass=0
    for val in nllToys:
        if val > nllBase[0]:
            lPass+=1
    print "GoodnessOfFit p-value",float(lPass)/float(len(nllToys))
    plotftest(nllToys,nllBase[0],float(lPass)/float(len(nllToys)),iLabel,options)
    return float(lPass)/float(len(nllToys))

def goodnessVals(iFName1):
    lFile1 = r.TFile.Open(iFName1)
    lTree1 = lFile1.Get("limit")
    lDiffs=[]
    for i0 in range(0,lTree1.GetEntries()):
        lTree1.GetEntry(i0)
        lDiffs.append(lTree1.limit)
    return lDiffs

def bias(base,alt,ntoys,mu,iLabel,iMass,iOption=0):
    rand=int(random.random()*10000)
    #rand=int(9348)
    fileName='runbias_%s_%i.sh' % (iLabel,rand)
    dirs=os.getcwd().split("/")
    lCommand = 'cd    %s   \n' % dirs[len(dirs)-1]
    if iOption ==1:
        lCommand+='combine -M GenerateOnly     %s --rMax 20.0 --rMin -20.0 --toysFrequentist -t %i --expectSignal %s --saveToys --seed %i  \n' % (base,ntoys,str(mu),rand)
        lCommand+='combine -M MaxLikelihoodFit %s --rMax 20.0 --rMin -20.0 -t %i --saveNLL --toysFile higgsCombineTest.GenerateOnly.mH120.%s.root > /dev/null  \n' % (base,ntoys,str(rand))
    else:
        lCommand+='combine -M MaxLikelihoodFit --toysFrequentist -t 1 --saveNLL --expectSignal %s --rMax 20.0 --rMin -20.0 --seed %i   %s  > /dev/null   \n' % (str(mu),rand,base)
    lCommand+='mv mlfit.root %s/bias%s_%i.root \n' % (os.getcwd(),iLabel,rand)

    if not RUN_CONDOR:
        sub_file  = open(fileName,'a')
        cmsenv(sub_file)
        sub_file.write('cp -r %s . \n' % os.getcwd())
        sub_file.write(lCommand)
        sub_file.close()
        os.system('chmod +x %s' % os.path.abspath(sub_file.name))
        #os.system('bsub -q 8nh -R "rusage[tmp=6000:duration=6000:decay=2]" -o out.%%J %s' % (os.path.abspath(sub_file.name)))
        os.system('bsub -q 8nh -o out.%%J %s' % (os.path.abspath(sub_file.name)))
    else:
        lFilesToTransfer = [os.getcwd(),cmssw_path]
        lFiles = [dirs[len(dirs)-1]]
        write_bash(os.path.abspath(fileName),lCommand,lFiles)
        write_condor(os.path.abspath(fileName), [], lFilesToTransfer, options.dryRun)

def biascondense(iLabel,iSig,iMass):
    #os.system("rm alltoys100.root")
    os.system("rm alltoys1.root")
    os.system("rm *%s*stderr"%iLabel)
    os.system("rm *%s*stdout"%iLabel)
    os.system("rm *%s*jdl"%iLabel)
    os.system("rm *%s*log"%iLabel)
    #os.system("hadd alltoys100.root "+"bias"+iLabel+"*.root")
    os.system("hadd alltoys1.root "+"bias"+iLabel+"*.root")
    print os.path.getsize("alltoys1.root") 
    if os.path.getsize("alltoys1.root") > 1000:
        #os.system("hadd alltoys1.root "+"bias"+iLabel+"*toys1_*.root")
        #plotgaus("alltoys100.root",iSig,"pull"+iLabel+"toys100",str(iMass))
        plotgaus("alltoys1.root",iSig,"pull"+iLabel+"toys1",str(iMass))
    
def plotgaus(iFName,injet,iLabel,iMass):
    lCan   = r.TCanvas(str(iLabel),str(iLabel),800,600)
    lCan.SetLeftMargin(0.12)
    lCan.SetBottomMargin(0.15)
    lCan.SetTopMargin(0.12)
    lFile = r.TFile(iFName)
    lTree = lFile.Get("tree_fit_sb")
    print 'Entries ',lTree.GetEntriesFast()
    lH    = r.TH1F("h_bias","h_bias",25,-4,4)
    lTree.Project('h_bias','(mu-%s)/muErr'% injet,'(muHiErr+mu)<%i&&(mu-muLoErr)>%i'%(int(options.rMax)-1,int(options.rMin)+1))
    lGaus = r.TF1("gaus_func","gaus(0)",-4,4)
    lGaus.SetParameter(0,20)
    lGaus.SetParameter(1,0)
    lGaus.SetParameter(2,1)
    lH.Fit(lGaus,"mle")
    lGaus.Draw("same")
    lH.GetXaxis().SetTitle("Bias (#hat{#mu} - #mu)/#sigma_{#mu}")
    lH.GetYaxis().SetTitle("Pseudoexperiments")
    lH.GetYaxis().SetTitleOffset(0.8)
    lGaus.SetLineColor(2)
    lGaus.SetLineStyle(2)
    lH.SetMaximum(2.*lH.GetMaximum())
    lH.Draw("ep")
    lGaus.Draw("sames")
    lH.Draw("ep sames")

    lLeg = r.TLegend(0.5,0.6,0.89,0.89)
    lLeg.SetLineColor(r.kWhite)
    lLeg.SetLineWidth(0)
    lLeg.SetFillStyle(0)
    lLeg.SetTextFont(42)
    lLeg.AddEntry(lH,"#splitline{Pseudodata}{%s (%s GeV) #mu=%s}"%("Z'(qq)", iMass, options.sig),"lep")
    lLeg.AddEntry(lGaus,"#splitline{Gaussian fit}{mean = %+1.2f, s.d. = %1.2f}"%(lGaus.GetParameter(1),lGaus.GetParameter(2)),"l")
    lLeg.Draw("same")
    cmstag(lCan)
    lPdf = {'r4p4':'(n_{#rho}=4,n_{p_{T}}=4)',
            'r4p3':'(n_{#rho}=4,n_{p_{T}}=3)',
            'r3p3':'(n_{#rho}=3,n_{p_{T}}=3)',
            'r2p3':'(n_{#rho}=2,n_{p_{T}}=3)',
            'r1p3':'(n_{#rho}=1,n_{p_{T}}=3)',
            'r4p2':'(n_{#rho}=4,n_{p_{T}}=2)',
            'r3p2':'(n_{#rho}=3,n_{p_{T}}=2)',
            'r2p2':'(n_{#rho}=2,n_{p_{T}}=2)',
            'r1p2':'(n_{#rho}=1,n_{p_{T}}=2)',
            'r4p1':'(n_{#rho}=4,n_{p_{T}}=1)',
            'r3p1':'(n_{#rho}=3,n_{p_{T}}=1)',
            'r2p1':'(n_{#rho}=2,n_{p_{T}}=1)',
            'r1p1':'(n_{#rho}=1,n_{p_{T}}=1)',
            }

    if options.method=='FTest':
        for iKey, iVal in lPdf.iteritems():
            if iKey+'_vs' in iLabel:
                pKey1 = iKey
            elif iKey+'_m%s_r%s'%(iMass,options.r) in iLabel:
                pKey2 = iKey
        l = r.TLatex()
        l.SetTextAlign(11)
        l.SetTextSize(0.06)
        l.SetTextFont(62)
        l.SetNDC()
        l.DrawLatex(0.15,0.82,'gen. pdf = %s'%lPdf[pKey2])
        l.DrawLatex(0.15,0.75,'fit pdf = %s'%lPdf[pKey1])

    lCan.Modified()
    lCan.Update()
    lCan.SaveAs(iLabel+iMass+".png")
    lCan.SaveAs(iLabel+iMass+".pdf")

def cmstag(iCan):
    iCan.cd()
    l = r.TLatex()
    l.SetTextAlign(11)
    l.SetTextSize(0.06)
    l.SetTextFont(62)
    l.SetNDC()
    l.DrawLatex(0.12,0.91,"CMS")
    l.SetTextSize(0.05)
    l.SetTextFont(52)
    l.DrawLatex(0.23,0.91,"Preliminary")
    l.SetTextFont(42)
    l.DrawLatex(0.77,0.91,"%.1f 2017 (13 TeV)"%options.lumi)
    l.SetTextFont(52)
    l.SetTextSize(0.045)

if __name__ == "__main__":
    options = parser()
    import tdrstyle
    tdrstyle.setTDRStyle()    
    r.gStyle.SetOptStat(0)
    r.gStyle.SetOptFit(0)
    r.gStyle.SetOptTitle(0)
    r.gStyle.SetPaintTextFormat("1.2g")
    r.gROOT.SetBatch()
    r.RooMsgService.instance().setGlobalKillBelow(r.RooFit.FATAL)
    cwd = os.getcwd()
    print options
    massList = options.mass
    if 'all' in options.mass: 
        massList = '50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300'
        if options.jet == 'CA15':
            massList = '100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300,305,310,315,320,325,330,335,340,345,350,355,360,365,370,375,380,385,390,395,400,405,410,415,420,425,430,435,440,445,450' 
    for mass in massList.split(','):
        if not options.nocards:
            setup(options,mass)
        else:
            iDir = '%s/results/%s/%s/ZQQ_%s'%(os.getcwd(),options.tag,options.jet,mass)
            os.chdir (iDir)
        if not options.condense:
            if options.method=='MaxLikelihoodFit':
                if options.forcomb:
                    limit('card_2016_2017.txt','lim_2016_2017_results7_%s%s_34_skip%s'%(options.np,options.nr,options.skipcat),mass,options)
                    limit('card_2016.txt','lim_2016_results7_%s%s_34_skip%s'%(options.np,options.nr,options.skipcat),mass,options)
                    limit('card_2017.txt','lim_2017_%s%s_34_skip%s'%(options.np,options.nr,options.skipcat),mass,options)
                else:
                    datacard = 'card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr)
                    limit(datacard,'lim_%s%s_skip%s_%s'%(options.np,options.nr,options.skipcat,options.test),mass,options)
            if options.method=='FTest':
                iLabel= 'ftest_%s%s_vs_%s%s_%s_skip%s'%(options.np,options.nr,options.npalt,options.nralt,options.test,options.skipcat)
                ftest('card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr),'card_rhalphabet_%s%s_pt.txt'%(options.npalt,options.nralt),options.toys,options.sig,iLabel,mass)
            if options.method=='GoodnessOfFit':
                datacard = 'card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr)
                iLabel= '%s_%s_skip%s'%(datacard.split('/')[-1].replace('.txt',''),options.test,options.skipcat)
                goodness(datacard,options.toys,options.sig,iLabel,mass,options.algo,options.freezeNuisances)
            if options.method=='Bias':
                datacard = 'card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr)
                iLabel= '%s_%s_sig%s_skipcat%s'%(datacard.split('/')[-1].replace('.txt',''),options.test,options.sig,options.skipcat)
                #bias(datacard,datacard,100,options.sig,iLabel+'_toys100op1',mass,1)
                for i0 in range(0,int(options.toys)):
                    bias(datacard,datacard,1,options.sig,iLabel+'_'+str(i0)+'toys1op0',mass,0)
            if options.method=='Impacts':
                datacard = 'card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr)
                impacts(datacard,'%s%s_skip%s_%s'%(options.np,options.nr,options.skipcat,options.test),mass,options.allfits)
        else:
            if options.method=='FTest':
                iLabel= 'ftest_%s%s_vs_%s%s_%s_skip%s'%(options.np,options.nr,options.npalt,options.nralt,options.test,options.skipcat)
                ftestcondense(iLabel,options,mass)
            if options.method=='GoodnessOfFit':
                datacard = 'card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr)
                iLabel= '%s_%s_skip%s'%(datacard.split('/')[-1].replace('.txt',''),options.test,options.skipcat)
                goodnesscondense(str(mass)+iLabel,mass,options)
            if options.method=='Bias':
                datacard = 'card_rhalphabet_%s%s_pt.txt'%(options.np,options.nr)
                iLabel= '%s_%s_sig%s_skipcat%s'%(datacard.split('/')[-1].replace('.txt',''),options.test,options.sig,options.skipcat)
                #iLabel= '%s_%s_sig%s'%(datacard.split('/')[-1].replace('.txt',''),options.tag,options.sig)
                biascondense(iLabel,options.sig,mass)
        os.chdir (cwd)
