#!/usr/bin/env python                                                                                                                                                                
import glob
import sys, commands, os, fnmatch, json
from optparse import OptionParser
from zqq_utils import *

cmssw = os.getenv('CMSSW_VERSION', 'CMSSW_8_1_0')
cmssw_base = os.getenv('CMSSW_BASE', 'CMSSW_8_1_0')

# submit nqueue jobs per file                                                                                                                                                     
def write_condor(exe='runjob.sh', arguments = [], files = [],nqueue=1,dryRun=True):
    job_name = exe.replace('.sh','.jdl')
    out = 'universe = vanilla\n'
    out += 'Executable = %s\n'%exe
    out += 'Should_Transfer_Files = YES\n'
    out += 'WhenToTransferOutput = ON_EXIT\n'
    out += 'Transfer_Input_Files = %s,%s\n'%(exe,','.join(files))
    out += 'Output = output/%s_$(Cluster)_$(Process).stdout\n'%job_name
    out += 'Error  = error/%s_$(Cluster)_$(Process).stderr\n'%job_name
    out += 'Log    = log/%s_$(Cluster)_$(Process).log\n'   %job_name
    out += 'Arguments = %s $(Process)\n'%(' '.join(arguments)) # last argument is number of splitting
    out += 'Queue %i\n'%nqueue
    with open(job_name, 'w') as f:
        f.write(out)
    if not dryRun:
        os.system("condor_submit %s"%job_name)

# bash script: outdir must be in eos?
def write_bash(temp = 'runjob.sh', command = '', files = [],odir=''):
    out = '#!/bin/bash\n'
    # add arguments
    out += 'date\n'
    out += 'MAINDIR=`pwd`\n'
    out += 'ls\n'
    out += '#CMSSW from scratch (only need for root)\n'
    out += 'export CWD=${PWD}\n'
    out += 'export PATH=${PATH}:/cvmfs/cms.cern.ch/common\n'
    out += 'export CMS_PATH=/cvmfs/cms.cern.ch\n'
    out += 'export SCRAM_ARCH=slc6_amd64_gcc530\n'
    out += 'scramv1 project CMSSW %s\n'%cmssw
    for f in files:
        out += 'cp %s %s/src\n'%(f.replace("%s/src/ZPrimePlusJet/analysis/"%cmssw_base,""),cmssw)
        if 'data.tgz' in f:
             out += 'tar -xvzf data.tgz -C %s/src \n'%cmssw
    out += 'cd %s/src\n'%cmssw
    out += 'eval `scramv1 runtime -sh` # cmsenv\n'
    #out += 'cd ${CWD}\n'
    out += command + '\n'
    out += 'echo "Inside $MAINDIR:"\n'
    out += 'ls -lrth \n'
    # transfer to odir ( in oes)
    out += 'OUTDIR=root://cmseos.fnal.gov/%s \n'%(odir)
    out += 'for FILE in *.root \n'
    out += 'do \n'
    out += '\t xrdcp -f ${FILE} ${OUTDIR}/${FILE} \n'
    out += '\t rm ${FILE}\n'
    out += 'done \n'
    out += 'echo "DELETING..."\n'
    out += 'rm -rf %s\n'%cmssw
    out += 'rm -rf *.root\n'
    out += 'ls\n'
    out += 'date\n'
    with open(temp, 'w') as f:
        f.write(out)

# submit by # of events
def submitByEvents(options,iCommand,iJob,inSplit,iOdir):
    lexe      = "runjob_%s.sh"%(iJob)
    files     = ['zqq_create.py','zqq_utils.py','zqq_config.py','data.tgz']
    filesTransfer  = ['%s/src/ZPrimePlusJet/analysis/'%cmssw_base+f for f in files]
    arguments = []
    write_bash(lexe,iCommand,files,iOdir)
    os.system('mkdir -p output')
    os.system('mkdir -p error')
    os.system('mkdir -p log')
    write_condor(lexe,arguments,filesTransfer,inSplit,options.dryRun)

