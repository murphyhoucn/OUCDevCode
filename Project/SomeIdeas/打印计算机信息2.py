# -*- coding : utf-8 -*-
# Time      : 2021/4/1 16:05
# Author    : MurphyHou
# Proj_Name : Test_Project
# File_Name : 打印计算机信息2.py
# Software  : PyCharm
# Here We Go!





import uuid
import platform

# =======================================================================
# 获取mac地址
addr_num = hex(uuid.getnode())[2:]
mac = "-".join(addr_num[i: i + 2] for i in range(0, len(addr_num), 2))
print("MAC地址:"+mac)

# 获取本机所有网卡的mac地址

# from psutil import net_if_addrs
#
# for k, v in net_if_addrs().items():
#     for item in v:
#         address = item[1]
#         if "-" in address and len(address) == 17:
#             print(address)
# =======================================================================

# 获取ip地址
import socket
# 但是要先获取计算机名
name = socket.gethostname()
# 然后通过计算机名获取ip
ip = socket.gethostbyname(name)
print("ip地址："+ip)

# =======================================================================


print("操作系统类型：" + platform.system()) #获取操作系统类型
print("操作系统名称及版本号:" + platform.platform())  #获取操作系统名称及版本号
print("操作系统的位数:" + str(platform.architecture())) #获取操作系统的位数
print("计算机类型：" + platform.machine()) #获取计算机类型
print("计算机网络名称：" + platform.node()) #获取计算机网络名称
print("计算机处理器名称：" + platform.processor()) #获取计算机处理器名称
# print("汇总以上信息:" + str(platform.uname())) #汇总以上信息

# =======================================================================
