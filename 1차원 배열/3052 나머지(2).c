////////// C2 //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
 
    int num; // 숫자는 그냥 받고
    int numarr[42] = { 0, }; // 42로 나눈 나머지(0 ~ 41)의 배열
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        numarr[num % 42]++; // '해당 num을 42로 나눈 나머지' index 자리에 넣기
    }

    for (int i = 0; i < 42; i++) {
        if (numarr[i] != 0) cnt++; // 배열의 값이 0이 아니면 cnt++
   }

    printf("%d", cnt);

    return 0;
}
