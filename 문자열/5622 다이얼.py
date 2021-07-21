########## Python ##########

dial = input()
sum = 0

for i in range (0, len(dial)):
    if 65 <= ord(dial[i]) <= 67:
        sum += 3
    elif ord(dial[i]) <= 70:
        sum += 4
    elif ord(dial[i]) <= 73:
        sum += 5
    elif ord(dial[i]) <= 76:
        sum += 6
    elif ord(dial[i]) <= 79:
        sum += 7
    elif ord(dial[i]) <= 83:
        sum += 8
    elif ord(dial[i]) <= 86:
        sum += 9
    else: sum += 10

print(sum)
