s = input("Input main string: ")
t = input("Input Substring: ")
n=0
while (n:=s.find(t,n))!=-1:
    print(n+1,end=" ")
    n+=1
