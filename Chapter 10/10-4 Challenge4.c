#define _CRT_SECURE_NO_WARNINS
#include <stdio.h>

int main()
{
	int allowance;
	int breadCost = 500;
	int shrimpCost = 700;
	int cokeCost = 400;
	int i, j, k;
	scanf("%d", &allowance);

	for (i = 1; i < allowance / breadCost; i++)
	{
		for (j = 1; j < allowance / shrimpCost; j++)
		{
			for (k = 1; k < allowance / cokeCost; k++)
			{
				if (allowance == breadCost * i + shrimpCost * j + cokeCost * k)
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i, j, k);
				}
			}
		}
	}

	return 0;
}