n,m,k = map(int,input().split())

p = list(map(int,input().split()))
l=0
cnt=0

for i in range(m):
    if(i==m-1 or (int((p[i+1]-1-l)/k)>int((p[i]-1-l)/k))):
        cnt = cnt+1
        l = i+1
        #print(i,l,cnt)

print(cnt)
        
