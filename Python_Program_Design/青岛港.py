class my_class(object):
    pass


# 模拟青岛港运作系统

# 第一部分——码头基础设施
from random import *

dock = [i for i in range(16)]
dock.pop(0)  # 所有的编号为1-15
s = [i for i in dock if i == 1 or (i - 1) % 3 == 0]  # s是固体原料类的货物泊位
l = [i for i in dock if i == 2 or (i - 2) % 3 == 0]  ##l是液体原料类的货物泊位
c = [i for i in dock if i % 3 == 0]  # c是集装箱货物泊位
##print(s,l,c)
##print(dock) 
randomness = randint(0, 15)  # 随机确定15个泊位中可用的数量
dodock = sample(dock, int(randomness))  # 从15个泊位中随机挑出可用的码头来
##print(dodock)


# 第二部分——运作原理
# rank 指的是吨位 决定最终去哪个码头
dock1 = "12345"
dock2 = "ABCDE"
dock0 = dict(zip(dock1, dock2))
##print(dock0)


# 状态：空还是满
state1 = {"0": "load", "1": "unload"}

# 第三部分——港口运作过程
# 让来的货船的船长输入自己的编号，对编号切片，查出货船的性质，从而安排货船去哪个码头，哪个泊位
print("Your freighter ID consists of two English characters and six Arabic numerals")
print()
print("An example: CN250011 \n\
CN:your freighter is form China.\n\
25:your weight is 250 thousand tons\n\
 1:you come here to unload you cargo")
print()
print("001:Solid raw materials")
print("002:Liquid or Gas raw materials")
print("003:TEU")
print()
print("0:empty")
print("1:full")
print()
ID = input("Welcome to Qingdao Port! Please input your freighter ID:")
# ID0=list(ID)


country = ID[0:2]
rank = ID[2:4]
type0 = ID[4:7]
state = ID[7]

# 判断是什么状态
rank0 = ''
state0 = ''
if int(state) == 0:
    state0 = '0'
if int(state) == 1:
    state0 = '1'

# 货船超过了码头最大的容纳量，拒绝进入码头
if int(rank) > 50:
    print()
    print("*************************************************************************************")
    print("Your freighter is so heavy and big that the Qingdao Port can not accept you.\n\
You can go to Shanghai Port or Ningbo Port to unload your content\n\
Sorry for any incovenience.")
    print("**************************************************************************************")
    print()
if int(rank) <= 0 or int(type0) > 3 or int(state) > 1:
    print()
    print("**************************************************************************************")
    print("Your freighter ID is wrong")
    print("**************************************************************************************")
    print()


# 货船没有超出容纳量，在进一步判断是多少吨位级别的，从而安排哪一 rank 的码头
else:
    if int(rank) <= 5:
        rank0 = '1'
        dodock1 = [i for i in range(1, 4)]
    elif int(rank) <= 10:
        rank0 = '2'
        dodock1 = [i for i in range(4, 7)]
    elif int(rank) <= 20:
        rank0 = '3'
        dodock1 = [i for i in range(7, 10)]
    elif int(rank) <= 30:
        rank0 = '4'
        dodock1 = [i for i in range(10, 13)]
    elif int(rank) <= 50:
        rank0 = '5'
        dodock1 = [i for i in range(13, 17)]
if rank0 != '':
    rank1 = dock0[rank0]
    state2 = state1[state0]

    # 判断是哪一种类型的货物，从而安排泊位
    dodock2 = []
    if int(type0) == 1:
        dodock2 = dodock1[0]

    elif int(type0) == 2:
        dodock2 = dodock1[1]

    elif int(type0) == 3:
        dodock2 = dodock1[2]

    ##    print(dodock2)

    # 如果没有可用的泊位，则需要船长排队等待一会儿
    if dodock2 not in dodock:
        print()
        print("***************************************************************************************")
        print("The Dock {} -Berth {} is unavailable because it is being occupied by another freighter.\n\
Please wait a moment.Sorry for any incovenience.".format(rank1, dodock2))
        print("***************************************************************************************")
        print()
        import time

        s = 10
        print("————Please wait a moment————")
        for i in range(s + 1):
            a, b = '**' * i, '..' * (s - i)
            c = (i / s) * 100
            print("%{:^3.0f}[{}->{}]".format(c, a, b))
            time.sleep(1)
        print("—————--—ALDEAY—--——————")
        print()
        print("****************************************************************************************")
        print(" Welcome the captain and sailors from  {}  \
to come to Qingdao Port,welcome!!! \n \
Please wait a minute the extradition of the \
ship will take you and your freighter to the \
Dock {} -Berth {}.\n The cargo will be {} \
there.\n Have a good time! ".format(country, rank1, dodock2, state2))
        print("****************************************************************************************")
        print()

    if dodock2 in dodock:
        print()
        print("****************************************************************************************")
        print(" Welcome the captain and sailors from  {}  \
to come to Qingdao Port,welcome!!! \n \
Please wait a minute the extradition of the \
ship will take you and your freighter to the \
Dock {} -Berth {}.\n The cargo will be {} \
there.\n Have a good time! ".format(country, rank1, dodock2, state2))
        print("****************************************************************************************")
        print()

import time

s = 10
print("————Please wait a moment————")
for i in range(s + 1):
    a, b = '**' * i, '..' * (s - i)
    c = (i / s) * 100
    print("%{:^3.0f}[{}->{}]".format(c, a, b))
    time.sleep(1)
print("—————--—ALDEAY—--——————")
print()
print("Loading or unloading is completed")
print()
print("Now you can leave the Qingdao Port.\nMay you be safe throughout the journey")
