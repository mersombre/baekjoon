########## Python 2 ##########
# 1번 좀 더 간단하게

a = int(input())
cnt = 0

for i in range(1, a+1):
    if i < 100:
        cnt += 1 # iteration 동안 여기를 += 1로 해서
    else:
				# 여기서 굳이 99에서 시작해서 for 새로 만들고 돌지 않아도 됨
        arr = list(map(int, str(i)))
        if arr[0] - arr[1] == arr[1] - arr[2]:
            cnt += 1

print(cnt)


# 68ms 걸림
