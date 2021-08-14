#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    long long a, b;
    long long sum; // 합은 int 최대 범위 벗어날 수 있기 때문에 long long으로 준다

    scanf("%lld %lld", &a, &b);

    if (a <= b) {
        sum = (b * b + b - a * a + a) / 2;
    }
    else {
        sum = (a * a + a - b * b + b) / 2;
    }

    printf("%lld", sum);

    return 0;
}
