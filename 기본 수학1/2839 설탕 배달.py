########## C랑 같은 방법으로 하면 시간초과 뜸.

n = int(input())

cnt = 0

while 1:
    # 5로 나눠 떨어지면 5로 나누고 종료
    # 5로 빠짐없이 못 담는다 -> 3에 한 번 담는다
    if n % 5 == 0:
        cnt += (n // 5)
        print(cnt)
        break
    else:
        n -= 3
        cnt += 1

    if n < 0:
        print("-1")
        break
