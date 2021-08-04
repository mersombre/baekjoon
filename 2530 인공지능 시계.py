h, m, s = map(int, input().split())
takes = int(input())

carryh = 0
carrym = 0

if s + takes <= 59:
    print("%d %d %d" % (h, m, s + takes))
else:
    news = s + takes
    while news > 59:
        news -= 60
        carrym += 1

    newm = m + carrym
    if newm <= 59:
        print("%d %d %d" % (h, newm, news))
    else:
        while newm > 59:
            newm -= 60
            carryh += 1

        newh = h + carryh
        while newh > 23:
            newh -= 24
        print("%d %d %d" % (newh, newm, news))
