#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int sum = 0;
	int n = 0;
	int i = 0;

	while (i < 5)
	{
		while (n <= 0)
		{
			scanf("%d", &n);
		}
		sum += n;
		n = 0;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}

void QuestionTwo()
{
	int i = 0;
	int j = 0;

	while (i < 5)
	{
		while (j < i)
		{
			printf("o ");
			j++;
		}
		j = 0;
		printf("* \n");
		i++;
	}
	return 0;
}

int main()
{
	QuestionOne();
	QuestionTwo();

	return 0;
}