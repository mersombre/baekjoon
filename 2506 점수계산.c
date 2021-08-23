#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n;
    int score;
    int cnt = 0, sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
    
        if (score == 1) { // 입력으로 들어오는 score가 1로 표시되면
            cnt++; // cnt++ 해주고 (연속되는 1을 세는 역할)
            sum += cnt; // sum에 cnt를 더해준다
        }
        else cnt = 0; // score가 1이 아니면(0) cnt 0으로 초기화해줌
    }

    /*
        1 0 1 1 1 0 0 1 1 0 일 때
    
    cnt 1 0 1 2 3 0 0 1 2 0
    sum 1 1 2 4 7 7 7 8 10 0
    */

    printf("%d", sum);

    return 0;
}
