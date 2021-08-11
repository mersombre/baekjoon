#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, call;
    int y = 0, m = 0;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &call);

        y += (call / 30 + 1) * 10;
        m += (call / 60 + 1) * 15;
    }

    if (y > m) {
        printf("M %d", m);
    }
    else if (y < m) {
        printf("Y %d", y);
    }
    else if(y == m) {
        printf("Y M %d", y);
    }

    return 0;
}
