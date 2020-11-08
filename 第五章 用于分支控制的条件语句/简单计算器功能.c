#include<stdio.h>
int main() {
	int data1, data2;
	char op;
	printf("请输入一个式子：");
	scanf("%d%c%d",&data1,&op,&data2);
	switch (op) {
	case '+':printf("%d+%d=%d\n",data1,data2,data1+data2);
		break;
	case '-':printf("%d-%d=%d\n",data1,data2,data1-data2);
		break;
	case '*':printf("%d*%d=%d\n", data1, data2, data1 * data2);
		break;
	case 'x':printf("%d*%d=%d\n", data1, data2, data1 * data2);
		break;
	case '/':
		if (0==data2) {
			printf("分母不能为0");
		}
		else {
			printf("%d/%d=%d\n", data1, data2, data1 / data2);
		}
		break;
	default:printf("处理非法字符");
	}
}