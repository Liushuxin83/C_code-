//在一个有序数组中查找具体的某个数字n（方法1：数组遍历）
//#include<stdio.h>
//int main() {//   0 1 2 3 4 5 6 7 8  9 (index)
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k==arr[i]) {
//			printf("找到了，下标是%d\n",i);
//			break;
//		}
//	}
//	if (i==sz) {
//		printf("找不到\n");
//	}
//}




//二分查找的方法
#include<stdio.h>
int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//要查找的数字7
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;//数组左下标
    int right = sz - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] > k) {
            right = mid - 1;
        }
        else if (arr[mid] < k) {
            left = mid + 1;
        }
        else {
            printf("找到了，下标是：%d\n", mid);
            break;
        }
    }
    if (left>right) {
        printf("找不到\n");
    }
}



