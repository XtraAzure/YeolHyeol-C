#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void QuestionOne()
{
	char word[100];
	int i;
	int len = 0;
	scanf("%s", word);

	while (word[len] != 0)
		len++;

	printf("%d \n", len);
}

void QuestionTwo()
{
	char word[100];
	int i, temp;
	int len = 0;
	scanf("%s", word);

	while (word[len] != 0)
		len++;

	for (i = 0; len > i; i++)
	{
		temp = word[i];
		word[i] = word[(len - i) - 1];
		word[(len - i) - 1] = temp;
	}

	printf("%s \n", word);
	return 0;
}

void QuestionThree()
{
	char word[100];
	int len = 0, i;
	char max = 0;

	scanf("%s", word);

	while (word[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (max < word[i])
			max = word[i];
	}

	printf("%c \n", max);
	return 0;
}

int main()
{
	QuestionOne();
	QuestionTwo();
	QuestionThree();

	return 0;
}