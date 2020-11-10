#include<stdio.h>
int main() {
	char ch;
	printf("请输入一个字符：\n");
	scanf("%c",&ch);
	if (ch >= 48 && ch <= 57) {
		printf("ch是数字字符：%c，ASCCL值为：%d\n", ch, ch);
	}
	else if (ch >= 65 && ch <= 90) {
		printf("ch是大写字母:%c,ASCLL值为:%d\n", ch, ch);
		ch = ch + 32;
		printf("ch转换后为：%c,ASCLL值为:%d\n", ch, ch);
	}
	else if (ch >= 97 && ch <= 122) {
		printf("ch是小写字母:%c,ASCLL值为:%d\n", ch, ch);
		ch = ch - 32;
		printf("ch转换后为：%c,ASCLL值为:%d\n", ch, ch);
	}
	else if (ch==32) {
		printf("ch是空格:%c,ASCLL值为:%d\n", ch, ch);
	}
	else {
		printf("ch是其他字符:%c,ASCLL值为:%d\n", ch, ch);
	}
}