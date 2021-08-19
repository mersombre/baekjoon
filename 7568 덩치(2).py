n = int(input())
list = []

for i in range(n):
    x, y = map(int, input().split())
    list.append((x, y))  # x, y를 한 쌍으로 묶어서 list에 append

for i in list:  # list에서 for문 돌림 (x, y) 한 쌍이 i
    rank = 1
    for j in list:
        if i[0] < j[0] and i[1] < j[1]:
            rank += 1
    
    print(rank, end=' ')
