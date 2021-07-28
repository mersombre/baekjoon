#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n;
    int cnt = 0;

    scanf("%d", &n);

    while (n > 0) {

        // n을 계속 업데이트해주고 그 새로운 n을 가지고 또 판단
        // 18도 그냥 3의 배수에서 끝나는 게 아니라 18 - 3 = 15 해주면
        // 그 때부터 5의 배수로 들어가니까 n % 5 == 0으로 들어감

        if (n % 5 == 0) {
            n -= 5;
            cnt++;
        }
        else if (n % 3 == 0) {
            n -= 3;
            cnt++;
        }
        else if (n > 5) {
            n -= 5;
            cnt++;
        }
        else {
            cnt = -1;
            break;
        }
    }
    
    printf("%d", cnt);


    return 0;
}
