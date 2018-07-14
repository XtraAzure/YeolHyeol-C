#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ConvToInt(char c)
{
	static int diff = 1 - '1';
	return c + diff;
}

int GetSpaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1; // ���� ���ڰ� �������� �ʴ� ����� ��ȯ
}

int CompName(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2) // �̸��� ���̰� �ٸ��� ���� �ٸ� �̸�!
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]); // str1[idx1+1]�� ���̰� ����� ��ġ
	ag2 = atoi(&str2[idx2 + 1]); // str2[idx2+1]�� ���̰� ����� ��ġ

	if (ag1 == ag2)
		return 1;
	else
		return 0;
}

void QuestionOne()
{
	char str[50];
	int len, i;
	int sum = 0;

	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i] <= '9')
			sum += ConvToInt(str[i]);
	}
	printf("������ �� ��: %d \n", sum);
}

void QuestionTwo()
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("ù ��° ���ڿ� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; // \n ������ ����

	printf("�� ��° ���ڿ� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0; // \n ������ ����

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("������ ���: %s \n", str3);
}

void QuestionThree()
{
	char str1[20];
	char str2[20];

	printf("ù ��° ��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�� ��° ��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
		puts("�̸��� �����մϴ�!");
	else
		puts("�̸��� �������� �ʽ��ϴ�!");

	if (CompAge(str1, str2))
		puts("���̰� �����ϴ�!");
	else
		puts("���̰� ���� �ʽ��ϴ�!");

	return 0;
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}