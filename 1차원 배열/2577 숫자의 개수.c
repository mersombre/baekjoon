////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
 
    int num[3];
    int mul = 1;
    int cnt[10] = { 0, }; // 0 ~ 9까지 각 숫자별 cnt 저장


    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
        mul *= num[i]; // mul = A * B * C
    }

    while (mul > 0) {
        cnt[mul % 10]++; // mul 값 10으로 나눈 나머지 자리의 cnt 인덱스 ++
        mul /= 10; // cnt 추가해주고 나서 mul값은 10으로 나누기
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", cnt[i]);
    }

    return 0;
}
