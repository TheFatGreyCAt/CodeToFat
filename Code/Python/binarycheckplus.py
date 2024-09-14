n=int(input())
m=int(input())
def tnp(n):
    sn=str(n)
    t=0
    for i in range(1,len(sn)+1):
        t+=((n%10)*(2**(i-1)))
        n=n//10
    return t
def checknp(n):
    n=str(n)
    for i in n:
        if i != '1' and i != '0':
            return False
    return True
def solve(n,m):
    if(checknp(n)==False or checknp(m)==False):
        print("N/A")
    else:
        print(tnp(n)+tnp(m))
solve(n,m)