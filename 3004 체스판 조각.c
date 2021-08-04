#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int row = n / 2 + 1;
    int col = n - row + 2;
    int result = row * col;

    printf("%d", result);

    return 0;
}
