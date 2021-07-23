########## Python ##########

a, b, v = map(int, input().split())

if a == v:
    cnt = 1
elif (v-b) % (a-b) == 0:
    cnt = (v-b) / (a-b)
else:
    cnt = (v-b) / (a-b) + 1

print(int(cnt))
