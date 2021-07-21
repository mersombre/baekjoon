////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) { // i = 1부터 n까지 돈다
        for (int j = 1; j <= i; j++) { // j = 1부터 i까지 돈다
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
