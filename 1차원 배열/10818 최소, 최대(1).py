########## Python1 ##########

n = int(input())
nlist = list(map(int, input().split())) # int로 받아서
# map 모든 원소에 int 씌워줌 / list 형변환
print(min(nlist), max(nlist))
