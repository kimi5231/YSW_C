#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, num, sum = 0;

	while (n < 5)
	{
		printf("���� �Է�: "), scanf("%d", &num);
		while (num >= 1)
		{
			sum += num;
			n++;
			break;
		}
	}
	printf("��: %d\n", sum);
	return 0;
}