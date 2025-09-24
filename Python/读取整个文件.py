# -*- coding : utf-8 -*-
# @Time      : 2020/11/21 23:16
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 读取整个文件.py
# @Software  : PyCharm
# Here We Go!

with open('documents operation/test.txt') as file_object:
    # 在显示文件路径时，windows使用\（反斜杠）而不是/（斜杠），
    # 但在代码中仍然可以使用斜杠
    contents=file_object.read()

#     read
print(contents)
print(contents.rstrip())

