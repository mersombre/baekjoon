########## Python ##########

num = int(input())

beehive_cnt = 1 # 벌집 개수
i = 1

while num > beehive_cnt: # 벌집 개수보다 input으로 들어온 값이 더 크면
    beehive_cnt += 6 * i # 벌집 개수 6 12 18 ... 만큼 늘려감
    i += 1 # 벌집 개수가 6의 배수만큼 늘어나야 하니까 i가 1 2 3 ... 으로 증가하게

print(i) # input으로 들어온 값이 총 벌집 개수(해당 둘레 끝번)보다 작을 때
         # 그 i값 출력
