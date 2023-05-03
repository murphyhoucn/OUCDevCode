#编写python爬虫代码的万能公式

'''
注意：
使用通用公式获取别的网站的数据，
只需要修改第二个步骤里的网站url
以及第三个步骤里内容的xpath路径即可
'''

#1、导入需要用到的库
import requests
from lxml import etree

#2、确定URL和请求头
# url = 'https://www.hupu.com/'  虎扑
# url = 'https://www.163.com/'   网易
url = 'https://www.sina.com.cn/'
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.77 Safari/537.36',
           'Referer': 'https://www.hupu.com/'}

#3、编写获取数据的函数
def get_data(url):
    #请求我们想要访问的url，并设置请求头
    response = requests.get(url, headers=headers)
    #防止获取到的网页数据乱码，通常用utf-8即可，中文的编码方式是gbk
    response.encoding = 'utf-8'
    #设置选择器
    selector = etree.HTML(response.text)
    #编写获取具体内容的xpath路径
    # content = selector.xpath('//*[@id="newpcnews-1"]/div/div[2]/a[1]/div/text()') 虎扑
    # content = selector.xpath('//*[@id="js_index2017_wrap"]/div[1]/div[2]/div[4]/div[1]/div[2]/div/div/div/div[1]/div[1]/div[2]/ul[1]/li[1]/a/text()')  网易
    content = selector.xpath('//*[@id="syncad_0"]/ul[1]/li[1]/a/@href')
    #将获取到的数据打印出来
    print(content)

#4、调用函数
get_data(url)
