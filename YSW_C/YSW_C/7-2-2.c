#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1 = 0, n2 = 5;

	while (n1 < 5)
	{
		while (n2 < 5)
		{
			printf("o ");
			n2++;
		}
		n1++;
		n2 -= n1;
		printf("*\n");
	}
	return 0;
}