#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a - b);
	printf("%d\n", a*b);
}

void QuestionTwo()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d\n", num1*num2 + num3);
}

void QuestionThree()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", num*num);
}

void QuestionFour()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a / b, a%b);
}

void QuestionFive()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d\n", (num1 - num2)*(num2 + num3)*(num3%num1));
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();
	QuestionFour();
	QuestionFive();

	return 0;
}