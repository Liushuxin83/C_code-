#include<stdio.h>
int main() {
	char ch;
	printf("������һ��Сд��ĸ��");
	ch=getchar();
	ch = ch - 32; 
	putchar(ch);
	putchar('\n');
}