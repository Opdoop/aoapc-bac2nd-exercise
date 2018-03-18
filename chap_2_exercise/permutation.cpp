#include<stdio.h>
int main() {
	int minimum, middle, highest;
	for(int i=123;i<329;i++){//minimum is 123 and upper bound is 987/3=329
		minimum = i;
		middle = minimum * 2;
		highest = minimum * 3;
		int result_add = 0;
		int result_multiple = 1;
		result_add = (minimum % 10) + (minimum / 10 % 10) + (minimum / 100)// ones + tens+ hundreds
			+ (middle % 10) + (middle / 10 % 10) + (middle / 100)
			+ (highest % 10) + (highest / 10 % 10) + (highest / 100);
		result_multiple = (minimum % 10) * (minimum / 10 % 10) * (minimum / 100)
			* (middle % 10) * (middle / 10 % 10) * (middle / 100)
			* (highest % 10) * (highest / 10 % 10) * (highest / 100);
		if (result_add == 45 && result_multiple == 362880)//1+2+...+9=45 && 9!=362880
			printf("%d %d %d\n", minimum, middle, highest);
	}
	return 0;

}