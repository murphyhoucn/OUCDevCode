# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: https://docs.scrapy.org/en/latest/topics/item-pipeline.html


# useful for handling different item types with a single interface

from itemadapter import ItemAdapter

import csv

class BilibiliPipeline:

    def process_item(self, item, spider):
        uname = item['uname'],
        mid = item['mid'],
        sign = item['sign'],
        message = item['message']

        with open('yinyue_guyongzhe11111.csv', 'a+', encoding='gbk', newline='') as f:
            cf = csv.writer(f)
            cf.writerow((
                            item["uname"],
                            item["mid"],
                            item["sign"],
                            item["message"]
                            ))
        return item
