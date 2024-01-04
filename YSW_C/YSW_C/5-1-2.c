#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double n1, n2;

	printf("두 개의 실수 입력: "), scanf("%lf %lf", &n1, &n2);
	printf("%f + %f = %f\n", n1, n2, n1 + n2);
	printf("%f - %f = %f\n", n1, n2, n1 - n2);
	printf("%f * %f = %f\n", n1, n2, n1 * n2);
	printf("%f / %f = %f\n", n1, n2, n1 / n2);
	return 0;
}