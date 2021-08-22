#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int a[4] = { 0, };
    int b[4] = { 0, };
    int suma = 0, sumb = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
        suma += a[i];
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &b[i]);
        sumb += b[i];
    }

    if (suma >= sumb) printf("%d", suma);
    else printf("%d", sumb);


    return 0;
}
