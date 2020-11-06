#include<stdio.h>
main() {
	const double rate = 0.0025;
	int n;
	float capital;
	float deposit;
	printf("请输入存款期n:");
	scanf_s("%d",&n);
	printf("请输入存款本金capita：");
	scanf_s("%f",&capital);
	deposit = capital + capital * n * rate;
	printf("总金额为：= %f\n",deposit);
}