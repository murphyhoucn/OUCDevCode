import os

files=os.listdir(".")
# print(files)
path = os.getcwd()
# print(path)
num = len(files)
# print(num)

path = path +'\\'

with open('filename.txt', mode='w', encoding='utf-8') as w:
    for i in range(num):
        path0 = path + files[i]
        w.write(path0)
        w.write('\n')



    w.close()
