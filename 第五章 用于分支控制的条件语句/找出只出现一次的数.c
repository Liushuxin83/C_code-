//����һ���ǿ����飬����ĳ��Ԫ��ֻ����һ���⣬����Ԫ�ؾ���������
//�ҳ��Ǹ�ֻ����һ�ε�Ԫ��
// ������ int arr[]={1,2,3,4,5,1,2,3,4}; �ҳ�5

/*#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;//�±�
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
	for (i = 0; i < sz;i++) {
		int count = 0;//������ ����ĳ��Ԫ�س��ִ���
		int j = 0;
		for (j = 0; j < sz;j++) {
			if (arr[i]==arr[j]) {
				count++;
			}
		}
		if (count==1) {
			printf("ֻ����һ�ε�Ԫ��Ϊ��%d\n",arr[i]);
		}
	}
	return 0;
}*/

//��λ��������,a^a=0;0^a=a;
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
	printf("ֻ����һ�ε�Ԫ��Ϊ��%d\n",ret);
	return 0;
}