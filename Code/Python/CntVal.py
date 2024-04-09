s=str(input())
k=''
for i in s:
    cnt=0
    for j in s:
        if i == j:
            cnt+=1
    if i not in k:
        print(i,":",cnt)
        k+=i