#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int min, max;
	int cnt = 1;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		min = b;
	}
	else
		min = a;

	while (cnt != min)
	{
		if (a % cnt == 0 && b % cnt == 0)
			max = cnt;
		cnt++;
	}

	printf("�� ���� �ִ�����: %d\n", max);

	return 0;
}