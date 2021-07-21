////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int slfnum();

int main() {

	slfnum();

	return 0;

}

int slfnum() {

	int i, arr[10001] = { 0 }, n = 0;

	// self number가 아닌 것들만 1로 표기

	for (i = 1; i <= 10000; i++) {
		if (i < 10) { // 한 자리
			n = i + i;
			arr[n] = 1;
		}
		else if (i < 100) { // 두 자리
			n = i + (i / 10) + (i % 10);
			arr[n] = 1;
		}
		else if (i < 1000) { // 세 자리
			// ex) 121의 경우: ((i%100)/10) 하면 100으로 나누고 남은 21에서 10으로 나눈 십의 자릿수 2
			// 그냥 (i/10) 해버리면 12
			n = i + (i / 100) + ((i % 100) / 10) + ((i % 100) % 10);
			arr[n] = 1;
		}
		else if (i < 10000) { // 네 자리
			n = i + (i / 1000) + ((i % 1000) / 100) + (((i % 1000) % 100) / 10) + (((i % 1000) % 100) % 10);
			if (n <= 10000) arr[n] = 1; // n 자체가 10000을 넘길 수는 없으니 마지막에는 조건 추가
		}
	}

	for (i = 1; i <= 10000; i++) {
		if (arr[i] != 1) printf("%d\n", i);
	}

}
