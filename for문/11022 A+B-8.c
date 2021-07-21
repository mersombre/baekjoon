#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, a[99], b[99], c[99];

    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a[i], &b[i]);
        c[i] = a[i] + b[i];
    }

    for (int i = 1; i <= n; i++) {
        printf("Case #%d: %d + %d = %d\n", i, a[i], b[i], c[i]);
    }

    return 0;
}
