#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[20];

	scanf("%s", input);

	if (input[0] == input[strlen(input) - 1])
	{
		printf("ȸ�� �Դϴ�.\n");
	}
	else
	{
		printf("ȸ���� �ƴմϴ�.\n");
	}

	system("pause");
	return 0;
}