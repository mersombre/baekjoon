////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int n, arr;
    int max = -1000001; // max 값을 작은 걸로 주고
    int min = 1000001; // min 값을 큰 걸로 준다

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr);
        if (max < arr) max = arr;
        if (min > arr) min = arr;
    }

    printf("%d %d", min, max);

    return 0;
}
