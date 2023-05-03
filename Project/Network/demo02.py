# -*- coding : utf-8 -*-
# Time       : 2022-02-21 0:20
# Author     : MurphyHou
# Proj_Name  : Network
# File_Name  : demo02.py
# Software   : PyCharm
# =======Here We Go!=======

import networkx as nx
G=nx.Graph()
# 添加节点
G.add_node(1)  # 添加节点可以添加一个节点，后来发现，无论数字填几，都是只出现一个点
G.add_nodes_from([4,2,3]) #  添加节点也可以添加列表
H=nx.path_graph(10) #添加任何nbunch节点，nbunch是节点的任何可迭代容器，它本身不是图中的节点。(如列表、集合、图表、文件等)
G.add_nodes_from(H) #G现在包含H的节点作为G的节点，相反，也可以将图H用作G中的节点。G.add_node(H)

# 添加连线
G.add_edge(1,2) #通过一次添加一条边来生长G
e=(2,3)
G.add_edge(*e) # 打开边缘元组*
G.add_edges_from([(1,2),(1,3)]) #通过添加边列表来生长G
G.add_edges_from(H.edges()) #添加任何nbunch边

# 移除边或点
G.remove_node(1)
G.remove_nodes_from(H)
G.remove_edge()
G.remove_edges_from()

nx.draw(G) # 绘图
G.number_of_nodes() #查询节点数
G.number_of_edges() #查询边数
G.nodes() # 查询节点
G.edges() #查询边
G.neighbors(1) # 查询1的邻近
