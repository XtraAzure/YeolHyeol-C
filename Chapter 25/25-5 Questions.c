#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void QuestionOne()
{
	int maxlen, len, i;
	char *str;
	printf("문자열의 최대 길이 입력: ");
	scanf("%d", &maxlen);
	getchar(); // \n 문자의 삭제
	str = (char*)malloc(sizeof(char)*(maxlen + 1));

	printf("문자열 입력: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; // \n 문자의 삭제
	len = strlen(str);

	for (i = len; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
}

void QuestionTwo()
{
	int arrlen = 5; // 초기 배열 길이
	int idx = 0; // 배열 인덱스
	int i;
	int * arr = (int *)malloc(sizeof(int)*arrlen);

	while (1)
	{
		printf("정수 입력: ");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1) // 입력의 종료를 검사
			break;

		if (arrlen == idx + 1) // 배열의 확장 필요성 검사
		{
			arrlen += 3;
			arr = (int *)realloc(arr, sizeof(int)*arrlen);
		}
		idx++;
	}
	for (i = 0; i < idx; i++)
		printf("%d ", arr[i]);
	free(arr);
}

int main()
{
	QuestionOne();
	QuestionTwo();

	return 0;
}