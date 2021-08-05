a = list(map(int, input().split()))

for i in range(len(a) - 1):
    for j in range(len(a) - i - 1):
        if a[j] > a[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]

for i in a:
    print(i, end = " ")
