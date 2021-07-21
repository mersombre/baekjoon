########## Python ##########

num = int(input())    
for i in range(num, 0, -1): # num ~ 1까지 1씩 줄어듦
    print(' ' * (i - 1) + '*' * (num - i + 1))
		# 공백 = i - 1개
		# 별 = num - (i - 1)개 // 입력받은 num에서 공백 수를 뺀다
