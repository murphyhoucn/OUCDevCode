x=eval(input())
x=list(x)
y=x.copy()
z=x.copy()
y.sort()
z.sort(reverse=True)
if y==x:
   print("升序")
elif z==x:
   print("降序")
else:
   print("无序")
