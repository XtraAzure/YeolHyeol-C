#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int x1, x2;
	int y1, y2;
	int result;
	printf("�� ����� x, y ��ǥ �Է�: ");
	scanf("%d %d", &x1, &y1);
	printf("�� ����� x,y ��ǥ �Է�: ");
	scanf("%d %d", &x2, &y2);
	result = (x2 - x1) * (y2 - y1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�\n", result);
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