import string
a=input()
for b in a :
    if b in string.punctuation:
        a=a.replace(b," ")
text=a.split()
print(text)


