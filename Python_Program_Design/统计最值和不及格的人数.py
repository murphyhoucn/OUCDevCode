x=input().split()
x=[int(i) for i in x]
print(max(x))
print(min(x))
n=0
for i in x:
   if i <60:
      n+=1
print(n)
