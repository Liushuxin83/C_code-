//��ӡwelcome to myCSDN��������������δ�ӡ��
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main() {
	char arr1[] = "welcome to myCSDN!!!";
	char arr2[] = "####################";
	int left = 0;//���±�
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
	int right = strlen(arr1)-1;//string.h  ����Ԫ�ظ��������±꣩
	while (left<=right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣһ�� windows.h
		system("cls");//���� stdlib.h
		left++;
		right--;
	}
	printf("%s\n", arr2);
}