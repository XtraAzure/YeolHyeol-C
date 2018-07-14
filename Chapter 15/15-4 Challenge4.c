#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[20];

	scanf("%s", input);

	if (input[0] == input[strlen(input) - 1])
	{
		printf("회문 입니다.\n");
	}
	else
	{
		printf("회문이 아닙니다.\n");
	}

	system("pause");
	return 0;
}