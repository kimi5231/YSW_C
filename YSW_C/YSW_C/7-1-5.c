#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2 = 0, n;
	double sum = 0;

	printf("입력할 정수의 수 입력: "), scanf("%d", &n1);

	while (n2 < n1)
	{
		printf("정수 입력: "), scanf("%d", &n);
		sum += n;
		n2++;
	}
	printf("평균: %f\n", sum/n1);
	return 0;
}