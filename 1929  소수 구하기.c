#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[1000001]; // 소수를 저장하는 배열

int main() {

    int m, n;    
    // arr를 여기 놓으면 입력이 정상적으로 이루어지지 않음..
    // 왜 바깥에 선언해야 할까

    scanf("%d %d", &m, &n);

    for (int i = 2; i <= n; i++) {
        if (!arr[i]) { // 자신을 제외하고
            for (int j = i + i; j <= n; j += i) { // j = i + i에서 계속 i를 더해줌 => 배수
                arr[j] = 1; // 어떤 수의 배수가 되는 수들은 1을 넣어준다(소수 X)
            }
        }
        if (i >= m && arr[i] == 0) { // m 이상(if문) n 이하(for문)이고 소수이면(배열 값이 0)
            printf("%d\n", i); // 출력
        }
    }

    return 0;
}
