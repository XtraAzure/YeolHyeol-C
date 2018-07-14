#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int i,j;
	for (i = 1; 10 > i; i++)
	{
		if (i % 2 != 0)
			continue;
		for (j = 1; 10 > j; j++)
		{
			printf("%dx%d =%d\n", i, j, i*j);

		}
	}
}

void QuestionTwo()
{
	int A, Z;
	int result;
	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A == Z)
				continue;
			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
		}
	}
	return 0;
}

int main()
{
	QuestionOne();

	return 0;
}