#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, num, sum = 0;

	while (n < 5)
	{
		printf("정수 입력: "), scanf("%d", &num);
		while (num >= 1)
		{
			sum += num;
			n++;
			break;
		}
	}
	printf("합: %d\n", sum);
	return 0;
}