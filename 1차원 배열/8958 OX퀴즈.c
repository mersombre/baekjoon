////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
 
    int n;
    char tcase[80];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int score = 1;

        scanf("%s", &tcase);
        for (int j = 0; j < strlen(tcase); j++) {
            if (tcase[j] == 'O') {
                sum += score; // 점수를 sum 값에 계속 보태주고 나서
                score++; // score 값은 하나씩 키워줌 (연속되면 +2, +3 ... 되니까)
            }
            if (tcase[j] == 'X') {
                score = 1; // X로 뜨면 점수 값을 1로 리셋
            }
        }
        printf("%d\n", sum);
    }
    

    return 0;
}
