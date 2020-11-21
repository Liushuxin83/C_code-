////计算1+3+5+7+9+....+101的值
//#include<stdio.h>
//int main() {
//	int i, sum = 0;
//	for (i = 1; i <= 101;i+=2) {
//		sum = sum + i;
//		printf("i=%d,sum=%d\n",i,sum);
//	}
//	printf("sum=%d\n",sum);
//}



////计算1*2*3+3*4*5+5*6*7+...+99*100*101的值
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



////计算 a+aa+aaa+aaaa+aaaaa+....+a...a(n个a)的值，n和a由键盘输入
//#include<stdio.h>
//int main() {
//	long term, sum = 0;
//	int a, i, n;
//	printf("请输入：a，n--->");
//	scanf("%d,%d",&a,&n);
//	term = a;
//	for (i = 1; i <=n;i++) {
//		sum = sum + a;
//		printf("%d\n", sum);
//		a = a * 10 + term;
//	}
//	printf("sum=%ld\n",sum);
//}




////计算1-1/2+1/3-1/4+....+1/99-1/100+....直到最后一项的绝对值小于10-4为止
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
//		if (sum=0.583333) {//用于测试计算正确与否
//			printf("sum=%f\n", sum);
//			break;
//		}
//		
//	}
//	printf("sum=%f\n",sum);
//}




////利用sinx≈x^3/3!+x^5/5!-x^7/7!+x^9/9!-....,计算sinx的值，
////直到最后一项的绝对值小于10-5次方为止
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



////利用 4/π=1-1/3+1/5-1/7+...,编程计算π的近似值，直到最后一项的值小于10-4次方为止
////输出π的值，并统计累加的项数
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
//	printf("π=%f,count=%d",4*sum,count);
//}


//#include <stdio.h>
//#include <math.h>
//int main(void) {
//    //while循环是先执行判断再执行循环体
//    //所以count用来计数一共累加多少个从1开始，n作为分母也从1开始
//    int n = 1, count = 1;
//    //取最后的累加和使用类型为double类型
//    double sum = 1.0, term = 1.0, sign = 1;
//    //1e-5就是 1*(10的-5次方)即0.00001 
//    while (fabs(term) >= 1e-5) {
//        count++;
//        sign = -sign;
//        n = n + 2;
//        term = sign / n;
//        sum = sum + term;
//    }
//    printf("π=%f \n 一共累加项count=%d\n", 4 * sum, count);
//}



////计算水仙花数，水仙花数是指各位数字的立方和等于该数本身的三位数。例如：
////153是水仙花数，因为153=1^3+3^3+5^  请计算并输出所有的水仙花数
//#include<stdio.h>
//int main() {
//	int a, b, c, i;
//	for (i = 100; i <= 999;i++) {
//		a = i / 100;
//		b = (i / 10) % 10;
//		c = i % 10;
//		if (i==a*a*a+b*b*b+c*c*c) {
//			printf("水仙花数为：%d\n",i);
//		}
//	}
//}



