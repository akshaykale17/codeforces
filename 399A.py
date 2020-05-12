n,p,k=[int(y) for y in input().split()]

if p+k>=n:
    er=n+1
else:
    er=p+k+1

if p-k<=1:
    sr=1
else:
    sr=p-k
if p+k>=n and p-k<=1:
    for z in range(sr,er):
        if z==p:
            print("("+str(p)+")",end=' ')
        else:
            print(z,end=' ')
if p+k>=n and p-k>1:
    print("<<",end=' ')
    for z in range(sr,er):
        if z==p:
            print("("+str(p)+")",end=' ')
        else:
            print(z,end=' ')
if p+k<n and p-k<=1:
    for z in range(sr,er):
        if z==p:
            print("("+str(p)+")",end=' ')
        else:
            print(z,end=' ')
    print(">>",' ')
if p+k<n and p-k>1:
    print("<<",end=' ')
    for z in range(sr,er):
        if z==p:
            print("("+str(p)+")",end=' ')
        else:
            print(z,end=' ')
    print(">>",' ')
