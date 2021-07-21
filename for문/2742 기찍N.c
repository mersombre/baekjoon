#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;

	scanf("%d", &n);

	for (int i = n - 1; i >= 0; i--) {
		printf("%d\n", i + 1);
	}

	return 0;
}
