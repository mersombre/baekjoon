import math

l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())

print(l - max(math.ceil(a/c), math.ceil(b/d)))
# ceil: 주어진 숫자보다 크거나 같은 숫자를 int로 반환
