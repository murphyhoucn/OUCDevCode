# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 23:01
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建一个用于存储外星人的列表.py
# @Software  : PyCharm
# Here We Go!
aliens=[]

for alien_number in range (30):
    new_alien={'color':'green','points':5,'speed':'slow'}
    aliens.append(new_alien)

for aline in aliens[:5]:
    print(aline)

print("..                                                                           ....")

print(f"the total number of the aline is {len(aliens)}")