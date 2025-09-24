# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 23:10
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 列表间信息的传递.py
# @Software  : PyCharm
# Here We Go!
def trans(array1,array2):
    while array1:
        temp=array1.pop()
        array2.append(temp)

a1=['1dawa','2dawda','3fgaefgafw','4fawdfaw']
a2=[]

trans(a1,a2)

for i in a2:
    print(i)