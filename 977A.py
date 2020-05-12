x,y=[int(x) for x in input().split()]
i=1
while i<=y:
    if x%10==0:
        x=x/10
    else:
        x=x-1
    i+=1
print(int(x))
