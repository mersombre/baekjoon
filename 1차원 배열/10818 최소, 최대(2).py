########## Python2 ##########

n = int(input())
nlist = list(map(int, input().split()))
max_num = nlist[0]
min_num = nlist[0] # 첫 원소를 max, min으로 주고

for num in nlist:
    if num > max_num:
        max_num = num
    if num < min_num:
        min_num = num

print(min_num, max_num)
