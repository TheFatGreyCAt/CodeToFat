# print("MeoloWorld!")
n=int(input())
a=[]
for i in range(n):
    a.append(int(input()))
def solve(a):
    if len(a)==2:
        return a[0]!=a[1]
    else:
        b=[]
        for i in range(len(a)):
            b.append(a[i])
        b.sort()
        a.sort(reversed=True)
        print(a)
        print(b)
solve(a)