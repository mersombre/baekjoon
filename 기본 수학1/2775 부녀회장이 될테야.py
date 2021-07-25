# 0으로 초기화된 2차원 배열
ppl = [[0 for col in range(15)] for row in range(15)]

for i in range(0, 15):
    ppl[0][i] = i

for i in range(1, 15):
    for j in range(1, 15):
        ppl[i][j] = ppl[i - 1][j] + ppl[i][j - 1]

num = int(input())

for i in range(num):
    k = int(input())
    n = int(input())
    print("%d" % (ppl[k][n]))
