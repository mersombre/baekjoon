while 1:
    num = input()
    if num == '0': break

    rev = num[::-1]  # num 뒤집기
    if rev == num:
        print("yes")
    else:
        print("no")
