import itertools

n = int(input("Enter a number: "))
ls = [i for i in range(1,n+1)]
perm = list(itertools.permutations(ls))
print(len(perm))
for i in range(0,len(perm)):
    for j in range(0,len(perm[0])):
        print(perm[i][j],end=' ')
    print()    
