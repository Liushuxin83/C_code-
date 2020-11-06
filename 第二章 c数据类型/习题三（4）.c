#include<stdio.h>
#include<math.h>
#include<stdlib.h>//调用exit（）
main() {
	float a, b, c;
	float disc;
	float p, q;
	printf("请输入a，b，c：");
	scanf_s("%f,%f,%f",&a,&b,&c);
	if (fabs(a)<=1e-6) {//a等于0时，不是二次方程
		printf("这不是一个二次方程");
		exit(0);
	}
	disc = b * b - 4 * a * c;//计算判别式
	p = -b / (2 * a);
	q = sqrt(fabs(disc)/2*a);
	if (fabs(disc)<=1e-6) {//判别式等于0时
		printf("x1=x2=%.2f\n",p);
	}
	else {
		if (disc>1e-6) {//判别式大于0
			printf("x1=%.2f,x2=%.2f",p+q,p-q);
		}
		else {//判别式小于0
			printf("x1=%.2f+%.2fi\n",p,q);
			printf("x1=%.2f-%.2fi\n", p, q);
		}
	}
}