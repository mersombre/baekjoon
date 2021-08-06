l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())

cnt = 0

while a > 0 or b > 0:
    cnt += 1
    a -= c
    b -= d

print(l - cnt)
