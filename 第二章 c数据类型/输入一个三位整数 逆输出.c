#include<stdio.h>
main() {
	int x, b1, b2, b3, sum;
	printf("请输入一个三位数：");
	scanf_s("%d",&x);
	b3 = x % 10;
	b1 = x / 100;
	b2 = (x - b1 * 100) / 10;
	sum = b1 + b2 + b3;
	printf("%d%d%d\n", b3, b2, b1);
	printf("sum=%d\n",sum);
}