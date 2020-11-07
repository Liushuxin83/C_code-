#include<stdio.h>
main() {
	int a;
	char b;
	float c;
	printf("请输入一个整型：");
	scanf_s("%d",&a);
	printf("整型：%d\n",a);
	//getchar();//将存于缓冲区的回车符读入，避免在后面作为有效字符读入
	printf("请输入一个字符型：\n");
	scanf_s(" %c", &b);//将%c前面加一个空格，将存于缓冲区的回车符读入
	printf("字符型：%c\n", b);
	printf("请输入一个浮点型：\n");
	scanf_s("%f", &c);
	printf("浮点型：%f\n", c);
}