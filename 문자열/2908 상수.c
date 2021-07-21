////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num1, num2;
    int newnum1, newnum2;

    scanf("%d %d", &num1, &num2);

    newnum1 = (num1 % 10) * 100 + ((num1 / 10) % 10) * 10 + (num1 / 100);
    newnum2 = (num2 % 10) * 100 + ((num2 / 10) % 10) * 10 + (num2 / 100);

    if (newnum1 < newnum2) {
        printf("%d", newnum2);
    }
    else printf("%d", newnum1);

    return 0;
}
