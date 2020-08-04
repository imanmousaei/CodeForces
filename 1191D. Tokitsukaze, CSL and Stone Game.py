n = int(input())

a = list(map(int,input().split()))
o = 0

for i in range(n):
    if(a[i]%2==1):
        o = o+1
        print(i)
    

if(o%2==1):
    print("sjfnb")
else:
    print("cslnb")


