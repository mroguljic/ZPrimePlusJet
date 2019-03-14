#Instructions to create histograms for control plots and input templates with condor at lpc

Submission summarized in `submit_condor`. Main script is `zqq_create.py`. 

Create json with samples defined in `zqq_files`
```python write_json.py```

Always compress `data/` dir to send it along with files (need to do this only when modifying input data files.

Make sure your prxy is intialized before submitting. Also modify eos output dir in `zqq_submit.py`

`zqq_create.py` uses funtions in `zqq_utils` and configs in `zqq_config`. `zqq_submit.py` submits condor jobs in queue.

To submit trigger selection e.g.:
````
python zqq_submit.py --isData --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigger --control --trigmap htmu2017 # this is HT+Mu triggers
python zqq_submit.py --isData --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigger --control --trigmap mu2017 # this is reference trigger
````

To submit control plots e.g.:
```
python zqq_submit.py --isMc --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --control --trigmap ht2017
python zqq_submit.py --isData --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --control --trigmap ht2017
python zqq_submit.py --isSig --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --control --trigmap ht2017
python zqq_submit.py --isQCD --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --control --trigmap ht2017
```

To submit input hists e.g.:
```
python zqq_submit.py --isMc --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8}  --trigmap ht2017
python zqq_submit.py --isData --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigmap ht2017
python zqq_submit.py --isSig --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigmap ht2017
python zqq_submit.py --isQCD --nsplit ${nsplit} --tag ${tag} --jet AK8 --ddt ${ddtAK8} --trigmap ht2017
```

MuonCR is added by `--isMuonCR` which automatically should pick up the muon dataset.

To add the histograms use `--hadd ` on top of submission command.