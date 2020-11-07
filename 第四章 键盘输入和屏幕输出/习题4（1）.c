#include<stdio.h>
main() {
	int a, b;
	scanf_s("%2d%*2s%2d",&a,&b);
	printf("%d,%d\n",a,b);
}