#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int cnt = 0;
	printf("��� n �Է�: ");
	scanf("%d", &n);

	while (n != 0)
	{
		n = n / 2;
		cnt++;
	}

	printf("������ �����ϴ� k�� �ִ��� %d\n", cnt - 1);

	return 0; 
}