with open('NewFasta.txt','r') as f:
    currentSeq = ''
    sl = []
    for line in f:
        if line.startswith('>'):
            if currentSeq:
                sl.append(currentSeq)
                currentSeq = ''
        currentSeq+=line
    if currentSeq:
        sl.append(currentSeq)

print(sl)
