////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    
    int arr[9];
    int max = arr[0];
    int num;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (max < arr[i]) {
            max = arr[i];
            num = i + 1;
        }
    }

    printf("%d\n%d", max, num);

    return 0;
}
