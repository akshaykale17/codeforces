n = int(input())

for i in range(0,n):
	s=input()
	final=0
	flag=0
	flag1=0
	flag3=0
	for x in range(0,len(s)):
		final=final+int(s[x])	
		if flag==1:
			if int(s[x])%2==0:
				flag1=1	
		if int(s[x])%2==0 and s[x]!='0':
			flag1=1
		if s[x]!='0':
			flag3=1
		if s[x]=='0':
			flag=1

	# print(final)
	# print(flag1)
	# print(flag)

	if flag3==0:
		print("red")
	else:	 
		if flag==1 and final%3==0 and flag1==1:
			print("red")
		else:
			print("cyan")