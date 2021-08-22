a = list(map(int, input().split()))
b = list(map(int, input().split()))

suma = sum(a)
sumb = sum(b)

if suma >= sumb:
    print(suma)
else:
    print(sumb)
