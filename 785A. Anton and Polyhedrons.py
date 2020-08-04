n = int(input())
cnt = 0

for i in range(n):
    s = input()
    if(s=="Tetrahedron"):
        cnt = cnt+4
    elif(s=="Cube"):
        cnt = cnt+6
    elif(s=="Octahedron"):
        cnt = cnt+8
    elif(s=="Dodecahedron"):
        cnt = cnt+12
    elif(s=="Icosahedron"):
        cnt = cnt+20


print(cnt)
