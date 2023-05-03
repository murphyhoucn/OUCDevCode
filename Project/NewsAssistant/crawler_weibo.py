from lxml import etree
import requests

def get_weibo_top():

    # 热搜榜
    # url = "https://s.weibo.com/top/summary?cate=realtimehot"
    # 要闻榜
    url = "https://s.weibo.com/top/summary?cate=socialevent"   

    request = requests.get(url)
    html = etree.HTML(request.text)
    nodes = html.xpath("//div[@class='data']/table/tbody/tr")
    all_hot_list = []
    for tr_node in nodes[1:]:
        rank_top = tr_node.xpath('./td[1]/text()')[0]
        if not rank_top or not rank_top.isdigit():
            continue


        keyword = tr_node.xpath('./td[2]/a/text()')[0]

        search_nums = tr_node.xpath('./td[2]/span/text()')[0]

        search_url = "https://s.weibo.com" + tr_node.xpath('./td[2]/a/@href')[0]
        
        hot_object = {
            "rank_top": rank_top,
            "keyword": keyword,
            "search_nums": search_nums,
            "search_url": search_url
        }
        all_hot_list.append(hot_object)
    return all_hot_list

if __name__ == '__main__':
    print(get_weibo_top())
