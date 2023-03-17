n=eval(input())
list1=list(map(int,input().split()))
list1.sort()
list2=[str(i) for i in list1]
a=' '.join(i for i in list2)
print(a)
