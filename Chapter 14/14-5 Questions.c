#include <stdio.h>

int SquareByValue(int num)
{
	return num * num;
}

void SquareByReference(int *ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

void QuestionOne()
{
	int num = 10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
}

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}

void QuestionTwo()
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
}

int main()
{
	QuesetionOne();

	return 0;
}