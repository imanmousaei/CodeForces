a,b = map(int,input().split())
cnt = 0
while(a<=b):
    cnt = cnt+1
    a = a*3
    b = b*2


print(cnt)
