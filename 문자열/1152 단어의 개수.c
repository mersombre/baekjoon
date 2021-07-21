////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define num 1000001

int main() {

    char string[num];
    char* ptr; //strtok 쓰기 위해서
    int cnt = 0;

    gets(string); //scanf는 공백을 읽을 수 X, gets는 엔터 누를 때까지 한 줄 읽음

    ptr = strtok(string, " "); //처음에: 공백 기준으로 문자열을 자르고 포인터 반환

    while (ptr != NULL) { //자른 문자열 안 나올 때까지 반복
        cnt++;
        ptr = strtok(NULL, " "); // 다음 문자열 잘라서 포인터 반환
    }

    printf("%d", cnt);

    return 0;
}
