#include<stdio.h>
main() {
	float r,V,S;
	const float PI = 3.14;
	printf("«Î ‰»Î«Úµƒ∞Îæ∂r£∫");
	scanf_s("%f",&r);
	V = (4 * PI * r * r * r) / 3;
	S = 4 * PI * r * r;
	printf("V=%f\n",V);
	printf("S=%f\n", S);
}