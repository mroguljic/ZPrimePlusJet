#!/usr/bin/env python                                                                                                                                                                
import glob
import sys, commands, os, fnmatch
from optparse import OptionParser
import zqq_utils

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
    out += 'Arguments = %s $(Process)\n'%(' '.join(arguments))
    out += 'Queue %i\n'%nqueue
    with open(job_name, 'w') as f:
        f.write(out)
    if not dryRun:
        os.system("condor_submit %s"%job_name)

# bash script: outdir must be in eos?
def write_bash(temp = 'runjob.sh', command = '', files = [],sample='',outdir=''):
    print 'writing ',temp
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
        out += 'cp %s %s/src\n'%(f.replace("%s/src/"%cmssw_base,""),cmssw)
        if 'data.tgz' in f:
             out += 'tar -xvzf data.tgz -C %s/src \n'%cmssw
    out += 'cd %s/src\n'%cmssw
    out += 'eval `scramv1 runtime -sh` # cmsenv\n'
    out += 'cd ${CWD}\n'
    out += command + '\n'
    out += 'echo "Inside $MAINDIR:"\n'
    out += 'ls -lrth \n'
    # transfer
    out += 'OUTDIR=%s/%s \n'%sample
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
def submitByEvents(options,iCommand,iJob,inSplit):
    lexe      = "runjob_%s.sh"%(iJob)
    files     = ['controlHistsLSFSF.py']
    filesTransfer  = ['%s/src/lsfSF/controlHistsLSFSF.py'%cmssw_base,'%s/src/lsfSF/data/puWeights_All.root'%cmssw_base]
    arguments = []
    write_bash(lexe,iCommand,files,options.sample)
    os.system('mkdir -p output')
    os.system('mkdir -p error')
    os.system('mkdir -p log')
    write_condor(lexe, arguments, filesTransfer,inSplit,options.dryRun)

def submitByEvents(options,iLabel,iCommand,iFile,iSplit=100,iTree="otree"):
    lEntries = loopOverEntries(iFile,iTree)
    if lEntries > iSplit:
        lSplit = slice_it(range(0,lEntries),iSplit)
    else:
        lSplit = [range(0,lEntries)]
    print lSplit
    for iL,iList in enumerate(lSplit):
        print iL,iList[0],iList[-1]
        levts     = '%i,%i'%(int(iList[0]),int(iList[-1]))
        lCommand  = iCommand + ' --evts %s'%(levts)
        iJob      = "%s_%i_%i"%(iLabel,int(iList[0]),int(iList[-1]))
        lexe      = "runjob_%s.sh"%(iJob)
        files     = ['%s/src/ZPrimePlusJet/analysis/zqq_create.py'%cmssw_base,
                     '%s/src/ZPrimePlusJet/analysis/zqq_utils.py'%cmssw_base,
                     '%s/src/ZPrimePlusJet/analysis/data.tgz'%cmssw_base]
        arguments = []
        write_bash(lexe,lCommand,files)
        write_condor(lexe, arguments, files, options.dryRun)

