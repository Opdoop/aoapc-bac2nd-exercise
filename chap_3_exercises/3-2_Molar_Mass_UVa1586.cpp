#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxn 100
char s[maxn];
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", s);
		int len = strlen(s);
		double pre_molecular = 0;
		double sum = 0;
		for (int i = 0; i < len; i++) {
			int num = 1;
			if (isalpha(s[i])) {
				if (s[i] == 'C') pre_molecular = 12.01;
				if (s[i] == 'H') pre_molecular = 1.008;
				if (s[i] == 'O') pre_molecular = 16.00;
				if (s[i] == 'N') pre_molecular = 14.01;
			}
			if (i + 1 < len && !isalpha(s[i + 1])) {
				i++;
				num = s[i] - '0';
			}
			if (i + 1 < len && !isalpha(s[i + 1])) {
				i++;
				num = 10 * num + s[i] - '0';
			}
			sum += pre_molecular * num;
		}
		printf("%.3f\n", sum);
	}
	return 0;
}