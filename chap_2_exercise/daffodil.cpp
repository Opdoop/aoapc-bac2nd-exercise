#include<stdio.h>
int main() {
	for (int i = 100; i < 1000; i++) {
		int hundred = i / 100;
		int ten = i /10 % 10;
		int one = i % 10;
		int sum = hundred * hundred * hundred +
			ten * ten * ten + one * one * one;
		if (i == sum)
			printf("%d\n", i);
	}
	return 0;
}