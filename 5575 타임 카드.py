for i in range(3):
    h, m, s, hh, mm, ss = map(int, input().split())

    time1 = h*3600 + m*60 + s
    time2 = hh*3600 + mm*60 + ss

    print("%d %d %d" %
          ((time2-time1)/3600, (time2-time1)%3600/60, (time2-time1)%3600%60))
