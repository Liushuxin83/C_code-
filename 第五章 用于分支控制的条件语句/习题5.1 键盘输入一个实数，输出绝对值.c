//#include<stdio.h>
//int main() {
//	float a;
//	printf("������һ��ʵ����\n");
//	scanf("%f",&a);
//	if (a<0) {//ȡ����ֵ
//		a = -a;
//	}
//	printf("a�ľ���ֵΪ��%f\n",a);
//}

//�Ӽ�������һ���������ж���ż��
//#include<stdio.h>
//int main() {
//	int a;
//	printf("������һ��������\n");
//	scanf("%d",&a);
//	if (a%2==0) {//��2ȡ�� ����Ϊ0��Ϊż������֮Ϊ����
//		printf("%dΪż��\n",a);
//	}
//	else {
//		printf("%dΪ����\n",a);
//	}
//	return 0;
//}



//��֪������Ϣ���ʣ�����ʱ����Ϣ�ͱ���ĺϼ�
#include<stdio.h>
int main() {
	float benjin;//���뱾��
	int n;//�������
	float total;//�ܽ�
	printf("���������Ĵ��𣬴��������\n");
	scanf("%f%*c%d",&benjin,&n);
	while ((n<=0)||((n>3)&&(n<5))||((n>5)&&(n<8))||(n>8)) {
		//�ж�n�ķ�Χ��nֵҪ�������д������
		printf("������Ĵ���������󣡣������ٴ�������𣬴��������\n");
		scanf("%f,%d", &benjin, &n);
	}
	switch (n) {
	case 1:total = 1 * benjin * 0.0225;
		printf("�ϼƣ�%f", total);
		break;
	case 2:total = 2 * benjin * 0.0243;
		printf("�ϼƣ�%f", total);
		break;
	case 3:total = 3 * benjin * 0.0270;
		printf("�ϼƣ�%f", total);
		break;
	case 5:total = 5 * benjin * 0.0288;
		printf("�ϼƣ�%f", total);
		break;
	case 8:total = 8 * benjin * 0.03;
		printf("�ϼƣ�%f", total);
		break;
	}
}