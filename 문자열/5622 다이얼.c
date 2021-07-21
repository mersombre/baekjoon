////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    char dial[15];
    int sum = 0;

    scanf("%s", &dial);

    for (int i = 0; dial[i] != 0; i++) {
        if (dial[i] >= 65 && dial[i] <= 67) {
            sum += 3;
        }
        else if (dial[i] <= 70) {
            sum += 4;
        }
        else if (dial[i] <= 73) {
            sum += 5;
        }
        else if (dial[i] <= 76) {
            sum += 6;
        }
        else if (dial[i] <= 79) {
            sum += 7;
        }
        else if (dial[i] <= 83) {
            sum += 8;
        }
        else if (dial[i] <= 86) {
            sum += 9;
        }
        else sum += 10;
    }

    printf("%d", sum);

    return 0;
}
