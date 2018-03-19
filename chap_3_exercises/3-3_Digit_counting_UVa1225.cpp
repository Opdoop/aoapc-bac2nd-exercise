#include<stdio.h>
#include<string.h>
int main() {
	int counter[10];
	int T;
	scanf("%d", &T);
	while (T--) {
		int num;
		scanf("%d", &num);
		int s_pointer = 0;
		int temp;
		memset(counter, 0, sizeof(counter));
		for (int i = 1; i <= num; i++) {
			temp = i;
			while(temp!=0) {
				int k = temp % 10;
				counter[k] ++; 
				temp /= 10;
			}
		}
		for (int i = 0; i < 9; i++)
			printf("%d ", counter[i]);
		printf("%d\n", counter[9]);
	}
	return 0;
}