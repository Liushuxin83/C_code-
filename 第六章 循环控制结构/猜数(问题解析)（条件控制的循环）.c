//#include<stdio.h>
//#include<stdlib.h>//rand���������ķ��ų���RAND_MAX����ͷ�ļ�stdlib.h�ж����
//int main() {//������������һ�������û��£��¶ԵĻ����ء�Ringht!��
//	//���󷵻ء�Wrong����,�������û����µ����Ǵ���С��
//	int ran;//����rand������������������
//	int guess;//��������
//	ran = rand();//����������֮���֣�������������Ǹ�����ȷ�������
//	//������һ��α���������������rand()��������һϵ����һϵ�������������
//	//�ģ���ÿ��ִ�г���ʱ�������������������ȷʵһ���ģ�������ͬ��һ
//	//�����У���������ÿ��ֻ�õ��������еĵ�һ���������
//	printf("            -----������Ϸ��ʼ������-----\n");
//	printf("��������һ������\n");
//	scanf("%d",&guess);
//	if (guess>ran) {
//		printf("Wrong!���ˣ�����\n");
//	}
//	else if (guess<ran) {
//		printf("Wrong��С�ˣ�����\n");
//	}
//	else {
//		printf("Right!��ϲ��¶��ˣ�����");
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {//��ν��rand��������α����������⣺���ٸ����ӣ����ڲ�ͬ��
//	//����������еĵ�һ��������ǲ�ͬ�ģ������Ļ�ʹ����ÿ������ʱ
//	//������ͬ����������У�ͨ�����������������ʵ�֡�
//	int ran, i;
//	srand(1);//�����������Ϊ1
//	for (i = 0; i < 10;i++) {
//		ran = rand() % 51;
//		printf("�����������Ϊ��%d\n",ran);
//	}
//	printf("\n");
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {//rand()���ɵ���0��32767֮������֣���Χ��Щ�󣬲�����Ϸ
//	//��Ҫ�ı������Χ
//	int ran;
//	int guess;
//	int counter = 0;
//	srand(time(NULL));//Ϊrand���������������������
//	ran = rand() % 51;//����0��50֮��������
//	do {
//		printf("            -----������Ϸ��ʼ������-----\n");
//		printf("��������һ������\n");
//		scanf("%d",&guess);
//		counter++;//ÿ��һ�Σ�counuer��+1
//		if (guess>ran) {
//			printf("Wrong�����ˣ�����\n");
//		}
//		else if (guess<ran) {
//			printf("Wrong��С�ˣ�����\n");
//		}
//		else {
//			printf("Right!��ϲ��¶��ˣ�����\n");
//		}
//	} while ((guess!=ran)&&(counter<10));//ֻҪguess��ran����ȣ����ѭ����ͻ������ȥ
//	//����������ȵĻ��������ѭ��;������10��
//	printf("counter=%d\n",counter);
//}


//���Ʋ�����Ϸ��ʹ����������ȷʹ�û�Ƿ���������ʱ�����������
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main() {//rand()���ɵ���0��32767֮������֣���Χ��Щ�󣬲�����Ϸ
	//��Ҫ�ı������Χ
	int ran;
	int guess;
	int counter = 0;
	int ret=0;//���ڱ���scanf���������ķ���ֵ
	char answer;//�����û�����Ļش�
	srand(time(NULL));//Ϊrand���������������������
	ran = rand() % 51;//����0��50֮��������
	do {
		counter = 0;
		ran = rand() % 51;
		do {
			printf("            -----������Ϸ��ʼ������-----\n");
			printf("��������һ��0��50������\n");
			ret=scanf("%d", &guess);
			while (ret != 1) {//�����������������������
				while (getchar() != '\n') {//������뻺�����еķǷ��ַ�
					;
				}
				//while ((ch=getchar() )!= '\n');//������뻺�����еķǷ��ַ�

					printf("����������󣡣�������������\n");
					printf("            -----������Ϸ��ʼ������-----\n");
					printf("��������һ��0��50������\n");
					ret = scanf("%d", &guess);
			}
			counter++;//ÿ��һ�Σ�counuer��+1
			if (ret ==1 ) {
				if (guess > ran) {
					printf("Wrong�����ˣ�����\n");
				}
				else if (guess < ran) {
					printf("Wrong��С�ˣ�����\n");
				}
				else {
					printf("Right!��ϲ��¶��ˣ�����\n");
				}
			}
		} while ((guess != ran) && (counter < 10));//ֻҪguess��ran����ȣ����ѭ����ͻ������ȥ
		//����������ȵĻ��������ѭ��;������10��
		printf("counter=%d\n", counter);

		printf("�㻹����������Y/y or N/n��\n");
		scanf(" %c", &answer);
	}while((answer=='Y'||answer=='y')||(answer!='N'&&answer!='n'));
}



