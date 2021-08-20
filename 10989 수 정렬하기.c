#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int n, num;
    int cnt[10001] = { 0, };

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        cnt[num]++; // 입력되는 숫자를 index로 하는 배열 >> cnt를 센다
    }

    for (int i = 0; i < 10001; i++) {
        if (cnt[i] == 0) continue; // 배열 값이 0이면(해당 index 입력이 없다 >> 넘어감)
        
        for (int j = 0; j < cnt[i]; j++) { // 배열에 들어가 있는 수(cnt[i]) >> 개수 만큼
            printf("%d\n", i); // 해당 수(index >> i)를 출력
        }
    }

    return 0;
}
