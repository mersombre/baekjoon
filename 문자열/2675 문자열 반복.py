########## Python ##########

num = int(input())

for i in range (num):
    tcnum, tc = input().split() #띄어쓰기로 구분해서 받음

    output = ""
    for j in range(len(tc)):
        output += int(tcnum) * tc[j] #tcnum(돌릴 횟수)만큼 tc[j]에 곱해서 계속 붙여준다
    print(output)
