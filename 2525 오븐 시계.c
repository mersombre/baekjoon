#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int nowh, nowm, takes;
    int ovh, ovm;
    int carry = 0;

    scanf("%d %d\n%d", &nowh, &nowm, &takes);

    if (nowm + takes <= 59) { // 분 단위 더했을 때 캐리 발생 X인 경우
        ovh = nowh;
        ovm = nowm + takes;
    }
    else { // 캐리 발생하는 경우
        ovm = nowm + takes; // 끝나는 분 = 현재 분 + 걸리는 시간

        while (ovm >= 60) { // 끝나는 분이 60 이상이라 캐리 발생하는 동안 
            ovm -= 60; // 60 단위로 빼 준다
            carry++; // 캐리 count++ 해 줌
        }
        
        if (nowh + carry < 24) { // 현재 시 + 캐리 했을 때 24보다 작으면 
            ovh = nowh + carry; // 그대로 써도 된다
        }
        else {
            ovh = nowh + carry - 24; // 24 이상이 되면 0시부터 나오게 해야 함
        }
    }

    printf("%d %d", ovh, ovm);

    return 0;
}
