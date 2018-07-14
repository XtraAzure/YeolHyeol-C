#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void QuestionOne()
{
	int maxlen, len, i;
	char *str;
	printf("���ڿ��� �ִ� ���� �Է�: ");
	scanf("%d", &maxlen);
	getchar(); // \n ������ ����
	str = (char*)malloc(sizeof(char)*(maxlen + 1));

	printf("���ڿ� �Է�: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; // \n ������ ����
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
	int arrlen = 5; // �ʱ� �迭 ����
	int idx = 0; // �迭 �ε���
	int i;
	int * arr = (int *)malloc(sizeof(int)*arrlen);

	while (1)
	{
		printf("���� �Է�: ");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1) // �Է��� ���Ḧ �˻�
			break;

		if (arrlen == idx + 1) // �迭�� Ȯ�� �ʿ伺 �˻�
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