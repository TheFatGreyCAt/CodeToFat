a=int(input())
b=int(input())
c=int(input())
def typeOfTriangle(a,b,c):
    res=-1
    if(0<=a<=1000 and 0<=b<=1000 and 0<=c<=1000):
        if a>b:
            a,b=b,a
        if a>c:
            a,c=c,a
        if b>c:
            b,c=c,b
        if c<a+b:
            res=0
            if a==b==c:
                res=1
            elif a==b or b==c:
                res=2
            elif c**2==a**2+b**2:
                res=3
        else:
            res=-1
    return res
print(typeOfTriangle(a,b,c))