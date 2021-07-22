num = int(input())
last = 1
i = 1

while num > last:
    i += 1
    last += i # last += ++i가 안 써짐

if i % 2 == 0:
    print('%d/%d' % (i - (last - num), 1 + (last - num)))
else:
    print('%d/%d' % (1 + (last - num), i - (last - num)))
