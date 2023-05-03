# 统计观众在五个分区重复次数

``` markdown
1.在python中打开导出的csv文件
1.读取csv文件中观众id并保存到列表
2.对各个分区观众id去重
3.将各个分区观众id保存到列表中
4.循环遍历输出重复观众数
```

``` bash
[鬼畜区，科技区，美食区，舞蹈区，音乐区]

出现在两个区的B站用户的数量：100
略……


出现在三个区的B站用户的数量：2
周美灵是我大姐头——[1, 1, 0, 1, 0]——3
smoker木星——[1, 0, 1, 1, 0]——3

```



源代码：

``` python
# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import pandas as pd
import numpy as np
data = pd.read_csv(r'D:\Temp\OUC\shuji\quanbuguanzhong.csv', encoding = "gbk")
# print(data.columns)#获取列索引值
# print(data.index)#获取行索引值
data1  = data['guanzhong'] #获取名字为flow列
data_list = data1.values.tolist()#将csv文件中flow列中的数据保存到列表中

# print("===============================================================================================")
# print(data)
# print("===============================================================================================")
# print(data_list)
# print("======================================没有去重=====================================================")
# print(len(data_list))

# list 去重
# print("==========================================去重=====================================================")
data_list_quchong = list(set(data_list))
# print(len(data_list_quchong))
# print("==================================================================================================")

guanzhongdic = {}
guanzhongdic = guanzhongdic.fromkeys(data_list_quchong)

# print("**************************************************************************************************")
# print(guanzhongdic)
# print("**************************************************************************************************")
# print(guanzhongdic.keys())
for k in guanzhongdic.keys():
    guanzhongdic[k]=[0, 0, 0, 0, 0]

# print(guanzhongdic)

data11 = pd.read_csv(r'D:\Temp\OUC\shuji\guanzhong.csv', encoding = "gbk")

guichuguanzhong  = data11['guichuguanzhong'] #获取名字为flow列
kejiguanzhong  = data11['kejiguanzhong'] #获取名字为flow列
meishiguanzhong  = data11['meishiguanzhong'] #获取名字为flow列
wudaoguanzhong  = data11['wudaoguanzhong'] #获取名字为flow列
yinyueguanzhong  = data11['yinyueguanzhong'] #获取名字为flow列

guichuguanzhong_list = guichuguanzhong.values.tolist()#将csv文件中flow列中的数据保存到列表中
kejiguanzhong_list = kejiguanzhong.values.tolist()#将csv文件中flow列中的数据保存到列表中
meishiguanzhong_list = meishiguanzhong.values.tolist()#将csv文件中flow列中的数据保存到列表中
wudaoguanzhong_list = wudaoguanzhong.values.tolist()#将csv文件中flow列中的数据保存到列表中
yinyueguanzhong_list = yinyueguanzhong.values.tolist()#将csv文件中flow列中的数据保存到列表中

# print("===============================================================================================")
# print("===============================================================================================")
# print("===============================================================================================")
# print(guichuguanzhong_list)
# print("===============================================================================================")
# print(kejiguanzhong_list)
# print("===============================================================================================")
# print(meishiguanzhong_list)
# print("===============================================================================================")
# print(wudaoguanzhong_list)
# print("===============================================================================================")
# print(yinyueguanzhong_list)
# print("===============================================================================================")
# print("===============================================================================================")
# print("===============================================================================================")
for k, v in guanzhongdic.items():
    if k in guichuguanzhong_list:
        guanzhongdic[k][0] += 1

for k, v in guanzhongdic.items():
    if k in kejiguanzhong_list:
        guanzhongdic[k][1] += 1

for k, v in guanzhongdic.items():
    if k in meishiguanzhong_list:
        guanzhongdic[k][2] += 1

for k, v in guanzhongdic.items():
    if k in wudaoguanzhong_list:
        guanzhongdic[k][3] += 1

for k, v in guanzhongdic.items():
    if k in yinyueguanzhong_list:
        guanzhongdic[k][4] += 1

# for k, v in guanzhongdic.items():
#   print(f"{k}-{v}\n")

print("==================两个区==================")
count = 0
for k, v in guanzhongdic.items():
    if sum(guanzhongdic[k]) == 2:
        count += 1
        print(f"{k}——{v}——{sum(guanzhongdic[k])}")
print(f"出现在两个区的B站用户的数量：{count}")
print()

print("==================三个区==================")
count = 0
for k, v in guanzhongdic.items():
    if sum(guanzhongdic[k]) == 3:
        count += 1
        print(f"{k}——{v}——{sum(guanzhongdic[k])}")
print(f"出现在三个区的B站用户的数量：{count}")
print()

print("==================四个区==================")
count = 0
for k, v in guanzhongdic.items():
    if sum(guanzhongdic[k]) == 4:
        count += 1
        print(f"{k}——{v}——{sum(guanzhongdic[k])}")
print(f"出现在四个区的B站用户的数量：{count}")
print()

print("==================五个区==================")
count = 0
for k, v in guanzhongdic.items():
    if sum(guanzhongdic[k]) == 5:
        count += 1
        print(f"{k}——{v}——{sum(guanzhongdic[k])}")
print(f"出现在五个区的B站用户的数量：{count}")
print()
```

