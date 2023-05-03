# -*- coding : utf-8 -*-
# Time       : 2022-08-22 21:43
# Author     : MurphyHou
# Proj_Name  : Bilibili
# File_Name  : BilibiliSpider.py
# Software   : PyCharm
# =======Here We Go!=======

import scrapy
# import json
import time

from Bilibili.items import BilibiliItem

class BilibilSpider(scrapy.Spider):
    name = 'Bilibili'
    allowed_domains = ['bilibili.com']

    n = 0
    # 1.科技区1 稚晖君
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=420981979&plat=1&type=1&next={}'

    # 2.科技区2 何同学
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=54737593&plat=1&type=1&next={}'

    # 3.美食区1 绵阳料理
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=631751965&plat=1&type=1&next={}'

    # 4.美食区2 盗月社
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=60439560&plat=1&type=1&next={}'

    # 5.舞蹈区1 汤姆的混乱空间
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=897884618&plat=1&type=1&next={}'

    # 6.舞蹈区2 新宝岛
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=53851218&plat=1&type=1&next={}'

    # 7.鬼畜区1 伊丽莎白鼠
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=3327562&plat=1&type=1&next={}'

    # 8. 鬼畜区2 哦呼w
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=626357031&plat=1&type=1&next={}'

    # 9. 音乐区1 最伟大的作品
    # base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=215631694&plat=1&type=1&next={}'

    # 10. 音乐区2 孤勇者
    base_start_urls = 'https://api.bilibili.com/x/v2/reply/main?csrf=a5be8e3d823c0ba2b87f730fb73ed744&mode=3&oid=764108122&plat=1&type=1&next={}'

    start_urls = [base_start_urls.format(str(n))]
    print(start_urls)

    def parse(self, response):
        """
        爬虫获取内容
        :param response:
        """
        time.sleep(3)
        print("====================================================================================================================")
        print("====================================================================================================================")
        print("====================================================================================================================")
        print(response.request.headers)
        print("====================================================================================================================")
        print(response.url)
        print("====================================================================================================================")
        resjson = response.json()
        print("====================================================================================================================")
        # print(resjson)
        print("====================================================================================================================")
        data = resjson["data"]["replies"]
        print("====================================================================================================================")
        print("====================================================================================================================")
        print("====================================================================================================================")

        # print(data)

        for i in data:
            print(i["member"]["uname"])
            print(i["member"]["mid"])
            print(i["member"]["sign"])
            print(i["content"]["message"])
            print("==========")

            index = response.url.find("next=")
            str1 = response.url[index:]
            # print(str1)
            index2 = str1.find("=")
            # print(index2)
            str2 = str1[(index2 + 1):]
            # print(str2)
            n = int(str2)
            n += 1

        if resjson["code"] == 0 and n < 100:
            # 设置获取前100页的评论
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")
            print(f"==========================={n}==================================")

            if len(resjson["data"]["replies"]) > 0:
                data = resjson["data"]["replies"]
                for one in data:
                    item = BilibiliItem()
                    item["uname"] = one["member"]["uname"]
                    item["mid"] = one["member"]["mid"]
                    item["sign"] = one["member"]["sign"]
                    item["message"] = one["content"]["message"]

                    print(i["member"]["uname"])
                    print(i["member"]["mid"])
                    print(i["member"]["sign"])
                    print(i["content"]["message"])

                    yield item

            yield scrapy.Request(self.base_start_urls.format(str(n)), callback=self.parse)
