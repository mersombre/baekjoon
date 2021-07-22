########## Python ##########

a, b, c = map(int, input().split())

if b >= c:
    print("-1")
else:
    print(a // (c - b) + 1) # 정수 나눗셈
		# print(int(a / (c - b)) + 1) 로 그냥 int 써도 됨
