codons = {}
with open ('Codons.txt','r') as Fc:
    for line in Fc:
        sl = line.split()
        codons[sl[0]]=sl[1]

s = input("Enter a fileName or filepath: ")
with open(s,'r') as f:
    rna = f.read()
    for i in range(0,len(rna),3):
        c = rna[i:i+3]
        if codons[c]=='*':
            break
        if '\n' not in c:
            print(codons[c],end='')


