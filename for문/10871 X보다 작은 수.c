////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, x;
    int arr[10000];

    scanf("%d %d", &n, &x);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // for문 안에 배열 입력받기
        if (arr[i] < x) {
            printf("%d ", arr[i]);
        }
    }


    return 0;
}
