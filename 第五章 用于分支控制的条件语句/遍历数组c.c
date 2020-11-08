//#include<stdio.h>
//int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i<10) {
//		printf("%d\n",arr[i]);
//		i++;
//	}
//}
#include<stdio.h>
int main() {
	int arr[10] = {0};
	int sz = 0;
	printf("%d\n",sizeof(arr));//这个数组所占的字节数
	sz = sizeof(arr) / sizeof(arr[0]);//元素个数=数组总字节数/每个元素大小
	printf("sz=%d\n",sz);
}