#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sec;
	int hr = 0, min = 0;
	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d", &sec);

	if (sec > 3600)
	{
		hr = sec / 3600;
		sec = sec - (3600 * hr);

		if (sec > 60)
		{
			min = sec % 60;
			sec = sec - (60 * min);
		}
		else
		{
			min = 0;
		}

		printf("[h:%d, m:%d, s:%d]", hr, min, sec);
	}
	else if (sec > 60)
	{
		hr = 0;

		if (sec > 60)
		{
			min = sec / 60;
			sec = sec - (60 * min);
		}

		printf("[h:%d, m:%d, s:%d]", hr, min, sec);
	}
	else
	{
		hr = 0;
		min = 0;

		printf("[h:%d, m:%d, s:%d]", hr, min, sec);
	}

	return 0;
}