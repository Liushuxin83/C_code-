#include<stdio.h>
int main() {
	int score, grade;
	printf("������ٷ��Ƴɼ�score��\n");
	scanf("%d",&score);
	//grade = (score<0)||(score>100)?-1:score / 10;
	/*switch (grade) {
	case 10:
	case 9:printf("%d---����Ƴɼ�---A",score);
		break;
	case 8:printf("%d---����Ƴɼ�---B", score);
		break;
	case 7:printf("%d---����Ƴɼ�---C", score);
		break;
	case 6:printf("%d---����Ƴɼ�---D", score);
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("---����Ƴɼ�---E", grade);
		break;
	default:printf("�������!!!\n");
	}*/
	//if-else��ʽ
	if (score >= 90 && score <= 100) {
		printf("%d---����Ƴɼ�---A\n", score);
	}
	else if (score >= 80 && score < 90) {
		printf("%d---����Ƴɼ�---B\n", score);
	}
	else if (score >= 70 && score < 80) {
		printf("%d---����Ƴɼ�---C\n", score);
	}
	else if (score >= 60 && score < 70) {
		printf("%d---����Ƴɼ�---D\n", score);
	}
	else if (score >= 0 && score < 60) {
		printf("%d---����Ƴɼ�---E\n", score);
	}
	else {
		printf("�������󣡣���\n");
	}

}