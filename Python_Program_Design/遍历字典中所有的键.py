# -*- coding : utf-8 -*-
# @Time      : 2020/11/6 22:49
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 遍历字典中所有的键.py
# @Software  : PyCharm
# Here We Go!

favorite_languages=\
    {
        'jen':'python',
        'sarah':'C',
        'deward':'ruby',
        'phil':'python'
    }

for name in favorite_languages.keys():
    print(name.title())