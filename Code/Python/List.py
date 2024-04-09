n = int(input())
a=[]
# dua n phan tu vao mang a
for i in range(n):
    a.append(input())
    print(f"phan tu thu {i} la {a[i]}")
print()
# sap xep mang a
a.sort()
print("sap xep xuoi :",a)
a.sort(reverse=True)
print("sap xep nguoc :",a)
print()
# max va min
print("gia tri lon nhat",max(a))
print("gia tri nho nhat",min(a))
print()
# chen xau
Days=["monday","tuesday","wednesday","thursday","sunday"]
Days.insert(4,"friday")
Days.insert(5,"saturday")
print(Days)
print()
# xoa phan tu khoi chuoi
Days=["monday","tuesday","wednesday","thursday","sunday"]
Days.remove("tuesday")
print(Days)
print()
# xoa phan tu voi chi so cho truoc
Days=["monday","tuesday","wednesday","thursday","sunday"]
Days.pop(4)
print(Days)
print()
# ham dao nguoc 
Days=["monday","tuesday","wednesday","thursday","sunday"]
Days.reverse()
print(Days)
# dem so lan xuat hien cua 1 pt trong mang
Nums=[1,1,1,4,8,3,6,2]
print(Nums.count(1))
#delete all
Nums=[1,1,1,4,8,3,6,2]
Nums.clear()
print(Nums)