t = int(input())
for j in range(t):
	n  = int(input())
	ans =1
	for i in range(1,n+1):
		ans *= i
	print(ans)