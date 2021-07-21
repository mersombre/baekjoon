#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int h, m;

	scanf("%d %d", &h, &m);

	if (h >= 0 && m >= 0 && h <= 23 && m <= 59) {
		if (m >= 45) {
			m = m - 45;
		}
		else {
			if (h >= 1) {
				h = h - 1;
				m = m + 15;
			}
			else {
				h = h + 23;
				m = m + 15;
			}
		}
	}

	printf("%d %d", h, m);


	return 0;
}
