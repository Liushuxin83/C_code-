#include<stdio.h>
main() {
	const double pi = 3.14159;
	double r, L, S;
	printf("������Բ�İ뾶r��");
	scanf_s("%lf",&r);//scanfû�о���֮˵
	L = 2 * pi * r;
	S = pi * r * r;
	printf("û�����;���:\n");
	printf("�ܳ�L=%f�����S=%f\n",L,S);
	printf("��7���2���ȣ�\n");
	printf("�ܳ�L=%7.2f�����S=%7.2f\n", L, S);//С����Ҳռһ���ַ�λ��
}