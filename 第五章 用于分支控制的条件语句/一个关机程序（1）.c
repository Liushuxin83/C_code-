#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 180");//关机命令
again:
	printf("请注意你的电脑将在三分钟内关机！！！如果你输入：我是猪，就能取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
}