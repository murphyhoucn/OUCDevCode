# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 23:17
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 列表作为字典的值.py
# @Software  : PyCharm
# Here We Go!
favourite_languages=\
    {
        'jen':['python','C'],
        'sarag':['C'],
        'edward':['ruby','go'],
        'pjil':['python','C++']
    }


for name,languages in favourite_languages.items():
    print(f"\n{name.title()}'s favourite language are :")
    for language in languages:
        print(f"\t{language.title()}")