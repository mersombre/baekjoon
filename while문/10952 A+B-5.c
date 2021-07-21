////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b); # 입력부터 받고
        if (a == 0 && b == 0) break; # a, b 둘 다 0이면 탈출
        printf("%d\n", a + b);
    }

    return 0;
}
