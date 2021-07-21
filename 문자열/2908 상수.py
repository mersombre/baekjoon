########## Python ##########

num1, num2 = input().split()

newnum1 = num1[::-1] #문자열 뒤집기
newnum2 = num2[::-1]

if newnum1 > newnum2:
    print(newnum1)
else:
    print(newnum2)
