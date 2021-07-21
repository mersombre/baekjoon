////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int han(int a);

int main() {

	int input;
	scanf("%d", &input); // 입력 받기

	han(input);

	return 0;

}

int han(int a) {

	int i, cnt = 0;
	if (a < 1000) {
		if (a < 100) { // 1 ~ 99
			cnt = a;
		}
		else if (a < 1000) { // 100 ~ 999
			cnt = 99;

			for (i = 100; i <= a; i++) {
				int h = i / 100; // 100의 자리
				int t = (i % 100) / 10; // 10의 자리
				int o = (i % 100) % 10; // 1의 자리

				if (h - t == t - o) {
					cnt += 1;
				}
			}
		}
		printf("%d", cnt);
	}
	else if (a == 1000) {
		cnt = han(999);
	}
	
	// printf cnt를 밖에 두면 a == 1000일 때 1440 식으로 결과가 나옴

}
