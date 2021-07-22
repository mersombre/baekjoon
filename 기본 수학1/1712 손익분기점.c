////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int a, b, c; // a 고정비용, b 가변비용, c 가격

    scanf("%d %d %d", &a, &b, &c);

    if (b >= c) {
        /*
        계속 많이 팔면 어쨌든 고정비용은 회수가 가능해서 고려하지 않아도 되고 
        가변비용 >= 가격 이면 이익이 남을 수가 없는 구조임
        */
        printf("-1");
    }
    // a + bx < cx 를 만족하는 가장 작은 해 찾는 것
    // a / (c - b) < x
    else {
        printf("%d", a / (c - b) + 1); // 최소의 자연수
    }

    return 0;
}
