#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int start = 0;//in layern, the sign # start pointer
	int end = n*2-1;//sign # end pointer, find the pattern from sample output
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < start; j++)//print blank
			printf(" ");
		for (int j = start; j < end; j++)
			printf("#");
		printf("\n");
		start++;
		end--;
	}
	return 0;
}