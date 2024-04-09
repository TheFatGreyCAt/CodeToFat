# print("MeoloWorld!")
s=str(input())
dem1=0
for i in s:
    if i == ",":
        dem1+=1
print((s.replace(".",",",1)).replace (",",".",dem1))