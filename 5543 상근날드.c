#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int bgr[3];
    int bv[2];

    scanf("%d\n%d\n%d\n%d\n%d", &bgr[0], &bgr[1], &bgr[2], &bv[0], &bv[1]);

    int minbg = bgr[0];
    int minbv;

    for (int i = 1; i < 3; i++) {
        if (minbg > bgr[i]) {
            minbg = bgr[i];
        }
    }
    
    if (bv[0] > bv[1]) {
        minbv = bv[1];
    }
    else {
        minbv = bv[0];
    }

    printf("%d", minbg + minbv - 50);

    return 0;
}
