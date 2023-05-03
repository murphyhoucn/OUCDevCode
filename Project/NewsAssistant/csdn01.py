
from bs4 import BeautifulSoup
import requests
import time


def get_data(data_url):
    wb1_data = requests.get(data_url)
    wb1_data.encoding = 'gb2312'
    soup = BeautifulSoup(wb1_data.text, 'lxml')
    title = soup.select('div.cont.clearfix > div.zgsz_show.fl > div.zgsz_slt > h1')[0].get_text()
    f.write('\n'+ title + '\n')
    passages = soup.select('div.cont.clearfix > div.zgsz_show.fl > div.zgsz_sContent.clearfix > p')
    passages.pop(0)

    for paragraph in passages:
        data = paragraph.get_text()
        if len(data) > 30:
            f.write(data + '\n')

    if soup.find_all("div", class_="zg_page list_pagebox"):
        another_url = soup.select('div.zg_page.list_pagebox > p > a')[1].get("href")
        wb2_data = requests.get(another_url)
        wb2_data.encoding = 'gb2312'
        soup = BeautifulSoup(wb2_data.text, 'lxml')
        passage1 = soup.select('div.cont.clearfix > div.zgsz_show.fl > div.zgsz_sContent.clearfix > p')
        passage1.pop(0)

        for paragraph1 in passage1:
            data1 = paragraph1.get_text()
            if len(data1) > 30:
                f.write(data1 + '\n')


# 获取目标网址下所有资料链接
def get_urls(single_url):
    wb_data = requests.get(single_url)
    wb_data.encoding = 'gb2312'
    soup = BeautifulSoup(wb_data.text, 'lxml')
    infos = soup.select('div.zg_main_left > dl > dt > a')
    time.sleep(4)
    for info in infos:
        data_url = info.get("href")
        time.sleep(4)
        get_data(data_url)


# 将目标网址写入一个list中
start_url = 'http://www.offcn.com/shizheng/sshz/'
urls = ['http://www.offcn.com/shizheng/sshz/{}.html'.format(i) for i in range(2,8,1)]
urls.insert(0, start_url)
with open('./test.txt', 'w', encoding='gb18030') as f:
    for url in urls:
        get_urls(url)