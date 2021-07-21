########## Python ##########

num = []
mul = 1

for i in range(3):
    num.append(int(input())) # append로 배열에 집어넣기

mul = list(str(num[0] * num[1] * num[2])) # 곱한 값을 str으로 바꿔주고 list로 형변환

for i in range(10):
    print(mul.count(str(i))) # count 이용
