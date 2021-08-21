n = int(input())
list = []

for i in range(n):
    age, name = map(str, input().split())
    age = int(age)  # int형으로 바꾸어서 age 다시 저장해주고
    list.append((age, name))  # list에 튜플로 묶어서 저장

list.sort(key=lambda x: (x[0]))  # x[0] 기준 오름차순(기본) 정렬

for x in list:
    print(x[0], x[1])
