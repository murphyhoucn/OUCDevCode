# -*- coding : utf-8 -*-
# @Time      : 2020/11/20 23:27
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : my_car.py
# @Software  : PyCharm
# Here We Go!

from car import Car

my_new_car=Car('audi','di',20001)
print(my_new_car.get_descriptive_name())

my_new_car.odometer=23
my_new_car.read_odometer()
