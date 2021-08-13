odd = []

for i in range(7):
    num = int(input())
    if num % 2 != 0:
        odd.append(num)
    
if odd: # list가 존재하면
    print(sum(odd))
    print(min(odd))
else:
    print(-1)
        
