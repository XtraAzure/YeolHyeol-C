#include <stdio.h>

void QuestionOne()
{
	FILE *ms = fopen("mystory.txt", "wt");
	fputs("#�̸�: ������ \n", ms);
	fputs("#�ֹι�ȣ: 900208-1012589",ms);
	fputs("#��ȭ��ȣ: 010-1111-2222",ms);
	fclose(ms);
}

void QuestionTwo()
{
	FILE *ms = fopen("mystory.txt", "at");
	fputs("#��ܸԴ� ����: «��, ������",ms);
	fputs("#���: �౸",ms);
	fclose(ms);
}

void QuestionThree()
{
	char str[100];
	FILE *fp = fopen("mystory.txt", "rt");

	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);
	fclose(fp);
}

int main()
{
	QuestionOne();
	QuestonTwo();
	QuestionThree();

	return 0;
}