# -*- coding : utf-8 -*-
# Time       : 2021/5/22 19:21
# Author     : MurphyHou
# Proj_Name  : Python_Project
# File_Name  : repeat.py
# Software   : PyCharm
# =======Here We Go!=======

print("tips:该文件是重复输出需要的内容，以求得开发效率得到提高")
number=eval(input("请输入需要输出的次数："))
string=input("请输入需要重复输出的内容:")
change=input("请输入重复内容中需要变动的部分(eg:5_20_s)：")
file_format=input("请输入需要变更的部分的后缀（eg:.jpg）:")
for i in range (number):
    print(string+change+str(i)+file_format+'">')