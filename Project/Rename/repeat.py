# -*- coding : utf-8 -*-
# Time       : 2021/5/22 19:21
# Author     : MurphyHou
# Proj_Name  : Python_Project
# File_Name  : repeat.py
# Software   : PyCharm
# =======Here We Go!=======

print("tips:该文件是重复输出需要的内容，以求得开发效率得到提高")
number=eval(input("请输入需要输出的次数："))
# string=input("请输入需要重复输出的内容:")
string='https://gitee.com/murphyhou/picgo/raw/master/ML/'
file_format='.JPG'
name=input("请输入名字:")
for i in range (1,number+1):
    print('!['+name+str(i)+']('+string+name+str(i)+file_format+')')