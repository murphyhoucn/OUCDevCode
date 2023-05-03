import sys
from PyQt5 import QtWidgets
from PyQT_Form_demo01 import Ui_Form

import win32gui
import win32con
import win32clipboard as w
import  time

import os
os.environ["CUDA_VISIBLE_DEVICES"] = "-1"


class MyPyQT_Form(QtWidgets.QWidget,Ui_Form):

    def __init__(self):
        super(MyPyQT_Form, self).__init__()
        self.setupUi(self)

    def pushButton_click(self):

        name=self.lineEdit.text()
        msg=self.lineEdit_2.text()
        n=self.lineEdit_3.text()

        start(name,n,msg)

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
    app = QtWidgets.QApplication(sys.argv)
    my_pyqt_form = MyPyQT_Form()
    my_pyqt_form.show()
    sys.exit(app.exec_())