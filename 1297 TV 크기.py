import math

d, h, w = map(int, input().split())

n = math.sqrt(h * h + w * w)
realh = int(h * d / n)
realw = int(w * d / n)

print(realh, realw)
