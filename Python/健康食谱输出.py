# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 7:25
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 健康食谱输出.py
# @Software  : PyCharm
# Here We Go!

diet=["aa","bb","cc","dd","ee"]
for i in range(0,5):
    for j in range(0,5):
        if not (i==j):
            print("{}{}".format(diet[i],diet[j]))