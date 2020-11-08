#include<stdio.h>
#include<math.h>
#define EPS 1e-1//有精度 若是次数太低的话就不会输出等腰直角三角形 
//eg：若1e-6=0.00001的话，（10，10，14）200减去14的平方等于0.0604  是个大于0的实数，
//即 fabs(a*a+b*b-c*c)>EPS 这就不符合等腰三角形了
int main() {
	float a, b, c;
	int flag = 1;
	printf("请输入三角形的三条边a，b，c：");
	scanf_s("%f,%f,%f",&a,&b,&c);
	if (a + b > c && b + c > a && a + c > b) {

		if (fabs(a - b) <= EPS && fabs(a - c) <= EPS && fabs(b - c) <= EPS) {
			printf("等边");
			flag = 0;
		}else if(fabs(a - b) <= EPS || fabs(a - c) <= EPS || fabs(b - c) <= EPS) {
			printf("等腰");
			flag = 0;
		}
		if (fabs(a*a+b*b-c*c)<=EPS||fabs(a*a+c*c-b*b)<=EPS||fabs(b*b+c*c-a*a)<=EPS) {
			printf("直角");
			flag = 0;
		}
		if(flag) {
			printf("一般");
		}
		printf("三角形\n");
	}
	else {
		printf("不是三角形\n");
	}
}