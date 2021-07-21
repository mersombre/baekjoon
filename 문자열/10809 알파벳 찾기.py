########## Python ##########

#알파벳 리스트
alplist = list('abcdefghijklmnopqrstuvwxyz')

#크기 26짜리 -1이 든 array
alp = [-1 for i in range(len(alplist))]

#입력 받기
s = list(map(str, input()))

for i in range(len(s)): #입력 받은 크기동안 loop
    #s[i]의 알파벳 리스트 속 값이 -1이면 값을 i로 업데이트
    if alp[alplist.index(s[i])] == -1:
        alp[alplist.index(s[i])] = i

for i in range(0, 26):
    print(alp[i], end=" ") #띄어쓰기로 구분 / 그냥 직접 띄어쓰기 치면 엔터로 구분됨
