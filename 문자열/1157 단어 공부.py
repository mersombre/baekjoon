########## Python ##########

string = input().upper() #대문자로 변환 후 string에 저장
alp = list(set(string)) #set: 중복 제거

count = []

for i in alp:
    word_cnt = string.count(i) #alp list에 든 글자들을 센다
    count.append(word_cnt) #count한 숫자를 'count' list에 append

if count.count(max(count)) >= 2: #count list에 든 숫자 최댓값 중복 시
    print("?")
else:
    print(alp[count.index(max(count))]) #위치. 즉 인덱스를 출력
