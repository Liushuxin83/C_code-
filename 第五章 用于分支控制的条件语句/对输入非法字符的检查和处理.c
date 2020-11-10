#include<stdio.h>
int main() {
	int a, b, max, ret;
	printf("请输入a，b\n");
	//scanf("%d,%d",&a,&b); 这条语句不能有，如果有的话不能输出最大值
	ret = scanf("%d,%d", &a, &b);//scanf是有返回值的,scanf的返回值等于
	//正确输入的个数；如果两个数字都正确，则返回2（一个正确，返回1）；
	//如果一个都没有接收到，则返回0；发生错误时返回-1（例如ctrl+z）。
	if (ret!=2) {
		printf("输入的数据有误！！！\n");
		fflush(stdin);
	}
	else {
		max = a > b ? a : b;
		printf("max=%d\n",max);
	}
}