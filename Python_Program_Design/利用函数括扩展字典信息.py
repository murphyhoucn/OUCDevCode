# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 22:16
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 利用函数括扩展字典信息.py
# @Software  : PyCharm
# Here We Go!
def built_person(first_name,last_name,age=None):
    person={'first':first_name,'last':last_name}
    if (age):
        person['age']=age
    return person

musician=built_person('sss','faweaw')
print(musician)
musician=built_person('sss','faweaw',50)
print(musician)
