# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import requests
import wget


from pywinauto import application
import time
	
## 构建请求头池，使用随机种子（还没做）

headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/87.0.4280.67 Safari/537.36 Edg/87.0.664.47'}
	
def qq():
	## QQ
	urlQQ = 'https://im.qq.com/pcqq'
	html = requests.get(urlQQ, headers = headers)
	websourceQQ = html.text # <class 'str'>

	#  <a href="https://dldir1.qq.com/qqfile/qq/PCQQ9.6.8/QQ9.6.8.28823.exe" class="download"></a>

	indexStart = websourceQQ.find('https://dldir1.qq.com/qqfile/qq')
	indexEnd = websourceQQ.find('class="download"')
	indexEnd = indexEnd - 2
	# print(websourceQQ[indexStart:indexEnd])
	qqDownloadUrl = websourceQQ[indexStart:indexEnd]
	# print(qqDownloadUrl)
	return qqDownloadUrl

def wechat():
	## Wechat
	urlWechat = 'https://pc.weixin.qq.com/'
	html = requests.get(urlWechat, headers = headers)
	websourceUrlWechat = html.text # <class 'str'>

	# <a class="download-button" id="downloadButton" href="https://dldir1.qq.com/weixin/Windows/WeChatSetup.exe"><i class="download-icon"></i><div class="download-info"><div>立即下载</div><span class="download-version">3.8.0</span></div></a>

	indexStart = websourceUrlWechat.find('https://dldir1.qq.com/weixin/Windows')
	indexEnd = websourceUrlWechat.find('<i class="download-icon">')
	indexEnd = indexEnd - 2
	global wechatDownloadUrl
	wechatDownloadUrl = websourceUrlWechat[indexStart:indexEnd]
	# print(wechatDownloadUrl)
	return wechatDownloadUrl
	

if __name__ == '__main__':
	downloadList = []
	downloadList.append(qq())
	downloadList.append(wechat())

	downloadListLen = len(downloadList)
	for i in range(downloadListLen):
		wget.download(downloadList[i])
		# print(downloadList[i])




	# #1.QQ自动安装
	# app = application.Application().start('D:\software_用户软件\QQ9.0.3.exe')
	# time.sleep(2)

	# #2.获取 执行程序的窗体
	# # 在不知道窗体名称,可以报错的方式查找窗体名称
	# # window_title=['无标题-记事本']
	# # print(app[window_title].wrapper_object())
	# window_title='腾讯QQ安装向导'

	# #3.查看一个窗体含有的控件，子窗体，菜单
	# # print(app[window_title].print_control_identifiers())

	# #4.触发窗体含有的控件，子窗体，菜单
	# #触发方式:app[window_title].child_window(title='窗体名',class_name="窗体类名")

	# #.click() 点击事件
	# #.set_edit_text() 设置Edit
	# # 更多方式可以 通过help(app[window_title].child_window(class_name="Edit"))查到

	# #点开QQ安装自定义选项
	# app[window_title].child_window(title="自定义选项").click()
	# time.sleep(1)

	# #修改默认安装路径
	# app[window_title].child_window(class_name="Edit").set_edit_text(r'D:\Program Files (x86)\Tencent\QQ')

	# #取消自启动
	# app[window_title].child_window(title="添加到快速启动栏").click()
	# app[window_title].child_window(title="开机自动启动").click()

	# #执行安装
	# # print(app[window_title].print_control_identifiers())
	# # help(app[window_title].child_window(class_name="#32770").child_window(title="立即安装", class_name="Button").click())
	# app[window_title].child_window(class_name="#32770").child_window(title="立即安装", class_name="Button").click()
	# time.sleep(40)
	# # print(app[window_title].print_control_identifiers())
	# app[window_title].child_window(class_name="#32770").child_window(title="安装QQ浏览器", class_name="Button").uncheck_by_click()
	# app[window_title].child_window(class_name="#32770").child_window(title="安装QQ游戏 免费获取专属礼包", class_name="Button").uncheck_by_click()
	# app[window_title].child_window(class_name="#32770").child_window(title="安装QQ音乐播放器", class_name="Button").uncheck_by_click()
	# app[window_title].child_window(class_name="#32770").child_window(title="完成安装", class_name="Button").click()

