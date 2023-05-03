# Define here the models for your scraped items
#
# See documentation in:
# https://docs.scrapy.org/en/latest/topics/items.html

import scrapy


class BilibiliItem(scrapy.Item):
    # define the fields for your item here like:
    # name = scrapy.Field()
    uname = scrapy.Field()
    mid = scrapy.Field()
    sign = scrapy.Field()
    message = scrapy.Field()
