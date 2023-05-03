# -*- coding ：'UTF-8' -*-
# http://dangjian.com/djw2016sy/djw2016wkztl/wkztl2016xihy/index.shtml
# Author：XSX

import requests
from lxml import etree
import os
import time

def GetHomeLinks(url, headers):
    HomepageLinks = []
    r = requests.get(url, headers=headers)
    html = etree.HTML(r.text)
    HomeLinks = html.xpath('//div[@class="main-left"]/ul/li/div/a/@href')
    for HomeLink in HomeLinks:
        htmlPage = 'http://dangjian.com/djw2016sy/djw2016wkztl/wkztl2016xihy' + str(HomeLink)[1:]
        HomepageLinks.append(htmlPage)
    print(HomepageLinks)
    return HomepageLinks

def DownloadPage(HomepageLinks, headers):
    if not os.path.exists("./News"):
        os.mkdir("./News")
    for HomepageLink in HomepageLinks:
        time.sleep(3)
        r1 = requests.get(HomepageLink, headers=headers)
        r1.encoding = r1.apparent_encoding
        html1 = etree.HTML(r1.text)
        Titles = html1.xpath('//div[@id="title_tex"]/text()')
        Textdatas = html1.xpath('//div[@class="TRS_Editor"]/p/text()')
        NeiRong = str(Titles) + '\n' + str(Textdatas).replace(r'\xa0', '').replace(r'\u3000', '')
        with open('./News/' + str(Titles).replace("['", "").replace("']", "") + '.txt', 'a')as f:
            f.write(NeiRong)
        print("已保存！")
    print("已全部下载！")

if __name__ == '__main__':
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.116 Safari/537.36',
        'Cookie': 'wdcid=7c80b781c03f1605; wdlast=1583386171'
    }
    url = "http://dangjian.com/djw2016sy/djw2016wkztl/wkztl2016xihy/index.shtml"
    DownloadPage(GetHomeLinks(url, headers), headers)
