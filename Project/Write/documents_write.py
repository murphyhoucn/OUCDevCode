# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 22:20
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 写入空文件.py
# @Software  : PyCharm
# Here We Go!

a=0
while (a<1000):
    filename='D:/我是猪（'+str(a)+'）.txt'
    with open(filename,'w') as file_object:
        file_object.write("我是猪.")
    a+=1


