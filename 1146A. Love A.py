s = input()
n = len(s)
a = 0

for i in range(n):
    if(s[i]=='a'):
        a=a+1
if(n%2):
    n=n+1

if(a>n/2):
    print(n)
else:
    print(2*a-1)

