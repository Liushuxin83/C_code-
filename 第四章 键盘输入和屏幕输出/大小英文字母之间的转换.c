#include<stdio.h>
main() {
	char ch;
	printf("请输入一个字符，然后回车：");
	ch = getchar();//从键盘输入一个字符，按回车结束，该字符存入变量ch
	ch = ch + 32;//大写字母转换为小写
	putchar(ch);//在屏幕上显示ch中的字符
	putchar('\n');//输出一个回车换行控制符
	while (ch!="") {
		printf("请输入一个字符，然后回车：");
		ch = getchar();//从键盘输入一个字符，按回车结束，该字符存入变量ch
		ch = ch + 32;//大写字母转换为小写
		putchar(ch);//在屏幕上显示ch中的字符
		putchar('\n');//输出一个回车换行控制符
	}
}