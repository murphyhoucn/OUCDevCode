a=input()
a=list(a)
a=[int(i) for i in a]
c=str(a.pop(-1))   #最后一位
b=[7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2]
s=0
for i in range(17):
   x=a[i]*b[i]
   s+=x
y=s%11   #余数

m=[0,1,2,3,4,5,6,7,8,9,10]   
n=['1','0','X','9','8','7','6','5','4','3','2']
q=m.index(y)

p=n[q]

if p==c:
   print("合格")
else:
   print("不合格")

