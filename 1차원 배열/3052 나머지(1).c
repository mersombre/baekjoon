////////// C1 //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
 
    int num[10]; // num을 배열로 받아서
    int result = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        num[i] = num[i] % 42; // 받은 수의 42로 나눈 나머지를 그대로 배열에 다시 저장해줌
    }

    for (int i = 0; i < 10; i++) {
        int cnt = 0; // 같은 나머지값이 있는지를 보기 위한 cnt (i값 바뀔 때마다 초기화)
        for (int j = 0; j < i; j++) { // i 값 고정해놓고 그 앞에 값들이랑 쭉 비교
            if (num[i] == num[j]) cnt++; // 같은 나머지값이 있으면 cnt++
        }
        if (cnt == 0) result++; // j loop 돌고 나서 cnt 0이면 => 같은 나머지 값 없는 거
    }

    printf("%d", result);

    return 0;
}
