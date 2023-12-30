#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 입력: "), scanf("%d", &n);
	printf("%d의 제곱: %d\n", n, n*n);
	return 0;
}