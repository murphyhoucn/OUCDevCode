x1=eval(input())


x=x1+1
while True:
   for i in range(2,x):
      if x%i==0:
         break
   else:
      a=x
      break
   x+=1


x=x1-1
while True:
   for i in range(2,x):
      if x%i==0:
         break
   else:
      b=x
      break
   x-=1


if a-x1>x1-b:
   print(b)
if a-x1<x1-b:
   print(a)
if a-x1==x1-b:
   print(b,a)
