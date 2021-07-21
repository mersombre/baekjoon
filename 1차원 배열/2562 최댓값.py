########## Python ##########

num = []
for i in range(9):
    num.append(int(input())) # append로 배열에 집어넣기
print(max(num), num.index(max(num))+1)