if __name__ == '__main__':

    parser = OptionParser()
    parser.add_option('-t','--tag',   dest="tag",      type=str, default="test",                help = "tag")
    parser.add_option('--odir',       dest="odir",     type=str, default="inputHists",          help = "output dir")
    parser.add_option('--nsplit',     dest="nsplit",   type=int, default= 10,                   help = "split")
    parser.add_option('--year',       dest="year",     type=str, default="2017",                help='year')
    parser.add_option('--sideband',   dest="sideband", type=str, default=None,                  help='sideband')
    parser.add_option('--jet',        dest='jet',      type=str, default='AK8',                 help='jet type')
    parser.add_option('--ddt',        dest='ddt',      type=str, default='data/Output_v4.root', help='ddt')
    parser.add_option('--trigmap',    dest='trigmap',  type=str, default='ht2017',              help='trigger tag')
    parser.add_option('--isMc',       action='store_true', dest='isMc',     default=False, help='run on mc process')
    parser.add_option('--isQCD',      action='store_true', dest='isQCD',    default=False, help='run on QCD process')
    parser.add_option('--isMuonCR',   action='store_true', dest='isMuonCR', default=False, help='run on muon CR')
    parser.add_option('--isData',     action='store_true', dest='isData',   default=False, help='run on data')
    parser.add_option('--isSig',      action='store_true', dest='isSig',    default=False, help='run on signals')
    parser.add_option('--blinded',    action='store_true', dest='blinded',  default=False, help='run 10th')
    parser.add_option('--control',    action='store_true', dest='control',  default=False, help='control hists')
    parser.add_option('--trigger',    action='store_true', dest='trigger',  default=False, help='run trigger')
    parser.add_option('--dry-run',    action='store_true', dest='dryRun',   default=False, help="Just print out commands to run")
    parser.add_option('--hadd',       action='store_true', dest='hadd',     default=False, help='hadd roots from subjobs')
    (options,args) = parser.parse_args()

    if options.year=="2017":
        samplefiles   = open(os.path.expandvars("data/samplefiles.json"),"r")
        tfiles  = json.load(samplefiles)['zqq2017']
        masses  = massIterable(MASSES2017)
        lumi    = 41.1
    elif options.year=='2016':
        tfiles = get2016files()
        masses = massIterable(MASSES2016)
        lumi   = 36.9
    else:
        print "Invalid choice of year. Aborting"
        sys.exit()

    # samples: key is the name of process in datacard
    samples = {}
    if options.isMc:
        samples['zqq'] = ['zqq']
        samples['wqq'] = ['wqq']
        samples['tqq'] = ['tqq']
        samples['stqq'] = ['stqq']
        if options.isMuonCR:
            samples['vvqq'] = ['vvqq']
            samples['wlnu'] = ['wlnu']
            samples['zll'] = ['zll']
    if options.isQCD:
        samples['qcd'] = ['qcd']
    if options.isData:
        samples['data_obs'] = ['jethtb','jethtc','jethtd','jethte','jethtf']
        if options.year=="2016":
            samples['data_obs'] = ['jethtb','jethtc','jethtd','jethte','jethtf','jethtg','jethth']
        if options.trigger or options.isMuonCR:
            samples['data_obs'] = ['muon']
    if options.isSig:
        for m in masses:
            samples['zqq%s'%m] = ['zqq%s'%m]

    # tag
    tag = options.tag
    if options.blinded: tag += "10th"
    if options.isMuonCR: tag = "muon"+tag
    if options.trigger: tag += options.trigmap
    tag+=options.jet

    # odir
    odir = options.odir
    if options.control:  odir = odir.replace('inputHists','controlHists')
    lOdir = '/store/user/cmantill/%s/%s'%(odir,tag)
    exec_me('mkdir -p /eos/uscms/%s'%lOdir)

    # lumi
    sf = 1
    if options.blinded: sf = 10
    lumi = lumi/sf;

    # iterate over samples
    for label, samplelist in samples.iteritems():
        for sample in samplelist:
            lFiles={}
            if type(tfiles[sample])!=type({}): 
                lFiles[sample] = tfiles[sample]
            else:
                lFiles = tfiles[sample]

            mass = 0
            if 'zqq' in label: mass = 91.
            if 'wqq' in label: mass= 80.4
            if options.isSig:
                lmass = label.replace('zqq','')
                for m in masses:
                    if lmass == str(m): mass = float(lmass)

            for subsample,subtfiles in lFiles.iteritems():
                if not options.isData:
                    lumiweight = getLumiWeight(subsample,lumi,subtfiles)
                else:
                    lumiweight = 1
                for ifilename in subtfiles:
                    if not "root://" in ifilename and not os.path.isfile(ifilename):
                        print 'Error: %s does not exist'%tfile
                        sys.exit()
                    lbasename = ifilename.split('/')[-1]
                    ltree = "otree" # I think this works in all cases
                    if not options.hadd:
                        lcommand  = 'python ${CMSSW_BASE}/src/zqq_create.py --odir ./ --filename %s --tag %s --tree %s --mass %.2f --jet %s --ddt %s --lumi %f --sf %i --nsplit %i'%(ifilename,label,ltree,mass,options.jet,options.ddt,lumiweight,sf,options.nsplit)
                        if options.control:  lcommand  += ' --control'
                        if options.isMuonCR: lcommand  += ' --isMuonCR'
                        if options.isData:   lcommand  += ' --isData'
                        if options.isData:   lcommand  += ' --trigmap %s'%options.trigmap
                        if options.blinded:  lcommand  += ' --blinded'
                        if options.year=='2017' and not options.isData: 
                            lPuPath = fPuPath+subsample+'.root'
                            lPuPath = getPuHistogram(sample,lPuPath,subtfiles)
                            lcommand  += ' --isPu %s'%lPuPath 
                        lEntries = loopOverEntries(ifilename,ltree)
                        lcommand  += ' --entries %i'%lEntries
                        if options.sideband is not None: lcommand += ' --sideband %s'%options.sideband
                        if options.trigger:      lcommand += ' --trigger'
                        if options.year=='2016': lcommand += ' --is2016'
                        lcommand += ' --isplit ${1}' # better if this goes last?

                        lbase = os.getcwd()
                        ldir = '%s/%s'%(odir,tag)
                        ljob = label+'_'+lbasename.replace('.root','').replace('/','_')
                        os.system('mkdir -p %s'%ldir)
                        os.chdir(ldir)
                        submitByEvents(options,lcommand,ljob,options.nsplit,lOdir)
                        os.chdir(lbase)
                    else:
                        lodir = '%s/%s'%(odir,tag)
                        lbase = lbasename.replace('.root','')
                        nOutput = len(glob.glob("/eos/uscms/%s/%s_*.root"%(lOdir,lbase)))
                        if nOutput==options.nsplit:
                            print 'Found %s subjob output files'%nOutput
                            exec_me("hadd %s/%s.root /eos/uscms/%s/%s_*.root"%(lodir,lbase,lOdir,lbase),options.dryRun)
                            exec_me("rm /eos/uscms/%s/%s_*.root"%(lOdir,lbase),options.dryRun)
                            exec_me("rm %s/output/*"%(lodir),options.dryRun)
                            exec_me("rm %s/error/*"%(lodir),options.dryRun)
                            exec_me("rm %s/log/*"%(lodir),options.dryRun)
                        else:
                            lEntries = loopOverEntries(ifilename,ltree)
                            print 'Found %s subjob output files'%nOutput
                            exec_me("hadd %s/%s.root %s/%s_*.root"%(lodir,lbase,lOdir,lbase),options.dryRun)
                            exec_me("rm /eos/uscms/%s/%s_*.root"%(lOdir,lbase),options.dryRun)
                            exec_me("rm %s/output/*"%(lodir),options.dryRun)
                            exec_me("rm %s/error/*"%(lodir),options.dryRun)
                            exec_me("rm %s/log/*"%(lodir),options.dryRun)
