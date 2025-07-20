#Write a program to read multiple fasta file AND put it all ina single fasta file
import os
f1 = open('NewFasta.txt','w')

for file in os.listdir():
    s = ''
    if file.endswith('fasta'):
        f = open(file)
        s = f.read()
        f1.write(s)
        f.close()

f1.close()
