# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:42
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : grreet_user.py
# @Software  : PyCharm
# Here We Go!

import json

filename='documents operation/username.json'


with open(filename,'r',encoding='utf-8') as file_object_r:
    username=json.load(file_object_r)

    print(f"hello {username}")