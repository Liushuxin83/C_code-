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
	printf("%d\n",sizeof(arr));//���������ռ���ֽ���
	sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���=�������ֽ���/ÿ��Ԫ�ش�С
	printf("sz=%d\n",sz);
}