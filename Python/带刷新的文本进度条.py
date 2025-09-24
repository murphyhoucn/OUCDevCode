# -*- coding: utf-8 -*-
# @Time      : 2020/10/16 14:27
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 带刷新的文本进度条.py
# @Software  : PyCharm
# Here We Go!

import time
scale = 50
print("start".center(scale//2, '-'))
t = time.perf_counter()
for i in range(scale + 1):
    a = '*'*i
    b = '.'*(scale-i)
    c = (i/scale)*100
    t -= time.perf_counter()
    print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(c, a, b, -t), end='')
    time.sleep(0.2)
print("\n"+"end".center(scale//2, '-'))