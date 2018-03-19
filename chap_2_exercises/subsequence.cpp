#include<stdio.h>
int main() {
	long n, m;
	float sum = 0;
	int kase = 0;
	while (scanf("%d %d", &n, &m) && n && m) {
		for (long i = n; i <= m; i++) {
			sum += 1.0 / (i*i);// trip1, int(1/2)=0, set numerator to 1.0
		}
		if (sum <1)// trip2, when n larger then 65535, output get inf
			printf("Case %d: %.5f\n", ++kase, sum);
		else
			printf("Case %d: 0.0001\n", ++kase);
		sum = 0;
	}
}