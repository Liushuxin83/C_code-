#include<stdio.h>
main() {
	char ch;
	printf("������һ���ַ���");
	ch = getchar();
	ch = ch + 32;
	printf("%c,%d\n",ch,ch);
}