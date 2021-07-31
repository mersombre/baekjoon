#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

    int d, h, w;
    double n, realh, realw;

    scanf("%d %d %d", &d, &h, &w);
    
    n = sqrt(h * h + w * w); // 대각선 비율
    realh = h * d / n;
    realw = w * d / n;

    printf("%d %d", (int)realh, (int)realw);

    return 0;
}
