def factorial(a):
    mul = 1
    while a != 0:
        mul *= a
        a -= 1
    return mul


n, k = map(int , input().split())
num = int(factorial(n) / (factorial(k) * factorial(n - k)))

print(num)
