a, b, c = map(int, input().split())
money = 0

if a == b == c:
    money = 10000 + a * 1000
elif a == b or a == c:
    money = 1000 + a * 100
elif b == c:
    money = 1000 + b * 100
else:
    money = 100 * max(a, b, c)

print(money)
