# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 22:32
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 遍历字典中所有的键2.py
# @Software  : PyCharm
# Here We Go!
favorite_languages=\
    {
        'jen':'python',
        'sarah':'C',
        'deward':'ruby',
        'phil':'python'
    }

friends=['phil','sarah','jen','ssss']

for name in friends:
    print(f"hi {name.title()}")

    if name in favorite_languages.keys():
        language=favorite_languages[name].title()
        print(f"\t{name.title()},i see you love {language}")