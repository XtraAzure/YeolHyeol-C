#include <stdio.h>

void QuestionOne()
{
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;
	int i;

	for (i = 0; 5 > i; i++)
	{
		*ptr += 2;
		ptr++;
	}

	for (i = 0; 5 > i; i++)
		printf("%d ", arr[i]);
}

void QuestionTwo()
{
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;
	int i;

	for (i = 0; 5 > i; i++)
	{
		*(ptr + i) += 2;
		ptr++;
	}

	for (i = 0; 5 > i; i++)
		printf("%d ", arr[i]);
}

void QuestionThree()
{
	int arr[5] = { 1,2,3,4,5 };
	int *ptr = &arr[4];
	int total = 0;
	int i;

	for (i = 0; 5 > i; i++)
		total += *(ptr--);

	printf("%d\n", total);
}

void QuestionFour()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int *fptr = &arr[0];
	int *bptr = &arr[5];
	int i, temp;

	for (i = 0; 3 > i; i++)
	{
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr += 1;
		bptr -= 1;
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();
	QuestionFour();

	return 0;
}