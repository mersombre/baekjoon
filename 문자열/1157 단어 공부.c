////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    char input[1000000];
    int alp[26] = { 0 };
    int maxalp = 0; //가장 많이 나온 알파벳 번호
    int maxcnt = 0; //count 값
    int twicecnt = 0;

    scanf("%s", &input);

    for (int i = 0; input[i] != 0; i++) {
        if (input[i] < 91) {
            alp[input[i] - 65]++;
        }
        else {
            alp[input[i] - 97]++;
        }
    }
   
    for (int i = 0; i < 26; i++) {
        if (maxcnt < alp[i]) {
            maxcnt = alp[i];
            maxalp = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (maxcnt == alp[i]) twicecnt++;
    }


    if (twicecnt >= 2) {
        printf("?");
    }
    else printf("%c", maxalp+65);

    return 0;
}
