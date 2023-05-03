# -*- coding : utf-8 -*-
# Time      : 2021/3/22 22:22
# Author    : MurphyHou
# Proj_Name : MYQR
# File_Name : myqr_demo.py
# Software  : PyCharm
# Here We Go!

from MyQR import myqr
myqr.run\
        (
        words=input("请输入二维码所包含内容(不能包含中文字符)："),
        version=20,
        level='H',
        picture = input("请输入图片地址："),
        colorized = True,
        save_dir = input("请输入生成图片所保存的地址：")

)