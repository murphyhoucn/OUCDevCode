# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import requests
import wget

from pywinauto import application
import time

import os
import random
import time

def installQQ(path):
    app = application.Application().start(path)
    time.sleep(2)
    window_title='腾讯QQ安装向导'
    app[window_title].child_window(title="阅读并同意").click()
    app[window_title].child_window(class_name="#32770").child_window(title="立即安装", class_name="Button").click()
    # time.sleep(30) # 啊？这个时间好像不是很好把控
    # app[window_title].child_window(class_name="#32770").child_window(title="完成安装", class_name="Button").click()

def installWechat(path):
    app = application.Application().start(path)
    time.sleep(15)# 啊？这个时间好像不是很好把控
    window_title='微信安装向导'
    # app[window_title].child_window(title="我已阅读并同意服务协议和隐私协议").click()
    # app[window_title].child_window(title="安装", class_name="Button").click()

def get_ua():
    user_agents = [
        'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36 OPR/26.0.1656.60',
    'Opera/8.0 (Windows NT 5.1; U; en)',
    'Mozilla/5.0 (Windows NT 5.1; U; en; rv:1.8.1) Gecko/20061208 Firefox/2.0.0 Opera 9.50',
    'Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; en) Opera 9.50',
    'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:34.0) Gecko/20100101 Firefox/34.0',
    'Mozilla/5.0 (X11; U; Linux x86_64; zh-CN; rv:1.9.2.10) Gecko/20100922 Ubuntu/10.10 (maverick) Firefox/3.6.10',
    'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/534.57.2 (KHTML, like Gecko) Version/5.1.7 Safari/534.57.2 ',
    'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.71 Safari/537.36',
    'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.11 (KHTML, like Gecko) Chrome/23.0.1271.64 Safari/537.11',
    'Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US) AppleWebKit/534.16 (KHTML, like Gecko) Chrome/10.0.648.133 Safari/534.16',
    'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/30.0.1599.101 Safari/537.36',
    'Mozilla/5.0 (Windows NT 6.1; WOW64; Trident/7.0; rv:11.0) like Gecko',
    'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/536.11 (KHTML, like Gecko) Chrome/20.0.1132.11 TaoBrowser/2.0 Safari/536.11',
    'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.1 (KHTML, like Gecko) Chrome/21.0.1180.71 Safari/537.1 LBBROWSER',
    'Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1; SV1; QQDownload 732; .NET4.0C; .NET4.0E)',
    'Mozilla/5.0 (Windows NT 5.1) AppleWebKit/535.11 (KHTML, like Gecko) Chrome/17.0.963.84 Safari/535.11 SE 2.X MetaSr 1.0',
    'Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 5.1; Trident/4.0; SV1; QQDownload 732; .NET4.0C; .NET4.0E; SE 2.X MetaSr 1.0) ',
    ]
    user_agent = random.choice(user_agents) # 随机抽取对象
    return user_agent



def downloadQQ():
    ## QQ
    urlQQ = 'https://im.qq.com/pcqq'
    ua = get_ua()
    headers = {'User-Agent': ua}
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

def downloatWechat():
    ## Wechat
    urlWechat = 'https://pc.weixin.qq.com/'
    ua = get_ua()
    headers = {'User-Agent': ua}
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

#### wget.download(url, out=None, bar=bar_adaptive)

if __name__ == '__main__':
    fileList = os.listdir()
    
    flag = 0
    for i in fileList:
      if i == 'installer':
        flag = 1
        break
    if flag == 0:
      os.mkdir('installer')

    basePath = os.getcwd() + '\\'

    downloadList = []
    downloadList.append(downloadQQ())  # index = 0
    downloadList.append(downloatWechat()) # index = 1
    targetName = ['0QQ.exe', '1Wechat.exe']
    
    for i in range(len(downloadList)):
        wget.download(downloadList[i], out = basePath + 'installer\\' + targetName[i])
        #  print(downloadList[i])

    installQQ(basePath + 'installer\\' + targetName[0])
    installWechat(basePath + 'installer\\' + targetName[1])


