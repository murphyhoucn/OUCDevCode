# -*- coding : utf-8 -*-
# @Time      : 2020/11/9 23:06
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 创建一个用于存储外星人的列表2.py
# @Software  : PyCharm
# Here We Go!
aliens=[]

for alien_number in range (30):
    new_alien={'color':'green','points':5,'speed':'slow'}
    aliens.append(new_alien)


for alien in aliens[:10]:
    if alien['color']=='green':
        alien['color']='yellow'
        alien['points']=10
        alien['speed']='medium'
    else:
        alien['color']='red'
        aline['speed']=fast
        alien['points']=100

for alien in aliens[:20]:
    print(alien)