#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num;

    while (1) {
        scanf("%d", &num);

        if (num == 0) break; // 입력이 0이면 break

        int rev = 0;
        int temp = num; // num 값을 따로 저장해주지 않으면
        // 아래에서 while 돌리는 동안 num이 0이 되어버리기 때문에
        // 아래 if에서 num == rev 비교가 제대로 안 됨


        ///// num 뒤집기 /////
        while (num > 0) {
            rev *= 10; // rev 앞으로 밀어주고
            rev += (num % 10); // num을 끝자리부터 더해줌
            num /= 10; // num은 10으로 나눈다
        }

        if (temp == rev) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }

    }

    return 0;
}
