#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int n;
	int i = 0;

	scanf("%d", &n);
	//for (i = 0; n > i; i++)
		//printf("Hello World!\n");
	while (i < n)
	{
		printf("Hello World!\n");
		i++;
	}
}

void QuestionTwo()
{
	int n;
	int i = 1;

	scanf("%d", &n);
	while (i != n + 1)
	{
		printf("%d\n", 3 * i);
		i++;
	}
}

void QuestionThree()
{
	int n;
	int sum = 0;

	while (n != 0)
	{
		if (n == 0)
			break;
		scanf("%d", &n);
		sum += n;
	}
	printf("%d\n", sum);
}

void QuestionFour()
{
	int n;
	int i = 9;
	
	scanf("%d", &n);
	
	while (i > 0)
	{
		printf("%dx%d = %d\n", n, i, n*i);
		i--;
	}
}

void QuestionFive()
{
	int n;
	int sum = 0;
	int a;
	int b;
	scanf("%d", &n);
	b = n;
	while (n > 0)
	{
		scanf("%d", &a);
		sum += a;
		n--;
	}
	printf("%d\n", sum / b);
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();
	QuestionFour();

	return 0;
}