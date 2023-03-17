# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 22:30
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : random.py
# @Software  : PyCharm
# Here We Go!
from random import random
from math import sqrt
from time import perf_counter

darts=1000
hits=0.0
perf_counter()
for i in range(1,darts+1):
    x,y=random(),random()
    dist=sqrt(x**2+y**2)
    if hits<=1.0:
        hits+=1
pi=4*(hits/darts)
print("pi={}.".format(pi))
print("the running time is {:.5f}.".format(perf_counter()))