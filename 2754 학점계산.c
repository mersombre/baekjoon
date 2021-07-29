#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    char score[2] = " ";
    double sum = 0.0;

    scanf("%s", &score);

    if (score[0] == 'A') {
        sum = 4;
    }
    else if (score[0] == 'B') {
        sum = 3;
    }
    else if (score[0] == 'C') {
        sum = 2;
    }
    else if (score[0] == 'D') {
        sum = 1;
    }


    if (score[1] == '+') {
        sum += 0.3;
    }
    else if (score[1] == '-') {
        sum -= 0.3;
    }

    printf("%.1f", sum);

    return 0;
}
