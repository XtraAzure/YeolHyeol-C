#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
	int player[3];
	int i,j;
	int ai[3];
	int cnt = 0;
	int strike = 0, ball = 0;
	srand((int)time(NULL));
	bool win = false;

	printf("Start Game!\n");

	while (win != true)
	{
		strike = 0, ball = 0;
		printf("3개의 숫자 선택: ");

		for (i = 0; 3 > i; i++)
		{
			scanf("%d", &player[i]);
		}
		
		for (i = 0; 3 > i; i++)
		{
			ai[i] = rand()%9;
		}
		cnt++;

		for (i = 0; 3 > i; i++)
		{
			if (player[i] == ai[i])
				strike++;
		}

		for ( i = 0; 3 > i; i++)
			for (j = 0; 3 > j; j++)
			{
				if (player[i] == ai[j])
					ball++;
			}

		ball -= strike;

		printf("%d번째 도전 결과: %dstrike, %dball!\n", strike, ball);
		if (strike == 3)
			win = true;
	}
	
	printf("Game Over!\n");

	return 0;
}