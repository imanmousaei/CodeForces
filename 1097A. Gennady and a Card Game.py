s = input()

a = list(map(str,input().split()))

for i in range(5):
    if(a[i][0]==s[0] or a[i][1]==s[1]):
        print("YES")
        exit()


print("NO")
