a, b = map(int, input().split())

max = max(a, b)
min = min(a, b)
sum = (a + b) * (max - min + 1) / 2

print(int(sum))
