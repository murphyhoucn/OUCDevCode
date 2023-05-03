# 微信公众号：chimuyhs 【可爱丸学python】 关注并回复：源码  即可获取源代码
# QQ学习交流群：983460742

#导入需要用到的模块
import requests
from lxml import etree
import threading

#设置请求头，模拟浏览器访问
headers = {'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Safari/537.36'}

#获取所有页面的url地址
urls = ['http://search.dangdang.com/?key=python&act=input&page_index={}'.format(i) for i in range(1,11)]
i = 1

#获取数据的函数
def get_text(url):
    response = requests.get(url, headers=headers)
    selector = etree.HTML(response.text)
    #获取所有书本的标题
    titles = selector.xpath('//p[@class="name"]/a/@title')
    global i
    #取出每一本书的标题
    for title in titles:
        print(i,title)
        i = i + 1


#单线程方法
# if __name__ == '__main__':
#     for url in urls:
#         get_text(url)


#多线程方法
if __name__ == '__main__':
    #创建空的线程列表
    line_list = []
    for url in urls:
        #创建线程
        t = threading.Thread(target=get_text, args=(url,))
        #把创建好的线程加入到线程列表里
        line_list.append(t)

    #启动线程
    for line in line_list:
        line.start()

    #等待所有线程结束
    for line in line_list:
        line.join()