////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) { // i는 1부터 n까지 돈다
				// 공백과 별 다르게 돌리기
        for (int j = 1; j <= n - i; j++) {
            printf(" "); // 공백 = n - i개
        }
        for (int j = 1; j <= i; j++) {
            printf("*"); // 별 = i개
        }
        printf("\n");
    }


    return 0;
}
