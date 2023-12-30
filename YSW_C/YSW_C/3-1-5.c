#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("num1 입력: "), scanf("%d", &num1);
	printf("num2 입력: "), scanf("%d", &num2);
	printf("num3 입력: "), scanf("%d", &num3);
	printf("(%d-%d)x(%d+%d)x(%d%%%d) = %d\n", num1, num2, num2, num3, num3, num1, (num1-num2)*(num2+num3)*(num3%num1));
	return 0;
}