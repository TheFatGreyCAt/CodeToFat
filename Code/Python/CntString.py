n=str(input())
m=str(input())
dem=0
for i in range(len(n)):
    if n[i:i+len(m)] == m:
        dem+=1
print(dem)