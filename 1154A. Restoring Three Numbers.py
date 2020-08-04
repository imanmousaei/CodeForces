a = list(map(int,input().split()))

sum = max(a)

for i in range(4):
    if(a[i]!=sum):
        print(sum-a[i], end=' ')
        
