#include<stdio.h>
#include<math.h>
#define EPS 1e-1//�о��� ���Ǵ���̫�͵Ļ��Ͳ����������ֱ�������� 
//eg����1e-6=0.00001�Ļ�����10��10��14��200��ȥ14��ƽ������0.0604  �Ǹ�����0��ʵ����
//�� fabs(a*a+b*b-c*c)>EPS ��Ͳ����ϵ�����������
int main() {
	float a, b, c;
	int flag = 1;
	printf("�����������ε�������a��b��c��");
	scanf_s("%f,%f,%f",&a,&b,&c);
	if (a + b > c && b + c > a && a + c > b) {

		if (fabs(a - b) <= EPS && fabs(a - c) <= EPS && fabs(b - c) <= EPS) {
			printf("�ȱ�");
			flag = 0;
		}else if(fabs(a - b) <= EPS || fabs(a - c) <= EPS || fabs(b - c) <= EPS) {
			printf("����");
			flag = 0;
		}
		if (fabs(a*a+b*b-c*c)<=EPS||fabs(a*a+c*c-b*b)<=EPS||fabs(b*b+c*c-a*a)<=EPS) {
			printf("ֱ��");
			flag = 0;
		}
		if(flag) {
			printf("һ��");
		}
		printf("������\n");
	}
	else {
		printf("����������\n");
	}
}