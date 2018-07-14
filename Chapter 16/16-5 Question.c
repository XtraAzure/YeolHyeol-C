#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 아래의 배열은 전역으로 선언되었으므로 자동 0으로 ㅊ기화
int record[5][5]; // 학생들의 성적을 저장하기 위한 배열

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

	// 이동
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];

	// 출력
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%2d", arrB[i][j]);
		printf("\n");
	}
	return 0;
}

// 학생별 성적의 입력
void WriteRecord()
{
	int sum; // 학생별 성적 합계
	int i, j;
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d번째 학생의 성적 입력 \n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("과목 %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

// 과목별 서억의 합계 입력
void WriteSumRecord()
{
	int sum = 0; // 과목별 성적 합계
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