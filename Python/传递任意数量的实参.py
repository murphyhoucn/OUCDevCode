# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 23:16
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 传递任意数量的实参.py
# @Software  : PyCharm
# Here We Go!
def make_pizza(*toppings):
    """da yin cai pu"""
    print(toppings)

# 形参*toppings中的*让Python创建一个名为toppings的元组，并将收到的所有的值都
# 封装到这个元组中

make_pizza("peadwa")
make_pizza("dawda","dawdawd","dawafgafagdg")