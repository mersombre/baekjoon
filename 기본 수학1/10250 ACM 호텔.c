#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num;
    int h, w, n;
    int ft, lt;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %d %d", &h, &w, &n);

        if (n % h == 0) { // 나머지가 0일 때
            ft = h; // 앞자리는 그냥 h (맨 위층)
            lt = n / h; // 뒷자리는 몫 => 다음 라인 안 가도 되니까
            printf("%d%02d\n", ft, lt); //2자리보다 작으면 %2d는 여백으로 채우고 %02d는 0 추가
        }
        else {
            ft = n % h; // 앞자리는 명수 / 층수 나머지
            lt = n / h + 1; // 뒷자리는 몫 + 1
            printf("%d%02d\n", ft, lt);
        }
        
    }

    return 0;
}
