//#include<stdio.h>   //��һ��  ���ñ���
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = 0;//��ƿ
//	printf("����ǰ��a=%d,b=%d\n",a,b);
//
//	c = a;//1  a����
//	a = b;//2  b����
//	b = c;//3
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//
//}



//#include<stdio.h>//�ڶ���  ���üӼ���������ֵ����ʱ������������
//#include<limits.h>
//int main() {
//	//int 4�ֽ� 32bitλ
//	INT_MAX;  //2147483647    �Ҽ�-->ת������
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//
//	a = a + b;// a=8
//	b = a - b;//  b=3
//	a = a - b; //a=5
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}





#include<stdio.h>//������  ʹ�ð�λ���
int main() {
	int a = 3;//011
	int b = 5;//101
	printf("����ǰ��a=%d,b=%d\n",a,b);
	a = a ^ b;// a 110
	b = a ^ b;// b 011
	a = a ^ b;// a 101
	printf("������a=%d,b=%d\n", a, b);
}