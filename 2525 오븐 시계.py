nowh, nowm = map(int, input().split())
takes = int(input())

carry = 0

if nowm + takes <= 59:
    ovh = nowh
    ovm = nowm + takes
else:
    ovm = nowm + takes

    while ovm >= 60:
        ovm -= 60
        carry += 1

    if nowh + carry < 24:
        ovh = nowh + carry
    else:
        ovh = nowh + carry - 24

print(ovh, ovm)
