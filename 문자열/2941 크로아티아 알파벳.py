########## Python ##########

chinput = input()

#미리 정의해둔다
chalp = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in chalp:
    chinput = chinput.replace(i, 'a')
    # chinput에 든 chalp 속 정의된 크로아티아 알파벳들을 a로 바꾼다

print(len(chinput)) # 그 개수를 셈
