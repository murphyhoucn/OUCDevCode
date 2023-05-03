# -*- coding : utf-8 -*-
# Time       : 2021/8/11 18:29
# Author     : MurphyHou
# Proj_Name  : encrypt
# File_Name  : Encrypt_GUI.py
# Software   : PyCharm
# =======Here We Go!=======


from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QDesktopWidget,QMainWindow,QApplication

class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(656, 491)

        # QRect ( int x, int y, int width, int height )
        # 构造一个以（x，y）为左上角、宽度和高度为width，height的矩形。
        self.widget = QtWidgets.QWidget(Form)
        self.widget.setGeometry(QtCore.QRect(130, 70, 391, 341))
        self.widget.setObjectName("widget")


        self.verticalLayout = QtWidgets.QVBoxLayout(self.widget)
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout.setObjectName("verticalLayout")

        # 界面标题
        self.formtitle = QtWidgets.QLabel(self.widget)
        self.formtitle.setObjectName("formtitle")
        self.verticalLayout.addWidget(self.formtitle)

        # 界面脚注
        self.footer = QtWidgets.QLabel(self.widget)
        self.footer.setObjectName("footer")
        self.verticalLayout.addWidget(self.footer)

        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setObjectName("gridLayout")


        # int fromRow     // 横坐标
        # int fromColumn  // 纵坐标
        # int rowSpan     // 横向跨越几个单元格
        # int columnSpan  // 纵向跨越几个单元格

        # 建立三个单行文本输入框QLineEdit
        self.lineEdit_1 = QtWidgets.QLineEdit(self.widget)
        self.lineEdit_1.setObjectName("lineEdit_1")
        self.gridLayout.addWidget(self.lineEdit_1, 0, 2, 1, 1)

        self.lineEdit_2 = QtWidgets.QLineEdit(self.widget)
        self.lineEdit_2.setObjectName("lineEdit_2")
        self.gridLayout.addWidget(self.lineEdit_2, 1, 2, 1, 1)

        self.lineEdit_3 = QtWidgets.QLineEdit(self.widget)
        self.lineEdit_3.setObjectName("lineEdit_3")
        self.gridLayout.addWidget(self.lineEdit_3, 2, 2, 1, 1)

        # 建立三个文本标签框QLabel
        self.name = QtWidgets.QLabel(self.widget)
        self.name.setObjectName("name")
        self.gridLayout.addWidget(self.name, 0, 0, 1, 2)

        self.key = QtWidgets.QLabel(self.widget)
        self.key.setObjectName("key")
        self.gridLayout.addWidget(self.key, 1, 0, 1, 2)
  
        self.message = QtWidgets.QLabel(self.widget)
        self.message.setObjectName("message")
        self.gridLayout.addWidget(self.message, 2, 0, 1, 2)

        # 建立一个用户交互按键QPushButton
        self.verticalLayout.addLayout(self.gridLayout)
        self.pushButton = QtWidgets.QPushButton(self.widget)
        self.pushButton.setObjectName("pushButton")
        self.verticalLayout.addWidget(self.pushButton)

        self.retranslateUi(Form)
        self.pushButton.clicked.connect(Form.pushButton_click)
        QtCore.QMetaObject.connectSlotsByName(Form)
        
        # self.center()

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "加密端"))  #设置窗口标题

        # 设置界面标题
        self.formtitle.setText(_translate("Form", \
            "<html>\
                <head/>\
                    <body>\
                        <p align=\"center\">\
                            <span style=\" font-size:30pt; font-weight:600; font-family: Times New Roman;\">\
                                Message Encryption\
                            </span>\
                        </p>\
                    </body>\
            </html>"))


        self.footer.setText(_translate("Form", \
            "<html>\
                <head/>\
                    <body>\
                        <p align=\"center\">\
                            <span style=\" font-size:15pt; font-weight:300; font-family: Times New Roman;\">\
                                Designed by Murphy\
                            </span>\
                        </p>\
                    </body>\
            </html>"))
        
        self.name.setText(_translate("Form", "输入对方昵称"))

        self.key.setText(_translate("Form", "输入加密密钥"))

        self.message.setText(_translate("Form", "输入消息内容"))

        self.pushButton.setText(_translate("Form", "开始"))


    # def center(self):  # 定义一个函数使得窗口居中显示
    #     # 获取屏幕坐标系
    #     screen = QDesktopWidget().screenGeometry()
    #     # 获取窗口坐标系
    #     size = self.geometry()
    #     newLeft = (screen.width() - size.width()) / 2
    #     newTop = (screen.height() - size.height()) / 2
    #     self.move(int(newLeft),int(newTop))
        