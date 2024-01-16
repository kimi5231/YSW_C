#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, sum = 0;

	while (1)
	{
		printf("정수 입력: "), scanf("%d", &n);
		if (n == 0)
		{
			printf("모든 정수의 합: %d\n", sum);
			return 0;
		}
		sum += n;
	}
}