# -*- coding : utf-8 -*-
# Time       : 2021/9/11 22:38
# Author     : MurphyHou
# Proj_Name  : Repeat
# File_Name  : repeat_no_gui.py
# Software   : PyCharm
# =======Here We Go!=======

import sys

import win32gui
import win32con
import win32clipboard as w
import  time

import os
os.environ["CUDA_VISIBLE_DEVICES"] = "-1"

def start(name,n,msg):
    print("开始")
    print("输入的信息如下：")
    print("昵称:" + name)
    print("次数:" + n)
    print("内容:" + msg)
    n=int(n)
    # 将消息复制到剪切板中
    count=0;
    if n==-1:
        while True:
            # 发送的消息
            w.OpenClipboard()
            #打开剪切板
            w.EmptyClipboard()
            #清空剪切板
            w.SetClipboardData(win32con.CF_UNICODETEXT, msg)
            #将msg设置给剪切板
            w.CloseClipboard()
            #关闭剪切板

            handle = win32gui.FindWindow(None, name)
            # 根据对方昵称获取窗口句柄
            win32gui.SendMessage(handle, 770, 0, 0)
            # 将剪切板内容填充消息。
            win32gui.SendMessage(handle, win32con.WM_KEYDOWN, win32con.VK_RETURN, 0)
            # 按下回车发送消息
            count+=1
            if (count%10==0):
                print(count)
    else:
        while n!=0:
            # 发送的消息
            n = n - 1
            w.OpenClipboard()
            #打开剪切板
            w.EmptyClipboard()
            #清空剪切板
            w.SetClipboardData(win32con.CF_UNICODETEXT, msg)
            #将msg设置给剪切板
            w.CloseClipboard()
            #关闭剪切板

            handle = win32gui.FindWindow(None, name)
            # 根据对方昵称获取窗口句柄
            win32gui.SendMessage(handle, 770, 0, 0)
            # 将剪切板内容填充消息。
            win32gui.SendMessage(handle, win32con.WM_KEYDOWN, win32con.VK_RETURN, 0)
            # 按下回车发送消息


if __name__ == '__main__':
    name="侯瑞华"
    n="-1"
    msg="我曾见过你们人类无法想象之事物；太空战舰在猎户星座旁熊熊燃烧，我注视着万丈光芒在天国之门的黑暗里闪耀。所有这些时刻都将迷失在时间的长河，如同泪水消失在雨中……是时候走向死亡了。"
    start(name,n,msg)