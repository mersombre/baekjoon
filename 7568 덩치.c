#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, rank;
    int x[50] = { 0, };
    int y[50] = { 0, };

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < n; i++) { // 이중 반복문으로 모든 쌍 비교
        rank = 1; // rank 초기값을 1로 설정 >> 아래에서 비교했을 때 가장 크면 rank++ 해줄 필요 X >> 1위

        for (int j = 0; j < n; j++) {
            if (x[i] < x[j] && y[i] < y[j]) { // 비교대상(i 기준)이 더 작으면 순위를 내림(rank++) 
                rank++;
            }
        }
        printf("%d ", rank); // i 기준으로 rank 출력
    }

    return 0;
}
