#include<stdio.h>
main() {
	const double rate = 0.0025;
	int n;
	float capital;
	float deposit;
	printf("����������n:");
	scanf_s("%d",&n);
	printf("���������capita��");
	scanf_s("%f",&capital);
	deposit = capital + capital * n * rate;
	printf("�ܽ��Ϊ��= %f\n",deposit);
}