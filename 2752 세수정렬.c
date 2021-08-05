#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int a[3], temp;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 3; i > 1; i--) { // bubble sort
        for (int j = 1; j < i; j++) {
            if (a[j - 1] > a[j]) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
