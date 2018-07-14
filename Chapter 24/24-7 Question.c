#include <stdio.h>

void QuestionOne()
{
	FILE *ms = fopen("mystory.txt", "wt");
	fputs("#ÀÌ¸§: À±¼º¿ì \n", ms);
	fputs("#ÁÖ¹Î¹øÈ£: 900208-1012589",ms);
	fputs("#ÀüÈ­¹øÈ£: 010-1111-2222",ms);
	fclose(ms);
}

void QuestionTwo()
{
	FILE *ms = fopen("mystory.txt", "at");
	fputs("#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ°",ms);
	fputs("#Ãë¹Ì: Ãà±¸",ms);
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