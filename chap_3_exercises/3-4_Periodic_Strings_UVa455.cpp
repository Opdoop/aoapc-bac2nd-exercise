#include<stdio.h>
#include<string.h>
#define maxn 85
int main() {
	char str[maxn];
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", str);
		int len = strlen(str);
		for (int k, i = 1; i <= len; ++i) //enumerate temp cycle i
			if (len%i == 0) { // if i is a cycle then len%i ==0 ,but why this line is necessary?
				for (k = i; k < len; ++k)
					if (str[k] != str[k%i])
						break;
				if (k == len) {
					printf("%d\n", i);
					break;
				}
			}
		if (T) printf("\n");
	}
	return 0;
}