# -*- coding : utf-8 -*-
# @Time      : 2020/11/12 7:04
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 关键字实参.py
# @Software  : PyCharm
# Here We Go!
def describe_pet(animal_type,pet_name):
    '''describe the information of the pets'''
    print(f"\ni have a {animal_type}")
    print(f"my {animal_type}'s name is {pet_name}")


describe_pet(pet_name="ssss",animal_type="qqqq")


describe_pet(animal_type="qqqqq",pet_name="ssssssss")