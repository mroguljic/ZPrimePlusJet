import glob
import sys, commands, os, fnmatch
from optparse import OptionParser,OptionGroup

def exec_me(command, dryRun=False):
    print command
    if not dryRun:
        os.system(command)

#def write_condor(exe='runjob.sh', arguments = [], files = [],dryRun=True):
#    job_name = exe.replace('.sh','.jdl')
#    out = 'universe = vanilla\n'
#    out += 'Executable = %s\n'%exe
#    out += 'Should_Transfer_Files = YES\n'
#    out += 'WhenToTransferOutput = ON_EXIT_OR_EVICT\n'
#    out += 'Transfer_Input_Files = %s,%s\n'%(exe,','.join(files))
#    out += 'Output = %s.stdout\n'%job_name
#    out += 'Error  = %s.stderr\n'%job_name
#    out += 'Log    = %s.log\n'   %job_name
#    #out += 'notify_user = jduarte1@FNAL.GOV\n'
#    #out += 'x509userproxy = /tmp/x509up_u42518\n'
#    out += 'Arguments = %s\n'%(' '.join(arguments))
#    out += 'Queue 1\n'
#    with open(job_name, 'w') as f:
#        f.write(out)
#    if not dryRun:
#        os.system("condor_submit %s"%job_name)

def write_condor(njobs, exe='runjob', arguments =[], files = [], dryRun=True):
    fname = '%s.jdl' % exe
    out = """universe = vanilla
Executable = {exe}.sh
Should_Transfer_Files = YES
WhenToTransferOutput = ON_EXIT_OR_EVICT
Transfer_Input_Files = {exe}.sh,{files}
Output = {exe}.$(Process).stdout
Error  = {exe}.$(Process).stderr
Log    = {exe}.$(Process).log
Arguments =  {args}
Queue {njobs}
    """.format(exe=exe,args=' '.join(arguments), files=','.join(files), njobs=njobs)
    with open(fname, 'w') as f:
        f.write(out)
    if not dryRun:
        os.system("condor_submit %s" % fname)


def write_bash(temp = 'runjob.sh', command = '' ,gitClone="", setUpCombine=False):
    out = '#!/bin/bash\n'
    out += 'date\n'
    out += 'MAINDIR=`pwd`\n'
    out += 'ls\n'
    out += '#CMSSW from scratch (only need for root)\n'
    out += 'export CWD=${PWD}\n'
    out += 'export PATH=${PATH}:/cvmfs/cms.cern.ch/common\n'
    out += 'export CMS_PATH=/cvmfs/cms.cern.ch\n'
    out += 'export SCRAM_ARCH=slc6_amd64_gcc530\n'
    out += 'tar -xf CMSSW_10_2_13.tgz\n'
    out += 'cd CMSSW_10_2_13/src\n'
    out += 'scramv1 b ProjectRename\n'
    out += 'eval `scramv1 runtime -sh` # cmsenv\n'
    #out += 'export CMSSW_BASE=${CWD}/CMSSW_10_2_13/\n'
    #out += 'echo $CMSSW_BASE\n'
    out += gitClone + '\n'
    out += 'cd ZPrimePlusJet\n'
    out += 'source setup.sh\n'
    out += 'echo "Execute with git status/log:"\n'
    out += 'git status -uno \n'
    out += 'git log -n 1 \n'
    out += 'cd ${CMSSW_BASE}/src/ZPrimePlusJet/fitting/PbbJet/\n'
    out += 'export PYTHONPATH=$PYTHONPATH:${PWD}/rhalphalib/\n'
    out += 'export PYTHONPATH=$PYTHONPATH:${PWD}/..//\n'
    out += 'export PYTHONPATH=$PYTHONPATH:${PWD}/../../analysis/\n'
    out += command + '\n'
    out += 'cd ${CWD}\n'
    out += 'echo "Inside $MAINDIR:"\n'
    out += 'ls\n'
    out += 'echo "DELETING..."\n'
    out += 'rm -rf CMSSW_10_2_13\n'
    out += 'rm -rf *.pdf *.C\n'
    out += 'ls\n'
    out += 'date\n'
    with open(temp, 'w') as f:
        f.write(out)

