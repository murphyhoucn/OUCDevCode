import random
n=int(input())
random.seed(n)
code='BCEFGHJKMPQRTVWXY2346789'
s=[]
for i in range (5):
   c=''
   for j in range(5):
      c+=random.choice(code)   #从code字符串中随机返回一个字符串
   print(c)
   s.append(c)
print(s)
print("-".join(s))


#choice  从序列中随机返回一个元素
