//模拟登录场景，并且只能登录三次，只允许输入三次密码，密码正确则提示登录成功
//如果三次均输入错误，则退出程序
#include<stdio.h>
#include<string.h>
int main() {
	int i = 0;
	char password[20] = {0};//用来储存密码
	for (i = 0; i < 3;i++) {
		printf("请输入密码：");
		scanf("%s",password);
		if (strcmp(password,"123456")==0) {//string.h
			printf("登录成功！！！\n");
			break;//这里必须要来个break  否则当i=2时，即使密码正确，i++之后
			//i=3，这样就会执行下面的i=3的语句，用户交互时会产生矛盾
		}
		else {
			printf("密码输入有误！！！\n");
		}
	}
	if (3==i) {
		printf("三次密码均错误，退出程序\n");
	}
}