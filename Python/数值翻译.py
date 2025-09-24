a="123456789"
b="一二三四五六七八九"
x=dict(zip(a,b))
aaa=input()
aaa=aaa.split(",")
s=''
for i in aaa:
   if len(i)==1:
      print(x[i],end=' ')
   elif len(i)==3:
      print("一百",end=' ')
   else:
      a=str(i)
      b=a[0]
      c=a[1]
      if c=='0'and b!='1':
         print("{}十".format(x[b]),end=' ')
      elif b=='1' and c!='0':
         print("十{}".format(x[c]),end=' ')
      elif a=='10':
         print("十",end=' ')
      else:
         print("{}十{}".format(x[b],x[c]),end=' ')
