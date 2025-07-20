s = input("Enter a DNA string to get a reverse complement: ")
c = []
i=len(s)-1
while i>=0:
    if s[i]=='A':
        c.append('T')
    elif s[i]=='G':
        c.append('C')
    elif s[i]=='T':
        c.append('A')
    elif s[i]=='C':
        c.append('G')
    i-=1
cs = ''.join(c)
print(cs)
