########## Python1 ##########
########## (C2와 같은 방법) ##########

numarr = [0 for i in range(42)] # 그냥 일반 배열로 numarr = [] 하면
																# index error로 런타임 에러 발생 => 길이 지정해줌
cnt = 0

for i in range(10):
    num = int(input())
    numarr[num % 42] += 1

for i in range(42):
    if numarr[i] != 0:
        cnt += 1

print(cnt)
