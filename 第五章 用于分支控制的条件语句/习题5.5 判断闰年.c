//从键盘输入一个年号，判断是否为闰年，若是：输出yes；否则输出no
//符合下列两个条件之一就是闰年（1）能被4整除，但不能被100整除
//(2)能被400整除
#include<stdio.h>
int main() {
	//int year;
	//int flag=1;
	//printf("判断是否为闰年！！！请输入一个年份year：\n");
	//scanf("%d",&year);
	////if (((year%4==0)&&(year%100!=0))||(year%400==0)) {
	////	flag = 1;
	////}
	////else {
	////	flag = 0;
	////}
	////用条件表达式写下
	//flag = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ? 1 : 0;
	//if (flag==1) {
	//	printf("yes");
	//}
	//else {
	//	printf("no");
	//}

	//编程从键盘输入某年某月，用switch语句输出该月拥有天数
	//要求考虑闰年以及输入年份不在合法范围内的情况
	int year,month;
	int flag = 1;
	printf("请输入某年某月：\n");
	scanf("%d%*c%d",&year,&month);
	flag = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ? 1 : 0;
	switch (month) {
	case 1:printf("%d的%d月有31天\n",year,month);
		break;
	case 2:if (flag==1) {
		printf("%d的%d月有28天\n", year, month);
	}
		   else {
		printf("%d的%d月有29天\n", year, month);
	}
		  break;
	case 3:printf("%d的%d月有31天\n", year, month); break;
	case 4:printf("%d的%d月有30天\n", year, month); break;
	case 5:printf("%d的%d月有31天\n", year, month); break;
	case 6:printf("%d的%d月有30天\n", year, month); break;
	case 7:printf("%d的%d月有31天\n", year, month); break;
	case 8:printf("%d的%d月有31天\n", year, month); break;
	case 9:printf("%d的%d月有30天\n", year, month); break;
	case 10:printf("%d的%d月有31天\n", year, month); break;
	case 11:printf("%d的%d月有30天\n", year, month); break;
	case 12:printf("%d的%d月有31天\n", year, month); break;
	default:printf("输入有误！！！\n"); break;
	}

}
