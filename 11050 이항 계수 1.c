#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fac(int a);

int main() {

    int n, k;    
   
    scanf("%d %d", &n, &k);

    int num = fac(n) / (fac(k) * fac(n - k)); // 이항계수 구하는 공식

    printf("%d", num);

    return 0;
}

int fac(int a) {

    int mul = 1;

    while (a != 0) {
        mul *= a;
        a--;
    }

    return mul;
}
