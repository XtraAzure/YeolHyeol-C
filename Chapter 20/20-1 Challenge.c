#include <stdio.h>

int arrayRotation(int(*array)[4], int size)
{
	int i,j;
	int tempArray[4][4];
	for (i = 0; i < size; i++) // Rotate in right angle 
		for (j = 0; j < size; j++)
			tempArray[j][size - 1 - i] = array[i][j];
	for (i = 0; i < size; i++) // Copy the organized 2D array
		for (j = 0; j < size; j++)
			array[i][j] = tempArray[i][j];

	return 0;
}

void printArray(int(*array)[4], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int array[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	//int array[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int cnt = 3;

	int size = sizeof(array) / sizeof(array[0]);

	printArray(array, size);

	while (cnt != 0)
	{
		arrayRotation(array, size);
		printArray(array, size);
		cnt--;
	}

	system("pause");
	return 0;
}