#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("두 정수 입력: "), scanf("%d %d", &n1, &n2);
	printf("몫: %d, 나머지: %d\n", n1/n2, n1%n2);
	return 0;
}