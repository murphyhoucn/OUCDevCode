# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:24
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 存储数据.py
# @Software  : PyCharm
# Here We Go!

import json

number=[2,3,5,7,11,13]

filename='documents operation/number.json'

with open(filename,'w',encoding='utf-8') as file_object_w:
    json.dump(number,file_object_w)