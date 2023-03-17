s=eval(input())
x=eval(input())
if x==s:
   if x>=50:
      m=x*80
   elif x<50:
      m=x*90
elif x<s:
   if x>=50:
      m=x*80+(s-x)*60
   elif x<50:
      m=x*90+(s-x)*60
elif x>s:
   if s>=50:
      m=s*80+(x-s)*45
   elif s<50:
      m=s*90+(x-s)*45
print(m)
