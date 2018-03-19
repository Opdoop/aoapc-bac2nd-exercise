#include<stdio.h>
#include<string.h>
#define maxn 81
char s[maxn];
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", s);
		int len = strlen(s);
		int score = 0;
		int temp = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == 'O')
				temp++;
			else
				temp = 0;
			score += temp;
		}
		printf("%d\n", score);
	}
	return 0;
}