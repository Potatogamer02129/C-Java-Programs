s = '''>Rosalind_1
ATCCAGCT
>Rosalind_2
GGGCAACT
>Rosalind_3
ATGGATCT
>Rosalind_4
AAGCAACC
>Rosalind_5
TTGGAACT
>Rosalind_6
ATGCCATT
>Rosalind_7
ATGGCACT'''

sl = s.split('\n')
for i in sl:
    if i[0]=='>':
        sl.remove(i)
print(sl)
matrix = [[0 for _ in range(len(sl[0]))] for _ in range(4)]

for i in range(len(sl[0])):
    s = []
    for j in range(len(sl)):
        s.append(sl[j][i])
    matrix[0][i]=s.count('A')
    matrix[1][i]=s.count('C')
    matrix[2][i]=s.count('G')
    matrix[3][i]=s.count('T')

s = []

for i in range(len(matrix[0])):
    n = []
    for j in range(len(matrix)):
        n.append(matrix[j][i])
    index = n.index(max(n))
    if index==0:
        s.append('A')
    elif index==1:
        s.append('C')
    elif index==2:
        s.append('G')
    elif index==3:
        s.append('T')


print(''.join(s))
for i in range(len(matrix)):
    if i==0:
        print('A: ',end='')
    elif i==1:
        print('C: ',end='')
    elif i==2:
        print('G: ',end="")
    elif i==3:
        print('T: ',end="")
    for j in range(len(matrix[0])):
        print(matrix[i][j],end=" ")
    print()
