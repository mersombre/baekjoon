a, b = map(int, input().split())

if a >= b:
    print(int((a*a + a - b*b + b) / 2))
else:
    print(int((b*b +b - a*a + a) / 2))
