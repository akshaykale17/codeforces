#nineteen n=3 e=3 i=1 t=1

string=input();
non=0
noe=0
noi=0
noot=0
for x in string:
    if x=="n":
        non=non+1
    if x=="e":
        noe=noe+1
    if x=="i":
        noi=noi+1
    if x=="t":
        noot=noot+1
print(non)
print(noe)
print(noi)
print(noot)
final=0
if (non>=3)and(noe>=3)and(noi>=1)and(noot>=1):

    non=non-3
    noe=noe-3
    noi=noi-1
    noot=noot-1
    final=final+1
    while (non>=2)and(noe>=3)and(noi>=1)and(noot>=1):
        non=non-3
        noe=noe-3
        noi=noi-1
        noot=noot-1
        final=final+1


print(final)
