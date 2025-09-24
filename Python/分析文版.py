# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:09
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 分析文版.py
# @Software  : PyCharm
# Here We Go!

filename='test_passage'

with open (filename,'w',encoding='utf-8') as w_file_object:
    w_file_object.write(""
                       "Almost every child will complain about their parents sometimes. "
                       "It is natural, because when people stay together for a long time, "
                       "they will start to have argument. "
                       "But ignore about the unhappy time, "
                       "our parents love us all the time. "
                       "No matter what happen to us, "
                       "they will stand by our sides. "
                       "We should be grateful to them and try "
                       "to understand them.")

try:
    with open(filename,'r',encoding='utf-8') as r_file_object:
        cons=r_file_object.read()
except FileNotFoundError:
    print("not found the file")
else:
    worlds=cons.split()
    num_worlds=len(worlds)
    print(f"the num of the passage is {num_worlds}")