def change_char(s, p, r):
    return s[:p]+r+s[p+1:]

s = str(input())

for i in range(len(s)):
	# print(i)
	# print(int(s[i]))
	if(i==0 and s[i]=='9'):
		continue
	elif(int(s[i])>4):
		s = change_char(s,i,str(9-int(s[i])))


print(s)