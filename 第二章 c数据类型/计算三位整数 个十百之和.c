#include<stdio.h>
main() {
	int x = 153;
	int b0, b1, b2, sum;
	b2 = x / 100;
	b1 = (x - b2 * 100) / 10;//括号必不可少
	b0 = x - b2 * 100 - b1 * 10;
	sum = b0 + b1 + b2;
	printf("b0=%d,b1=%d,b2=%d,sum=%d,\n", b0, b1, b2, sum);
}

