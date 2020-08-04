n,h = map(int, input().split())
cnt = 0

a = list(map(int, input().split()))

for i in range(n):
    if(a[i]>h):
        cnt = cnt+2
    else:
        cnt = cnt+1

print(cnt)
