#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2 = 0;

	printf("���� ���� �Է�: "), scanf("%d", &n1);
	while (n2 < n1)
	{
		printf("Hello world!\n");
		n2++;
	}
	return 0;
}