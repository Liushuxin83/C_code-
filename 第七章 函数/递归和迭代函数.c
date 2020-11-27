//#include<stdio.h>
///*接收一个整型，按顺序打印他的每一位*/
//void print(int num) {
//	if (num>9) {
//		print(num/10);
//	}
//	printf("%d ",num%10);
//}
//int main() {
//	int num;
//	printf("请输入一个数num：");
//	scanf("%d",&num);
//	print(num);
//}



//#include<stdio.h>
///*编写函数不允许创建临时变量，求字符串长度*/
//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {// a  b  c  \0
//		count++;     //count 1  2  3
//		str++;
//	}
//	return count;//count 用来记录 字符的个数
//}
//int my_strlen1(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen1(str+1); //递归
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = {"abc"};
//	int len = my_strlen1(arr);//arr是数组，数组传参，传过去的不是整个数组，而是首元素地址
//	printf("字符串长度为：%d\n",len);
//	return 0;
//}



//#include<stdio.h>
////编写一个函数求n！
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
//	printf("请输入n的值：");
//	scanf("%d",&n);
//	int jieguo = Fac(n);
//	printf("n!=%d",jieguo);
//}




#include<stdio.h>
//编写一个函数求第n个斐波那契数
int Fib(int n) {//先看看递归   会出现stack overflow 栈溢出  并且用递归算这个函数耗时很长
	if (n<=2) {
		return 1;
	}
	else if(n>2){
		return Fib(n-1) + Fib(n+2);
	}
}
int Fib1(int n) {//迭代
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
	printf("请输入斐波那契数的项数n:\n");
	scanf("%d",&n);
	int jieguo = Fib1(n);
	printf("第%d个斐波那契数为%d\n",n,jieguo);
}