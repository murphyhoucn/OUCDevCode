# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 23:23
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 结合使用位置实参和任意数量的实参.py
# @Software  : PyCharm
# Here We Go!
# 如果要让函数接受不同类型的实参，必须在函数定义中，将接纳任意数量的实参的形参放到最后

def make_pizza(size,*toppings):
    """ zhi zuo pizza"""
    print(f"\nmakeing a {size}-inch pizza with the following toppings:")
    for topping in toppings:
        print(f"-{topping}")


make_pizza(6,'dwadada')
make_pizza(8,'dawdawd','fgafgadaw','fawadawfartbhfgyjr6')