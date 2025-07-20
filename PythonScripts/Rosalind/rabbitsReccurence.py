
def fib(n,k):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fib(n-1,k)+k*fib(n-2,k)



n = int(input("Enter months: "))
k = int(input("Enter pair of bachha: "))

result = fib(n,k)
print(result)
