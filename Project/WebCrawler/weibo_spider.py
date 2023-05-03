# 微信公众号：chimuyhs 【可爱丸学python】 关注并回复：源码  即可获取源代码
# QQ学习交流群：983460742

# 导入需要用到的模块
import requests
from lxml import etree

#设置目标网页url
url = 'https://s.weibo.com/top/summary?cate=realtimehot'

#设置请求头，模拟浏览器访问
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'}

#通过状态码判断网页请求是否成功
def get(url):
    response = requests.get(url,headers=headers)
    if response.status_code == 200:
        print("网页请求成功啦！")
        parse(url)
    else:
        print("网页请求失败了，可能被反爬了哦！")

#将微博热搜的数据给爬下来
def parse(url):
    response = requests.get(url,headers=headers)
    #定义选择器
    selector = etree.HTML(response.text)
    #获取微博热搜的序号
    number = selector.xpath('//td[@class="td-01 ranktop"]/text()')
    topic = selector.xpath('//td[@class="td-02"]/a/text()')
    hot = selector.xpath('//td[@class="td-02"]/span/text()')
    for i in range(len(number)):
        print(number[i], topic[i+1], hot[i])


get(url)
