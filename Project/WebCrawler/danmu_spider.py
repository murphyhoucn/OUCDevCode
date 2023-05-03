# 微信公众号：chimuyhs 【可爱丸学python】 关注并回复：源码  即可获取源代码
# QQ学习交流群：983460742

#导入我们要用到的模块
import requests
import re
import jieba
import wordcloud
import imageio
#选择同一个文件夹下的luoxiang.jpg图片
mask = imageio.imread('xing.jpg')

#设置想要爬取的网页地址
url = 'https://api.bilibili.com/x/v1/dm/list.so?oid=177974677'
#设置请求头，让爬虫伪装成浏览器访问
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.163 Safari/537.36'}

def get_damu(url):
    response = requests.get(url, headers)
    response = response.content.decode('utf-8')
    #通过正则表达式获取两个<d>标签内包含的弹幕信息
    data = re.compile('<d.*?>(.*?)</d>')
    #对目标网页使用正则表达式，获取所有匹配的内容
    danmu = data.findall(response)
    #使用jieba模块的lcut()精确模式进行分词，并用空格连接词语
    danmu_word = jieba.lcut(" ".join(danmu))
    #将分词结果再次用空格连接，并转化成制作词云需要的字符串形式
    danmu_str = " ".join(danmu_word)
    #构造词云对象,字体为微软雅黑,背景颜色为白色
    #设置宽度为1000高度为500，通过mask设置图片形状
    w = wordcloud.WordCloud(font_path="msyh.ttc",background_color='white',width=1000,height=500,mask=mask)
    #将处理好的分词弹幕加载到词云中
    w.generate(danmu_str)
    #将生成的词云保存为danmu.png图片
    w.to_file('danmu.png')

if __name__ == '__main__':
    get_damu(url)