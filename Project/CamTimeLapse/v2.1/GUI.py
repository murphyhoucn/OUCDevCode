# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

from PyQt5 import QtCore,QtWidgets
from PyQt5.QtGui import QIcon
import ctypes
ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID("myappid")

# from PyQt5.QtWidgets import QDesktopWidget,QMainWindow,QApplication

class Ui_Form(object):
    def setupUi(self, Form):
        # 建立Windows窗口，并设置合适的大小

        Form.setObjectName("Form")
        Form.resize(1300, 600)

        Form.setWindowIcon(QIcon("ICON.ico"))

        # QRect ( int x, int y, int width, int height )
        # 构造一个以（x，y）为左上角、宽度和高度为width，height的矩形。
        self.widget = QtWidgets.QWidget(Form)
        self.widget.setGeometry(QtCore.QRect(130, 70, 1000, 400))
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

        self.lineEdit_4 = QtWidgets.QLineEdit(self.widget)
        self.lineEdit_4.setObjectName("lineEdit_4")
        self.gridLayout.addWidget(self.lineEdit_4, 3, 2, 1, 1)

        # 建立三个文本标签框QLabel
        self.number = QtWidgets.QLabel(self.widget)
        self.number.setObjectName("number")
        self.gridLayout.addWidget(self.number, 0, 0, 1, 2)

        self.option = QtWidgets.QLabel(self.widget)
        self.option.setObjectName("option")
        self.gridLayout.addWidget(self.option, 1, 0, 1, 2)

        self.count = QtWidgets.QLabel(self.widget)
        self.count.setObjectName("count")
        self.gridLayout.addWidget(self.count, 2, 0, 1, 2)


        self.interval = QtWidgets.QLabel(self.widget)
        self.interval.setObjectName("interval")
        self.gridLayout.addWidget(self.interval, 3, 0, 1, 2)



        self.verticalLayout.addLayout(self.gridLayout)
        
        # 建立一个用户交互按键QPushButton
        self.pushButton1 = QtWidgets.QPushButton(self.widget)
        self.pushButton1.setObjectName("pushButton1")
        self.verticalLayout.addWidget(self.pushButton1)  # 待解决：怎么更改这个按键的格式

        # 更改格式保存
        # self.verticalLayout.addWidget(self.pushButton1, 4, 2, 1, 1)
        # TypeError: addWidget(self, QWidget, stretch: int = 0, alignment: Union[Qt.Alignment, Qt.AlignmentFlag] = Qt.Alignment()): argument 3 has unexpected type 'int'

        self.retranslateUi(Form)
        self.pushButton1.clicked.connect(Form.pushButton1_click)



        # 设置两个显示文本框
        self.textEditi = QtWidgets.QTextEdit()
        self.textEditi.setObjectName("lineEditi")
        self.gridLayout.addWidget(self.textEditi, 0, 4, 1, 1)

        self.textEdito = QtWidgets.QTextEdit()
        self.textEditi.setObjectName("textEdito")
        self.gridLayout.addWidget(self.textEdito, 2, 4, 1, 1)

        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "CamTimeLapse"))  #设置窗口标题

        # 设置界面标题
        self.formtitle.setText(_translate("Form", \
            "<html>\
                <head/>\
                    <body>\
                        <p align=\"center\">\
                            <span style=\" font-size:30pt; font-weight:600; font-family: Times New Roman;\">\
                                CamTimeLapse\
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
        
        self.number.setText(_translate("Form", "相机号（0/1/2）"))

        self.option.setText(_translate("Form", "模式选择：数量/时间/无穷（0/1/-1）"))

        self.count.setText(_translate("Form", "数量（分钟/张）"))

        self.interval.setText(_translate("Form", "间隔（s）"))

        self.pushButton1.setText(_translate("Form", "开始"))


        