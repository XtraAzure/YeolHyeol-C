#include <stdio.h>

int main()
{
	int init = 2;
	int cnt = 1;
	int limit = 0;
	int i;
	while (cnt != 11)
	{
		for (i = 1; init > i; i++)
		{
			if (init % i == 0)
				limit++;
		}
		if (limit == 1)
		{
			printf("%d ", init);
			cnt++;
		}
		limit = 0;
		init++;
	}
	
	return 0;
}