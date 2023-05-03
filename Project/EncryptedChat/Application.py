# -*- coding : utf-8 -*-
# Time       : 2021/8/11 18:06
# Author     : MurphyHou
# Proj_Name  : encrypt
# File_Name  : Application.py
# Software   : PyCharm
# =======Here We Go!=======
import sys
from PyQt5 import QtWidgets
from Decrypt_GUI import Ui_Form

import win32gui
import win32con
import win32clipboard as w
import  time


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


if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    my_pyqt_form = MyPyQT_Form()
    my_pyqt_form.show()
    sys.exit(app.exec_())