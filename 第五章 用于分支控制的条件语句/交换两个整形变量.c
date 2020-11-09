//#include<stdio.h>   //第一种  利用变量
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = 0;//空瓶
//	printf("交换前：a=%d,b=%d\n",a,b);
//
//	c = a;//1  a空了
//	a = b;//2  b空了
//	b = c;//3
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//
//}



//#include<stdio.h>//第二种  利用加减法，当数值过大时会出现溢出问题
//#include<limits.h>
//int main() {
//	//int 4字节 32bit位
//	INT_MAX;  //2147483647    右键-->转到定义
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d,b=%d\n", a, b);
//
//	a = a + b;// a=8
//	b = a - b;//  b=3
//	a = a - b; //a=5
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}





#include<stdio.h>//第三种  使用按位异或
int main() {
	int a = 3;//011
	int b = 5;//101
	printf("交换前：a=%d,b=%d\n",a,b);
	a = a ^ b;// a 110
	b = a ^ b;// b 011
	a = a ^ b;// a 101
	printf("交换后：a=%d,b=%d\n", a, b);
}