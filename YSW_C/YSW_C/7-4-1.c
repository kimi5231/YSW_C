#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, sum = 0;

	printf("ù ��° ���� �Է�: "), scanf("%d", &n1);
	printf("�� ��° ���� �Է�: "), scanf("%d", &n2);

	for (int i = n1; i <= n2; i++)
		sum += i;
	printf("��: %d\n", sum);

	return 0;
}