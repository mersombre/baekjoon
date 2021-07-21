////////// C1 //////////

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	char chalph[100];
	int cnt = 0;

	scanf("%s", &chalph);

// 뒤에 같은 거 오는 경우대로 나눠서 코드 줄 수를 줄임
// 크로아티아 알파벳에 해당하면 continue 시키고
// 마지막에 그 단위만큼 cnt++ 해줌
	for (int i = 0; chalph[i] != NULL; i++) {
		if (chalph[i] == 'n' || chalph[i] == 'l') {
			if (chalph[i + 1] == 'j') continue;
		}
		else if (chalph[i] == 'c' || chalph[i] == 's' || chalph[i] == 'z') {
			if (chalph[i + 1] == '=' || chalph[i + 1] == '-') continue;
		}
		else if (chalph[i] == 'd') {
			if (chalph[i + 1] == '-') continue;
			if (chalph[i + 1] == 'z' && chalph[i + 2] == '=') continue;
		}
		cnt++;
	}

	printf("%d", cnt);

	return 0;
}
