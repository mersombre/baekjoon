#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num;
    int i; // 대각선 그룹 번호
    int last = 1; // 대각선 그룹의 끝 번호

    scanf("%d", &num);

    for (i = 1; num > last; ) { // 끝 번호에 i = 1 2 3 ... 을 더해간다
        last += ++i;
    }

    if (i % 2 == 0) { // 그룹 번호가 짝수면
        printf("%d/%d", i - (last - num), 1 + (last - num));
    }
    else { // 그룹 번호가 홀수면
        printf("%d/%d", 1 + (last - num), i - (last - num));
    }

    /*
    분모) i가 짝수       => 밑에서부터 올라가면서
    분자) i가 홀수       => 위에서부터 내려오면서
                            끝번호가 다 1이므로 1 + (떨어진 거리)

    분자) i가 짝수       => 밑에서부터 올라가면서
    분모) i가 홀수       => 위에서부터 내려오면서
                            끝번호가 다 i이므로 i - (떨어진 거리)
    */

    return 0;
}
