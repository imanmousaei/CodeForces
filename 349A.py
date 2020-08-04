n = int(input())

cnt = [0]*110
s = ""
s = input()
s = s.split()


for i in range(n):
	a = int(s[i])
	cnt[a]+=1
	if(a==50):
		if(cnt[25]>=1):
			cnt[25]-=1
		else:
			print("NO")
			exit(0)

	elif(a==100):
		if(cnt[50]>=1 and cnt[25]>=1):
			cnt[50]-=1
			cnt[25]-=1
		elif(cnt[25]>=3):
			cnt[25]-=3
		else:
			print("NO")
			exit(0)


print("YES")