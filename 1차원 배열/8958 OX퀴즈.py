########## Python ##########

n = int(input())

for i in range(n):
    sum = 0
    score = 1
    tcase = input()

    for j in range(len(tcase)):
        if tcase[j] == 'O':
            sum += score
            score += 1
        if tcase[j] == 'X':
            score = 1

    print(sum)
