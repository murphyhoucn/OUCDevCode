# -*- coding : utf-8 -*-
# @Time      : 2020/11/26 23:16
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用多个文件.py
# @Software  : PyCharm
# Here We Go!

def counts_worlds(filename0):
    filename = 'documents operation/'+filename0

    try:
        with open(filename, 'r', encoding='utf-8') as r_file_object:
            cons = r_file_object.read()
    except FileNotFoundError:
        # print("not found the file")
        pass
    # 静默失败
    else:
        worlds = cons.split()
        num_worlds = len(worlds)
        print(f"the num of the passage is {num_worlds}")



filenames=['guest_hhh.txt','123.txt','test.txt','write_lines.txt']

for fn in filenames:
    counts_worlds(fn)
