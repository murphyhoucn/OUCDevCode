n=eval(input())
d={}
for i in range(n):
   a=input().split()
   k=a[0]
   v=a[1]
   d[k]=v
print(d)

a=input()

if a in d:
   print(d[a])
else:
   print("not found")
