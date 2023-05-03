# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import os
import random 
import shutil

src = input("源：") #要复制文件所在路径

# print(src)
# print(dst)
# 获取当前源目录下的所有文件夹
path = os.listdir(os.getcwd())
dirfile = []
for i in path:
    if os.path.isdir(i):
        dirfile.append(i)
num = len(dirfile)

os.mkdir(src + '\\newdir\\')

dst = src + '\\newdir\\' #想要复制到的路径

# 从每个文件夹下随机获取三十个文件
N = 3
for i in range(num):
	src0 = src + '\\' + dirfile[i]
	files=os.listdir(src0)
	lenfiles = len(files)
	samplenum = random.sample(range(0,lenfiles),N)
	# print(samplenum)
	for j in range(len(samplenum)):
		# len(samplenum) 一定等于 N
		filepath = src0 + '\\' + files[samplenum[j]]
		shutil.copy(filepath,dst)


