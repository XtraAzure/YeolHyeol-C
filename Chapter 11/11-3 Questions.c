#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	int arr[5];
	int i, j;
	int min, temp;
	int sum = 0;

	for (i = 0; 5 > i; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; 5 > i; i++)
	{
		sum += arr[i];
	}

	for (i = 0; 5 > i; i++)
	{
		for (j = i; 5 > j; j++)
		{
			if (arr[i] > arr[j])
			{
				min = arr[j];

				temp = arr[i];
				arr[i] = min;
				arr[j] = temp;
			}
		}
	}

	printf("Max: %d\n", arr[4]);
	printf("Min: %d\n", arr[0]);
	printf("Sum: %d\n", sum);
}

void QuestionTwo()
{
	char str[] = { 'G', 'o','o','d',' ', 't','i','m','e' };
	int arrLen = sizeof(str) / sizeof(char);
	int i;

	for (i = 0; i < arrLen; i++)
		printf("%c", str[i]);
	printf("\n");
}

int main()
{
	QuestionOne();
	QuestionTwo();

	return 0;
}