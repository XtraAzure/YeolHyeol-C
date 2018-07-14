#include <stdio.h>

void QuestionOne()
{
	int i;
	for (i = 1; 100 > i; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d\n", i);
	}
}

void QuestionTwo()
{
	int a, b;
	int result;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		result = a - b;
		if (result < 0)
			result *= -1;
	}
	else
	{
		result = b - a;
		if (result < 0)
			result *= -1;
	}
	printf("%d\n", result);
		
}

void QuestionThree()
{
	int a, b, c;
	int avg;
	scanf("%d %d %d", &a, &b, &c);
	avg = (a + b + c) / 3;
	if (avg >= 90)
		printf("A\n");
	else if (avg >= 80)
		printf("B\n");
	else if (avg >= 70)
		printf("C\n");
	else if (avg >= 50)
		printf("D\n");
	else
		printf("F\n");
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}