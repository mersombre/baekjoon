#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int l, a, b, c, d;

    scanf("%d\n%d\n%d\n%d\n%d", &l, &a, &b, &c, &d);

    int num1, num2;
    int day;

    if (a % c == 0) {
        num1 = a / c;
    }
    else {
        num1 = a / c + 1;
    }

    if (b % d == 0) {
        num2 = b / d;
    }
    else {
        num2 = b / d + 1;
    }


    if (num1 >= num2) {
        day = l - num1;
    }
    else {
        day = l - num2;
    }

    printf("%d", day);

    return 0;
}
