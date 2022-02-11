def fib(n):
    if n<2:
        return n
    return fib(n-2)+ fib(n-1)

listNums =[]
n=1

while fib(n)<4000000:
    if fib(n)%2==0:
        listNums.append(fib(n))
    n+=1

print(sum(listNums))
