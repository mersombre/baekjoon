#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num[7];
    int sum = 0;
    

    for (int i = 0; i < 7; i++) {
        scanf("%d", &num[i]);
    }

    int min = 100; // num[0]으로 주면 얘가 홀수인지 짝수인지 모르므로 X
    // 입력이 모두 100보다 작다고 했으므로 100으로 주는 게 무난

    for (int i = 0; i < 7; i++) {
        if (num[i] % 2 != 0) {
            sum += num[i];
            
            if (min > num[i]) {
                min = num[i];
            }
        }
    }

    if (sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n%d", sum, min);
    }
    

    return 0;
}
