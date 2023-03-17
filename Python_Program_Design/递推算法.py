s=100
h=100
for i in range(2,11):
   s+=h
   h=h/2 
print(s,end=" ")
while i==10:
   print(h/2)
   break
