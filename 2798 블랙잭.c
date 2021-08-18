#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, m;
    int cd[100] = { 0, };
    int sum, max = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &cd[i]);
    }

    // 삼중반복문 돌면서 세 수의 모든 합 계산: sum
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = cd[i] + cd[j] + cd[k];

                if (sum > max && sum <= m) {
                    // 구한 합(sum)이 지금까지 구한 합(max)보다 크고 m 조건 만족하면
                    max = sum; // 최댓값(max)에 sum을 넣어준다
                    // 최종적으로 가장 큰 합이 나오면 그 값이 max가 됨
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}
