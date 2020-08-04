n = int(input())
S = int(input())
a=[]
b=[]
s=[]
typeA = 0
typeB = 0


for i in range(1,n):
    s.append( int(input()) )
    a.append( int(input()) )
    b.append( int(input()) )

for i in range(1,n):
    typeA += s[i] * a[i]
    typeB += s[i] * b[i]

if(typeA >= typeB):
    print(typeA)
else:
    print(typeB)
