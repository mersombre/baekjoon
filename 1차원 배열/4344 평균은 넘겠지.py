########## Python ##########

tcn = int(input())

for i in range(tcn):
    nums = list(map(int, input().split(' ')))
    avg = sum(nums[1:]) / nums[0] # nums[0]은 학생 수이고 그 뒤부터는 다 점수

    cnt = 0
    for score in nums[1:]:
        if score > avg:
            cnt += 1

    print(str("%.3f%%" % round(cnt / nums[0] * 100, 3)))
    
		##### variation #####
		#1 print(str("%.3f%%" % (cnt / nums[0] * 100)))
		#2 print(str("%.3f" % round(cnt / nums[0] * 100, 3)) + '%')
	  
		#3    rate = cnt/nums[0] * 100 (안쪽 indent)
		#  print(f'{rate:.3f}%')
    
    
    #################
    # 파이썬은 미리 배열을 a = [ ] 식으로 선언해놓고 쓴다기보다는 map으로 받아서 list로 형변환 해주는 식이 많아 보인다.
