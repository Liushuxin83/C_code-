//#include<stdio.h>
//#include<stdlib.h>//rand（）产生的符号常量RAND_MAX是在头文件stdlib.h中定义的
//int main() {//计算机随机产生一个数让用户猜，猜对的话返回“Ringht!”
//	//错误返回“Wrong！”,并告诉用户所猜的数是大还是小。
//	int ran;//定义rand（）随机产生的随机数
//	int guess;//所猜数字
//	ran = rand();//程序多次运行之后发现，计算机产生的那个数的确是随机的
//	//但是是一个伪随机数！反复调用rand()所产生的一系列数一系列数看似是随机
//	//的，但每次执行程序时所产生的随机数字序列确实一样的，都是相同的一
//	//个数列，而程序又每次只用到了数列中的第一个随机数。
//	printf("            -----猜数游戏开始！！！-----\n");
//	printf("请你输入一个数：\n");
//	scanf("%d",&guess);
//	if (guess>ran) {
//		printf("Wrong!大了！！！\n");
//	}
//	else if (guess<ran) {
//		printf("Wrong！小了！！！\n");
//	}
//	else {
//		printf("Right!恭喜你猜对了！！！");
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {//如何解决rand（）产生伪随机数的问题：（举个例子）由于不同的
//	//随机数序列中的第一个随机数是不同的，这样的话使程序每次运行时
//	//产生不同的随机数序列，通过设置随机数种子来实现。
//	int ran, i;
//	srand(1);//设随机数种子为1
//	for (i = 0; i < 10;i++) {
//		ran = rand() % 51;
//		printf("产生的随机数为：%d\n",ran);
//	}
//	printf("\n");
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {//rand()生成的是0到32767之间的数字，范围有些大，猜数游戏
//	//需要改变这个范围
//	int ran;
//	int guess;
//	int counter = 0;
//	srand(time(NULL));//为rand（）函数设置随机种子数
//	ran = rand() % 51;//生成0到50之间的随机数
//	do {
//		printf("            -----猜数游戏开始！！！-----\n");
//		printf("请你输入一个数：\n");
//		scanf("%d",&guess);
//		counter++;//每猜一次，counuer会+1
//		if (guess>ran) {
//			printf("Wrong！大了！！！\n");
//		}
//		else if (guess<ran) {
//			printf("Wrong！小了！！！\n");
//		}
//		else {
//			printf("Right!恭喜你猜对了！！！\n");
//		}
//	} while ((guess!=ran)&&(counter<10));//只要guess和ran不相等，这个循环体就会继续下去
//	//这两个数相等的话会结束此循环;且最多猜10次
//	printf("counter=%d\n",counter);
//}


//完善猜数游戏，使其遇到不正确使用或非法数据输入时避免出粗能力
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main() {//rand()生成的是0到32767之间的数字，范围有些大，猜数游戏
	//需要改变这个范围
	int ran;
	int guess;
	int counter = 0;
	int ret=0;//用于保存scanf（）函数的返回值
	char answer;//保存用户输入的回答
	srand(time(NULL));//为rand（）函数设置随机种子数
	ran = rand() % 51;//生成0到50之间的随机数
	do {
		counter = 0;
		ran = rand() % 51;
		do {
			printf("            -----猜数游戏开始！！！-----\n");
			printf("请你输入一个0到50的数：\n");
			ret=scanf("%d", &guess);
			while (ret != 1) {//若存在输入错误，则重新输入
				while (getchar() != '\n') {//清除输入缓冲区中的非法字符
					;
				}
				//while ((ch=getchar() )!= '\n');//清除输入缓冲区中的非法字符

					printf("你的输入有误！！！请重新输入\n");
					printf("            -----猜数游戏开始！！！-----\n");
					printf("请你输入一个0到50的数：\n");
					ret = scanf("%d", &guess);
			}
			counter++;//每猜一次，counuer会+1
			if (ret ==1 ) {
				if (guess > ran) {
					printf("Wrong！大了！！！\n");
				}
				else if (guess < ran) {
					printf("Wrong！小了！！！\n");
				}
				else {
					printf("Right!恭喜你猜对了！！！\n");
				}
			}
		} while ((guess != ran) && (counter < 10));//只要guess和ran不相等，这个循环体就会继续下去
		//这两个数相等的话会结束此循环;且最多猜10次
		printf("counter=%d\n", counter);

		printf("你还想继续猜嘛？（Y/y or N/n）\n");
		scanf(" %c", &answer);
	}while((answer=='Y'||answer=='y')||(answer!='N'&&answer!='n'));
}



