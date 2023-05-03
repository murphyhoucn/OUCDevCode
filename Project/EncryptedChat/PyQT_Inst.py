import sys
from PyQt5 import QtWidgets
from PyQT_Form import Ui_Form

import win32gui
import win32con
import win32clipboard as w
import  time


import base64
from Crypto.Cipher import AES

'''
采用AES对称加密算法
'''



class MyPyQT_Form(QtWidgets.QWidget,Ui_Form):

    def __init__(self):
        super(MyPyQT_Form, self).__init__()
        self.setupUi(self)

    def pushButton_click(self):

        name=self.lineEdit.text()
        msg=self.lineEdit_2.text()
        key=self.lineEdit_3.text()

        msg_encrypt=encrypt_oracle(key,msg)

        start(name,key,msg,msg_encrypt)

def start(name,key,msg,msg_encrypt):
    print("加密信息如下：")
    print("昵称:" + name)
    print("密钥:" + key)
    print("未加密内容:" + msg)
    print("已加密内容:" + msg_encrypt)

    # =====将消息复制到剪切板中=====

    w.OpenClipboard()
    #打开剪切板

    w.EmptyClipboard()
    #清空剪切板

    w.SetClipboardData(win32con.CF_UNICODETEXT, msg_encrypt)
    #将msg_encrypt设置给剪切板

    w.CloseClipboard()
    #关闭剪切板

    handle = win32gui.FindWindow(None, name)
    # 根据对方昵称获取窗口句柄
    win32gui.SendMessage(handle, 770, 0, 0)
    # 将剪切板内容填充消息
    win32gui.SendMessage(handle, win32con.WM_KEYDOWN, win32con.VK_RETURN, 0)
    # 按下回车发送消息


# str不是16的倍数那就补足为16的倍数
def add_to_16(value):
    while len(value) % 16 != 0:
        value += '\0'
    return str.encode(value)  # 返回bytes


# 加密方法
def encrypt_oracle(key0,msg):
    # 秘钥
    key = key0

    mystr=msg
    text = base64.b64encode(mystr.encode('utf-8')).decode('ascii')
    # 初始化加密器
    aes = AES.new(add_to_16(key), AES.MODE_ECB)
    # 先进行aes加密
    encrypt_aes = aes.encrypt(add_to_16(text))
    # 用base64转成字符串形式
    encrypted_text = str(base64.encodebytes(encrypt_aes), encoding='utf-8')  # 执行加密并转码返回bytes
    # print(encrypted_text) 测试打印加密数据
    return encrypted_text


if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    my_pyqt_form = MyPyQT_Form()
    my_pyqt_form.show()
    sys.exit(app.exec_())