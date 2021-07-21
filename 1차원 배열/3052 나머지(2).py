########## Python2 ##########
########## 파이썬 함수 이용: set ##########

numarr = []

for i in range(10):
    num = int(input()) # 그냥 i loop로 num 입력 받아줌
    rmder = num % 42 # 나머지는 num 들어오는 대로 바로 변환
    numarr.append(rmder) # 배열에 나머지 넣어주기

numset = set(numarr) # set 함수 이용
                     # 저장된 자료형의 중복 제거
print(len(numset)) # 리스트 numset의 길이 출력
