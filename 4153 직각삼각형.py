
while 1:
    a, b, c = map(int, input().split())

    if a == 0 and b == 0 and c == 0:
        break
    else:
        if pow(a, 2) + pow(b, 2) == pow(c, 2) or pow(b, 2) + pow(c, 2) == pow(a, 2) or pow(a, 2) + pow(c, 2) == pow(b, 2):
            print("right")
        else:
            print("wrong")
