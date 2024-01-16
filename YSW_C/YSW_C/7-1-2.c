#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2 = 1;

	printf("양의 정수 입력: "), scanf("%d", &n1);
	while (n2 <= n1)
	{
		printf("%d\n", 3*n2);
		n2++;
	}
	return 0;
}