//#include<stdio.h>
//int main() {//(1)
//	int i, j, k;
//	char space = ' ';//这是一个空格
//	for (i = 1; i <= 4;i++) {
//		for (j = 1; j <= i;j++) {
//			printf("%c",space);
//		}
//		for (k = 1; k <= 6;k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main() {
//	int k = 4, n;
//	for (n = 0; n < k;n++) {
//		if (n % 2 == 0) continue;//条件满足，跳出此循环，开始下一轮循环
//		k--;
//	}
//	printf("k=%d,n=%d\n",k,n);
//}


#include<stdio.h>
int main() {
	int k = 4, n;
	for (n = 0; n < k;n++) {
		if (n % 2 == 0) break;//条件满足直接跳出此循环
		k--;
	}
	printf("k=%d,n=%d\n",k,n);
}