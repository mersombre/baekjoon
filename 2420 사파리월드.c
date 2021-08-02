#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {

    long long n, m;

    scanf("%lld %lld", &n, &m); // 입력받는 수 범위가 -20억 ~ 20억이므로 int로는 못 받음

    printf("%lld", llabs(n - m));
    // 절댓값 함수 abs (헤더: stdlib.h)
    // llb의 절댓값은 llabs

    return 0;
}
