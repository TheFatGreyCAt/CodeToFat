n=int(input())
def ucln(n,m):
    if(m==0):
        return n
    return(ucln(m,n%m))
mn=0
for i in range(1,n+1):
    m=int(input())
    if mn==0:
        mn=m
    else:
        mn=ucln(mn,m)
print(mn)