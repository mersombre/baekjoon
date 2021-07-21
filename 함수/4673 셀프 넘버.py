########## Python ##########

arr = [0 for i in range(10001)]
n = 0

for i in range(1, 10001):
    if i < 10000:
        n = i + sum(map(int, str(i))) # map 함수 결과는 list => int로 형변환
        if n <= 10000:
            arr[n] = 1

for i in range(1, 10001): # 인덱스 1 ~ 10000까지
    if arr[i] != 1:
        print(i)
