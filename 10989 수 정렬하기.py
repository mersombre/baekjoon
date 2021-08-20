import sys

n = int(input())
cnt = [0] * 10001

for i in range(n):  # n 크기가 상당히 크기 때문에
    num = int(sys.stdin.readline())  # sys.stdin.readline으로 받는다
    cnt[num] += 1

for i in range(10001):
    if cnt[i] != 0:
        for j in range(cnt[i]):
            print(i)
