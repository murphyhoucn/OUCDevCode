# -*- coding : utf-8 -*-
# Time       : 2021/5/24 19:53
# Author     : MurphyHou
# Proj_Name  : Python_Project
# File_Name  : rename_no_function.py
# Software   : PyCharm
# =======Here We Go!=======

import os
# os 顾名思义，就是与操作系统相关的标准库。如：文件，目录，执行系统命令等。
import numpy as  np
# NumPy(Numerical Python) 是 Python 语言的一个扩展程序库，支持大量的维度数组与矩阵运算，此外也针对数组运算提供大量的数学函数库。

print("该程序会把某一个路径下的所有的某一种文件格式重命名为相同类型的命名格式！")

# 求路径的集合
c = input("请输入需要重命名的文件分布的文件夹在多个还是一个（D/S）：")
c=c.upper()


if c == 'S':
    num_file=1
    # 如果无需要命名的文件都在同一个文件夹中
    path = input("请输入文件的地址:")
    # print(path)   #字符串
    path = [path]
    # print(path)   #以字符串为元素的列表

elif c == "D":
    # 如果我需要命名的文件分布在不同文件夹中
    num_file = eval(input("请输入需要重命名的文件分布的文件夹的个数："))
    path = []
    for i in range(num_file):
        path.append(input("请输入文件的地址:"))
    # print(path)
else:
    print("!!!!!!!error")
    exit()


# 这一部分是重命名文件
rename_style = input("请输入你需要的文件的重命名的前缀（例如：5_20_s）:")
file_format = input("请输入你想要修改的文件的格式(例如：.jpg):")

for j in range(num_file):
    filelist = os.listdir(path[j])
    total_num = len(filelist)
    # print(total_num)
    i = 0
    for item in filelist:
        if item.endswith(file_format):
            src = os.path.join(os.path.abspath(path[j]), item)
            dst = os.path.join(os.path.abspath(path[j]), rename_style + str(i) + file_format)
            try:
                os.rename(src, dst)
                print('converting %s to %s ...' % (src, dst))
                i = i + 1
            except:
                continue

    print('total %d to rename & converted %d %s' % (total_num, i, file_format))
    # print('i = %d'%(i))