if __name__ == '__main__':
    parser = OptionParser()
    #main option group: handle job submission
    parser.add_option('--hadd', dest='hadd', action='store_true',default = False, help='hadd roots from subjobs', metavar='hadd')
    parser.add_option('--clean', dest='clean', action='store_true',default = False, help='clean submission files', metavar='clean')
    parser.add_option('-o', '--odir', dest='odir', default='./', help='directory to write histograms/job output', metavar='odir')
    parser.add_option('-t','--toys'       ,action='store',type='int',dest='toys'   ,default=200, help='number of toys')
    parser.add_option('-i','--ifile', dest='ifile', default = 'hist_1DZbb.root',help='file with histogram inputs', metavar='ifile')
    #parser.add_option('--qcdfitdir', dest='qcdfitdir', default='./', help='dir to look for qcdTF cards')

    #limit.py group
    script_group  = OptionGroup(parser, "script options")

    script_group.add_option('-m','--mass'   ,action='store',type='int',dest='mass'   ,default=125, help='mass')
    script_group.add_option('-n','--n' ,action='store',type='int',dest='n'   ,default=5*20, help='number of bins')
    script_group.add_option('--p1' ,action='store',type='int',dest='p1'   ,default=9, help='number of parameters for default datacard (p1 > p2)')
    script_group.add_option('--p2' ,action='store',type='int',dest='p2'   ,default=12, help='number of parameters for alternative datacard (p2 > p1)')
    script_group.add_option('--sig'    ,action='store',type='int',dest='sig'    ,default=1 ,help='sig')
    script_group.add_option('-d','--datacard'   ,action='store',type='string',dest='datacard'   ,default='card_rhalphabet.txt', help='datacard name')
    script_group.add_option('--datacard-alt'   ,action='store',type='string',dest='datacardAlt'   ,default='card_rhalphabet_alt.txt', help='alternative datacard name')
    script_group.add_option('--poi'   ,action='store',type='string',dest='poi'   ,default='r', help='poi')
    script_group.add_option('-M','--method'   ,dest='method'   ,default='GoodnessOfFit', 
                choices=['GoodnessOfFit','FTest','Asymptotic','Bias','MaxLikelihoodFit'],help='combine method to use')
    script_group.add_option('-a','--algo'   ,dest='algo'   ,default='saturated', 
                choices=['saturated','KS','AD'],help='GOF algo  to use')
    script_group.add_option('--just-plot', action='store_true', dest='justPlot', default=False, help='just plot',metavar='just-plot')
    script_group.add_option('','--data', action='store_true', dest='isData', default=False, help='is data',metavar='data')
    script_group.add_option('-l','--lumi'   ,action='store',type='float',dest='lumi'   ,default=36.4, help='lumi')
    script_group.add_option('--scaleLumi'   ,action='store',type='float',dest='scaleLumi'   ,default=-1, help='scale nuisances by scaleLumi')
    script_group.add_option('-r','--r',dest='r', default=0 ,type='float',help='default value of r')
    script_group.add_option('--rMin',dest='rMin', default=-20 ,type='float',help='minimum of r (signal strength) in profile likelihood plot')
    script_group.add_option('--rMax',dest='rMax', default=20,type='float',help='maximum of r (signal strength) in profile likelihood plot')  
    script_group.add_option('--freezeNuisances'   ,action='store',type='string',dest='freezeNuisances'   ,default='None', help='freeze nuisances')
    script_group.add_option('--setParameters'   ,action='store',type='string',dest='setParameters'   ,default='None', help='setParameters')

    script_group.add_option('','--dryRun',dest="dryRun",default=False,action='store_true',help="Just print out commands to run",metavar='dryRun')    



    parser.add_option_group(script_group)

    (options, args) = parser.parse_args()
    hadd            = options.hadd
    dryRun          = options.dryRun
    setUpCombine    = True

    nToys           = options.toys
    nToysPerJob     = 10
    maxJobs         = nToys/nToysPerJob
    
    goodtoys        = 'goodtoys_*.root'

    outpath= options.odir
    #gitClone = "git clone -b Hbb git://github.com/DAZSLE/ZPrimePlusJet.git"
    #gitClone = "git clone -b Hbb_test git://github.com/kakwok/ZPrimePlusJet.git"
    #gitClone = "git clone -b shift_SF git://github.com/kakwok/ZPrimePlusJet.git"
    #gitClone = "git clone -b simpleMuonCR git://github.com/kakwok/ZPrimePlusJet.git"
    gitClone = "git clone -b deco git://github.com/kakwok/ZPrimePlusJet.git"

    #Small files used by the exe
    files = [options.ifile]

    #ouput to ${MAINDIR}/ so that condor transfer the output to submission dir
    command      = 'python ${CMSSW_BASE}/src/ZPrimePlusJet/fitting/PbbJet/limit.py -M GoodnessOfFit -o ${MAINDIR}/ --seed $1 --toys $2 -d ${MAINDIR}/$3 '
    #plot_odir    = "/".join(options.odir.split("/")[:-3])
    plot_odir    = options.odir 
    
    #print out command to use after jobs are done
    plot_command = 'python ${CMSSW_BASE}/src/ZPrimePlusJet/fitting/PbbJet/limit.py -o %s --just-plot -d %s'%(plot_odir,options.ifile)
    
        #Add script options to job command
    for opts in script_group.option_list:
        if not getattr(options, opts.dest)==opts.default:
            print "Using non default option %s = %s "%(opts.dest, getattr(options, opts.dest))
            if opts.action == 'store_true':
                command  += " --%s "%(opts.metavar)
                plot_command  += " --%s "%(opts.metavar)
            else:
                command  += " --%s %s "%(opts.dest,getattr(options, opts.dest))
                plot_command  += " --%s %s "%(opts.dest,getattr(options, opts.dest))
    if not hadd: 
        print "Copying inputfiles to submission dir:"
        if not os.path.exists(outpath):
            exec_me("mkdir -p %s"%(outpath), False)
        for f in files: 
            exec_me("cp %s %s"%(f, outpath))
        print "command to run: ", command
    else:
        print "plot command: \n",plot_command

    #cmssw   = os.path.expandvars("$ZPRIMEPLUSJET_BASE/CMSSW_8_1_0.tar.gz")
    cmssw   = os.path.expandvars("/uscms/home/kkwok/work/Hbb/CMSSW_10_2_13/src/ZPrimePlusJet/CMSSW_10_2_13.tgz")

    if not options.hadd:
        if not os.path.exists(outpath):
            exec_me("mkdir -p %s"%(outpath), False)
        os.chdir(outpath)
        print "submitting jobs from : ",os.getcwd()
    
        localfiles = [path.split("/")[-1] for path in files]    #Tell script to use the transferred files
        localfiles.append(cmssw)
        arguments = [ str("$(Process)"),str(nToysPerJob)]
        for f in localfiles:
            arguments.append(str(f))
        exe       = "runjob"
        write_bash(exe+".sh", command, gitClone, setUpCombine)
        write_condor(maxJobs,exe, arguments, localfiles,dryRun)
    else:
        nOutput = len(glob.glob("%s/%s"%(outpath,goodtoys)))
        print "Found %s subjob output files in path: %s/%s"%(nOutput,outpath,goodtoys)
        def cleanAndPlot():
            exec_me("cp  %s/goodbase_0.root %s/goodbase_-1.root"%(outpath,outpath),dryRun)
            exec_me("hadd %s/goodtoys_-1.root  %s/%s"%(outpath,outpath,goodtoys),dryRun)
            print "plot command: ",plot_command
            exec_me(plot_command,dryRun)
            if options.clean :
                print "Cleaning submission files..." 
                #remove all but _0 file
                for i in range(1,10):
                    exec_me("rm %s/runjob.%s*"%(outpath,i),dryRun)
                    if os.path.exists("%s/goodtoys_-1.root"%outpath):
                        exec_me("rm %s/goodtoys_%s*.root"%(outpath,i),dryRun)
                    else: 
                        print 'not cleaning toys files' 
                print "Finish cleaning,plotting " 
        if nOutput==maxJobs:
            cleanAndPlot()
        else:
            print "%s/%s jobs done, not hadd/clean-ing"%(nOutput,maxJobs)
            proceed = raw_input("Proceed anyway?")
            if proceed=="yes":
                cleanAndPlot()
