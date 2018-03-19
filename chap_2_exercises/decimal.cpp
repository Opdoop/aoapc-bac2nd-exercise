#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	int decimal;
	int kase = 0;
	while (scanf("%d %d %d", &a, &b, &c) && a && b &&c) {
		printf("Case %d: %d.", ++kase, (a / b)); //integral part
		for (int i = 1; i < c; i++) {//decimal part
			a = a * 10;
			decimal = a / b ;
			printf("%d", decimal % 10);
		}
		//last decimal to rounding
		decimal = round(double(a) * 10 / b);
		printf("%d\n",decimal%10);
	}
	return 0;
}