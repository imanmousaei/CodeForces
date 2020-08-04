n,k = map(int,input().split())

a = list(map(int,input().split()))
d = [0 for col in range(k+8)]
cnt = 0

for i in range(n):
    b = a[i]%k
    d[b] = d[b] + 1


for i in range(k):
    t = (k-i)%k
    
    while(d[i]>=1 and d[t]>=1):
        if(t==i and d[t]<=1):
            d[t]=0
            continue
        d[i] = d[i] - 1
        d[t] = d[t] - 1
        cnt = cnt+2
        #print(d)
        

print(cnt)
