def isPerfectNumber(n):
    s = 1
    for i in range(2, int(n ** 0.5)+ 1):
        if n % i == 0:
            s += (i+n//i)
    return s==n

def main():
    n = int(input())
    if (n <= 1 or n >= 100000):
        print("N/A")
    else:
        for i in range(2, n + 1):
            if isPerfectNumber(i):
                print(i, end= " ")
main()