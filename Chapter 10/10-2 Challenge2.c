#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int temp;
	int i, j;

	scanf("%d %d", &a, &b);
	if (a > b)
	{
		temp = a;

		a = b;
		b = temp;
	}

	for (i = a; b >= i; i++)
	{
		for (j = 1; 10 > j; j++)
		{
			printf("%dx%d = %d \n", i, j, i*j);
		}
	}

	return 0;
}
