#include<stdio.h>
void Select_Sort(int arr[],int sz) {
	int i, j, tmp;
	for (i = 0; i < sz - 1;i++) {
		int min = arr[i];//假设arr【i】是最小值
		int minIndex = i;//记录最小值下标
		for (j = i + 1; j < sz;j++) {
			if (arr[j]<min) {
				min = arr[j];//记录最小值
				minIndex = j;//记录最小值下标
			}
		}
		tmp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = tmp;
	}
}
int main() {
	int arr[] = { 7,4,5,1,3,2,8,9,0 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	Select_Sort(arr,sz);
	for (i = 0; i < sz;i++) {
		printf("%d ",arr[i]);
	}
}