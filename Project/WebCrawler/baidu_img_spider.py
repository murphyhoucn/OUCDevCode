#导入我们需要用到的模块
'''
还需要实现的功能：
1、输入我们想要爬的内容，自动创建文件夹
2、实现图片的全部加载，获取所有图片的img_url
'''

import requests
import re
import os

#设置请求头
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.149 Safari/537.36'}

#自动创建文件夹
word = input('请你输入项下载的图片名称：')
#如果不存在与输入的内容同名的文件夹就自动创建一个
if not os.path.exists(word):
    os.mkdir(word)
page_num = int(input('请输入你想要爬取的图片页数（一页有30张图片）：'))

#设置我们需要爬取的网页地址，注意：range是包前不包后的
urls =[ 'https://image.baidu.com/search/index?tn=baiduimage&ipn=r&ct=201326592&cl=2&lm=-1&st=-1&fm=result&fr=&sf=1&fmq=1585056016077_R&pv=&ic=0&nc=1&z=&hd=&latest=&copyright=&se=1&showtab=0&fb=0&width=&height=&face=0&istype=2&ie=utf-8&sid=&word='
        + word + '&pn={}'.format(i) for i in range(30, page_num*30+1, 30)
        ]

i = 1
#获取单张图片的url并保存图片
def get_img(url):
    response = requests.get(url, headers)
    content = response.content.decode('utf-8')
    #通过正则表达式获取每一张图片的url
    img_urls = re.findall('"thumbURL":"(.*?)"', content, re.S)
    #保存获取到的每一张图片
    global i
    for img_url in img_urls:
        response = requests.get(img_url, headers)
        content = response.content
        #以wb的形式保存图片，并保存到生成的文件夹内
        with open(word+'/'+'{}.jpg'.format(i), 'wb') as f:
            f.write(content)
            print('正在为你爬取第%d张图片'%i)
        #每保存一张图片，i的数量增加1
        i += 1

if __name__ == '__main__':
    for url in urls:
        get_img(url)


