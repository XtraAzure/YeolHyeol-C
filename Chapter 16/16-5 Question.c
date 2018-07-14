#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Ʒ��� �迭�� �������� ����Ǿ����Ƿ� �ڵ� 0���� ����ȭ
int record[5][5]; // �л����� ������ �����ϱ� ���� �迭

void QuestionOne()
{
	int i, j;

	int arr1[3][9] = {
		{ 2,4,6,8,10,12,14,16,18 },
	{ 3,6,9,12,15,18,21,24,27 },
	{ 4,8,12,16,20,24,28,32,36 }
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	printf("\n");
}

void QuestionTwo()
{
	int arrA[2][4] = { {1,2,3,4}, {5,6,7,8} };
	int arrB[4][2];
	int i, j;

	// �̵�
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];

	// ���
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%2d", arrB[i][j]);
		printf("\n");
	}
	return 0;
}

// �л��� ������ �Է�
void WriteRecord()
{
	int sum; // �л��� ���� �հ�
	int i, j;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d��° �л��� ���� �Է� \n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("���� %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

// ���� ������ �հ� �Է�
void WriteSumRecord()
{
	int sum = 0; // ���� ���� �հ�
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += record[j][i];
		}
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void ShowAllRecord()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d ", record[i][j]);
		printf("\n");
	}
}

void QuestionThree()
{
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}