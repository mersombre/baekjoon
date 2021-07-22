////////// C2 //////////
// 아래 Python과 같은 방법

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

    int num;
    int beehive = 1; // 처음에 int beehive, i = 1로 했을 때 
    int i = 1; // beehive 변수에 대해 초기화되지 않은 값을 쓴다며 빌드 오류가 남.
		// 아무래도 따로 따로 써 주는 게 맞는 것 같다.

    //int output = 1;

    scanf("%d", &num);

    /*
    while (1) {
        if (beehive >= num) break;
        i = 6 * (output++);
        beehive += i;
    }*/

    
    while (num > beehive) {
        beehive += (6 * i); // 6의 배수만큼 늘어나도록
        i += 1; // 증가폭이 6의 배수가 되게 i를 1 2 3 ...으로 증가시킴
    }
    

    printf("%d", i);

    return 0;
}
