#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int h, m, s, takes;
    int newh, newm, news;
    int carryh = 0, carrym = 0;

    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &takes);

    if (s + takes <= 59) {
        printf("%d %d %d", h, m, s + takes);
    }
    else {
        news = s + takes;

        while (news > 59) {
            news -= 60;
            carrym++;
        }

        newm = m + carrym;
        if (newm <= 59) {
            printf("%d %d %d", h, newm, news);
        }
        else {
            while (newm > 59) {
                newm -= 60;
                carryh++;
            }

            newh = h + carryh;
            while (newh > 23) {
                newh -= 24;
            }
            printf("%d %d %d", newh, newm, news);
        }

    }

    return 0;
}