if __name__ == '__main__':

    parser = OptionParser()
    parser.add_option('-s','--sample',dest="sample", default="", help="samples to run on")
    parser.add_option('-t','--tag',   dest="tag", default = "test", help = "tag")
    parser.add_option('--odir',       dest="odir", default = "inputHists", help = "output dir")
    parser.add_option('--split',      dest="split", type=int, default = 1000, help = "split")
    parser.add_option('--hadd',       dest='hadd', action='store_true',default = False, help='hadd roots from subjobs', metavar='hadd')
    parser.add_option('--dry-run',    dest="dryRun",default=False,action='store_true',help="Just print out commands to run")
    parser.add_option('--year',       dest="year", default="2017", help='year')
    parser.add_option('--isMc',       action='store_true', dest='isMc', default=False, help='run on mc process')
    parser.add_option('--isQCD',      action='store_true', dest='isQCD', default=False, help='run on QCD process')
    parser.add_option('--isMuonCR',   action='store_true', dest='isMuonCR', default=False, help='run on muon CR')
    parser.add_option('--isData',     action='store_true', dest='isData', default=False, help='run on data')
    parser.add_option('--isSig',      action='store_true', dest='isSig', default=False, help='run on signals')
    parser.add_option('--nob',        action='store_true', dest='nob', default=False, help='no Run B')
    parser.add_option('--blinded',    action='store_true', dest='blinded', default=False, help='run 10th')
    parser.add_option("--sideband",   type=str, default=None, help="sideband")
    parser.add_option('--jet',        dest='jet', default='AK8', help='jet type')
    parser.add_option("--ddt",        type=str, default='data/GridOutput_v13.root', help="ddt")
    parser.add_option('--control',    action='store_true', dest='control', default=False, help='control hists')
    parser.add_option('--trigger',    action='store', dest='trigger', default=None, help='run trigger')

    (options,args) = parser.parse_args()

    if year=="2017":
        samplefiles   = open(os.path("data/samplefiles.json"),"r")
        tfiles  = json.load(samplefiles)['zqq2017']
        pu_Opt  = {'data':"2017"}
        masses  = massIterable(MASSES2017)
        lumi    = 41.1
    elif year=='2016':
        tfiles = get2016files()
        pu_Opt = {'data':"2016",'MC':"12.04"}
        masses = massIterable(MASSES2016)
        lumi   = 36.9
    else:
        print "Invalid choice of year. Aborting"
        sys.exit()

    # samples: key is the name of process in datacard
    samples = {}
    if options.isMc:
        samples['zqq'] = ['zqq'],
        samples['wqq'] = ['wqq'],
        samples['tqq'] = ['tqq'],
        samples['stqq'] = ['stqq'],
        if options.isMuonCR:
            samples['vvqq'] = ['vvqq']
            samples['wlnu'] = ['wlnu']
            samples['zll'] = ['zll']
    if options.isQCD:
        samples['qcd'] = ['qcd']
    if options.isData:
        samples['data_obs'] = ['jethtb','jethtc','jethtd','jethte','jethtf']
        if year=="2016":
            samples['data_obs'] = ['jethtb','jethtc','jethtd','jethte','jethtf','jethtg','jethth']

    tag = options.tag
    if options.blinded: tag += "10th"
    if options.nob: tag += "NOB"
    if options.isMuonCR: tag = 'muon'+tag
    if options.trigger is not None: tag = options.trigger+tag
    tag+=options.jet

    sf = 1
    if options.blinded: sf = 10
    lumi = lumi/sf;

    lOdir = options.odir+"/"+tag
    if options.control:
        lOdir = "controlHists/"+tag
    exec_me('mkdir -p %s'%(lOdir))

    for label, s in samples.iteritems():
        if type(tfiles[s])==type({}): continue
        for tfile in tfiles[s]:
            if not "root://" in tfile and not os.path.isfile(tfile):
                print 'Error: %s does not exist'%tfile                 
                sys.exit()

        mass = 0
        if 'zqq' in label: mass = 91.
        if 'wqq' in label: mass= 80.4
        if options.isSig:
            lmass = label.replace('zqq','')
            for m in masses:
                if lmass == str(m): mass = float(lmass)

        for ifilename in tfiles[s]:
            lbasename = ifilename
            ltree = "Events" # I think this works in all cases
            lcommand  = 'python ${CMSSW_BASE}/src/zqq_create.py --odir ${MAINDIR}/ --filename %s --tag %s --tree %s --mass %.2f --jet %s --ddt %s --lumi %f --sf %i '%(lbasename,label,ltree,mass,options.jet,options.ddt,lWeight,sf)
            if options.control: lcommand  += ' --control'
            if options.isMuonCR: lcommand  += ' --isMuonCR'
            if options.isData: lcommand  += ' --isData'
            if options.nob: lcommand  += ' --nob'
            if options.blinded: lcommand  += ' --blinded'
            if options.year=='2017': 
                lPuPath = getPuHistogram(s,fPuPath)
                lcommand  += ' --isPu %s'%lPuPath 
            if options.sideband is not None: lcommand += ' --sideband %s'%options.sideband
            if options.trigger is not None: lcommand += ' --trigger %s'%options.trigger
            if options.year=='2016': lcommand += ' --is2016'
            lbase = os.getcwd()

            lsub = label+'_'+ifilename.replace('.root','').replace('/','_')
            if not options.hadd:
                os.chdir(lOdir)
                print "submitting jobs from : ",os.getcwd()
                submitByEvents(options,lsub,lcommand,lfile,options.split,ltree)
                os.chdir(lbase)
            else:
                nOutput = len(glob.glob("%s/%s_*.root"%(lOdir,lbasename.replace('.root','').replace('/','_'))))
                if nOutput==options.split:
                    print 'Found %i subjob output files out of %i'%(nOutput,options.split)
                    exec_me("hadd -f %s/%s %s/%s_*.root"%(lOdir,lbasename.replace('/','_'),lOdir,lbasename.replace('.root','').replace('/','_')),options.dryRun)
                    print "DONE hadd. Removing subjob files"
                    exec_me("rm %s/%s_*.root"%(lOdir,lbasename.replace('.root','').replace('/','_')),options.dryRun)
                    exec_me("rm %s/run*%s_*.jdl*"%(lOdir,lsub),options.dryRun)
                    exec_me("rm %s/run*%s_*.sh"%(lOdir,lsub),options.dryRun)
                else:
                    print 'Found %i subjob output files out of %i'%(nOutput,options.split)
                    exec_me("hadd -f %s/%s %s/%s_*.root"%(lOdir,lbasename.replace('/','_'),lOdir,lbasename.replace('.root','').replace('/','_')),options.dryRun)
                    print "DONE hadd. Removing subjob files"
                    exec_me("rm %s/%s_*.root"%(lOdir,lbasename.replace('.root','').replace('/','_')),options.dryRun)
                    exec_me("rm %s/run*%s_*.jdl*"%(lOdir,lsub),options.dryRun)
                    exec_me("rm %s/run*%s_*.sh"%(lOdir,lsub),options.dryRun)
