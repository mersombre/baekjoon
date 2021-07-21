########## Python ##########

# 두 변수 한 번에 입력 받기(공백 기준)
cnt, x = map(int, input().split())
array = list(map(int, input().split())) # for문 전에 배열 입력받는 것 가능
# 근데 개수를 cnt만큼 제한되게 받는 건 아니다

for i in range(cnt):
    if(array[i] < x):
        print(array[i])
