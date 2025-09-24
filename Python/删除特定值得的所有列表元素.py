# -*- coding : utf-8 -*-
# @Time      : 2020/11/11 23:14
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 删除特定值得的所有列表元素.py
# @Software  : PyCharm
# Here We Go!
pets=['dog','cat','dog','goldfish','cat','rabbit','cat']
print(pets)

while ('cat' in pets):
    pets.remove('cat')

print(pets)