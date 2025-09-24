# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 23:02
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 在循环中使用continue.py
# @Software  : PyCharm
# Here We Go!
current_number=0
while (current_number<10):
    current_number+=1

    if (current_number%2==0):
        continue
    print(current_number)