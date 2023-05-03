#导入需要用到的模块
import requests
from lxml import etree
import os

#自动创建保存小说的文件夹
# os.chdir()方法用于改变当前工作目录指定的文件夹
if not os.path.exists(os.getcwd()+"/xiaoshuo"):
    print("小说文件夹不存在，帮你自动创建好了")
    print("==================================")
    os.mkdir("xiaoshuo")
    #把当前路径改为到xiaoshuo文件夹处
    os.chdir(os.getcwd()+"/xiaoshuo")
else:
    print("小说文件夹存在")
    os.chdir(os.getcwd()+"/xiaoshuo")
    print("==================================")

#设置请求头
headers = {'user-agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.149 Safari/537.36'}

#设置想要爬取的小说链接
url = 'https://www.52bqg.com/book_307/'

#设置爬取小说的函数功能
def get_text(url):
    response = requests.get(url, headers=headers)
    #最常用的编码方式是utf-8以及gbk，出现乱码可以先尝试这两种
    response.encoding = 'gbk'
    selector = etree.HTML(response.text)
    #获取到所有章节的标题
    title = selector.xpath('//*[@id="list"]/dl/dd/a/text()')
    #获取每章小说具体内容的链接
    hrefs = selector.xpath('//*[@id="list"]/dl/dd/a/@href')
    urls = []
    for href in hrefs:
        #把url和href拼接得到每一章具体内容的url并存在urls列表里
        urls.append(url+href)

    for i in range(len(urls)):
        #传入每一章内容具体链接的url
        response = requests.get(urls[i], headers=headers)
        response.encoding = 'gbk'
        selector = etree.HTML(response.text)
        #获取每一章具体的内容
        contents = selector.xpath('//*[@id="content"]/text()')
        #保存小说章节名称及章节内容
        with open(title[i]+".txt", "w", encoding='utf-8') as f:
            for content in contents:
                content = content.replace("\n","")
                #将每一章的内容写入对应章节的txt文件里
                f.write(content)
            print(str(title[i])+"下载成功！")

if __name__ == '__main__':
    get_text(url)
