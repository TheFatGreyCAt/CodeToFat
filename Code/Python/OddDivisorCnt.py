def DivisorCnt(n):
    cnt=0
    for i in range(1,n+1):
        if n%i==0:
            cnt+=1
    return cnt%2!=0
def Solve(a,b):
    cnt=0
    for i in range(a,b+1) :
        if DivisorCnt(i):
            cnt+=1
    return cnt
a=int(input())
b=int(input())
print(Solve(a,b))