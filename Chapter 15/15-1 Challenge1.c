#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void OddOnly(int *input)
{
	int i;
	int cnt = 0;
	int commaNum = 0;
	printf("Ȧ�� ���: ");

	for (i = 0; 10 > i; i++)
	{
		if (input[i] % 2 != 0)
		{
			cnt++;
		}
	}

	for (i = 0; 10 > i; i++)
	{
		if (input[i] % 2 != 0)
		{
			printf("%d", input[i]);
			commaNum++;
			if (commaNum != cnt)
				printf(", ");
		}
	}
	printf("\n");
}

void EvenOnly(int *input)
{
	int i;
	int cnt = 0;
	int commaNum = 0;
	printf("¦�� ���: ");

	for (i = 0; 10 > i; i++)
	{
		if (input[i] % 2 == 0)
		{
			cnt++;
		}
	}

	for (i = 0; 10 > i; i++)
	{
		if (input[i] % 2 == 0)
		{
			printf("%d", input[i]);
			commaNum++;
			if (commaNum != cnt)
				printf(", ");
		}
	}
	printf("\n");
}

int main()
{
	int input[10];
	int i;
	
	for (i = 0; 10 > i; i++)
	{
		printf("�Է� : ");
		scanf("%d", &input[i]);
	}
	
	OddOnly(input);
	EvenOnly(input);

	system("pause");
	return 0;
}