#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");//�ػ�����
	again:
	printf("��ע����ĵ��Խ����������ڹػ���������������룺����������ȡ���ػ�\n");
	scanf("%s",input);
	if (strcmp(input,"������")==0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
}