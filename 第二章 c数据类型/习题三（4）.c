#include<stdio.h>
#include<math.h>
#include<stdlib.h>//����exit����
main() {
	float a, b, c;
	float disc;
	float p, q;
	printf("������a��b��c��");
	scanf_s("%f,%f,%f",&a,&b,&c);
	if (fabs(a)<=1e-6) {//a����0ʱ�����Ƕ��η���
		printf("�ⲻ��һ�����η���");
		exit(0);
	}
	disc = b * b - 4 * a * c;//�����б�ʽ
	p = -b / (2 * a);
	q = sqrt(fabs(disc)/2*a);
	if (fabs(disc)<=1e-6) {//�б�ʽ����0ʱ
		printf("x1=x2=%.2f\n",p);
	}
	else {
		if (disc>1e-6) {//�б�ʽ����0
			printf("x1=%.2f,x2=%.2f",p+q,p-q);
		}
		else {//�б�ʽС��0
			printf("x1=%.2f+%.2fi\n",p,q);
			printf("x1=%.2f-%.2fi\n", p, q);
		}
	}
}