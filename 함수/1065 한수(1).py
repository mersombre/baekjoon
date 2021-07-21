########## Python ##########

a = int(input())
cnt = 0

for i in range(1, a+1):
    if i < 100:
        cnt = a
    else:
        cnt = 99
        for i in range (100, a+1):
            arr = list(map(int, str(i)))
            if arr[0] - arr[1] == arr[1] - arr[2]:
                cnt += 1

print(cnt)
