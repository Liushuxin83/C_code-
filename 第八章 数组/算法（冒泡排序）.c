//#include<stdio.h>
////编写函数实现冒泡排序
//void bubble_sort(int arr[],int sz) {
//	int i = 0;
//	for (i = 0; i < sz - 1;i++) {//趟数
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int j = 0;
//		//每一趟 
//		for (j = 0; j < sz - 1 - i;j++) {
//			if (arr[j]>arr[j+1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag==1) {
//			break;
//		}
//	}
//}
//int main() {
//	int arr[] = { 2,2,3,5,9,4,7,4,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}



#include<stdio.h>
void buddle_sort(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz - 1;i++) {
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++) {
			if (arr[j]>arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag==1) {
			break;
		}
	}
}

int main() {
	int arr[] = { 2,3,7,8,1,6,7,5 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	buddle_sort(arr,sz);
	for (i = 0; i < sz;i++) {
		printf("%d ",arr[i]);
	}
}