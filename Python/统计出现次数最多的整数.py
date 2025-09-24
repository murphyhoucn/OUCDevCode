x=input().split()
words=[int(i) for i in x]
##print(words)
d={}
for word in words :
   d[word]=d.get(word,0)+1
z=[(m,n) for m,n in d.items() if n==max(d.values())]
z.sort(key=lambda x:x[0],reverse=True)
for i,j in z:
   print(i,j)
   
