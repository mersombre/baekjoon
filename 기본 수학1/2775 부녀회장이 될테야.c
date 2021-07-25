/////// 배열

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num, k, n;
    int arr[15][15] = { 0, };

    for (int i = 0; i < 15; i++) {
        arr[0][i] = i; // 0층 n호 입주민은 각 n명
    }

    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) { // 1층 1호부터 n층 n호까지           
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; // 왼쪽 + 아래 입주민 수 합
        }
    }

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", arr[k][n]);
    }

    return 0;
}
