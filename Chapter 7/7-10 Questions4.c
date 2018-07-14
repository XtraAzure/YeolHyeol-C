#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int a, b;
	int sum;
	scanf("%d %d", &a, &b);

	for (sum = 0; a <= b; a++)
		sum += a;
	printf("%d\n", sum);
}

void QuestionTwo()
{
	int num, i;
	int result = 1;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;

	printf("%d! = %d \n", num, result);
	return 0;
}

int main()
{
	QuestionOne();

	return 0;
}