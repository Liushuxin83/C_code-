//打印welcome to myCSDN！！！（两侧逐次打印）
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main() {
	char arr1[] = "welcome to myCSDN!!!";
	char arr2[] = "####################";
	int left = 0;//左下标
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
	int right = strlen(arr1)-1;//string.h  计算元素个数（右下标）
	while (left<=right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息一秒 windows.h
		system("cls");//清屏 stdlib.h
		left++;
		right--;
	}
	printf("%s\n", arr2);
}