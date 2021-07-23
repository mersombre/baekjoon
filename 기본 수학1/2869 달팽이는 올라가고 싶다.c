////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int a, b, v;
    int cnt = 0;

    scanf("%d %d %d", &a, &b, &v);

    if (a == v) {
        cnt = 1;
    }
    /*
    일단 도달한 날에는 안 떨어지니까 v - b까지만 올라가면 됨
    a < b니까 v - b까지 가서 다음 날 못 올라가는 경우는 X
    */
    else if ((v - b) % (a - b) == 0) {
        cnt = (v - b) / (a - b);
    }
    else { // v - b까지 갈 때 필요한 시간이 정수값으로 안 나오면 ex) 1.2일
        cnt = (v - b) / (a - b) + 1; // 무조건 그 다음 날도 올라가야 하니까 +1
    }

    printf("%d", cnt);

    return 0;
}
