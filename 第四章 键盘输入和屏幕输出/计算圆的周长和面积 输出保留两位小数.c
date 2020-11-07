#include<stdio.h>
main() {
	const double pi = 3.14159;
	double r, L, S;
	printf("请输入圆的半径r：");
	scanf_s("%lf",&r);//scanf没有精度之说
	L = 2 * pi * r;
	S = pi * r * r;
	printf("没有域宽和精度:\n");
	printf("周长L=%f，面积S=%f\n",L,S);
	printf("有7域宽，2精度：\n");
	printf("周长L=%7.2f，面积S=%7.2f\n", L, S);//小数点也占一个字符位置
}