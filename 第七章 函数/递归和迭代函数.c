//#include<stdio.h>
///*����һ�����ͣ���˳���ӡ����ÿһλ*/
//void print(int num) {
//	if (num>9) {
//		print(num/10);
//	}
//	printf("%d ",num%10);
//}
//int main() {
//	int num;
//	printf("������һ����num��");
//	scanf("%d",&num);
//	print(num);
//}



//#include<stdio.h>
///*��д��������������ʱ���������ַ�������*/
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {// a  b  c  \0
//		count++;     //count 1  2  3
//		str++;
//	}
//	return count;//count ������¼ �ַ��ĸ���
//}
//int my_strlen1(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen1(str+1); //�ݹ�
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = {"abc"};
//	int len = my_strlen1(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�ص�ַ
//	printf("�ַ�������Ϊ��%d\n",len);
//	return 0;
//}



//#include<stdio.h>
////��дһ��������n��
//int Fac(int n) {
//	if (n<=1) {
//		return 1;
//	}
//	else {
//		return n * Fac(n-1);
//	}
//}
//int main() {
//	int n = 0;
//	printf("������n��ֵ��");
//	scanf("%d",&n);
//	int jieguo = Fac(n);
//	printf("n!=%d",jieguo);
//}




#include<stdio.h>
//��дһ���������n��쳲�������
int Fib(int n) {//�ȿ����ݹ�   �����stack overflow ջ���  �����õݹ������������ʱ�ܳ�
	if (n<=2) {
		return 1;
	}
	else if(n>2){
		return Fib(n-1) + Fib(n+2);
	}
}
int Fib1(int n) {//����
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main() {
	int n = 0;
	printf("������쳲�������������n:\n");
	scanf("%d",&n);
	int jieguo = Fib1(n);
	printf("��%d��쳲�������Ϊ%d\n",n,jieguo);
}