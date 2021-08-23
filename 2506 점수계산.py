n = int(input())
cnt = 0
sum = 0

score = list(map(int, input().split()))

for i in range(n):
    if score[i] == 1:
        cnt += 1
        sum += cnt
    else: cnt = 0

print(sum)
