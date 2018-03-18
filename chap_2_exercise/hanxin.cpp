#include<stdio.h>
int main() {
	int mod_three, mod_five, mod_seven;
	int kase = 0;
	while (scanf("%d %d %d", &mod_three, &mod_five, &mod_seven)) {
		int printed = 0;
		for (int i = 10; i <= 100; i++) {
			if (i % 3 == mod_three && i % 5 == mod_five && i % 7 == mod_seven) {
				printf("Case %d: %d\n", ++kase, i);
				printed = 1;
				break;
			}
		}
		if (printed == 0) {
			printf("No answer\n");
		}
	}
	return 0;
}