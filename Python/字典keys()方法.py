# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 22:36
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 字典keys()方法.py
# @Software  : PyCharm
# Here We Go!

favorite_languages=\
    {
        'jen':'python',
        'sarah':'C',
        'deward':'ruby',
        'phil':'python'
    }

friends=['na','sss','jen']

for name in friends:
    if name in favorite_languages.keys():
        print(f"\thi {name},your favourite language is {favorite_languages[name].title()}")
    else:
        print(f"{name} please take our poll!")