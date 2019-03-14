#! /bin/bash

tag="fulldatasettrigger"
ddtAK8="data/ddt/Output_v4.root"
ddtCA15="data/ddt/OutputCA152017v4.root"
nsplit=30
python zqq_submit.py --isData --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigger --control --trigmap htmu2017
python zqq_submit.py --isData --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigger --control --trigmap mu2017
python zqq_submit.py --isMc --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --control --trigmap ht2017
