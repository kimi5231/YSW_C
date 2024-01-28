#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, sum = 0;

	printf("첫 번째 정수 입력: "), scanf("%d", &n1);
	printf("두 번째 정수 입력: "), scanf("%d", &n2);

	for (int i = n1; i <= n2; i++)
		sum += i;
	printf("합: %d\n", sum);

	return 0;
}