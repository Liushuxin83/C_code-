//素数的定义：质数（prime number）又称素数，有无限个。一个大于1的自然数，
//除了1和它本身外，不能被其他自然数（质数）整除，
//换句话说就是该数除了1和它本身以外不再有其他的因数；
//否则称为合数。根据算术基本定理，每一个比1大的整数，
//要么本身是一个质数，要么可以写成一系列质数的乘积；
//而且如果不考虑这些质数在乘积中的顺序，那么写出来的形式是唯一的。
//最小的质数是2

//题目：找出100到200之间的素数
//#include<stdio.h>
//int main() {//第一种方法
//	int i = 0;
//	int counter = 0;
//	for (i = 100; i <= 200;i++) {//判断i是否为素数，试除法，产生2到i-1的数
//		int j = 0;
//		for (j = 2; j < i;j++) {
//			if (i%j==0) {//不是素数
//				break;
//			}
//		}
//		if (j == i) {//  说明我们已经把2到i-1的数都已经试除了   是素数
//			printf("%d ",i);
//			counter++;
//		}
//	}
//	printf("\ncounter=%d\n",counter);
//}


//#include<stdio.h>
//int main() {//第二种方法
//	int i = 0;
//	int counter = 0;
//	for (i = 101; i <= 200;i+=2) {//偶数肯定不是素数，所以在奇数里面找素数
//		int j = 0;
//		for (j = 2; j < i;j++) {
//			if (i%j==0) {//不是素数
//				break;
//			}
//		}
//		if (j == i) {//  说明我们已经把2到i-1的数都已经试除了   是素数
//			printf("%d ",i);
//			counter++;
//		}
//	}
//	printf("\ncounter=%d\n",counter);
//}




#include<stdio.h>
#include<math.h>
int main() {
	int i = 0;
	int counter = 0;
	for (i = 100; i <= 200;i++) {//i=a*b，a或b至少有一个数字<=sqrt（i）
		//例如：16=2*8=4*4
		int j = 0;
		for (j = 2; j <=sqrt(i);j++) {
			if (i%j==0) {//不是素数
				break;
			}
		}
		if (j >sqrt(i)) {
			printf("%d ",i);
			counter++;
		}
	}
	printf("\ncounter=%d\n",counter);
}