# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:39
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : remember_me.py
# @Software  : PyCharm
# Here We Go!

import json

username=input("input your name:")

filename='documents operation/username.json'

with open(filename,'w',encoding='utf-8') as file_object_w:
    json.dump(username,file_object_w)

    print(f"we will remember you whe-afaawawf   {username}")