#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, a, b, c[99];

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a, &b);
        c[i] = a + b;
    }1

    for (int i = 1; i <= n; i++) {
        printf("Case #%d: %d\n", i, c[i]);
    }

    return 0;
}
