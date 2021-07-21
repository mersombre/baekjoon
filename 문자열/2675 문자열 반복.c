////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

    int num, tcnum;
    char tc[20];

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %s", &tcnum, tc);

        for (int j = 0; j < strlen(tc); j++) { //반복할 글자
            for (int k = 0; k < tcnum; k++) { //글자당 반복 횟수
                printf("%c", tc[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
