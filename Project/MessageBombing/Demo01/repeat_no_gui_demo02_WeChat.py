# -*- coding : utf-8 -*-
# Time       : 2021/9/11 23:08
# Author     : MurphyHou
# Proj_Name  : Repeat
# File_Name  : repeat_no_gui_demo02_Wechat.py
# Software   : PyCharm
# =======Here We Go!=======
import sys

import win32gui
import win32con
import win32clipboard as w
import  time

import os
os.environ["CUDA_VISIBLE_DEVICES"] = "-1"


def get_all_hwnd(hwnd, mouse):
    if win32gui.IsWindow(hwnd) and win32gui.IsWindowEnabled(hwnd) and win32gui.IsWindowVisible(hwnd):
        hwnd_title.update({hwnd: win32gui.GetWindowText(hwnd)})

def start(name,n,msg,handle0):

    # 将消息复制到剪切板中
    # 发送的消息
    w.OpenClipboard()
    #打开剪切板
    w.EmptyClipboard()
    #清空剪切板
    w.SetClipboardData(win32con.CF_UNICODETEXT, msg)
    #将msg设置给剪切板
    w.CloseClipboard()
    #关闭剪切板

    handle = handle0
    # print(handle)
    # 根据对方昵称获取窗口句柄
    win32gui.SendMessage(handle, win32con.WM_PASTE, 0, 0)
    # 将剪切板内容填充消息。
    win32gui.SendMessage(handle, win32con.WM_KEYDOWN, win32con.VK_RETURN, 0)
    # 按下回车发送消息
if __name__ == '__main__':
    name=input("请输入对方备注：")
    n=input("请输入发送的次数（-1表示无穷次）：")
    msg=input("请输入发送的内容：")



    # 获取所有标签的handle
    hwnd_title = dict()
    win32gui.EnumWindows(get_all_hwnd, 0)

    for h, t in hwnd_title.items():
        if t != "\0":
            # print(h, t)

            if t == name:
                handle=h




    print("开始")
    print("输入的信息如下：")
    print("昵称:" + name)
    print("内容:" + msg)

    count=0
    n=int(n)

    if n==-1:

        while True:
            start(name,n,msg,handle)
            count+=1
            time.sleep(0.1)

            if (count%10==0):
                print("已发送次数：{}".format(count))

    else:
        while n!=0:
            n-=1
            start(name,n,msg,handle)
            count+=1
            time.sleep(0.1)

            if (count%10==0):
                print("已发送次数：{}".format(count))