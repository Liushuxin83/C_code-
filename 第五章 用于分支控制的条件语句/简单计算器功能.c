#include<stdio.h>
int main() {
	int data1, data2;
	char op;
	printf("������һ��ʽ�ӣ�");
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
			printf("��ĸ����Ϊ0");
		}
		else {
			printf("%d/%d=%d\n", data1, data2, data1 / data2);
		}
		break;
	default:printf("����Ƿ��ַ�");
	}
}