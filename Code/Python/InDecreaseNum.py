#findNumber , author :TuanLQ7 from codelearn.io
n = int(input())
def check(n):
    n=str(n)
    a=[]
    b=[]
    for i in n:
        a.append(i)
        b.append(i)
    a.sort()
    b.sort(reverse=True)
    a="".join(a)
    b="".join(b)
    if a==n or b==n:
        return n
    else:
        return 0
def findNumber(n):
    while(check(n)==0):
        n+=1
    return check(n)
print(findNumber(n))
# kiểm tra 1 số có phải là số tăng giẳm hay không (các pt số tăng/giảm), vd dãy tăng : phần tử a[i] >= a[i+1] , in ra số tăng giảm gần nhất