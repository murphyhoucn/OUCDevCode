x=eval(input())
s=[]
for i in range(x):
   x=input().split()
   s.append(x)
print(s)
s=[(m,n) for m,n in s]
print(s)
s.sort(key=lambda x:int(x[1]),reverse=True)
print(s)
for m,n in s:
   print(m)
