########## Python ##########

n = int(input())
x = n
cnt = 0

while 1:
    ten = n // 10 # 파이썬 정수 나눗셈은 //..
    one = n % 10
    n = (one * 10) + ((ten + one) % 10)
    cnt += 1
    if x == n:
        break

print(cnt)
