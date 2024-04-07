def get_unique_values(lst):
    arr=[]
    for i in lst:
        if i not in arr:
            arr.append(i)
    return arr
n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()))
print(get_unique_values(lst))