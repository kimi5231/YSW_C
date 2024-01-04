#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c;

	printf("문자 입력: "), scanf("%c", &c);
	printf("%d\n", c);
	return 0;
}