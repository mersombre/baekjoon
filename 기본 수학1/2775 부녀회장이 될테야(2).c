/////// 재귀함수

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int f(int k, int n);

int main() {

    int num, k, n;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", f(k, n));
    }

    return 0;
}

int f(int k, int n) {
    if (k == 0) { // 0층은 다 n명
        return n;
    }
    else if (n == 1) { // 1호는 다 1명
        return 1;
    }
    
    return f(k - 1, n) + f(k, n - 1); // 왼쪽 + 아래 재귀함수
}
