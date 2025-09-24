# -*- coding : utf-8 -*-
# @Time      : 2020/12/26 15:27
# @Author    : MurphyHou
# @Proj_Name : Doc_Operation.py
# @File_Name : main.py
# @Software  : PyCharm
# Here We Go!

def count_word():
    count = {}
    keys = []
    with open("Little_Prince.txt",'r')as fp:
        lines = fp.readlines()
    for line in lines:
        first_word = line.split(' ')[0]
        if first_word not in keys:
            keys.append(first_word)
    count = count.fromkeys(keys,0)
    print(count)
    for line in lines:
        first_word = line.split(' ')[0]
        count[first_word] +=1
    print(count)




count_word()




