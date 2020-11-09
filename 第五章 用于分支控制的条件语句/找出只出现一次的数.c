//给定一个非空数组，除了某个元素只出现一次外，其余元素均出现两次
//找出那个只出现一次的元素
// 样例： int arr[]={1,2,3,4,5,1,2,3,4}; 找出5

/*#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;//下标
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//计算出元素个数
	for (i = 0; i < sz;i++) {
		int count = 0;//计数器 计算某个元素出现次数
		int j = 0;
		for (j = 0; j < sz;j++) {
			if (arr[i]==arr[j]) {
				count++;
			}
		}
		if (count==1) {
			printf("只出现一次的元素为：%d\n",arr[i]);
		}
	}
	return 0;
}*/

//按位异或暴力求解,a^a=0;0^a=a;
//0^1^1^2^2^3^3^4^4^5=5
#include<stdio.h>	
int main() {
	int arr[] = {1,2,3,4,5,1,2,3,4};
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz;i++) {
		ret = ret ^ arr[i];
	}
	printf("只出现一次的元素为：%d\n",ret);
	return 0;
}