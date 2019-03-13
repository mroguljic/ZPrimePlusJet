#! /bin/bash

tag="fulldatasettrigger"
ddtAK8="data/Output_v4.root"
ddtCA15="data/OutputCA152017v4.root"
split=30
python submitHists.py --isData --split ${split} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigger Mu --control
python submitHists.py --isData --split ${split} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigger HT --control