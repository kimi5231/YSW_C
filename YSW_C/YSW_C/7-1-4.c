#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan, n = 9;

	printf("���� �Է�: "), scanf("%d", &dan);

	while (n != 0)
	{
		printf("%dx%d=%d\n", dan, n, dan * n);
		n--;
	}
	return 0;
}