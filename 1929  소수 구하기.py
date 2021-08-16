import math

#############소수 구하기############
# 2부터 k/2까지 나눴을 때 나눠지는 숫자가 존재하지 않으면 소수임.
# >>> k의 약수는 k/2보다 클 수 X
# 수학적으로 좀 더 들어가면 root k(k의 제곱근)까지 살펴보면 됨. >> ????? 알아볼 것


def isPrime(num):
    if num == 1:  # 1은 소수 아님
        return False

    sqnum = int(math.sqrt(num))  # num의 제곱근
    for i in range(2, sqnum + 1):  # 2 ~ sqnum
        if num % i == 0:  # 나눠 떨어지면
            return False  # 소수 아님 >> False
    return True


m, n = map(int, input().split())
for i in range(m, n + 1):  # m ~ n
    if isPrime(i): print(i)
