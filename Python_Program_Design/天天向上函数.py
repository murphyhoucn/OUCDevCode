# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 12:48
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 天天向上函数.py
# @Software  : PyCharm
# Here We Go!
def dayUP(df):
    dayup = 1.0
    for i in range(365):
        if i % 7 in [6, 0]:
            dayup = dayup * (1 - 0.01)
        else
            dayup = dayup * (1 + df)
    return dayup


dayfactor = 0.01
while dayUP(dayfactor) < 37.78:
    dayfactor += 0.001
print("{:.3f}".format(dayfactor))
