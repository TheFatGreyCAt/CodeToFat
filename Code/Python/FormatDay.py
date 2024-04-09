s=str(input()) 
def Days(m,y):
    res=31
    if m==2:
        if (y%4==0 and y%100 !=0) or (y%400 == 0):
            res=29
        else:
            res=28
    elif (m in [4,6,9,11]):
        res=30
    return res
def CheckVal(s):
    res="#VALUE"
    if s[4] != '-' and s[6] != '-' or s[4] != '-' and s[7] != '-':
        print(res)
    else:
        s=s.split("-")
        if int(s[1])>12 or int(s[2]) > Days(int(s[1]),int(s[0])):
            print(res)
        else:
            print(f"{s[2]}/{s[1]}/s{0}")
CheckVal(s)