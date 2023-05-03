# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import pandas as pd

path = 'D:\Temp\OUC\shuji\\'
filename = "5yinyue"
format1 = '.csv'
format2 = '.txt'


print(path+filename)
with open(path+filename+format1,'r',encoding='gbk') as f:
    data = pd.read_csv(f)
    comment_data = data[['yinyuepinglun']]
    print(data[['yinyuepinglun']])
    with open(path+filename+format2,'a+',encoding='gbk') as ft:
        for line in comment_data.values:
            str1 = ''.join(line)
            print(str1)
            ft.write(str1 + '\n')