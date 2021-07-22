////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num;
    int output;

    scanf("%d", &num);

    for (int i = 0; ; i++) { // 해당하는 i 찾을 때까지 돈다
        if (1 + 3 * i * (i + 1) >= num) { // num보다 크거나 같은 것 찾으면
            output = i + 1; // output에 i + 1 값 할당해주고
            break; // 탈출
        }
    }

    printf("%d", output);

    return 0;
}
