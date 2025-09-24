# -*- coding : utf-8 -*-
# @Time      : 2020/11/15 22:37
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建用户类.py
# @Software  : PyCharm
# Here We Go!
class User:
    '''这是一个用户类'''
    def __init__(self,firstname,lastname):
        '''初始化参数'''
        self.user_firstname=firstname
        self.user_lastname=lastname
    def describe_user(self):
        print(f"{self.user_firstname}")
        print(f"{self.user_lastname}")
    def greet_user(self):
        print(f"hello mr.{self.user_lastname}")

china_user=User('li','san')

china_user.describe_user()
china_user.greet_user()