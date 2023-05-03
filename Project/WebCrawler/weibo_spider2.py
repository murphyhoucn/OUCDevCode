# 微信公众号：chimuyhs 【可爱丸学python】 关注并回复：源码  即可获取源代码
# QQ学习交流群：983460742

# 导入需要用到的模块
import requests
from lxml import etree
import xlsxwriter


#设置目标网页url
url = 'https://s.weibo.com/top/summary?cate=socialevent'

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
    #在控制台输出数据
    for i in range(len(number)):
        print(number[i], topic[i+1], hot[i])
        #把数据保存到txt文本中
        with open("test.txt", "a+", encoding="utf-8") as f:
            f.write(number[i]+"    "+topic[i+1]+"    "+hot[i]+"\n")
            f.close()


    # #创建名为weibo_spider.xlsx的excle表格
    # workbook = xlsxwriter.Workbook('weibo_spider.xlsx')
    # #在创建好的表格指定一个sheet表
    # worksheet = workbook.add_worksheet()
    # #在excle表格中写入数据
    # for i in range(len(number)):
    #     #在第i行，第1列，写入数据number
    #     worksheet.write(i, 0, number[i])
    #     # 在第i行，第2列，写入数据topic
    #     worksheet.write(i, 1, topic[i])
    #     # 在第i行，第3列，写入数据hot
    #     worksheet.write(i, 2, hot[i])
    # #将表格关闭
    # workbook.close()


get(url)
