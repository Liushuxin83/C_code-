#include<stdio.h>
//int main() {//累加运算 for语句
//	int i, n;
//	long sum;
//	printf("请输入n:\n");
//	scanf("%d",&n);
//	sum = 0;
//	for (i = 1; i <= n;i++) {
//		sum = sum + i;
//	}
//	printf("累加之和为：%d\n",sum);
//}


//int main() {//累加运算 while语句
//	int i, n;
//	long sum;
//	printf("请输入n:\n");
//	scanf("%d",&n);
//	i = 1;
//	sum = 0;
//	while (i<=n) {
//		sum = sum + i;
//		i++;
//	}
//	printf("累加之和为：%d\n",sum);
//}


//int main() {//累加运算 do-while语句
//	int i, n;
//	long sum;
//	printf("请输入n:\n");
//	scanf("%d",&n);
//	sum = 0;
//	i = 1;
//	do {
//		sum = sum + i;
//		i++;
//	} while (i <= n);
//	printf("累加之和为：%d\n",sum);
//}


//int main() {//累乘运算
//	int i, n;
//	long p=1;
//	printf("请输入n：\n");
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++) {
//		p = p * i;
//		printf("%d!的阶乘为：%ld\n", i, p);
//	}
//	printf("%d!的阶乘为：%ld\n",i,p);//输出放在外面 i最后还要+1，但是p值不会变
//}



int main() {//n! 之和  嵌套循环
	int i, j, n;
	long p = 0;
	long sum = 0;
	printf("请输入n：\n");
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
	printf("%d!相加之和为：%ld\n",n,sum);
}

/*int main() {
	int i, j, n;
	n = 0;
	long p = 0;
	long sum = 0;
	printf("请输入n：\n");
	scanf("%d",&n);
	for (i = 1; i <= n;i++) {
		p = 1;
		for (j = 1; j <= i;j++) {
			p = p * j;
		}
		sum = sum + p;
	}
	printf("%d!相加之和为：%ld\n", n, sum);
	return 0;
}*/



//int main() {//n!之和 单重循环
//	int i, n;
//	long sum = 0, p = 1;
//	printf("请输入n:\n");
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++) {
//		p = p * i;
//		sum = sum + p;
//		printf("%d!的阶乘之和为：%ld\n", i, sum);
//	}
//	printf("%d!的阶乘之和为：%ld\n",n,sum);
//}



//int main() {//演示嵌套循环的执行过程   循环总次数为12，内外层循环次数之积
//	int i, j;
//	for (i = 0; i < 3;i++) {//外层执行3次
//		printf("i=%d:",i);
//		for (j = 0; j < 4;j++) {//内层执行4次
//			printf("j=%d",j);
//		}
//		printf("\n");
//	}
//	
//}