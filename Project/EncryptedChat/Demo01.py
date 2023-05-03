# -*- coding : utf-8 -*-
# Time       : 2021/8/11 15:46
# Author     : MurphyHou
# Proj_Name  : encrypt
# File_Name  : Demo01.py
# Software   : PyCharm
# =======Here We Go!=======


import uiautomation as auto

#找到消息窗口。消息窗口的 ClassName='TXGuiFoundation'，但是 QQ 主窗口的的类名也是这个。所以需要再增加一个参数作为区分 Name='哈哈' ，这是消息窗口的名字，和对方的 QQ 昵称一样。

qq_win = auto.WindowControl(searchDepth=1, ClassName='TXGuiFoundation', Name='任务列表')

#先试着找到输入消息的编辑框，看看能不能取到里面的文字。如果 QQ 窗口是合并的，可能会有多个编辑框，这时需要设置函数 EditControl 的 foundIndex 来取其它编辑框。

input_edit = qq_win.EditControl()

print(input_edit.Name)

print(input_edit.GetValuePattern().Value) #打印编辑框内的文字

#历史消息在 QQ 里是一个 list，list 会有很多 Children。Children 的 Name 就是历史消息的文字部分了。

msg_list = qq_win.ListControl() #找到 list

items = msg_list.GetChildren()

for one_item in items: #遍历所有的 Children

    print(one_item.Name) #打印消息