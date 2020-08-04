a = input()
b = input()
h1 = int(a[0])*10+int(a[1])
m1 = int(a[3])*10+int(a[4])
h2 = int(b[0])*10+int(b[1])
m2 = int(b[3])*10+int(b[4])
#print(h1,m1,h2,m2)
s = h1*60 + m1 + h2*60 + m2
s = s/2
#print(s)
h = int(s/60)
m = int(s%60)
if(h<10):
    print(0,end="")
print(h,end=":")
if(m<10):
    print(0,end="")
print(m)

