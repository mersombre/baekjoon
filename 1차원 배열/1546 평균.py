########## Python ##########

n = int(input())
score = list(map(int, input().split()))
maxsc = max(score)

for i in range(n):
    score[i] = score[i]/maxsc*100 # 파이썬은 형 변환 알아서 됨
    avg = sum(score)/n

print("%.2f" % avg)
