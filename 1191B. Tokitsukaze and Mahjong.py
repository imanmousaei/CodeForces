a = list(map(str,input().split()))
a.sort()

#print(a[0],a[1],a[2])

if(a[0]==a[1]==a[2]):
    print(0)

elif(a[0][1]==a[1][1]==a[2][1] and int(a[0][0])==int(a[1][0])-1 and int(a[1][0])==int(a[2][0])-1):
    print(0)

elif(a[0]==a[1] or a[1]==a[2] or a[0]==a[2]):
    print(1)

elif(a[0][1]==a[1][1] and abs(int(a[0][0])-int(a[1][0]))<=2):
    print(1)

elif(a[1][1]==a[2][1] and abs(int(a[1][0])-int(a[2][0]))<=2):
    print(1)

elif(a[0][1]==a[2][1] and abs(int(a[0][0])-int(a[2][0]))<=2):
    print(1)
    
else:
    print(2)
