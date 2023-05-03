# -*- coding : utf-8 -*-
# Time      : 2021/3/31 21:09
# Author    : MurphyHou
# Proj_Name : crawler_pic
# File_Name : crawler_test1.py
# Software  : PyCharm
# Here We Go!


from urllib import request
import re
import ssl

file_path = input("请输入保存图片的地址(eg:D:/crawler/):")
# file_path='D:/crawler/'

uid=input("请输入uid:")
# fid=input("请输入fid：")
# url=input("请输入url：")

a=int(input("请输入爬取图片的起始页数:"))
b=int(input("请输入爬取图片的结束页数:"))


#需要将下面url里面的  uid&value=后面的数字换成所要爬取用户的uid，，还需要将containerid=这个替换成所要爬取用的的fid
base_url = 'https://m.weibo.cn/api/container/getIndex?is_hot[]=1&is_hot[]=1&jumpfrom=weibocom&type=uid&value='+uid+'&containerid=107603'+uid+'&page='
# print(base_url)
# base_url = 'https://m.weibo.cn/api/container/getIndex?is_hot[]=1&is_hot[]=1&jumpfrom=weibocom&type=uid&value=6391766227&containerid=1076036391766227&page='

header = \
    {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.100 Safari/537.36Mozilla/5.0 (iPhone; CPU iPhone OS 11_0 like Mac OS X) AppleWebKit/604.1.38 (KHTML, like Gecko) Version/11.0 Mobile/15A372 Safari/604.1',
    'Accept': 'application/json, text/plain, */*',
    'Referer': 'https://m.weibo.cn/u/' + uid
    # 'Referer': 'https://m.weibo.cn/u/6391766227'  # 这个需要改成所要爬取用户主页的手机版本下的url
    }

context = ssl._create_unverified_context()

for i in range(a, b+1):
    try:
        realurl = base_url + str(i)
        req = request.Request(url=realurl, headers=header)
        # resp = requests.get(realurl, headers=header)
        resp = request.urlopen(req, context=context).read().decode()
        print('***************正在下载第' + str(i) + '页的图片***************')
        # 先获取所有的large里面的url，注意观察，大图的url中都包含/large,那么我们获取所有的url然后过虐掉不包含/large的url就行了
        pat = '"url":"(.*?)"'
        list1 = re.compile(pat).findall(resp)
        list2 = filter(lambda url: url.find('/large') != -1, list1)
        list2 = list(list2)
        for j in range(0, len(list2) - 1):
            pic_url = list2[j].replace('\/', '/')
            request.urlretrieve(pic_url, file_path + str(i) + str(j) + '.jpg')
        print('###############第' + str(i) + '页的图片下载完成###############')

    except Exception as error:
        print(error)