x = [0 for i in range(50)]
y = [0 for i in range(50)]

n = int(input())

for i in range(n):
    x[i], y[i] = map(int, input().split())

for i in range(n):
    rank = 1

    for j in range(n):
        if x[i] < x[j] and y[i] < y[j]:
            rank += 1

    print(rank, end=' ')
