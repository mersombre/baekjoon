////////// C //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

	int num;
	char input[100]; // 그냥 input[] = {0}으로 초기화해주면 실행은 되는데 실행 다 끝나고 에러? 생김
	int sum = 0;

	scanf("%d", &num);
	scanf("%s", input);

	for (int i = 0; i < num; i++) {
		sum += input[i] - 48;
	}

	printf("%d", sum);

	return 0;

}
