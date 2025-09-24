# -*- coding : utf-8 -*-
# @Time      : 2020/11/12 7:17
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 增强型T恤.py
# @Software  : PyCharm
# Here We Go!
def make_shirt(size,words="i love python"):
    print(f"size:{size}\nwords:{words}")
i=0
while (i<2):

    size=input("input the sieze:")
    words=input("input the words")
    i+=1

make_shirt(size,words)
# 疑问：有没有办法让第一次words不输入值，从而调用默认参数
# 第二次输入words的值，输出参数值