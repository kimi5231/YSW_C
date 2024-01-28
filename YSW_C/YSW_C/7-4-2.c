#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, sum = 1;

	printf("n ют╥б: "), scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum *= i;
	printf("n!: %d\n", sum);

	return 0;
}