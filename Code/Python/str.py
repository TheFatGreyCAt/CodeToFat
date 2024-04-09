n=str(input())
# full capslock
print(n.upper())
# reverse capslock
print(n.lower())
# check : only nums and text
print(n.isalnum())
# check : only text
print(n.isalpha())
# check : only nums
print(n.isnumeric())
# split()
s="This is a cat"
print(s.split(" "))
# join(), noi day hoac loai bo phan space thua
lst=["the","fat","cat"]
print(" ".join(lst))
#replace
k="fatcat"
print(k.replace("a","e"))