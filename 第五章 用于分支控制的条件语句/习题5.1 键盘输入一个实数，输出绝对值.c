//#include<stdio.h>
//int main() {
//	float a;
//	printf("请输入一个实数：\n");
//	scanf("%f",&a);
//	if (a<0) {//取绝对值
//		a = -a;
//	}
//	printf("a的绝对值为：%f\n",a);
//}

//从键盘输入一个整数，判断奇偶性
//#include<stdio.h>
//int main() {
//	int a;
//	printf("请输入一个整数：\n");
//	scanf("%d",&a);
//	if (a%2==0) {//对2取余 余数为0则为偶数，反之为奇数
//		printf("%d为偶数\n",a);
//	}
//	else {
//		printf("%d为奇数\n",a);
//	}
//	return 0;
//}



//已知存款的年息利率，求到期时的利息和本金的合计
#include<stdio.h>
int main() {
	float benjin;//存入本金
	int n;//存款年数
	float total;//总金
	printf("请输入您的存款本金，存款年数：\n");
	scanf("%f%*c%d",&benjin,&n);
	while ((n<=0)||((n>3)&&(n<5))||((n>5)&&(n<8))||(n>8)) {
		//判断n的范围，n值要符合银行存款年数
		printf("您输入的存款年数有误！！！请再次输入存款本金，存款年数：\n");
		scanf("%f,%d", &benjin, &n);
	}
	switch (n) {
	case 1:total = 1 * benjin * 0.0225;
		printf("合计：%f", total);
		break;
	case 2:total = 2 * benjin * 0.0243;
		printf("合计：%f", total);
		break;
	case 3:total = 3 * benjin * 0.0270;
		printf("合计：%f", total);
		break;
	case 5:total = 5 * benjin * 0.0288;
		printf("合计：%f", total);
		break;
	case 8:total = 8 * benjin * 0.03;
		printf("合计：%f", total);
		break;
	}
}