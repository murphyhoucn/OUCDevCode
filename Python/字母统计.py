x=input()
x=[i for i in x]
d={}

for i in x:
   d[i]=d.get(i,0)+1
z=[(m,n) for m,n in d.items() if n==max(d.values())]
z.sort(key=lambda x:x[0])
print(z)
for i,j in z:
   print(i,j)
