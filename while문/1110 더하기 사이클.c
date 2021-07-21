////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int n;

    scanf("%d", &n);

    int x = n;
    int cnt = 0;

    while (1) {
        int ten = n / 10;
        int one = n % 10;
        n = (one * 10) + ((ten + one) % 10); // 규칙
        //printf("%d\n", n);
        //printf("ten: %d, one: %d\n\n", ten, one);
        cnt++;
        if (x == n) break;
    }

    printf("%d", cnt);

    return 0;
}
