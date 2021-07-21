////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
 
    int tcn, stdn;


    scanf("%d", &tcn); // test case 개수

    for (int i = 0; i < tcn; i++) {
        scanf("%d", &stdn); // 학생 수

        int score[1000];
        int sum = 0;

        for (int j = 0; j < stdn; j++) {
            scanf("%d", &score[j]); // 점수 입력받기
            sum += score[j];            
        }

        float avg = sum / stdn; // 평균
        int cnt = 0;
        
        for (int j = 0; j < stdn; j++) {
            if (avg < score[j]) cnt++; // 평균보다 점수가 높으면 cnt++
        }
        printf("%.3f%%\n", (double)cnt / stdn * 100); // 비율
    }

    return 0;
}
