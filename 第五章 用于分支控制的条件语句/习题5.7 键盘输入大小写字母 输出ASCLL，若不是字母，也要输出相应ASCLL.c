#include<stdio.h>
int main() {
	char ch;
	printf("������һ���ַ���\n");
	scanf("%c",&ch);
	if (ch >= 48 && ch <= 57) {
		printf("ch�������ַ���%c��ASCCLֵΪ��%d\n", ch, ch);
	}
	else if (ch >= 65 && ch <= 90) {
		printf("ch�Ǵ�д��ĸ:%c,ASCLLֵΪ:%d\n", ch, ch);
		ch = ch + 32;
		printf("chת����Ϊ��%c,ASCLLֵΪ:%d\n", ch, ch);
	}
	else if (ch >= 97 && ch <= 122) {
		printf("ch��Сд��ĸ:%c,ASCLLֵΪ:%d\n", ch, ch);
		ch = ch - 32;
		printf("chת����Ϊ��%c,ASCLLֵΪ:%d\n", ch, ch);
	}
	else if (ch==32) {
		printf("ch�ǿո�:%c,ASCLLֵΪ:%d\n", ch, ch);
	}
	else {
		printf("ch�������ַ�:%c,ASCLLֵΪ:%d\n", ch, ch);
	}
}