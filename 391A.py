y=input()
final=0
i=0

while i<len(y):
    if y[i]=='A':
        flag=0
        while i<len(y):
            if y[i]=='A':
                flag+=1
            else:
                break
            i+=1
        if flag%2==0:
            final=final+1
    elif y[i]=='T':
        flag=0
        while i<len(y):
            if y[i]=='T':
                flag+=1
            else:
                break
            i=i+1
        if flag%2==0:
            final=final+1
    elif y[i]=='G':
        flag=0
        while i<len(y):
            if y[i]=='G':
                flag+=1
            else:
                break
            i+=1
        if flag%2==0:
            final=final+1
    elif y[i]=='C':
        flag=0
        while i<len(y):
            if y[i]=='C':
                flag+=1
            else:
                break
            i+=1
        if flag%2==0:
            final=final+1



print(final)
