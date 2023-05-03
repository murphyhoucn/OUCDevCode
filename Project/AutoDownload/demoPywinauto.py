from pywinauto import application
import time

#1.QQ自动安装
app = application.Application().start('D:\software_用户软件\QQ9.0.3.exe')
time.sleep(2)

#2.获取 执行程序的窗体
# 在不知道窗体名称,可以报错的方式查找窗体名称
# window_title=['无标题-记事本']
# print(app[window_title].wrapper_object())
window_title='腾讯QQ安装向导'

#3.查看一个窗体含有的控件，子窗体，菜单
# print(app[window_title].print_control_identifiers())

#4.触发窗体含有的控件，子窗体，菜单
#触发方式:app[window_title].child_window(title='窗体名',class_name="窗体类名")

#.click() 点击事件
#.set_edit_text() 设置Edit
# 更多方式可以 通过help(app[window_title].child_window(class_name="Edit"))查到

#点开QQ安装自定义选项
app[window_title].child_window(title="自定义选项").click()
time.sleep(1)

#修改默认安装路径
app[window_title].child_window(class_name="Edit").set_edit_text(r'D:\Program Files (x86)\Tencent\QQ')

#取消自启动
app[window_title].child_window(title="添加到快速启动栏").click()
app[window_title].child_window(title="开机自动启动").click()

#执行安装
# print(app[window_title].print_control_identifiers())
# help(app[window_title].child_window(class_name="#32770").child_window(title="立即安装", class_name="Button").click())
app[window_title].child_window(class_name="#32770").child_window(title="立即安装", class_name="Button").click()
time.sleep(40)
# print(app[window_title].print_control_identifiers())
app[window_title].child_window(class_name="#32770").child_window(title="安装QQ浏览器", class_name="Button").uncheck_by_click()
app[window_title].child_window(class_name="#32770").child_window(title="安装QQ游戏 免费获取专属礼包", class_name="Button").uncheck_by_click()
app[window_title].child_window(class_name="#32770").child_window(title="安装QQ音乐播放器", class_name="Button").uncheck_by_click()
app[window_title].child_window(class_name="#32770").child_window(title="完成安装", class_name="Button").click()