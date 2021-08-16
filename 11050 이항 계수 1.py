import math

n, k = map(int , input().split())
num = int(math.factorial(n) / (math.factorial(k) * (math.factorial(n-k))))

print(num)
