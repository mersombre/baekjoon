#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int h, m, s, hh, mm, ss;
    int time1, time2;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d %d %d", &h, &m, &s, &hh, &mm, &ss);

        // 통으로 초 단위로 계산
        time1 = h * 3600 + m * 60 + s;
        time2 = hh * 3600 + mm * 60 + ss;
        
        // 걸린 시간(단위 : s)를 시간, 분, 초로 나눠준다
        printf("%d %d %d\n", (time2 - time1) / 3600, (time2 - time1) % 3600 / 60, (time2 - time1) % 3600 % 60);
    }

    return 0;
}
