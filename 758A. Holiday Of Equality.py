n = int(input())

a = list(map(int,input().split()))

mx = max(a)
cnt = 0

for i in range(n):
    cnt = cnt + mx - a[i]

print(cnt)
