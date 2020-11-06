#include<stdio.h>
#define PI 3.14   //无等与和分号
main() {
	double r;
	printf("请你输入圆的半径 r：");
	scanf_s("%lf", &r);
	printf("圆的周长等于=%f\n",2*PI*r);
	printf("圆的面积是=%f\n",PI*r*r);
}
