#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է�: "), scanf("%d", &n);
	printf("%d\n", ~n + 1);
	return 0;
}