////////// C2 //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    char chinput[100];
    int cnt = 0;

    scanf("%s", chinput);

// 모든 경우의 수대로 그냥 집어넣어 준다
    for (int i = 0; chinput[i] != NULL; i++) {
        if (chinput[i] == 'c' && chinput[i + 1] == '=') {
            cnt++;
            i++; // i를 두 칸 뛰어넘어 줘야 하니까 여기서 한 칸 추가해줌
        }
        else if (chinput[i] == 'c' && chinput[i + 1] == '-') {
            cnt++;
            i++;
        }
        else if (chinput[i] == 'd' && chinput[i + 1] == 'z' && chinput[i + 2] == '=') {
            cnt++;
            i += 2; // 이 경우는 알파벳 표시 문자가 세 개이기 때문에 두 칸 추가해줘야.
        }
        else if (chinput[i] == 'd' && chinput[i + 1] == '-') {
            cnt++;
            i++;
        }
        else if (chinput[i] == 'l' && chinput[i + 1] == 'j') {
            cnt++;
            i++;
        }
        else if (chinput[i] == 'n' && chinput[i + 1] == 'j') {
            cnt++;
            i++;
        }
        else if (chinput[i] == 's' && chinput[i + 1] == '=') {
            cnt++;
            i++;
        }
        else if (chinput[i] == 'z' && chinput[i + 1] == '=') {
            cnt++;
            i++;
        }
        else cnt++;
    }

    printf("%d", cnt);

    return 0;
}
