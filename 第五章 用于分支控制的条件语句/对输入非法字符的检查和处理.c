#include<stdio.h>
int main() {
	int a, b, max, ret;
	printf("������a��b\n");
	//scanf("%d,%d",&a,&b); ������䲻���У�����еĻ�����������ֵ
	ret = scanf("%d,%d", &a, &b);//scanf���з���ֵ��,scanf�ķ���ֵ����
	//��ȷ����ĸ���������������ֶ���ȷ���򷵻�2��һ����ȷ������1����
	//���һ����û�н��յ����򷵻�0����������ʱ����-1������ctrl+z����
	if (ret!=2) {
		printf("������������󣡣���\n");
		fflush(stdin);
	}
	else {
		max = a > b ? a : b;
		printf("max=%d\n",max);
	}
}