////����1+3+5+7+9+....+101��ֵ
//#include<stdio.h>
//int main() {
//	int i, sum = 0;
//	for (i = 1; i <= 101;i+=2) {
//		sum = sum + i;
//		printf("i=%d,sum=%d\n",i,sum);
//	}
//	printf("sum=%d\n",sum);
//}



////����1*2*3+3*4*5+5*6*7+...+99*100*101��ֵ
//#include<stdio.h>
//int main() {
//	long i;
//	long term, sum = 0;
//	for (i = 1; i <= 99;i+=2) {
//		term = i*(i + 1) * (i + 2);
//		sum = sum + term;
//		printf("term=%ld*(%ld + 1) * (%ld + 2)\n",i,i,i);
//		printf("sum=%ld\n",sum);
//		printf("\n");
//	}
//	printf("sum=%ld\n",sum);
//}



////���� a+aa+aaa+aaaa+aaaaa+....+a...a(n��a)��ֵ��n��a�ɼ�������
//#include<stdio.h>
//int main() {
//	long term, sum = 0;
//	int a, i, n;
//	printf("�����룺a��n--->");
//	scanf("%d,%d",&a,&n);
//	term = a;
//	for (i = 1; i <=n;i++) {
//		sum = sum + a;
//		printf("%d\n", sum);
//		a = a * 10 + term;
//	}
//	printf("sum=%ld\n",sum);
//}




////����1-1/2+1/3-1/4+....+1/99-1/100+....ֱ�����һ��ľ���ֵС��10-4Ϊֹ
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n = 1;
//	float term = 1.0, sign = 1, sum = 0;
//	while (n<1e4) {
//		term = term * sign / n;
//		sum = sum + term;
//		sign = -sign;
//		n++;
//		if (sum=0.583333) {//���ڲ��Լ�����ȷ���
//			printf("sum=%f\n", sum);
//			break;
//		}
//		
//	}
//	printf("sum=%f\n",sum);
//}




////����sinx��x^3/3!+x^5/5!-x^7/7!+x^9/9!-....,����sinx��ֵ��
////ֱ�����һ��ľ���ֵС��10-5�η�Ϊֹ
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n = 1, count = 1;
//	float x;
//	double sum, term;
//	printf("Input x:");
//	scanf("%f",&x);
//	sum = x;
//	term = x;
//	do {
//		term = -term * x * x / ((2 * n) * (2 * n + 1));
//		sum = sum + term;
//		n = n + 2;
//		count++;
//
//	} while (fabs(term)>=1e-5);
//		printf("sin(x)=%f,count=%d\n",sum,count);
//}



////���� 4/��=1-1/3+1/5-1/7+...,��̼���еĽ���ֵ��ֱ�����һ���ֵС��10-4�η�Ϊֹ
////����е�ֵ����ͳ���ۼӵ�����
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int i;
//	int count = 0;
//	double sign = 1;
//	double sum=1.000000,term=1.0;
//	for (i = 3; fabs(term) > 1e-5; i += 2) {
//		sign = -sign;
//		term = sign / i;
//		sum = sum + term;
//		count++;
//	}
//	printf("��=%f,count=%d",4*sum,count);
//}


//#include <stdio.h>
//#include <math.h>
//int main(void) {
//    //whileѭ������ִ���ж���ִ��ѭ����
//    //����count��������һ���ۼӶ��ٸ���1��ʼ��n��Ϊ��ĸҲ��1��ʼ
//    int n = 1, count = 1;
//    //ȡ�����ۼӺ�ʹ������Ϊdouble����
//    double sum = 1.0, term = 1.0, sign = 1;
//    //1e-5���� 1*(10��-5�η�)��0.00001 
//    while (fabs(term) >= 1e-5) {
//        count++;
//        sign = -sign;
//        n = n + 2;
//        term = sign / n;
//        sum = sum + term;
//    }
//    printf("��=%f \n һ���ۼ���count=%d\n", 4 * sum, count);
//}



////����ˮ�ɻ�����ˮ�ɻ�����ָ��λ���ֵ������͵��ڸ����������λ�������磺
////153��ˮ�ɻ�������Ϊ153=1^3+3^3+5^  ����㲢������е�ˮ�ɻ���
//#include<stdio.h>
//int main() {
//	int a, b, c, i;
//	for (i = 100; i <= 999;i++) {
//		a = i / 100;
//		b = (i / 10) % 10;
//		c = i % 10;
//		if (i==a*a*a+b*b*b+c*c*c) {
//			printf("ˮ�ɻ���Ϊ��%d\n",i);
//		}
//	}
//}



