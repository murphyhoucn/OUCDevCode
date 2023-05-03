# -*- coding : utf-8 -*-
# Time       : 2021/5/13 10:04
# Author     : MurphyHou
# Proj_Name  : crawler_pic
# File_Name  : learn_1.py
# Software   : PyCharm
# =======Here We Go!=======

import requests


response =requests.get("https://murphyhou0928.github.io/")
print(response.text)
