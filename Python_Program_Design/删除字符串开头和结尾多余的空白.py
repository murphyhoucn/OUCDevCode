# -*- coding: utf-8 -*-
# @Time      : 2020/10/20 22:42
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 删除字符串开头和结尾多余的空白.py
# @Software  : PyCharm
# Here We Go!
message1="   python    1   00  "
message1=message1.rstrip()
print(message1)

message2="   python    2   00  "
message2=message2.lstrip()
print(message2)

message3="   python    3   00  "
message3=message3.strip()
print(message3)