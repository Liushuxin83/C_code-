//�Ӽ�������һ����ţ��ж��Ƿ�Ϊ���꣬���ǣ����yes���������no
//����������������֮һ�������꣨1���ܱ�4�����������ܱ�100����
//(2)�ܱ�400����
#include<stdio.h>
int main() {
	//int year;
	//int flag=1;
	//printf("�ж��Ƿ�Ϊ���꣡����������һ�����year��\n");
	//scanf("%d",&year);
	////if (((year%4==0)&&(year%100!=0))||(year%400==0)) {
	////	flag = 1;
	////}
	////else {
	////	flag = 0;
	////}
	////���������ʽд��
	//flag = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ? 1 : 0;
	//if (flag==1) {
	//	printf("yes");
	//}
	//else {
	//	printf("no");
	//}

	//��̴Ӽ�������ĳ��ĳ�£���switch����������ӵ������
	//Ҫ���������Լ�������ݲ��ںϷ���Χ�ڵ����
	int year,month;
	int flag = 1;
	printf("������ĳ��ĳ�£�\n");
	scanf("%d%*c%d",&year,&month);
	flag = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ? 1 : 0;
	switch (month) {
	case 1:printf("%d��%d����31��\n",year,month);
		break;
	case 2:if (flag==1) {
		printf("%d��%d����28��\n", year, month);
	}
		   else {
		printf("%d��%d����29��\n", year, month);
	}
		  break;
	case 3:printf("%d��%d����31��\n", year, month); break;
	case 4:printf("%d��%d����30��\n", year, month); break;
	case 5:printf("%d��%d����31��\n", year, month); break;
	case 6:printf("%d��%d����30��\n", year, month); break;
	case 7:printf("%d��%d����31��\n", year, month); break;
	case 8:printf("%d��%d����31��\n", year, month); break;
	case 9:printf("%d��%d����30��\n", year, month); break;
	case 10:printf("%d��%d����31��\n", year, month); break;
	case 11:printf("%d��%d����30��\n", year, month); break;
	case 12:printf("%d��%d����31��\n", year, month); break;
	default:printf("�������󣡣���\n"); break;
	}

}
