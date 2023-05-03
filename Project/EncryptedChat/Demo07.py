# -*- coding : utf-8 -*-
# Time       : 2021/8/11 22:14
# Author     : MurphyHou
# Proj_Name  : encrypt
# File_Name  : Demo07.py
# Software   : PyCharm
# =======Here We Go!=======

import pyperclip
# b=input()
a=pyperclip.paste()
a=a.replace('\n', '').replace('\r', '').replace(' ','')
print(a)

with open("encryptdata.txt", "w") as bankdata:
    bankdata.write(a)


# print("WZsgi/afntwxnfrnSFHtUvjxFCp4GNcFiLqaNCB4jN/DUO8jMhqxPZlTBnRIjCoo1KHHEDDQLkHUxTO4OsoBTAOwrrqMQyktJmMvI1mIzuCgL1mY9uz1D3/QGaAsLE7uEekqy3S4lQ08RIj0eshdjebmUjcCAn9sl2NYNX9Sl7bNe+B8l3bcZpdjMT+b3uSn8IhxYeCeK/LsU0w7RCcy5nZ2IJWdhRnSqiQuKTb6CbrEE7j+fTSmLlTAEaxrav61Q==")
