def fib(n):
    if n<=1:
        return n
    else:
        return fib(n-1)+fib(n-2)

nterms=int(input("enter the number to find the fibonacci series:"))
if nterms<=0:
    print("please enter the positive integer")
else:
    for i in range(nterms):
        print(fib(i))