l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())

num1 = a // c
num2 = b // d

if num1 >= num2:
    if a % c == 0:
        print(l - num1)
    else:
        print(l - num1 - 1)
else:
    if b % d == 0:
        print(l - num2)
    else:
        print(l - num2 - 1)
