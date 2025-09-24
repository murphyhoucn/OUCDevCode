# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 23:28
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 使用任意数量的关键字实参.py
# @Software  : PyCharm
# Here We Go!
def build_profile(first,last,**user_info):
    # **user_info 两个*是让PYTHON创建一个空的字典
    """创建一个字典，其中包含我们知道的有关用户的一切"""
    user_info['firt_name']=first
    user_info['last_name']=last
    return user_info

user_profile=build_profile('dawda','dadaw',location='dawdwadadaw',filld='gafawdwawdfa')

print(user_profile)