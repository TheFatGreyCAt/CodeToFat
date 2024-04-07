n =int(input())
while(n%10==0):
    n//=10
for i in range(len(str(n))):
    print(n%10,end='')
    n//=10