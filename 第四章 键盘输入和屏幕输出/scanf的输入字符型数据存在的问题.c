#include<stdio.h>
main() {
	int a;
	char b;
	float c;
	printf("������һ�����ͣ�");
	scanf_s("%d",&a);
	printf("���ͣ�%d\n",a);
	//getchar();//�����ڻ������Ļس������룬�����ں�����Ϊ��Ч�ַ�����
	printf("������һ���ַ��ͣ�\n");
	scanf_s(" %c", &b);//��%cǰ���һ���ո񣬽����ڻ������Ļس�������
	printf("�ַ��ͣ�%c\n", b);
	printf("������һ�������ͣ�\n");
	scanf_s("%f", &c);
	printf("�����ͣ�%f\n", c);
}