#include<stdio.h>
#include<math.h>
main() {
	float a, b, c, s, area;
	printf("«Î ‰»Îa£¨b£¨c£∫");
	scanf_s("%f,%f,%f", &a, &b, &c);
	s = (a + b + c) / 2;
	area = (float)sqrt(s * (s - a) * (s - b) * (s - c));
	printf("area=%f\n", area);
}