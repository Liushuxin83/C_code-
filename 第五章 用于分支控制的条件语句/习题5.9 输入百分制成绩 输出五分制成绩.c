#include<stdio.h>
int main() {
	int score, grade;
	printf("请输入百分制成绩score：\n");
	scanf("%d",&score);
	//grade = (score<0)||(score>100)?-1:score / 10;
	/*switch (grade) {
	case 10:
	case 9:printf("%d---五分制成绩---A",score);
		break;
	case 8:printf("%d---五分制成绩---B", score);
		break;
	case 7:printf("%d---五分制成绩---C", score);
		break;
	case 6:printf("%d---五分制成绩---D", score);
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("---五分制成绩---E", grade);
		break;
	default:printf("输入错误!!!\n");
	}*/
	//if-else格式
	if (score >= 90 && score <= 100) {
		printf("%d---五分制成绩---A\n", score);
	}
	else if (score >= 80 && score < 90) {
		printf("%d---五分制成绩---B\n", score);
	}
	else if (score >= 70 && score < 80) {
		printf("%d---五分制成绩---C\n", score);
	}
	else if (score >= 60 && score < 70) {
		printf("%d---五分制成绩---D\n", score);
	}
	else if (score >= 0 && score < 60) {
		printf("%d---五分制成绩---E\n", score);
	}
	else {
		printf("输入有误！！！\n");
	}

}