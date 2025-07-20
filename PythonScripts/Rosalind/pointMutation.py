
s = input("Enter first DNA String: ")
t = input("Enter second DNA String: ")
m = 0
for i in  range(0,len(s)):
    if s[i]!=t[i]:
        m+=1
print(m)
