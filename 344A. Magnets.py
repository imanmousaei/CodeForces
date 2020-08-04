n = int(input())
cnt = 1

last = input()

for i in range(n-1):
    a = input()
    if(a[0]==last[1]):
        cnt = cnt+1
    last = a

print(cnt)
