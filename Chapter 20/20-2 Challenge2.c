#include <stdio.h>


int  main()
{
	static int max;
	int arr[100][100]; // Maximum range for x and y: 100
	int i, input, tempMax;
	int x = 0, y = -1, d = 1, cnt = 1;

	printf("배열 숫자를 입력하세요: ");
	scanf_s("%d", &input);
	max = input;

	tempMax = max;
	while (0 <= tempMax)
	{
		for (i = 0; i<tempMax; i++) // Row insertion
		{
			y = y + d;
			arr[x][y] = cnt;
			cnt++;
		}
		tempMax--;
		for (i = 0; i<tempMax; i++)// Column insertion
		{
			x = x + d;
			arr[x][y] = cnt;
			cnt++;
		}

		d = d * -1; // Change direction
	}

	for (x = 0; x<max; x++)
	{
		for (y = 0; y<max; y++)
		{
			printf("%4d", arr[x][y]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

// Source: http://gompangs.tistory.com/24