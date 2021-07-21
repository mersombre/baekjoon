////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
 
    int n;
    int scr[1000];
    int max = scr[0];
    double newscr[1000]; // 새로 정의를 해 줘야 함...
    double sum = 0; // sum도 마찬가지..

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &scr[i]);
        if (scr[i] > max) max = scr[i];
    }
    
    for (int i = 0; i < n; i++) {
        newscr[i] = ((double)scr[i]) / max * 100;
				// scr[i]를 double로 형변환해줬기 때문에
				// newscr[i] 자리에 그대로 scr[i]를 쓸 수 없다 => double형인 새 배열 만들어줌
        // scr[i]에다가 죄다 double 갖다 붙이면 오류남
	sum += newscr[i];
    }

    printf("%.2f", sum/n);

    return 0;
}
