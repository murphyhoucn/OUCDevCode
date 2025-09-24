# -*- coding : utf-8 -*-
# @Time      : 2020/11/12 7:06
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 编写函数时可给每个形参指定默认值.py
# @Software  : PyCharm
# Here We Go!

def describe_pet(animal_type,pet_name="dog"):
    '''describe the information of the pets'''
    print(f"\ni have a {animal_type}")
    print(f"my {animal_type}'s name is {pet_name}")


describe_pet(pet_name="ssss",animal_type="qqqq")


describe_pet("qqqq")

describe_pet(animal_type="qqqq")