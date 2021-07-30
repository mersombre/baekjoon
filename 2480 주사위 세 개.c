#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int a, b, c;
    int money = 0, large = 0;

    scanf("%d %d %d", &a, &b, &c);

    // 눈 세 개가 같을 때
    if (a == b && b == c && c == a) {
        money = 10000 + a * 1000;
    }

    // 눈 두 개가 같을 때 >> 셋 다 같은 경우는 제외하고 두 개씩 같을 때로 조건 정해줌
    else if (a == b || a == c) {
        money = 1000 + a * 100;
    }
    else if (b == c) {
        money = 1000 + b * 100;
    }

    // 눈이 다 다를 때
    else { 
        // a, b, c 각각이 가장 큰 수일 때
        if (a > b && a > c) {
            large = a;
        }
        else if (b > c && b > a) {
            large = b;
        }
        else if (c > a && c > b) {
            large = c;
        }
        
        money = large * 100;
    }

    printf("%d", money);

    return 0;
}
