x=eval(input())
s=[]
for i in range(x):
   x=input().split()
   s.append(x)
print(s)
s=[(i,j,k) for i,j,k in s]
a=s.copy()
b=s.copy()
a.sort(key=lambda x:x[1])
for o,p,q in a:
   print(o,p,q)
print()
b.sort(key=lambda x:int(x[2]),reverse=True)
for o,p,q in b:
   print(o,p,q)
