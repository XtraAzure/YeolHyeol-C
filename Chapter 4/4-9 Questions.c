#include <stdio.h>

void QuestionOne()
{
	int num;
	scanf("%d", &num);
	num = ~num;
	num = num + 1;
	printf("%d\n", num);
}

void QuestionTwo()
{
	int num = 3;
	num = num << 3;
	num = num >> 2;
	printf("%d \n", num);
}

int main()
{
	QuestionOne();
	QuestionTwo();

	return 0;
}