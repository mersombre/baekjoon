////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

    char input[100];
    int alp[26];

    for (int i = 0; i < 26; i++) {
        alp[i] = -1; // 일반적으로 배열 초기화하듯이 하면 인덱스0만 -1 되고 나머지는 0만 들어감
        // 반복문 돌려서 -1을 넣어줘야 한다
    }

    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++) { // strlen 써서 for돌릴 수 O
        if (alp[input[i] - 97] == -1) alp[input[i] - 97] = i;
        /*
        중복 검사를 따로 하는 게 아니라
        현재 든 값이 -1이면(아직 수정 안 된 값이면) 업데이트
        */
    }


    for (int i = 0; i < 26; i++) {
        printf("%d ", alp[i]);
    }


    return 0;

}
