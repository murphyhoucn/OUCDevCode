# -*- coding : utf-8 -*-
# @Time      : 2020/10/22 7:43
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 嘉宾名单.py
# @Software  : PyCharm
# Here We Go!
name=["hh","jj","ll"]
print(name)


absence_name=name.pop(1)
print(absence_name)
name[1]="zz"
print(name)

name.insert(0,"aa")
name.insert(2,"bb")
name.append("cc")
print(name)

a=name.pop()
print(f"i am sorry,{a}")
b=name.pop()
print(f"i am sorry,{b}")
c=name.pop()
print(f"i am sorry,{c}")
print(name)
present_name1=name[0]
print(f"hello,{present_name1}")
present_name2=name[1]
print(f"hello,{present_name2}")

del name[0]
del name[0]

print(f"array:{name}")