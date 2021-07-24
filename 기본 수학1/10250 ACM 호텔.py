num = int(input())

for i in range(num):
    h, w, n = map(int, input().split())

    if n % h == 0:
        ft = h
        lt = n / h
        print("%d%02d" % (ft, lt))
    else:
        ft = n % h
        lt = n / h + 1
        print("%d%02d" % (ft, lt))
