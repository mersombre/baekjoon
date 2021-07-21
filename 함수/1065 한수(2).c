////////// C2 //////////
// 예전에 푼 방식
// 조건이 1000 '이하'인데 1000일 때를 딱히 고려하지 않은 듯...?
// 굳이 안 걸리는 부분이라서 그런가

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int han(int n);

int main() {

	int input;

	scanf("%d", &input);
	han(input);
	
	return 0;
}

int han(int n) {
	int cnt = 0;
	int h, t, o;

	if (n < 100) printf("%d", n);
	else {
		for (int i = 100; i <= n; i++) {
			h = i / 100;
			t = (i / 10) % 10;
			o = i % 10;

			if ((h - t) == (t - o)) cnt++;
		}
		printf("%d", cnt + 99);
	}

}
