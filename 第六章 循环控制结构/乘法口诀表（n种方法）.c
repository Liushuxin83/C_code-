//#include<stdio.h>
//int main() {//第一种
//	int i = 0;
//	for (i = 1; i <= 9;i++) {
//		int j = 1;
//		for (j = 1; j <= i;j++) {
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main() {//第二种
//	int i = 0;
//	for (i = 1; i <= 11;i++) {
//		int j = 1;
//		for (j = 1; j <= 9;j++) {
//			printf("%-3d",i*j);
//		}
//		printf("\n");
//	}
//}



//#include<stdio.h>
//int main() {//第三种
//	int i = 0;
//	for (i = 1; i <= 9;i++) {
//		int j = 1;
//		for (j = 1; j <= i;j++) {
//			printf("%-3d",i*j);
//		}
//		printf("\n");
//	}
//}



#include<stdio.h>
int main() {//第四种
	int i = 0;
	for (i = 1; i <= 9;i++) {
		int j = 1;
		int k = 1;
		for (j = 1; j <= i;j++) {
			printf("   ");
		}
		for (k = i; k <= 9;k++) {
			printf("%-3d",i*k);
		}
		printf("\n");
	}
}