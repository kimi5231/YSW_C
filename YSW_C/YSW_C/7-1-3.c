#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, sum = 0;

	while (1)
	{
		printf("���� �Է�: "), scanf("%d", &n);
		if (n == 0)
		{
			printf("��� ������ ��: %d\n", sum);
			return 0;
		}
		sum += n;
	}
}