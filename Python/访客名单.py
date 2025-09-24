# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 22:47
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 访客名单.py
# @Software  : PyCharm
# Here We Go!

flag=True

filename="documents operation/guest_list.txt"

with open (filename,'w') as file_object:

    while flag:
        name=input("input your name:")
        if name=='quit':
            flag=False
            break
        else:
            file_object.write(name+'\n')

