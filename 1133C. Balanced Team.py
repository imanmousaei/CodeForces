n = int(input())

a = list(map(int,input().split()))

dp = [1 for i in range(n)]
cnt = 1
a.sort()
mn = a[0]
mx = 1
print(a)

for i in range(1,n):
    for j in range(0,6):
        if(i-j>=0):
            dp[i-j] = dp[i-j]+1
        
        

print(max(dp))
