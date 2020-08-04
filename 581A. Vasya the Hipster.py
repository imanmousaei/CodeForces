a,b = map(int,input().split())
cnt = 0

cnt = min(a,b)
a = a-cnt
b = b-cnt

print(cnt,end=" ")

cnt =int( a/2 + b/2)

print(cnt)
