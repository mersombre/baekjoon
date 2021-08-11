n = int(input())
call = list(map(int, input().split())) # list로 받아서

y = 0
m = 0

for i in call: # for문 돌릴 때 list에서 돌림
    y += (i//30 + 1) * 10 # 돌리는 값은 i
    m += (i//60 + 1) * 15

if y > m:
    print("M %d" % m)
elif y < m:
    print("Y %d" % y)
else:
    print("Y M %d" % y)
