#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("�� ���� �Է�: "), scanf("%d %d", &n1, &n2);
	printf("��: %d, ������: %d\n", n1/n2, n1%n2);
	return 0;
}