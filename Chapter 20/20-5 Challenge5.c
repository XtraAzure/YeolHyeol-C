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
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &n);
		ai = rand() % 3 + 1;
		switch (n)
		{
		case 1:
			switch (ai)
			{
			case 1:
				printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
				draw++;
				break;
			case 2:
				printf("당신은 바위 선택, 컴퓨터는 가위 선택, 당신이 이겼습니다.\n");
				win++;
				break;
			case 3:
				printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다.\n");
				lose = true;
				break;
			}
			break;
		case 2:
			switch (ai)
			{
			case 1:
				printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다!\n");
				lose = true;
				break;
			case 2:
				printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
				draw++;
				break;
			case 3:
				printf("당신은 가위 선택, 컴퓨터는 보 선택, 당신이 이겼습니다!\n");
				win++;
				break;
			}
			break;
		case 3:
			switch (ai)
			{
			case 1:
				printf("당신은 보 선택, 컴퓨터는 바위 선택, 당신이 이겼습니다!\n");
				win++;
				break;
			case 2:
				printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다!\n");
				lose = true;
				break;
			case 3:
				printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
				draw++;
				break;
			}
			break;
		default:
			printf("1-3 사이 숫자만 입력하세요.\n");
			break;
		}
	}

	printf("게임의 결과: %d승, %d무\n", win, draw);
	system("pause");
	return 0;
}