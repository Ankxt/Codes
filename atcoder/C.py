n,k=map(int,input().split())
ans=0.0
inx=-1
for i in range(n):
	a,b=map(int,input().split())
	k=k-(b/100.000)*a
	if k<0:
		inx=i+1
		break
print(inx)