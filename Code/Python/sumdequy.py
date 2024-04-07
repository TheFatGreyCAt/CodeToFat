def dq(n):
    if n==1 :
        return 1
    else:
        return n+dq(n-1)
n=int(input())
print(dq(n))