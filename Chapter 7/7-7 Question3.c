#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int total = 0, num = 1;

	while (num != 0)
	{
		scanf("%d", &num);
		total += num;
	}
	printf("%d \n", total);
}

void QuestionTwo()
{
	int total = 0, num = 0;
	do {
		total += num;
		num = num + 2;
	} while (num <= 100);

	printf("%d \n", total);
}

void QuestionThree()
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%dx%d=%d \n", cur, is, cur*is);
			is++;
		} while (is < 10);
		cur++;
		printf("\n");
	} while (cur < 10);
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}