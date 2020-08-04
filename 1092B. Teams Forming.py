n = int(input())

a = list(map(int,input().split()))

a.sort()
cnt = 0

#print(a)

for i in range(0,n-1,2):
    cnt = cnt + a[i+1] - a[i]

print(cnt)
