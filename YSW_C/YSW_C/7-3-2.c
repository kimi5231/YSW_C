#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, sum = 0;

	do
	{
		num++;
		if(num % 2 == 0)
			sum += num;
	} while (num < 100);
	printf("гу: %d\n", sum);
	return 0;
}