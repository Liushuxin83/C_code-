#include<stdio.h>
int main() {
	char ch;
	printf("请输入一个小写字母：");
	ch=getchar();
	ch = ch - 32; 
	putchar(ch);
	putchar('\n');
}