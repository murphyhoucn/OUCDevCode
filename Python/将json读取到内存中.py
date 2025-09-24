# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:34
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 将json读取到内存中.py
# @Software  : PyCharm
# Here We Go!

import json

filename='documents operation/number.json'

with open(filename,'r',encoding='utf-8') as file_object_r:
    num=json.load(file_object_r)

    print(num)