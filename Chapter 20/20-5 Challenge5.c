#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void Intro()
{
}

int main()
{
	int n;
	int ai;
	int win = 0, draw = 0;
	srand((int)time(NULL));
	bool lose = false;
	Intro();

	while (lose != true)
	{
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &n);
		ai = rand() % 3 + 1;
		switch (n)
		{
		case 1:
			switch (ai)
			{
			case 1:
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				draw++;
				break;
			case 2:
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, ����� �̰���ϴ�.\n");
				win++;
				break;
			case 3:
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, ����� �����ϴ�.\n");
				lose = true;
				break;
			}
			break;
		case 2:
			switch (ai)
			{
			case 1:
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�!\n");
				lose = true;
				break;
			case 2:
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
				draw++;
				break;
			case 3:
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, ����� �̰���ϴ�!\n");
				win++;
				break;
			}
			break;
		case 3:
			switch (ai)
			{
			case 1:
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, ����� �̰���ϴ�!\n");
				win++;
				break;
			case 2:
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�!\n");
				lose = true;
				break;
			case 3:
				printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�!\n");
				draw++;
				break;
			}
			break;
		default:
			printf("1-3 ���� ���ڸ� �Է��ϼ���.\n");
			break;
		}
	}

	printf("������ ���: %d��, %d��\n", win, draw);
	system("pause");
	return 0;
}