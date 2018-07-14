#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int x1, x2;
	int y1, y2;
	int result;
	printf("좌 상단의 x, y 좌표 입력: ");
	scanf("%d %d", &x1, &y1);
	printf("우 상단의 x,y 좌표 입력: ");
	scanf("%d %d", &x2, &y2);
	result = (x2 - x1) * (y2 - y1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다\n", result);
}

void QuestionTwo()
{
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("%f\n", num1 + num2);
	printf("%f\n", num1 - num2);
	printf("%f\n", num1 * num2);
	printf("%f\n", num1 / num2);
}

void QuestionThree()
{
	int num;
	scanf("%d", &num);
	printf("%c\n", num);
}

void QuestionFour()
{
	char ch;
	scanf("%c", &ch);
	printf("%d\n", ch);
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();
	QuestionFour();

	return 0;
}