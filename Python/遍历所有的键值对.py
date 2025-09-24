# -*- coding : utf-8 -*-
# @Time      : 2020/11/6 22:24
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 遍历所有的键值对.py
# @Software  : PyCharm
# Here We Go!
user=\
    {
        'username':'efermi',
        'first':'enrico',
        'last':'fermi'
    }
for key,value in user.items():
    print(f"\nkey:{key}")
    print(f"\nvale:{value}")