# -*- coding: utf-8 -*-
# @Time      : 2020/10/20 22:29
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 在字符串中使用变量.py
# @Software  : PyCharm
# Here We Go!
first_name="ada"
last_name="lovelace"

full_name1= f"{first_name} {last_name}"
print(full_name1)

full_name2= "{first_name} {last_name}"
print(full_name2)

print(f"hello,{first_name} {last_name}!")

print(f"hello ,{full_name1.title()}!")

message=f"hello {full_name1}!"
print(message)

message2="message2=={} {}".format(first_name,last_name)
print(message2)