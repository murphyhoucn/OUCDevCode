# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 22:40
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 写入多行.py
# @Software  : PyCharm
# Here We Go!

filename="documents operation/write_lines.txt"

with open(filename,'w') as file_object:
    file_object.write("adwadadw\n")
    file_object.write("fgfawdwa\n")