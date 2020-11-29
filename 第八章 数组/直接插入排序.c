//#include<stdio.h>
//void Insert_Sort(int arr[], int sz) {
//	int i, j, tmp;
//	for (i = 1; i < sz; i++) {
//		tmp = arr[i];
//		for (j = i - 1; j >= 0 ; j--) {
//			if (tmp < arr[j]) {
//				arr[j + 1] = arr[j];
//			}
//			else {
//				break;
//			}
//		}
//		arr[j + 1] = tmp;
//	}
//}
//int main() {
//	int  arr[] = { 2,9,8,6,3,0,5,7 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Insert_Sort(arr,sz);
//	for (i = 0; i < sz;i++) {
//		printf("%d ",arr[i]);
//	}
//}



#include<stdio.h>
void Insert_Sort(int arr[], int sz) {
	int i, j, tmp;
	for (i = 1; i < sz; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0 && tmp < arr[j]; j--) {
			arr[j + 1] = arr[j];
			//if (tmp >= arr[j]) {
			//	break;
			//}
		}
		arr[j + 1] = tmp;
	}
}
int main() {
	int  arr[] = { 2,9,8,6,3,0,5,7 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Insert_Sort(arr, sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}