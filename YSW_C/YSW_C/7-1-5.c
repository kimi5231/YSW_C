#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2 = 0, n;
	double sum = 0;

	printf("�Է��� ������ �� �Է�: "), scanf("%d", &n1);

	while (n2 < n1)
	{
		printf("���� �Է�: "), scanf("%d", &n);
		sum += n;
		n2++;
	}
	printf("���: %f\n", sum/n1);
	return 0;
}