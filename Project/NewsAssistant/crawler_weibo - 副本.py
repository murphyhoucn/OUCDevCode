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
        keyword = tr_node.xpath('//td[@class="td-02 ranktop"]/a/text()')[0]
        search_url = "https://s.weibo.com" + tr_node.xpath('//td[@class="td-02 ranktop"]/a/@href')[0]
        
        hot_object = {
            "keyword": keyword,
            "search_url": search_url
        }
        all_hot_list.append(hot_object)
    return all_hot_list

if __name__ == '__main__':
    print(get_weibo_top())
