#include<stdio.h>
//int main() {//�ۼ����� for���
//	int i, n;
//	long sum;
//	printf("������n:\n");
//	scanf("%d",&n);
//	sum = 0;
//	for (i = 1; i <= n;i++) {
//		sum = sum + i;
//	}
//	printf("�ۼ�֮��Ϊ��%d\n",sum);
//}


//int main() {//�ۼ����� while���
//	int i, n;
//	long sum;
//	printf("������n:\n");
//	scanf("%d",&n);
//	i = 1;
//	sum = 0;
//	while (i<=n) {
//		sum = sum + i;
//		i++;
//	}
//	printf("�ۼ�֮��Ϊ��%d\n",sum);
//}


//int main() {//�ۼ����� do-while���
//	int i, n;
//	long sum;
//	printf("������n:\n");
//	scanf("%d",&n);
//	sum = 0;
//	i = 1;
//	do {
//		sum = sum + i;
//		i++;
//	} while (i <= n);
//	printf("�ۼ�֮��Ϊ��%d\n",sum);
//}


//int main() {//�۳�����
//	int i, n;
//	long p=1;
//	printf("������n��\n");
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++) {
//		p = p * i;
//		printf("%d!�Ľ׳�Ϊ��%ld\n", i, p);
//	}
//	printf("%d!�Ľ׳�Ϊ��%ld\n",i,p);//����������� i���Ҫ+1������pֵ�����
//}



int main() {//n! ֮��  Ƕ��ѭ��
	int i, j, n;
	long p = 0;
	long sum = 0;
	printf("������n��\n");
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		p = 1;
		for (j = 1; j <= i;j++) {
			p = p * j;
			printf("p=%d\n",p);
		}
		printf("j=%d\n",j);
		sum = sum + p;
		printf("i=%d\n", i);
	}
	printf("i=%d\n", i);
	printf("%d!���֮��Ϊ��%ld\n",n,sum);
}

/*int main() {
	int i, j, n;
	n = 0;
	long p = 0;
	long sum = 0;
	printf("������n��\n");
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		p = 1;
		for (j = 1; j <= i;j++) {
			p = p * j;
		}
		sum = sum + p;
	}
	printf("%d!���֮��Ϊ��%ld\n", n, sum);
	return 0;
}*/



//int main() {//n!֮�� ����ѭ��
//	int i, n;
//	long sum = 0, p = 1;
//	printf("������n:\n");
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++) {
//		p = p * i;
//		sum = sum + p;
//		printf("%d!�Ľ׳�֮��Ϊ��%ld\n", i, sum);
//	}
//	printf("%d!�Ľ׳�֮��Ϊ��%ld\n",n,sum);
//}



//int main() {//��ʾǶ��ѭ����ִ�й���   ѭ���ܴ���Ϊ12�������ѭ������֮��
//	int i, j;
//	for (i = 0; i < 3;i++) {//���ִ��3��
//		printf("i=%d:",i);
//		for (j = 0; j < 4;j++) {//�ڲ�ִ��4��
//			printf("j=%d",j);
//		}
//		printf("\n");
//	}
//	
//}